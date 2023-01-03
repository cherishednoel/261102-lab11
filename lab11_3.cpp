#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ifstream source;
    source.open("score.txt");

    string textline;
    double sum = 0;
    double count = 0;
    double mean = 0;
    double sd = 0;
    double sum2 = 0;
    while(getline(source,textline)) {
        sum += stof(textline);
        sum2 += pow(stof(textline),2);
        count++;
    }
    mean = sum/count;
    sd = sqrt((sum2/count)-pow(mean,2));
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    source.close();
    
    return 0;
}