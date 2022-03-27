#include "bits/stdc++.h"

using namespace std;

// !NEVER FORGET TO WRITE BASE CONDITION


// SUM = 1 + 2 + 3 + .....+ (n-1) + n;

/** 
 ** I TRUST THE FUNCTION IF I ASK IT TO RETURN THE 
 ** THE LAST NUMBER IT WILL GIVE ME BACK 
 * 
 ** I HAVE TO ASK HIM TO DO IT FOR N-1 TIMES AS WELL
 */


int sum_num(int n){
    int sum = 0;
    if(n == 0) return 0;
    sum = sum_num(n-1) + n;
    return sum;
}

int main(){
    cout<<sum_num(10);
    return 0;
}