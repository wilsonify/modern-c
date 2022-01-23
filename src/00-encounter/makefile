
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections

all: clean build/getting-started

clean:
	rm -rf build

build/VERSION:
	mkdir -p build && echo "1.0.0" > build/VERSION

build/getting-started.o: build/VERSION
	${CC} ${CFLAGS} -c getting-started.c
	mv getting-started.o build

build/getting-started: build/getting-started.o
	cd build && \
	${CC} -o getting-started ${LDFLAGS} getting-started.o ${LDLIBS} 

