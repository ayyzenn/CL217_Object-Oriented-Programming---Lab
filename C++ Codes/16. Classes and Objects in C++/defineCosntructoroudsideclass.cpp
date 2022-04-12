using namespace std;
#include<iostream>

class Sum
{
   //Constructor declaration
   public:
   Sum(int l, int m, int n);
   Sum(int l, int m);

}; // end of class body

int main () {

    Sum s1=Sum(3,4,5);
    Sum s2=Sum(2,4);
    //Sum s1(3,4,5), s2(2,4);
   
   return 0;
}  //end of main() function

// Constructor definition outside Class
Sum::Sum(int l, int m, int n)
   {
       cout<<"Sum of three integer is= "<<(l+m+n)<<endl;
   }
   
Sum::Sum(int l, int m)
   {
       cout<<"Sum of two integer is= "<<(l+m)<<endl;
   } 