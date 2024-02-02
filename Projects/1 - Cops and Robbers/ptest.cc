#include <iostream>
#include <sstream>
#include <random>
#include "point.h"

using namespace std;

#define REPI(ctr,start,limit) for (uint32_t ctr=(start);(ctr)<(limit);(ctr)++)

#define OPF(b) ((b) ? "pass" : "fail")

const uint32_t
  DEFAULT_ITERATIONS = 1000;

int main(int argc,char *argv[]) {
  stringstream
    sstr;
  string
    tmp1,tmp2;
  random_device
    rd;
  mt19937
    mt(rd());
  uniform_int_distribution<>
    disN(-1000,1000),
    disD(1,1000);
  int32_t
    n1,d1,
    n2,d2;
  Fraction
    x,y;
  Point
    a,b,c;
  uint32_t
    nIter=DEFAULT_ITERATIONS;
  bool
    okay;
    
  if (argc > 1)
    nIter = atoi(argv[1]);
    
  // test input
  okay = true;
  for (uint32_t i=0;i<nIter;i++) {
    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);

    sstr << '(' << x << ',' << y << ')';
    sstr >> a;
    
    if (a.getX() != x || a.getY() != y)
      okay = false;
  }
  cout << "          input: " << OPF(okay) << endl;

  // test output
  okay = true;
  for (uint32_t i=0;i<nIter;i++) {
    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    a = Point(x,y);

    sstr.clear();
    sstr << a;
    
    int g = std::gcd(n1,d1);
    n1 /= g;
    d1 /= g;

    g = std::gcd(n2,d2);
    n2 /= g;
    d2 /= g;

    tmp1 = "(" + to_string(n1) + " / " + to_string(d1) + "," +
           to_string(n2) + " / " + to_string(d2) + ")";
         
    getline(sstr,tmp2);

    if (tmp1 != tmp2)
      okay = false;
  }
  cout << "         output: " << OPF(okay) << endl;

  // test +
  okay = true;
  for (uint32_t i=0;i<nIter;i++) {
    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    a = Point(x,y);

    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    b = Point(x,y);
    
    c = a + b;
    
    if (c.getX() != a.getX() + b.getX() || c.getY() != a.getY() + b.getY())
      okay = false;
  }
  cout << "              +: " << OPF(okay) << endl;

  // test -
  okay = true;
  for (uint32_t i=0;i<nIter;i++) {
    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    a = Point(x,y);

    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    b = Point(x,y);
    
    c = a - b;
    
    if (c.getX() != a.getX() - b.getX() || c.getY() != a.getY() - b.getY())
      okay = false;
  }
  cout << "              -: " << OPF(okay) << endl;

  // test * (cross product)
  okay = true;
  for (uint32_t i=0;i<nIter;i++) {
    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    a = Point(x,y);

    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    b = Point(x,y);
    
    x = a * b;
    
    if (x != a.getX() * b.getY() - a.getY() * b.getX())
      okay = false;
  }
  cout << "cross-product *: " << OPF(okay) << endl;

  // test * (scaling)
  okay = true;
  for (uint32_t i=0;i<nIter;i++) {
    n1 = disN(mt);
    n2 = disN(mt);
    d1 = disD(mt);
    d2 = disD(mt);
    
    x = Fraction(n1,d1);
    y = Fraction(n2,d2);
    
    a = Point(x,y);

    n1 = disN(mt);
    d1 = disD(mt);
    
    y = Fraction(n1,d1);
    
    c = a * y;
    
    if (c.getX() != a.getX() * y || c.getY() != a.getY() * y)
      okay = false;
  }
  cout << "      scaling *: " << OPF(okay) << endl;

  return 0;
}

