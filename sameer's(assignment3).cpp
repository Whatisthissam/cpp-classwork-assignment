// sameer rathod
// jensne huang



#include <iostream>
using namespace std;
int main(){
    int z;
   start:
    cout<<"\nQ1. Write  program to find the maximum and minimum value of an array."<<endl;
    cout<<"\nQ2.Write  program to reverse an array of integer values"<<endl;
    cout<<"\nQ3.Write  program to find the number of even and odd integers in a given array of integers."<<endl;
    cout<<"\nQ4.Write  program to test if an array contains a specific value & the index of that array element"<<endl;
    cout<<"\nQ5.Write  program to copy an array by reversing the array"<<endl;
    cout<<"\nQ6.Write  program to find the second largest element in an array."<<endl;
    cout<<"\nQ7.Make 20 integer inputs from user and print the following :"<<"\n1.number of positive numbers"<<"\n2.number of negative numbers"<<"\n3.number of odd numbers"<<"\n4.number of even numbers"<<"\n5.number of 0s."<<endl;
    cout<<"\nPress 0 for quit the program"<<endl;


   cout<<"\nEnter no of question :- "<<endl;

   cin>>z;





//Q2.Write  program to reverse an array of integer values
    
    
    int reverse(int num);
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The reverse of "<<num<<" is: ";
    


   if(z==1){
 
 
  // Q1. Write  program to find the maximum and minimum value of an array.
   
   
   int arr[100];
   int n, max, min;
   cout << "Enter the number of elements in the array: ";
   cin >> n;
   cout << "Enter elements of the array: ";
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   max = arr[0];
   min = arr[0];
   for(int i = 1; i < n; i++){
       if(arr[i] > max){
           max = arr[i];
       }
       if(arr[i] < min){
           min = arr[i];
       }
   }
   cout << "\nMaximum value in the array is: " << max ;
   cout << "\nMinimum value in the array is: " << min ;
   goto start;
   }
   if(z==2){




   // Q2.Write  program to reverse an array of integer values
    
    
    reverse(num);
    
    
    return 0;
    goto start;
   }

   if(z==3){



    //Q3.Write  program to find the number of even and odd integers in a given array of integers.
    
    
    int n;


    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];


    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

  
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even integers: " << evenCount << endl;
    cout << "Number of odd integers: " << oddCount << endl;

    return 0;
    goto start;
   }
   if(z==4){


    //Q4.Write  program to test if an array contains a specific value & the index of that array element
      
      int n, value, index = -1;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value to search: ";
    cin >> value;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout << "Value found at index: " << index << endl;
    } else {
        cout << "Value not found in the array." << endl;
    }
    return 0;
    goto start;
   }
   if (z==5){



     //Q5.Write  program to copy an array by reversing the array
    
    
    
    int n;
   cout << "Enter the number of elements in the array: ";
   cin >> n;
   int arr[n];
   cout << "Enter " << n << " integers: ";
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   int reversedArr[n];
   for(int i = 0; i < n; i++){
       reversedArr[i] = arr[n-i-1];
   }
   cout << "Original Array: ";
   for(int i = 0; i < n; i++){
       cout << arr[i] << " ";
   }
   cout << endl << "Reversed Array: ";
   for(int i = 0; i < n; i++){
       cout << reversedArr[i] << " ";
   }
   goto start;
   }
   if (z==6){



     //Q6.Write  program to find the second largest element in an array.
    
   
   
   
   int arr[100];
   int n, max, secondMax;
   cout << "Enter the number of elements in the array: ";
   cin >> n;
   cout << "Enter elements of the array: ";
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   max = arr[0];
   secondMax = INT_MIN;
   for(int i = 1; i < n; i++){
       if(arr[i] > max){
           secondMax = max;
           max = arr[i];
       } else if(arr[i] > secondMax && arr[i] != max){
           secondMax = arr[i];
       }
   }
   if(secondMax == INT_MIN){
       cout << "There is no second largest element in the array." << endl;
   } else {
       cout << "The second largest element in the array is: " << secondMax << endl;
   }
   goto start;
   }
   if (z==7){




     /*
     Q7.Make 20 integer inputs from user and print the following:

       number of positive numbers

       number of negative numbers

       number of odd numbers

       number of even numbers

       number of 0s.
     */
       
       
       
       int numbers[20];
   int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;
   cout << "Enter 20 integers: ";
   for(int i = 0; i < 20; i++){
       cin >> numbers[i];
       if(numbers[i] > 0){
           positiveCount++;
       } else if(numbers[i] < 0){
           negativeCount++;
       }
       if(numbers[i] % 2 == 0){
           evenCount++;
       } else {
           oddCount++;
       }
       if(numbers[i] == 0){
           zeroCount++;
       }
   }
   cout << "Number of positive numbers: " << positiveCount << endl;
   cout << "Number of negative numbers: " << negativeCount << endl;
   cout << "Number of odd numbers: " << oddCount << endl;
   cout << "Number of even numbers: " << evenCount << endl;
   cout << "Number of 0s: " << zeroCount << endl;
    goto start;
   }

    if(z==0){
        exit(0);
    }
}

