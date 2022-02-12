#include<iostream>              // including header files
using namespace std;

class test                      // class with test name
{
    private:                    // class member which are private

    int TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;

    int CALCNTR()  //(NoCandidates/100+1)       // private function to calculate number of centers
    {
        return (NoCandidate/100+1);
    }

    public:                                     // function prototype and are public       

    void SCHEDULE(int, string, int);           //function to set data
    void DISPTEST();                            // function to display data
};

// using function outside the class with the help of scope resolution operator
void test::SCHEDULE(int tc , string d , int n_cand )
{
    //setting class members
    TestCode = tc;                  
    Description = d;
    NoCandidate = n_cand;
    CenterReqd = CALCNTR();
    
}

void test::DISPTEST()                       // displaying data
{   
    cout<<"Test Code: "<<TestCode<<endl;
    cout<<"Description: "<<Description<<endl;
    cout<<"No of Candidates: "<<NoCandidate<<endl;
    cout<<"Center Required: "<<CenterReqd<<endl;
}

int main()
{
    test t1;            //creating object

    t1.SCHEDULE(1 , "I am the Best", 100);       // passing values
    t1.DISPTEST();
}
