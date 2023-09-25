#pragma once
#ifndef debug_h
#define debug_h

#include <stdio.h>

#include "chunk.h"

void disassembleChunk(FILE* ferr, Chunk* chunk, const char* name);
int disassembleInstruction(FILE* ferr, Chunk* chunk, int offset);

#endif
