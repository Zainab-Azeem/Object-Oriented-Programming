/* Student Management System
Write a program that uses a structure to store the student data (student name,
and an array containing the marks of 3 courses). Your program must have 3
functions.
Display_data(): Take the array of struct as an argument and displays the data
of all students.
Change Marks(): Takes one student as an argument. Asks the course no and
updated marks from the user. And update the information accordingly.
Calc_Average_Marks():
Take one student variable as an argument and
calculates the average marks of that student.
See the screenshot for a better picture: */
#include <iostream>
using namespace std;

struct  student{
    string stu_name;
    int array[3];
    
};


void display(student s[]){
   cout<<"student data "<<endl;     
   for(int i=0;i<3;i++){ 
    cout<<"student name : "<<s[i].stu_name<<endl;
    cout<<"student marks  "<<endl;
     for(int j=0;j<3;j++){
          cout<<" marks of subject "<<j+1<<" : ";
          cout<<s[i].array[j];
          cout<<endl;
      }
    
   }
}

void update_marks(student s[],int n,int x){
    if(n>3){
        cout<<"sorry their is no course num :  "<<n<<"  is available \n "; 
    }

 else{
     x=x-1;
    int a=n-1;
    int b;
     for(int i=0;i<3;i++){
         if(i==a){
          cout<<"enter marks of subject "<<i+1<<" : ";
          cin>>b;
          s[x].array[i]=b;
         }
         
      }
 }  
     
}

void calculate_average(student s[],int n){
    n=n-1;
    int count=0;
    int c=0;
    for(int i=0;i<3;i++){
          count+=s[n].array[i];
          cout<<endl;
      }
      c=count/3;
      cout<<"average : "<<c<<endl;
}


int main()
{
string question="y";
   student s[3];
  for(int i=0;i<3;i++){
     cout<<"enter name ";
      cin>>s[i].stu_name;
      
      for(int j=0;j<3;j++){
          cout<<"enter marks of subject "<<j+1<<" : ";
          cin>>s[i].array[j];
      }
      
}
  

    int options;

    
    
while(question=="y" || question=="Y" ){
    cout<<"\n 1- Display data ";
    cout<<"\n  2- change marks ";
    cout<<"\n  3- calculate average ";
    cout<<"\n select options : ";
    cin>>options;
    cout<<endl;
switch(options) {
  case 1:
      display(s);
    break;
  case 2:
    int no;
    int x;
    
    cout<<"select student from (1-3) ";
    cin>>x;
    
    while(true){
        if(x<1 || x>3){
           cout<<"select student from (1-3)  ";
           cin>>x;
          
        }
      if(x>0 && x<=3){
          break;
      }
    }
    
    
    cout<<"enter the course number you want to change ";
    cout<<"select course no from (1-3) ";
    cin>>no;
   
    update_marks(s,no,x);
    break;
    
  case 3:
       
    
    cout<<"select student ";
    cin>>x;
    
    while(true){
        if(x<1 || x>3){
           cout<<"select student ";
           cin>>x;
          
        }
      if(x>0 && x<=3){
          break;
      }
    }
     calculate_average(s,x); 
    
    
    break;
    
  default:
    cout<<"invalid  \n";
    break;
}
cout<<"do you want to continue ";
cin>>question;
}
 
    return 0;
}
