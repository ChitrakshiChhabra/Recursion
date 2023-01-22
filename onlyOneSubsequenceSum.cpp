// Printing only one subsequence with the sum K

#include <iostream>
#include <vector>
using namespace std;

bool subs(vector<int>array, vector<int>s, int givenSum, int sum = 0, int i = 0)
{
    if(array.size() == i)
    {
        if(givenSum == sum)
        {
            for(auto a: s)
                cout << a << " ";
            cout << endl;
            return true;
        }
        else
            return false;
    }
    s.push_back(array.at(i));
    if(subs(array, s, givenSum, sum + array.at(i), i + 1) == true)
        return true;
    s.pop_back();
    if(subs(array, s, givenSum, sum, i + 1) == true)
        return true;
    
    return false;
}
int main()
{
    vector <int> array = {1,2,1}, s;
    cout << subs(array, s, 2) << endl;
    return 0;
}