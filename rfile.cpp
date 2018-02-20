/* read a file and pipe to stdout */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    char file_name[20];
    string line;
    
    cout << "File name: ";
    cin >> file_name;
    
    // Create ofstream to write output
    ifstream my_file(file_name);

    while(getline(my_file, line)) {
        cout << line << endl;
    }

    return 0;
}

