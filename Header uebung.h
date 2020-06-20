//Header Datei

#pragma once
#include <iostream>
#include <string>

using namespace std;
const int maxFilme = 3;

enum Status
{
	GESCHLOSSEN, OFFEN
};

enum Genre
{
	HORROR, SCI_FI, ACTION, LOVE, FANTASY
};

enum Mitgliedschaft
{
	Normal, Premium
};

struct Film
{
	string Name;
	Genre Genre;
	int Laenge;
	double Preis;
};

struct Kunde
{
	string nachname;
	string vorname;
	int kundennummer;
	Film ausleihFilme[maxFilme];
	int anzahlFilmeAusgeliehen = 0;
	Mitgliedschaft mitglied;
};

struct Videothek
{
	string Name;
	Film Filme[5];
	int AnzahlFilme;
	Status OffenZU = OFFEN;
	double HighestPreis = 0.00;
	double LowestPreis = 0.00;
	double MiddelPreis = 0.00;
	int anzahlKunden = 0;
	Kunde Kunde[100];
};

void einfuegeFilm(Videothek &v, Film f);

void initVideothek(Videothek &v, string nam, Status s);

void minPreis(Videothek& v);

void highPreis(Videothek& v);

void middelPreis(Videothek& v);

void ausgabeFilm(Film f);

void ausgabeVideothek(Videothek v);

bool istVorhanden(Videothek v, string name);

void kundenAnfrage(Kunde& k, Videothek& v, string suche);

void preiseAktualisieren(Videothek& v, int n);

void kundeAnlegen(Videothek &v, string nachname, string vorname,int mitgliedsnummer, Mitgliedschaft mitglied);

void filmAnlegen(Videothek& v, string titel, Genre genre, int laenge, double preis);

