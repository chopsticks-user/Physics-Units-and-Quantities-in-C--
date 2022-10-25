# Makefile for C++

COMPILER = g++
VERSION = -std=c++14
ENTRY_NAME = Application

ASM_FLAGS = $(VERSION) -S -fverbose-asm -g
BIN_FLAGS = $(VERSION) -Wall -g

$(ENTRY_NAME): $(ENTRY_NAME).cpp
	mkdir -p build
	rm -f build/$(ENTRY_NAME)
	rm -f build/$(ENTRY_NAME).asm

	$(COMPILER) $(BIN_FLAGS) -o build/$(ENTRY_NAME) $(ENTRY_NAME).cpp
	$(COMPILER) $(ASM_FLAGS) -o build/$(ENTRY_NAME).asm $(ENTRY_NAME).cpp
