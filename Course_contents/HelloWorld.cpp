

#include <iostream>

using namespace std;

int  main(){

    // Part 1: Output a message on the screen
    cout << "Hello World!" << "\n";

    // Part 2: Output another message on the screen
    cout << "This is my first program" << "\n";

    // Part 3: promt users typing a the amount of US$ then convert it to Japanese Yen

    // section 3.1 : ask the dollar amount from the user
    cout << "Enter $US: ";
    double dollarAmount;
    cin >> dollarAmount;

    // section 3.2 : convert dollar_to_yen = dollar*129.28
    double dollar_to_yen = dollarAmount * 129.28;

    // section 3.3 : show the output
    cout << "Yen equivalent to the dollar is :" << dollar_to_yen << "\n";



    return 0;



}