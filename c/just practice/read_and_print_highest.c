#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char StudentName[50];
    int StudentId;
    char Gender;
    int Marks[5];
    double Percentage;
} s;
int main()
{
    FILE *p1;
    s input;
    int i=0;
    // Open person.dat for reading
    p1= fopen("details.txt", "r");
    if (p1 == NULL)
        {
            exit(1);
        }

    // read file contents till end of file
    while (i!=1){
        fread(&input, sizeof(s), 1, p1);
        i++;
    }
    // close file
    fclose (p1);

    return 0;
}