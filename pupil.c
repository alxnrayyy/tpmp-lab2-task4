#include "pupil.h"
#include <stdio.h>

int isFifthGrade(Pupil p) {
    return p.classNumber == 5;
}

void printPupil(Pupil p) {
    printf("%s %s %s | %s | %s | Рост: %d | Вес: %d | Дата: %02d.%02d.%04d 
| Тел: %s | Адрес: %s, %s, %s, %s, %s, %s, д.%s кв.%s | Школа: %s | %d 
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
