#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ srand(time(0));
  int player ,computer =rand()%3;
  printf("Choose 0 for Snake,1 for Water,2 for Gun \n");
  scanf("%d",&player);
  printf("Computer chosed %d \n",computer);
  if(player==0 &&computer==0){
    printf("It's a draw");
  }
  else if ( player==0 && computer ==1){
    printf("You won !\n");

  }
   else if ( player==0 && computer ==2){
    printf("You lose \n");
  }
   else if ( player==1 && computer ==0){
    printf("You lose\n");
  }
   else if ( player==1 && computer ==1){
    printf("It's draw \n");
  }
   else if ( player==1 && computer ==2){
    printf("You won ! \n");
  }
   else if ( player==2 && computer ==0){
    printf("You won !\n");
  }
   else if ( player==2 && computer ==1){
    printf("You lose\n");
  }
   else if ( player==2 && computer ==2){
    printf("It's draw");
  }
  else{
    printf("Something went wrong \n");
  }
   

  return 0;
}