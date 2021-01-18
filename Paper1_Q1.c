//Tutree : C++ Programming internship
//Paper : 1
//Q1 : Find the smallest and second smallest elements in an array.

//standard input output header file
#include <stdio.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long

//swap function using third variable used in sorting
void swap(ll int* a, ll int* b) 
{ 
	ll int tmp = *a; 
	*a = *b; 
	*b = tmp; 
}

//function to sort the given array and print the smallest and second smallest element
void smallest( ll int arr[], int n )
{   
    ll int i, j;
    
    //sorting array in ascending 
    ll int temp;
    for( i = 0; i < n - 1; i++) 
    { 
    	temp = i; 
    	for ( j = i + 1; j < n; j++) 
    		if (arr[j] < arr[temp]) 
    			temp = j; 

    	swap(&arr[temp], &arr[i]); 
    } 
    
    //printing first and second element
    printf("\nThe smallest element is %lld and\n", arr[0]);
    for ( i = 0; i < n; i++)
    {
        if( arr[0] == arr[i] )
        continue;
        else
        {
            printf("second Smallest element is %lld", arr[i]); break;
        }  
    }
}

signed main()
{
    ll int n, i;
    printf("Enter size of array : ");
    scanf("%lld",&n);

    ll int arr[n];

    printf("\nEnter %lld elements : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    smallest( arr, n );
    return 0;
}