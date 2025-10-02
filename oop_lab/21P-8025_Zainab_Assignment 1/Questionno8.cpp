#include<iostream>
using namespace std;
class batsman{
private:
	int bcode; 
    char bname[20]; 
    int innings;
	int  not_out; 
	int runs;
    int batavg;
	int calcavg(){
		if(innings!=not_out){
			batavg =runs/(innings-not_out);
			return batavg;
		}
		else {
			return batavg=0;
		}
   }
		
public:
   void read_data(){
   	    cout<<" Enter bcode ";
   	    cin>>bcode;
   	    
   	    cout<<" Enter bname ";
   	    cin>>bname;
   	    
   	    cout<<" Enter innings ";
   	    cin>>innings;
   	    
   	    cout<<" Enter not_out ";
   	    cin>>not_out;
   	    
   	     cout<<" Enter runs ";
   	    cin>>runs;
   	    
   	    
   	    calcavg();  }	
		   	
void display_data(){
	cout<<" bcode : "<<bcode<<"\n bname : "<<bname<<"\n innings : "<<innings
	<<"\n not_out : "<<not_out<<"\n runs : "<<runs<<"\n batavg : "<<batavg;
}
	
	
};
int main(){
	batsman b1;
	b1.read_data();
	b1.display_data();
	
	return 0;
}
