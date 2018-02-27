/*
 *  Ask a user to enter a three-digit number whose first digit is greater than
 *  its last. Your program will reverse the number, and subtract the reversal
 *  from the original number. Finally, reverse the resulting number, and add it
 *  to its unreversed form. Output the final result.
 */

#include <iostream>

using namespace std;

/*
 * given a 3-digit number find its "reverse"
 * ex: 401 => 104,  795 => 597
 */
int reverse_num(int num)
{
    if (num > 999) {
        cout << "Input numbers must be < 1000" << endl;
        return 1;
    }
     
    // flip 100s to 1s
    int ones_from_hundreds = (num - (num % 100)) / 100;

    int hundreds_from_ones = (num % 10);

    int tens = ((num % 100) - hundreds_from_ones);

    // put them together
    return (hundreds_from_ones * 100) + tens + ones_from_hundreds;
}


int main(int argc, const char *argv[])
{
    int user_number;
    int rev;
    int rev_from_user_number;
    int rev_rev;

    // grab user input
    cout << "Enter a 3-digit number whose 100s digit is > its 1s digit" << endl;
    cin >> user_number;

    if (!user_number) {
        cout << "Please enter a 3-digit int" << endl;
        return 1;
    }

    // reverse the input user_number
    rev = reverse_num(user_number);

    // subtract reversed from original
    rev_from_user_number = user_number - rev;    

    // reverse the difference
    rev_rev = reverse_num(rev_from_user_number);

    // sum the two
    int res = rev_from_user_number + rev_rev; 
    cout << "res is : " <<  res << endl;
    return rev_from_user_number + rev_rev;
}
