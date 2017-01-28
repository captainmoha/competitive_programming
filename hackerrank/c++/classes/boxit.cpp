#include <iostream>
#include <sstream>

using namespace std;

class Box {
    public:
        Box() {
            length = 0;
            width = 0;
            height = 0;
        }

        Box(int l, int w, int h) {
            length = l;
            width = w;
            height = h;
        }

        Box(const Box& s) {
            length = s.length;
            width = s.width;
            height = s.height;
        }

        int getLength() {
            return length;
        }

        int getWidth() {
            return width;
        }
        int getHeight() {
            return height;
        }

        long long CalculateVolume() {
            long long vol = length * width * height;
            return vol;
        }

        bool operator<(const Box B) {

            bool cond1 = length < B.length;
            bool cond2 = (width < B.width && (length == B.length));
            bool cond3 = (height < B.height && (length == B.length && width == B.width));

            return (cond1 || cond2 || cond3);
        }

        friend ostream& operator<<(ostream& os, const Box B) {
            os << B.length << ' ' << B.width << ' ' << B.height;

            return os;
        }

    private:
        long long length, width, height;
        
};

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}