/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 10th, 2018, 9:07 AM
 * Purpose:  Truncation Error
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables and initialize Here
    float frac=0.1;
    float sum=0.0;
    int nLoops=10000000;
    
    //Process/Calculations Here
    for(int loop=1;loop<=nLoops;loop++){
        sum+=frac;
    }
    
    //Output Located Here
    cout<<"Answer should be =>"<<frac<<"*"
            <<nLoops<<"="<<frac*nLoops<<endl;
    cout<<"Actual answer = "<<sum<<endl;
    cout<<"Error = "<<(1-sum/frac/nLoops)*100<<"%"<<endl;

    //Exit
    return 0;
}