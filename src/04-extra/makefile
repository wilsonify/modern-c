
CC = gcc
STD = -std=gnu17
WAR = -Wall
OPT = -O3 -march=native -fdata-sections -ffunction-sections
CFLAGS = ${OPT} ${WAR} ${STD}
LDFLAGS = -Wl,--gc-sections
LDLIBS= -lm -lrt
all: clean \
build/anonymous_function \
build/cat \
build/extern \
build/heron-expanded \
build/lifetime \
build/locale \
build/shadow \
build/strcpy \
build/tendots \
build/tgstring_test \
build/trampoline \
build/terran

clean:
	rm -rf build

build/VERSION:
	mkdir -p build && echo "1.0.0" > build/VERSION

build/anonymous_function.o: build/VERSION
	gcc -c anonymous_function.c
	mv anonymous_function.o build

build/anonymous_function: build/anonymous_function.o
	cd build && \
	gcc -o anonymous_function ${LDFLAGS} anonymous_function.o ${LDLIBS}

build/cat.o: build/VERSION
	gcc -c cat.c
	mv cat.o build

build/cat: build/cat.o
	cd build && \
	gcc -o cat ${LDFLAGS} cat.o ${LDLIBS}

build/extern.o: build/VERSION
	gcc -c extern.c
	mv extern.o build

build/extern: build/extern.o
	cd build && \
	gcc -o extern ${LDFLAGS} extern.o ${LDLIBS}

build/heron-expanded.o: build/VERSION
	gcc -c heron-expanded.c
	mv heron-expanded.o build

build/heron-expanded: build/heron-expanded.o
	cd build && \
	gcc -o heron-expanded ${LDFLAGS} heron-expanded.o ${LDLIBS}

build/lifetime.o: build/VERSION
	gcc -c lifetime.c
	mv lifetime.o build

build/lifetime: build/lifetime.o
	cd build && \
	gcc -o lifetime ${LDFLAGS} lifetime.o ${LDLIBS}

build/locale.o: build/VERSION
	gcc -c locale.c
	mv locale.o build	

build/locale: build/locale.o
	cd build && \
	gcc -o locale ${LDFLAGS} locale.o ${LDLIBS}

build/shadow.o: build/VERSION
	gcc -c shadow.c
	mv shadow.o build

build/shadow: build/shadow.o
	cd build && \
	gcc -o shadow ${LDFLAGS} shadow.o ${LDLIBS}

build/strcpy.o: build/VERSION
	gcc -c strcpy.c
	mv strcpy.o build

build/strcpy: build/strcpy.o
	cd build && \
	gcc -o strcpy ${LDFLAGS} strcpy.o ${LDLIBS}
	
build/tendots.o: build/VERSION
	gcc -c tendots.c
	mv tendots.o build

build/tendots: build/tendots.o
	cd build && \
	gcc -o tendots ${LDFLAGS} tendots.o ${LDLIBS}

build/tgstring_test.o: build/VERSION
	gcc -c tgstring_test.c
	mv tgstring_test.o build

build/tgstring_test: build/tgstring_test.o
	cd build && \
	gcc -o tgstring_test ${LDFLAGS} tgstring_test.o ${LDLIBS}

build/trampoline.o: build/VERSION
	gcc -c trampoline.c
	mv trampoline.o build

build/trampoline: build/trampoline.o
	cd build && \
	gcc -o trampoline ${LDFLAGS} trampoline.o ${LDLIBS}

build/terran.o: build/VERSION
	gcc -c terran.c -I../../external/p99/p99
	mv terran.o build

build/terran: build/terran.o
	cd build && \
	gcc -o terran ${LDFLAGS} terran.o ${LDLIBS}