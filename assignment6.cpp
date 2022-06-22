#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string userAnswer;
    vector<string> strings;
    cout << "This program will ask the user for a sentence and then display "
    "each word, without spaces, one per line.\n";
    cout << "A recommendation is to set the size to 10\n";
    cout << "Enter string: ";
    for(;;) {
        string s;
        cin >> s;
        strings.push_back(s);
    if(getchar() == '\n')
            break;
    }
    unsigned int n, i, j;
    cout << "Enter size: ";
    cin >> n;

    // assuming strings.size() < n
    unsigned int empty_lines_around_text((n - strings.size()) / 2);
        // first horizontal row of stars
    for(j = 0; j < n; ++j)
        cout << '*';
    cout << endl;
        for(i = 1; i < empty_lines_around_text; ++i) {
        cout << '*';
        for(j = 1; j < n - 1; ++j) {
            cout << ' ';
        }
        cout << '*' << endl;
    }
      //here we do the actual printing of the strings
    for(i = 0; i < strings.size(); ++i) {
        string s = strings[i];

        // once again, assuming the size of each string is < n
        unsigned int empty_chars_around_string((n - s.size()) / 2);
        cout << '*';
        for(j = 0; j < empty_chars_around_string; ++j)
            cout << ' ';
        cout << s;
        for(j = empty_chars_around_string + s.size() + 1; j < n - 1; ++j)
            cout << ' ';
        cout << '*' << endl;
    }
        for(i = empty_lines_around_text + strings.size() + 1; i < n; ++i) {
        cout << '*';
        for(j = 1; j < n - 1; ++j) {
            cout << ' ';
        }
        cout << '*' << endl;
    }
        // last horizontal line of '*' (we close the square)
    for(j = 0; j < n; ++j)
        cout << '*';
    cout << endl;
    // ask if user wants to play again
    std::cout << "Would you like to calculate again? Y or N\n";
            std::cin >> userAnswer;
            if (userAnswer == "Y" || userAnswer == "y") {
            main();
      
            }
}