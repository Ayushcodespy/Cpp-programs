/* Write a program to count the number of vowels and consonants is a string */

#include <iostream>
#include <string>
using namespace std;

class VowelConsonantCounter {
    public:
    string str;
    int vowels;
    int consonants;

public:
    VowelConsonantCounter(const string& s) : str(s), vowels(0), consonants(0) {}

    void count() {
        for (char ch : str) {
            if (isalpha(ch)) {
                ch = tolower(ch);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                    vowels++;
                else
                    consonants++;
            }
        }
    }

    void displayCount() {
        cout << "Number of vowels: " << vowels << endl;
        cout << "Number of consonants: " << consonants << endl;
    }
};

int main() {
    string inputString;
    cout<<"Enter any String without using space :";
    cin>>inputString;

    VowelConsonantCounter counter(inputString);

    counter.count();

    counter.displayCount();

    return 0;
}
