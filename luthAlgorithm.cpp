#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(){
 

    int rakam1,rakam2,rakam3,rakam4;
    int rakam5 , rakam6 , rakam7 , rakam8;
    int rakam9 , rakam10 , rakam11 , rakam12; 
    int rakam13 , rakam14 , rakam15 , rakam16; 

    int toplam1 = 0; 
    int toplam2 = 0;

     cout << "Kredi Karti Onaylayiciya Hosgeldiniz ! " << endl;

     cout << "Kredi Kartinizin Ilk Dortlusunu Giriniz(XXXX) : " ;

     cin >> rakam1 >> rakam2 >> rakam3 >> rakam4;

     cout << "Kredi Kartinizin Ikinci Dortlusunu Giriniz(XXXX) : " ;

     cin >> rakam5 >> rakam6 >> rakam7 >> rakam8;

     cout << "Kredi Kartinizin Ucuncu Dortlusunu Giriniz(XXXX) : " ;

     cin >> rakam9 >> rakam10 >> rakam11 >> rakam12;

     cout << "Kredi Kartinizin Dorduncu Dortlusunu Giriniz(XXXX) : " ;

     cin >> rakam13 >> rakam14 >> rakam15 >> rakam16;
     
     int tekRakamlar[] = {rakam1 , rakam3 , rakam5 , rakam7 , rakam9 , rakam11 , rakam13 , rakam15};
     int ciftRakamlar[] = {rakam2 , rakam4 , rakam6 , rakam8 , rakam10 , rakam12 , rakam14 , rakam16};

     cout << "İslem Basliyor." << endl;

     cout << "--------------------" << endl;

     for (int i = 0; i < 8; i++)
     {

        toplam2 += ciftRakamlar[i];
        
     }

     for (int j = 0; j < 8; j++)
     {

       int temizDegisken = (2 * tekRakamlar[j]);

       if (temizDegisken >= 10)
       {
 
         temizDegisken = (temizDegisken % 10) + 1;
         
       }

       toplam1 += temizDegisken;
       
        
         
     }
     
     
    int tumRakamlarinToplami = toplam1 + toplam2;

    if ((tumRakamlarinToplami % 10) == 0)
    {

        cout << "Kredi Karti Numaraniz Gecerlidir." << endl;

        cout << "Kredi Kartiniz Numaraniz : " << rakam1 << rakam2 << rakam3 << rakam4 << "  " << rakam5 << rakam6 << rakam7 << rakam8 << "  " << rakam9 << rakam10 << rakam11 << rakam12 << "  " << rakam13 << rakam14 << rakam15 << rakam16  << endl; 
       
    }
    
    else 
    {

        cout << "Kredi Karti Numaraniz Gecerli Degildir." << endl;

        cout << "Kredi Kartiniz Numaraniz : " << rakam1 << rakam2 << rakam3 << rakam4 << "  " << rakam5 << rakam6 << rakam7 << rakam8 << "  " << rakam9 << rakam10 << rakam11 << rakam12 << "  " << rakam13 << rakam14 << rakam15 << rakam16  << endl; 

    }



}
