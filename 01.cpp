// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;

//     for(i=5;i>=1;i--){
//         for(j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++){
        for(k=4;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}