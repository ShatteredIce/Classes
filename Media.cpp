#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;

Media::Media(){
  title = "none";
  publisher = "none";
  rating = "none";
  year = 0;
  artist = "none";
  duration = "none";
  director = "none";
}

char* Media::getTitle() {
  return title;
}

char* Media::getPublisher() {
  return publisher;
}

char* Media::getRating() {
  return rating;
}

int Media::getYear(){
  return year;
}

char* Media::getArtist() {
  return artist;
}

char* Media::getDuration() {
  return duration;
}

char* Media::getDirector() {
  return director;
}

