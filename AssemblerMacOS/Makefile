FASM = fasm
LINKER = gcc
CC = gcc
CFLAGS += -D__USE_WSL_ANSI_STDIO=1 # Important for MinGW, indifferent for others
CFLAGS += -g -save-temps -masm=intel -Og
LDFLAGS += -g -Og
SUFFIX = .exe
OBJ_DIR = obj
MKDIR_PROJECT = mkdir -p
MAIN_FILE = main
FUNCTION_FILE = solving_equation

all: main

main: $(MAIN_FILE).o $(FUNCTION_FILE)
	$(LINKER) $^.macho64.o -o $@ $(LDFLAGS)

$(FUNCTION_FILE).elf.o: $(FUNCTION_FILE).asm
	$(FASM) $< $@

$(FUNCTION_FILE).macho64.o: $(FUNCTION_FILE).elf.o
	objconv -fmacho64 -ar:start:_start -nu $< $@

$(FUNCTION_FILE): $(FUNCTION_FILE).macho64.o
	ld -arch x86_64 -macosx_version_min 10.6 -o $@ $<

$(MAIN_FILE).o: $(MAIN_FILE).c
	$(CC) -c $< -o $@ $(CFLAGS)

PHONY: clean

clean:
	rm *.o *.bc *.i *.s $(FUNCTION_FILE)
