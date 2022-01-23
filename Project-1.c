#include <stdio.h>
#include <stdlib.h>



int main() {

int studentId;
int course;
int credits;
float total;
int fee = 35;

//Enter and scan Student ID
printf("Enter the Students Id:");
scanf("%d", &studentId);

//Enter and scan Course and credits
printf("Enter crn/credit hours for first course (like 5665/3):");
scanf("%d/%d", &course, &credits);

printf("Student ID %d CRN %d and credits %d", studentId,course,credits);


    return 0; 
}