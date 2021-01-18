//Tutree : C++ Programming internship
//Paper : 1
//Q2 : Find median in a stream of integers (running integers)

#include <bits/stdc++.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

signed main() 
{
    set<int> md;
	ll int n, i;
    printf("Enter size of array : ");
    scanf("%lld",&n);

    ll int arr[n];

    printf("\nEnter %lld elements : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    int count = sizeof(arr)/sizeof(arr[0]);
    cout << "\nMedians are : ";
    for(int i =0; i < count; i++) 
    {
        md.insert(arr[i]);
        int to_find = (i)/2;
        int median = 0;
        set<int>::iterator it = md.begin();
        {
            // odd, the
            for(int in = 0; in <to_find; in++) 
            {
                ++it;
            }
            median = *it;
        }
        
        if (!((i+1)%2)) 
        {
            // if this is even; then find the to_find+1;
            ++it;
            median  = (median + (*it))/2; 
            
        }
        
        for(it = md.begin(); it != md.end(); ++it) 
        {
            //cout << *it << "\t";    
        }
        
        cout << median << " ";
    }
    
	return 0;
}