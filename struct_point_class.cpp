#include <iostream>
using namespace std;
int n;
 struct student{
 	int rollno;
 	string name;
 	int age;
 	string address;
 };
 void gna(student a[], int n){
         for(int i=0;i<n;i++){
         	if (a[i].age==14){
		cout<<"name of student"<<a[i].name<<endl;
        cout<<"address of the student"<<a[i].address<<endl;}
		} }
 void gn(student s[], int n){
         for(int i=0;i<n;i++){
         	if (s[i].rollno%2==0){
		cout<<"name of student"<<s[i].name<<endl; }
		} }
 
int main(){
	int n1;
	cout<<"enter the number of students in an array";
	cin>>n1;
	student s[n1];
	for(int i=0;i<n1;i++){
		cout<<"enter roll number of student";
		cin>>s[i].rollno;
		cout<<"enter name of student";
		cin>>s[i].name;
		int tem;
		cout<<"enter age of student";
		cin>>tem;
		if(tem>=10 || tem<=14){
			s[i].age=tem;
		}
		cout<<"enter address of the student";
		cin>>s[i].address;	}
		
	//	cout<<"enter n";
	//	cin>>n	;
	gna(s , n1) ;
	gn(s , n1) ;
	
	
return 0;	}








/*#include <iostream>
using namespace std;
int average(int *p,int b){
	int ave;
	int sum=0;
	for(int i=0;i<b;i++){
		sum=sum+ *(p+i);
	}
//	p++;
return 	sum/b;
}
int main(){
	int a;
	cout<<"enter number";
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++){
		cout<<"enter number at index "<<i;
		cin>>arr[i];
	}
	int n;
	cout<<"enter n";
	cin>>n;
	cout<<average(arr,n);
}*/



/*#include <iostream>
using namespace std;
class circle{
private:
	int length;
	int breath;
	int height;
public:
	void setl(int newl){
		length=newl;
	}
		void setb(int newb ){
		breath=newb;
	}
		void seth(int newh){
		height=newh;
	}
	int getl(){
		return length;
	}
    int getb(){
		return breath;
	}
	int geth(){
		return height;
	}
	int getarea(){
		return length*breath*height;
	}
	void setdata(int newl, int newb , int newh){
		length=newl;
		breath=newb;
		height=newh;
	}
	int getdata(){
		return length*breath*height;
	}
	
};
int main(){
	circle c,c1,c3;
	c.setl(4);
	c1.setl(110); 
	c.setb(2);
	c.seth(3);
	c3.setdata(34,76,89);
	cout<<c.getl()<<endl;
	cout<<c1.getl()<<endl;
	cout<<c.getb()<<endl;
	cout<<c.geth()<<endl;
	cout<<c.getarea()<<endl;
	cout<<c3.getarea()<<endl;
	cout<<c3.getdata()<<endl;
}*/
