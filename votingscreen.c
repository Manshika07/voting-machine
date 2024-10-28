// File by Anushka , Praveen , Isha
#include <stdio.h>
#include <stdlib.h>
#include "poll.c"
int  user=0;
int votes[5] = {0};
int choice(int);
int result();

int choice(int voterid)
{
	printf("\t\t\t\tEnter Your Choice:\n\n");
	printf("		*************************************************************\n");
	printf("		|           1.BJP             |          2.Congress         |\n");
	printf("		*************************************************************\n");
	printf("		|           3.SPA             |          4.BSP              |\n");
	printf("		*************************************************************\n");
	printf("		|                           5.NOTA                          |\n");
	printf("		*************************************************************\n\n");

	printf("\n      Please cast your valuable vote : ");
	scanf("%d", &user);
	switch (user)
	{
	case 1:
		votes[0]++;
		printf("\n\t\t\t*********Vote recorded successfully for Voter ID ~ %d ~*********\n", voterid);
		break;
	case 2:
		votes[1]++;
		printf("\n\t\t\t*********Vote recorded successfully for Voter ID ~ %d ~*********\n", voterid);
		break;
	case 3:
		votes[2]++;
		printf("\n\t\t\t*********Vote recorded successfully for Voter ID ~ %d ~*********\n", voterid);
		break;
	case 4:
		votes[3]++;
		printf("\n\t\t\t*********Vote recorded successfully for Voter ID ~ %d ~*********\n", voterid);
		break;
	case 5:
		votes[4]++;
		printf("\n\t\t\t*********Vote recorded successfully for Voter ID ~ %d ~*********\n", voterid);
		break;

	default:
		printf("Wrong Input:");
		break;
	}
	sleep(3);
	system("clear");
}

int result(int bars[])
{
	int i, fbars[5] = {0};
	srand(time(NULL));

	for (i = 0; i < 20; i++)
	{	system("clear");
		int r1 = rand() % 20 + 1;
		int r2 = rand() % 20 + 1;
		int r3 = rand() % 20 + 1;
		int r4 = rand() % 20 + 1;
		int r5 = rand() % 20 + 1;
		fbars[0] = r1;
		fbars[1] = r2;
		fbars[2] = r3;
		fbars[3] = r4;
		fbars[4] = r5;
		printf("\n\n");
		drawBars(fbars, 5);		
		usleep(1000*550);
		
		
	}
	system("clear");
	drawBars(bars, 5);
	printf("\nbjp: %d\ncongress: %d\nspa: %d\nbsp: %d\nNOTA %d\n", votes[0], votes[1], votes[2], votes[3],votes[4]);
	if (votes[0] > votes[1] && votes[0] > votes[2] && votes[0] > votes[3])
	{
		printf("\nBJP won the election with %d votes ",votes[0]);
	}
	if (votes[1] > votes[0] && votes[1] > votes[2] && votes[1] > votes[3])
	{
		printf("\nCONGRESS won the election with %d votes ",votes[1]);
	}
	if (votes[2] > votes[1] && votes[2] > votes[0] && votes[2] > votes[3])
	{
		printf("\nSPA won the election with %d votes ",votes[2]);
	}
	if (votes[3] > votes[1] && votes[3] > votes[2] && votes[3] > votes[0])
	{
		printf("\nBSP won the election with %d votes ",votes[3]);
	}
	if (votes[4] > votes[1] && votes[4] > votes[2] && votes[4] > votes[0] && votes[4] > votes[3])
	{
		printf("\n %d People voted for None of the Above ( NOTA )  ",votes[4]);
	}
	//sleep(5);
	exit(0);
	system("clear");
}

// int main()
// {
// 	int i;
// 	printf("Welcome to Election 2024\n");
// 	for (i = 0; i < 10; i++)
// 	{
// 		choice(123);
// 	}
// 	system("clear");
// 	result(votes);
// 	return 0;
// }