#include <iostream>
#include <string>
#include <cctype> // For toupper
using namespace std;

int main() {
    string questions[] = {
        "1. What is the predecessor of C++ ?",
        "2. Who discovered and theorized the Laws of Motion?",
        "3. What is the shape of the Earth?",
        "4. Who was the last Emperor of Ethiopia?"
    };

    string choices[][4] = {
        {"A.Java", "B.C#", "C.C", "D.Python"},
        {"A.Albert Einstein", "B.Louis Pasteur", "C.Van Helsing", "D.Isaac Newton"},
        {"A.Sphere", "B.Circle", "C.Oval", "D.Flat"},
        {"A.Menelik I", "B.Haile Selassie", "C.Tewodros", "D.Abebe"}
    };

    char correct[] = {'C', 'D', 'A', 'B'};
    const int size = sizeof(questions) / sizeof(questions[0]);
    const int cols = sizeof(choices[0]) / sizeof(choices[0][0]); // Fixed column count

    char t;

    do {
        int score = 0; // Reset score for each game
        cout << "Welcome to the quiz game!\n";
        
        for (int i = 0; i < size; i++) {
            cout << "\n" << questions[i] << endl;
            cout << "---------------------------------\n";

            // Display choices - fixed to use constant cols
            for (int j = 0; j < cols; j++) {
                cout << choices[i][j] << endl;
            }

            // Input validation loop
            char guess;
            bool validInput = false;
            
            while (!validInput) {
                cout << "Your answer (A-D): ";
                cin >> guess;
                cin.ignore(1000, '\n'); // Clear buffer
                guess = toupper(static_cast<unsigned char>(guess));

                if (guess >= 'A' && guess <= 'D') {
                    validInput = true;
                    
                    if (guess == correct[i]) {
                        cout << "Correct!\n";
                        score++;
                    } else {
                        cout << "Wrong! Correct answer was " << correct[i] << "\n";
                    }
                } else {
                    cout << "Invalid input. Only A-D are valid. Try again.\n";
                }
            }
        }

        cout << "\nFinal Score: " << score << "/" << size << "\n";

        // Continue prompt validation
        bool validContinue = false;
        while (!validContinue) {
            cout << "Would you like to play again? (y/n): ";
            cin >> t;
            cin.ignore(1000, '\n'); // Clear buffer
            t = toupper(static_cast<unsigned char>(t));

            if (t == 'Y' || t == 'N') {
                validContinue = true;
            } else {
                cout << "Invalid input. Only y/n are valid.\n";
            }
        }

    } while (t == 'Y'); // Continue if 'Y'

    cout << "Thanks for playing!";
    return 0;
}