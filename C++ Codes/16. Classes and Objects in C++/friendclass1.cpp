#include <iostream>
using namespace std;
 
class CostCalculator;   // class declaration
 
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
	
        friend class CostCalculator; //friend of class Rectangle
};  // end of Rectangle class
 
 
//friend class costCalculator can access private member of class Rectangle
class CostCalculator
{
    public:
        double getCost(Rectangle rect)
        {
            double cost;
            cost = rect.length * rect.width * 5; 
            return cost;
        }
}; // end of CostCalculator class

int main ()
{
    Rectangle floor;
    floor.setData(20,3);
    cout<<"Area is:"<<floor.getArea()<<endl;

    CostCalculator calc;

    cout << "Expense " << calc.getCost(floor) << endl;
    return 0;
}

//Note : An empty declaration of class costCalculator at top is necessary.

