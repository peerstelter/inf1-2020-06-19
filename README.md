# inf1-2020-06-19

Hinweis: VerwendenSiefu ̈rdasLo ̈senfolgenderAufgabenHeader-Dateien,wie in der Vorlesung besprochen.
P 7.1 My Little Video Shop.
Sie besitzen eine Videothek und wollen die Daten endlich elektronisch erfassen.
• Definieren Sie einen neuen enum-Datentyp Status mit den Werten OFFEN
und GESCHLOSSEN.
• Definieren Sie einen neuen enum-Datentyp Genre mit den Werten HORROR,
SCI FI, ACTION, LOVE und FANTASY.
• Definieren Sie eine Struktur Film, die einen Namen, ein Genre, eine La ̈nge
(Minuten) und einen Preis (Netto) darstellt.
• Definieren Sie eine Struktur Videothek, die:
– einen Namen,
– eine Liste von Filmen (gespeichert als Film-Array), – eine Za ̈hler fu ̈r die Anzahl der Filme,
– ein(e) Status-Element/Komponente,
– den ho ̈chsten Filmpreis,
– den niedrigsten Filmpreis und
– den Durchschnittspreis darstellt.
Die La ̈nge des Arrays (Filmliste) ist frei wa ̈hlbar, z. B. 5.
• Schreiben Sie eine Funktion initVideothek, die eine Videothek, einen Namen(string)undeinenStatusu ̈bergebenbekommt.DieFunktionsetzt dieu ̈bergebenenWerte(NameundStatus)undinitialisiertalleweiterenWer- tederVideothek,bisaufdasFilm-Array,mit0(Null).U ̈berlegenSiesichob Call-by-Value oder Call-by-Reference eingesetzt werden sollte.
1
  
• Erzeugen Sie in der main-Funktion eine Videothek v und rufen Sie die Funk- tioninitVideothekmitdenWerten”Info1 Videoshop“undOFFENauf.
• Erstellen Sie in der main-Funktion 3 Film-Variablen. Setzen Sie die Wer- te des ersten Films (der ersten Film-Variable). Verwenden Sie einen Film- Pointer, um die Werte der anderen zwei Filme zu setzen. Hinweis:EineStruktur-Pointervariable,z.B.Film *f,wirdwieanderePo- intervariablen vereinbart. Der Zugriff auf die Elemente einer Struktur erfolgt u ̈berdenInhaltsoperator*oderu ̈berdenOperator->(vereinfachteundbe- vorzugte Schreibweise), z. B. (*f).name; bzw. f->name;.
• Schreiben Sie eine Funktion einfuegeFilm, die eine Videothek und einen Filmu ̈bergebenbekommt,unddenu ̈bergebenenFilmindieFilmliste(Film- Array) der Videothek einfu ̈gt. Die Funktion soll anschließend den Za ̈hler fu ̈r die Anzahl der Filme aktualisieren (erho ̈hen). Setzen Sie hierfu ̈r Call-by- Reference ein.
•Fu ̈genSiemitHilfederFunktioneinfuegeFilmdiedreierzeugtenFilme der Videothek v hinzu (in der main-Funktion).
•SchreibenSieanalogzurAufgabeP5.2(U ̈bungsblatt5)jeeineFunktionfu ̈r die Berechnung des ho ̈chsten Filmpreises, des niedrigsten Filmpreises und des Durchschnittspreises einer Videothek. Jede Funktion bekommt als Para- meter die Filmliste (Film-Array) der Videothek und die Anzahl der vorhan- denenFilmeinderVideotheku ̈bergeben.
• BerechnenundsetzenSieimHauptprogrammdieWertedesho ̈chsten,nied- rigsten und des Durchschnittspreises der Videothek v.
• Schreiben Sie eine Funktion ausgabeFilm, die den ganzen Inhalt eines als Parameter u ̈bergebenen Films ausgibt. Die Ausgabe soll versta ̈ndlich sein, denken Sie an die Ausgabe von enum-Datentypen.
• Schreiben Sie eine Funktion ausgabeVideothek, die den Inhalt (alle Da- ten) einer Videothek ausgibt. Dies bedeutet auch, dass alle vorhandenen FilmederVideothekausgegebenwerdensollen.SetzenSiehierfu ̈rdieFunk- tion ausgabeFilm ein.
• Geben Sie den Inhalt der Videothek v aus.


P 7.1 (H) My Little Video Shop II.
Fu ̈rdieseAufgabewirddieLo ̈sungdes7.U ̈bungsblattesbeno ̈tigt.
• DefinierenSieeinenneuenDatentyp(enum)MitgliedschaftmitdenWer-
ten NORMAL und PREMIUM.
• Definieren Sie eine Struktur Kunde, die eine Kundennummer (ID), einen Vornamen, einen Nachnamen, eine Liste von ausgeliehenen Filmen (gespei- chert als Film-Array) und eine Mitgliedschaft darstellt. Ein Kunde kann ma- ximal 3 Filme ausleihen, d.h. die La ̈nge des Arrays (Ausleihe) ist 3.
• Erweitern Sie die Struktur Videothek um eine Liste von Kunden (gespei- chert als Kunde-Array). Die La ̈nge des Arrays (Kundenliste) ist frei wa ̈hlbar, z.B. 5.
• Schreiben Sie eine Funktion istVorhanden, die eine Videothek und einen Filmnamen (string) u ̈bergeben bekommt. Die Funktion liefert true oder false, wenn der gesuchte Film in der Videothek vorhanden bzw. nicht vor- handen ist.
• Erstellen Sie im Hauptprogramm 2 Kunden (Kunde-Variablen). Verwenden Sie einen Kunde-Pointer, um die Werte der beiden Kunden zu setzen. Der erste Kunde will folgende Filme ausleihen: Ex Machina, The Babadook und The Hobbit. Der 2. Kunde will Avengers: Age of Ultron und Ex Machina ausleihen. Verwenden Sie die Funktion istVorhanden, um herauszufinden, ob die Fil- me in der Videothek vorhanden sind oder nicht. Wenn ein Film vorhanden ist, so soll er in die Liste der ausgeliehenen Filmen aufgenommen werden. Der Kunde soll benachrichtigt werden (cout), welche Filme konnten ausge- liehen werden und welche nicht.
1
 
• Schreiben Sie eine Funktion preiseAktualisieren, die eine Videothek undeineZahlnu ̈bergebenbekommt.WennderWertvonnpositivist,sosol- len alle Filmpreise der Videothek um n% erho ̈ht, ansonsten um n% reduziert werden.
• Reduzieren Sie alle Filmpreise der Videothek v um 15%. •BerechnenundsetzenSieimHauptprogrammdieWertedesho ̈chsten,nied-
rigsten und des Durchschnittspreises der Videothek v.
