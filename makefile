ver_file = echo "1.0.0" > $(1) && date +%Y-%m-%d >> $(1)

all: clean test

clean:
	rm -rf build

external/googletest/CMakeLists.txt:
	git submodule update --init

build/lib/libgtest.a: external/googletest/CMakeLists.txt
	cd external/googletest &&\
	mkdir -p build &&\
	cd build &&\
	cmake -G Ninja .. &&\
	ninja

build/VERSION:
	mkdir -p build &&\
	echo "1.0.0" > build/VERSION

tests/test-00-encounter/test-getting-started: build/VERSION external/googletest/CMakeLists.txt
	cmake -S . -B build -G Ninja &&\
	ninja -C build

test: tests/test-00-encounter/test-getting-started
	cd build &&\
	ctest

build/modern-c-base.txt: build/VERSION
	docker build -t modern-c-base -f Dockerfile-base . && $(call ver_file, $@)

build/modern-c-builder.txt: build/modern-c-base.txt
	docker build -t modern-c-builder -f Dockerfile-builder . && $(call ver_file, $@)

build/modern-c.txt: build/modern-c-builder.txt
	docker build -t modern-c -f Dockerfile . && $(call ver_file, $@)

build/docker/tests/test-00-encounter/test-getting-started: build/modern-c-builder.txt
	docker run --rm --name modern-c-builder -u 1000:1000 -v $(shell pwd):/usr/src/app modern-c-builder:latest make all
