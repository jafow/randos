#include <iostream>

using namespace std;
int a = 18;
int b = 6;

int fn1(int a, int b) 
{
    return a - b;
}

int fn2 ()
{
    int c;
    c = a + b;
    return c;
}

int main(int argc, const char *argv[])
{
    int c = 0;
    a = fn1(b, a);
    c = fn2();
    cout << "A: " << a << " c: " << c << endl;
    return 0;
}
