#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  Media();
  char* getTitle();
  char* getPublisher();
  char* getRating();
  int getYear();
  char* getArtist();
  char* getDuration();
  char* getDirector();
 protected:
  char* title;
  char* publisher;
  char* rating;
  int year;
  char* artist;
  char* duration;
  char* director;
};

#endif
