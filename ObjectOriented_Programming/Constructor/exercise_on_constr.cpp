// Distance between two points

#include <iostream>
#include <math.h>
using namespace std;

class Points
{
    int x, y;

public:
    Points(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoints(void)
    {
        cout << "The points is (" << x << "," << y << ")." << endl;
    }
    friend float distance_btw_points(Points p, Points q);
};

float distance_btw_points(Points p, Points q)
{
    Points r((p.y - p.x), (q.y - q.x));
    r.displayPoints();
    float dist = sqrt((r.x * r.x) + (r.y * r.y));
    return dist;
}

int main()
{
    Points p(2, 3);
    p.displayPoints();

    Points q(4, 6);
    q.displayPoints();
    float dist = distance_btw_points(p, q);
    cout << "The distnace between the points is " << dist << endl;
    return 0;
}