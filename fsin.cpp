/* write std in to a file */
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[])
{
    char f_name[30], l_name[30];
    int age;
    char file_name[20];
    
    cout << "Enter First Name: ";
    cin >> f_name;
    
    cout << "Enter Last Name: ";
    cin >> l_name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter file name " << endl;
    cin >> file_name;
    // Create ofstream to write output
    ofstream People(file_name, ios::out);

    People << f_name << endl << l_name << endl << age << endl;
    return 0;
}
