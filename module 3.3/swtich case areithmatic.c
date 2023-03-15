#include<stdio.h>
main()
{
	char c;
	int a,b;
	float ans;
	printf("Press + for Addition");
	printf("\nPress - for Substraction");
	printf("\nPress * for Multi[lication");
	printf("\nPress / for Division");
	printf("\nEnter your Choice :");
	scanf("%c",&c);
	printf("\nEnter value of a: ");
	scanf("%d",&a);
	printf("\nEnter value of b: ");
	scanf("%d",&b);
	switch(c)
	{
		case '+':
		ans=a+b;
		printf("\n Addtion is %d + %d = %f",a,b,ans);
		break;
		case '-':
		ans=a-b;
		printf("\n Subtraction is %d - %d = %f",a,b,ans);
		break;
		case '*':
		ans=a*b;
		printf("\n Multiplication is %d * %d = %f",a,b,ans);
		break;
		case '/':
		ans=a/b;
		printf("\n Division is %d / %d = %f",a,b,ans);
		break;
		default:
			printf("Invalid Input");
	}
	
}
