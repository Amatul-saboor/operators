//analog clock which consists of two hands one for hour and another for minute.
She/he wants to calculate the shorter angle formed between hour and minute hand at any given time.
//CODE
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
