#include <iostream>
#include "Media.h"

using namespace std;

class Videogame : public Media {
 public:
  Videogame();
  char* getPublisher();
  char* getRating();
  void setTitle(char*);
  void setYear(char*);
  void setPublisher(char*);
  void setRating(char*);
  void display();
 private:
  char* publisher;
  char* rating;
};
