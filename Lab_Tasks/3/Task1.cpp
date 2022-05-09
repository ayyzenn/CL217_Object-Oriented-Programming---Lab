#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
    cout<<"Enter the array elements"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int max=arr[0][0] , min=arr[0][0];
    cout<<endl<<"Array values are: "<<endl<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<arr[r][c]<<"\t";
            if (arr[r][c]>max)
            {
                max=arr[r][c];
            }            
        }
        cout<<endl;
    }
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (min>arr[r][c])
            {
                min=arr[r][c];
            }
            
        }
        cout<<endl;
    }
    cout<<"Maximum Number is = "<<max<<endl;
    cout<<"Minimum Number is = "<<min<<endl;
}
