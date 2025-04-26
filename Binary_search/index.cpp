#include<bits/stdc++.h>

using namespace std;

void recursiveBinary(int n,int* arr,int low,int high,int target){
    if (low > high) { cout<<"not found.";return;};

    int mid=low+(high-low)/2;

    if(arr[mid]==target){
         cout<<"found->"<<arr[mid]<<" at index->"<<mid<<endl;
         return;
    }

    if(arr[mid]<target){
        return recursiveBinary(n,arr,mid+1,high,target);
    }else{
        return recursiveBinary(n,arr,low,mid-1,target);
    }
    

}


int main(){
    int arr[]={1,9,45,89,200,564};
    int n=6;
    int target =200;
    recursiveBinary(n,arr,0,n-1,target);
    return 0;
}