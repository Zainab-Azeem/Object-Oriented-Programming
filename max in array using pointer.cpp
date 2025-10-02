#include <iostream>
using namespace std;
int maximun(int *ptr){
//	int *ptr=arr;
	int max=*ptr;
 for(int i=0;i<4;i++){
 	if(*ptr>max){
 		max=*ptr;
	 }
	 ptr++;
 }
   return max;
}
int main(){
    int array[4]={100,2,42300,1000};
    cout<<maximun(array);

return 0;
}



