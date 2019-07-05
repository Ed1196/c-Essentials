//
//  main.cpp
//  CPPReview
//
//  Created by Ariel on 7/3/19.
//  Copyright © 2019 Edwin Quintuna. All rights reserved.
//

//Input/Output stream
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
//DECLARING VARIABLES
cout << endl;
    //Int will allocate 32bits; 0's and 1's, in memory
    //INT: 4 bytes = 32bits, 1byte = 8bits
    int A = 5;
    int B = 7;
    
    cout << "A value: "   << ++A << endl;
    cout << "A address: " <<  &A << endl;
    
//ARITHMETIC AND ASSIGNMENT OPERATORS
cout << endl;
    //Basic arithmetic operations
    cout << A + B << endl;
    cout << A - B << endl;
    cout << A * B << endl;
    cout << A / B << endl;
    cout << A % B << endl;
    
    //Short hand notation for arithmetic operations
    A += 10;
    cout << "A value: "   << A << endl;
    A *= 2;
    cout << "A value: "   << A << endl;
    
    
    //Increment, Decrement by one
        //Post
    cout << A++ << endl;
        //Pre
    cout << ++A << endl;
        //Pre
    cout << --A << endl;
    
//RELATIONAL OPERATORS
cout << endl;
    //Relationa operators will return TRUE(1) or FALSE(0) results
    cout << (A == B)  << endl;
    cout << !(A == B) << endl;
    cout << (A < B)   << endl;
    cout << (A > B)   << endl;
    cout << (A <= B)  << endl;
    cout << (A >= B)  << endl;
    cout << (A != B)  << endl;
    
//LOGICAL OPERATORS
cout << endl;
    
    //Conjunction: All statements must be true for it to be true
    cout << ((A == 5) && (A > B)) << endl;
    
    //Disjunction: Only one statement has to be true for it to be true
    cout << ((A == 5) || (A > B)) << endl;
    
//BITWISE OPERATORS
cout << endl;
    
    //Bitwise AND: &
    cout << (10 & 2) << endl;
        /*   1 0 1 0
             0 0 1 0
            ---------
             0 0 1 0    =   2
        */
    
    //Bitwise OR: |
    cout << (10 | 2) << endl;
        /*   1 0 1 0
             0 0 1 0
            ---------
             1 0 1 0    =   10
        */
    
    //Bitwise XOT: ^
    cout << (10 ^ 2) << endl;
        /*   1 0 1 0
             0 0 1 0
             ---------
             1 0 0 0    =    8
         */
    
    //Bitwise NOT: ~ (USES TWO's Complemet
    cout << ~(10) << endl;
    /*   0000000000000000000000000000  1 0 1 0
                                             ~
         -------------------------------------
         1111111111111111111111111111  0 1 0 1
                                           + 1
         -------------------------------------
         1111111111111111111111111111  1 0 1 1  = -11
         */
    
    //Bitwise SHIFT-LEFT: <<
    cout << (10 << 2) << endl;
    /*   0000000000000000000000000000  1 0 1 0      =   10
                                            <<      =   10 * (2 ^ 2) = 10 * 4
         -------------------------------------
         000000000000000000000000001 0 1 0 0 0      =   40
     
     */
    
    //Bitwise SHIFT-Right: >>
    cout << (40 >> 2) << endl;
    /*  00000000000000000000000000 1 0 1 0 0 0      =   40
                                            <<      =   40 / (2 ^ 2) = 40 / 4
        --------------------------------------
       0000000000000000000000000000   1 0  1 0      =   10
     
     */
    
    return 0;
}
