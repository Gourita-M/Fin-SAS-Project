#include <stdio.h>
#include <string.h>

int count=0;
int playerid=1000;

typedef struct{
       int id[100];
       char name[100][15];
       char lastname[100][15];
       int playernumber[100];
       char playerrole[100][15];
       int age[100];
       int goals[100];
}player;
player p1;
player p2;

void Addingplayer();
void ShowPlayers();
void Editplayer();
void DeletePlayer();
void Searchforplayer();
void playersStatistics();

int main(){
     int choice;

    do{
    
      printf("\n-----------Football Team Managment-----------");
      printf("\n1. Add a Player");
      printf("\n2. Show All Players");
      printf("\n3. Edit Player");
      printf("\n4. Delete Player");
      printf("\n5. Search for Player");
      printf("\n6. Statistics");
      printf("\n0. Exit");
      printf("\n---------------------------------------------");
      printf("\nEnter Your Choice: ");
           scanf("%d",&choice);
       switch (choice){
       case 1:  
              Addingplayer();
        break;
       case 2:
              ShowPlayers();
        break;
       case 3:
              Editplayer();
        break;
       case 4:
              DeletePlayer();
        break;
       case 5:
              Searchforplayer();
        break;
       case 6:
              playersStatistics();
        break;
       
       default:
        break;
       }


    } while (choice != 0);
    return 0;
}

void Addingplayer(){
       int choice1;
       int players;
         
  
      printf("\n-----------Football Team Managment-----------");
      printf("\n1. Add a New Player");
      printf("\n2. Add multiple players");
      printf("\n---------------------------------------------");
      printf("\nEnter Your Choice: ");
           scanf("%d",&choice1); 

             if(choice1 == 1){
                  playerid=playerid+1;
                  printf("Player ID is ( %d )",playerid);
                  printf("\nAdd Player Name: ");
                        scanf("%s",p1.name[count]);
                  printf("\nAdd Player Last Name: ");
                        scanf("%s",p1.lastname[count]);
                  printf("\nAdd Player Number: ");
                        scanf("%d",&p1.playernumber[count]);
                  printf("\nAdd Player Position: ");
                        scanf("%s",p1.playerrole[count]);
                  printf("\nAdd Player Age: ");
                        scanf("%d",&p1.age[count]);
                  printf("\nAdd Player Goals: ");
                        scanf("%d",&p1.goals[count]);

                      p1.id[count] = playerid;
            count++ ;
            printf("\nPlayer Added successfully!\n");
            

             } else if(choice1 == 2){
       
              printf("Enter Number of Players to add: ");
                    scanf("%d",&players);

                for(int i=0 ; i < players ; i++){
      playerid=playerid+1;
              printf("\n-----------Adding Player %d -----------\n", i+1);
                  printf("Player ID is ( %d )",playerid);
                  printf("\nAdd Player Name: ");
                        scanf("%s",p1.name[count]);
                  printf("\nAdd Player Last Name: ");
                        scanf("%s",p1.lastname[count]);
                  printf("\nAdd Player Number: ");
                        scanf("%d",&p1.playernumber[count]);
                  printf("\nAdd Player Position: ");
                        scanf("%s",p1.playerrole[count]);
                  printf("\nAdd Player Age: ");
                        scanf("%d",&p1.age[count]);
                  printf("\nAdd Player Goals: ");
                        scanf("%d",&p1.goals[count]);
      p1.id[count] = playerid;
            count++ ;
            printf("\nPlayer Added successfully!\n");
                } 
             }
              else{
                   printf("wrong Choice must be ( 1 or 2)");
                   Addingplayer();
             }
  
}
void ShowPlayers(){
      int choice5;
      char searchbyposition[20];
      int choiceposition;
           
   printf("\n---------------Show Players---------------\n");
         
        printf("\n1. Show all Players in Alphabically sort.\n");
        printf("2. Show all Players by Age.\n");
        printf("3. Show all Players By Position.\n");
        printf("\n---------------------------------------------");
        printf("\nEnter Your Choice: ");
           scanf("%d",&choice5); 
            
             if(choice5 == 1){
                  
       }        
                  else if(choice5 == 2){

      
       }
                           else if(choice5 == 3){
                                         printf("\n---------------Show Players By Position---------------\n");
         
                                         printf("\n1. goalkeeper.\n");
                                         printf("2. defender.\n");
                                         printf("3. midfielder.\n");
                                         printf("4. attacker.\n");
                                         printf("\n---------------------------------------------");
                                         printf("\nEnter Your Choice: ");
                                            scanf("%d",&choiceposition); 
                                               if(choiceposition == 1)
                                                     strcpy(searchbyposition, "goalkeeper");

                                                     else if(choiceposition == 2)
                                                            strcpy(searchbyposition, "defender");

                                                            else if(choiceposition == 3)
                                                                   strcpy(searchbyposition, "midfielder");

                                                                    else if(choiceposition == 4)
                                                                            strcpy(searchbyposition, "attacker");
                                                                        
                                                                            else{
                                                                              printf("Wrong Choice (1 - 4)");
                                                                            }
                                             printf("Goalkeepers");
                                  for(int i = 0 ; i< count ; i++){
                                      if (strcmp(p1.playerrole[i], searchbyposition) == 0)
                       {
                                    printf("\n              **********\n");
                           printf("Player ID: %d",p1.id[i]);
                           printf("\nPlayer Name: %s",p1.name[i]);
                           printf("\nPlayer Last Name: %s",p1.lastname[i]);
                           printf("\nPlayer Number: %d",p1.playernumber[i]);                
                           printf("\nPlayer Position: %s",p1.playerrole[i]);             
                           printf("\nPlayer Age: %d",p1.age[i]);            
                           printf("\nPlayer Goals: %d",p1.goals[i]);
                       }}

                  
       }
       else{
            printf("\nWrong Choice Must be Between (1 - 3)");
            return ShowPlayers();
       }

}

void Editplayer(){
         int choice2;
         int search;
  
 printf("\n---------------Edit Player---------------\n");
         
        printf("\n1. Change Player Postion\n");
        printf("2. Change Player age\n");
        printf("3. Change Player Scored Goals\n");
        printf("\n---------------------------------------------");
        printf("\nEnter Your Choice: ");
           scanf("%d",&choice2); 
            
             if(choice2 == 1){
                  
       }        
                  else if(choice2 == 2){
      
       }
                           else if(choice2 == 3){

                  
       }
       else{
            printf("Wrong Choice Must be Between (1 - 3)");
            return Editplayer();
       }

              
}

void DeletePlayer(){

        int playerID;

        printf("\n---------------Delete Player---------------\n"); 
        printf("\n Enter Player's ID To Delete: ");
        scanf("%d",&playerID);
        printf("\n---------------------------------------------");


}

void Searchforplayer(){
         int choice3;
         int idsearch;
         char namesearch[10];
         int found=1;

        printf("\n---------------Search for Player---------------\n"); 
        printf("\n 1. Search for Player By ID. ");
        printf("\n 2. Search for Player By Name. ");
        printf("\n---------------------------------------------");
        printf("\nEnter Your Choice: ");
           scanf("%d",&choice3);

                  if(choice3 == 1){
                        printf("Enter Player ID : ");
                            scanf("%d",&idsearch);

                  for(int i = 0 ; i < count ; i++){
                       if(idsearch == p1.id[i]){

                                   printf("*****Player Found*****");
                           printf("\nPlayer Name: %s",p1.name[i]);
                           printf("\nPlayer Last Name: %s",p1.lastname[i]);
                           printf("\nPlayer Number: %d",p1.playernumber[i]);                
                           printf("\nPlayer Position: %s",p1.playerrole[i]);             
                           printf("\nPlayer Age: %d",p1.age[i]);            
                           printf("\nPlayer Goals: %d",p1.goals[i]);
                       }
                       
                  }
       }        
                  else if(choice3 == 2){
                        printf("Enter Player Name : ");
                            scanf("%s",namesearch);

                  for(int i = 0 ; i< count ; i++){
                       if (strcmp(p1.name[i], namesearch) == 0)
                       {
                                    printf("\n*****Player Found*****");
                           printf("\nPlayer Name: %s",p1.name[i]);
                           printf("\nPlayer Last Name: %s",p1.lastname[i]);
                           printf("\nPlayer Number: %d",p1.playernumber[i]);                
                           printf("\nPlayer Position: %s",p1.playerrole[i]);             
                           printf("\nPlayer Age: %d",p1.age[i]);            
                           printf("\nPlayer Goals: %d",p1.goals[i]);
                           found=0;
                       }
                  }                
      
       }
        
       else{
            printf("\nWrong Choice Must be Between (1 - 2)\n");
            return Searchforplayer();
       }
}

void playersStatistics(){
      int choice4;

            printf("\n---------------Players Statistics---------------\n"); 
            
            printf("1. Show the total number of players in the team.\n");

            printf("2. Show the average age of players.\n");

            printf("3. Show players who have scored more than X goals (X entered by user).\n");

            printf("4. Show top scorer (player with the most goals).\n");

            printf("5. Show youngest and oldest player.\n");

            printf("0. Exit\n");

            printf("\n---------------------------------------------\n");
                 
            printf("\nEnter Your Choice: ");
                      scanf("%d",&choice4);

            switch (choice4)
            {
            case 1:  
                printf("\nTotal Number of Players in the Team: %d\n",count);
        break;
       case 2:
              playersStatistics();
        break;
       case 3:
              playersStatistics();
        break;
       case 4:
              playersStatistics();
        break;
       case 5:
              playersStatistics();
        break;
       case 0:
              
        break;
            }

}