#include<iostream>
using namespace std;
int * arrayFunction(int a){
	int* array=new int[a];
	 for(int i=0;i<a;i++){
	 	cout<<"enter a number "<<endl;
	 	cin>>array[i];
	 }
	 return array;
}
	
int main(){
	int x;
	cout<<"enter the size of an array ";
	cin>>x;
   int * b=arrayFunction(x);
   cout<<"Displaying array "<<endl;
   for(int i=0;i<x;i++){
	 	cout<<*b<<endl;
	 	b++;
	 }
	 cout<<endl;
	//delete[] b;
	
	return 0;
}


