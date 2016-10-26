#include <iostream>
#include "Media.h"

using namespace std;

class Videogame : public Media {
 public:
  Videogame();
  void setTitle(char*);
  void setYear(int);
  void setPublisher(char*);
  void setRating(char*);
};
