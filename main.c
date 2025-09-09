#include <stdio.h>
#include <string.h>

typedef struct{
       int ID;
       char name[100][15];
       char prenome[100][15];
       int playernumber;
       char playerrole[100][15];
       int age;
       int goals;
}player;
player p1;

void Addingplayer();


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
         
  
      printf("\n-----------Football Team Managment-----------");
      printf("\n1. Add a New Player");
      printf("\n2. Add multiple players");
      printf("\n---------------------------------------------");
      printf("\nEnter Your Choice: ");
           scanf("%d",&choice1); 

             if(choice1 == 1){


             } else if(choice1 == 2){

             }else{
                   printf("wrong Choice must be ( 1 or 2)");
                   Addingplayer();
             }
  

}