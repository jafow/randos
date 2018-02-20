#include <iostream>

using namespace std;

struct addr {
    int x, y;
};

int fn1 (void *env, char *data)
{
    return 0;
}

int main(int argc, const char *argv[])
{

    addr foo;
    foo.x = 4;
    foo.y = 2;
    cout << "Foo x is " << foo.x << " Foo y is " << foo.y << endl;
    return 0;
}
