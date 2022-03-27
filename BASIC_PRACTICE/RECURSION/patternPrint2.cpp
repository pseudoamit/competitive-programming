#include "bits/stdc++.h"

using namespace std;

// !NEVER FORGET TO WRITE BASE CONDITION

/**
 *  1 2 3 4 .. n
 *  1 2 3 4
 *  1 2 3
 *  1 2 
 *  1
 *  1 2
 *  1 2 3
 *  1 2 3 4
 *  1 2 3 4 .. n
 * 
 * 
 ** 
 ** 
 ** 
 */


void printThePatter(int n){

    if(n == 1){
        cout<<n<<endl;
        return;
    }

    for(int i=1; i <= n; i ++){
        cout<<i<<" ";
    }
    cout<<endl;
    
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