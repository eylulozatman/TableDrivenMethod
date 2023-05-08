#include <iostream>

using namespace std;

void FindLetterGrade(int numericGrade)
{
       string letter[] = {"A+","A","A-","B+","B","B-","C+","C","C-","D","F"};
       // write lower bounds of numeric grades 90-100,85-89...
       int ranges[] = {90,85,80,77,73,70,65,60,55,50,0}; // lower bounds
       string  letterGrade;
    for (int i = 0; i <= 10; ++i)
    {
        if (numericGrade >= ranges[i]) // if my grade higher than the grade in "i" index
        {
            letterGrade = letter[i];   // my letter is corresponding letter in letter array
            break;
        }
    }

    cout << "your letter grade is: "  + letterGrade;
}

int main() {

    int numericGrade;
    do {

        cout << "Enter your grade:";
        cin >> numericGrade;
        FindLetterGrade(numericGrade);
        cout << "\n";

    } while (numericGrade >= 0 && numericGrade <= 100);


}
