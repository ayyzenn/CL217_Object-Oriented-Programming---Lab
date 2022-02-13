#include<iostream>                   // including header files
using namespace std;

class book                            // class with book name
{
    private:                        // class member which are private
    int book_no;
    char book_title[20];
    float price;
    int total_cost(int n)           // private function to calculate total cost
    {
        return n*price;
    }

    public:                         // function prototype and are public
    void input(int , char[] , int);              //function to get data 
    void purchase(int);                         
    void showdata();                            // function to display data
    
};

// using function outside the class with the help of scope resolution operator
void book::input(int bn , char bt[] , int p)
{
    //setting class members
    book_no = bn;

    for (int i = 0; i < 20; i++)
    {
        book_title[i] = bt[i];
    }
    
    price = p;
}

void book::showdata()                           // displaying data
{
    cout<<"Book number: "<<book_no<<endl;
    cout<<"Book Title: "<<book_title<<endl;
    cout<<"Price of the book: "<<price<<endl;
}

void book::purchase(int c)                          // calculating total cost
{
    cout<<"Total cost: "<<total_cost(c)<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of copyies: ";
    cin>>n;                                     // taking number of copies from the user
    book b;                                     //creating object
    b.input(1234 , "Hello World" , 345);        // passing values
    b.showdata();                                
    b.purchase(n);

    return 0;
}
