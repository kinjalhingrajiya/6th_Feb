#include<stdio.h>									//header file
#include<stdbool.h>
menu()												//user define function
{
	printf("\n1.pizza 		price = 180rs/pcs");
	printf("\n2.Burger		price = 100rs/pcs");	//print in console
	printf("\n3.Vadapav		price = 30rs/pcs");
}
main()											//inbuilt function
{
		int a,quantity,amount=0,ptot=0,btot=0,vtot=0,tot=0,product;			//variable declaration
		char b;
		bool s= true;
		
	menu();										//usd function call
	printf("\n1.Add order");
	printf("\n2.View Order");

		{
	printf("\nEnter Your Choice:");
	scanf("%d",&a);							//get choice from user
	while(s)								//continue the above code for use while loop
	if(a==1)								//check enterd 1 
	{
		printf("\nEnter Product:");
		scanf("%d",&product);					//get product form user
		switch(product)							//switch case 
		{
			case 1:										//case 1 for pizza
			printf("\nyou have selected Pizza.");
			printf("\nEnter Quantity :");
			scanf("%d",&quantity);						//get the quantity from the user
			amount=quantity*180;						//amount total
			printf("\nAmount : %d",amount);
			ptot=amount;						
			printf("\nPizza's' Total Amount is = %d",ptot);		//print amount of pizza
			break;
		case 2:										//case2 for Burger
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
	fflush(stdin);											//output buffer check
	printf("\nDo you want place more orders..? y : n =");
	scanf("%c",&b);										//get choice yes or no

	if(b=='y')								//if condition check you enter y or n
{
	menu();									//you enter y so menu function call
}
	else if(b=='n')							//you enter n so total ordered bill print
	{
		printf("\n Pizza's Total =%d",ptot);		
		printf("\n Burger's Total = %d",btot);
		printf("\n Vadapav's Total-%d",vtot);
		tot=ptot+btot+vtot;							//total amount of all order
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
		printf("\n%d Burger Total = %d",quantity,btot);      //total amount of all order
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

