#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int getMaxProfit(vector <int>);

int main(void){
    vector <int> stockPrices = {10,7,5,8,11,9};
    cout << getMaxProfit(stockPrices) << "\n";
    return 0;
}

int getMaxProfit(vector <int>prices){
    vector <int>::iterator min = min_element(prices.begin(),prices.end());
    vector <int>::iterator max = max_element(min,prices.end());
    return *max-*min;
}