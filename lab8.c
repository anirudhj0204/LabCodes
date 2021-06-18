#include<stdio.h>
int m1[15][5]={{7,13,17,1,0},{128, 221, 313, 11, 1},{143, 362, 501, 14, 0},{213, 267, 386, 17, 2},{2, 15, 19, 0, 0},{102, 160, 191, 8, 1},{5, 14, 19, 0, 0},{1, 5, 10, 0, 0},{0, 0, 0, 0, 0,},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int m2[15][5]={{23, 35, 47, 4, 0},{155, 267, 350, 13, 0},{23, 39, 47, 4, 0},{243, 287, 447, 25, 0},{1, 5, 6, 0, 0},{65, 102, 129, 7, 2},{4, 16, 38, 0, 0},{9, 19, 28, 1, 0},{5, 4, 20, 1, 0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
char pname[12][20]={"KL Rahul", "M Vijay", "CA Pujara", "V Kohli", "AM Rahane", "RG Sharma", "R Ashwin", "WP Saha", "RA Jadeja", "UT Yadav", "I Sharma", "Extra Runs"};


void scorecard()
{
		float rate1[12], rate2[12];
	
	for(int i=0; i<8; i++)
	{
		rate1[i]=(m1[i][0]/(float)m1[i][1])*100;
		rate2[i]=(m2[i][0]/(float)m2[i][1])*100;
	}
	
	for(int i=8; i<12; i++ )
	{
		rate1[i]=0;
		rate2[i]=0;
	}
	
	printf("Match 1:\n");
	printf("Player Name\tRuns\tBalls\tTime\t4's\t6's\tStrike Rate\n");

	for(int i=0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			if(pname[i][j]!='\0')
			{
			printf("%c", pname[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\t");
		
		for(int k=0; k<5; k++)
		{
			printf("%d\t", m1[i][k]);
		}
		
		printf("%0.2f", rate1[i]);
		printf("\n");
	}
	
	printf("\n\n\nMatch 2:\n");
	printf("Player Name\tRuns\tBalls\tTime\t4's\t6's\tStrike Rate\n");

	for(int i=0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			if(pname[i][j]!='\0')
				printf("%c", pname[i][j]);
			else
				printf(" ");
		}
		printf("\t");
		
		for(int k=0; k<5; k++)
		{
			printf("%d\t", m2[i][k]);
		}
		
		printf("%0.2f", rate2[i]);
		printf("\n");
	}

}


void total_runs()
{
	int truns[12];
	for(int i=0; i<12; i++)
	{
		truns[i]=m1[i][0]+m2[i][0];
	}
	
	printf("Player Name\tRuns Scored\n");
	for(int i=0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			if(pname[i][j]!='\0')
				printf("%c", pname[i][j]);
			else
				printf(" ");
		}
		printf("\t");
		printf("%d\t", truns[i]);
		printf("\n");
	}
}

void highest_scorer()
{
	int truns[12];
	for(int i=0; i<12; i++)
	{
		truns[i]=m1[i][0]+m2[i][0];
	}
	
	int max_runs=truns[0];
	
	for(int i=0; i<12; i++)
	{
		if(truns[i]>max_runs)
		{
			max_runs=truns[i];
		}
	}
	
	int r;
	for(int i=0; i<12; i++)
	{
		if(max_runs==truns[i])
		{
			r=i;
		}
	}
	
	printf("The player who scored highest runs after both the matches is ");
	
	switch(r)
	{
		case 0:printf("KL Rahul");
			break;
		case 1:printf("M Vijay"); 
			break;
		case 2:printf("CA Pujara");
			break;
		case 3:printf("V Kohli");
			break;
		case 4:printf("AM Rahane");
			break;
		case 5:printf("RG Sharma");
			break;
		case 6:printf("R Ashwin");
			break;
		case 7:printf("WP Saha");
			break;
		case 8:printf("RA Jadeja");
			break;
		case 9:printf("UT Yadav");
			break;
		case 10:printf("I Sharma");
			break;
	}
}

void total_score()
{
	
	int truns[12];
	for(int i=0; i<12; i++)
	{
		truns[i]=m1[i][0]+m2[i][0];
	}
	
	int tscore=0;
	for(int i=0; i<12; i++)
	{
		tscore+=truns[i];
	}
	printf("The total score of the Indian team after the two matches is %d.", tscore);
}

void maxballs()
{
	int balls[12];
	for(int i=0; i<12; i++)
	{
		balls[i]=m1[i][1]+m2[i][1];
	}
	int max=balls[0];
	for(int i=0; i<12; i++)
	{
		if(balls[i]>max)
		{
			max=balls[i];
		}
	}
	int b;
	for(int i=0; i<12; i++)
	{
		if(max==balls[i])
		{
			b=i;
		}
	}
	
	printf("The maximum number of balls played after both the matches were %d by ", max);
	
	switch(b)
	{
		case 0:printf("KL Rahul");
			break;
		case 1:printf("M Vijay"); 
			break;
		case 2:printf("CA Pujara");
			break;
		case 3:printf("V Kohli");
			break;
		case 4:printf("AM Rahane");
			break;
		case 5:printf("RG Sharma");
			break;
		case 6:printf("R Ashwin");
			break;
		case 7:printf("WP Saha");
			break;
		case 8:printf("RA Jadeja");
			break;
		case 9:printf("UT Yadav");
			break;
		case 10:printf("I Sharma");
			break;
	}
}

void boundaries()
{
	int bruns[12];
	
	for(int i=0; i<12; i++)
	{
		bruns[i]=4*(m1[i][3]+m2[i][3])+6*(m1[i][4]+m2[i][4]);
	}
	
	int max=bruns[0];
	for(int i=0; i<12; i++)
	{
		if(bruns[i]>max)
		{
			max=bruns[i];
		}
	}
	int b;
	for(int i=0; i<12; i++)
	{
		if(max==bruns[i])
		{
			b=i;
		}
	}
	
	printf("The player who scored highest runs by boundaries after both the matches is ");
	
	switch(b)
	{
		case 0:printf("KL Rahul");
			break;
		case 1:printf("M Vijay"); 
			break;
		case 2:printf("CA Pujara");
			break;
		case 3:printf("V Kohli");
			break;
		case 4:printf("AM Rahane");
			break;
		case 5:printf("RG Sharma");
			break;
		case 6:printf("R Ashwin");
			break;
		case 7:printf("WP Saha");
			break;
		case 8:printf("RA Jadeja");
			break;
		case 9:printf("UT Yadav");
			break;
		case 10:printf("I Sharma");
			break;
	}
}

void time()
{
	printf("The players who played more than 100 balls or stood on the pitch for more than 100 minutes in the 1st match are:\n");
	for(int i=0; i<12; i++)
	{
		if(m1[i][1]>100||m1[i][2])
		{
			switch(i)
			{
				case 0:printf("KL Rahul");
					break;
				case 1:printf("M Vijay"); 
					break;
				case 2:printf("CA Pujara");
					break;
				case 3:printf("V Kohli");
					break;
				case 4:printf("AM Rahane");
					break;
				case 5:printf("RG Sharma");
					break;
				case 6:printf("R Ashwin");
					break;
				case 7:printf("WP Saha");
					break;
				case 8:printf("RA Jadeja");
					break;
				case 9:printf("UT Yadav");
					break;
				case 10:printf("I Sharma");
					break;
			}
			printf("\n");
		}
	}
	
	
	printf("\nThe players who played more than 100 balls or stood on the pitch for more than 100 minutes in the 2nd match are:\n");
	for(int i=0; i<12; i++)
	{
		if(m2[i][1]>100||m2[i][2])
		{
			switch(i)
			{
				case 0:printf("KL Rahul");
					break;
				case 1:printf("M Vijay"); 
					break;
				case 2:printf("CA Pujara");
					break;
				case 3:printf("V Kohli");
					break;
				case 4:printf("AM Rahane");
					break;
				case 5:printf("RG Sharma");
					break;
				case 6:printf("R Ashwin");
					break;
				case 7:printf("WP Saha");
					break;
				case 8:printf("RA Jadeja");
					break;
				case 9:printf("UT Yadav");
					break;
				case 10:printf("I Sharma");
					break;
			}
			printf("\n");
		}
	}
}


void insert()
{
	char Pname[13][20];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<20; j++)
		{
			Pname[i][j]=pname[i][j];
		}
	}
	for(int i=0; i<20; i++)
	{
		Pname[4][i]='\0';
	}
	printf("Enter the name of the new player:");
	for(int i=0; i<12; i++)
	{
		char c;
		scanf(" %c", &c);
		if(c=='\n')
			break;
		Pname[4][i]=c;
	}
	for(int i=5; i<13; i++)
	{
		for(int j=0; j<20; j++)
		{
			Pname[i][j]=pname[i-1][j];
		}
	}
	
	int M1[13][5], M2[13][5];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<5; j++)
		{
			M1[i][j]=m1[i][j];
		}
	}
	
	printf("Enter the runs scored by player in match 1:");
	scanf("%d", &M1[4][0]);
	printf("Enter the number of balls played by player in match 1:");
	scanf("%d", &M1[4][1]);
	printf("Enter the time played by player in match 1:");
	scanf("%d", &M1[4][2]);
	printf("Enter the 4's scored by player in match 1:");
	scanf("%d", &M1[4][3]);
	printf("Enter the 6's scored by player in match 1:");
	scanf("%d", &M1[4][4]);
	
	for(int i=5; i<13; i++)
	{
		for(int j=0; j<5; j++)
		{
			M1[i][j]=m1[i-1][j];
		}
	}

	for(int i=5; i<13; i++)
	{
		for(int j=0; j<20; j++)
		{
			Pname[i][j]=pname[i-1][j];
		}
	}
	float rate1[13], rate2[13];
	
	for(int i=0; i<9; i++)
	{
		rate1[i]=(M1[i][0]/(float)M1[i][1])*100;
		rate2[i]=(M2[i][0]/(float)M2[i][1])*100;
	}
	
	for(int i=9; i<13; i++ )
	{
		rate1[i]=0;
		rate2[i]=0;
	}
	
	printf("Match 1:\n");
	printf("Player Name\tRuns\tBalls\tTime\t4's\t6's\tStrike Rate\n");

	for(int i=0; i<13; i++)
	{
		for(int j=0; j<20; j++)
		{
			if(Pname[i][j]!='\0')
			printf("%c", Pname[i][j]);
			else
				printf(" ");
		}
		printf("\t");
		
		for(int k=0; k<5; k++)
		{
			printf("%d\t", M1[i][k]);
		}
		
		printf("%0.2f", rate1[i]);
		printf("\n");
	}
	
	
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<5; j++)
		{
			M2[i][j]=m2[i][j];
		}
	}
	printf("\n\n\n\n");
	printf("Enter the runs scored by player in match 2:");
	scanf("%d", &M1[4][0]);
	printf("Enter the number of balls played by player in match 2:");
	scanf("%d", &M1[4][1]);
	printf("Enter the time played by player in match 2:");
	scanf("%d", &M1[4][2]);
	printf("Enter the 4's scored by player in match 2:");
	scanf("%d", &M1[4][3]);
	printf("Enter the 6's scored by player in match 2:");
	scanf("%d", &M1[4][4]);
	
	for(int i=5; i<13; i++)
	{
		for(int j=0; j<5; j++)
		{
			M2[i][j]=m2[i-1][j];
		}
	}
	
	printf("Match 2:\n");
	printf("Player Name\tRuns\tBalls\tTime\t4's\t6's\tStrike Rate\n");

	for(int i=0; i<13; i++)
	{
		for(int j=0; j<20; j++)
		{
			if(Pname[i][j]!='\0')
			printf("%c", Pname[i][j]);
			else
				printf(" ");
		}
		printf("\t");
		
		for(int k=0; k<5; k++)
		{
			printf("%d\t", M2[i][k]);
		}
		
		printf("%0.2f", rate2[i]);
		printf("\n");
	}
}

void delete()
{
	printf("The index for each player is:");
	printf("0-KL Rahul\n1-M Vijay\n2-CA Pujara\n3-V Kohli\n4-AM Rahane\n5-RG Sharma\n6-R Ashwin\n7-WP Saha\n8-RA Jadeja\n9-UT Yadav\n10-I Sharma\n11-Extra Runs");
	printf("\nEnter the index of the player to be deleted:");
	int x;
	scanf("%d", &x);

	for(int i=x; i<12; i++)
	{
		for(int j=0; j<5; j++)
		{
			m1[x][j]=m1[x+1][j];
		}
		for(int k=0; k<20; k++)
		{
			pname[x][k]=pname[x+1][k];
		}
	}
		float rate1[12], rate2[12];
	
	for(int i=0; i<8; i++)
	{
		rate1[i]=(m1[i][0]/(float)m1[i][1])*100;
		rate2[i]=(m2[i][0]/(float)m2[i][1])*100;
	}
	
	for(int i=8; i<12; i++ )
	{
		rate1[i]=0;
		rate2[i]=0;
	}
	
	printf("\n\nMatch 1:\n");
	printf("Player Name\tRuns\tBalls\tTime\t4's\t6's\tStrike Rate\n");

	for(int i=0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			if(pname[i][j]!='\0')
			{
			printf("%c", pname[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\t");
		
		for(int k=0; k<5; k++)
		{
			printf("%d\t", m1[i][k]);
		}
		
		printf("%0.2f", rate1[i]);
		printf("\n");
	}
	
	printf("\n\n\nMatch 2:\n");
	printf("Player Name\tRuns\tBalls\tTime\t4's\t6's\tStrike Rate\n");

	/*for(int i=0; i<12; i++)
	{
		/for(int j=0; j<12; j++)
		{
			if(pname[i][j]!='\0')
				printf("%c", pname[i][j]);
			else
				printf(" ");
		}*/
		gets(Pname[4]);
		printf("\t");
		
		for(int k=0; k<5; k++)
		{
			printf("%d\t", m2[i][k]);
		}
		
		printf("%0.2f", rate2[i]);
		printf("\n");
	}
}
	
void main()
{
	int n=1;
	while(n==1)
	{
		int opt;
		printf("\n\n\n1-Print scorecards for the 2 matches.\n2-Total Runs Scored by each player after the 2 matches.\n3-Person who scored highest runs after both matches.\n4-Total score of team India after both matches.\n5-Maximum number of balls faced by a player after both matches and name of the player.\n6-Player who scored highest runs by boundaries.\n7-To delete all the records of a player from both scorecards and print the result.\n8-Display all the players who has faced more than 100 balls or spent more than 100 minutes on the crease in each innings.\n9-Insert new player data after V Kohli with user entered data and display each scorecard.\n");
		printf("\nEnter the option:");
		scanf("%d", &opt);
	
		switch(opt)
		{
			case 1:scorecard();
				break;
		
			case 2:total_runs();
				break;
			case 3:highest_scorer();
				break;
			case 4:total_score();
				break;
			case 5:maxballs();
				break;
			case 6:boundaries();
				break;
			case 7:delete();
				break;
			case 8:time();
				break;
			case 9:insert();
				break;
		}
	}
}