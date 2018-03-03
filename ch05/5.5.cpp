#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string grade;
    int score;
    cout << "enter your score: " << endl;
    cin >> score;
    if (score == 100)
        grade = "A++";
    else if (score < 60)
        grade = "F";
    else if (60 <= score <= 69)
        grade = "D";
    else if (70 <= score <= 79)
        grade = "C";
    else if (80 <= score <= 89)
        grade = "B";
    else
        grade = "A";
    cout << "Your grade is " << grade << endl;
    return 0;
}
