using namespace std;
#include<iostream>
class Sum
{
   public:
   Sum(int l, int m, int n)
   {
       cout<<"Sum of three integer is= "<<(l+m+n)<<endl;
   }

   Sum(int l, int m)
   {
       cout<<"Sum of two integer is= "<<(l+m)<<endl;
   } 
}; // end of class body

int main () {

    Sum s1=Sum(3,4,5);
    Sum s2=Sum(2,4);
    //Sum s1(3,4,5), s2(2,4);
   
   return 0;
}


