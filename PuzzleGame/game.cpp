// GDC Puzzle Games
// Microtransactions and gambling

// to compile and run in one line: 
// "cl /EHsc 'filename' && 'namefile,' "

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string>::iterator iter;


int main() {

    string input;

     std::unordered_map<std::string, std::string> wordbank =
    {
        {"HELLO", "5-letter word"},
        {"GREEN", "5-letter word"},
        {"ADIEU", "5-letter word"},
        {"TALES", "5-letter word"},
        {"SLATE", "5-letter word"},
        {"CRANE", "5-letter word"},
        {"MINOR", "5-letter word"}
    };

    cout << "\tWelcome to 'Guess the Word!'\n";

    cout << "\tReady to Play?\n";
    getline(cin, input);

    if(input == "yes") {
        cout << "\tAwesome! Would you like a beginner's hint?\n";
        getline(cin, input);

        if(input == "yes") {
            cout << "\tOkay! Please provide your payment details to compensate for the hint.\n";
            getline(cin, input);


        }

        if(input == "no") {
            cout << "\tOkay! Let's start guessing!\n";


        }

      
    }   // end of: starting if yes

    if(input == "no") {
        cout << "\tGoodbye!\n";

    }

    return 0;




}      // end of: main