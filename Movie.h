#include <iostream>
#include "Media.h"

using namespace std;

//Header file for Movie.cpp
//Child of Media class
//Stores values: director, duration, and rating

class Movie : public Media {
 public:
  Movie();
  ~Movie();
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
