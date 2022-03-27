#include<bits/stdc++.h>
using namespace std;

void sortKsortedArray(int arr1[], int k,int size){

    

    for(int i=0; i<size; i++){
        cout<<arr1[i]<<" ";
    }
}

int main(){
    int arr[] = {10,9,7,8,4,70,50,60};

    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    sortKsortedArray(arr,k,size);
    return 0;
}