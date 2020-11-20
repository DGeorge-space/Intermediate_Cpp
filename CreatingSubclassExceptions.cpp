#include <iostream>

using namespace std;

void goesWrong()
{
    bool error1 = true;
    bool error2 = false;

    if (error1)
    {
        throw bad_alloc();
    }
    if (error1)
    {
        throw bad_alloc();
    }
}

int runMe()
{

    try
    {
        goesWrong();
    }
    catch (exception &e)
    { //E1
        cout << "Catching Exception: " << e.what() << endl;
    }
    catch (bad_alloc &e)
    { //E2
        cout << "Catching Bad_Alloc" << e.what() << endl;
    }

    // throws std::bad_alloc, but it is actually being thrown from the first exception. The reason is due to polymorphism, bad_alloc is a sub class of exception which means that what exception is thrown bad_alloc
    // may also be thrown 

    return 0;
}
