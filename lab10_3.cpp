#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
    ifstream source("score.txt");
    string textline;
    int N=0;
    double mean,sd,sum=0,sum2=0.0;

    while (getline(source,textline))
    {
        sum+= atof(textline.c_str());
        sum2+= atof(textline.c_str())*atof(textline.c_str());
        N++;
    }
    mean=sum/N;

    sd=sqrt((sum2/N)-mean*mean);

    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = "<<sd<<endl;
}