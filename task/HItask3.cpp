// hybrid inheritance 3 task
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

class b : public a{
    public:
    b(){
        cout<<"class b constructor called "<<endl;
    }
    ~b(){
        cout<<"class b destructor called "<<endl;
    }
};

class c : public a{
    public:
    c(){
        cout<<"class c constructor called "<<endl;
    }
    ~c(){
        cout<<"class c destructor called "<<endl;
    }
};

class d : public c{
    public:
    d(){
        cout<<"class d constructor called "<<endl;
    }
    ~d(){
        cout<<"class d destructor called "<<endl;
    }
};

class e : public d{
    public:
    e(){
        cout<<"class e constructor called "<<endl;
    }
    ~e(){
        cout<<"class e destructor called "<<endl;
    }
};

class f : public d{
    public : 
    f(){
        cout<<"class f constructor called "<<endl;
    }
    ~f(){
        cout<<"class f destructor called "<<endl;
    }
};

int main(void)
{
    f fObj;
    cout<<endl;
    e eObj;
    cout<<endl;
    b bObj;
    cout<<endl;
    return 0;
}

/*
--OUTPUT-- 
class a constructor called 
class c constructor called
class d constructor called
class f constructor called

class a constructor called
class c constructor called
class d constructor called
class e constructor called

class a constructor called
class b constructor called

class b destructor called
class a destructor called
class e destructor called
class d destructor called
class c destructor called
class a destructor called
class f destructor called
class d destructor called
class c destructor called
class a destructor called

*/