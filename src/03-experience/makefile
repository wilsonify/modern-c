
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections
LDLIBS= -lm -lrt
all: clean \
build/timespec \
build/macro_trace \
build/va_arg \
build/sequence_point \
build/basic_blocks \
build/B9 \
build/B9-detach


clean:
	rm -rf build

build/VERSION:
	mkdir -p build && echo "1.0.0" > build/VERSION

build/stats.o: build/VERSION
	gcc -c stats.c
	mv stats.o build

build/timespec.o: build/VERSION
	gcc -c timespec.c
	mv timespec.o build
	
build/timespec: build/timespec.o build/stats.o
	cd build && \
	gcc -o timespec ${LDFLAGS} timespec.o stats.o ${LDLIBS}

build/macro_trace.o: build/VERSION
	gcc -c macro_trace.c
	mv macro_trace.o build

build/macro_trace: build/macro_trace.o
	cd build && \
	gcc -o macro_trace ${LDFLAGS} macro_trace.o ${LDLIBS}

build/va_arg.o: build/VERSION
	gcc -c va_arg.c
	mv va_arg.o build

build/va_arg: build/va_arg.o
	cd build && \
	gcc -o va_arg ${LDFLAGS} va_arg.o ${LDLIBS}

build/sequence_point.o: build/VERSION
	gcc -c sequence_point.c
	mv sequence_point.o build

build/sequence_point: build/sequence_point.o
	cd build && \
	gcc -o sequence_point ${LDFLAGS} sequence_point.o ${LDLIBS}

build/sighandler.o: build/VERSION
	gcc -c sighandler.c
	mv sighandler.o build

build/basic_blocks.o: build/VERSION 
	gcc -c basic_blocks.c
	mv basic_blocks.o build

build/basic_blocks: build/basic_blocks.o build/sighandler.o
	cd build && \
	gcc -o basic_blocks ${LDFLAGS} basic_blocks.o sighandler.o ${LDLIBS}

build/termin.o: build/VERSION
	gcc -c termin.c
	mv termin.o build

build/esc.o: build/VERSION
	gcc -c esc.c
	mv esc.o build

build/life.o: build/VERSION 
	gcc -c life.c
	mv life.o build

build/B9.o: build/VERSION
	gcc -c B9.c
	mv B9.o build

build/B9: build/B9.o build/termin.o build/esc.o build/life.o
	cd build && \
	gcc -o B9 ${LDFLAGS} B9.o termin.o esc.o life.o ${LDLIBS}

build/B9-detach.o: build/VERSION
	gcc -c B9-detach.c
	mv B9-detach.o build

build/B9-detach: build/B9-detach.o build/life.o build/termin.o build/esc.o
	cd build && \
	gcc -o B9-detach ${LDFLAGS} B9-detach.o termin.o esc.o life.o ${LDLIBS}	