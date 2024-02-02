const uint32_t
  MAX_POINTS = 100;

bool turnsLeft(Point a,Point b,Point c) {

  return (b - a) * (c - a) > 0;
}

bool isLessThan(Point a,Point b) {

  if (a.getX() < b.getX())
    return true;
  else if (a.getX() > b.getX())
    return false;
  return a.getY() < b.getY();
}

int compare(const void *a,const void *b) {
  const Point *pa = (const Point *)a,*pb = (const Point *)b;

  if (pa->getX() < pb->getX())
    return 1;
  else if (pa->getX() > pb->getX())
    return -1;
  return pa->getY() - pb->getY();
}

void findHull(Point p[],int k,Point hull[],int &nHull) {
  Point
    lower[MAX_POINTS],upper[MAX_POINTS];

  qsort(p,k,sizeof(Point),compare);
  ...
  
  // 21: return lower[0], lower[1], ... , lower[t − 1], upper[0], upper[1], ... , upper[u − 1]
  nHull = 0;
  for (int i=0;i<t;i++)
    hull[nHull++] = lower[i];
  for (int i=0;i<u;i++)
    hull[nHull++] = upper[i];
}

int main() {
  Point
    cops[MAX_POINTS],copHull[MAX_POINTS];
  int
    nCops,ncHull;
    
  ...
  
  findHull(cops,nCops,copHull,ncHull);
