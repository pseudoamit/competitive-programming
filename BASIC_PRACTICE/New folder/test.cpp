#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<int> nums = {1,2,3,4};

        int finalProduct = 1;
        int isZeroes = 0;
        
        vector<int> finalArray = {};
        
        for(auto &x : nums){
            if( x == 0){
                isZeroes++;
                continue;
            }
            finalProduct *= x;
        }
        
        for(auto &x : nums){
            
            if (isZeroes == 1){
                if( x != 0){
                    finalArray.push_back(0);
                    continue;
                }else{
                    finalArray.push_back(finalProduct);
                    continue;
                }
            }else if( isZeroes >= 1){
                finalArray.push_back(0);
                continue;
            }else{
                int numberProduct = finalProduct;
                bool negResult = false;
                if (numberProduct < 0)
                {
                    numberProduct = -numberProduct ;
                    if (x < 0)
                        x = - x ;
                    else
                        negResult = true;
                }
                else if (x < 0)
                {
                    x = - x ;
                    negResult = true;
                }
                int result = 0;
                while (numberProduct >= x)
                {
                    numberProduct = numberProduct - x ;
                    result++ ;
                }
                if (negResult){
                    finalArray.push_back(-result);
                }else{
                    finalArray.push_back(result);
                }
            }
        }

        for(auto &x : finalArray){
            cout<<x<<" ";
        }

    return 0;
}