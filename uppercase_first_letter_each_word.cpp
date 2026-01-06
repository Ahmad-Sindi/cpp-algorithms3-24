#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Algorithm Challenge & Problem Solving Level 3 - Challenge #24 Uppercase First Letter of Each Word
 *
 * This program reads a full line of text and converts the first letter of each word to uppercase.
 *
 * Engineering Concept:
 * - In-place string transformation
 * - State tracking for word boundary detection
 * - Character manipulation using standard C++ utilities
 * - Avoiding unnecessary memory allocations
 */

string ReadString()
{
    string Text;
    cout << "Enter your text:\n";
    getline(cin, Text);
    return Text;
}

string UpperFirstLetterOfEachWord(string Text)
{
    bool IsFirstLetter = true;

    // Traverse the string character by character
    for (int i = 0; i < Text.length(); i++)
    {
        // Uppercase the character if it is the first letter of a word
        if (Text[i] != ' ' && IsFirstLetter)
        {
            Text[i] = toupper(Text[i]);
        }

        // Update state: next character is a word start if current is space
        IsFirstLetter = (Text[i] == ' ');
    }

    return Text;
}

int main()
{
    string Text = ReadString();

    cout << "\nString after conversion:\n";

    Text = UpperFirstLetterOfEachWord(Text);

    cout << Text;

    return 0;
}
