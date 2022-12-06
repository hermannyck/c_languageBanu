#include"stdio.h"

int main (){
  int myarray[2][2] ={
                       {1,2},
					   {3,4}
			};
  int i,j;
  for (i=0; i<2; i++){
  	for(j=0; j<2; j++){
  		
  		printf("%d", myarray[i][j]);
	  }
	  printf("\n");
  }
  return 0;
}
