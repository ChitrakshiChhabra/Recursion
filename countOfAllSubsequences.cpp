#include <iostream>
#include <vector>
using namespace std;

int countSubs(vector <int> array, int givenSum, int sum = 0, int index = 0)
{
    if(array.size() == index)
    {
        if(givenSum == sum)
            return 1;
        else
            return 0;
    }

    int left = countSubs(array, givenSum, sum + array.at(index), index + 1);
    int right =countSubs(array, givenSum, sum, index + 1);

    return left + right;
}

int main()
{
    vector <int> array = {1,2,1};
    cout << countSubs(array, 2);

    return 0;
}