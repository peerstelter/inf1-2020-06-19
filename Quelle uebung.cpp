//Quellen datei

#include "Header uebung.h"

void einfuegeFilm(Videothek& v, Film f)
{
    v.Filme[v.AnzahlFilme] = f;
    v.AnzahlFilme++;
}

void initVideothek(Videothek &vid, string nam, Status s)
{
    vid.Name = nam;
    vid.OffenZU = s;
    vid.AnzahlFilme = 0;
    vid.HighestPreis = 0.00;
    vid.LowestPreis = 0.00;
    vid.MiddelPreis = 0.00;
}

void minPreis(Videothek& v)
{   
    double mp = 0.00;
    mp = v.Filme[0].Preis;
    for (int i = 0; i < v.AnzahlFilme; i++)
    {
        if (v.Filme[i].Preis < mp)
        {
            mp = v.Filme[i].Preis;
        }
    }
    v.LowestPreis = mp;
}

void highPreis(Videothek& v)
{
    double hp = 0.00;

    for (int i = 0; i < v.AnzahlFilme; i++)
    {
        if (v.Filme[i].Preis > hp)
        {
            hp = v.Filme[i].Preis;
        }
    }
    v.HighestPreis = hp;
}

void middelPreis(Videothek& v)
{
    double mw = 0.00;
    for (int i = 0; i < v.AnzahlFilme; i++)
    {
        mw += v.Filme[i].Preis;
    }
    mw = mw / v.AnzahlFilme;

    v.MiddelPreis = mw;
}

void ausgabeFilm(Film f)
{
    cout << "\n\nName des Films: " << f.Name;
    cout << "\nLänge des Films: " << f.Laenge;
    cout << "\nPreis des Films: " << f.Preis;
    cout << "\nGenre des Films: ";
    switch (f.Genre)
    {
        case(0):
            cout << "Horror!";
            break;
        case(1):
            cout << "Sci Fi!";
            break;
        case(2):
            cout << "Action!";
            break;
        case(3):
            cout << "Love!";
            break;
        case(4):
            cout << "Fantasy!";
            break;
    default:
        cout << "nicht bekannt";
        break;
    }
    cout << endl;
}

void ausgabeVideothek(Videothek v)
{
    cout << "\nVideothek Name: " << v.Name;
    cout << "\nGeöffnet: ";
    switch (v.OffenZU)
    {
    case(0):
        cout << "Geschlossen :-( ";
        break;
    case(1):
        cout << "Geoeffnet!! Yeah!! :D";
        break;
    default:
        cout << "Unbekannt daher vermutlich geschlossen. :-( ";
        break;
    }
    cout << "\nAnzahl Kunden: " << v.anzahlKunden;
    cout << "\nAnzahl der Filme: " << v.AnzahlFilme;
    cout << "\nTeuerster Film: " << v.HighestPreis;
    cout << "\nGuenstigster Film: " << v.LowestPreis;
    cout << "\nDurchschnitspreis: " << v.MiddelPreis;

    for (int i = 0; i < v.AnzahlFilme; i++)
    {
        ausgabeFilm(v.Filme[i]);
    }


}

bool istVorhanden(Videothek v, string name)
{
    bool vorhanden = false;
    for (int i = 0; i < v.AnzahlFilme; i++)
    {
        if (name == v.Filme[i].Name)
        {
            vorhanden = true;
         }
    }

    return vorhanden;
}

void kundenAnfrage(Kunde& k, Videothek& v, string suche)
{
    bool nichtgefunden = true;
    if (v.Kunde->anzahlFilmeAusgeliehen < maxFilme)
    {
        for (int i = 0; i < v.AnzahlFilme; i++)
        {
            if (istVorhanden(v, suche))
            {
                k.ausleihFilme[k.anzahlFilmeAusgeliehen] = v.Filme[i];
                k.anzahlFilmeAusgeliehen = k.anzahlFilmeAusgeliehen + 1;
                cout << "\n" << suche << " Konnte Ausgeliehen werden!\n";
                nichtgefunden = false;
                break;
            }
        }
    }
    if (nichtgefunden)
    {
        cout << "\n" << suche << " konnte nicht ausgeliehen werden!\n";
    }  
}

void preiseAktualisieren(Videothek& v, int n)
{
    n = 100 + n;
    for (int i = 0; i < v.AnzahlFilme; i++)
    {
        v.Filme[i].Preis = v.Filme[i].Preis / 100 * n;
    }
}

void kundeAnlegen(Videothek& v, string nachname, string vorname,int mitgliedsnummer, Mitgliedschaft mitglied)
{
    Kunde* ptr_k = &v.Kunde[v.anzahlKunden];
    Videothek* ptr_v = &v;
    ptr_k ->nachname = nachname;
    ptr_k->vorname = vorname;
    ptr_k->kundennummer = mitgliedsnummer;
    ptr_k->mitglied = mitglied;
    ptr_v->anzahlKunden = v.anzahlKunden + 1;
}

void filmAnlegen(Videothek& v, string titel, Genre genre, int laenge, double preis)
{   
    Videothek* ptr_v = &v;
    Film* ptr_f = &v.Filme[v.AnzahlFilme];
    ptr_f->Name = titel;
    ptr_f->Genre = genre;
    ptr_f->Laenge = laenge;
    ptr_f->Preis = preis;
    ptr_v->AnzahlFilme = v.AnzahlFilme + 1;
}