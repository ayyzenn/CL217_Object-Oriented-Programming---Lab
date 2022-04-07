#include <iostream>
using namespace std;

class Test {
	int value;

public:
	Test(int v = 0) 
    { 
        value = v; 
    }

	int getValue() const 
    { 
        return value; 
    }
};

int main()
{
	Test t(20);
    //Test t1;
	cout << t.getValue()<<endl;
	return 0;
}
