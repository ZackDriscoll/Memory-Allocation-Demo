#include <iostream>
#include "Character.h"


//Prototype functions
void Intro();
void Ending();

int main()
{
    //Run the intro function
    Intro();

    //Make the first character object and assign their values
    Character* ObiWan = new Character();
    ObiWan->Name = "Obi-Wan Kenobi";
    ObiWan->stuffToSay = "hello there!";
    ObiWan->midichlorians = 14500;
    ObiWan->isJedi = true;

    //Have the character do stuff
    ObiWan->Talk();

    //Delete the character object to save on memory
    delete ObiWan;

    //Have a system pause for a better UX
    system("Pause");

    //Make the second character object and assign their values
    Character* Grievous = new Character();
    Grievous->Name = "General Grievous";
    Grievous->stuffToSay = "General Kenobi, you are a bold one!";
    Grievous->midichlorians = 0;
    Grievous->isJedi = false;

    //Have the character do stuff
    Grievous->Talk();

    //Delete the character object to save on memory
    delete Grievous;

    //Have a system pause for a better UX
    system("Pause");

    //Make the third character object and assign their values
    Character* Anakin = new Character();
    Anakin->Name = "Anakin Skywalker";
    Anakin->stuffToSay = "General Grievous... you're shorter than I expected.";
    Anakin->midichlorians = 26830;
    Anakin->isJedi = true;

    //Have the character do stuff
    Anakin->Talk();

    //Delete the character object to save on memory
    delete Anakin;

    //Have a system pause for a better UX
    system("Pause");

    //Make the fourth character object and assign their values
    Character* Ahsoka = new Character();
    Ahsoka->Name = "Ahsoka Tano";
    Ahsoka->stuffToSay = "The Republic couldn't have asked for better soldiers, nor I a better friend.";
    Ahsoka->midichlorians = 14000;
    Ahsoka->isJedi = true;

    //Have the character do stuff
    Ahsoka->Talk();

    //Delete the character object to save on memory
    delete Ahsoka;

    //Have a system pause for a better UX
    system("Pause");

    //Make the fifth character object and assign their values
    Character* Asajj = new Character();
    Asajj->Name = "Asaj Ventress";
    Asajj->stuffToSay = "If it isn't Skywalker's filthy, obnoxious little pet. Stand down, little girl, and I'll give you a cookie.";
    Asajj->midichlorians = 12800;
    Asajj->isJedi = false;

    //Have the character do stuff
    Asajj->Talk();

    //Delete the character object to save on memory
    delete Asajj;

    //Have a system pause for a better UX
    system("Pause");

    //Run the ending function
    Ending();


    return 0;
}

void Intro()
{
    std::cout << "\n\n\t\t **** Welcome to the Star Wars Character Intro! ****\n\n";
}

void Ending()
{
    std::cout << "\n\n\t\t **** Thanks for playing! ****\n\n";
}