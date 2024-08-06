#include <iostream>
#include "vector"
using namespace std;
vector <int> test_scores {100, 99, 95, 50, 100};

int main()
{
    for(int count = 0; count < 5; count++)
    {
        cin >> test_scores.at(count);
    }
    for(int count = 0; count < 5; count ++)
    {
        cout << "Test score: "<< test_scores.at(count) <<endl;
    }
}