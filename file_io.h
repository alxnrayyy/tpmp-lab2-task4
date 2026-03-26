#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>
#include "pupil.h"

FILE* openFileRead(const char* filename);
FILE* openFileWrite(const char* filename);
void closeFile(FILE* file);
int readPupil(FILE* file, Pupil* p);
void writePupil(FILE* file, Pupil p);

#endif
