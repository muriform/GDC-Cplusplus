// GDC Puzzle Games
// Microtransactions and gambling

// to compile and run in one line: 
// "cl /EHsc 'filename' && 'namefile,' "

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string>::iterator iter;

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


void start() {
cout << "\tWelcome to 'Guess the Word!'\n";

    cout << "\tType 'Start' to Play\n";
    getline(cin, input);

    if(input == "Start") {
        cout << "\tWelcome! Would you like a beginner's hint? 'Y/N'\n";
        getline(cin, input);

        if(input == "Y") {
            cout << "\tOkay! Please provide your payment details to compensate for the hint.\n";
            getline(cin, input);

            cout << "\tThank you for your payment. You now have 10 tickets to draw a beginner's hint!\n";


        }

        if(input == "N") {
            cout << "\tOkay! Let's start guessing!\n";
        }

}     // end of: input start

}     // end of: start()


int main() {


start();



    return 0;




}      // end of: main()