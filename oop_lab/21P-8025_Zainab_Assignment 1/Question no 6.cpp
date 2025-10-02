#include<iostream>
using namespace std;
int main(){
    int count=0;
	char  str[100];
	cout<<"enter a string ";
	cin>>str;
	char*ptr= str;

	
     while(*ptr != '\0'){	    
	    count+=1;
	    ptr++;
	}
	cout<<"Length of a string = "<<count;
	
		
	return 0;
}
