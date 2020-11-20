#include <iostream>

using namespace std;  

class   CanGoWrong{
    public:
    CanGoWrong(){
        char *pMemory = new char [9999];   // allocating memory for an array of 999 chars, is generally better to express memory in powers of two
                                                            // allocating 999999999999999999 chars throws an exception from the compiler because the memory cannot be allocated. 

                                                            // Writing exception handling in constructors is an effective way to get information about failures in constructors
        delete [] pMemory;
    }
};

int runMe(){
    try{
        CanGoWrong wrong;

    }
    catch (bad_alloc &e){//if an object is being thrown like in this case we declare the error variable with a reference & 
        cout << "Caught Exception: " << e.what() << endl;
    }

    return 0;
}
