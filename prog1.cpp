#include <iostream>
using namespace std;

class TimeConverter
{
    int totalSeconds;
    int seconds;
    int minutes;
    int hours;
    int userChoice;

public:
    void getInput();
    void convertTime();
};

void TimeConverter::getInput()
{
    cout << "If you want to convert from seconds to HH:MM:SS format enter 1" << endl;
    cout << "If you want to convert HH:MM:SS format to seconds format enter 2" << endl;
    cin >> userChoice;

    switch (userChoice)
    {
    case 1:
        cout << "Enter time in seconds: ";
        cin >> totalSeconds;
        break;

    case 2:
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        break;

    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

void TimeConverter::convertTime()
{
    if (userChoice == 1)
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        cout << "Time in HH:MM:SS = ";
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
    if (userChoice == 2)
    {
        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        cout << "Total seconds: " << totalSeconds;
    }
}

int main()
{
    TimeConverter obj;
    obj.getInput();
    obj.convertTime();
    return 0;
}