
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections
LDLIBS= -lm -lrt
all: clean \
build/heron_k \
build/rationals \
build/timespec \
build/endianness \
build/crash \
build/test_circular \
build/numberline \
build/mbstrings-main

clean:
	rm -rf build

build/VERSION:
	mkdir -p build && echo "1.0.0" > build/VERSION

build/heron_k.o: build/VERSION
	${CC} ${CFLAGS} -c heron_k.c
	mv heron_k.o build

build/heron_k: build/heron_k.o
	cd build && \
	${CC} -o heron_k ${LDFLAGS} heron_k.o ${LDLIBS} 

build/rationals.o: build/VERSION
	${CC} ${CFLAGS} -c rationals.c 
	mv rationals.o build

build/rationals: build/rationals.o
	cd build && \
	${CC} -o rationals ${LDFLAGS} rationals.o ${LDLIBS}

build/timespec.o: build/VERSION
	${CC} ${CFLAGS} -c timespec.c
	mv timespec.o build

build/timespec: build/timespec.o
	cd build && \
	${CC} -o timespec ${LDFLAGS} timespec.o ${LDLIBS}

build/endianness.o: build/VERSION
	${CC} ${CFLAGS} -c endianness.c
	mv endianness.o build

build/endianness: build/endianness.o
	cd build && \
	${CC} -o endianness ${LDFLAGS} endianness.o ${LDLIBS}

build/crash.o: build/VERSION
	${CC} ${CFLAGS} -c crash.c
	mv crash.o build

build/crash: build/crash.o
	cd build && \
	${CC} -o crash ${LDFLAGS} crash.o ${LDLIBS}

build/circular.o: build/VERSION
	${CC} ${CFLAGS} -c circular.c
	mv circular.o build

build/test_circular.o: build/VERSION
	${CC} ${CFLAGS} -c test_circular.c
	mv test_circular.o build

build/test_circular: build/test_circular.o build/circular.o
	cd build && \
	${CC} -o test_circular ${LDFLAGS} test_circular.o circular.o ${LDLIBS}

build/numberline.o: build/VERSION
	${CC} ${CFLAGS} -c numberline.c
	mv numberline.o build

build/numberline: build/numberline.o
	cd build && \
	${CC} -o numberline ${LDFLAGS} numberline.o ${LDLIBS}

build/mbstrings.o: build/VERSION
	${CC} ${CFLAGS} -c mbstrings.c
	mv mbstrings.o build

build/mbstrings-main.o: build/VERSION 
	${CC} ${CFLAGS} -c mbstrings-main.c
	mv mbstrings-main.o build

build/mbstrings-main: build/mbstrings-main.o build/mbstrings.o
	cd build && \
	${CC} -o mbstrings-main ${LDFLAGS} mbstrings-main.o mbstrings.o
