#include "file_io.h"
#include <stdio.h>

FILE* openFileRead(const char* filename) {
    FILE* f = fopen(filename, "r");
    if (!f) printf("Ошибка: не удалось открыть %s\n", filename);
    return f;
}

FILE* openFileWrite(const char* filename) {
    FILE* f = fopen(filename, "w");
    if (!f) printf("Ошибка: не удалось создать %s\n", filename);
    return f;
}

void closeFile(FILE* f) {
    if (f) fclose(f);
}

int readPupil(FILE* f, Pupil* p) {
    if (!f || !p) return 0;
    return fscanf(f, "%49s %49s %49s %9s %29s %d %d %d %d %d %19s %9s %29s 
%29s %29s %29s %49s %9s %9s %49s %d",
           p->lastName, p->firstName, p->middleName,
           p->gender, p->nationality,
           &p->height, &p->weight,
           &p->birthYear, &p->birthMonth, &p->birthDay,
           p->phone,
           p->postalCode, p->country, p->region, p->district, p->city, 
p->street, p->house, p->apartment,
           p->school, &p->classNumber) == 21;
}

void writePupil(FILE* f, Pupil p) {
    if (f) {
        fprintf(f, "%-20s %-15s %-15s | %-6s | %-15s | %d см | %d кг | 
%02d.%02d.%04d | %-15s | %s, %s, %s, %s, %s, %s д.%s кв.%s | %-20s | %d 
класс\n",
                p.lastName, p.firstName, p.middleName,
                p.gender, p.nationality,
                p.height, p.weight,
                p.birthDay, p.birthMonth, p.birthYear,
                p.phone,
                p.postalCode, p.country, p.region, p.district, p.city, 
p.street, p.house, p.apartment,
                p.school, p.classNumber);
    }
}
