/*
The law requires that food product manufacturers place expiration dates on
their products, but there is a loophole in the law: it does not require the
expiration date to be in any particular form. So, it can be written in Swahili
and still be legal.

Ralph Nader's third cousin, Nadine is a self-appointed Food Quality Spy. She
has learned that many food product manufacturers have started encoding the
product expiration dates to keep customers from knowing how old the stuff is.

But the encoding does allow grocers to figure out the expiration dates if for
some reason, they want to.

One popular encoding method:

    encode the months from Jan to Dec as 'A' through 'L'
    encode each digit of the date as 'Q' through 'Z'
    encode the year as 'A' through 'Z' meaning 1 through 26 which is then added to 1995.

Nadine found a particularly questionable loaf of bread with this date: ARZM. Write a program to determine the date. 
*/

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <cstring>
#include <tuple>

#define MONTHS 12

/* using namespace std; */

std::string decode_month(char *month)
{
    std::string months[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    std::string decoded;
    std::vector<std::string> m_codes = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L"};

    for (int i = 0; i < MONTHS; i++) {
        if (month == m_codes[i]) {
            std::cout << "Bingo: " << month << " at i: " << i << " months list: " << months[i] << std::endl;
            decoded = months[i];
        }
    }
    return decoded;
}

int decode_date(char *date_code)
{
    std::vector<std::string> m_codes = {"Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    int date_range[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int decoded;

    for (int i = 0; i < 10; i++) {
        std::cout << "date code: " << date_code << " codes at i" << m_codes[i] << std::endl;
        if (date_code == m_codes[i]) {
            decoded = i;
        }
    }

    std::cout << "decoded date: " << decoded << std::endl;
    return decoded;
}

int decode_year (char *year_code)
{
    std::vector<std::string> m_codes = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    int decoded;

    for (int i = 0; i < 26; i++) {
        if (year_code == m_codes[i]) {
            decoded = i;
        }
    }

    decoded += 1995;
    std::cout << "decoded year: " << decoded << std::endl;
    return decoded;
}

int main(int argc, const char *argv[])
{
    
    std::string coded = argv[1];

    char a1[1] = coded[0];
    char a2[1] = coded[1];
    char a3[1] = coded[2];
    char a4[1] = coded[3];

    std::cout << "Decoding: " << coded << std::endl;

    std::string month = decode_month(a1);
    int date = decode_date(a2) + decode_date(a3);
    int year = decode_year(a4);
    
    /* std::cout << "Decoded: " << std::endl; */
    /* std::cout << month << date << year << std::endl; */

    return 0;
}
