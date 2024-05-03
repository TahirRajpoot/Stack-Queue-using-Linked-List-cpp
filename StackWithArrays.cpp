#include <iostream>
using namespace std;


class StackWithArray
{
private:
    int a[100];
public:
    StackWithArray()
    {
        
    }
    void PUSH(int x)
    {
        int i=0;
        while(a[i] != 0)
        {
            i = i+1;
            if(i == 100)
            {
                break;
            }
        }
        a[i] = x;
    }
    int POP()
    {
        if(a[0] != 0)
        {
            int i=0;
            for(int i = 0; i < 100 ; i++)
            {
                if(a[i] == 0)
                {
                    int x = a[i-1];
                    a[i-1] = 0;
                    return x;
                }
            }
        }
        
    }
    int PEEK()
    {
         
    }

   
};







int main()
{
    
    StackWithArray a;
    a.PUSH(122);
    a.PUSH(12);
    cout<<a.POP();
    

}

    