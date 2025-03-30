#include <iostream>
using namespace std;

// struct Student
// {
//     string name;
//     short age;
//     int rollno;
//     char gender;
// };

// void StudentInput(Student &st)
// {
//     cout << "Enter name: " << endl;
//     getline(cin, st.name);
//     cout << "Enter age: " << endl;
//     cin >> st.age;
//     cout << "Enter rollno: " << endl;
//     cin >> st.rollno;
//     cout << "Enter gander: " << endl;
//     cin >> st.gender;
// }

// void StudentData(Student st)
// {
//     // Student st;

//     cout << "Name: " << st.name << endl;
//     cout << "Age: " << st.age << endl;
//     cout << "rollno: " << st.rollno << endl;
//     cout << "Gender: " << st.gender << endl;
// }

// int main()
// {
//     Student st;

//     // st.name = "Rahul Sharma";
//     // st.age = 19;
//     // st.rollno = 21312;
//     // st.gender = 'M';
//     StudentInput(st);
//     StudentData(st);

//     // cout << "Enter name: " << endl;
//     // getline(cin, st.name);
//     // cout << "Enter age: " << endl;
//     // cin >> st.age;
//     // cout << "Enter rollno: " << endl;
//     // cin >> st.rollno;
//     // cout << "Enter gander: " << endl;
//     // cin >> st.gender;

//     // cout << "Name: " << st.name << endl;
//     // cout << "Age: " << st.age << endl;
//     // cout << "rollno: " << st.rollno << endl;
//     // cout << "Gender: " << st.gender << endl;
// }
// ----------------

// struct Student
// {
//     string name;
//     short age;
//     int rollno;
//     char gender;
// };

// void StudentInput(Student *st)
// {
//     cout << "Enter name: " << endl;
//     getline(cin, st->name);
//     cout << "Enter age: " << endl;
//     cin >> st->age;
//     cout << "Enter rollno: " << endl;
//     cin >> st->rollno;
//     cout << "Enter gander: " << endl;
//     cin >> st->gender;
// }

// void StudentData(Student st)
// {
//     // Student st;

//     cout << "Name: " << st.name << endl;
//     cout << "Age: " << st.age << endl;
//     cout << "rollno: " << st.rollno << endl;
//     cout << "Gender: " << st.gender << endl;
// }

// int main()
// {
//     Student st;

//     // st.name = "Rahul Sharma";
//     // st.age = 19;
//     // st.rollno = 21312;
//     // st.gender = 'M';
//     StudentInput(&st);
//     StudentData(st);

//     // cout << "Enter name: " << endl;
//     // getline(cin, st.name);
//     // cout << "Enter age: " << endl;
//     // cin >> st.age;
//     // cout << "Enter rollno: " << endl;
//     // cin >> st.rollno;
//     // cout << "Enter gander: " << endl;
//     // cin >> st.gender;

//     // cout << "Name: " << st.name << endl;
//     // cout << "Age: " << st.age << endl;
//     // cout << "rollno: " << st.rollno << endl;
//     // cout << "Gender: " << st.gender << endl;
// }

// ------------------------

struct Student
{
    string name;
    short age;
    int rollno;
    char gender;
};

void StudentInput(Student *st)
{
    cout << "Enter name: " << endl;
    getline(cin, st->name);
    cout << "Enter age: " << endl;
    cin >> st->age;
    cout << "Enter rollno: " << endl;
    cin >> st->rollno;
    cout << "Enter gander: " << endl;
    cin >> st->gender;
    cin.ignore();
}

void StudentData(Student st)
{
    // Student st;

    cout << "Name: " << st.name << endl;
    cout << "Age: " << st.age << endl;
    cout << "rollno: " << st.rollno << endl;
    cout << "Gender: " << st.gender << endl;
}

int main()
{

    Student st[2];

    for (int i = 0; i < 2; i++)
    {
        StudentInput(&st[i]);
    }
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        StudentData(st[i]);
    }
}
