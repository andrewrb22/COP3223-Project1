#include <stdio.h>
#include <stdlib.h>


int main() {

int studentId;
int course1;
int course2;
int credits1;
int credits2;
float total1;
float total2;
float paymenttotal;
int fee = 35;

//Enter and scan Student ID
printf("Enter the Students Id:");
scanf("%d", &studentId);

//Enter and scan Course and credits
printf("Enter course/credit hours for first course (like 5665/3):");
scanf("%d/%d", &course1, &credits1);

//Enter and scan Course and credits
printf("Enter course/credit hours for second course (like 5665/3):");
scanf("%d/%d", &course2, &credits2);

//Total for first course
total1 = credits1 * 120.25 ;

//Total for second course
total2 = credits2 * 120.25;

//Final total of invoice 
paymenttotal = total1 + total2 + fee;

//Print Invoice for student
printf(" \n VALENCE COMMUNITY COLLEGE \n ORLANDO FL 10101 \n ************************* \n Fee Invoice Prepared for Student V-%d \n\n 1 Credit Hour = $120.25 \n\n CRN \t\t CREDIT HOURS \t\t Total",studentId);
printf("\n %d \t\t %d\t\t\t $%.2f \n %d \t\t %d\t\t\t $%.2f\n\n \t\tHealth & id fees\t$35.00\n\n--------------------------------------\n\n\t\t Total Payments\t $%.2f\n", course1,credits1,total1,course2,credits2,total2,paymenttotal);

    return 0; 
}