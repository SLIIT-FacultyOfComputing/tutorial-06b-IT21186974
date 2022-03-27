#include "Box.h"

// Implement setters and getters
void Box::setMesurement1(int plength)
{
  length=plength;
}

void Box::setMesurement2(int pwidth)
{
  width=pwidth;
}

void Box::setMesurement3(int pheight)
{
  height=pheight;
}

int Box::getlength()
{
  return length;
}

int Box::getwidth()
{
  return width;
}

int Box::getheight()
{
  return height;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
