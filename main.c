// File by Priyanshu , Rachit

#include <stdio.h>   // by Dennis Ritchie
#include <stdlib.h>  // by Dennis Ritchie
#include<time.h>     // by Dennis Ritchie

#include "Strings.c"    // by AARZOO,ANSHIKA,SAKSHI
#include "voterid.c"    // by Naina Anjali Ratnesh 
//#include"votingscreen.c" by Anushka , Praveen , Isha

//to print the welcome to election 2024
void welcome()
{
  system("clear");
  printf("----------------------------------------------------------------------------------------------------------------------\n\n");
  printf("%s" ,pattern);
  printf("%s", space);
  printf("%s", to);
  printf("%s", space);
  printf("%s", election);
  printf("%s", space);
  printf("%s", num);
  printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");
  sleep(6);
  system("clear");
  
}
//to print the parties
void party(char *Name, char *party, char *symbol){
  printf("----------------------------------------------------------------------------------------------------------------------\n\n");
  printf("Candidate: %s\n\nParty: %s\n\nSymbol: \n\n%s", Name, party, symbol);
  printf("----------------------------------------------------------------------------------------------------------------------\n\n");
  sleep(5);
  system("clear");
}
//to print the instructions 
void message()
{
  system("clear");
  printf("----------------------------------------------------------------------------------------------------------------------\n\n");
  printf("%s", instructions);
  printf("\n\n----------------------------------------------------------------------------------------------------------------------\n\n");

}


int main()
{
  // welcome();
  // party(bjp_candidate, bjp, bjp_symbol);
  // party(congress_candidate, congress, congress_symbol);
  // party(spa_candidate, spa, spa_symbol);
  // party(bsp_candidate, bsp, bsp_symbol);
  message();
  printf("Press any key to continue ");
  getchar();
  system("clear");

  mainscreen(); // from the file voterid.c
  

  return 0;
}
