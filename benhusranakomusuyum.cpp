#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>
#include <math.h>
using namespace std;

/*void qfonksiyon(){


    cout << "Hello World" << endl;
    

}*/
///////////////////////////////
/*int factorial(int sayi){


   int toplam = 1;

   for (sayi; sayi != 0; sayi--)
   {

      toplam = toplam * sayi;
       
   }
   
   return toplam ;


}*/
///////////////////////////
/*int toplama(int a , int b , int c){

 
   int toplama1 = a + b + c;
 
   return toplama1;

}*/
/////////////////////////////
/*void degerDegistir(int a){


  a= 10;

  cout << "10'a sabitledim." << a << endl;

}*/
////////////////////////////////////
/*void pDegerDegistir(int *a){

       
   *a = 10;

   cout << "Deger : " << *a << endl;



}*/
///////////////////////////////
/*void refliFon(int &ref4 , int &ref3){


   int piyonDegisken = ref4;

   ref4 = ref3;

   ref3 = piyonDegisken;

   cout << "1.Deger : " << ref4 << endl;
   cout << "2.Deger : " << ref3 << endl;




}*/
////////////////////////////////////
/*void yazdir(int arrayim[] , int size){


   for (int i = 0; i < size; i++)
   {
         
      cout << "Index : " << arrayim[i] << endl;

      
   }
   



}*/
///////////////////////////////////////
/*void printArray(const int *ptr , const int *ptr2){


    
  //cout << "1.Deger : " << *ptr << endl;
  //cout << "2.Deger : " << *ptr2 << endl;


  for (;  *ptr != *ptr2;  ptr++)
  {

   cout << "Eleman : " << *ptr << endl;
    
  }
  

  


}*/
///////////////////////////////////////
/*struct Numara
{

   string adres;
   int number;
   

};
struct yapi
{

   string name;
   int age;
   Numara* adresandnumber;
    


};*/
//////////////////////////////////
/*void strcutyazzdir(struct yapi asd)
{
 

   cout << asd.age << endl;
   cout << asd.name << endl;


}*/
//////////////////////////////////
/*void yaz(struct yapi *asd)
{
  
   cout << asd->age << endl;
   cout << asd->name << endl;


}*/
///////////////////////////////////
/*struct aracbilgi
{

   string brand;
   string country;
    
};
struct biryapi
{

   int hp;
   int gear;
   string model;
   aracbilgi* uracbilgidatabase;
  

};*/
/*void yazdirma(struct biryapi *deger){


    cout << deger->hp << endl;
    cout << deger->gear << endl;
    cout << deger->model << endl;


}*/
////////////////////////
/*void HelloWorld(string arg){



   cout << arg << endl;

}*/
//////////////////////////
/*struct human
{

   int tcNo;
   string name;
   string adress;


};*/
//////////////////////////////////////////
//enum modeller{Audi = 1 , BMW = 2 , Ford = 3 , Hyundai = 4  , Honda = 5  , Mercedes = 6 , Opel = 7};
////////////////////////////////////////////////
/*int faktoriyel(int sayi){
 
  
   if (sayi == 1) {return sayi;}

   return faktoriyel(sayi - 1) * sayi;
   

}*/
//////////////////////////////
/*int fibonnacci(int adim){

   if (adim == 0) {return 0;}
   if (adim == 1) {return 1;}
   if (adim == 2) {return 1;}

   return fibonnacci(adim - 1) + fibonnacci(adim - 2);


}*/
/////////////////////////////////
/*class Araba 
{
 public:

   string brand;
   int year;
   //string color;
 
   
   void speed()
   {

      for (int i = 0; i < 218; i++)
      {

         cout << i << " KMH" << endl;
         
      }
      

   }
   void stop()
   {

      cout << "STOPPED." << endl;


   }

   Araba(string brand , int year)
   {

      this->brand = brand;
      this->year = year;

      //cout << arac.brand << endl;
     // cout << arac.color << endl;
      //cout << arac.year << endl;

   }

    

};*/
/////////////////////////////
/*class Ogrenci 
{
public:
   int yas;
   string name;

    
   Ogrenci(int yas , string name)
   {

      this-> yas = yas;
      this-> name = name;

   }

   friend void bilgiYaz(Ogrenci nesen1){

   
      cout << nesen1.name << endl;
      cout << nesen1.yas << endl; 



   }
};*/
//////////////////////////////////////
/*void yaz(){
     cout << "1" << endl;
}
void yaz(int arga){

   cout << arga << endl;

}
void yaz(int a , int b){

  cout << a + b << endl;
 
}*/
///////////////////////////////////
/*void kareSi(int a){

  int karesi = a * a;

  cout << "Karesi : " << karesi << endl;


}*/
///////////////////////////////////
class Student 
{

private:

   string name;

   /*void tellName(){

   
      cout << name << endl;

   }*/
 public:

   void setName(string isim){
     
     name = isim;

   }

   string getName()
   {

      return name;

   }
 
};
////////////////////////////
/*int topla(int a  , int b){
   
   int toplam = 0;

   for (int i = a; i < b; i++)
   {

     toplam += i;
      
   }
   
   return toplam;



}*/
//////////////////////////////
/*int usAlma(int a , int b){


   int result = pow(a , b);

   return result;


}*/
//////////////////////////
/*int ebob(int a , int b){
  
   int kucukDeger,buyukDeger;
   
   if (a > b)
   {

      buyukDeger = a;

      kucukDeger = b;
      
   }

   else if (a < b)
   {

      buyukDeger = b;
       
      kucukDeger = a;
      
   }

   int bolen = kucukDeger;

   while (a % bolen != 0 || b % bolen != 0)
   {
      bolen--;
   }

   return bolen;
   
   
   

}*/
/////////////////////////
/*int ekok(int a , int b){

   int kucukDeger,buyukDeger;
   
   if (a > b)
   {

      buyukDeger = a;

      kucukDeger = b;
      
   }

   else if (a < b)
   {

      buyukDeger = b;
       
      kucukDeger = a;
      
   }

   int kat = kucukDeger;

   while (kat % kucukDeger != 0 || kat % buyukDeger != 0)
   {

      kat = kat + kucukDeger;

   }
   return kat;
   


}*/
int main(){
  
   
    
      
    
       
     /*cout << "Hello World!\n" ;

     cout << "Hello " << endl;

     cout << "Hello" << endl << "Hi" << endl;*/

     ////////////////////////////////////////////////

     /*int a = 5;
     int b2 = 3;
     int c1 = 24;
     int toplam = a + b2 + c1;
     float b = 3.2;
     char c = 'C';
     string erdem = "Erdem";
     bool f = false;

     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     cout << erdem << endl;
     cout << f << endl;
     cout << toplam << endl;*/

     ////////////////////////////////////////////////////

     /*int a = 10;
     int b = 5;

     int c =  a + b;
     int d = a - b;
     int e = a / b;
     int f = a * b;

     string erdem = "Erdem ";
     string gecgel = " Gecgel";

     string isim = erdem + gecgel;

     cout << c << endl;
     cout << d << endl;
     cout << e << endl;
     cout << f << endl;
     cout << isim << endl; */

     //////////////////////////////////////////////


     /*int a = 10;
     a += 5;

     int b = 15;
     b-= 5;

     int c =  20;
     c *= 4;

     int d = 50;
     d /= 5;

     int e = 100;
     e %= 3;

     int f = 10;
     f++;
     
     int g = 12;
     g--;

     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     cout << d << endl;
     cout << e << endl;
     cout << f << endl;
     cout << g << endl;*/

     ///////////////////////////////////////////////

     /*float i = 4.3;

     cout << int(i)  << endl;*/

     ////////////////////////////////////////////////

    /*  int number;
     int number2;
     int number3;

     cout << "Number : " << endl;

     cin >> number;

     cout << "Number2 : " << endl;

     cin >> number2;

     cout << "Number3 : " << endl;

     cin >> number3;

     cout << "Karesi : " << number * number << endl;
     cout << "Total : " << number + number2 + number3 << endl;*/

     /*string isim;

     cout << "Name : ";

     cin >> isim;

     cout << "Name : " << isim << endl;*/

     /*int sayi1,sayi2;

     cout << "2 Sayi : ";

     cin >> sayi1 >> sayi2;

     cout << "Total : " << sayi1 + sayi2 << endl;
     cout << "Total : " << sayi1 - sayi2 << endl;
     cout << "Total : " << sayi1 / sayi2 << endl;
     cout << "Total : " << sayi1 * sayi2 << endl;*/

     //////////////////////////////////////////////////////////////

     /*string usererdem = "Erdem1";
     string passworderdem = "AGSZ";

     string user,password;

     cout << "Username : ";

     cin >> user;

     cout << "Password : ";

     cin >> password;

     if (user == usererdem && password == passworderdem)
     {
        cout << "Succesfull!" << endl;
     }
     else if (usererdem != user && password == passworderdem)
     {
        cout << "Username is wrong!" << endl;
     }
     else if (user == usererdem && password != passworderdem)
     {
         cout << "Password is wrong!" << endl;
     }
     else 
     {
        cout << "Try Again" << endl;
     }
     */
     

     /*int sayi;

     cout << "Sayi : ";

     cin >> sayi;


     if (sayi <= 100)
     {
         cout << "Sayi 100 veya 100'den kucuk" << endl;
     }
     else 
     {
        cout << "100'den buyuk" << endl;
     }
      */     
     
      /*int sayi;

     cout << "Sayi : ";

     cin >> sayi;

     if (sayi % 2 == 0)
     {
        cout << "Sayi Cifttir." ;
     }
     else 
     {
        cout << "Sayi Tektir." ;
     }*/

     /*int not1,not2;

     cout << "Not : ";

     cin >> not1;

     cout << "Not 2 : ";

     cin >> not2;

     float average = (not1 + not2) / 2.0;

     if (average > 0 && average <= 24)
     {
       cout << "Notunuz : 0" << endl;
     }
     else if (average > 24 && average <= 44)
     {
        cout << "Notunuz : 1" << endl;
     }
     else if (average > 44 && average <= 54)
     {
        cout << "Notunuz : 2" << endl;
     }
     else if (average > 54 && average <= 69)
     {
       cout << "Notunuz : 3" << endl;
     }
     else if (average > 69 && average <= 84)
     {
       cout << "Notunuz : 4" << endl;
     }
     else if (average > 84 && average <= 100)
     {
       cout << "Notunuz 5" << endl;
     }
     else 
     {
        cout << "Try Again!" ;
     }
     */

    /* int number1,number2;

     cout << "Number : ";

     cin >> number1;

     cout << "Number : ";

     cin >> number2;

     if (number1 == number2)
     {
        cout << "Equal" << endl;
     }
     else if (number1 > number2)
     {
        cout << "Number 1 is bigger than number 2 " << endl;
     }
     
     else 
     {
        cout << "Number 2 is bigger than number 1" << endl;
     }
     */

     /*cout << "1 : Toplama " << endl;
     cout << "2 : Cikarma " << endl;
     cout << "3 : Carpma" << endl;
     cout << "4 : Bolme " << endl;

     int secim;

     cout << "Secim : ";

     cin >> secim;

     if (secim == 1)
     {

     int number1,number2;

     cout << "Number : ";

     cin >> number1;

     cout << "Number : ";

     cin >> number2;

     cout << "Total : " << number1 + number2;
         
     }

     else if (secim == 2)
     {
        int number1,number2;

     cout << "Number : ";

     cin >> number1;

     cout << "Number : ";

     cin >> number2;

     cout << "Total : " << number1 - number2;
     }
     else if (secim == 3)
     {
        int number1,number2;

        cout << "Number : ";
   
        cin >> number1;
   
        cout << "Number : ";
   
        cin >> number2;
   
        cout << "Total : " << number1 * number2;
     }
     else if (secim == 4)
     {
        int number1,number2;

        cout << "Number : ";
   
        cin >> number1;
   
        cout << "Number : ";
   
        cin >> number2;
   
        cout << "Total : " << number1 /  number2;
     }
     else 
     {
        cout << "Try Again";
     }
     */
     

     //////////////////////////////////////////////////////////

    /* int i = 0;

     while (i < 10)
     { 
        i++;
        cout << i << endl;
     }
     */


     /*int toplam = 0;
     int sayiAdeti = 0;

     int number;

     while (number != 0)
     {

       cout << "Number : " << endl;
       
       cin >> number;

       toplam += number;

       sayiAdeti++;
       
      
     }
     
     cout << "Toplam : " << toplam << endl;

     cout << "Girilen Sayi Adeti : " << sayiAdeti - 1 << endl;

     cout << "Ortalama : " <<  toplam / (sayiAdeti - 1) << endl;*/

     /*int sayi; 

     cout << "Sayi : ";

     cin >> sayi;

     while (sayi != 1)
     {


      if (sayi % 2 == 1)
      {
          
         sayi = (sayi * 3) + 1;
         cout << "Sayi : " << sayi << endl;  

      }
      
      else 
      {
         sayi = sayi / 2;
         cout << "Sayi : " << sayi << endl;  
      }
      

       
     }
     cout << "1'e ulastiniz." << endl; */

     ////////////////////////////////////////////////////////

     /*for (int i = 0; i < 10; i+= 2)
     {
      
      cout << "Sayi : " << i << endl;

     }*/

     /*for (int i = 1; i < 2049; i*= 2)
     {

      cout << "Sayi : " << i << endl;
       
     }*/

     /*int sayi;

     cout << "SAYİ : " ;

     cin >> sayi;
     int toplam = 1;

     for (sayi; sayi != 0; sayi--)
     {

      toplam = sayi * toplam;


      
     }
     cout << "Toplam : " << toplam << endl;*/

     /*int sayi;
 
     cout << "Sayi : " ;

     cin >> sayi;
      
     int bolenler = 0;

     for (int i = 1; i < sayi - 1; i++)
     {
      
      if (sayi % i == 0)
      {
        
         bolenler += i;
      }
      
     }
     

     if (bolenler == sayi)
      {
         cout << "MUKEMMEL SAYİ" << endl;
      }
      
      else
      {
         cout << "MUKEMMEL SAYİ DEGİL" << endl;
      }
     */


     /*for (int i = 1; i < 11; i++)
     {

      for (int j = 1; j < 11; j++)
      {


         cout << i << " * " << j <<  "= " << i * j << endl;
          
      }
      
      cout << endl;
       
     }
     */

     /*int sutunlar ,satirlar;

     cout << "Sutun : " << endl;

     cin >> sutunlar;

     cout << "Satir : " << endl;

     cin >> satirlar;


     for (int i = 0; i < sutunlar; i++)
     {

      for (int i = 0; i < satirlar; i++)
      {

         cout << "*" ;
          
      }
      
      cout << endl;
       
     }
     */

     /*int boyut;

     cout << "Boyut : " << endl;

     cin >> boyut;

     for (int i = 0; i < boyut; i++)
     {


      for (int j = 0; j <= i; j++)
      {

         cout << "*" ;
         
      }
      
      cout << endl;
      
     }
     */

    /*int boyut;

     cout << "Boyut : ";

     cin >> boyut;

     for (int i = 0; i < boyut; i++)
     {

      for (int j = 0; j <= i; j++)
      {

         cout << "*" ;
        
      }
      
      cout << endl;
   
     }
     */
     /*int boyut;

     cout << "Boyut : ";

     cin >> boyut;

     for (int i = 0; i < boyut; i++)
     {

      for (int j = 0; j < i; j++)
      {

         cout << " " ;
          
      }
      
      for (int a = 0; a < boyut - i; a++)
      {
         cout << "*" ;
      }
      
      cout << endl;
     
     }
     */


   
     
     
     ////////////////////////////////////////////////////////

     /*char dersNotu;

     cout << "Notunuz : " ;

     cin >> dersNotu;

     switch (dersNotu)
     {
     case 'A':
     /
      cout << "Ders Notu Basarili." ;
     
      break;

     case 'B' :
     
      cout << "Ders Notu Iyi" << endl;

      break;
     
    case 'C':
    
     cout << "Ders Notu Orta" << endl;

     break;

   case 'D':
   
    cout << "Ders Notu Basarisiz." << endl;

    break;
     
     default:
     cout << "Undefined Expression." << endl;
      break;
     }
     */

    /*int dayNumber;

     cout << "Day : " << endl;

     cin >> dayNumber;

     switch (dayNumber)
     {
     case 1:

      cout << "Monday" << endl;
       
      break;
   case 2:

      cout << "Tuesday" << endl;
       
      break;   
  
   case 3:

      cout << "Wednesday" << endl;
       
      break; 

   case 4:

      cout << "Thursday" << endl;
       
      break; 
      
   case 5:

      cout << "Friday" << endl;
       
      break;
      
   case 6:

      cout << "Saturday" << endl;
       
      break;   

   case 7:

      cout << "Sunday" << endl;
       
      break;   
     
     default:
      cout << "Else" << endl;
      break;
     }*/

     ///////////////////////////////////////////////


     /*int i = 0;

     do
     {
       i++;

       cout << "Sayi : " << i << endl;
     } while (i < 10);*/

     /*int sayi;
     int toplam = 1;

     cout << "Sayi : " << endl;

     cin >> sayi;

     do
     {

      toplam = toplam * sayi;
      sayi--;

     }while (sayi != 0);
     cout << "Result : " << toplam << endl;*/

     /*string parola = "AGD";

     string password;

     do
     {

      cout << "Password : " << endl;

      cin >> password;

      if (parola != password)
      {
         cout << "Yanlis" << endl;
      }
      
      
     } while (password != parola);
     cout << "Hesap Girdiniz." << endl;*/

     /*int sayi1,sayi2;

     do
     {
        
      cout << "Sayi : " ;

      cin >> sayi1;

      cout << "Sayi : " ;

      cin >> sayi2;

       
     } while (sayi2 == 0);
     cout << "Total : " << sayi1 / sayi2 << endl;*/
     

     /////////////////////////////////////////

     /*for (int i = 0; i < 16; i++)
     {

      cout << "Sayi : " << i << endl;

      if (i == 10)
      {
         cout << "Dongu Durdu" << endl;
         break;
      }
      
       
     }
     */


     /*string kullaniciadi = "Erdem12";
     string parola = "AGD";
     string username;
     string password;
     int hatasayisi = 0;
     

     while (true)
     {

      cout << "Username : " ;

      cin >> username;

      cout << "Password : " ;

      cin >> password;

      if (username == kullaniciadi && password == parola)
      {
         cout << "Hesapa Girildi." << endl;
         break;
      }
      else if (username != kullaniciadi && password == parola)
      {
         cout << "Kullanici Adi YANLİS." << endl;
         hatasayisi++;

         if (hatasayisi > 5)
         {
            cout << "Cok Fazla Hata Oldu." << endl;
            break;
         }
         
          
      }
      else if (username == kullaniciadi && password != parola)
      {
         cout << "Parola Yanis Girildi." << endl;
         hatasayisi++;

         if (hatasayisi > 5)
         {
            cout << "Cok Fazla Hata Oldu." << endl;
            break;
         }
         
      }
      else 
      {
         cout << "Tekrar Deneyin " ;
         hatasayisi++;

         if (hatasayisi > 5)
         {
            cout << "Cok Fazla Hata Oldu." << endl;
            break;
         }
         
      }
      
       
     }*/

     /*int sayi;

      cout << "Sayi : " << endl;

      cin >> sayi;

       
      for (int i = 2; i < sayi - 1; i++)
      {

         if (sayi % i == 0)
         {

            cout << "Asal Sayi Degildir." << endl;

            return 0;

            break;
             
         }
         
         
      }
      cout << "Asal Sayidir." << endl;*/
   
     ////////////////////////////////////////////////////////////
     /*for (int i = 0; i < 20; i++)
     {
     
      if (i == 12)
      {
        continue;
      }
      
      cout << "Sayi : " << i << endl;
        
     }
     */
     
     /////////////////////////////////////////////////////

     /*int arrayim[4] = {1,2,3,4};

     for (int i = 0; i < 4; i++)
     {

      cout << i + 1 << ".nci Index Degeri : " << arrayim[i] << endl;
      
     }
     */

     /*int ages[5];

     for (int i = 0; i < 5; i++)
     {

      cout << "Sayi Giriniz : " << endl;

      cin >> ages[i];
      
     }
     
       
     for (int j = 0; j < 5; j++)
     {

      cout << "Deger : " << ages[j] << endl; 
       
     }*/
   
     /*int sayilar[5];

     for (int i = 0; i < 5; i++)
     {

      cout << "5 Sayi : " << endl;
      
      cin >> sayilar[i];

     }
     

     for (int i = 0; i < 5; i++)
     {

      if (sayilar[i] > sayilar[i + 1])
      {

         int piyonDegisken = sayilar[i];

         sayilar[i] = sayilar[i + 1];

         sayilar[i + 1] = piyonDegisken;
         
      }
      
       
     }
     cout << "En Buyuk Deger : " << sayilar[4] << endl;*/


     /*int arrayim1[5];

     for (int i = 0; i < 5; i++)
     {
        
       cin >> arrayim1[i];
      
     }
    
     char karakter;
     cout << "Bir Karakter : " << endl;

     cin >> karakter;
     

     for (int i = 0; i < 5; i++)
     {
          

       cout << "Sayilar : " << arrayim1[i];

      for (int j = 0; j < arrayim1[i]; j++)
      {

          cout << karakter << endl;

          
      }
      
       
     }*/
     
     
     
     ////////////////////////////////////////////

     /*int ikiBoyutluArray[2][2] = {{110,120} , {202 , 204}};


     for (int i = 0; i < 2; i++)
     {

      for (int j = 0; j < 2; j++)
      {
         cout << "Deger :  " << ikiBoyutluArray[i][j] << endl;
      }
      
       
     }*/
     
     
     /*int twoMatris[2][2];


     for (int i = 0; i < 2; i++)
     {
      
      for (int j = 0; j < 2; j++)
      {

         cout << "Deger Giriniz : " << endl;

         cin >> twoMatris[i][j];
         
      }
      
      
     }

     for (int i = 0; i < 2; i++)
     {
      
      for (int j = 0; j < 2; j++)
      {

 

         cout << "Deger : " << twoMatris[i][j] << endl;
         
      }
      
      
     }*/

     /*int arrayim2[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};


     for (int i = 0; i < 3; i++)
     {

      for (int j = 0; j < 3; j++)
      {
          
         cout << arrayim2[i][j] << "\t";


      }
      cout << endl;
      
       
     }
     */

     

     /*float notlar[5][3];


     for (int i = 0; i < 5; i++)
     {
         

      cout << "Vize 1 : " ;

      cin >> notlar[i][0];

      cout << "Vize 2 : " << endl;
      
      cin >> notlar[i][1];

      cout << "Final : " << endl;

      cin >> notlar[i][2];


       
     }
     
     float notOrt;

     for (int j = 0; j < 5; j++)
     {


      notOrt = (notlar[j][0] * 0.25) + (notlar[j][1] * 0.25) + (notlar[j][2] * 0.50);

      cout << "Ogrencinin Donem Sonu Ort : " << notOrt << endl;
       
     }*/
     

     
     
     
     //////////////////////////////////////////

     //qfonksiyon();

     /*int b = 10;

     degerDegistir(b);*/

     /*string printf = "Hello World";

    HelloWorld(printf);*/

    /*int sayi;

   cout << "Sayi : " ;

   cin >> sayi;

   kareSi(sayi);*/

   //cout << topla(3,7) << endl;
      
    //cout << usAlma(4,3) << endl;

    /*cout << ebob(30,20) << endl;
   
   cout << ekok(40,30) << endl; */



     //////////////////////////////////////

     /*int sayia;

    cout << "Sayi : " ;

    cin >> sayia;

    cout << "Total : "  << factorial(sayia) << endl;*/

    /*int sayi1,sayi2,sayi3;

    cout << "3 SAYİ : " ;

    cin >> sayi1 >> sayi2 >> sayi3;

    cout << "Total : " << toplama(sayi1 , sayi2 , sayi3) << endl;*/
   

    ////////////////////////////////////////////////////////////////


    /*int a = 5;

    int *ptr = &a;

    cout << "Adresi : " << ptr << endl;
    cout << "Deger : " << *ptr << endl;

    *ptr = 1;

    cout << "Deger : " << *ptr << endl;*/

    /*int b = 11;

    int *ptr = &b;

    pDegerDegistir(&b);*/

    ///////////////////////////////////////////////////
    
     /*srand(time(NULL));

     int sayi = rand() % 100;

     cout << "Sayi : " << sayi << endl;*/
      

     /*srand(time(NULL));

     int randomNumber = rand() % 10;
     int rastgeleSayi;

     while (true)
     {

      cout << "1  - 10 arasinda Bir Sayi Giriniz : " << endl;

      cin >> rastgeleSayi;

      if (rastgeleSayi != randomNumber)
      {

      cout << "Yanlis Tahmin." << endl;
      

      }
     else if (randomNumber == rastgeleSayi)
     {
      
      cout << "Dogru Tahmin" << endl;

      break;

     }
     else if (rastgeleSayi < 0 || rastgeleSayi > 10)
     {
      
      cout << "Yanlis Araliklarda Tahmin." << endl;

     }

      
     }
     */
     
     



     /////////////////////////////////////////////////


     /*int arrayim[4] = {10,25,30,40};

     int *ptr = arrayim;

     cout << "Adres : " << arrayim << endl;*/


     /*string mylist[] = {"Erdem" , "Emir"};

     string *newptr = mylist;

     cout << "2.deger : " << newptr[1] << endl;*/

     /*int adres[] = {11,22,33,44};

     int *p = adres;

     for (int i = 0; i < 4; i++)
     {

      cout << "Index : " << *(p + i) << endl;
       
     }*/
     

     ////////////////////////////////////////////

     /*clock_t sure = clock();

     for (long long int i = 2; i < 1000000; i++)
     {
      
      

     }
     clock_t bitis = clock();

     cout << "Total Zaman : " << double((bitis - sure)) / CLOCKS_PER_SEC  << endl;*/

     ///////////////////////////////////////////////////
     

      /*int a = 10;
      int b = 4;

      int c = pow(a , b);
      int d = sqrt(b);
      int e = fabs(-1);
      int g = floor(10.9);
      int h = ceil(10.1);
      int j = tan(90);
      int k = cos(60);
      int l = sin(10);

      cout << "Cevap : " << c << endl;
      cout << "Cevap : " << d << endl;
      cout << "Cevap : " << e << endl;
      cout << "Cevap : " << g << endl;
      cout << "Cevap : " << h << endl;
      cout << "Cevap : " << j << endl;
      cout << "Cevap : " << k << endl;
      cout << "Cevap : " << l << endl;*/

      ////////////////////////////////////////////////

      /*int a = 10;

      int &ref = a;

      ref++;

      cout << "A : " << a << endl;*/
      
      /*int a = 20;
      int b = 30;

      int &ref = a;
      int &ref2 = b;
   
      refliFon(ref , ref2);*/

      ///////////////////////////////////////////////////////////

      /*int arraya[4] = {10,20,30,40};
 
       
    
      yazdir(arraya , 4);*/

      /////////////////////////////////////////////////////
      /*const int i = 5;
      cout << i << endl;*/
      //////////////////////////////////////////////////


      /*string yazi = "Yazi";
      string isim = "Erdem";

      int uzunluk = yazi.length();
      string yeniyazi = yazi.insert(2 , "A");
   
      cout << "Uzunluk : " << uzunluk << endl;
      cout << "Index Degeri : " << yazi[0] << endl;
      cout << yeniyazi << endl;

      swap(yazi , isim);

      cout << "İsim : " << yazi << endl;
      cout << "İsim : " << isim << endl;*/
     

      /////////////////////////////////////////////

      /*int array1[10] = {10,20,30,40,50,60,70,80,90,100};

      int *p = array1;
     

      printArray(array1 + 2 , array1 + 5);*/

      //////////////////////////////////////////////

     /*struct yapi ogrenci1 = {"Erdem" , 12};
     struct yapi ogrenci2 = {"Emir" , 14};

     struct yapi *p = &ogrenci1;

     yaz(&ogrenci1);*/

     //strcutyazzdir(ogrenci1);
   
      /*cout << p->age << endl;
      cout << p->name << endl;
  
     cout << "Yazi : " << ogrenci1.name << endl;
     cout << "Yazi : " << ogrenci1.age << endl;
     cout << "Yazi : " << ogrenci2.name << endl;
     cout << "Yazi : " << ogrenci2.age << endl;*/

     ////////////////////////////////////////////////////
   
      /*int adet;
      char randomSayi;
      cout << "Adet : " << endl;

      cin >> adet;

      srand(time(NULL));

      for (int i = 0; i < adet; i++)
      {

         randomSayi = rand() % 40 - 90 + 1;
         
         cout << randomSayi << endl;
          
      }*/
       

      /*float array1[4] = {12,3,4,5};
      float array2[4] = {5,15,2,14};

      float array3[4];

      

      for (int i = 0; i < 4; i++)
      {

       array3[i] = {(array1[i] * array2[i]) / (array1[i] + array2[i])};

       
          
      }
      
      for (int i = 0; i < 4; i++)
      {
        

         cout << "Index Degeri : " << array3[i] << endl;
         
      }*/

      ////////////////////////////////////////////
      
      /*int array2[5];

      for (int i = 0; i < 5; i++)
      {

         cout << "Index Degeri : " << endl;

         cin >> array2[i];

      }

      for (int i = 0; i < 5; i++)
      {

         for (int j = 0; j < 5; j++)
         {

            if (array2[j + 1] < array2[j])
            {

               int piyonDegisken = array2[j + 1];

               array2[j + 1] =  array2[j];

               array2[j] = piyonDegisken;
               
            }
            
            
         }
         
          
      }
      

      for (int i = 0; i < 5; i++)
      {

         cout << "Degerler :  " << array2[i] << endl;
          
      }*/
      
      
     ///////////////////////////////////////////////////
     /*int array3[5] = {10,20,30,40,50};    
    
     
     for (int x : array3)
     {

      cout << x << endl;
      
     }
     */

     /*int array1[3] = {1,2,3};


     for (int x : array1)
     {

      cout << x * x  << endl;
      
     }*/
     

     /////////////////////////////////////////////

     /*struct yapi ogrecni6 = {"Erdem" , 12 , {"Tokat " , 238}};

     cout << ogrecni6.name << endl;
     cout << ogrecni6.age << endl;
     cout << ogrecni6.adresandnumber.adres << endl;
     cout << ogrecni6.adresandnumber.number << endl;*/

    /*struct biryapi tucson;
     tucson.hp = 136;
     tucson.gear = 7;
     tucson.model = "Tucson";

     
     //struct biryapi *p = &tucson;
    // struct biryapi focus =  {90 , 5  , "Focus"};
      
     //struct biryapi *ptr = &tucson;

     //tucson.uracbilgidatabase = new aracbilgi{"Hyundai","Turkey"};
   
    // struct biryapi *p1 = &focus;

     //yazdirma(&focus);

     //cout << tucson.Aracbilgi.brand << endl;
     //cout << tucson.Aracbilgi.country << endl;

     cout << ptr->uracbilgidatabase->brand << endl;
     cout << ptr->uracbilgidatabase->country << endl;*/



     //////////////////////////////////////////////////
 
    

   //vector <int> myVector3;

    /*int sayi;
    while (sayi != 0)
    {

      cout << "Sayi : " ;

      cin >> sayi;

      myVector3.push_back(sayi);
       
    }

    myVector3.pop_back();

    cout << myVector3.back() << endl;*/

    /*int sayi;
    int toplam = 0;
    while (true)
    {
      
      cout << "Sayi : " ;

      cin >> sayi;

      toplam += sayi;

      myVector3.push_back(sayi);

      if (sayi == 0)
      {
         cout << "Toplam : " << toplam << endl;
         break;
      }
      
      
       
    }*/

    
    
     
    
    //vector <int> myVector2 = {10,20,30,40,1,2,124,434};

    
     
    /*myVector.push_back(2);//eleman ekler.
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(4);
    // myVector2.assign(2,5);
    cout << myVector2.front() << endl;
    cout << myVector2.empty() << endl;
    //myVector.pop_back(); //SON ELEMANI SİLER.

    cout << myVector.size() << endl;
    cout << myVector[0] << endl;
    cout << myVector[1] << endl;
    cout << myVector[2] << endl;
    cout << myVector.back() << endl;*/ //SON ELEMANI GÖSTERİR.

    /////////////////////////////////////////////////////

   /* cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(string) << endl;
    cout << sizeof(char) << endl;*/

    ///////////////////////////////////////////////////

    /*modeller a3,x5,focus,tucson,civic,e63,astra;

    a3 = Audi;

    cout << a3 << endl;*/

    ////////////////////////////////////////////////

   /*  int a = 5;

   cout << faktoriyel(a) << endl;

   int b = 6;

   cout << fibonnacci(6) << endl;*/

   ////////////////////////////////////
 
   /*int *ptr = new int;

   *ptr = 6;

   delete ptr;*/

   /*int *ptr;

   int size;

   cout << "Size : " ;

   cin >> size;

   ptr = new int[size];

   for (int i = 0; i < size; i++)
   {

      cout << "Deger: " ;

      cin >> ptr[i];
       
   }

   for (int i = 0; i < size; i++)
   {

      cout << "Deger : " << ptr[i] << endl;
      
   }*/
   
   //delete [] ptr;
   

    
   //////////////////////////////////////


    /*Araba ilkarac;
    ilkarac.brand = "Hyundai";
    ilkarac.year = 2023;
    ilkarac.color = "Gray";
    ilkarac.yazdir(ilkarac);
    ilkarac.speed();
    ilkarac.stop();*/

      /*Student student1;
      Student student2;

       student1.setName("ERDEM");

       cout << student1.getName() << endl;*/

      //student1.name = "Erdem";
      //student2.name = "Emir";

      //cout << student1.name << endl; 
      //cout << student2.name << endl;

      //student1.tellName();

       
     

    /////////////////////////////////

    /*struct human humans[3];


    for (int i = 0; i < 3; i++)
    {

      cout << "Name : " ;

      cin >> humans[i].name ;

      cout << "Adress : " ;

      cin >> humans[i].adress ;

      cout << "TcNo : " ;

      cin >> humans[i].tcNo ;
 
    }
    
    for (int i = 0; i < 3; i++)
    {

      cout << humans[i].name << endl;
      cout << humans[i].tcNo << endl;
      cout << humans[i].adress << endl;
      
    }*/
    
 
  ////////////////////////////////////

   
   /*Araba* arac1 = new Araba("Hyundai" , 2023);

   cout << arac1->brand << endl;*/

   ////////////////////////////////////////


   /*int *ptr = nullptr;
   int *ptr2 = nullptr;

   ptr = new int;

   *ptr = 6;

   ptr2 = ptr;

   delete ptr;*/

   //delete  ptr;

   /**ptr = 7;

   //cout << *ptr << endl;*/
 
   //////////////////////////////////////////
 
  /*ofstream dosyas;

   dosyas.open("ERDEM.txt");

   dosyas << "ERDEMGECGEL" << endl;
   dosyas << "HELAL." << endl;
   dosyas << "EKLENDi.";
     
   dosyas.close();
     
   ofstream dosyas2("DOSYASD.txt");

   dosyas2 << "AAMCAS." << endl;

   dosyas2.close();*/
 

   /*ifstream dosyaz;

   string satir;

   dosyaz.open("ERDEM.txt");*/
  
   /*while (getline(dosyaz , satir))
   {

      

      cout << satir << endl;
      
   }*/
    

   //dosyaz.close();

  /*  ifstream dosyaz2;
   string kelime;
   dosyaz2.open("DOSYASD.txt");
   

   while (dosyaz2 >> kelime)
   {
      cout << kelime << endl;
   }
   
   

   dosyaz2.close();
*/   
   //////////////////
   /*Ogrenci  nesne1(15 , "Erdem");

   cout << nesne1.name << endl;
   bilgiYaz(nesne1);*/

   /////////////////////////////

   /*yaz();

     yaz(4);

     yaz(4 + 5);*/
  
     ///////////////////////////

     /*ifstream newdosya;

     ofstream yenidosya1;
     yenidosya1.open("YENİDOSYA.txt");

     ofstream yenidosya2;
     yenidosya2.open("YENİDOSYA2.txt");


     newdosya.open("DOSYASD.txt");

     int sayi;
  
     while (newdosya >> sayi)
     {

      cout << sayi << endl;

      if (sayi % 2 == 0)
      {

         yenidosya1 << sayi << endl;
         
      }

      else 
      {
         yenidosya2 << sayi << endl;
      }
      
      
     }
     

     newdosya.close();
     yenidosya1.close();
     yenidosya2.close();*/

    
   ////////////////////////////////////////

   
   

   
   
    




     return 0;


}
 
