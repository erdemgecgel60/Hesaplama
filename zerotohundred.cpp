#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
/*void cafer(){
   
    int sayi;
   
    cout << "Sayi : " ;

    cin >> sayi;

    cout << "Sayinin Karesi : " << sayi * sayi << endl;
    

}*/

/*void degerdegistir(int *ptr){


   *ptr = 20;

   cout << "AF Degeri : " << *ptr << endl;


}*/

/*void faktoriyel(int a){

     int faktoriyel = 1;
     
    

    

     while (a != 0)
     {
      
        faktoriyel = faktoriyel * a;

        a--;

        cout << "Sayi : " << a << endl;


     

     }
     cout << "Result : " << faktoriyel << endl;
     

    
}*/

/*int abc(int a,int b, int c){


     return a + b + c;

   
}*/

/*void karesi(int a){

    

    cout << "A Karesi : " << a * a << endl;


}*/

/*void toplama(){
  
  int sayi1,sayi2;
  int total;

  cout << "Sayi : " ;

  cin >> sayi1;

  cout << "Sayi : " ;

  cin >> sayi2;

  total = sayi1 + sayi2;

  cout << "Total : " << total ;



}*/


/*int rfonksiyon(int a){


   return a * a;

}*/

/*int toplamas(int a , int b){


     return a + b;


}*/

/*void reflifo(int &ref){

   
   ref = 16;
      


}*/



int main(){



 
   
      //cout << "Hello World" << endl;
      ////////////////////////////////////////////////////
      /*int tamsayi = 1;
      float kesirlisayi = 1.25;
      string isim = "Erdem";
      bool trufal = true;
      char nec = 'C';

      cout << tamsayi << endl;
      cout << kesirlisayi << endl;
      cout << isim << endl;
      cout << trufal << endl;
      cout << nec << endl;*/
      ////////////////////////////////////////////////////
      // \n = Yeni Satir \t  = Boşluk  <<endl;
      ////////////////////////////////////////////////////

      /*int a = 10;
      int b = 5;

      int c = a + b;
      int d = a - b;
      int e = a / b;
      int f = a * b ;

      string isim = "Erdem";
      string soyisim = " Gecgel";
      string totalismim = isim + soyisim;


      cout << "A ve B Toplami : " << c << endl;
      cout << "A ve B Cikarimi : " << d << endl;
      cout << "A ve B Bolumu : " << e << endl;
      cout << "A ve B Carpimi : " << f << endl;

      cout << "Ismim : " << totalismim << endl;*/

      ////////////////////////////////////////////////////

      /*int i = 5;
      i++;

      int a = 5;
      a--;

      int d = i + a;

      cout << "D : " << d << "I : " << i << "A : " << a << endl;*/

      /*int a1 = 10;
      a1 += 5;
      int b1 = 4;
      b1 -= 2;
      int c1 = 6;
      c1 *= 5;
      int d1 = 8;
      d1 /= 4;

      cout << "A  : " << a1 << " " <<" B : " << b1 << " " << "C : " << c1 << " " << "D : " << d1 << endl;*/

      ///////////////////////////////////////////////////////////////////////
      /*bool a1 = true;
      bool b1 = true;

      bool c1 = true;
      bool d1 = false;

      if ((a1 && b1) && (c1 && d1))
      {
        cout << "True 1" << endl;
      }
      else if ((a1 && b1) || (c1 && d1) )
      {
        cout << "True 2 " << endl;
      }
      else if ((a1 ^= b1))
      {
        cout << "True 3" << endl;
      }
      else 
      {
        cout << "Else" << endl;
      }*/
      
      ////////////////////////////////////////////////////

    /*  int x = 49;
      x <<= 2;
      x >>= 2; 

      cout << x << endl;*/


      ////////////////////////////////////////////////////

      /*int radius ;

      cout << "Yaricap : " << endl;

      cin >> radius;

      cout << "Alani : " << 3 * (radius * radius) << endl;
      cout << "Cevresi : " << 6 * radius << endl;*/


      /*int a,b,c;

      cout << "Sayilari Giriniz : " << endl;

      cin >> a >> b >> c;

      cout << "A : " << a << " " << "b : " << b << " " << "C : " << c << endl;*/


      /*int a; 
      int b;
      int c;

      cout << "Sayilari Giriniz : " << endl;

      cin >> a >> b;

      c = a + b;
     int  d = a - b;
     int  e = a * b;
     float f = a / b;

      cout << "Toplami : " << c << endl;
      cout << "Cikarimi : " << d << endl;
      cout << "Carpimi : " << e << endl;
      cout << "Bolme : " << f << endl;*/

      /*string yazi;
       
      cout << "Yazı Giriniz : " << endl;

      getline(cin , yazi);

      cout << "Yazınız : " << yazi << endl;*/




      ////////////////////////////////////////////////////
      //const int mynu = 13;
      //////////////////////////////////////////////////////
       
       /*float a = 3.4;

       a = static_cast<int>(a);

       cout << a << endl;*/

       ///////////////////////////////////////////////////////
      
      /* cout << "İnt Byte Degeri : " << sizeof(int) << endl;
       cout << "Float Byte Degeri : " << sizeof(float) << endl;
       cout << "String Byte Degeri : " << sizeof(string) << endl;*/  

        /////////////////////////////////////////////////////////

      /* int ny = 45;

       cout << &ny << endl;    */

        ///////////////////////////////////////////////////////


        /*int exammark1 , exammark2;
        int sozlu1,sozlu2;

        cout << "Sinav Notunuzu Giriniz : " << endl;

        cin >> exammark1;

        cout << "Sinav Notunuzu Giriniz : " << endl;

        cin >> exammark2;

        cout << "Sinav Notunuzu Giriniz : " << endl;

        cin >> sozlu1;

        cout << "Sinav Notunuzu Giriniz : " << endl;

        cin >> sozlu2;

        float ortalama = (exammark1 + exammark2 + sozlu1 + sozlu2) / 4.0;

        if ((ortalama > 0) && (ortalama <= 24))
        {
            cout << "Ort : 0" << endl;
        }
        else if ((ortalama > 24) && (ortalama <= 44))
        {
            cout << "Ort : 1" << endl;
        }
        else  if ((ortalama > 44) && (ortalama <= 54))
        {
            cout << "Ort : 2" << endl;
        }
        else if ((ortalama > 54) && (ortalama <= 69))
        {
            cout << "Ort : 3" << endl;
        }
        else if ((ortalama > 69) && (ortalama <= 84))
        {
            cout << "Ort : 4" << endl;
        }
        else if ((ortalama > 84) && (ortalama <= 100))
        {
            cout << "Ort : 5" << endl;
        }
        else 
        {
            cout << "Else" << endl;
        }*/
   
   /*string asdusername = "ErdemLeon67";
   string asdpassword = "Erdem";

   string username ;
   string password;

   cout << "Write Username" << endl;
   cin >> username;

   cout << "Write password" << endl;
   cin >> password;


   if ((asdusername == username) && (asdpassword == password))
   {
      cout << "Succesfull" << endl;
   }
   else if ((asdusername != username) && (asdpassword == password))
   {
      cout << "Your username is wrong" << endl;
   }
   else if ((asdusername == username) && (asdpassword != password))
   {
      cout << "Your password is wrong" << endl;
   }
   else{
      cout << "Try Again" << endl;
   }*/
        
   
   /*int number;

   cout << "Number : " << endl;

   cin  >> number;

   if (number < 0)
   {
     cout << "Negative Number " << endl; 
   }  
   else if ((number >= 0) && (number %= 2) == 0)
   {
     cout << "Cift Sayi" << endl;
   }
   else if ((number >= 0) && (number %= 2) == 1)
   {
     cout << "Tek Sayi" << endl;
   }*/

   /*int number1,number2,number3;

   cout << "Number 1 : " << endl;

   cin >> number1;

   cout << "Number 2 : " << endl;

   cin >> number2;

   cout << "Number 3 : " << endl;

   cin >> number3;

   if ((number1 > number2) && (number2 > number3) && (number1 > number3))
   {
     cout << "Max : 1 , Min : 3" << endl;
   }
   else if ((number1 > number3) && (number3 > number2) && (number1 > number2))
   {
     cout << "Max : 1 , Min : 2" << endl;
   }
   else if ((number2 > number3) && (number3 > number1) && (number2 > number1))
   {
     cout << "Max : 2 , Min : 1" << endl;
   }
   else if ((number2 > number1) && (number1 > number3) && (number2 > number3))
   {
     cout << "Max : 2 , Min : 3" << endl;
   }
   else if ((number3 > number2) && (number2 > number1) && (number3 > number1))
   {
    cout << "Max : 3 , Min : 1" << endl;
   }
   else if ((number3 > number1) && (number1 > number2) && (number3 > number2))
   {
     cout << "Max : 3 , Min : 2" << endl;
   }
   else if ((number1 == number2) && (number2 == number3) && (number1 == number3))
   {
     cout << "Equal Three" << endl;
   }
   else if ((number1 > number2) && (number2 == number3) && (number1 > number3))
   {
     cout << "Max : 1 Number2 and Number3 is equal" << endl;
   }
   else if ((number1 < number2) && (number2 > number3) && (number1 == number3))
   {
     cout << "Max : 2 Number1 and Number3 is equal" << endl;
   }
   else if ((number1 == number2) && (number2 < number3) && (number1 < number3))
   {
     cout << "Max : 3 Number1 and Number2 Equal " << endl;
   }*/
   
  
   
   /*int islem;
   int a , b;
   
   cout << "Islemler : " << endl;
   cout << "1 : Toplama" << endl;
   cout << "2 : Cikarma" << endl;
   cout << "3 : Carpma" << endl;
   cout << "4 : Bolme" << endl;

   cout << "Islem : " << endl;

   cin >> islem;

   cout << "Sayilar : " << endl;

   cin >> a >> b;

   if (islem == 1)
   {
     
     cout << "Toplami : " << a + b << endl;
    
   }
   else if (islem == 2)
   {
      
     cout << "Cikarimi : " << a - b << endl;

   }
   else if (islem == 3)
   {
     
     cout << "Carpimi : " << a * b << endl;

   }
   else if (islem == 4)
   {
    
     cout << "Bolumu : " << a / b << endl;

   }
   */

   /*int ilksayi,ikincisayi;

   cout << "İki Sayi Giriniz : " << endl;

   cin >> ilksayi >> ikincisayi;

   if (ilksayi > ikincisayi)
   {
     cout << "First Number is bigger than second number " << endl;
   }
   else if (ilksayi == ikincisayi)
   {
     cout << "Equal" << endl;
   }
   else if (ilksayi < ikincisayi)
   {
     cout << "Secon number is bigger than first number" << endl;
   }*/
   
  
 /* int number;

  cout << "Sayi : " << endl;

  cin >> number;


  if (number > 0)
  {
     cout << "Positive  "  << endl;
  }
  else if (number == 0)
  {
    cout << "Notr" << endl;
  }
  else if (number < 0)
  {
     cout << "Negative" << endl;
  }
  else 
  {
    cout << "Else" << endl;
  }*/
  

 /* int abc;
  string notsonucu;

  cout << "Not : " << endl;

  cin >> abc;

  notsonucu = (abc < 0) ? "Kaldiniz." : "Gectiniz." ;

  cout << "Not Sonucu : " << notsonucu << endl;*/

  /*char tus;

  cout << "Tus : " << endl;

  cin >> tus;

  if (tus >= 'A' && tus <= 'Z')
  {
     cout << "Buyuk Harf" << endl;
  }
  else if (tus >= 'a' && tus <= 'z')
  {
     
    cout << "Kucuk Harf" << endl;

  }
  else 
  {
    cout << "Harf Degil" << endl;
  }*/
  
  
   

   

  ////////////////////////////////////////////////////////// 
   
   /*int i = 0;

   while (i < 10)
   {
     i++;
     cout << "Merhaba Dunya" << endl;
   }*/
   
   /*int i = 0;
   int j = 5;

   while (i < 10 && j < 15)
   {
     cout << "İ : " << i << endl;
     cout << "J : " << j << endl;
     i++;
     j++;
   }

  /* string password = "123";
   string parola;

  while (parola != password)
  {
  

    cout << "Parola : " << endl;
    cin >> parola;

    if (parola != password)
    {
      cout << "Password is wrong." << endl;
    }
     

  }
  cout << "Dogru" << endl;

  return 0;*/

  /*  int i = 1;

  while (i < 99)
  {
    i+= 2;

    cout << "I : " << i << endl;
  }
  return 0;*/
  
 /* int sayi;

  cout << "1-10 Arasinda Bir Sayi Giriniz : " ;

  cin >> sayi;
  int i = 0;

  if (sayi < 0 && sayi > 11)
  {
   cout << "Lütfen 1-10 Arasinda Bir Sayi Giriniz.";

  }
  else if (sayi > 0 && sayi < 11)
  {
    while (i < 10)
  {
    i++;
     

    cout << "Carpim Tablosu : " << sayi * i << endl;


  }
  
  }*/
  
  
  
   
        
   /////////////////////////////////////////////////////////////////////////////
  

   /*string password = "123456";
   string parola;

   do
   {
    cout << "Parola : " << endl;

    cin >> parola;

    if (password != parola)
    {
      cout << "Yanlis" << endl;
    }
    
   } while (password != parola);
    cout << "Parola Dogru" << endl;
   
        

   return 0;*/




   /*int sayi;

   cout << "Sayi Giriniz : " ;
   cin >> sayi;

   do
   {
     

     sayi++;

     cout << "Girilen Sayi : " << sayi << endl;

  

   } while (sayi < 1000);*/
   
   /////////////////////////////////////////////////////////////    
 

   /*for (int i = 1; i < 2050; i*= 2)
   {
     cout << "İ : " << i << endl;
   }*/


   /*int faktoriyel = 1;
   int i;

   cout << "Sayi : " << endl;

   cin >> i;

   for  (i; i != 0; i--)
   {
       
       faktoriyel = i * faktoriyel;

       cout << "İ : " << i << endl;

   }
   cout << "Faktoriyel Sonucu : " << faktoriyel << endl;*/

     
   //////////////////////////////////////////////////////
  
   /*int i = 1;

   while (i < 2050)
   {
     i *= 2;
     
     cout << "İ : " << i << endl;

     if (i == 512)
     {
       break;
     }
     
   }*/

  /*int sayi;

  cout << "Sayi : " << endl;

  cin >> sayi;


  while (sayi > -10)
  {
    sayi--;

    if (sayi == 0)
    {
      break;
    }
    
    cout << "Sayi : " << sayi << endl;

  }*/
   

   /*string susername = "Erdem";
   string sifre = "1234";
    
   string username,password;
   int hatasayisi = 0;

   while (true)
   {
    
     cout << "Username : " << endl;

     cin >> username;

     cout << "Sifre : " << endl;

     cin >> password;

     if (susername == username && sifre == password)
     {
        
        cout << "Basarili" << endl;
        break;

     }
     else if (susername != username && sifre == password)
     {
       

        cout << "Username is wrong" << endl;

     }
     else if (susername == username && sifre != password)
     {
      
      cout << "Password is wrong" << endl;
       
     }
     else 
     {
        cout << "Ikisi DE hatali" << endl;
        hatasayisi++;

        if (hatasayisi > 5)
        {
           cout << "Cok Fazla Hata Yaptiniz." << endl;
           break;
        }
        
     }*/
  /////////////////////////////////////////////////////////

  
 /* for (int i = 10; i < 20; i++)
  {
    
    

    if (i == 15)
    {
      continue;;
    }
    
   cout << "İ : " << i << endl;

  }*/

  //////////////////////////////////////////////////////////////////////////


  /*int day;

  cout << "Day : " << endl;
 
  cin >> day;


  switch (day)
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

   
  /*char myoperator;
  int sayi1,sayi2;
  int toplam,cikarim,bolum,carpim;


  cout << "Opeator : " << endl;

  cin >> myoperator; 

  

  switch (myoperator)
  {
  case '+':
     
    cout << "Ilk Sayi : " << endl;

    cin >> sayi1;

    cout << "Ikinci Sayi : " << endl;

    cin >> sayi2;

     toplam = sayi1 + sayi2;
      
     cout << "Toplam : " << toplam << endl; 
    break;
  case '-':


     cout << "Ilk Sayi : " << endl;

     cin >> sayi1;

     cout << "Ikinci Sayi : " << endl;

     cin >> sayi2;
    
     cikarim = sayi1 - sayi2;
      
     cout << "Cikarim : " << cikarim << endl;
     
     break;
  case '*':
      cout << "Ilk Sayi : " << endl;

      cin >> sayi1;

     cout << "Ikinci Sayi : " << endl;

      cin >> sayi2;
    
     carpim = sayi1 * sayi2;
      
     cout << "Carpim : " << carpim << endl;
     
     break; 
  case '/':
     cout << "Ilk Sayi : " << endl;

     cin >> sayi1;

     cout << "Ikinci Sayi : " << endl;

     cin >> sayi2;
    
     bolum = sayi1 / sayi2;
      
     cout << "Bolum : " << bolum << endl;
     
     break;     
   
  default:
        
      cout << "Else" << endl;
    break;
  }*/

  /*int sayi;

  cout << "Sayi : " << endl;
  cin >> sayi;

  switch (sayi %= 2)
  {
  case 0:
     
     cout << "Even Number" << endl;
    
    break;
  case 1:

    cout << "Odd Number" << endl;

    break;  
  
  default:
    break;
  }*/

  /*char letter;

  cout << "Harf : " << endl;

  cin >> letter;

  switch (letter)
  {
  case 'E':
     
     cout << "Sesli Harftir." << endl;
    
     break;
  case 'U':
    cout << "Sesli Harftir." << endl;
    
     break;
  case 'O' :

     cout << "Sesli Harftir." << endl;
    
     break;
  case 'I':

     cout << "Sesli Harftir." << endl;
    
     break;
  case 'A':


     cout << "Sesli Harftir." << endl;
    
     break;            
     
  default:
     
     cout << "Sessiz Harftir." << endl;

    break;
  }*/

 /* int monthnumber;

  cout << "Month : " << endl;

  cin >> monthnumber;

  switch (monthnumber)
  {
  case 1:
    
    cout << "January has 31 Days" << endl;

    break;
  case 2:
    
   
    cout << "February has 28 Days" << endl;

    break;
  case 3:

    cout << "March has 31 Days" << endl;

    break;

  case 4:

     cout << "April has 30 Days" << endl;

     break;  

  case 5:

    cout << "May has 31 Days" << endl;

    break;   

  case 6:

    cout << "June has 30 Days" << endl;

    break;  
  case 7:

    cout << "July has 31 Days" << endl;

    break;  
  case 8:

    cout << "August has 31 Days" << endl;

    break;  
  case 9:

    cout << "September has 30 Days" << endl;

    break;  
  case 10:

    cout << "Octomber has 31 Days" << endl;

    break;  
  case 11:  

    cout << "November has 30 Days" << endl;

    break;
  case 12:

   cout << "December has 31 Days" << endl;

    break;  
  default:
     cout << "Else" << endl;
    break;
  }*/
  

  
  
  
  /////////////////////////////////////////////////////////////////
  
  
  /*string array[3] = {"Opel","Ford","Honda"}; //string array[] de yapılabilir.

  cout << "Listenin Ilk Elemani : " << array[0] << endl;
  cout << "Listenin Ikinci Elemani : " << array[1] << endl;
  cout << "Listenin Ucuncu Elemani : " << array[2] << endl;*/


 /*int array[3] = {10,20,30};

  for (int i = 0; i < 3; i++)
  {
    cout << "I : " << array[i] << endl;
  }*/


    /*int c[6];

    for (int i = 0; i < 6; i++)
    {
       
       cout << "Degerler : " << endl;

       cin >> c[i];
      
    }

    for (int i = 0; i < 6; i++)
    {
     
      cout << "Index Degeri : " << c[i] << endl;

    }*/

    /*int dizi[6];


   for (int i = 0; i < 6; i++)
   {
     
     dizi[i] = i;

     cout << "Index Degeri : " << dizi[i] << endl;

   }*/
   

  
   //////////////////////////////////////////////////////////////////////

   /*int array[2][2] = {{1,2} , {3,4}};

   cout << "1 . Index Degeri : " << array[0][0] << endl;
   cout << "2 . Index Degeri : " << array[0][1] << endl;
   cout << "3 . Index Degeri : " << array[1][0] << endl;
   cout << "4 . Index Degeri : " << array[1][1] << endl;*/

   /*int matris[2][2] = {{1,2} , {3,4}};


   for (int i = 0; i < 2; i++)
   {
       
       for (int j = 0; j < 2; j++)
       {
          cout << "Index : " << matris[i][j] << endl;
       }
       

   }*/


  /*int matris[2][2];


  for (int i = 0; i < 2; i++)
  {
     
     for (int a = 0; a < 2; a++)
     {
        

        cin >> matris[i][a];

     }
     

  }
  
  for (int i = 0; i < 1; i++)
  {
     
    cout << "Index Degeri : " << matris[0][0] << endl;
    cout << "Index Degeri : " << matris[0][1] << endl;
    cout << "Index Degeri : " << matris[1][0] << endl;
    cout << "Index Degeri : " << matris[1][1] << endl;
   

   
  }*/
  
    
    /*int array[2][2];


    for (int i = 0; i < 4; i++)
    {
      
      
      array[i][i] = i;


    }
    
    for (int i = 0; i < 4; i++)
    {
        
      cout << "Index Degeri : " << array[i][i] << endl;

    }
    */

    //////////////////////////////////////////////////////////////



    //cafer();

    // karesi(4);

  // cout << "Karesi : " << rfonksiyon(4) << endl;

 // cout << "Toplama : " << toplamas(5 , 6) << endl;
    

    //toplama();

     /*int a; 

     cout << "Sayi :  " ;

     cin >> a;
  
      faktoriyel(a);*/

     
      
      //////////////////////////////////////////////////////////////////////
    
      // cout << "Karesi : " << rfonksiyon(4) << endl;

     // cout << "Toplama : " << toplamas(5 , 6) << endl;

     //cout << abc(1,5,7) << endl;
    
   
  
    ///////////////////////////////////////////////////////////////////////////
    /*int sayi;

    srand(time(NULL));
    sayi = rand() %100;

    cout << "Random Sayi : " << sayi << endl;*/

    
   /* int kullanicisayisi,rastgelesayi;
    
    while (true)
    {
      
    cout << "Sayinizi Giriniz : " ;

    cin >> kullanicisayisi;

    srand(time(NULL));

    rastgelesayi = rand()%6 ;
        
     if (kullanicisayisi == rastgelesayi)
    {
      cout << "Dogru Bildiniz! Kutlariz." << endl;
      cout << "Sizin Tahmin Ettiginiz Sayi : " << kullanicisayisi << endl;
      cout << "Cekilen Sayi :  " << rastgelesayi << endl;
      break;
    }
    else if (kullanicisayisi != rastgelesayi)
    {
      cout << "Yanlis Bildiniz." << endl;
      cout << "Sizin Tahmin Ettiginiz Sayi : " << kullanicisayisi << endl;
      cout << "Cekilen Sayi :  " << rastgelesayi << endl;
    }
 
    }*/
    

    ////////////////////////////////////////////////////////////////////////////////////

    /*int a = 4;

    int *ptr = &a;
     
    
    cout << "A Adresi : " << &a << endl; 
    cout << "Pointer :  " << ptr << endl;
    cout << "A Degeri : " << *ptr << endl;

    *ptr = 7;

    cout << "A Adresi : " << &a << endl; 
    cout << "Pointer " << ptr << endl;
    cout << "A Degeri : " << *ptr << endl;*/

    /*tring meyve = "Elma";

    string *ptr = &meyve;

    cout << "Degeri : " << *ptr << endl;
    cout << "Adresi : " << &meyve << endl;
    cout << "Meyve : " << meyve << endl;

    *ptr = "Armut";

    cout << "Meyve : " << &meyve << endl;*/

    /* int b = 5;

     cout << "Deger : " << b << endl;

     degerdegistir(&b);

     cout << "Deger : " << b << endl;*/
    
    /*int arrayim[4] = {5,6,7,8};

    int *ptr = &arrayim[1];

    
    cout << "ptr : " << ptr << endl;
    cout << "ptr2 : " << *ptr << endl;*/


    /*string arraya[3] = {"Erdem","Emir","Deniz"};

    string *ptr = arraya;

    cout << "PTR : " << *ptr << endl;
    cout << "PTR : " << *(ptr + 1) << endl;*/

    /*int arraylar[4] = {66,77,88,99};

    int *ptr = arraylar;


    cout << "Sayilar : " << *ptr << endl;
    cout << "2.Sayi : " << *(ptr + 1) << endl;
    cout << "3.Sayi : " << *(ptr + 2) << endl;
    cout << "4.Sayi : " << *(ptr + 3) << endl;*/


    ///////////////////////////////////////////////////////////////

    //int a = 10;

    //int &ref = a;

    //ref++;

    //cout << "A : " << a << endl;
    
    
    /*int a = 100;

    reflifo(a);
  
     cout << "A : " << a << endl;*/

} 