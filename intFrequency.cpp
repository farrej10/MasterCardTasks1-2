#include  <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include </home/james/MastercardInternship/Taskapplications/intFrequency.hpp>

int findMostFrequent(int* arrayofInts,int SIZE){

    std::unordered_map<int,int> table;
    for(int i =0; i<SIZE;i++)
        table[arrayofInts[i]]++;

    std::unordered_map<int,int>::iterator iterator = table.begin();
    int maxfrequency = 0;
    int number;

    while(iterator != table.end())
    {
        if(maxfrequency < iterator->second)
        {
            number = iterator->first;
            maxfrequency = iterator->second;
        }
        iterator++;
    }

    return number;
}

