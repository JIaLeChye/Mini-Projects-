#include <stdio.h>

 
void clcusage(); 
void clcbill(); 

int main()
{
	int choise;

	printf("\n==============MAIN MENU============= \n");
	printf("1. Display electricity usage (kWh) for this month.\n");
	printf("2. Calculate the bill estimation for this month.\n");
	printf("3. Exit from the program.\n ");
	printf("\nPlease enter your choice: ");
	scanf_s("%d", &choise);

	switch (choise)
	{

	

	case 1: 
		printf("\n===========ELECTRICITY USAGE==============\n");
		
		clcusage(); 
		
		return main();
		
	case 2:
		printf("\n===========BILL ESTIMATION==============\n");
		clcbill(); 
		
		return main(); 

	case 3: 
		printf("This program ended. \n"); 
		printf("\n==============THANK YOU=====================\n"); 
		break; 


	default: 

			printf("Error!");
			return main(); 
	}

	return 0; 
}

void clcusage()
{
	int crnt, prev; 
	int energy_comsumption; 

	printf("\nPervious reading: "); 
	scanf_s("%d", &prev );
	printf("\nCurrent reading: ");
	scanf_s("%d", &crnt );

	energy_comsumption = crnt - prev; 

	printf("\nUnits consumed : %d kWh ", energy_comsumption); 
	
 
}

void clcbill()
{

	int crnt, prev;
	int energy_comsumption;
	/*Bill Estimation*/
	printf("\nPervious reading: ");
	scanf_s("%d", &prev);
	printf("\nCurrent reading: ");
	scanf_s("%d", &crnt);
	energy_comsumption = crnt - prev;
	printf("\nUnits consumed : %d kWh ", energy_comsumption);
	/*Calculate Bill*/
	printf("\n============================================\n");
	printf("----------DETAILS OF CALCULATION------------\n");
	printf("============================================\n");
	int mincrg = 5;
	float crg {};
	float tcrg; 
	int rem_engy_com = 0 ;
	float blkusg1 = 0.175; 
	float blkusg2 = 0.185; 
	float blkusg3 = 0.33; 
	float blkusg4 = 0.445;
	float blkusg5 = 0.45;
	float blkusg6 = 0.47;
	float crg1;
	float crg2;
	float crg3;
	float crg4;
	float crg5;
	float crg6;
	if (energy_comsumption <= 100 && energy_comsumption >= 1)
	{
		printf("Minimum charge = RM%d", mincrg);
		crg1 = energy_comsumption * blkusg1; 
		rem_engy_com = energy_comsumption - 100; 
		
		printf("\nCharge of 1st block: RM %.2f\n", crg1); 
		//printf("\nRemaining energy comsumption %d", rem_engy_com); [Debug use only] 
		crg = crg1; 
	}
	if (energy_comsumption >= 101 && energy_comsumption <= 200)
	{
		printf("Minimum charge = RM%d \n", mincrg);
	

		crg1 = 100 * blkusg1; 
		rem_engy_com = energy_comsumption - 100; 
		crg2 = rem_engy_com * blkusg2; 
		
		printf("Charge of 1st block: RM %.2f\n", crg1);
		printf("Charge of 2nd block: RM %.2f\n", crg2);
		crg = crg1 + crg2;


	}
	if (energy_comsumption >=201  && energy_comsumption <= 300)
	{
		printf("Minimum charge = RM%d \n", mincrg);
	
		crg1 = 100 * blkusg1;
		
		
		crg2 = 100 * blkusg2; 
		
		rem_engy_com = energy_comsumption - 200;
		//printf("remaining energy compsumtion after 2nd block: %d ", rem_engy_com); [Debuge use only]
		crg3 = rem_engy_com * blkusg3; 
		
		
		printf("Charge of 1st block: RM %.2f\n", crg1);
		printf("Charge of 2nd block: RM %.2f\n", crg2);
		printf("Charge of 3rd block: RM %.2f\n", crg3);

		crg = crg1 + crg2 + crg3;


	}

	if (energy_comsumption >= 301 && energy_comsumption <= 500)
	{
		printf("Minimum charge = RM%d \n", mincrg);

	
		crg1 = 100 * blkusg1;

		crg2 = 100 * blkusg2;

		crg3 = 100 * blkusg3;
		rem_engy_com = energy_comsumption - 300;
		//printf("\nremaining energy compsumtion after 2nd block: %d\n ", rem_engy_com); [Debug Use Only] 
		crg4 = rem_engy_com * blkusg4; 

		printf("Charge of 1st block: RM %.2f\n", crg1);
		printf("Charge of 2nd block: RM %.2f\n", crg2);
		printf("Charge of 3rd block: RM %.2f\n", crg3);
		printf("Charge of 4rd block: RM %.2f\n", crg4);

		crg = crg1 + crg2 + crg3 + crg4;


	}

	if (energy_comsumption >= 501 && energy_comsumption <= 1000)
	{
		printf("Minimum charge = RM%d \n", mincrg);

		 
		crg1 = 100 * blkusg1;

		crg2 = 100 * blkusg2;

		crg3 = 100 * blkusg3;
		crg4 = 200 * blkusg4; 
		rem_engy_com = energy_comsumption - 500;
		//printf("\nremaining energy compsumtion after 2nd block: %d\n ", rem_engy_com); //[Debug Use Only] 
		crg5 = rem_engy_com * blkusg5; 

		printf("Charge of 1st block: RM %.2f\n", crg1);
		printf("Charge of 2nd block: RM %.2f\n", crg2);
		printf("Charge of 3rd block: RM %.2f\n", crg3);
		printf("Charge of 4rd block: RM %.2f\n", crg4);
		printf("Charge of 5rd block: RM %.2f\n", crg5);

		crg = crg1 + crg2 + crg3 + crg4 + crg5 ;


	}

	if (energy_comsumption >= 1001)
	{
		printf("Minimum charge = RM%d \n", mincrg);

	
		crg1 = 100 * blkusg1;

		crg2 = 100 * blkusg2;

		crg3 = 100 * blkusg3;
		crg4 = 200 * blkusg4;
		crg5 = 500 * blkusg5; 
		rem_engy_com = energy_comsumption - 1000;
		//printf("\nremaining energy compsumtion after 2nd block: %d\n ", rem_engy_com); //[Debug Use Only] 
		crg6 = rem_engy_com * blkusg6; 

		printf("Charge of 1st block: RM %.2f\n", crg1);
		printf("Charge of 2nd block: RM %.2f\n", crg2);
		printf("Charge of 3rd block: RM %.2f\n", crg3);
		printf("Charge of 4rd block: RM %.2f\n", crg4);
		printf("Charge of 5rd block: RM %.2f\n", crg5);
		printf("Charge of 6rd block: RM %.2f\n", crg6);

		crg = crg1 + crg2 + crg3 + crg4 + crg5 + crg6;


	}

	else if (energy_comsumption <= 0)
	{
		printf("\nERROR! \n"); 
		printf("\n! PLEASE ENTAR A VALID VALUE ! "); 
	}
	

	tcrg = crg + mincrg; 


	printf("\nElectricity Bill: RM %.2f\n", tcrg ); 
	

}
