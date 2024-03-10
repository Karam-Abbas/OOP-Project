#include<iostream>
#include<string>
using namespace std;
class Name {
protected:
	string first; string middle; string last;
public:
	Name(string, string, string);
	void getF_Name();
};

class place {
protected:
	string city;
	string country;
public:
	place(string, string);
	void getAddress();
};

class Bday {
protected:
	int date;
	string month;
	int year;
public:
	Bday(int, string, int);
	void getDate();
};

class artist {
protected:
	Name name;
	Bday bDay;
	place address;
	string gender;
public:
	artist(Name, Bday, place, string);
	void ShowDetails();
};

class song {
protected:
	string title;
	string genre;
	string language;
	float song_len;
	string album;
public:
	song operator=(song);
	song(string, string, string, float, string);
	void showinfo();
	void InputSongs();
};

class movie {
protected:
	string title;
	string genre;
	string language;
	float movie_len;
	string production;
public:
	movie operator=(movie);
	movie(string, string, string, float, string);
	void show_m_info();
	void InputMovies();
};

class singer :public artist {
private:
	song* listofsongs;
	int noofsongs;
public:
	singer(Name, Bday, place, string, int);
	void ShowDetails();
	void AddSongs();
	void RemoveSongs();
	void ShowSongs();
};

class actor :public artist {
private:
	movie* listofmovies;
	int noofmovies;
	float height;
public:
	actor(Name, Bday, place, string, int, float);
	void AddMovie();
	void RemoveMovie();
	void ShowMovie();
	virtual void ShowDetails();
};

class writer :public artist {
private:
	song* listofsongs;
	int noofsongs;
	movie* listofmovies;
	int noofmovies;
public:
	writer(Name, Bday, place, string, int,  int);
	void ShowDetails();
	void AddMovie();
	void RemoveMovie();
	void ShowMovie();
	void AddSongs();
	void RemoveSongs();
	void ShowSongs();
};


