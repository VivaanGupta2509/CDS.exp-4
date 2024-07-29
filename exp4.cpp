#include<iostream>
using namespace std;

int main()
{
    int a = 2, b = 8;
    int AND = a&b;
    int OR = a|b;
    int XOR = a^b;
    int NOT = ~a;
    int LEFT_SHIFT = a<<b;
    int RIGHT_SHIFT = a>>b;
    
    cout<<"AND:"<<AND<<endl;
    cout<<"OR:"<<OR<<endl;
    cout<<"XOR:"<<XOR<<endl;
    cout<<"NOT:"<<NOT<<endl;
    cout<<"LEFT_SHIFT:"<<LEFT_SHIFT<<endl;
    cout<<"RIGHT_SHIFT:"<<RIGHT_SHIFT<<endl;
}