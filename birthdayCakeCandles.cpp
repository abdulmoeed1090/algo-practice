#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &);


/*
* You are in charge of the cake for a child's birthday. 
* You have decided the cake will have one candle for each year of their total age.
* They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
*/

int birthdayCakeCandles(vector<int> candles) {
    int count = 0;
    int max = 0;
    
    for (int i = 0; i < candles.size(); i++) {
        int current = candles[i];
        if (current > max) {
            max = current;
            count = 1;
        } else if(current == max){
            count++;
        }
    }
    
    return count;
}