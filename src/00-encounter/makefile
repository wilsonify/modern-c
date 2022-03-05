
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections

all: clean build/getting-started build/read-number-main

clean:
	rm -rf build
	rm -rf *.o
	rm -rf *.so

build/VERSION:
	mkdir -p build && echo "1.0.0" > build/VERSION

build/include: build/VERSION
	mkdir -p build/include

build/lib: build/VERSION
	mkdir -p build/lib

build/include/read-number.h: build/include
	cp starter/read-number.h build/include

build/include/starter.h: build/include
	cp starter/starter.h build/include

build/include/starter_expo.h: build/include
	cp starter/starter_expo.h build/include

build/starter.o: build/VERSION
	${CC} -fPIC ${CFLAGS} -c starter/starter.c
	mv starter.o build

build/getting-started.o: build/VERSION
	${CC} ${CFLAGS} -c getting-started.c 
	mv getting-started.o build

build/getting-started: build/getting-started.o build/starter.o
	cd build && \
	${CC} -o getting-started ${LDFLAGS} getting-started.o starter.o ${LDLIBS} 

build/read-number.o: build/VERSION
	${CC} -fPIC -c starter/read-number.c
	mv read-number.o build

build/read-number-main.o: build/VERSION
	${CC} ${CFLAGS} -c read-number-main.c -I starter
	mv read-number-main.o build

build/lib/libstarter.so: build/lib build/starter.o build/read-number.o build/include/read-number.h build/include/starter.h 
	cd build && \
	${CC} -shared -o libstarter.so starter.o read-number.o &&\
	mv libstarter.so lib

build/read-number-main: build/read-number-main.o build/lib/libstarter.so
	cd build && \
	${CC} -o read-number-main ${LDFLAGS} read-number-main.o lib/libstarter.so ${LDFLAGS}