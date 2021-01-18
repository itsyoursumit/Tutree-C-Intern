//Tutree : C++ Programming internship
//Paper : 2
//Q1 : Write a program to print all the LEADERS in the array.

#include <bits/stdc++.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

//function to print the leader elements as per the rule
void leaders( ll int arr[], ll int n ) 
{   
    ll int i, j;
    cout << "\nLeaders are : ";
    for ( i = 0; i < n; i++) 
    {  
        for ( j = i+1; j < n; j++) 
        { 
            if (arr[i] < arr[j])
            {
                break;
            }
        }     
        if (j == n)
        {
            cout << arr[i] << " "; 
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
    
    leaders( arr, n );

    return 0;
}