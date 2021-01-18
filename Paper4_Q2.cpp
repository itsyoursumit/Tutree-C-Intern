//Tutree : C++ Programming internship
//Paper : 4
//Q2 : Find duplicates in O(n) time and O(1) extra space

#include <bits/stdc++.h>
#include <stdlib.h>
#include <math.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

void repeating( ll int arr[], int n)
{
    cout << "\nRepeating elements are:" << endl;
    for (int i = 0; i < n; i++) 
    {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
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
    
    repeating( arr, n );
    return 0;
}