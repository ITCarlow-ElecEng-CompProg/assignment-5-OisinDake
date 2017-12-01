//Linear Fit
//Oisin Dake
//Lab5
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, i;
    double x[100]={0}, y[100]={0};

    double sumx = 0,sumy = 0,sumxy = 0,sumx2 = 0; //store values as double
    double xa ,ya;
    double m ,c;


    do// do loop to take in values
    {
        cout<<"Enter number of values:";//show on screen
        cin>> n;// store valu taken in
    }
    while((n<=0)||(n>100));// only values from 0 to 100

    for(i=0;i<n;i++)
    {
        cout<<"Enter x,y:";
        cin>>x[i]>>y[i];
    }
    for(i=0;i<n;i++)//for loop to get different results
    {
        sumx = sumx + x[i];//total value of x inputs
        sumy = sumy + y[i];// total values of y inputs
        sumxy = sumxy + x[i] * y[i];// total of both xand y values
        sumx2 = sumx2 + x[i] * x[i];// to the power of 2
    }

    xa = sumx / n;// x average
    ya = sumy / n;//y averagd
    m = (n * sumxy - ( sumx * sumy)) / (n * sumx2 - (sumx * sumx));// slope
    c = (ya - m * xa);// intercept equation

    cout << "Slope: " << m;// slope value output
    cout << "\n\n intercept : " << c << endl;//intercept output

    return 0;
}

