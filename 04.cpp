// #include<iostream>
// using namespace std;

// int main()
// {
//     int main[5];
//     int i,total=0;
//     cout<<"end the marks of 5 subjects";

//     for(i=0;i<5;i++)
//     {
//         cin>>marks[i];
//         total=total+marks[i];
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char str[20]="hello";
//     cout<<str;
   
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char str[100];

//     cout<<" enetr a string";
//     cin>>str;
//     cout<<"you entered:" <<str<<endl;

//     cout<<"\n enter enother string:";
//     cin>>str;
//     cout<<"you entered:"<<str<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     string str;
//     cout<<"enter the string";
//     getline(cin, str);

//     cout<<"you entered:"<<str<<endl;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     char sname[50];

//     cout<<"enter your name";
//     gets(sname);

//     cout<<"Hi";
//     puts(sname);
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char s1[50],s2[50];

//     cout<<"enter the string";
//     cin>>s1;

//     strcpy(s2,s1);

//     cout<<"copied strint"<<s2;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char s1[50],s2[50];

//     cout<<"enter the string";
//     cin>>s1;

//     strncpy(s2,s1,2);

//     cout<<"copied strint"<<s2;
// }

// #include<iostream>
// #include<string.h>
// using namespace std;

// int main()
// {
//     char s1[50],s2[50];

//     cout<<"enter 2 string:";
//     cin>>s1>>s2;

//     strcat(s2,s1);

//     cout<<s1<<"\t"<<s2;
// }

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[50],s2[50];
    int d;

    cout<<"enter 2 string";
    cin>>s1>>s2;

    d=strcasecmp(s2,s1);
    
    cout<<"difference:"<<d;
}

