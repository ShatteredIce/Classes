#include <iostream>
#include <string.h>

using namespace std;

class Media {
 public:
  Media();
  string* getTitle();
  string* getPublisher();
  string* getRating();
  int getYear;
  string* getArtist();
  string* getDuration();
  string* getDirector();
 private:
  string* title;
  string* publisher;
  string* rating;
  int year;
  string* artist;
  string* duration;
  string* director;
};
