#include <iostream>
#include <string>
using namespace std;

int getASCII(char word[50])
{
    int x = 0;
    int num;
    string s;
     while (x!= 3)    // While the string isn't at the end...
    {
       num =(int)word[x];
       s+=to_string(num);
        x++;
    }
    int size =x+1;
    int sum = stoi(s);
    return sum;
}
int main()
{
    char word[50];
    cout << "Please enter the word:\n";
    cin >> word;
    int ASCII=getASCII(word);
    cout <<endl;
    switch (ASCII)
    {
    case 7497110:
        cout<<"It is a 1st month."<<endl;
        break;
    case 7010198:
        cout<<"It is a 2nd month."<<endl;
        break;
    case 7797114:
        cout<<"It is a 3rd month."<<endl;
        break;
    case 65112114:
        cout<<"It is a 4th month."<<endl;
        break;
    case 7797121:
        cout<<"It is a 5th month."<<endl;
        break;
    case 74117110:
        cout<<"It is a 6th month."<<endl;
        break;
    case 74117108:
        cout<<"It is a 7th month."<<endl;
        break;
    case 65117103:
        cout<<"It is a 8th month."<<endl;
        break;
    case 83101112:
        cout<<"It is a 9th month."<<endl;
        break;
    case 7999116:
        cout<<"It is a 10th month."<<endl;
        break;
    case 78111118:
        cout<<"It is a 11th month."<<endl;
        break;
    case 6810199:
        cout<<"It is a 12th month."<<endl;
        break;

    default:
        cout<<"Please Check Spelling"<<endl;
        break;
    }
    return 0;
}
