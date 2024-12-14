//Sameer rathod 
//jensen huang


#include <iostream>
using namespace std;

int main(){
    int z;
 start:
    cout<<"\nQ1.Write a program to print multiplication table of any number."<<endl;
    cout<<"\nQ2.Write a program to calculate sum of digits of a number."<<endl;
    cout<<"\nQ3.Write a program to find power of a number using for loop."<<endl;
    cout<<"\nQ4.Enter a number & print it's reverse"<<endl;
    cout<<"\nQ5.* * * * * "<<"\n    * * ⁠* * "<<"\n     * ⁠* *"<<"\n      * *"<<"\n       *"<<endl;
    cout<<"\nQ6.1"<<"\n   12"<<"\n   123"<<"\n   1234"<<"\n   12345"<<endl;
    cout<<"\nQ7.1"<<"\n   22"<<"\n   333"<<"\n   4444"<<"\n   55555"<<endl;
    cout<<"\nQ8.1"<<"\n   2 3"<<"\n   4 5 6"<<"\n   7 8 9 10"<<"\n   11 12 13 14 15"<<endl;
    cout<<"\nQ9.A"<<"\n   AB"<<"\n   ABC"<<"\n   ABCD"<<"\n   ABCDE"<<endl;
    cout<<"Enter the question no to see the output :-"<<endl;
    cin>>z;
   
    
    if(z==1){
        //Q1.Write a program to print multiplication table of any number.       
         
         
         int num;
         cout << "Enter a number: ";
         cin >> num;
         for(int i = 1; i <= 10; i++){
              cout << num << " x " << i << " = " << num * i << endl;
          }
        goto start;
    }


    if(z==2){
        //Q2.Write a program to calculate sum of digits of a number.    
          
          
          int num, sum = 0;
          cout << "Enter a number: ";
          cin >> num;
          while(num){
             sum += num % 10;
             num /= 10;
            }
          cout << "Sum of digits is: " << sum << endl;
          goto start;
    }

    if(z==3){
        //Q3.Write a program to find power of a number using for loop
    
    
    int base, exponent, result = 1;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    for(int i = 1; i <= exponent; i++){
        result *= base;
    }
    cout << "Result: " << result << endl;
    goto start;
    }



    if(z==4){
        //Q4.Enter a number & print it's reverse
    
    
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;
    while(num != 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << "Reverse of the number is: " << reversed << endl;
    goto start;
    }



    if (z==5){
        /* * * * * * 
           * * ⁠* * 
            * ⁠* *
             * *
              *
        */

      int i,j,k;
      for(i=5;i>=1;i--){
            for(k=4;k>=i;k--){
            cout<<" ";
            }
            for(j=1;j<=i;j++){
            cout<<"* ";
             }
             cout<<"\n";
      }
      goto start;
    }

    
    if(z==6){
        /*
        1
        12
        123
        1234
        12345
        */
       for(int i=1; i<=5; i++){
           for(int j=1; j<=i; j++){
               cout << j;
           }
           cout << endl;
       }
       goto start;
    }



    if (z==7){
        /*
        1
        22
        333
        4444
        55555
        */
       for(int i=1; i<=5; i++){
           for(int j=1; j<=i; j++){
               cout << i;
           }
           cout << endl;
       }
       goto start;
    }



    if (z==8){
        /*
        1
        2 3
        4 5 6
        7 8 9 10    
        11 12 13 14 15
        */
       int num = 1;
       for(int i=1; i<=5; i++){
           for(int j=1; j<=i; j++){
               cout << num << " ";
               num++;
           }
           cout << endl;
       }
    goto start;
    }



    if(z==9){
        /*
        A
        AB
        ABC
        ABCD
        ABCDE
        */
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    goto start;

    }



    if(z==0){
        exit(0);
    }
 
}
