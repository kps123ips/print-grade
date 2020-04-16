#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks to receive your grade");
	scanf("%d",&marks);
	if(marks>90)
	printf("Your Grade is- A");
	else if(marks>80)
	printf("Your Grade is - B");
	else if(marks>60)
	printf("Your Grade is - C");
	else
	printf("Do Hard Work to score Grade A and Your Grade is D");
	getch();
}
