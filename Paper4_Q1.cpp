//Tutree : C++ Programming internship
//Paper : 4
//Q1 : Two elements whose sum is closest to zero

#include <bits/stdc++.h>
#include <stdlib.h>
#include <math.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

void minsumduo( ll int arr[], ll int arr_size)
{
    int inv_count = 0;
    int l, r, min_sum, sum, min_left, min_right;
     
    if(arr_size < 2)
    {
        cout << "Invalid Input";
        return;
    }
     
    min_left = 0;
    min_right = 1;
    min_sum = arr[0] + arr[1];
     
    for(l = 0; l < arr_size - 1; l++)
    {
        for(r = l + 1; r < arr_size; r++)
        {
            sum = arr[l] + arr[r];
            if(abs(min_sum) > abs(sum))
            {
                min_sum = sum;
                min_left = l;
                min_right = r;
            }
        }
    }
     
    cout << "\nTwo elements are " << arr[min_left] << " & " << arr[min_right];
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
    
    minsumduo( arr, n );
    return 0;
}