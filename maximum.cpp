#include <iostream>
using namespace std;
int main(){
   int n, largest;
   int num[50];
   cout<<"Enter no.of.elements in array: ";
   cin>>n;
    for(int i = 0; i < n; i++) {
      cout<<"Enter Elements";
      cin>>num[i];
   }
   largest = num[0];
   for(int i = 1;i < n; i++) {
       if(largest < num[i])
         largest = num[i];
   } 
   cout<<"Largest element in array is: "<<largest;
   return 0;
}
