#include <iostream>    
using namespace std;

bool isPalindrome(string word, int size, int i = 0)
{
    if(i >= (size/2))
        return 1;
    
    if(word[i] == word[size - 1 - i])
        return isPalindrome(word, size, i + 1);
    else
        return 0;
}
int main()
{

    cout << "Enter a string:";
    string word;
    cin >> word;

    int size = word.size();

    cout << isPalindrome(word, size);

    return 0;
}