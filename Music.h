#include <iostream>
#include "Media.h"

using namespace std;

//Header file for Music.cpp

class Music : public Media {
 public:
  Music();
  char* getPublisher();
  char* getDuration();
  char* getArtist();
  void setPublisher(char*);
  void setDuration(char*);
  void setArtist(char*);
  void display();
 private:
  char* publisher;
  char* duration;
  char* artist;
};
