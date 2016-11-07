#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  Media();
  char* getTitle();
  char* getYear();
  void setId(int);
  int getId();
 protected:
  int id;
  char* title;
  char* year;
};

#endif
