#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main(){
//	char first_name[20]{};
//	char last_name[20]{};
	char full_name[50]{};
//	char temp[50]{};
	
//	cout<<"enter your first name: ";
//	cin>>first_name;
//	cout<<"Enter your last name: ";
//	cin>>last_name;
//	
//	cout<<"Hello "<<first_name<<", Your firstname has "<<strlen(first_name)<<" Characters";
//	cout<<" And your last name has " <<strlen(last_name)<<" Characters"<<endl;
//	
//	strcpy(full_name,first_name);
//	strcat(full_name," ");
//	strcat(full_name,last_name);
//	cout<<full_name;
//
//
//	cout<<"Your full name is: "<<full_name<<endl;

	cout<<"Enter your full name: ";
	cin.getline(full_name,50);
	cout<<"Full name: "<<full_name<<endl;
}
