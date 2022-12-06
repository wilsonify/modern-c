ver_file = echo "1.0.0" > $(1) && date +%Y-%m-%d >> $(1)

all: clean test

clean:
	rm -rf build

build/VERSION.txt:
	mkdir -p build && $(call ver_file, $@)

dist/VERSION.txt:
	mkdir -p dist && $(call ver_file, $@)

external/googletest/CMakeLists.txt:
	git submodule update --init

build/lib/libgtest.a: build/VERSION.txt external/googletest/CMakeLists.txt 
	cd external/googletest &&\
	mkdir -p build &&\
	cd build &&\
	cmake -G Ninja .. &&\
	ninja

build/test-getting-started: build/VERSION.txt external/googletest/CMakeLists.txt
	cmake -S . -B build -G Ninja && ninja -C build

dist/test-getting-started: dist/VERSION.txt build/test-getting-started
	cp build/getting-started dist && \
	cp build/test-* dist && \
	cp build/lib*.so dist && \
	cp build/CTestTestfile.cmake dist

test: dist/test-getting-started
	cd dist && ctest

build/modern-c-examples-Linux.tar.gz: test
	cd build && cpack -C CPackConfig.cmake

build/modern-c-base.txt: build/VERSION.txt
	docker build -t modern-c-base -f Dockerfile-base . && $(call ver_file, $@)

build/modern-c-builder.txt: build/modern-c-base.txt
	docker build -t modern-c-builder -f Dockerfile-builder . && $(call ver_file, $@)

build/modern-c.txt: build/modern-c-builder.txt
	docker build -t modern-c -f Dockerfile . && $(call ver_file, $@)

build/docker/tests/test-00-encounter/test-getting-started: build/modern-c-builder.txt
	docker run --rm --name modern-c-builder -u 1000:1000 -v $(shell pwd):/usr/src/app modern-c-builder:latest make all
