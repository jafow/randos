/*
 * Horses cost $10, pigs cost $3, and rabbits are only $0.50. A farmer buys 100 animals for $100, How many of each animal did he buy?
 */
#include <iostream>
#define horse 10
#define pig 3
#define rabbit 0.5

using namespace std;

/* int farm (int am_ct, int cash, int h, int p, float r) */
/* { */
/*     if (am_ct == 100 && cash == 0) { */
/*         cout << "H " << h << "pig " << p << " rab " << r << endl; */
/*         return 0; */
/*     } */

/* } */


int main () 
{
    int animals = 0;
    int cash = 100;
    int i = 0;
    int h = 0;
    int p = 0;
    float r = 0;
    char stock[] = { 'h', 'p', 'r' };

    while (true) {
        if (animals == 100 && cash == 0) {
            cout << "H " << h << "pig " << p << " rab " << r << endl;
            return 0;
        }

        

        i++;
    }
    return 0;
        /* } */

    /* } */
    
    /* return 0; */
}
