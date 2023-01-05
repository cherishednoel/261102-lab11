#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream source;
    source.open("score.txt");

    float min, max, score;
    int count = 0;
    cout << "Enter range of the scores [min, max] for counting: ";
    cin >> min >> max;
    
    if(min > max) {
        cout << "Invalid input. (max >= min)";
        return 0;
    }

    string textline;
    while(getline(source,textline)) {
        score = stof(textline);
        if (score >= min && score <= max) {
            count++;
        }
    }

    cout << "The number of students who have scores in this range = " << count << endl;

    return 0;
}