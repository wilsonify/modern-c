
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections

all: clean build/heron

clean:
	rm -rf build

build/VERSION:
	mkdir -p build && echo "1.0.0" > build/VERSION

build/heron.o: build/VERSION
	${CC} ${CFLAGS} -c heron.c
	mv heron.o build

build/heron: build/heron.o
	cd build && \
	${CC} -o heron ${LDFLAGS} heron.o ${LDLIBS} 


test: build/heron
	cd build && ./heron 0.07 5 6E+23
#1heron: a=7.00000e-02, x=1.42857e+01, a*x=0.999999999996
#2heron: a=5.00000e+00, x=2.00000e-01, a*x=0.999999999767
#3heron: a=6.00000e+23, x=1.66667e-24, a*x=0.999999997028


heron_k.c
rationals.h
rationals.c
timespec.c
endianness.c
crash.c
circular.h
circular.c
numberline.c
mbstring-main.c
mbstrings.h
mbstrings.c
