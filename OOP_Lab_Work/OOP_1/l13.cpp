#include <iostream>
using namespace std;
int main () 
{
int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
    for ( int r = 0; r < 5; r++ )
        {
            for ( int c = 0; c < 2; c++ )
            {
                cout << "a[" << r << "][" << c << "]: ";
                cout << a[r][c]<< endl;
            }
        }
    return 0;
}