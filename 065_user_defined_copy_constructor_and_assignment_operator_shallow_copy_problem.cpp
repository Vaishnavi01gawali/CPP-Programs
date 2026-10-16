#include <iostream>
using std::cout;
using std::endl;

class demo
{
    char chChar;
    int iNo;
    float fNo;
    double dNo;

    int *pPtr1;
    int *pPtr2;

public:
    demo()
    {
        chChar = '\0';
        iNo = 0;
        fNo = 0.0f;
        dNo = 0.0;

        pPtr1 = NULL;
        pPtr2 = new int[3];

        if(NULL == pPtr2)
        {
            cout << "Memory allocation FAILED\n";
            return;
        }

        /*
        for(int iCounter = 0; iCounter < 3; iCounter++)
            pPtr2[iCounter] = 0;
        */

        memset(pPtr2, 0, 3 * sizeof(int));
    }

    ~demo()
    {
        chChar = '\0';
        iNo = 0;
        fNo = 0.0f;
        dNo = 0.0;

        cout << "In destructor\n";

        pPtr1 = NULL;

        if(pPtr2 != NULL)
        {
            cout << "In destructor if\n";
            delete pPtr2;
            pPtr2 = NULL;
        }

        cout << "Leaving destructor\n";
    }

    void Set(char chParam, int iParam, float fParam, double dParam)
    {
        chChar = chParam;
        iNo = iParam;
        fNo = fParam;
        dNo = dParam;

        pPtr1 = &iNo;

        for(int iCounter = 0; iCounter < 3; iCounter++)
            pPtr2[iCounter] = iParam + iCounter + 1;
    }

    void Get()
    {
        cout << "chChar is " << chChar << endl;
        cout << "iNo is " << iNo << endl;
        cout << "fNo is " << fNo << endl;
        cout << "dNo is " << dNo << endl;

        cout << "&iNo is " << &iNo << endl;
        cout << "pPtr1 is " << pPtr1 << endl;

        if(pPtr1 != NULL)
            cout << "*pPtr1 is " << *pPtr1 << endl;

        cout << "pPtr2 is " << pPtr2 << endl;
        cout << "pPtr2 values are :\t";

        if(pPtr2 != NULL)
        {
            for(int iCounter = 0; iCounter < 3; iCounter++)
                cout << pPtr2[iCounter] << "\t";

            cout << endl;
        }
    }

    demo(demo &refObj)
    {
        cout << "\nIn copy constructor\n";

        chChar = refObj.chChar;
        iNo = refObj.iNo;
        fNo = refObj.fNo;
        dNo = refObj.dNo;

        pPtr1 = refObj.pPtr1;
        pPtr2 = refObj.pPtr2;
    }

    demo& operator =(demo &refObj2)
    {
        cout << "\nIn assignment operator\n";

        chChar = refObj2.chChar;
        iNo = refObj2.iNo;
        fNo = refObj2.fNo;
        dNo = refObj2.dNo;

        pPtr1 = refObj2.pPtr1;
        pPtr2 = refObj2.pPtr2;

        return *this;
    }
};

int main(void)
{
    demo obj1;

    cout << "OBJ1:\n";
    obj1.Get();

    obj1.Set('A', 10, 57.33f, 69.33);

    cout << "\nOBJ1:\n";
    obj1.Get();

    demo obj2 = obj1; // copy constructor

    cout << "\nOBJ2:\n";
    obj2.Get();

    demo obj3;

    obj3 = obj1; // assignment operator

    cout << "\nOBJ3:\n";
    obj3.Get();

    cout << "\nLeaving main\n";

    return 0;
}
