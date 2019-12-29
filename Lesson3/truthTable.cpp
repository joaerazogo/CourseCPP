/*Goal: use logical and relational operators in a C++ program. 
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>
using namespace std;

void truthValue(int A, int B, int C){

    int operation1 = A && B && C;
    int operation2 = !B||!C;
    int operation3 = A&&(!B||!C);
    int Q = operation1 || operation3;

    cout<<A<<"\t"<<B<<"\t"<<C<<"\t" << operation1 <<"\t"<< operation2 <<"\t" << operation3 <<"\t" << Q << "\n";

}


int main()
{   
    
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    //Use this output format
    //cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    truthValue(0, 0, 0);
    truthValue(0, 0, 1);
    truthValue(0, 1, 0);
    truthValue(0, 1, 1);
    truthValue(1, 0, 0);
    truthValue(1, 0, 1);
    truthValue(1, 1, 0);
    truthValue(1, 1, 1);
    return 0;
}