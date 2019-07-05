//
//  main.cpp
//  Section4Conditions
//
//  Created by Ariel on 7/5/19.
//  Copyright © 2019 Edwin Quintuna. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
//CONDITIONAL STATEMENTS
    
    string a;
    cout << "1) Enter name: " << endl;
    cin >> a;
    
    //Condition: Using if and else
    if(a == "Edwin"){
        //Statement
        a.append(" Quintuna");
        
    } else{
        a.append(" Pina");
    }
    
    cout << a << endl << endl;
    
    string b;
    cout << "2) Enter name: " << endl;
    cin >> b;
    
    //Condition: Using Conditional ?: Operator
    b = (b == "Edwin") ? b.append(" Ariel" ) : b.append(" Quintuna");
    
    
    cout << ((b == "Edwin Ariel") ? b.append(" Quintuna "): b.append(" Pina") ) << endl;
    
    cout << b << endl << endl;
    
//SWITCH STATEMENTS
    
    int choice;
    
    cout << "Enter a choice: " << endl;
    cin >> choice;
    
    //Switch statements only take 'integers' or 'characters'
    switch(choice)
    {
        case 0:
            cout << "The value is " << choice << endl;
            break;
        case 50:
            cout << "The value is " << choice << endl;
            break;
        case 100:
            cout << "The value is " << choice << endl;
            break;
        default:
            break;
    }
    
    
    return 0;
}
