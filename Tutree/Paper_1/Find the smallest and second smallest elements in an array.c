#include <stdio.h>
#include <limits.h>

void solve(int arr[], int n)
{
    int  first = INT_MAX , second = INT_MAX;
    if (n < 2)
    {
        printf(" Invalid Input ");
        return;
    }
 
    
    for (int i = 0; i < n ; i ++)
    {
        
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }

        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
       printf("There is no second smallest element\n");
    else
        printf("%s%d%s%d\n","The smallest element is " ,first," and second Smallest element is ",second ); 

}
int main() {
	
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	solve(arr,n);
	
	return 0;
}
