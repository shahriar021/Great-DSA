// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void selection(int* arr,int n){
    int temp,min;
    
    for(int i=0;i<n-1;i++){
        min =i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                min=j;
            }
            
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    int n=5;
    int arr[n]={5,9,8,7,1};
    selection(arr,n);
    return 0;
}