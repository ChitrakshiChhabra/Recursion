#include <iostream>
#include <vector>
using namespace std;

void display(vector <int> s)
{
    for (auto a:s)
        cout << a <<" ";
    cout << endl;
}
void subs(vector <int> array, vector<int> s, int index = 0)
{
    if(index >= array.size())
    {
        display(s);
        return;
    }
    
    s.push_back(array.at(index));
    subs(array, s, index + 1);
    s.pop_back();
    subs(array, s, index + 1);
    
}

int main()
{
    vector <int> s;
    vector <int> input = {1,2,3,4};
    subs(input, s);
    
    return 0;
}