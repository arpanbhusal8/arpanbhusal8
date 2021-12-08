        #include <iostream>
using namespace std;

class vehicle
{
    int registration_number;
    static int count;

public:
    void setregno()
    {
        cin >> registration_number;
    }

    void getregno()
    {

        
        cout << "The registration no. of the vehicle is: " << registration_number << endl;
    }

    static void getVehilcecount()
    {
        cout << "The Vehicle count in the garage is: " << count << endl;
    }

    vehicle()
    {
        setregno();
        getregno();
       
        count++;
        cout << "The Vehicle count in the garage is: " << count << endl;
    }

    ~vehicle()
    {
        count--;
        cout << "The Vehicle count in the garage is: " << count << endl;
    }
};

int vehicle ::count = 0;

int main()
{
    vehicle v[5];
  
    return 0;
}