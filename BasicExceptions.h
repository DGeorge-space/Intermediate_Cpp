#include <iostream>
#include <vector>
#include <string>

using namespace std;

// can throw in any function and then the exception will occur wherever the catch is up the call stack: 


void mightGoWrong()
{

    bool error1 = true;
    bool error2 = true;

    try
    {

        if (error1)
        {
            // throw 8; // will through the value 8 if an error occurs "terminate called after throwing an instance of 'int'"
            throw "hmmm that's strange";        
        }
        if (error2){
            throw string("Something else has gone wrong ") // use the string class name rather than array of int 
                // do not need to use the new keyword here because the function is defined to instantiate
        }
    }
    catch (int err)
    {
        cout << " Error code: " << err << endl;
    }
    catch (char const *err)
    {
        cout << "Error Message: " << err << endl;
    }

    cout << "Still running " << endl;
}
