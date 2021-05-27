#include <bits/stdc++.h>
using namespace std;
bool compare(int x, int y)
{
    return abs(x) < abs(y);
}
 
void findMinSum(int arr[], int n)
{
    sort(arr, arr + n, compare);
    int min = INT_MAX, x, y;
    for (int i = 1; i < n; i++) {
 
        // Absolute value shows how close it is to zero
        if (abs(arr[i - 1] + arr[i]) <= min) {
 
            // if found an even close value
            // update min and store the index
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
        }
    }
    cout << "The two elements whose sum is minimum are "
         << arr[x] << " and " << arr[y];
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findMinSum(arr, n);
    return 0;
   
}
