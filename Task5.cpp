#include <iostream>
#include <iomanip>
using namespace std;

class Time {
    private:
        int h, m, s;
        int total_seconds;
    public:
        void getTime(void) {
            cout << "Enter time:" << endl;
            cout << "Hours?   ";
            cin >> h;
            cout << "Minutes? ";
            cin >> m;
            cout << "Seconds? ";
            cin >> s;
        }

        void calculateSeconds(void) {
            total_seconds = h*60*60 + m*60 + s;
        }

        void displayTime(void) {
            cout << "The time is = " << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s << endl;
            cout << "Time in total seconds: " << total_seconds;
        }
};

int main() {
    Time time;
    time.getTime();
    time.calculateSeconds();
    time.displayTime();
    return 0;
}