
all: clean build/VERSION tests/test-00-encounter test

clean:
	rm -rf build

external/googletest/CMakeLists.txt:
	git submodule update --init

build/VERSION:
	mkdir -p build &&\
	echo "1.0.0" > build/VERSION

tests/test-00-encounter/test-getting-started: build/VERSION external/googletest/CMakeLists.txt
	cd build &&\
	cmake -G Ninja .. &&\
	ninja

test: tests/test-00-encounter/test-getting-started
	cd build &&\
	ctest
