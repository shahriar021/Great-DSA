#include<bits/stdc++.h>

using namespace std;

int maxAvgSubarray(int arr[],int n,int k){
    double maxi=0;
    int sum=0;
    double avg=0;

    for(int i=0;i<k;i++){
        sum+=arr[i];
        
    }

    maxi=sum/k;

    for(int i=k;i<n;i++){
        
        sum+=arr[i]-arr[i-k];
        avg=(double)sum/k;
        maxi=max(maxi,avg);
        cout<<maxi<<endl;
    }

    return maxi;
}

int main (){
    int arr[] = {2, 1, 3, 5, 9, 0,1};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum sum of subarray of size " << k << " is " << maxAvgSubarray(arr, n, k) << endl;
    return 0;
}