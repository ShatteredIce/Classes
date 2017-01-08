#include <iostream>
#include "Media.h"

using namespace std;

//Header file for Music.cpp
//Child of Media class
//Stores values: publisher, duration, and artist

class Music : public Media {
 public:
  Music();
  ~Music();
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
