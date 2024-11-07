#include <iostream>
#include <string>
using namespace std;

int main() {
    /* VARIABLES */
    int month, day;
    string months[] = { "Invalid", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }; // Stores the months in an array

    /* INPUTS */
    cout << "What is your Birth Month? (1 - 12): ";
    cin >> month; // Asks about your Birth Month

    cout << "What is your Birth Day? (1 - 31): ";
    cin >> day; // Asks about your Birth Day

    /* CONDITIONS */
    if (month < 1 || month > 12) { // Validates Month
        cout << "Invalid month!" << endl;
        return 1;
    }


    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) { // Validates Jan20 - Feb18
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Aquarius";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) { // Validates Feb19 - March20
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Pisces";
    }
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) { // Validates March21 - April19
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Aries";
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) { // Validates April20 - May20
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Taurus";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) { // Validates May21 - June20
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Gemini";
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) { // Validates June21 - July22
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Cancer";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) { // Validates July23 - August22
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Leo";
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) { // Validates August23 - September22
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Virgo";
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) { // Validates September23 - Octomber22
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Libra";
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) { // Validates October23 - November21
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Scorpio";
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) { // Validates November22 - December21
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Sagittarius";
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) { // Validates December22 - January 19
        cout << "Your Zodiac sign for " << months[month] << " " << day << " is Capricorn";
    }

    return 0;
}