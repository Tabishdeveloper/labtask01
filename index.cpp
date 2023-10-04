#include<iostream>
using namespace std;
main(){

    int num1 = 10;
    cout<<"\nThe given number is "<<num1;
    float num2 = 3.5;
    cout<<"\nThe given number is "<<num2;
    char ch = 'A';
    cout<<"\nThe given character is "<<ch;
    bool istrue =  num1==num2 || num2==num1; // OR ooperation use....
    cout<<"\nThe answer is "<<istrue;

    //_________________________________________________________________________________________________________________
    
    // USe Arithmetic Operation "Addition"

    int num4 = 12;
    int num5 = 15;
    int sum = num4 + num5 ;
    cout<<"\nThe sum of given two numbers is = "<<sum;

    //____________________________________________________________________

    // USe Arithmetic Operation "Subtration"

    int difference = num5 - num4;
    cout<<"\nThe subtraction of two numbers is = "<<difference;
    
    //___________________________________________________________________________________________________________

    // USe Arithmetic Operation "Multiplication"

    int product = num4 * num5;
    cout<<"\nThe product of two numbers is = "<<product;

    //__________________________________________________________________________________

    // USe Arithmetic Operation "Division"

    int quotient = num5 / num4;
    cout<<"\nThe Division of two numbers is = "<<quotient;

    //_________________________________________________________________________________________________

    // USe Arithmetic Operation "Modulus"

    int remainder = num5 % num4 ;
    cout<<"\nThe Remainder of two numbers is = "<<remainder;

    //______________________________________________________________________________________________

    // USe Relational Operator
    // => Eqaul "="

    bool isequal = num4 == num5;
    cout<<"\n "<<isequal;

    // => NotEqaul "!="

    bool isNotequal = num4 != num5;
    cout<<"\n "<<isNotequal;

    // => greater ">"

    bool is_greater = num5 > num4;
    cout<<"\n"<<is_greater;

    // => Less "<"

    bool is_less = num4 < num5;
    cout<<"\n "<<is_less;

    // => greater or eqaul ">,="
    
    bool isgreater_equal = num5 >= num4;
     cout<<"\n "<<isgreater_equal;

     // => less or equal "<,="

     
    bool isless_equal = num5 <= num4;
     cout<<"\n "<<isless_equal;

     //_____________________________________________________________________________________________

     // USe Logical Operators

     // => AND operator "&&"
     /* 
   Conditions
   1: true && true = True
   2: true && false = False
   3: false && true = False
   4: false && fasle = False  */

     bool logicalandResult = num4 == num4 && num4 != num5; // true && true = true => 1
     cout<<"\n"<<logicalandResult;

     //____________________________________________________________________________________________________________

     // OR operator "||"
     /*
    Conditions 
   1: true && true = True
   2: true && false = True
   3: false && true = True
   4: false && fasle = False */


     bool logicNotresult = num4 == num5 || num4 > num5; // false || false = false => 0
     cout<<"\n"<<logicNotresult;


    

    







       
   
}

