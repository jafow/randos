/*
 * As electronic stopwatches become cheaper and more accurate, we will no
 * doubt be deluged with impossibly accurate measurements of time. Write a
 * program that takes as input a time period given in seconds, and outputs the
 * number of hours, minutes and seconds it represents. For
 * example,

    Number of seconds: 3662
    Hours: 1
    Minutes: 1
    Seconds: 2     
 */

#include <iostream>
#include <sstream>
#include <random>
#include <time.h>
#define  SECONDS_IN_HR 3600
#define  SECONDS 60

using namespace std;

void display_out(string msg, int unit)
{
    cout << msg << unit << endl;
}

struct timekeeper {
    int count;
    int diff;
};

/** return how many units up to a term point
 */
timekeeper units_to_term(int term, int step)
{
    int t = 0;
    int c = 0;
    timekeeper tk;

    while (t + step <= term) {
        t += step;
        c += 1;
    }
    tk.count = c;
    tk.diff = term - (t * c);
    return tk;
}

int main(int argc, const char *argv[])
{
    int seconds;
    timekeeper hours, minutes, rem_secs;

    if (!argv[1]) {
        cerr << "Error: must provide an argument" << endl;
        return 1;
    }
   
    istringstream s(argv[1]);
    s >> seconds;

    hours = units_to_term(seconds, SECONDS_IN_HR);
    minutes = units_to_term(hours.diff, SECONDS);
    rem_secs = units_to_term(minutes.diff, 1);

    display_out("Number of seconds: ", seconds);
    display_out("Hours: ", hours.count);
    display_out("Minutes: ", minutes.count);
    display_out("Seconds: ", rem_secs.count);

    return 0;
}
