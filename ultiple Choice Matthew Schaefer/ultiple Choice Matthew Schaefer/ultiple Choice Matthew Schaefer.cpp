#include <iostream>
#include <string>;
#include <cstdlib>;
using namespace std;

int Guess;
int Total;

class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string,
        string, string,
        string, int, int);

    void askQuestion();

};

int main()
{
    cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
        << endl;
    cout << "\nPress Enter to start "
        << "the quiz... " << endl;

    cin.get();

    Question q[5];

    q[1].setValues("What is 2 + 5? ", "7",
        "1", "4",
        "5", 1, 20);
    q[2].setValues("What Country is Texas located in? ", "Canada",
        "USA", "China",
        "Brazil", 2, 20);
    q[3].setValues("What day is after Tuesday? ", "Monday",
        "Friday", "Yesterday",
        "Wednesday", 4, 20);
    q[4].setValues("What is 90 percent of 100? ", "75",
        "45", "90",
        "Answer 100", 3, 20);
    q[0].setValues("Where is Full Sail University Located? ", "Texas",
        "Florida", "Washington",
        "Nebraska", 2, 20);

    for (int i = 0; i < 5; i++)
    {
        int randomNum = rand() % 4 + 1;
        q[randomNum].askQuestion();
        
    }

    cout << "Total Score = " << Total
        << "out of 100" << endl;

    if (Total >= 60) {
        cout << "Congrats you passed the"
            << " quiz!" << endl;
    }
    else {
        cout << "Alas! You failed the quiz."
            << endl;
        cout << "Better luck next time."
            << endl;
    }
    return 0;
}


void Question::setValues(
    string q, string a1,
    string a2, string a3,
    string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;

    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;

    cout << "What is your answer?(in number)"
        << endl;
    cin >> Guess;

    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;

        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
            << " out of "
            << Question_Score
            << "!" << endl;
        cout << endl;
    }
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = 0"
            << " out of "
            << Question_Score
            << "!" << endl;
        cout << "Correct answer = "
            << Correct_Answer
            << "." << endl;
        cout << endl;
    }
}