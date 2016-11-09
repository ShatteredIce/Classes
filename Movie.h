#include <iostream>
#include "Media.h"

using namespace std;

class Movie : public Media {
 public:
  Movie();
  char* getDirector();
  char* getDuration();
  char* getRating();
  void setDirector(char*);
  void setDuration(char*);
  void setRating(char*);
  void display();
 private:
  char* director;
  char* duration;
  char* rating;
};