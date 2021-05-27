#include <bits/stdc++.h>
using namespace std;
    vector<int> leaders(int arr[], int n){
        // Code here
        int max = arr[n-1];
        vector<int> ans;
        ans.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=max)
            {
               ans.push_back(arr[i]); 
               max = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


int main()
{
 
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
       

   }
}
