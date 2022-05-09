#include<iostream>
using namespace std;
int main()
{
	int arr_a[3][3];
    int arr_b[3][3];
    int sum;
    cout<<"Enter values for array initialization"<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<"a["<<r<<"]"<<"["<<c<<"] = ";
            cin>>arr_a[r][c];
            cout<<"b["<<r<<"]"<<"["<<c<<"] = ";
            cin>>arr_b[r][c];
        }
        
    }
    cout<<endl<<"Values of Array a"<<endl<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<arr_a[r][c]<<"\t";
                
        }
        cout<<endl;
    }
    cout<<endl<<"Values of Array b"<<endl<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<arr_b[r][c]<<"\t";
                
        }
        cout<<endl;
    }
    cout<<endl<<"Values of Array c (Resultant array) after addition of Array a and b "<<endl<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {   
            sum=arr_a[r][c]+arr_b[r][c];
            cout<<sum<<"\t";     
        }
        cout<<endl;
    }

}
