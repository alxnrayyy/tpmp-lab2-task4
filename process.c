#include "process.h"
#include "file_io.h"
#include "pupil.h"
#include <stdio.h>

int processPupils(const char* inputFile, const char* outputFile, int 
targetClass) {
    FILE* in = openFileRead(inputFile);
    if (!in) return 0;
    
    FILE* out = openFileWrite(outputFile);
    if (!out) {
        closeFile(in);
        return 0;
    }
    
    Pupil p;
    int count = 0;
    int found = 0;
    
    fprintf(out, "Ученики %d-х классов:\n", targetClass);
    fprintf(out, "========================================\n\n");
    
    while (readPupil(in, &p)) {
        count++;
        if (p.classNumber == targetClass) {
            found++;
            writePupil(out, p);
            fprintf(out, "\n");
        }
    }
    
    if (found == 0) {
        fprintf(out, "Нет учеников %d-х классов\n", targetClass);
    } else {
        fprintf(out, "\nВсего найдено: %d учеников из %d\n", found, 
count);
    }
    
    closeFile(in);
    closeFile(out);
    
    printf("Обработано %d записей. Найдено учеников %d-х классов: %d\n", 
count, targetClass, found);
    printf("Результат сохранён в файл %s\n", outputFile);
    
    return found;
}
