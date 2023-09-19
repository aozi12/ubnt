#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){      
int num[7];   
srand(time(NULL));  

    num[0]= rand()%45+1;   
    for(int i = 1 ; i <7 ; ++i){         
    num[i] =rand()%45+1;         
    for(int j= 0; j<i; ++j){            
    while(num[i] == num[j]){               
    num[i]=rand()%45+1;               }           
     }           
      }            
    printf("lotto num:%d %d %d %d %d %d %d\n", num[0],num[1],num[2],num[3],num[4],num[5],num[6]);            
return 0;
}
