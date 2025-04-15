// hybrid inheritance 4 task
// date : 15/4/25
// author : shivam netke

#include<iostream>
using namespace std;

class a{
    public:

};

class b : public a {
    public:

};

class c : public a {
    public : 

};

class d : public c {
    public :

};

class f : public b {
    public:

};

class e : public b, public d {
    public:

};

class g : public d {
    public:

};

class h : public f, public g {
    public:

};

int main(void)
{
    return 0;
}