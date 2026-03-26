#ifndef FILE_IO_H
#define FILE_IO_H

#include "pupil.h"

void write_initial_data(const char* filename);
int read_pupils(const char* filename, Pupil* pupils);
void print_file_content(const char* filename);

#endif
