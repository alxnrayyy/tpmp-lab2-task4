#ifndef PUPIL_H
#define PUPIL_H

typedef struct {
    char index[10];
    char country[30];
    char region[30];
    char district[30];
    char city[30];
    char street[30];
    char house[10];
    char apartment[10];
} Address;

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    char last_name[50];
    char first_name[50];
    char patronymic[50];
    char gender[10];
    char nationality[30];
    int height;
    int weight;
    Date birth_date;
    char phone[20];
    Address address;
    char school[50];
    int grade;
} Pupil;

#endif
