#include "CustomExceptions.cpp"


using namespace std;
int main()
{
    Test test;

    try{
        test.goesWrong();
    }
    catch(MyException &e){
        cout << e.what() <<endl;
    }

    cout << "Hdjdgdjghd" << endl;
}