#include <iostream>
#include <exception>


using namespace std;

class MyException: public exception{
public:
    virtual const char* what() const throw(){
        // this method will not throw an exception since it includes const throw()
        return "Something Bad Happened";

    }
};

class Test{
    public:
    void goesWrong(){
        throw MyException();
    }
};

void runMe(){
        Test test;

    try{
        test.goesWrong();
    }
    catch(MyException &e){
        cout << e.what() <<endl;
    }

    cout << "Hdjdgdjghd" << endl;
}

// See https://en.cppreference.com/w/cpp/error/exception for alist of standard exceptions