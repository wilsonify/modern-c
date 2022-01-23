
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


build/timespec.o: timespec.c
	gcc -c timespec.c
	mv timespec.c build
	
build/macro_trace.o: macro_trace.h
	gcc -c macro_trace.h
	mv macro_trace.h build
	
build/macro_trace.o: macro_trace.c
	gcc -c macro_trace.c
	mv macro_trace.c build
	
build/generic.o: generic.h
	gcc -c generic.h
	mv generic.h build
	
build/va_arg.o: va_arg.c
	gcc -c va_arg.c
	mv va_arg.c build
	
build/sequence_point.o: sequence_point.c
	gcc -c sequence_point.c
	mv sequence_point.c build
	
build/basic_blocks.o: basic_blocks.c
	gcc -c basic_blocks.c
	mv basic_blocks.c build
	
build/sighandler.o: sighandler.h
	gcc -c sighandler.h
	mv sighandler.h build
	
build/sighandler.o: sighandler.c
	gcc -c sighandler.c
	mv sighandler.c build
	
build/B9.o: B9.c
	gcc -c B9.c
	mv B9.c build
	
build/life.o: life.h
	gcc -c life.h
	mv life.h build
	
build/B9-detach.o: B9-detach.c
	gcc -c B9-detach.c
	mv B9-detach.c build
	