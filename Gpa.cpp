#include <iostream>
using namespace std;
int main(){
	int n;
	int y=1;
	int x=0;
	float sum;
	cout<<"Enter the number of Subjects:";
	cin>>n;
		float a,b;
	for (int i=1;i<=n;i++){
		int hours;
		string grade;
		cout<<"enter your grade in subject"<<" "<<y<<":"<<endl;
		cin>>grade;
		cout<<"enter hours in subject"<<" "<<y<<":"<<endl;
		cin>>hours;
		y++;
		if (grade=="A"){
			a=hours*4.0;
			b+=a;
			x+=hours;
		}        
        else if (grade=="A-"){
            a=hours*3.67;
			b+=a;
			x+=hours;}
        else if (grade=="B+"){
            a=hours*3.33;
            b+=a;
			x+=hours;
           }
        else if (grade=="B"){
              a=hours*3.0;
			  b+=a;
			x+=hours;}
        else if (grade=="B-"){
              a=hours*2.67;
			  b+=a;
			x+=hours;}
        else if (grade=="C+"){
              a=hours*2.33;
			  b+=a;
			x+=hours;}
        else if (grade=="C"){
              a=hours*2.0;
			  b+=a;
			x+=hours;}
        else if (grade=="C-"){
              a=hours*1.67;
			  b+=a;
			x+=hours;}
        else if (grade=="D+"){
              a=hours*1.33;
			  b+=a;
			x+=hours;}
        else if (grade=="D"){
              a=hours*1.0;
              b+=a;
			x+=hours;
			  }
        else if (grade=="F"){
              a=hours*0;
			  b+=a;
			x+=hours;}
            
}
     cout<<"The grade is"<<"  "<<b/x;
     return 0;
 }
	
