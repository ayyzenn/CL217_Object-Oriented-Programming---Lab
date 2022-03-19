#include<iostream>
//#include<string>
using namespace std;

int sum(int x, int y)
{
    int sum =x+y;
    return sum;
}

float sum(int x, int y, int z)
{
    int sum =x+y;
    return sum;
}


int main()
{
    
    int a=5;
    int b=6;
    
    //int res=sum(a,b);

    //cout<<sum(a,b,5);

    string name= "Ali";
    // name[2]= 'q';
    // for(int i=0;i<name.length();  i++)
    // {
    //     cout<<name[i];
    // }

    for(int i=0; i<name.length(); i++)
    {
        cout<<name[i]<<endl;
    }
    
    
    return 0;


}