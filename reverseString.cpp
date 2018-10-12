#include <stdio.h>
#include <stdlib.h>
#include <string>
#include </home/james/MastercardInternship/Taskapplications/reverseString.hpp>

void reverseRecursively(const std::string &str, std::string &newstr)
{
    size_t numOfChars = str.size();

    if (numOfChars == 1)
        newstr += str[numOfChars - 1];
    else
    {
        newstr += str[numOfChars - 1];
        reverseRecursively(str.substr(0, numOfChars - 1), newstr);
    }
}

void reverseIteratively(const std::string &str, std::string &newstr)
{
    size_t numOfChars = str.size();
    for (numOfChars; numOfChars > 0; numOfChars--)
        newstr += str[numOfChars - 1];
}
