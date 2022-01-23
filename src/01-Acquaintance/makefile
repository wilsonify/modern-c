
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections

all: clean \
build/heron \
build/yday \
build/euclid \
build/fibonacci \
build/fibonacciCache \
build/fibonacci2 \
build/fibonacci3 \
build/fibonacci4 \
build/fibonacci5 \
build/fibonacci6 \
build/strtoul

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

test/heron: build/heron
	cd build && ./heron 0.07 5 6E+23
#1heron: a=7.00000e-02, x=1.42857e+01, a*x=0.999999999996
#2heron: a=5.00000e+00, x=2.00000e-01, a*x=0.999999999767
#3heron: a=6.00000e+23, x=1.66667e-24, a*x=0.999999997028


build/yday.o: build/VERSION
	${CC} ${CFLAGS} -c yday.c
	mv yday.o build

build/yday: build/yday.o
	cd build && \
	${CC} -o yday ${LDFLAGS} yday.o ${LDLIBS} 


build/euclid.o: build/VERSION
	${CC} ${CFLAGS} -c euclid.c
	mv euclid.o build

build/euclid: build/euclid.o
	cd build && \
	${CC} -o euclid ${LDFLAGS} euclid.o ${LDLIBS}

build/fibonacci.o: build/VERSION
	${CC} ${CFLAGS} -c fibonacci.c
	mv fibonacci.o build

build/fibonacci: build/fibonacci.o
	cd build && \
	${CC} -o fibonacci ${LDFLAGS} fibonacci.o ${LDLIBS}

build/fibonacciCache.o: build/VERSION
	pwd
	${CC} ${CFLAGS} -c fibonacciCache.c
	mv fibonacciCache.o build

build/fibonacciCache: build/fibonacciCache.o
	cd build && \
	${CC} -o fibonacciCache ${LDFLAGS} fibonacciCache.o ${LDLIBS}	
	
build/fibonacci2.o: build/VERSION
	${CC} ${CFLAGS} -c fibonacci2.c
	mv fibonacci2.o build
	
build/fibonacci2: build/fibonacci2.o
	cd build && \
	${CC} -o fibonacci2 ${LDFLAGS} fibonacci2.o ${LDLIBS}

build/fibonacci3.o: build/VERSION
	${CC} ${CFLAGS} -c fibonacci3.c
	mv fibonacci3.o build
	
build/fibonacci3: build/fibonacci3.o
	cd build && \
	${CC} -o fibonacci3 ${LDFLAGS} fibonacci3.o ${LDLIBS}

build/fibonacci4.o: build/VERSION
	${CC} ${CFLAGS} -c fibonacci4.c
	mv fibonacci4.o build
	
build/fibonacci4: build/fibonacci4.o
	cd build && \
	${CC} -o fibonacci4 ${LDFLAGS} fibonacci4.o ${LDLIBS}

build/fibonacci5.o: build/VERSION
	${CC} ${CFLAGS} -c fibonacci5.c
	mv fibonacci5.o build
	
build/fibonacci5: build/fibonacci5.o
	cd build && \
	${CC} -o fibonacci5 ${LDFLAGS} fibonacci5.o ${LDLIBS}

build/fibonacci6.o: build/VERSION
	${CC} ${CFLAGS} -c fibonacci6.c
	mv fibonacci6.o build
	
build/fibonacci6: build/fibonacci6.o
	cd build && \
	${CC} -o fibonacci6 ${LDFLAGS} fibonacci6.o ${LDLIBS}

build/strtoul.o: build/VERSION
	${CC} ${CFLAGS} -c strtoul.c
	mv strtoul.o build

build/strtoul: build/strtoul.o
	cd build && \
	${CC} -o strtoul ${LDFLAGS} strtoul.o ${LDLIBS}
