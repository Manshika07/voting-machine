// File by Naina Anjali Ratnesh 

#include <stdio.h> // by Dennis Ritchie
#include <unistd.h>
#include"votingscreen.c"// by Anushka , Praveen , Isha
#include<time.h>
struct Voter
{
    int voterId;
    int age;
    int aadhar;
};


void validation(struct Voter voters[], int *totalVotes)
{
    int voterId, age;
    int ll = 100000;
    int ul = 999999;
    int aadhar;
    int i, max_attempts = 3, attempts = 0;
    int delaySeconds = 2;

    while (1)
    {   
        system("clear");
        printf("\n  Enter Voter ID: ");
        scanf("%d", &voterId);
        if (voterId >= ll && voterId <= ul)
        {
            for (i = 0; i < *totalVotes; ++i)
            {
                if (voters[i].voterId == voterId)
                {
                    printf("\n  Voter with ID %d has already voted.\n  PLease vote with valid ID \n", voterId);
                    sleep(3);
                    system("clear");

                    return;
                }
            }
            printf("\n  Enter Your Age: ");
            scanf("%d", &age);
            if (age >= 18)
            {   
                
                printf("\n  Enter Your Aadhar Number: ");
                scanf("%d", &aadhar);
                printf("\n");
                system("clear");
                choice(voterId); // from votingscreen.c

                //sleep(delaySeconds);
                system("clear");
            }
            else
            {   
                voterId = 0;
                printf("\n  Not eligible for voting!\n");
                sleep(3);
                system("clear");
            }

            break;
        }
        else
        {
            ++attempts;
            if (attempts == 3)
            {
                printf("\n  Too many incorrect attempts ---Moving to the next candidate!---\n");

                sleep(3);
                system("clear");
                break;
            }
            else
                printf("\n  ERROR: Incorrect ID attempts left: %d\n", max_attempts - attempts);
                sleep(3);
        }
    }

    voters[*totalVotes].voterId = voterId;
    voters[*totalVotes].age = age;
    voters[*totalVotes].aadhar = aadhar;

    // printf("*********Vote recorded successfully for Voter ID %d*********\n", voterId);

    (*totalVotes)++;
}

int mainscreen()
{   system("clear");
    const int MAX_VOTERS = 100;
    struct Voter voters[MAX_VOTERS];
    int totalVotes = 0;
    int choice = 1;
    int delaySeconds = 2;
    do
    {   printf("----------------------------------------------------------------------------------------------------------------------\n\n");
        printf("\t\t\tKINDLY CHOOSE AN OPTION\n");
        printf("\n  1. Enter votes \n");
        printf("\n  2. View Results\n");
        printf("\n  3. Exit\n");
        printf("\n");
        printf("Enter choice : ");
        scanf("%d", &choice);        

        switch (choice)
        {
        case 1:
            validation(voters, &totalVotes);
            break;
        case 2:
            result(votes);
            break;
        case 3:
            break;

        default:
            printf("\n Invalid Chioce\n Please enter choice between 1 and 2  !!!\n");
            printf("\n");
            sleep(3);
            system("clear");            
            break;
        }

    } while (choice != 3);
}
