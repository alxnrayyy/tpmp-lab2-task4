#include <stdio.h>
#include "process.h"
#include "file_io.h"

int main() {
    const char* inputFile = "pupils.txt";
    const char* outputFile = "result.txt";
    int targetClass = 5;
    
    printf("=== Программа обработки данных школьников ===\n");
    printf("Целевой класс: %d\n\n", targetClass);
    
    FILE* test = fopen(inputFile, "w");
    if (test) {
        fprintf(test, "Иванов Иван Иванович М Русский 145 35 2015 01 15 
89123456789 123456 Россия Московская Раменское Москва Ленина 12 45 
Школа№1 5\n");
        fprintf(test, "Петрова Анна Петровна Ж Русская 140 32 2014 05 20 
89234567890 234567 Россия Московская Москва Москва Тверская 5 12 Школа№2 
4\n");
        fprintf(test, "Сидоров Сергей Иванович М Русский 150 38 2015 08 10 
89345678901 345678 Беларусь Минская Минск Минск Пушкина 8 34 Гимназия№1 
5\n");
        fprintf(test, "Кузнецова Мария Алексеевна Ж Белоруска 142 34 2014 
03 12 89456789012 456789 Беларусь Минская Минск Минск Крещатик 10 56 
Школа№3 5\n");
        fprintf(test, "Михайлов Дмитрий Сергеевич М Русский 155 40 2015 11 
25 89567890123 567890 Россия Ленинградская Гатчина Гатчина Ленина 2 8 
Лицей№1 4\n");
        fclose(test);
        printf("Создан тестовый файл %s с 5 учениками\n\n", inputFile);
    }
    
    processPupils(inputFile, outputFile, targetClass);
    
    printf("\nСодержимое файла результата:\n");
    FILE* res = openFileRead(outputFile);
    if (res) {
        char line[1024];
        while (fgets(line, sizeof(line), res)) {
            printf("%s", line);
        }
        closeFile(res);
    }
    
    return 0;
}
