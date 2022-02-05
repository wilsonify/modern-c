
all: clean build/VERSION tests/test-00-encounter test

clean:
	rm -rf build

build/VERSION:
	mkdir -p build &&\
	echo "1.0.0" > build/VERSION

tests/test-00-encounter/test-getting-started: build/VERSION
	cd build &&\
	cmake .. &&\
	make

test: tests/test-00-encounter/test-getting-started
	cd build &&\
	ctest
