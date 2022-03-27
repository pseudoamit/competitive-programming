#include "bits/stdc++.h"
using namespace std;

// !NEVER FORGET TO WRITE BASE CONDITION

/**
 * 
 * 1   2   3   4   5   6   7   8   9    .........
 * 0   1   1   2   3   5   8  13   21   .........
 * 
 *  f7 = f6 + f5
 *  f6 = f5 + f4
 *  f5 = f4 + f3
 *  .
 *  .
 * 
 ** for f2 & f1 we have exception
 ** f2 will return 1
 ** f1 will return 0
 * 
 */


int fibonacci(int n){
    if(n == 2) return 1;
    if (n == 1) return 0;

    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){


    cout<<fibonacci(9);
    return 0;

}