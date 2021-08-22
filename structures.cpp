//Preprocessing
#include<stdio.h>
#include<stdlib.h>

//Defining Course Structure
struct course
{
	int math_credit_hours ;
	int prog_credit_hours ;
	float student_math_score;
	float student_prog_score;
};
//Defining Student Structure accompany by creating CGPA calculating function
struct student
{
	char *arr[10];
	float CGPA(float student_math_score , float student_prog_score , int math_credit_hours , int prog_credit_hours ){
			return ((student_math_score*math_credit_hours) + (student_prog_score*prog_credit_hours))/(math_credit_hours+prog_credit_hours);
	}
};
//our Main function
int main(){
//decleration of some variables 	
	int math , prog;
	float x1 , x2 , gpa;
//declare variable C (tends to course struct)	
	struct course C;
//declare variable S (tends to student struct)	
	struct student S;
//points to some indeces	
	S.arr[0]={"Mathematics"};
	S.arr[1]={"Programming"};	
	math = C.math_credit_hours=3;
	prog = C.prog_credit_hours=4;
//input gpa of math course	
	printf("Enter Your Score in Math (out of 4) :\n");
	scanf("%f",&C.student_math_score);
	x1=C.student_math_score;
//input gpa in programming course	
	printf("Enter Your Score in programming (out of 4) :\n");
	scanf("%f",&C.student_prog_score);
	x2=C.student_prog_score;
//calling Cgpa and print it	
	gpa=S.CGPA(x1,x2,math,prog);
	printf("\nYour GPA is: %f \n",gpa);
//stop our screen and return 0	
	system("pause");
	return 0;	
}
