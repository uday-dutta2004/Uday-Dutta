#include<stdio.h>
main()
{
	int days,ch,cperd=750;
	char cn[30];
	int tcharge;
	printf("Enter Customer Name");
	scanf("%s",&cn);
	printf("\nEnter the Number of Days for Usage");
	scanf("%d",&days);
	printf("Enter Choice");
	printf("\nPress 1 for swift\nPress 2 for Toyota Fortuner\nPress 3 for Maruti Suzuki Ertiga");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nCustomer Name %s",cn);
			printf("\nSwift");
			printf("\nNumber of Days for Usage %d",days);
			tcharge=days*cperd;
			printf("\nTotal Charge as per usage %d",tcharge);
		break;
			
		case 2:
			printf("\nCustomer Name %s",cn);
			printf("\nToyota Fortuner");
			printf("\nNumber of Days for Usage %d",days);
			tcharge=days*cperd;
			printf("\nTotal Charge as per usage %d",tcharge);	
		break;
				
		case 3:
	    	printf("\nCustomer Name %s",cn);
            printf("\nMaruti Suzuki Ertiga");
			printf("\nNumber of Days for Usage %d",days);
			tcharge=days*cperd;
			printf("\nTotal Charge as per usage %d",tcharge);
		break;
		
		default:
			printf("\nModels not available");
	}
}
