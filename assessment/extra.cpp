#include<stdio.h>
main()
{
		int a,quantity,amount=0,ptot=0,btot=0,dtot=0,itot=0,tot=0;
		char b;
		bool s= true;
		
	printf("\n1.pizza 		price = 180rs/pcs");
	printf("\n2.Burger		price = 100rs/pcs");
	printf("\n3.Dosa			price = 120rs/pcs");
	printf("\n4.Idli			price = 50rs/pcs");
while(s)
		{
	printf("\nEnter Your Choice:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nyou have selected Pizza.");
			printf("\nEnter Quality :");
			scanf("%d",&quantity);
			amount=quantity*180;
			printf("\nAmount : %d",amount);
			ptot=amount;
			printf("\nTotal Amount is = %d",ptot);
			break;
		case 2:
			printf("\nyou have selected Burger.");
			printf("\nEnter Quality :");
			scanf("%d",&quantity);
			amount=quantity*100;
			printf("\nAmount : %d",amount);
			btot=amount;
			printf("\nTotal Amount is = %d",btot);
			break;
		case 3:
			printf("\nyou have selected Dosa.");
			printf("\nEnter Quality :");
			scanf("%d",&quantity);
			amount=quantity*120;
			printf("\nAmount : %d",amount);
			dtot=amount;
			printf("\nTotal Amount is = %d",dtot);
			break;
		case 4:
			printf("\nyou have selected Idli.");
			printf("\nEnter Quality :");
			scanf("%d",&quantity);
			amount=quantity*50;
			printf("\nAmount : %d",amount);
			itot=amount;
			printf("\nTotal Amount is = %d",itot);
			break;
		default:
			printf("\nInvalid Choice...");
	}
	fflush(stdin);
	printf("\nDo you want place more orders..? y : n =");
	scanf("%c",&b);

	if(b=='y')
{
	printf("-----------------Menu-----------------");
	printf("\n1.pizza 			price = 180rs/pcs");
	printf("\n2.Burger			price = 100rs/pcs");
	printf("\n3.Dosa			price = 120rs/pcs");
	printf("\n4.Idli			price = 50rs/pcs");
}
	else if(b=='n')
	{
		tot=ptot+btot+dtot+itot;
		printf("Total Amount is %d",tot);
		s=false;
	}
}
}
