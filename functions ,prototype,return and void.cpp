#include<iostream>
using namespace std;
/* void calculator(int a,int b){
	int sum,sub,mul;
	sum=a+b;
	sub=a-b;
	mul=a*b;                                                     #function with no return
	cout<<"sum is "<<sum<<endl;
	cout<<"sub is "<<sub<<endl;
	cout<<"mul is "<<mul<<endl;  
}      
int main(){
int	x=4;
int	y=8;
int a;
calculator(x,y); 
	return 0;} */
// --------------------------------------------------------------------------------
// function with retun	
	int square(int a){
		int s;
		s=a*a;
		return s;
	}
main(){
	int x=6;
	int r;
	cout<<square(x)<<endl;
	r=square(x);
	cout<<r;
}  

 /*void calculator(int a,int b);          //prototype
int main(){
int	x=4;
int	y=8;
int a;
calculator(x,y); 
	return 0;}
void calculator(int a,int b){
int sum,sub,mul;
	sum=a+b;
	sub=a-b;
	mul=a*b;                                                //     #function with no return
	cout<<"sum is "<<sum<<endl;
	cout<<"sub is "<<sub<<endl;
	cout<<"mul is "<<mul<<endl;}  */
	
	       

