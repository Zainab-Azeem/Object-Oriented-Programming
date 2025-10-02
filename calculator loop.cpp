#include <iostream>
using namespace std;
int main(){
	string question;
	while(question!="n"){
		int num1,num2;
		string operation;
		cout<<"enter number1";
		cin>>num1;
		cout<<"enter number2";
		cin>>num2;
		cout<<"enter operation";
		cin>>operation;
		if (operation=="+"){
	        cout<<num1+num2;	
		}
		else if (operation=="-"){
	        cout<<num1-num2;	
		}
			else if (operation=="*"){
	        cout<<num1*num2;	
		}
		    else if (operation=="/"){
	        cout<<num1/num2;	
		}
		cout<<"do you want to continue";
		cin>>question;
	
		}
	
	return 0;
}

