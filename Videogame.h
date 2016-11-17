#include <iostream>
#include "Media.h"

using namespace std;

//Header file for Videogame.cpp 

class Videogame : public Media {
 public:
  Videogame();
  ~Videogame();
  char* getPublisher();
  char* getRating();
  void setPublisher(char*);
  void setRating(char*);
  void display();
 private:
  char* publisher;
  char* rating;
};
