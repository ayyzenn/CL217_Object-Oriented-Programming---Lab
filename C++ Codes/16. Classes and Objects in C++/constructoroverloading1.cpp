using namespace std;
#include<iostream>
class Find
{
   private:
   int max;

   public:
   Find(int x, int y, int z)
   {
       if (x>y)
        {
            if(x>z)
            {
                max=x;
            }
            else 
            {
                max=z;
            }
        }
        else if(y>z)
            max=y;
        else
            max=z;
       cout<<"Maximum between three numbers is= "<<max<<endl;
   }

   Find(int x, int y)
   {
       if (x>y)
       {
           max=x;
       }
       else
       {
           max=y;
       }
       cout<<"Maximum between two numbers is= "<<max<<endl;
   } 
}; // end of class body

int main () {

    int a=9, b=56, c=67;
    Find f1=Find(a,b,c);
    Find f2=Find(a,b);
    //Find f1(a,b,c), f2(a,b);
   
   return 0;
}