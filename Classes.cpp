//C++ Project 5 - Nathan Purwosumarto - 11/17/2016
//Classes - A database that stores information on media

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

  //variable setup
  bool running = true;
  bool searchMatch = false;
  char input[81];
  char add[4] = {'A','D','D','\0'};
  char vid[4] = {'V','I','D','\0'};
  char mus[4] = {'M','U','S','\0'};
  char mov[4] = {'M','O','V','\0'};
  char yr[3] =  {'Y','R','\0'};
  char del[7] = {'D','E','L','E','T','E','\0'};
  char search[7] = {'S','E','A','R','C','H','\0'};
  char print[6] = {'P','R','I','N','T','\0'};
  char quit[5] = {'Q','U','I','T','\0'};

  cout << endl << "Welcome to the totally useless Media Database!" << endl;
  cout << "Commands: add, print, search, and quit" << endl << endl;
  
  while(running){
    fill(input, input + 81, ' ');
    cout << "Awaiting input: ";
    cin.getline(input, 81);
    for(int i = 0; i < strlen(input); i++){
      input[i] = toupper(input[i]);
    }
    //if input = QUIT, then end the program
    if(strcmp(input, quit) == 0){
      cout << endl << "Program Terminated." << endl;
      running = false;
    }
    //if input = ADD, then prompt user for the kind of media they want to add
    else if(strcmp(input, add) == 0){
      fill(input, input + 81, ' ');
      cout << "What type of media do you want to add? (vid, mus, mov): ";
      cin.getline(input, 81);
      for(int i = 0; i < strlen(input); i++){
	input[i] = toupper(input[i]);
      }
      //Call the appropriate add_mediatype
      if(strcmp(input, vid) == 0){
	addVideogame(databasePointer);
      }
      else if(strcmp(input, mus) == 0){
	addMusic(databasePointer);
      }
      else if(strcmp(input, mov) == 0){
	addMovie(databasePointer);
      }
    }
    //if input = PRINT, then print out everything stored in the database
    else if(strcmp(input, print) == 0){
      cout << endl << "-----Media Database----- " << endl << endl;
      if(database.size() == 0){
	cout << "No media found." << endl;
      }
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
      cout << endl << "------End of List-------" << endl << endl;
    }
    //if input = SEARCH, prompt the user if they want to search for title or year
    else if(strcmp(input, search) == 0){
      fill(input, input + 81, ' ');
      cout << "Do you wish to search by title or year? (t or yr): ";
      cin.getline(input, 81);
      for(int i = 0; i < strlen(input); i++){
	input[i] = toupper(input[i]);
      }
      //Search for title, print all matches or tell the user they are no matches
      if(strcmp(input, "T") == 0){
	fill(input, input + 81, ' ');
	cout << "Enter title: ";
	cin.getline(input, 81);
	cout << endl << "----Search by title: " << input << "----" << endl << endl;
	for(int a = 0; a < database.size(); a++){
	  if(strcmp(input, database[a]->getTitle()) == 0){
	    searchMatch = true;
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
	}
	if(!searchMatch){
	  cout << "No matches found." << endl;
	}
	searchMatch = false;
	cout << endl << "-----End of Search-----" << endl << endl;
	
      }
      //Search for year, print all matches or tell the user they are no matches
      else if(strcmp(input, yr) == 0){
	fill(input, input + 81, ' ');
	cout << "Enter year: ";
	cin.getline(input, 81);
	cout << endl << "----Search by year: " << input << "----" << endl << endl;
	for(int a = 0; a < database.size(); a++){
	  if(strcmp(input, database[a]->getYear()) == 0){
	    searchMatch = true;
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
	}
	if(!searchMatch){
	  cout << "No matches found." << endl;
	}
	searchMatch = false;
	cout << endl << "-----End of Search-----" << endl << endl;
      }
    }
    else if(strcmp(input, del) == 0){
      fill(input, input + 81, ' ');
      cout << "Do you wish to delete by title or year? (t or yr): ";
      cin.getline(input, 81);
      for(int i = 0; i < strlen(input); i++){
	input[i] = toupper(input[i]);
      }
      //Delete by title
      if(strcmp(input, "T") == 0){
	fill(input, input + 81, ' ');
	cout << "Enter title: ";
	cin.getline(input, 81);
	cout << endl << "----Delete by title: " << input << "----" << endl << endl;
	for(int a = 0; a < database.size(); a++){
	  if(strcmp(input, database[a]->getTitle()) == 0){
	    searchMatch = true;
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
	}
	
	if(!searchMatch){
	  cout << "No matches found." << endl;
	}
	else{
	  fill(input, input + 81, ' ');
	  cout << "Do you wish to delete by title or year? (t or yr): ";
	  cin.getline(input, 81);
	  
	}
	searchMatch = false;
	cout << endl << "-----End of Delete-----" << endl << endl;

      }
      //Search for year, print all matches or tell the user they are no matches
      else if(strcmp(input, yr) == 0){
	fill(input, input + 81, ' ');
	cout << "Enter year: ";
	cin.getline(input, 81);
	cout << endl << "----Search by year: " << input << "----" << endl << endl;
	for(int a = 0; a < database.size(); a++){
	  if(strcmp(input, database[a]->getYear()) == 0){
	    searchMatch = true;
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
	}
	if(!searchMatch){
	  cout << "No matches found." << endl;
	}
	searchMatch = false;
	cout << endl << "-----End of Search-----" << endl << endl;
      }
      
    }
  }
  
  return 0;
}

//Prompts user for videogame class variables
void addVideogame(vector<Media*>* database){
  Videogame* videogame = new Videogame();
  char titleInput[81];
  char publisherInput[81];
  char ratingInput[81];
  char yearInput[81];
  cout << endl << "-----ADDING VIDEOGAME-----" << endl;
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
  cout << "-----ADDED SUCCESSFULLY-----" << endl << endl;
}

//Prompts user for music class variables
void addMusic(vector<Media*>* database){
  Music* music = new Music();
  char titleInput[81];
  char artistInput[81];
  char durationInput[81];
  char publisherInput[81];
  char yearInput[81];
  cout << endl << "-----ADDING MUSIC-----" << endl;
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
  cout << "-----ADDED SUCCESSFULLY-----" << endl << endl;
}

//Prompts user for movie class variables
void addMovie(vector<Media*>* database){
  Movie* movie = new Movie();
  char titleInput[81];
  char directorInput[81];
  char durationInput[81];
  char ratingInput[81];
  char yearInput[81];
  cout << endl << "-----ADDING MOVIE-----" << endl;
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
  cout << "-----ADDED SUCCESSFULLY-----" << endl << endl;
}
