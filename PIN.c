//Sophia Hostetler
//U27264415
//This program creates PINs with random digits that are not repeated once given the length of the PIN


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void create(int a[], int n);

int main()
{
	int n, i;

//prompt user to enter length

	printf("Enter the length of the PIN: ");
		scanf("%d", &n);

//if statement validating the length is valid

	if((n<2)||(n>8))
	{
		printf("PIN length is invalid-needs to be between 2 and 8.");
		return 0;
	}
	int a[n];
	
//call create function

	create(a,n);
	
//for loop to print array

	for(i=0; i<n; i++)
		printf("%d",a[i]);

return 0;
}

void create(int a[],int n) {
        srand(time(NULL));
        int i=0;
        int upper=9;
        int lower=0;
	int j;

//while loop generating random numbers

	while(i<n)
        {
                a[i]=(rand()%(upper-lower+1))+lower;
		int dup=0;

//for loop to check for duplicates

                for(j=0; j<i; j++)
                {
                        if(a[i]==a[j])
                        {
                                dup = 1;
                                break;
                        }
		}
		if(dup == 0)
                {
			i++;
		}
	}
}

