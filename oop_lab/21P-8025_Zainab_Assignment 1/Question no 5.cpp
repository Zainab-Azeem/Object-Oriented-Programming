#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	cout<<"Game of a random number "<<endl;
	int count=0;
	srand(time(0));
	int random_num;
	random_num=0 + (rand() % 100);
	cout<<"random number "<<random_num;
    cout<<" A random number is generated, try to guess it. "<<endl;
    int num;
    while(random_num!=num){
    	cout<<"enter a number to guess from 0 to 100 "<<endl;
    	cin>>num;
    	if(num>random_num){
    		cout<<"Your number is high, please try again "<<endl;
		}
		else if(num<random_num){
    		cout<<"Your number is low, please try again "<<endl;
		}
		count+=1;
		if(random_num==num){
    	 cout<<"You found random number in "<<count<<" count attempts."<<endl;
		}
	}
	if (count<=5){
	    cout<<"Excellent ";
	}
	else{
	    cout<<"Good ";
	}
	return 0;	
}
