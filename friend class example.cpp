#include<iostream>
using namespace std;
class Distance{
  private:
  int x;
  int y;
  public:
  friend void Sum(Distance u,Distance v);
 Distance(){
        x=0;
        y=0;
     }
     Distance(int a,int b){
        x=a;
        y=b;
     }
     void display(){
         cout<<x<<" , "<<y<<endl;
     }

};
 void Sum(Distance u , Distance v){
    Distance d;
    int a,b ,c;
    a= d.x=v.x-u.x;
    b= d.y=v.y-u.y;
    c=a+b;
    cout<<"distance between two points is "<<c; 
  } 



int main(){
    Distance D1(2,3), D2(6,7);
    D1.display();
    D2.display();
    Sum(D1,D2);
    
    
    return 0;
}

