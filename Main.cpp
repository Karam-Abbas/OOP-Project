#include"Header.h"
Name NameofActor();
Bday dob();
place adress();
string gender();
int songscount();
int moviecount();
float height();

void main() 
{
	cout << "--------------------------------------------------- Artist Data handling program ---------------------------------------------------"<<endl;
	cout << "------------------------------(S==singer)--------------------(A==actor)--------------------(W==writer)------------------------------"<<endl;
	cout << "Artist type:";
	char ans;
	cin >> ans;
	
	
	if (ans=='S' || ans == 's')
	{
		Name a=NameofActor();
		Bday b = dob();
		place c = adress();
		string d = gender();
		int e = songscount();
		singer s(a,b,c,d,e);
		s.ShowDetails();
		s.AddSongs();
		s.RemoveSongs();
		s.ShowDetails();
	}
	else if (ans == 'A' || ans == 'a')
	{
		Name l = NameofActor();
		Bday b = dob();
		place c = adress();
		string d = gender();
		int e = moviecount();
		float h =height();
		actor a(l, b, c, d, e,h);
		a.ShowDetails();
		a.AddMovie();
		a.RemoveMovie();
		a.ShowDetails();
	}
	
	else if (ans == 'W' || ans == 'w')
	{
		Name a = NameofActor();
		Bday b = dob();
		place c = adress();
		string d = gender();
		int e = songscount();
		int f = moviecount();
		writer w(a, b, c, d, e, f);
		w.ShowDetails();
		w.AddMovie();
		w.RemoveMovie();
		w.AddSongs();
		w.RemoveMovie();
		w.ShowDetails();

	}
	else 
	{ cout << ".....Invalid type....."; }
	
	cout << "You want to store more data?(Y/N)" << endl;
	char an;
	cin >> an;
	if (an=='Y')
	{
		main();
	}
	
	system("pause");
}