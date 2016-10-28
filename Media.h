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
  int getYear();
  void getArtist();
  void getDuration();
  void getDirector();
 protected:
  char* title;
  int year;
  char* artist;
  char* duration;
  char* director;
};

#endif
