#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int num, n1, a, n2 = 0, sum = 0, power;
   cout << "Enter an number:";
   cin >> num;
   n1= num;
   while (n1>0) {
      n1=n1/10;
      n2++;
   }
   n1 = num;
   while (n1> 0) {
      a = n1% 10;
      power = pow(a, n2);
      sum+= power;
      n1=n1/10;
   }
  if (sum == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
  }


