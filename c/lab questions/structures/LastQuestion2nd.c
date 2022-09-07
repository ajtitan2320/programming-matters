//                                          BY AJTITAN                               //
// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>

// struct person with 3 fields
struct person
{
	char StudentName[50];
    int StudentId;
    char Gender;
    int Marks[5];
    double Percentage;
};

// Driver program
int main ()
{
	FILE *p1;
	struct person s1[100];
	// Open person.dat for reading
	p1 = fopen ("details.txt", "r");
	if (p1 == NULL)
	{
		fprintf(stderr, "\nError opening file\n");
		exit (1);
	}
	
	// read file contents till end of file
    int i=0;
    struct person max;
    int index = -1;
    float maxi=-1;
	while(fread(&s1[i], sizeof(struct person), 1, p1)){
		printf ("name = %s id = %d  gender = %c percentage = %f\n", s1[i].StudentName,
		s1[i].StudentId, s1[i].Gender,s1[i].Percentage);
        i++;
    }
    fclose (p1);
    p1 = fopen ("details.txt", "r");
	if (p1 == NULL)
	{
		fprintf(stderr, "\nError opening file\n");
		exit (1);
	}
    i=0;
    while(fread(&s1[i], sizeof(struct person), 1, p1)){
		if(maxi < s1[i].Percentage){
            index=i;
            maxi = s1[i].Percentage;
        }
        i++;
    }
    fclose (p1);
    p1 = fopen ("details.txt", "r");
	if (p1 == NULL)
	{
		fprintf(stderr, "\nError opening file\n");
		exit (1);
	}
    printf("\n\n\nthe highest percentage \n\n\n");
		printf ("name = %s id = %d  gender = %c percentage = %f\n", s1[index].StudentName,
		s1[index].StudentId, s1[index].Gender,s1[index].Percentage);
    
	fclose (p1);

	return 0;
}