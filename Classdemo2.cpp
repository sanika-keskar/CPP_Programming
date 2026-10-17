# include<iostream>
using namespace std;

class PPA 
{
    public:
        int No1;
        int No2;

        void Display()
        {
            cout<<"Inside Display\n";
        }
};
int main()
{
        PPA pobj;

        pobj.No1=11;
        pobj.No2=21;

        pobj.Display();
        cout<<pobj.No1<<"\n";
        cout<<pobj.No2<<"\n";
//size of object of class = summation of sizes of  its nonstatic characteristics 
    return 0;
} // // class declaration does not have emory alloacation
// the real life example of the oop is hdfc and hotel thali example