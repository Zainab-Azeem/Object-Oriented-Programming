#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	srand(time(0));
	int arr[2][2];
	cout<<"creating random 2D array"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			arr[i][j]=rand();
		}
	}
	cout<<"Displaying random number array "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
