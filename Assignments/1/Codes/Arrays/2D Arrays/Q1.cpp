#include<iostream>
#include<cctype>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int arr[3][3],ran;
    srand(time(0));
    
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            ran = rand();
            ran = ran % 99 + 1;
            arr[r][c] = ran;
        }
        
    }
    cout<<endl<<"Values of Array"<<endl<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<arr[r][c]<<"\t";
                
        }
        cout<<endl;
    }

}
