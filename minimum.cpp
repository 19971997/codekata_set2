#include <iostream>
using namespace std;
int main(){
   int n, small;
   int num[50];
   cout<<"Enter no.of.elements in array: ";
   cin>>n;
   cout<<"Enter Elements";
    for(int i = 0; i < n; i++) {
      cin>>num[i];
   }
   small = num[0];
   for(int i = 1;i < n; i++) {
       if(small > num[i])
         small = num[i];
   } 
   cout<<"Minimum element in array is: "<<largest;
   return 0;
}
