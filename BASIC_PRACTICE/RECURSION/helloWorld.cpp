#include "bits/stdc++.h"
using namespace std;

// !always should have a base condition


// *I trust the function it will one time say hello
// My job is ask the function to execute n-1 time hello as well

void say_hello(int n){

    if(n == 0) return ;
    cout<<"Hello "<<n<<"\n";
    say_hello(n-1);
}


int main(){

    say_hello(10);
    return 0;
}