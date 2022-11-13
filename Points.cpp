#include <iostream>
#include <math.h>
using namespace std;

class Point
{
  double x;
  double y;
public:
  double get_x() const
  {
    return x;
  }
  double get_y() const
  {
    return y;
  }
  void set_x(double x)
  {
    this->x = x;
  }
  void set_y(double y)
  {
    this->y = y;
  }
  double distance(Point A) const
  {
    double a = this->x - A.get_x ();
    double b = this->y - A.get_y ();
    return sqrt (a*a+b*b);
  }
};

double distance(Point A, Point B);

int main()
{
    setlocale(LC_ALL, "Russian");
    
    Point A, B;
    double x,y;
    cout << "Введите координаты первой точки (через пробел): ";
    cin >> x; cin >> y;
    A.set_x (x); A.set_y (y);
    
    cout << "Введите координаты второй точки (через пробел): ";
    cin >> x; cin >> y;
    B.set_x (x); B.set_y (y);
    
    /*cout << A.get_x () << "\t" << A.get_y () << endl;
    cout << B.get_x () << "\t" << B.get_y () << endl;*/
    
    cout << "Расстояние между точками: " << distance (A, B) << endl;
    cout << "Расстояние между точками: " << distance (B, A) << endl;
    
    return 0;
}

double distance(Point A, Point B)
{
  return A.distance (B);
}