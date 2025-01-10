
Pour faire fonctionner wxWidgets

Installing with anakin setup : 
sudo add-apt-repository ppa:hrzhu/wxwidgets3.2-backport
sudo apt update
sudo apt install libwxgtk3.2-dev

```
d2groupea@PC0917-010:~$ cd Documents/
cd2groupea@PC0917-010:~/Documents$ ls
 allCountries.txt       ExerciceLopezNicolas
 bc365                  jeux
 C++                    LopezNicolasGestionProjetRaclette.odt
 CDA                    OSINTLopezNicolas
 cities500.txt          PapaPizza.zip
 CPPLesson-master       pizzaNL
 CPPLesson-master.zip   ProjetFinAnnee.odt
'C++ Suite'             projets
 euro-global-map-gpkg   Recursivit--main
 euro-global-map-shp
cd2groupea@PC0917-010:~/Documents$ cd c++
bash: cd: c++: Aucun fichier ou dossier de ce nom
cd2groupea@PC0917-010:~/Documents$ cd c--
bash: cd: c--: Aucun fichier ou dossier de ce nom
cd2groupea@PC0917-010:~/Documents$ cd C++
cd2groupea@PC0917-010:~/Documents/C++$ cd ihm
cd2groupea@PC0917-010:~/Documents/C++/ihm$ cd build
cd2groupea@PC0917-010:~/Documents/C++/ihm/build$ cmake ..
-- Configuring done
-- Generating done
-- Build files have been written to: /home/cd2groupea/Documents/C++/ihm/build
cd2groupea@PC0917-010:~/Documents/C++/ihm/build$ make
Consolidate compiler generated dependencies of target wxApp
[100%] Built target wxApp
cd2groupea@PC0917-010:~/Documents/C++/ihm/build$ ./wxApp
    Working
cd2groupea@PC0917-010:~/Documents/C++/ihm/build$ ./wxApp
    Working
```