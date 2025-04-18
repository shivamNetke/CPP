// hybrid inheritance 2 task
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

int main(void)
{
    cout<<"bObj created----"<<endl;
    b bObj;
    cout<<endl;
    cout<<"eObj created----"<<endl;
    e eObj;
    cout<<endl;
    return 0;
}

/*
--OUTPUT-- 
bObj created----
class a constructor called
class b constructor called

eObj created----
class a constructor called
class c constructor called
class d constructor called
class e constructor called

class e destructor called
class d destructor called
class c destructor called
class a destructor called
class b destructor called
class a destructor called

*/