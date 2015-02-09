#yolo#swag#theking

testmenufact: test_menu_fact.o menufact02.o plats.o menu.o facture.o liste.o platChoisi.o platSante.o
	g++ -o testmenufact test_menu_fact.o menufact02.o plats.o menu.o facture.o liste.o platChoisi.o platSante.o

test_menu_fact.o: test_menu_fact.cpp test_menu_fact.h
	g++ test_menu_fact.cpp -g -c
menufact02.o: menufact02.cpp facture.h
	g++ menufact02.cpp -g -c
plats.o: plats.cpp plats.h
	g++ plats.cpp -g -c
menu.o: menu.cpp menu.h
	g++ menu.cpp -g -c
facture.o:  facture.cpp facture.h
	g++ facture.cpp -g -c
liste.o: liste.cpp liste.h
	g++ liste.cpp -g -c
platChoisi.cpp: plats.cpp plats.h
	g++ plats.cpp -g -c
platChoisi.h:plats.cpp plats.h
	g++ plats.cpp -g -c
platchoisi.o: platChoisi.cpp platChoisi.h
	g++ platChoisi.cpp -g -c
platSante.o: platSante.cpp platSante.h
	g++ platSante.cpp -g -c

clean:
	rm -f *.o
#fin du makefile
