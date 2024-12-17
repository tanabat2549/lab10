#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;

    string textline;
     ifstream source("score.txt");
     while(getline(source,textline)){
         sum += stof(textline);
         sum_of_square += pow(stof(textline),2);
         count ++;
     }
    cout << "Number of data = " << count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< sum/count<<"\n";
    cout << "Standard deviation = "<< pow((sum_of_square/count)-pow(sum/count,2),0.5)<<"\n";
}