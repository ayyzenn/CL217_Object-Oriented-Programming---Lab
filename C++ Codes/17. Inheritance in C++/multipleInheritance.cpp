#include<iostream>
using namespace std;
class base1 {
  protected:
    int x;
  public:
    void readx() {
      cout<<"Enter value of x : ";
      cin>>x;
    }
    void showx()
    { 
        cout<<"x= "<<x; 
    }
};   // end of class base1
class base2 {
  protected:
    int y;
  public:
    void ready() {
      cout<<"Enter value of y: ";
      cin>>y;
    }
    void showy()
      { 
          cout<<"\ny= "<<y; 
      }
}; // end of class base2
class der : public base1,public base2 {
  private:
    int z;
  public:
    void add() {
      z=x+y; //Accessing protected members of base classes
    }
    void showz ()
      { 
          cout<<"\nz = "<<z; 
      }
}; // end of class der1
int main() {
  der d1;
  d1.readx();//calling readx() of basel
  d1.ready();//calling ready() of base2
  d1.add();//calling add() of der
  d1.showx();//calling showx() of basel
  d1.showy();//calling showy() of base2
  d1.showz();//calling showz() of der
  return 0;
}