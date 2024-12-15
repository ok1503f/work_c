#include <stdio.h>
#include <stdbool.h>

int main ( ) {
float a , b = 3;
bool condition = 0 ;

printf("%d ", condition );

int i = 0;

if( condition != 0 ){
 printf("ok\n ");
 
 } else { 
    while  (i <= 5 ){
       printf("not-okey- %d ", ++i);
 }
}

for(i = 3 ; i < 10 ; i += 1){

 if( i % 2 == (condition ? 1 : 2 )) {
   printf("see see"); 
 }
 printf("haha");
}
return 0;
}