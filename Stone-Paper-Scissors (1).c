
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



void main(){

	int choiceUser = 0; // the User's choice (0-1-2) 
	int userCounter = 0; // counter to show the results
	int computerCounter = 0;
	//char choice = 'a'; // for repeating the program
	//int choiceComputer = 0;
	//do {
	printf("Make a move: Stone(0), Scissors(1), Paper (2): ");
	scanf("%i :", &choiceUser); // read in
	


	char *string_table[] = { // array of pointers to constant strings
         "Stone",
         "Paper",
         "Scissors",
        
     };
    
     int table_size = 3; // This must match the number of entries above

     srand(time(NULL)); // randomize the start value

     char *rand_string = string_table[rand() % table_size];
     
     printf("\nThe computer pulled a %s\n", rand_string); // print the random chouce

     // switch(hash(rand_string)){ // different method
     // 	case "Stone": choiceComputer = 0;
     // 	case "Scissors": choiceComputer = 1;
     // 	case "Paper": choiceComputer = 2;
     // }


     // I know this is not the best way to present it, however,]
     // putting it into a function the does the switch operation was unsuccessful 


     if(rand_string == "Stone" && choiceUser == 1)
     {
     	printf("The computer won the draw\n");
		computerCounter++; // increase counter
     }

     else if(rand_string == "Stone" && choiceUser == 0)
     {
     	printf("This is a draw\n");

     	//nothing to do with the counter
		
     }

      else if(rand_string == "Stone" && choiceUser == 2)
     {
     	printf("You have won the drwa!\n");
     	userCounter++;
		
     }

   	
   	else if(rand_string == "Scissors" && choiceUser == 0)
     {
     	printf("You have won the draw\n");
		userCounter++; // increase the user counter
     }

     else if(rand_string == "Scissors" && choiceUser == 1)
     {
     	printf("This is a draw\n");
		
     }

      else if(rand_string == "Scissors" && choiceUser == 2)
     {
     	printf("The computer has won!\n");
     	computerCounter++;
		
     }

     else if(rand_string == "Paper" && choiceUser == 0)
     {
     	printf("The computer has won the draw!\n");
		computerCounter++;
     }

     else if(rand_string == "Paper" && choiceUser == 1)
     {
     	printf("The user has won the draw!\n");
     	userCounter++;
		
     }

      else if(rand_string == "Paper" && choiceUser == 2)
     {
     	printf("This is a draw!\n");
     
     }

     printf("The counter is %i - %i\n",userCounter,computerCounter );
    
	 //printf("One more time (Y/N)\n");
	 //scanf ("%c \n", &choice);


	//}while( choice != 'n' || choice != 'N'); 

   


    

}
     
 


