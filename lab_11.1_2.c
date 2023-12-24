/*Q.2 Write a Program to swap two variables using Pointers.

Output:
enetr value of X: 7
enetr value of Y: 5
before swaping
x=7
y=5
After swaping
x=5 
y=7

*/

#include<stdio.h>

void main(){
	
	int x,y;
	printf("enetr value of X: ");
	scanf("%d",&x);
	printf("enetr value of Y: ");
	scanf("%d",&y);
	
	int *ptr1,*ptr2;
	ptr1=&x;
	ptr2=&y;
	
	printf("before swaping \n");
	printf("x=%d \n",*(ptr1));
	printf("y=%d \n",*(ptr2));	

	printf("After swaping \n");
	printf("x=%d \n",*(ptr2));
	printf("y=%d",*(ptr1));
	
}
