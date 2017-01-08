#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>

using namespace std;

//Header file for Media.cpp 
//Parent class for Videogame, Music, and Movie classes
//Stores values: id, title, and year
//Stores id as an integer and other values as char*'s

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
