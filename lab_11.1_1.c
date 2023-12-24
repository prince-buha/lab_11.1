/*Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.

Output:
enter size the size of Array: 5
enter array's elements:

enter A[0]: 2

enter A[1]: 3

enter A[2]: 4

enter A[3]: 5

enter A[4]: 6
square of all array elemets are : 4  9  16  25  36
*/

#include<stdio.h>

void main(){
	int n;
	printf("enter size the size of Array: ");
	scanf("%d",&n);
	int a[n],i;
	int *ptr;
	
	printf("enter array's elements: \n");

	for(i=0; i<n; i++){
		printf("\nenter A[%d]: ",i);
		scanf("%d",&a[i]);
	}	
	ptr=&a;
	printf("square of all array elemets are :");
	for(i=0; i<n; i++){
		printf(" %d ",*(ptr+i)**(ptr+i));
	}
}
