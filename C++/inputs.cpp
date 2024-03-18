#include<iostream>
using namespace std; 
int main()
{
    string somethings;
    cout<<"write something here: ";
    getline(cin, somethings);
    cout<<"You wrote: "<<somethings<<endl;
    return 0;
}