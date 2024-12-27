// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1;  

//     while(i<=10)  
//     {
//         cout<<i<<endl;    
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1;   //counter init step 1
//     do
//     {
//         cout<<i<<endl;   //step 2
//         i++;             //step 3
//     }
//     while (i<=10);       //condition step 4
// }

// #include<iostream>
// using namespace std;
// //factorial of the number
// int main()
// {
//     int n,f,i;
//     f=1;
//     cout<<"enter the number";
//     cin>>n;

//     for(i=n;i>=1;i--)
//     {
//         f=f*i;
//     }

//     cout<<"factorial of the "<<n<<"="<<f;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     cout<<"enter the number";
//     cin>>i;
//     for(j=1;j<=10;j++)
//     {
//         cout<<i<<"*"<<j<<"="<<i*j<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i=1; i<=10; i++)
//     {
//         if(i==5)
//         {
//             break;
//         }
//         cout<<i<<"\t";
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i=1; i<=10; i++)
//     {
//         if(i==5)
//         {
//             continue;
//         }
//         cout<<i<<"\t";
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     for (int i=1; i<=100; i++)
//     {
//         if(i%2==0)
//         {
//             continue;
//         }
//         cout<<i<<"\t";
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i;
//     bool flag=true;

//     cout<<"enter the number:";
//     cin>>n;
    
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"not a prime number";
//             flag=false;
//             break;
//         }
//     }
//     if(flag==true)
//     {
//         cout<<"prime number";
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    char ans;

    start:

    cout<<"enter the number";
    cin>>n;
    cout<<"square of the"<<n<<"="<<n*n;

    cout<<"/n do you want to try another number (y/n):";
    cin>>ans;
    if(ans=='y')
    {
        goto start;
    }
    else
    {
        exit(0);
    }
}
