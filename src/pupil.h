#ifndef PUPIL_H
#define PUPIL_H

typedef struct {
    char lastName[50];
    char firstName[50];
    char middleName[50];
    char gender[10];
    char nationality[30];
    int height;
    int weight;
    int birthYear;
    int birthMonth;
    int birthDay;
    char phone[20];
    char postalCode[10];
    char country[30];
    char region[30];
    char district[30];
    char city[30];
    char street[50];
    char house[10];
    char apartment[10];
    char school[50];
    int classNumber;
} Pupil;

void printPupil(Pupil p);
int isFifthGrade(Pupil p);

#endif
