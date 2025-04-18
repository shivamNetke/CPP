// hybrid inheritance 1 task
// date : 15/4/25
// author : shivam netke

#include<iostream>
using namespace std;

class a{
    public:
    a(){
        cout<<"class a constructor called "<<endl;
    }
    ~a(){
        cout<<"class a destructor called "<<endl;
    }
};

class b : public a 
{
    public:
    b(){
        cout<<"class b constructor called "<<endl;
    }
    ~b(){
        cout<<"class b destructor called "<<endl;
    }
};

class c : public b 
{
    public:
    c(){
        cout<<"class c constructor called "<<endl;
    }
    ~c(){
        cout<<"class c destructor called "<<endl;
    }
};

class d : public c 
{
    public:
    d(){
        cout<<"class d constructor called "<<endl;
    }
    ~d(){
        cout<<"class d destructor called "<<endl;
    }
};

class e : public c 
{
    public:
    e(){
        cout<<"class e constructor called "<<endl;
    }
    ~e(){
        cout<<"class e destructor called "<<endl;
    }
};

int main(void)
{   
    cout<<"dObj created----"<<endl;
    d dObj;
    cout<<endl;
    cout<<"eObj created----"<<endl;
    e eObj;
    cout<<endl;

    return 0;
}

// --OUTPUT-- 
// dObj created----
// class a constructor called
// class b constructor called
// class c constructor called
// class d constructor called

// eObj created----
// class a constructor called
// class b constructor called
// class c constructor called
// class e constructor called

// class e destructor called
// class c destructor called
// class b destructor called
// class a destructor called
// class d destructor called
// class c destructor called
// class b destructor called
// class a destructor called
