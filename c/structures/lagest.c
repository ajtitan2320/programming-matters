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
	struct person s1;
	// Open person.dat for reading
	p1 = fopen ("details.txt", "r");
	if (p1 == NULL)
	{
		fprintf(stderr, "\nError opening file\n");
		exit (1);
	}
	
	// read file contents till end of file
    struct person max;
    float maxi=-1;
    while(fread(&s1, sizeof(struct person), 1, p1)){
		printf ("name = %s id = %d  gender = %c percentage = %f\n", s1.StudentName,
		s1.StudentId, s1.Gender,s1.Percentage);
    }
    fclose (p1);
    while(fread(&s1, sizeof(struct person), 1, p1)){
		if(maxi < s1.Percentage){
            maxi = s1.Percentage;
        }
    }
    
    printf("\n%f\n",maxi);
    
	fclose (p1);

	return 0;
}
