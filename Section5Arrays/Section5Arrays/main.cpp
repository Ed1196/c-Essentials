//
//  main.cpp
//  Section5Arrays
//
//  Created by Ariel on 7/5/19.
//  Copyright © 2019 Edwin Quintuna. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
//DECLARING ARRAYS
    //type   name[size_of_element]
       int myArray[10];
    
    //NOTE: Size of the array must be present before compilation
    /*
     The problem with below instruction:
     
        int myArray[size]
        cin >> size;
     
     is that the size is not specified during compilation. It is specified by the user of your
     program during the time your program is being executed
     
     Try typing for example 10000 when your program asks you for the "size".
     
     and then try to change value of array[599] for example.
     
     Your program will mostly crash when you try to access memory that was not reserved by your
     program because the other part of your RAM might be reserved by other programs like for
     example Chrome/game/any app.
     */
    
    
    
    return 0;
}
