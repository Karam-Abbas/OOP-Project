#include "Header.h"

Name NameofActor() {
	string f_name, m_name, l_name;
	cout << "Please enter  name details of Artist:" << endl;
	cout << "Enter first name:" << endl;
	cin >> l_name;  
	cout << "Enter middle name:" << endl;
	cin >> l_name;  
	cout << "Enter last name:" << endl;
	cin>>l_name;
	cout << endl;
	return Name(f_name,m_name,l_name);
}

Bday dob() {
	int date, year;
	string month;
	cout << "Please enter details about date of birth:" << endl;
		cout << "Date:"; cin >> date;
		cout << "Month:"; cin >> month;
		cout << "Year:"; cin >> year;
		cout << endl;
		return Bday(date,month,year);
}

place adress() 
{
	string city, country;
	cout << "Please enter the adress details:"<<endl;
	cout << "City:"; cin >> city;
	cout << "Country:"; cin >> country;
	return place(city,country);
}

string gender() {
	string gender;
	cout << "Gender:";
		cin >> gender;
		cout << endl;
		return gender;
}

int songscount() {
	int count;
	cout << endl;
	cout << "Enter number of songs:";
	cin >> count;
	return count;
}

int moviecount() {

	int count;
	cout << "Enter number of movies:";
	cin >> count;
	cout << endl;
	return count;
}

float height() {
	float h;
	cout << "Actor height:";
	cin >> h;
	cout << endl;
	return h;
}


