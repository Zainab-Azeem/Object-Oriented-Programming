#include<iostream>
using namespace std;
struct Distance{
	float feet;
	float inches;
};
struct Volume{
	Distance length;
	Distance height;
	Distance width;
	
};

int main(){
	Volume room;
	cout<<"enter value of feet and inches  for length"<<endl;
	cin>>room.length.feet>>room.length.inches;
	cout<<"enter value of feet and inches  for height"<<endl;
	cin>>room.height.feet>>room.height.inches;
	cout<<"enter value of feet and inches  for width"<<endl;
	cin>>room.width.feet>>room.width.inches;
	float l,h,w,volume;
	 l=room.length.feet+room.length.inches/12;
	 h=room.height.feet+room.height.inches/12;
	 w=room.width.feet+room.width.inches/12;
     volume=l*h*w;
    cout<<"Volume of room is "<<volume;
   
	
	return 0;
}
