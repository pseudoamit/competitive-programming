#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int size){
    bool swapped;
    for(int i=0; i<size-1; i++){
        swapped = false;
        for(int j=0; j <size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
}

int main(){

    int arr[] = {8,4,3,5,90,21,2,45};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort( arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

