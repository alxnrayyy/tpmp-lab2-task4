#include <stdio.h>
#include "file_io.h"
#include "process.h"

int main() {
    const char* raw_data = "pupils.dat";
    const char* result_file = "result.txt";
    Pupil pupils[100];

    printf("1. Создание исходного файла...\n");
    write_initial_data(raw_data);

    printf("2. Чтение данных...\n");
    int count = read_pupils(raw_data, pupils);

    printf("3. Обработка данных (поиск 5-х классов)...\n");
    process_fifth_graders(pupils, count, result_file);

    printf("4. Просмотр результата из файла %s:\n\n", result_file);
    print_file_content(result_file);

    return 0;
}
