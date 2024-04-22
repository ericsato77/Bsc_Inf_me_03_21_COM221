#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::reverse
using namespace std;

// Function to count vowels in a string
int countVowels(const string& text)
{
    int count = 0;
    const string vowels = "aeiouAEIOU";
    for (char ch : text) {
        if (vowels.find(ch) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& text)
{
    int count = 0;
    bool inWord = false;
    for (char ch : text) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& text)
{
    string result = text;
    bool capitalize = false;
    for (char& ch : result) {
        if (isspace(ch)) {
            capitalize = true;
        } else if (capitalize) {
            ch = toupper(ch);
            capitalize = false;
        }
    }
    return result;
}

// Function to reverse a string
string reverseString(const string& text)
{
    string result = text;
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    ifstream file("textfile.txt"); // Open the text file
    if (!file.is_open()) {
        cout << "Error: Unable to open file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData); // Read the content of the file into a string
    file.close(); // Close the file

    // Output number of vowels in the text
    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    // Output number of words in the text
    int numWords = countWords(fileData);
   cout << "Number of words: " << numWords << endl;

    // Output the text reversed
    string reversedText = reverseString(fileData);
    cout << "Reversed text: " << reversedText << endl;

    // Output the text with the second letter of each word capitalized
    string capitalizedText = capitalizeSecondLetter(fileData);
   cout << "Capitalized text: " << capitalizedText << endl;

    return 0;
}
