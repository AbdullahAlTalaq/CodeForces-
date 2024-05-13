#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    sort(yearStr.begin(), yearStr.end());
    return unique(yearStr.begin(), yearStr.end()) == yearStr.end();
}

int main() {
    int y;
    cin>>y;  

    do {
        y++;  
    } while(!hasDistinctDigits(y));

    cout<<y<<endl;  
    return 0;
}
