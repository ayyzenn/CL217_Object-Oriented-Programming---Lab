#include <iostream>
using namespace std;
class Rectangle
{
    private :
        int length;
        int width;
    public:
        void setData(int len, int wid)
        {
            length = len;
            width = wid;
        }
        int getArea()
        {
            return length * width ;
        }
    friend double getCost(Rectangle);//friend of class Rectangle
};
// end of class body
//friend function getCost can access private member of class
double getCost (Rectangle rect)
{
    double cost;
    cost = rect.length * rect.width * 5;
    return cost;
}

int main ()
{
    Rectangle floor;

    floor.setData(20,3);
    
    cout<<"Area is:"<<floor.getArea()<<endl;
    cout << "Expense " << getCost(floor) << endl;
    return 0;
}