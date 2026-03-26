#include "pupil.h"
#include <stdio.h>

int isFifthGrade(Pupil p) {
    return p.grade == 5;
}

void printPupil(Pupil p) {
    printf("%s %s %s, %d класс\n", 
           p.last_name, p.first_name, p.patronymic, p.grade);
}
