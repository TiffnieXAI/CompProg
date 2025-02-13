#include <stdio.h>
#include "zodiac.h"

void zodiac_sign (int bm, int bd)
{

    if ((bm == 2 && bd >= 19) || (bm == 3 && bd <= 20)) 
        printf("Pisces ♓︎\nDescription: Empathetic, artistic, and intuitive.\n");

    else if ((bm == 1 && bd >= 20) || (bm == 2 && bd <= 18))
        printf("Aquarius ♒︎\nDescription: Innovative, independent, and humanitarian.\n");

    else if ((bm == 12 && bd >= 22) || (bm == 1 && bd <= 19))
        printf("Capricorn ♑︎\nDescription: Disciplined, ambitious, and practical.\n");

    else if ((bm == 11 && bd >= 22) || (bm == 12 && bd <= 21))
        printf("Sagittarius ♐︎\nDescription: Optimistic, adventurous, and philosophical.\n");

    else if ((bm == 10 && bd >= 24) || (bm == 11 && bd <= 21))
        printf("Scorpio ♏︎\nDescription: Passionate, resourceful, and determined.\n");

    else if ((bm == 9 && bd >= 23) || (bm == 10 && bd <= 23))
        printf("Libra ♎︎\nDescription: Diplomatic, charming, and fair-minded.\n");

    else if ((bm == 8 && bd >= 23) || (bm == 9 && bd <= 22))
        printf("Virgo ♍︎\nDescription: Analytical, hardworking, and detail-oriented.\n");

    else if ((bm == 7 && bd >= 23) || (bm == 8 && bd <= 22))
        printf("Leo ♌︎\nDescription: Confident, generous, and charismatic.\n");

    else if ((bm == 6 && bd >= 22) || (bm == 7 && bd <= 22))
        printf("Cancer ♋︎\nDescription: Compassionate, intuitive, and protective. \n");

     else if ((bm == 5 && bd >= 21) || (bm == 6 && bd <= 21))
        printf("Gemini ♊︎\nDescription: Adaptable, curious, and communicative.\n");

    else if ((bm == 4 && bd >= 20) || (bm == 5 && bd <= 20))
        printf("Taurus ♉︎\nDescription: Reliable, patient, and practical.\n");

    else if ((bm == 3 && bd >= 21) || (bm == 4 && bd <= 19))
        printf("Aries ♈︎\nDescription: Energetic, courageous, and determined. \n");


}

