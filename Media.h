#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  Media();
  char* getTitle();
  void getPublisher();
  void getRating();
  char* getYear();
  void getArtist();
  void getDuration();
  void getDirector();
  void display();
 protected:
  char* title;
  char* year;
  char* artist;
  char* duration;
  char* director;
};

#endif
