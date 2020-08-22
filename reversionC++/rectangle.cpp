#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Point
{
    int x, y;
};
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    if (l1.x >= r2.x || l2.x >= r1.x)
        return false;
    if (l1.y <= r2.y || l2.y <= r1.y)
        return false;
    return true;
}

int main()
{
    Point l1, r1, l2, r2;
    cin >> l1.x >> l1.y;
    cin >> r1.x >> r1.y;
    cin >> l2.x >> l2.y;
    cin >> r2.x >> r2.y;
    if (doOverlap(l1, r1, l2, r2))
        cout << "Rectangles Overlap\n";
    else
        cout << "Rectangles Don't Overlap\n";
    return 0;
}
