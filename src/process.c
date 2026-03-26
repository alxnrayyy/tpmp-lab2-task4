#include <stdio.h>
#include "process.h"

void process_fifth_graders(Pupil* pupils, int count, const char* output_filename) {
    FILE *f = fopen(output_filename, "w");
    if (!f) return;

    fprintf(f, "СПИСОК УЧЕНИКОВ 5-Х КЛАССОВ:\n");
    fprintf(f, "---------------------------\n");
    for (int i = 0; i < count; i++) {
        if (pupils[i].grade == 5) {
            fprintf(f, "ФИО: %s %s %s\n", pupils[i].last_name, pupils[i].first_name, pupils[i].patronymic);
            fprintf(f, "Школа: %s, Класс: %d\n", pupils[i].school, pupils[i].grade);
            fprintf(f, "Адрес: %s, г. %s, ул. %s\n", pupils[i].address.country, pupils[i].address.city, pupils[i].address.street);
            fprintf(f, "---------------------------\n");
        }
    }
    fclose(f);
}
