#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;
// Moi table data deu phai co 1 unique id de de cho viec xu ly

struct users {
    int id;
    short int no;
    string studentId;
    string firstName;
    string lastName;
    bool gender;
    string dateOfBirth;
    string socialId;
    bool type; // 0: giao vu, 1: sinh vien
    unsigned short int sType;
    string password;
};

struct Node {
    users* info;
    Node* pNext;
    Node* pPre;
};

typedef struct Node* pNode;

// Thong tin sinh vien

// Thong tin nam hoc
struct years {
    int id;
    string name;
};

// Thong tin lop hoc
struct classes {
    int id;
    string name;
    int yid; // years
};

// Table de biet dc user do o trong class nao
struct joinClasses {
    int id;
    int uid; // users
    int cid; // classes
};

// Luu thong tin Hoc ky
struct semesters {
    int id;
    short int no;
    int yid; // years
    string startDate;
    string endDate;
};

// Mua dang ki hoc phan
struct registrationSessions {
    int id;
    string startDate;
    string endDate;
};

// Thong tin khoa hoc
struct courses {
    int id;
    string name;
    string teacherName;
    short int numberCredits;
    short int maxStudents;
    short int dayOfWeek;
    short int day; // 0, 1, 2, 3, 4, 5, 6 : MON, TUE, WED, THU, FRI, SAT, SUN
    short int time; // 1, 2, 3, 4 : S1 (7:30), S2(9:30), S3, S4;
};

// Ket qua cua sinh vien trong khoa hoc
struct resultCourses {
    int id;
    int uid;
    int couid; // courses
    float totalMark;
    float finalMark;
    float midTermMark;
    float OtherMark;
};

void menu_loggedin();
bool could_Logged_in(string user_id, string pass, pNode pUser);
#endif // DATA_H_INCLUDED