// Printing the subsequence of an array with the sum K

#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> s)
{
    for(auto a:s)
        cout << a <<" ";
    cout << endl;
}

void subs(vector <int> array, vector <int> s,int add,int index = 0,int sum = 0)
{
    if(index == array.size())
    {
        if(add == sum)
            display(s);
        return;
    }
        
    s.push_back(array.at(index));
    subs(array, s, add, index + 1, sum + array.at(index));
    s.pop_back();
    subs(array, s, add, index + 1, sum);
}

int main()
{
    vector <int> nums = {2, 1, 3};
    vector <int> s;
    subs(nums, s, 5);

    return 0;
}