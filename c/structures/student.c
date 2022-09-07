//                                          BY AJTITAN                               //

// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>

// a struct to read and write
struct person
{
    char StudentName[50];
    int StudentId;
    char Gender;
    int Marks[5];
    double Percentage;
};
int main()
{
    FILE *p1;
    struct person s1[100];
    p1 = fopen("details.txt", "w");
    if (p1 == NULL)
    {
        return 0;
    }
    int n;
    printf("enter the no. of students = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n%d student\n", i + 1);
        // stduent name
        printf("student name = ");
        scanf("%s", s1[i].StudentName);
        // student id
        printf("student id = ");
        scanf("%d", &s1[i].StudentId);
        printf("student gender(M/F/O) = ");
        scanf(" %c", &s1[i].Gender);
        // student marks and percentage
        printf("student marks of 5 subject = ");
        int s = 0;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &s1[i].Marks[j]);
            s += s1[i].Marks[j];
        }
        s1[i].Percentage = s / 5.0;
        fwrite(&s1[i], sizeof(struct person), 1, p1);
    }
        // checking if content is being written
        if (fwrite != 0)
            printf("contents to file written successfully !\n");
        else
            printf("error writing file !\n");

        // close file
        fclose(p1);

        return 0;
    }
