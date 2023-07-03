#include<iostream>
using namespace std;

int main(){
	int  t,hr,min;
	float deg,minHand=1.5;
	cout<<"enter test cases"<<endl;
	cin>>t;
	cout<<"enter current time "<<endl;
	cin>>hr>>min ;
	
	while(t>0){
		if(min==0){
			deg=30*hr;
		}
		else{
			deg=0.5*min;
		}
		t--;
	}
	cout<<(deg);
	return 0;
}