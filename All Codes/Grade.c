#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Your grade is: %c\n", grade);

    return 0;
}

