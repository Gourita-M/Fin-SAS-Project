#include <stdio.h>
#include <string.h>

int count=0;

typedef struct{
       int ID[100];
       char name[100][15];
       char lastname[100][15];
       int playernumber[100];
       char playerrole[100][15];
       int age[100];
       int goals[100];
}player;
player p1;

void Addingplayer();
void ShowPlayers();


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
       case 1:  // Add a Player
              Addingplayer();
        break;
       case 2:
              ShowPlayers();
        break;
       case 3:
        
        break;
       case 4:
        
        break;
       case 5:
        
        break;
       case 6:
        
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

            count++ ;
            printf("\nPlayer Added successfully!\n");

             } else if(choice1 == 2){

              printf("Enter Number of Players to add: ");
                    scanf("%d",&players);

                for(int i=0 ; i < players ; i++){
              printf("\n-----------Adding Player %d -----------", i+1);
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
  printf("---------------Players List---------------\n");
        for(int i = 0 ; i < count ; i++) 
        printf("Player Name: %s",p1.name[i]);
        printf("Player Last Name: %s",p1.lastname[i]);
        printf("Player Name: %s",p1.name[i]);
        printf("\nAdd Player Number: %d",p1.playernumber[i]);                
        printf("\nAdd Player Position: %s",p1.playerrole[i]);             
        printf("\nAdd Player Age: %d",p1.age[i]);            
        printf("\nAdd Player Goals: %d",p1.goals[i]);
                        
}