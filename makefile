
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
