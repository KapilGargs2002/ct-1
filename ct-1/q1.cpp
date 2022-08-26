// Name=Kapil garg
// Roll no. 2010990359
// Set no.
// question 1


#include<bits/stdc++.h>
using namespace std;
 
void re(int arr[], int n)
{

    for (int i=0; i<n-1; i=i+2)
    {
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
 
    if (n & 1)
    {
        for (int i=n-1; i>0; i=i-2)
            if (arr[i] > arr[i-1])
                swap(arr[i], arr[i-1]);
    }
}
 

void display(int arr[], int size)
{
    for (int i=0; i < size; i++)
        cout<<arr[i];
 
    
}
 

int main()
{
	int n;
	cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    
    re(arr, n);
    display(arr, n);
    return 0;
}