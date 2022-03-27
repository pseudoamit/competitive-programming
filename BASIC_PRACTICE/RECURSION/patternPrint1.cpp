#include "bits/stdc++.h"

using namespace std;

// !NEVER FORGET TO WRITE BASE CONDITION

/**
 *  1
 *  1 2
 *  1 2 3
 *  1 2 3 4
 *  1 2 3 4 5
 * 
 *
 * 
 ** 
 ** 
 ** 
 */


void printThePatter(int n){

    if(n == 0) return;

    printThePatter(n-1);

    for(int i=1; i <= n; i ++){
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(){

   printThePatter(10);
    return 0;

}