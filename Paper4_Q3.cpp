//Tutree : C++ Programming internship
//Paper : 4
//Q3 : Find the minimum distance between two numbers.

#include <bits/stdc++.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

void mdistance( ll int arr[], ll int n, ll int x, ll int y) 
{ 
    int i, j; 
    int min_dist = INT_MAX; 
    for (i = 0; i < n; i++) 
    { 
        for (j = i+1; j < n; j++) 
        { 
            if( (x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j]) && min_dist > abs(i-j)) 
            { 
                min_dist = abs(i-j); 
            } 
        } 
    } 
    cout << "\nmin distance is : " << min_dist; 
} 
 
signed main()
{
    ll int n, x, y, i;
    printf("Enter size of array : ");
    scanf("%lld",&n);

    ll int arr[n];

    printf("\nEnter %lld elements : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    printf("\nEnter first number : ");
    scanf("%lld",&x);

    printf("\nEnter second number : ");
    scanf("%lld",&y);

    mdistance( arr, n, x, y );
    return 0;
}