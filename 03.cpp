// #include<iostream>
// using namespace std;

// class student {
//     private:
//         int roll;
//         string sname;
//     public:
//         void setdata();
//         void getdata();
// };

// void student::setdata() {
//     cout << "Enter the roll no: ";
//     cin >> roll;
//     cin.ignore(); // To clear the input buffer before reading a string
//     cout << "Enter the name: ";
//     getline(cin, sname); // To read the entire name including spaces
// }

// void student::getdata() {
//     cout << "\nRoll No: " << roll;
//     cout << "\nName: " << sname;
// }

// int main() {
//     student s1, s2;

//     cout << "Enter details for student 1:\n";
//     s1.setdata();

//     cout << "\nEnter details for student 2:\n";
//     s2.setdata();

//     cout << "\nStudent Details:\n";
//     cout << "------------------------";
//     s1.getdata();
//     cout << "\n------------------------";
//     s2.getdata();
//     cout << "\n------------------------";

//     return 0;
// }




// #include<iostream>
// using namespace std;

// class student {
//     private:
//         int roll;
//         string sname;
//     public:
//     student()                //constructor
//         {
//             cout<<"enter the roll no and name";
//             cin>>roll>>sname;
//         }
//         void getdata()
//         {
//             cout<<"\nRoll no : "<<roll;
//             cout<<"\nName    : "<<sname;
//         }
//         ~student()           //destructor
//         {
//             cout<<"\nObject destroyed!";
//         }
// };
// int main() {
//     student s1, s2;

//     cout << "Enter details for student 1:\n";
//     s1.getdata();

//     cout << "\nEnter details for student 2:\n";
//     s2.getdata();

//     cout << "\nStudent Details:\n";
//     cout << "------------------------";
//     s1.getdata();
//     cout << "\n------------------------";
//     s2.getdata();
//     cout << "\n------------------------";

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class student {
//     private:
//         int roll;
//         string sname;
//     public:
//     student()                //default constructor 
//         {
//             cout<<"enter the roll no and name";
//             cin>>roll>>sname;
//         }
//         void getdata()
//         {
//             cout<<"\nRoll no : "<<roll;
//             cout<<"\nName    : "<<sname;
//         }
//         ~student()           //destructor
//         {
//             cout<<"\nObject destroyed!";
//         }
// };
// int main() {
//     student s1, s2;

//     cout << "Enter details for student 1:\n";
//     s1.getdata();

//     cout << "\nEnter details for student 2:\n";
//     s2.getdata();

//     cout << "\nStudent Details:\n";
//     cout << "------------------------";
//     s1.getdata();
//     cout << "\n------------------------";
//     s2.getdata();
//     cout << "\n------------------------";

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class MyClass
// {
//     int n;
// public:
//   MyClass() {

//     cout<<"enter the data";
//     cin>>n;
//     count++;   //incrementing count inside the constructor
//   }

//   void getNumber()
//   {
//     cout<<"\nData : "<<n;

//   }
//  static int count;

//   static void getCount()
//   {
//     cout<<"\nCount = "<<count <<endl;
//   }
// };

// int MyClass::count=0;   //initializing the static member variable

// int main()
// {
//     MyClass obj1;    //first constructor call, count becomes 1
//     MyClass obj2;    //second constructor call, count becomes 2

//     obj1.getNumber();
//     obj2.getNumber();

// // cout<<"\nCount="<<MyClass::count<<endl;
//   MyClass::getCount();

// return 0;

// }







