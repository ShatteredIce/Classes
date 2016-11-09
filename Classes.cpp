#include <iostream>
#include <vector>
#include <cstring>
#include "Media.h"
#include "Videogame.h"
#include "Music.h"
#include "Movie.h"

using namespace std;

void addVideogame(vector<Media*>*);
void addMusic(vector<Media*>*);
void addMovie(vector<Media*>*);

int main()
{
  vector<Media*> database;
  vector<Media*> * databasePointer = & database;
  addVideogame(databasePointer);
  addMovie(databasePointer);
  addMusic(databasePointer);
  for(int a = 0; a < database.size(); a++){
    if(database[a]->getId() == 1){
      ((Videogame*) database[a])->display();
    }
    else if(database[a]->getId() == 2){
      ((Music*) database[a])->display();
    }
    else if(database[a]->getId() == 3){
      ((Movie*) database[a])->display();
    }
  }
  
  return 0;
}

void addVideogame(vector<Media*>* database){
  Videogame* videogame = new Videogame();
  char titleInput[81];
  char publisherInput[81];
  char ratingInput[81];
  char yearInput[81];
  cout << "-----ADDING VIDEOGAME-----" << endl;
  cout << "Title: ";
  cin.getline(titleInput, 81);
  videogame->setTitle(titleInput);
  cout << "Publisher: ";
  cin.getline(publisherInput, 81);
  videogame->setPublisher(publisherInput);
  cout << "Rating: ";
  cin.getline(ratingInput, 81);
  videogame->setRating(ratingInput);
  cout << "Year: ";
  cin.getline(yearInput,81);
  videogame->setYear(yearInput);
  videogame->setId(1);
  database->push_back(videogame);
}

void addMusic(vector<Media*>* database){
  Music* music = new Music();
  char titleInput[81];
  char artistInput[81];
  char durationInput[81];
  char publisherInput[81];
  char yearInput[81];
  cout << "-----ADDING MUSIC-----" << endl;
  cout << "Title: ";
  cin.getline(titleInput, 81);
  music->setTitle(titleInput);
  cout << "Artist: ";
  cin.getline(artistInput, 81);
  music->setArtist(artistInput);
  cout << "Duration: ";
  cin.getline(durationInput, 81);
  music->setDuration(durationInput);
  cout << "Publisher: ";
  cin.getline(publisherInput, 81);
  music->setPublisher(publisherInput);
  cout << "Year: ";
  cin.getline(yearInput,81);
  music->setYear(yearInput);
  music->setId(2);
  database->push_back(music);
}

void addMovie(vector<Media*>* database){
  Movie* movie = new Movie();
  char titleInput[81];
  char directorInput[81];
  char durationInput[81];
  char ratingInput[81];
  char yearInput[81];
  cout << "-----ADDING MOVIE-----" << endl;
  cout << "Title: ";
  cin.getline(titleInput, 81);
  movie->setTitle(titleInput);
  cout << "Director: ";
  cin.getline(directorInput, 81);
  movie->setDirector(directorInput);
  cout << "Duration: ";
  cin.getline(durationInput, 81);
  movie->setDuration(durationInput);
  cout << "Rating: ";
  cin.getline(ratingInput, 81);
  movie->setRating(ratingInput);
  cout << "Year: ";
  cin.getline(yearInput,81);
  movie->setYear(yearInput);
  movie->setId(3);
  database->push_back(movie);
}
