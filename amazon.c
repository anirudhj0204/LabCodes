#include <stdio.h>
#include<math.h>

void main() {
	char choice='Y';

	int cost1=0, cost2 = 0, cost3 = 0;
	float bd1 = 0, bd2 = 0, bd3 = 0;
	float ac1 = 0, ac2 = 0, ac3 = 0;
	float total_discount;

	while(choice == 'Y' || choice == 'y')
	{
		int x;
		printf("Menu: \n");
		printf("1. Phone and laptop\n2-Clothes\n3-Home appliances and furniture.\n");

		printf("Enter item to be purchased:");
		scanf("%d",&x);
	
		
		printf("\nEnter amount of the item : ");

		if(x==1)
		{
			int a;
			scanf("%d", &a);
			cost1+=a;
			if(a<1500)
			{
				bd1+=3.0*a/100;
			}
			else if(a<5000)
			{
				bd1+=8.0*a/100;
				ac1+=5.0*a/100;
			}	
			else if(a < 15000)
			{
				bd1+=10.0*a/100;
				ac1+=10.0*a/100;
			}
			else if(a>=15000)
			{
				bd1+=12.0*a/100;
				ac1+=15.0*a/100;
			}
		}
		else if(x==2)
		{
			int a;
			scanf("%d", &a);
			cost2 += a;
			if(a < 1500)
			{
				bd2 += 5.0*a/100;
			}
			else if (a < 5000)
			{
				bd2 += 10.0*a/100;
				ac2 += 5.0*a/100;
			}
			else if (a < 15000)
			{
				bd2 += 15.0*a/100;
				ac2 += 10.0*a/100;
			}
			else if (a >= 15000)
			{
				bd2 += 15.0*a/100;
				ac2 += 15.0*a/100;
			}
		}
		else if(x==3)
		{
			int a;
			scanf("%d", &a);
			cost3 += a;
			if(a < 1500)
			{
				bd3 += 4.0*a/100;
				ac3 += 1.0*a/100;
			}
			else if (a < 5000)
			{
				bd3 += 10.0*a/100;
				ac3 += 3.0*a/100;
			}
			else if (a < 15000)
			{
				bd3 += 15.0*a/100;
				ac3 += 15.0*a/100;
			}
			else if (a >= 15000)
			{
				bd3 += 15.0*a/100;
				ac3 += 20.0*a/100;
			}
		}

		printf("Is there any product from other category?\n");
		printf("Enter Y for yes and N for no:");

		scanf(" %c", &choice);

		if(choice=='Y'||choice=='y')
		printf("\n");
	}

	printf("\n\nPrice before discount from each category is:\n");
	if(cost1!=0)
	printf("Phone and laptop-%d\n", cost1);
	if(cost2!=0)
	printf("Clothes-%d\n", cost2);
	if(cost3!=0)
	printf("Home appliances and furniture-%d\n", cost3);

	printf("\nDiscount each category is:\n");
	if(cost1!=0)
	{
		printf("Phone and laptop:\n");
		printf("Discount offered by Bank=%0.2f\n", bd1);
		printf("Amazon Pay Cashback received=%0.2f\n", ac1);
	}
	if(cost2!=0)
	{
		printf("Clothes: \n");
		printf("Discount offered by Bank=%0.2f\n", bd2);
		printf("Amazon Pay Cashback received=%0.2f\n", ac2);
	}
	if(cost3 != 0)
	{
		printf("- Home appliances and furniture : \n");
		printf("Discount offered by Bank=%0.2f\n", bd3);
		printf("Amazon Pay Cashback received=%0.2f\n", ac3);
	}

	float bd=bd1+bd2+bd3;
	float ac=ac1+ac2+ac3;

	if(bd>2000)
	{
		bd=2000;
	}
	
	if(ac>1200)
	{
		ac=1200;
		
	}

	total_discount=(bd+ac)/(cost1+cost2+cost3)*100;

	printf("\nTotal discount given by the bank=%0.2f\n", bd);
	printf("Total Amazon Pay Cashback received is=%0.2f\n", ac);
	printf("Effective price:%d+%d+%d-%0.2f-%0.2f=%0.2f\n", cost1, cost2, cost3, bd, ac, cost1+cost2+cost3-bd-ac);
	printf("Amount deducted from bank=%0.2f\n", cost1+cost2+cost3-bd);
	printf("Effective discount percent upto two decimal=%0.2f %% \n", total_discount);
}	