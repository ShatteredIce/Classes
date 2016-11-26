#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>

using namespace std;

//Header file for Media.cpp 

class Media {
 public:
  Media();
  ~Media();
  char* getTitle();
  char* getYear();
  void setTitle(char*);
  void setYear(char*);
  void setId(int);
  int getId();
 protected:
  int id;
  char* title;
  char* year;
};

#endif
