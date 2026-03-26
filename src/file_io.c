#include <stdio.h>
#include <string.h>
#include "file_io.h"

void write_initial_data(const char* filename) {
    FILE *f = fopen(filename, "wb");
    if (!f) return;

    Pupil p1 = {"Иванов", "Иван", "Иванович", "М", "Белорус", 145, 38, {2014, 5, 12}, "37529111", {"225644", "РБ", "Брестская", "Лунинецкий", "Микашевичи", "Ленина", "10", "5"}, "Школа №1", 5};
    Pupil p2 = {"Петрова", "Ольга", "Игоревна", "Ж", "Белоруска", 165, 50, {2010, 11, 2}, "37529222", {"220000", "РБ", "Минская", "-", "Минск", "Победителей", "1", "20"}, "Гимназия №2", 9};
    Pupil p3 = {"Сидоров", "Сергей", "Алексеевич", "М", "Русский", 150, 
40, {2014, 8, 20}, "37529333", {"123456", "РФ", "Московская", 
"Одинцовский", "Одинцово", "Молодежная", "5", "12"}, "Школа №3", 5};
    fwrite(&p1, sizeof(Pupil), 1, f);
    fwrite(&p2, sizeof(Pupil), 1, f);
    fwrite(&p3, sizeof(Pupil), 1, f);
    fclose(f);
}

int read_pupils(const char* filename, Pupil* pupils) {
    FILE *f = fopen(filename, "rb");
    if (!f) return 0;
    int count = 0;
    while (fread(&pupils[count], sizeof(Pupil), 1, f)) {
        count++;
    }
    fclose(f);
    return count;
}

void print_file_content(const char* filename) {
    FILE *f = fopen(filename, "r");
    if (!f) return;
    char line[256];
    while (fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }
    fclose(f);
}
