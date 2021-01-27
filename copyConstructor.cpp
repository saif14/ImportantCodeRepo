#include<iostream>

using namespace std;

class Point
{
    private: 
    int x,y;
    public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }



};

int main()
{
    Point p1 (2,3);
    Point p2 = p1;

    cout<<"p1.x = "<<p1.getX()<< " p2.x = "<<p2.getX()<<endl;
    cout<<"p1.y = "<<p1.getY()<< " p2.y = "<<p2.getY();


}