const int L1 = 3; // broche 2 du micro-contrôleur se nomme maintenant : L1
void setup() //fonction d'initialisation de la carte
{
//contenu de l'initialisation
pinMode(L1, OUTPUT); //L1 est une broche de sortie
}
void loop() //fonction principale, elle se répète (s’exécute) à l'infini
{
//contenu du programme
// .
digitalWrite(L1, HIGH); //allumer L1
delay(200); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(200); // attendre 2 seconde
// .
digitalWrite(L1, HIGH); //allumer L1
delay(200); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(200); // attendre 2 seconde
//.
digitalWrite(L1, HIGH); //allumer L1
delay(200); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(800); // fin du S
// -
digitalWrite(L1, HIGH); //allumer L1
delay(800); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(200); // attendre 2 seconde
// -
digitalWrite(L1, HIGH); //allumer L1
delay(800); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(200); // attendre 2 seconde
// -
digitalWrite(L1, HIGH); //allumer L1
delay(800); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(800); // fin du O
// .
digitalWrite(L1, HIGH); //allumer L1
delay(200); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(200); // attendre 2 seconde
// .
digitalWrite(L1, HIGH); //allumer L1
delay(200); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(200); // attendre 2 seconde
//.
digitalWrite(L1, HIGH); //allumer L1
delay(200); // attendre 1 seconde
digitalWrite(L1, LOW); // Eteindre L1
delay(800); // fin du S
}
