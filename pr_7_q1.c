/*
Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/

#include<stdio.h>

int Addition(int x,int y){
	return x+y;
}
int Subtraction(int a,int b){
	return a-b;
}
int Multiplication(int k,int m){
	return k*m;
}
int Division(int i,int j){
	return i/j;
}
int Remainder(int u,int v){
	return u%v;
}

main(){
	int choice,a,b;
	
	printf("\nPress 1 for +");
	printf("\nPress 2 for -");
	printf("\nPress 3 for *");
	printf("\nPress 4 for /");
	printf("\nPress 5 for %");
	printf("\nPress 0 for Exit\n\n");
	do{
	printf("\nEnter your Choice: ");
	scanf("%d",&choice);
	
	printf("Enter The Value of Number 1: ");
	scanf("%d",&a);
	printf("Enter The Value of Number 2: ");
	scanf("%d",&b);
		switch(choice){
			case 1:
				printf("\nThe Sum of Two Values are : %d",Addition(a,b));
				break;
			case 2:
				printf("\nThe Subtraction of Two Values are: %d",Subtraction(a,b));
				break;
			case 3:
				printf("\nThe Multiplication of Two Values are :%d",Multiplication(a,b));
				break;
			case 4:
				printf("\nThe Division of Two Values are :%d",Division(a,b));
				break;
			case 5:
				printf("\nThe Remainder of Two Values are :%d",Remainder(a,b));
				break;
			default:printf("visit again ..");
				break;
		}
	}while(choice!=0);
}
