#include <iostream>
#include<stdlib.h>
#include<climits>
#include<cstring>

using namespace std;

int num_user1(int num1){
    if (cin.fail())
    {
        throw "You can only enter numbers!";
    }
    return 0;
}
int num_user2(int num2){
    if (cin.fail())
    {
        throw "You can only enter numbers!";
    }
    return 0;
}
int num_user3(int num3){
    if (cin.fail())
    {
        throw "You can only enter numbers!";
    }
    return 0;
}
int num_user4(int num4){
    if (cin.fail())
    {
        throw "You can only enter numbers!";
    }
    return 0;
}
int num_user5(int num5){
    if (cin.fail())
    {
        throw "You can only enter numbers!";
    }
    return 0;
}

class user{
public:
    char name[50];
};

class phonebook:public user{
public:
    int phone_no;
};

class output{
public:
    int display_user1(int num1){
    cout<<"Phone Number: "<<num1<<endl;
    return 0;
    }
    int display_user2(int num2){
    cout<<"Phone Number: "<<num2<<endl;
    return 0;
    }
    int display_user3(int num3){
    cout<<"Phone Number: "<<num3<<endl;
    return 0;
    }
    int display_user4(int num4){
    cout<<"Phone Number: "<<num4<<endl;
    return 0;
    }
    int display_user5(int num5){
    cout<<"Phone Number: "<<num5<<endl;
    return 0;
    }
};


int main()
{
    phonebook num1,num2,num3,num4,num5;
    cout<<"========================================="<<endl;
    cout<<"         Contact Management System"<<endl;
    cout<<"========================================="<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name and Phone Number for Contact 1"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name: ";
    cin>>num1.name;
    cout<<"Input Phone Number: ";
    cin>>num1.phone_no;
    try{
    num_user1(num1.phone_no);
    }
    catch(const char* msg1){
        cerr<<msg1<<endl;
    }
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter a number: ";
        cin >> num1.phone_no;
    }
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"         Contact Management System"<<endl;
    cout<<"========================================="<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name and Phone Number for Contact 2"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name: ";
    cin>>num2.name;
    cout<<"Input Phone Number: ";
    cin>>num2.phone_no;
    try{
    num_user2(num2.phone_no);
    }
    catch(const char* msg2){
        cerr<<msg2<<endl;
    }
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter a number: ";
        cin >> num2.phone_no;
    }
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"         Contact Management System"<<endl;
    cout<<"========================================="<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name and Phone Number for Contact 3"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name: ";
    cin>>num3.name;
    cout<<"Input Phone Number: ";
    cin>>num3.phone_no;
    try{
    num_user3(num3.phone_no);
    }
    catch(const char* msg3){
        cerr<<msg3<<endl;
    }
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter a number: ";
        cin >> num3.phone_no;
    }
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"         Contact Management System"<<endl;
    cout<<"========================================="<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name and Phone Number for Contact 4"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name: ";
    cin>>num4.name;
    cout<<"Input Phone Number: ";
    cin>>num4.phone_no;
    try{
    num_user4(num4.phone_no);
    }
    catch(const char* msg4){
        cerr<<msg4<<endl;
    }
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter a number: ";
        cin >> num4.phone_no;
    }
    system("CLS");
    cout<<"========================================="<<endl;
    cout<<"         Contact Management System"<<endl;
    cout<<"========================================="<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name and Phone Number for Contact 5"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Input Name: ";
    cin>>num5.name;
    cout<<"Input Phone Number: ";
    cin>>num5.phone_no;
    try{
    num_user5(num5.phone_no);
    }
    catch(const char* msg5){
        cerr<<msg5<<endl;
    }
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Enter a number: ";
        cin >> num5.phone_no;
    }
    system("CLS");

    output obj1,obj2,obj3,obj4,obj5;
    cout<<"========================================="<<endl;
    cout<<"          Details of Contact 1"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<num1.name<<endl;
    obj1.display_user1(num1.phone_no);
    cout<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"          Details of Contact 2"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<num2.name<<endl;
    obj2.display_user2(num2.phone_no);
    cout<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"          Details of Contact 3"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<num3.name<<endl;
    obj3.display_user3(num3.phone_no);
    cout<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"          Details of Contact 4"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<num4.name<<endl;
    obj4.display_user4(num4.phone_no);
    cout<<endl<<endl;
    cout<<"========================================="<<endl;
    cout<<"          Details of Contact 5"<<endl;
    cout<<"========================================="<<endl;
    cout<<"Name: "<<num5.name<<endl;
    obj5.display_user5(num5.phone_no);
    cout<<endl<<endl;
    return 0;
}
