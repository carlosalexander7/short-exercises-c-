/**
 * String Exercice:
 * Given a input string eg. "This is working"
 * Return the reverserd string "working is This"
 * Maintainer: carlosalexander749@gmail.com
 */

#include <iostream>
#include <vector>

using namespace std;

void print_reverse_string(string const in_str)
{
    string word;
    vector<string> word_vect;
    // get the words in the string as a vector
    for (int i = 0; i < in_str.length(); i++)
    {
        if (in_str[i] == ' ')
        {
            word_vect.push_back(word);
            word.clear();
        }
        else
        {
            word.push_back(in_str[i]);
        }
    }
    // Get the last word at end of string
    word_vect.push_back(word);
    // Print out the reverse string
    cout << "Reverse phrase should be: ";
    for (int i = word_vect.size() - 1; i > 0; i--)
    {
        cout << word_vect[i] << ' ';
    }
    // Print the las word in vector word_vect[0]
    cout << word_vect[0] << endl;
}

int main()
{
    string input_str;
    // User feedback
    cout << "Introduce the string to reverse: ";
    // Read the input string
    getline(cin, input_str);
    // Call the function reversing the string
    print_reverse_string(input_str);
    return 0;
}
