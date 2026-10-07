#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     printf("This is a student grading system\n");

    char studentName[50];
    char RegNo[20];
    int Marks;
    char Grade;

    printf("Provide the student's first name:");
    scanf("%s", studentName);
    printf("Provide the student's registration number:");
    scanf("%s", RegNo);
    printf("Provide the student's marks:");
    scanf("%d", &Marks);
    //determine grade from the student marks
    switch(Marks){
        case 70 ... 100:
            Grade='A';
            break;
        case 60 ... 69:
            Grade='B';
            break;
        case 50 ... 59:
            Grade='C';
            break;
        case 40 ... 49:
            Grade='D';
            break;
        default: Grade= 'F';
            break;
    }

    if (Marks >= 0 && Marks <= 100) {
        printf("\n--- Student Results ---\n");
        printf("Name: %s\n", studentName);
        printf("Reg No: %s\n", RegNo);
        printf("Marks: %d\n", Marks);
        printf("Grade: %c\n", Grade);
    } else {
        printf("\nInvalid marks entered! Please enter a value between 0 and 100.\n");
    }
    return 0;
 }
