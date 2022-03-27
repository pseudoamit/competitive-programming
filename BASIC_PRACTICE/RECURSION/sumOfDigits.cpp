#include "bits/stdc++.h"

using namespace std;

// !NEVER FORGET TO WRITE BASE CONDITION

/**
 ** I want to return the sum of the digits of the number 145347
 * 
 **  return sumOfDigits(14534) + 7
 */



int sumOfDigits(int n){

    if( n == 0 ){
        return 0;
    }

    int remainder = n / 10;
    int last_digit = n % 10;

    return  sumOfDigits(remainder) + last_digit;

}


int main(){

    cout<<sumOfDigits(145347);
    return 0;

}