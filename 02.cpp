// #include<iostream>
// using namespace std;
// int main()
// {
//     void disp();    //fuction declaration
//     disp();         //function call
// }

// //function defination
// void disp()


// #include<iostream>
// using namespace std;

// int main()
// {
    
//     void sum();

//     sum();
// }

// void sum()
// {
//     int a,b,c;
//     cout<<"enter any 2 number";
//     cin>>a>>b;
//     c=a+b;
//     cout<<"sum="<<c;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
    
//     void sum(int x , int y);
//     int a,b;

//     cout<<"enter any 2 number";
//     cin>>a>>b;

//     sum(a,b);
// }

// void sum(int x , int y)
// {
//     int z;
//     z=x+y;
//     cout<<"sum="<<z;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum();
//     int c=sum();  //call
//     cout<<"sum="<<c;
// }

// int sum()
// {
//     int a,b,c;
//     cout<<"enter any 2 number";
//     cin>>a>>b;
//     c=a+b;
//     return c;
// }

#include<iostream>
using namespace std;

// int main()
// {
//     int sum(int x, int y)
//     int a,b,c;
//     cout<<"enter any 2 number";
//     cin>>a>>b;

//     c=sum(a,b);
//     cout<<"sum="<<c;
    
// }

// int sum(int x, int y);
// {
//     int z;
//     z=x+y;
//     return z;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     void SI(float p,float r,int n=1);

//     SI(10000,8.5,2);
//     SI(15000,9);
// }

// void SI(float p,float r,int n)
// {
//     cout<<"\nSimple Interest ="<<(p*n*r/100);
// }


//  #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n=10;
//     int *p;

//     p=&n;

//     cout<<"\nAddress of n :"
//  }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     void swap(int a,int b);
//     cout<<"enter the two number:"<<endl;
//     cin>>a>>b;
//     cout<<"before swap: "<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<"after swap:" <<a<<" "<<b<<endl;
// }

// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x=y;
//     y=temp;
//     cout<< "swap:"<<x<<" "<<y<<endl;

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     void swap(int *a,int *b);
//     cout<<"enter the two number:"<<endl;
//     cin>>a>>b;
//     cout<<"before swap: "<<a<<" "<<b<<endl;
//     swap(a,b);
//     cout<<"after swap:" <<a<<" "<<b<<endl;
// }

// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x= *y;
//     *y= temp;
//     cout<< "swap:"<<x<<" "<<y<<endl;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[]={10,20,30,40,50};
//     int *p;
//     p=&a[0];

//     for (int i=0; i<5; i++)
//     {
//         cout<<"\nAddress: "<<p<<" value: "<<*p;
//         p++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[]={10,20,30,40,50};

//     void display(int n[], int size);

//     display(a,5);
// }

// void display(int n[], int size)
// {
//     for (int i=0 ; i<size; i++)
//     {
//         cout<<n[i]<<"\t";      
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int* p =NULL;
//     p=new int;

//     if(!p)
//         cout<<"allocation of memory failed\n";
//     else{
//         *p =29;
//         cout<<"value of p:"<<*p<<endl;
//     }

//     delete p;

//     cout<<"value of p:"<<*p<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,f=1;
//     int fact(int x);

//     cout<<"enter the number";
//     cin>>n;
//     f=fact(n);
//     cout<<"factorial of"<<n<<"="<<f;
// }

// int fact(int x)
// {
//     int f=1;
//     if(x==1)
//     {
//         return 1;
//     }
//     else{
//         return x * fact(x-1);
//     }
// }
 


// #include <iostream>
// using namespace std;


// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;  // Base case: F(0) = 0
//     } else if (n == 1) {
//         return 1;  // Base case: F(1) = 1
//     } else {
//         return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case: F(n) = F(n-1) + F(n-2)
//     }
// }

// int main() {
//     // Print the first 10 Fibonacci numbers
//     cout << "The first 10 Fibonacci numbers are:" << endl;
//     for (int i = 0; i < 10; i++) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;


int reverseNumber(int n, int reversedNum = 0) {
    
    if (n == 0) {
        return reversedNum;
    } 
    else 
    {
        
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        
        return reverseNumber(n / 10, reversedNum);
    }
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversedNum = reverseNumber(num);
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}


