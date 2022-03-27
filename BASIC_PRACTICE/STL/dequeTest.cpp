#include<iostream>
#include<deque>

using namespace std;


int main(){

    deque<int>  d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);

     cout<<"First Element  :"<<d.at(0)<<endl;
    cout<<"Before poping any element   :";
    for(auto i : d){
        cout<<i<<"";
    }
    cout<<endl;

    cout<<"After popout the First and Last Element   :";

    d.pop_front();
    d.pop_back();

    for(auto i : d){
        cout<<i<<"";
    }

    cout<<endl;

    cout<<"First Elemnent :"<<d.front()<<endl;
    cout<<"Last Elemnent :"<<d.back()<<endl;

    d.erase(d.begin(), d.begin() + 1);

    cout<<"After erasing one element from front: ";
    for(auto i : d){
        cout<<i<<"";
    }
   
    d.erase(d.end(), d.end() + 1);

    cout<<endl;
    cout<<"After erasing one element from back: ";
    for(auto i : d){
        cout<<i<<"";
    }

    return 0;
}