//Sophia Hostetler
//U27264415
//This code will ask the user to input the size of the input array, elements of the input array, and the key array and have the output displayed

#include<stdio.h>

void encode( int a[], int b[], int key[],int n);

int main()
{
	int n, i;
	int a[100];
	int key[10];
	int b[100];

//prompt user to enter input array size

	printf("Enter the size of the input array: ");
		scanf("%d", &n);

//prompt user to enter numbers and for loop to put them in array

	printf("Enter the number: ");
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

//prompt user to enter key array and for loop to put in array

	printf("Key array: ");
	for(i=0;i<10;i++)
		scanf("%d", &key[i]);

//call encode function

	encode(a,b,key,n);

//display output and for loop for array

	printf("Output: ");
	for(i=0;i<n;i++)
		printf("%d ", b[i]);

return 0;
}

void encode(int a[], int b[], int key[], int n)
{
	
	int i,j;
//for loop for array a

	for(i=0;i<n;i++)

//for loop for key array

	for(j=0;j<10;j++)
		if(a[i]==key[j])
		b[i]=j;
}
