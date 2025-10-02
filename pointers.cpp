#include <iostream>
using namespace std;
int main(){
	// pointers 
	int a=3;
	int * b= &a;
    // &--------> address of operator
    cout<<b<<endl;   //  print adresss of a  so b is pointer that holds address of a 
    cout<<&a<<endl;         //  print adresss of a  
      // * (value at)--------->Derefrence operator
	cout<<"value of address b "<<*b<<endl;
	cout<<"-----------------------------------"<<endl;
    //pointer to pointer     //store pointer address pointer to pointer 
	int ** c= &b; 
	cout<<"address of b is "<<&b<<endl;
	cout<<"adresss of b is "<<c<<endl;
	cout<<"adresss of b is "<<*c<<endl;
	cout<<"value of b is "<<**c<<endl;
	cout<<"-----------------------------------"<<endl;
	
	
	//Arrays
	int marks[5]={01,11,23,35,47};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	cout<<marks[4]<<endl;
	cout<<"-----------------------------------"<<endl;
	
	
	int score[4]={22,44,55,66};
	for(int i=0;i<4;i++){
		cout<<"these are scores "<<score[i]<<endl;	
	}
		cout<<"-----------------------------------"<<endl;
	//pointer and arrays
	cout<<score<<endl;
	int*p=score;
	cout<<"value of score[0] is "<<*p<<endl;
	cout<<"value of score[1] is "<<*(p+1)<<endl;
	cout<<"value of score[2] is "<<*(p+2)<<endl;
	cout<<"value of score[3] is "<<*(p+3)<<endl;
	cout<<"-----------------------------------"<<endl;
	
	
		//int*p=score;
		cout<<*(p++)<<endl;
		cout<<*(++p)<<endl;
	//	cout<<"value at *p is "<<*p<<endl;
	//	cout<<"value at *(p+1) is "<<*(p+1)<<endl;
	//	cout<<"value at *(p+2) is "<<*(p+2)<<endl;
	//	cout<<"value at *(p+3) is "<<*(p+3)<<endl;
		return 0;
	
}
