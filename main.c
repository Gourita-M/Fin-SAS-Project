#include <stdio.h>
#include <string.h>

int count=0;
int playerid=1000;



typedef struct{
       int id;
       char name[15];
       char lastname[15];
       int playernumber;
       char playerrole[15];
       int age;
       int goals;
} Player;

Player p1[100];

void Addingplayer();
void ShowPlayers();
void Editplayer();
void DeletePlayer();
void Searchforplayer();
void playersStatistics();
void Randomplayers();

int main(){
      Randomplayers();
     int choice;

           do{
    
                  printf("\n=============================================");
                  printf("\n           Football Team Management           ");
                  printf("\n=============================================");
                  printf("\n  [1] Add a Player");
                  printf("\n  [2] Show All Players");
                  printf("\n  [3] Edit Player");
                  printf("\n  [4] Delete Player");
                  printf("\n  [5] Search for Player");
                  printf("\n  [6] Statistics");
                  printf("\n  [0] Exit");
                  printf("\n---------------------------------------------");
                  printf("\n Enter Your Choice: ");

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
                        printf("Leaving...");
                            break;
       }


} while (choice != 0);

   return 0;
}

void Addingplayer(){

       int choice1;
       int players;
         
                 printf("\n=============================================");
                 printf("\n           Football Team Management           ");
                 printf("\n=============================================");
                 printf("\n  [1] Add a New Player");
                 printf("\n  [2] Add Multiple Players");
                 printf("\n---------------------------------------------");
                 printf("\n  Enter Your Choice: ");

                 scanf("%d",&choice1); 

      if(choice1 == 1){

                  playerid=playerid+1;

                  printf("\n------------Player ID is ( %d )------------",playerid);
                  printf("\nAdd Player Name: ");
                        scanf("%s",p1[count].name);
                  printf("\nAdd Player Last Name: ");
                        scanf("%s",p1[count].lastname);
                  printf("\nAdd Player Number: ");
                        scanf("%d",&p1[count].playernumber);
                  printf("\nAdd Player Position (goalkeeper, defender, midfielder, attacker): ");
                        scanf("%s",p1[count].playerrole);
                  printf("\nAdd Player Age: ");
                        scanf("%d",&p1[count].age);
                  printf("\nAdd Player Goals: ");
                        scanf("%d",&p1[count].goals);

                  p1[count].id = playerid;
            count++ ;
                  printf("\n*******Player Added successfully!*******\n");
      } 
            else if(choice1 == 2){

                  printf("Enter Number of Players to add: ");
                   scanf("%d",&players);

                  for(int i=0 ; i < players ; i++){

                         playerid=playerid+1;

                  printf("\n --------------Adding Player %d --------------\n", i+1);
                  printf("              Player ID is ( %d ) ",playerid);
                  printf("\nAdd Player Name: ");
                   scanf("%s",p1[count].name);
                  printf("\nAdd Player Last Name: ");
                   scanf("%s",p1[count].lastname);
                  printf("\nAdd Player Number: ");
                   scanf(" %d",&p1[count].playernumber);
                  printf("\nAdd Player Position (goalkeeper, defender, midfielder, attacker): ");
                   scanf("%s",p1[count].playerrole);
                  printf("\nAdd Player Age: ");
                   scanf(" %d",&p1[count].age);
                  printf("\nAdd Player Goals: ");
                   scanf(" %d",&p1[count].goals);

                        p1[count].id = playerid;
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
           
                   printf("\n=============================================");
                   printf("\n              Show Players Menu              ");
                   printf("\n=============================================");
                   printf("\n  [1] Show All Players (Alphabetical Order)");
                   printf("\n  [2] Show All Players (By Age)");
                   printf("\n  [3] Show All Players (By Position)");
                   printf("\n---------------------------------------------");
                   printf("\n  Enter Your Choice: ");

                     scanf("%d",&choice5); 
            
             if(choice5 == 1){

                Player tmp;

                   for(int i=0 ; i < count - 1; i++){
                       for(int j = i + 1 ; j < count ; j++){
                           if(strcmp(p1[i].name, p1[j].name )> 0){
                                      tmp = p1[i];
                                      p1[i] = p1[j];
                                      p1[j] = tmp;
                           }
                       }
                  }
                  for(int i=0 ; i < count ; i++){
                     
                     printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                     p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);
                     
                           
                  }
                  
      }        
                  else if(choice5 == 2){
                    Player tmp;

                        for(int i=0 ; i < count - 1; i++){
                            for(int j = i + 1 ; j < count ; j++){
                                if( p1[i].age > p1[j].age ){
                                        tmp = p1[i];
                                        p1[i] = p1[j];
                                        p1[j] = tmp;
                           }
                       }
                  }
                  for(int i=0 ; i < count ; i++){

                     printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                     p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);
      
                  }
      }
                           else if(choice5 == 3){

                                          printf("\n=================================================");
                                          printf("\n            Show Players by Position            ");
                                          printf("\n=================================================");
                                          printf("\n  [1] Goalkeeper");
                                          printf("\n  [2] Defender");
                                          printf("\n  [3] Midfielder");
                                          printf("\n  [4] Attacker");
                                          printf("\n-------------------------------------------------");
                                          printf("\n  Enter Your Choice: ");

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
                                                            printf("%s Players:\n", searchbyposition);
                  for(int i = 0 ; i< count ; i++){
                     if (strcmp(p1[i].playerrole, searchbyposition) == 0){

                        printf("\n              **********\n");
                        printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                            p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);
                       }
                  }   
            }
                        else{
                           printf("\nWrong Choice Must be Between (1 - 3)");
                                       return;
                            }
}

void Editplayer(){
         int choice2;
         int search;
         int newage;
         char newposition[15];
  
                                 printf("\n=================================================");
                                 printf("\n                Edit Player Menu               ");
                                 printf("\n=================================================");
                                 printf("\n  [1] Change Player Position");
                                 printf("\n  [2] Change Player Age");
                                 printf("\n  [3] Change Player Scored Goals");
                                 printf("\n-------------------------------------------------");
                                 printf("\n  Enter Your Choice: ");

                              scanf("%d",&choice2); 
            
                  if(choice2 == 1){
                             printf("\n*********Changing Player Position*********\n");
                             printf("Enter Player ID: ");
                              scanf("%d",&search);
                   
                     for( int i = 0 ; i < count ; i++){
                        if(p1[i].id == search){
                             printf("Player is Found \n");

                             printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                               p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);

                             printf("\n Current Position is: %s",p1[i].playerrole);
                             printf("\nAdd New Position: ");
                              scanf("%s",newposition);

                                    strcpy(p1[i].playerrole, newposition);
                       }
                  }
                             printf("Player Position is Changed Successfully!");
             }
                  else if(choice2 == 2){
                             printf("\n*********Changing Player Age*********\n");
                             printf("Enter Player ID: ");
                              scanf("%d",&search);
                   for( int i = 0 ; i < count ; i++){
                      if(p1[i].id == search){
                             printf("\nPlayer is Found\n");

                             printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                              p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);

                             printf("\nCurrent Age is: %d",p1[i].age);
                             printf("\nAdd New Age: ");
                              scanf("%d",&newage);
                             printf("Player Age is Changed Successfully!");
                                       p1[i].age = newage;
                        }
                  }
            }        
      
                  else if(choice2 == 3){
                        int newgoals;

                             printf("\n*********Changing Player Scored Goals*********\n");
                             printf("Enter Player ID: ");
                              scanf("%d",&search);
                   
                   for( int i = 0 ; i < count ; i++){
                      if(p1[i].id == search){

                             printf("\nPlayer is Found \n");
                             printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                               p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);

                              printf("Current Goals are: %d",p1[i].goals);
                              printf("\nAdd New Scored Goals: ");
                               scanf("%d",&newgoals);
                               p1[i].goals = newgoals;
                        }
                  }
                              printf("Player Scored Goals Changed Successfully!");
            }

                  
                  else{
                              printf("Wrong Choice Must be Between (1 - 3)");
                                                  return;
                  }

              
}

void DeletePlayer(){  
      
                  if (count == 0) {
                              printf("Players List is Empty\n");
                                           return;
                  }
      int searchid;

                              printf("\n*************Delete Player*************\n"); 
                              printf("\n Enter Player's ID To Delete: ");
                               scanf("%d",&searchid);

                  for ( int i = 0 ; i < count ; i++ ){
                    if(searchid == p1[i].id){
                        for(int j = i ; j < count - 1 ; j++){
                           p1[j].id = p1[j+1].id ;
                           strcpy(p1[j].name, p1[j+1].name);
                           strcpy(p1[j].lastname, p1[j+1].lastname);
                           p1[j].playernumber = p1[j+1].playernumber ;           
                           strcpy(p1[j].playerrole, p1[j+1].playerrole) ;            
                           p1[j].age = p1[j+1].age ;    
                           p1[j].goals = p1[j+1].goals ;
                           
                        }
                        count--;
                              printf("\n****Player is Deleted Successfully!****\n");
                      
                  }
                     
            }
             
}

void Searchforplayer(){
         int choice3;
         int idsearch;
         char namesearch[10];
         int found=0;

                             printf("\n=================================================");
                             printf("\n         🔎  Search for Player Menu  🔎          ");
                             printf("\n=================================================");
                             printf("\n  [1] Search Player by ID");
                             printf("\n  [2] Search Player by Name");
                             printf("\n-------------------------------------------------");
                             printf("\n👉 Enter Your Choice: ");

                              scanf("%d",&choice3);

                  if(choice3 == 1){
                             printf("Enter Player ID : ");
                              scanf("%d",&idsearch);
                       
                        for(int i = 0 ; i < count ; i++){
                           if(idsearch == p1[i].id){

                              printf("*****Player Found*****\n");
                              printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                                p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);
                              }
                       
                        }
                  }        
                  else if(choice3 == 2){
                              printf("Enter Player Name : ");
                               scanf("%s",namesearch);

                  for(int i = 0 ; i< count ; i++){
                       if (strcmp(p1[i].name, namesearch) == 0){

                              printf("\n*****Player Found*****\n");
                              printf("ID: %d | Full Name: %s %s | Player Number: %d | Position: %s | Age: %d | Goals: %d\n",
                                p1[i].id,p1[i].name,p1[i].lastname,p1[i].playernumber,p1[i].playerrole,p1[i].age,p1[i].goals);
                           
                              found=0;
                        }
                  }                
      
            }
        
                  else{
                             printf("\nWrong Choice Must be Between (1 - 2)\n");
                                                  return;
       }
}

void playersStatistics(){
      int choice4;

                               printf("\n=================================================");
                               printf("\n            Players Statistics Menu            ");
                               printf("\n=================================================");
                               printf("\n  [1] Show Total Number of Players");
                               printf("\n  [2] Show Average Age of Players");
                               printf("\n  [3] Show Players with More than X Goals");
                               printf("\n  [4] Show Top Scorer");
                               printf("\n  [5] Show Youngest and Oldest Player");
                               printf("\n  [0] Exit");
                               printf("\n-------------------------------------------------");
                               printf("\n  Enter Your Choice: ");

                              scanf("%d",&choice4);

                  switch (choice4){
               case 1:  
                        if (count == 0) {
                              printf("Players List is Empty\n");
                                           return;
                        }
                             else{
                             printf("\nTotal Number of Players in the Team: %d\n",count);
                        }
               break;

               case 2:
                int sumofages=0;
                int avrg=0;
                        for( int i = 0 ; i < count ; i++){
                        sumofages = p1[i].age + sumofages;
                        }
                             avrg = sumofages / count ;

                             printf("\nThe average age of players: %d\n",avrg);
               break;
               case 3:
               int x;
                             printf("Enter Amount of Goals: ");
                              scanf("%d",&x);
                   
                             printf("Players With More Then %d Goals",x);
                                 for(int i=0 ; i < count ; i++){
                                     if( p1[i].goals > x )
                             
                             printf("\nID: %d | Full Name: %s %s | Goals: %d\n",
                               p1[i].id,p1[i].name,p1[i].lastname,p1[i].goals);

                      }
               break;
               case 4:
                       if (count == 0) {
                             printf("No players available.\n");
                                        return;
                        }
                  int maxGoals = p1[0].goals;
                  int index = 0;
                        for (int i = 1; i < count; i++) {
                            if (p1[i].goals > maxGoals) {
                               maxGoals = p1[i].goals;
                                    index = i;
                      }
                  }
                            printf("Top Scorer:\n");
                            printf("ID: %d | Name: %s %s | Goals: %d\n", p1[index].id, p1[index].name, p1[index].lastname, p1[index].goals);
               break;
               case 5:
                        if (count == 0) {
                            printf("No players available.\n");
                                         return;
                        }
                  int youngest = 0, oldest = 0;

                        for (int i = 1; i < count; i++) {
                            if (p1[i].age < p1[youngest].age) 
                                   youngest = i;
                            if (p1[i].age > p1[oldest].age) 
                                   oldest = i;
                    }
                           printf("Youngest Player: %s %s (%d years old)\n",
                               p1[youngest].name, p1[youngest].lastname, p1[youngest].age);

                           printf("Oldest Player: %s %s (%d years old)\n",
                               p1[oldest].name, p1[oldest].lastname, p1[oldest].age);
               break;
               case 0:
              
               break;
               }

}


void Randomplayers(){
   
    char names[10][15] = {"Lionel","Cristiano","Virgil","Kevin","Mohamed","Hakim","Achraf","Noussair","Yassine","Sofyan"};
    
    char lastnames[10][15] = {"Messi","Ronaldo","VanDaik","DeBruyne","Salah","Ziyech","Hakimi","Mazraoui","Bounou","Amrabat"};

    int numbers[10] = {10,7,4,17,11,7,2,3,1,4};

    char roles[10][15] = {"attacker","attacker","defender","midfielder","attacker","midfielder","defender","defender","goalkeeper","midfielder"};

    int ages[10] = {36,38,32,33,31,30,26,27,32,28};

    int goals[10] = {800,850,30,120,230,50,20,10,0,5};

    for(int i=0;i<10;i++){
        playerid++;
        p1[i].id = playerid;
        strcpy(p1[i].name, names[i]);
        strcpy(p1[i].lastname, lastnames[i]);
        p1[i].playernumber = numbers[i];
        strcpy(p1[i].playerrole, roles[i]);
        p1[i].age = ages[i];
        p1[i].goals = goals[i];
        count++;
    }
}