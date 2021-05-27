#include<bits/stdc++.h>
using namespace std;

int main() {

	    int n,d;
	    int i;
	    cin>>n>>d;
	    int arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    for(i=0;i<n;i++)
	    {
	        cout<<arr[(d+i)%n]<<" ";
	    }
	return 0;
}

