#include<iostream>              //including header file

using namespace std;
class rectangle2;
class rectangle3;
class rectangle4;

class rectangle1                 //creating a class of name rectangle1.
{
    private:                    //  Private members
    float length;
    float breath;

    public:                     // Public Methods

    rectangle1(int l ,int b )   // constructor
    {
        length = l;
        breath = b;
    }
    // Displaying the values.
    void show()
    {
        cout<<"\t\tLength\tBreath"<<endl;
        cout<<"Rectangle1 : "<<"\t"<< length <<"\t"<<breath<<endl;
    }

    friend int sum(rectangle1 r1 , rectangle2 r2 , rectangle3 r3 , rectangle4 r4);          // friend funtion 
};

class rectangle2                //creating a class of name rectangle2.
{
    private:
    float length;
    float breath;

    public:
    rectangle2( int l ,int b )  // constructor
    {
        length = l;
        breath = b;
    }
    // Displaying the values.
    void show()
    {
        cout<<"Rectangle2 : "<<"\t"<< length <<"\t"<<breath<<endl;
    }
    friend int sum(rectangle1 r1 , rectangle2 r2 , rectangle3 r3 , rectangle4 r4);          // friend funtion       
};

class rectangle3            //creating a class of name rectangle3.
{
    private:
    float length;
    float breath;

    public:
    rectangle3( int l ,int b )  // constructor
    {
        length = l;
        breath = b;
    }
    // Displaying the values.
    void show()
    {
        
        cout<<"Rectangle3 : "<<"\t"<< length <<"\t"<<breath<<endl;
    }
    friend int sum(rectangle1 r1 , rectangle2 r2 , rectangle3 r3 , rectangle4 r4);          // friend funtion 
};

class rectangle4                    //creating a class of name rectangle4.
{
    private:
    float length;
    float breath;

    public:
    rectangle4( int l ,int b )  // constructor
    {
        length = l;
        breath = b;
    }
    // Displaying the values.
    void show()
    {
        
        cout<<"Rectangle4 : "<<"\t"<< length <<"\t"<<breath<<endl;
    }
    friend int sum(rectangle1 r1 , rectangle2 r2 , rectangle3 r3 , rectangle4 r4);      // friend funtion 

};

int sum(rectangle1 r1 , rectangle2 r2 , rectangle3 r3 , rectangle4 r4)      // using friend funtion 
{
    int lsum ,bsum;

    lsum = r1.length + r2.length + r3.length + r4.length;
    bsum = r1.breath + r2.breath + r3.breath + r4.breath;

    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"Rectangle1 : "<<"\t"<< lsum <<"\t"<<bsum<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;

}

int main()
{
    //creatin the objects
    rectangle1 r1(5 ,3);
    r1.show();
    rectangle2 r2(2 ,6);
    r2.show();
    rectangle3 r3(4 ,6);
    r3.show();
    rectangle4 r4(2 ,5);
    r4.show();
    sum(r1 ,r2 ,r3 ,r4);
    return 0;
}

