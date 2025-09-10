/*#include<cmath>
#include<iostream>
using namespace std;
class point
{
    public:
    float x,y;
    float distance (point p){
        float dist;
     dist = sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
        return dist;
    }
};

#include<iostream>
int main(){
    point p1,p2;
    cout<<"enter the x&y of first point\n";
    cin>>p1.x>>p1.y;
    cout<<"enter the x&y of second point\n";
    cin>>p2.x>>p2.y;
    float d;
    d=p1.distance(p2);
    cout<<"distance between points:"<<d;
}*/


#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    float x, y;

    float distance(Point p) {
        float dist = sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
        return dist;
    }
};

int main() {
    Point p1, p2;

    cout << "Enter the x & y of first point:\n";
    cin >> p1.x >> p1.y;

    cout << "Enter the x & y of second point:\n";
    cin >> p2.x >> p2.y;

    float d = p1.distance(p2);

    cout << "Distance between points: " << d << endl;

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       