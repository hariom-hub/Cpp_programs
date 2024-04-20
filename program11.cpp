#include <iostream>

using namespace std;

// palindromic string

class Palindrome
{

public:
    bool checkPalindromeString(string str)
    {

        int ptr1 = 0;
        int ptr2 = str.length() - 1;

        for (int i = 0; i < str.length(); i++)
        {

            if (str[ptr1] == str[ptr2])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};

int main()
{

    string str;
    cout << "Enter a String : \n";
    cin >> str;

    Palindrome obj;
    obj.checkPalindromeString(str);
    int result = obj.checkPalindromeString(str);
    if (result == 1)
    {
        cout << "\nGiven string is a palindrome string.";
    }
    else
    {
        cout << "\nGiven string is not a palindrome string";
    }
    return 0;
}