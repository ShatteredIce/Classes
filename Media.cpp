#include <iostream>;
#include <string.h>;
#include "Media.h";

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

string* Media::getTitle() {
  return title;
}

string* Media::getPublisher() {
  return publisher;
}

string* Media::getRating() {
  return rating;
}

int Media::getYear(){
  return year;
}

string* Media::getArtist() {
  return artist;
}

string* Media::getDuration() {
  return duration;
}

string* Media::getDirector() {
  return director;
}

