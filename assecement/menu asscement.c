#include<stdio.h>
#include<stdbool.h>
menu()
{
	printf("\n1.pizza 		price = 180rs/pcs");
	printf("\n2.Burger		price = 100rs/pcs");
	printf("\n3.Vadapav		price = 30rs/pcs");
}
main()
{
		int a,quantity,amount=0,ptot=0,btot=0,vtot=0,tot=0,product;
		char b;
		bool s= true;
		
	menu();
	printf("\n1.Add order");
	printf("\n2.View Order");

		{
	printf("\nEnter Your Choice:");
	scanf("%d",&a);
	while(s)
	if(a==1)
	{
		printf("\nEnter Product:");
		scanf("%d",&product);
		switch(product)
		{
			case 1:
			printf("\nyou have selected Pizza.");
			printf("\nEnter Quantity :");
			scanf("%d",&quantity);
			amount=quantity*180;
			printf("\nAmount : %d",amount);
			ptot=amount;
			printf("\nPizza's' Total Amount is = %d",ptot);
			break;
		case 2:
			printf("\nyou have selected Burger.");
			printf("\nEnter Quality :");
			scanf("%d",&quantity);
			amount=quantity*100;
			printf("\nAmount : %d",amount);
			btot=amount;
			printf("\nBurger's Total Amount is = %d",btot);
			break;
		case 3:
			printf("\nyou have selected Vadapav.");
			printf("\nEnter Quality :");
			scanf("%d",&quantity);
			amount=quantity*30;
			printf("\nAmount : %d",amount);
			vtot=amount;
			printf("\nVadapav Total Amount is = %d",vtot);
			break;
		default:
			printf("\nInvalid Choice...");
			s=false;
	}
	fflush(stdin);
	printf("\nDo you want place more orders..? y : n =");
	scanf("%c",&b);

	if(b=='y')
{
	menu();
}
	else if(b=='n')
	{
		printf("\n Pizza's Total =%d",ptot);
		printf("\n Burger's Total = %d",btot);
		printf("\n Vadapav's Total-%d",vtot);
		tot=ptot+btot+vtot;
		printf("\n--------------------------");
		printf("\nTotal Amount is %d",tot);
		s=false;
	}
	else
	{
		printf("Invalid Choice....");
			s=false;
	}
}
	else if(a==2)
	{
		printf("\n%d Pizza Total =%d",quantity,ptot);
		printf("\n%d Burger Total = %d",quantity,btot);
		printf("\n%dVadapav Total-%d",quantity,vtot);
		tot=ptot+btot+vtot;
		printf("\n--------------------------");
		printf("\nTotal Amount is %d",tot);
		s=false;
	}
	else
	{
		printf("Invalid Choice.....");
		s=false;
	}
}
}

