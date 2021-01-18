//Tutree : C++ Programming internship
//Paper : 3
//Q2 : Program for array rotation

#include <bits/stdc++.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

void leftsiderotate( ll int arr[], ll int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
  
    arr[i] = temp; 
} 
  
void rotate( ll int arr[], ll int d, ll int n) 
{ 
    for (int i = 0; i < d; i++) 
    {
        leftsiderotate(arr, n);
    }
    
    cout << "After rotation : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }   
} 

signed main()
{
    ll int n, i, k;
    printf("Enter size of array : ");
    scanf("%lld",&n);

    ll int arr[n];

    printf("\nEnter %lld elements : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    
    printf("\nEnter no. of rotations : ");
    scanf("%lld",&k);

    rotate( arr, k, n );
    return 0;
}