// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void bubble(int* arr,int n){
    int temp;
    bool isSwapped =false;
   for(int j = 0; j < n-1 ; j++) {
        for(int i = 0; i < n-1-j ; i++) {
            if(arr[i] > arr[i + 1]) {
                // Swap
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                isSwapped=true;
            }
        }
        if(!isSwapped){
            break;
        }
    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    int n=5;
    int arr[n]={5,9,8,7,1};
    bubble(arr,n);
    return 0;
}