#include <iostream>
#include "vector"
using namespace std;
vector <int> test_scores;

int main()
{
    for(int count = 0; count < 5; count++)
    {
        int elements;
        cout << "Insert element: ";
        cin >> elements;
        test_scores.push_back(elements);
    }
    
    for(int count = 0; count < test_scores.size(); count ++)
    {
        cout << "Test score: "<< test_scores.at(count) <<endl;
    }
}