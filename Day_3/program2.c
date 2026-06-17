#include <stdio.h>
int main () {

int a,b,temp ;
printf("Enter the numbers :") ;
scanf( "%d %d", &a,&b);

while (b!=0) {
 temp = a % b;   
 a=b ;
 b=temp ;
 } 
printf(" GDC of the numbers is : %d", a );

return 0;
}