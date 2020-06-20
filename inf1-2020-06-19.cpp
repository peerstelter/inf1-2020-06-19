//Main Datei

#include "Header uebung.h"

int main()
{
	Videothek v;
	initVideothek(v,"Info1 Videoshop", OFFEN);
	//Film f1, f2, f3;
	//f1.Name = "Idle Hands";
	//f1.Laenge = 110;
	//f1.Genre = ACTION;
	//f1.Preis = 19.99;

	//Film* ptr_f; //filmpointer
	//ptr_f = &f2;
	//ptr_f->Name = "titanik";
	//ptr_f->Genre = LOVE;
	//ptr_f->Laenge = 180;
	//ptr_f->Preis = 23.90;

	//ptr_f = &f3;
	//ptr_f->Name = "Wolf of Wallstreet";
	//ptr_f->Genre = HORROR;
	//ptr_f->Laenge = 210;
	//ptr_f->Preis = 13.50;

	//einfuegeFilm(v, f1);
	//einfuegeFilm(v, f2);
	//einfuegeFilm(v, f3);
	filmAnlegen(v, "Titanik", LOVE, 180, 9.99);
	filmAnlegen(v, "Idle Hands", ACTION, 110, 13.99);
	filmAnlegen(v, "Wolf of Wallstreet", FANTASY, 310, 24.99);
	filmAnlegen(v, "titanik", LOVE, 180, 9.99);

	highPreis(v);
	minPreis(v);
	middelPreis(v);
	
	kundeAnlegen(v, "Wurst", "Hans", 666, Normal);
	kundeAnlegen(v, "Mueller", "Jan", 123, Premium);

	kundenAnfrage(v.Kunde[0], v,"Titanik");
	kundenAnfrage(v.Kunde[0], v, "Idle Hands");
	kundenAnfrage(v.Kunde[0], v, "titanik");
	kundenAnfrage(v.Kunde[0], v, "Wolf of Wallstreet");

	preiseAktualisieren(v, -15);

	highPreis(v);
	minPreis(v);
	middelPreis(v);

	ausgabeVideothek(v);

	return EXIT_SUCCESS;
}
