#include <iostream>
using namespace std;

int fibonacci(int N)
{
    if(N <= 1) 
        return N;
    
    return fibonacci(N - 2) + fibonacci(N - 1);
}
int main()
{
    cout << fibonacci(7);
    return 0;
}