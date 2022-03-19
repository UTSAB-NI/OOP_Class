#include <iostream>
using namespace std;
class Student
{
private:
    double DS, OOP, STAT, MATH, MP;

public:
    double sum;
    double gpa;
    Student(double a, double b, double c, double d, double e)
    {
        DS = a;
        OOP = b;
        STAT = c;
        MATH = d;
        MP = e;
    }

    void displayGrade()
    {
        sum = DS + OOP + STAT + MATH + MP;
        gpa = (sum / 500) * 4;
        if (gpa >= 3.6)
        {
            cout << "You got A+ grade ";
        }
        else if (gpa >= 3.2 and gpa < 3.6)
        {
            cout << "You got A grade ";
        }
        else
        {
            cout << "lol";
        }
    }
};

int main()
{
    Student obj1(80, 75, 65, 72, 85);
    cout << "The GPA is:" << obj1.displayGrade();

    return 0;
}
