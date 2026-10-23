# include<iostream>
using namespace std;

class PPA 
{
    public:
        int No1;
        int No2;
    // Parametrised constructor

    PPA()              
    {
        cout<<"Inside Default Constructor\n";
    }

    PPA(int a, int b)
    {
        cout<<"Inside Parametrised Constructor\n";
    }

    ~PPA()
    {
        cout<<"Inside Destructor\n";
    }
};
int main()
{
        PPA pobj1;
        PPA pobj2(11,21);  // jevdhe  object create astat tevde constructor

       

    return 0;
} 