/* write std in to a file */
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[])
{
    char f_name[30], l_name[30];
    int age;
    char file_name[20];
    int cont;
    
    while(true) {

        cout << "Want to make a file? Type 0 for NO, 1 for YES" << endl;
        cin >> cont;

        if (cont == 0) {
            cout << "Stopping this madness " << endl;
            return 0;
        }

        cout << "Enter First Name: ";
        cin >> f_name;
        
        cout << "Enter Last Name: ";
        cin >> l_name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter file name " << endl;
        cin >> file_name;
        ofstream People(file_name, ios::out);

        People << f_name << endl << l_name << endl << age << endl;
    }
    return 0;
}
