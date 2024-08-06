#include <iostream>
#include "vector"
using namespace std;
int main()
{
    vector<vector<int>> movie_rating
    {
        {5,5,4,3},
        {5,3,5,4},
        {3,3,5,4},
        {4,4,3,5}
    };

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
           cout<< movie_rating.at(i).at(j);
           if(j == 3) cout<<endl;
        }
    }
    
}


