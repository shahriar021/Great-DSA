#include<bits/stdc++.h>

using namespace std;

int maxSumSubarray(int arr[],int n,int k){
    int l=0,ans=0,maxi=0;

    for(int r=0;r<n;r++){
        ans+=arr[r];

        if(r>=k-1){
            maxi=max(ans,maxi);
            ans-=arr[l];
            
            l++;
        }
        
        cout<<maxi<<endl;
    }

    return maxi;
}

int main (){
    int arr[] = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum sum of subarray of size " << k << " is " << maxSumSubarray(arr, n, k) << endl;
    return 0;
}