#include <iostream>
#include "vector"
using namespace std;


int main()
{
    vector <int> test_scores;
    int average;
    int avr_sum;
    /* 1D vector*/
    for(int count = 0; count < 5; count++)
    {
        int elements;
        cout << "Insert score: ";
        cin >> elements;
        test_scores.push_back(elements);
    }
    
    for(int count = 0; count < test_scores.size(); count ++)
    {
        cout << "Test score: "<< test_scores.at(count) <<endl;
    }

    for (auto average_Score:test_scores)
    {
        avr_sum+=average_Score;   
    }
    average = avr_sum/test_scores.size();
    cout<<"Average score: "<< average <<endl;
}