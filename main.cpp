#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include </home/james/MastercardInternship/Taskapplications/intFrequency.hpp>
#include </home/james/MastercardInternship/Taskapplications/reverseString.hpp>

int main(int argc, char *argv[])
{

    int arrayofInts[] = {25, 25, 25, 25, 25, 5, 5, 5, 5, 5, 5, 25, 25, 3, 3};

    int mostfrequent = findMostFrequent(arrayofInts, sizeof(arrayofInts) / sizeof(int));
    printf("%i, is the most frequent int in the array\n", mostfrequent);

    std::string myString = "Hello My Name is James";
    std::string newStringR;
    std::string newStringI;

    reverseRecursively(myString, newStringR);
    std::cout << "Recursively: " << myString << ":" << newStringR << std::endl;

    reverseIteratively(myString, newStringI);
    std::cout << "Iteratively: " << myString << ":" << newStringR << std::endl;

    return 0;
}