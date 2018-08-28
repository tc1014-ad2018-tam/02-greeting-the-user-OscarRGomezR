#include <stdio.h>

int main (void) {
    int hour;

    printf("Hello world!, give me the hour please. Enter a 24-Hour Format: \n ");
    scanf ("%i", &hour);

    if (hour < 0 || hour > 23) {
        printf("Invalid hour format\n");
    } else {
        if (hour < 12 && hour > 2) {
            printf("Good Morning world!");
        } else if (hour >= 12 && hour < 19) {
            printf("Good afternoon world!");
        } else if (hour >= 19 && hour < 22) {
            printf("Good evening world!");
        } else {
            printf("Good night world!");
        }
    }
    return 0;
}