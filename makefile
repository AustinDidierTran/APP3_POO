#yolo#swag#theking

testmenufact: test_menu_fact.o menufact01.o plats.o menu.o facture.o liste.o platchoisi.o platSante.o
	g++ -o testmenufact test_menu_fact.o menufact01.o plats.o menu.o facture.o liste.o platchoisi.o platSante.o

test_menu_fact.o: test_menu_fact.cpp test_menu_fact.h
	g++ test_menu_fact.cpp -g -c
menufact01.o: menufact01.cpp facture.h
	g++ menufact01.cpp -g -c
plats.o: plats.cpp plats.h
	g++ plats.cpp -g -c
menu.o: menu.cpp menu.h
	g++ menu.cpp -g -c
facture.o:  facture.cpp facture.h
	g++ facture.cpp -g -c
liste.o: liste.cpp liste.h
	g++ liste.cpp -g -c
platchoisi.o: platchoisi.cpp platchoisi.h
	g++ platchoisi.cpp -g -c
platSante.o: platSante.cpp platSante.h
	g++ platSante.cpp -g -c

clean:
	rm -f *.o
#fin du makefile
