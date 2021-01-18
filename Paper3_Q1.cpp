//Tutree : C++ Programming internship
//Paper : 3
//Q1 : Union and Intersection of two sorted arrays

#include <bits/stdc++.h>
//defing ll as long long to save time and won't lack of memory
#define ll long long
using namespace std;

void unionn( ll int arr1[], ll int arr2[], ll int m, ll int n ) 
{ 
    int i = 0, j = 0; 
	while (i <= m && j < n) 
    { 
		if (arr1[i] < arr2[j]) 
			cout << arr1[i++] << " "; 

		else if (arr2[j] < arr1[i]) 
			cout << arr2[j++] << " "; 

		else 
        { 
			cout << arr2[j++] << " "; 
			i++; 
		} 
	} 

	while (i < m) 
		cout << arr1[i++] << " "; 

	while (j < n) 
		cout << arr2[j++] << " ";    
} 

void intersection( ll int arr1[], ll int arr2[], ll int m, ll int n) 
{ 
    int i = 0, j = 0; 
    while (i < m && j < n) 
    { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
        } 
    } 
}

signed main()
{
    ll int n, m, i;
    printf("Enter size of array 1 : ");
    scanf("%d",&n);

    ll int arr1[n];

    printf("\nEnter %d elements : ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("\nEnter size of array 2 : ");
    scanf("%d",&m);

    ll int arr2[m];

    printf("\nEnter %d elements : ",m);
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    cout << "\nUnion of two arrays : ";
    unionn( arr1, arr2, m, n );
     
    cout << "\n\nIntersection of two arrays : ";
    intersection( arr1, arr2, m, n );
    return 0;
}