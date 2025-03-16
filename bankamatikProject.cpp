#include <iostream>
using namespace std;
int main(){

   


    //Basic bir bankamatik sistemi aslında
    //İlk önce kullanıcıdan istenenlerle bir login sistemi (isim,soyisim,password)
    //Kartınız İade Edebiliyorsunuz.
    //Para Yatırıp, çekebildiğiniz , doviz çeviricisi , bakiye sorgulama sistemi olan bir bankamatik
    //Ekstra olarak basit kredi başvurusu sistemi koydum(koşullu)
    //Ayrıca Kart ID Değiştirebiliyorsunuz.
    //Quit Atma Özelliği de var.
    //Önceki posta göre bunu do-while döngüsü ile yaptım (aynı olmasın diye)
    //Yaklaşık olarak 630 satır kodun tamamını tek kişi olarak ben yazdım.
    //Doviz Ceviriciyi Charlarla (Tek Harf) ile belirttim.
    //Şimdilik 5 Para Birimi Koydum.
    //isim,soyisim,şifre hatalı girilirse bir süre sonra döngüyü durduran bir sistem de var ayrıca
    
   
    int islem;
    char dovizislem;
    char parabirimi;
    int miktar;
    int kullanicininbakiyesi = 1000; 
    string yesorno ;
    string kartid = "1434";
    string newid;
    string dogrulamakartid ;
    float komisyon;
    int yillikgelir;
    float tl,euro,dolar,manat,sterlin;
    string isim = "Erdem";
    string soyisim = "Gecgel";
    string sifre = "AGXDV";
    int errornumber;
    string name,surname,password;
    
    cout << "Programa Hosgeldiniz. Lutfen Istenen Bilgilir Dogru bir Sekilde Giriniz ; Buyuk , Kucuk Harf Kullanimina Dikkat Ediniz." << endl;
    

    




    do
    {
      
      cout << "Name : " ;

      cin >> name;

      cout << "Surname : " ;

      cin >> surname;

      cout << "Password : " ;

      cin >> password;

      if ((isim == name) && (soyisim == surname) && (sifre == password))
      {
        
        cout << "Entered Account." << endl ;

        cout << "Islemler : " << endl;
        cout << "1 : Para Yatirma " << endl;
        cout << "2 : Para Cekme " << endl;
        cout << "3 : Bakiye Sorgulama " << endl;
        cout << "4 : Kart Iade " << endl;
        cout << "5 : ID Change " << endl;
        cout << "6 : Kredi Basvurusu " << endl;
        cout << "7 : Doviz Cevirici " << endl;
        cout << "8 : Quit " << endl;

    
    cout << "Isleminizi Seciniz : " << endl;
 
    cin >> islem;
    switch (islem) {
  
   case 1:

      cout << "Yatirilacak Miktar : " << endl;

      cin >> miktar;

      komisyon = (miktar * 0.01); //%1 oranında bir komisyon alınır.

      miktar -= komisyon;
       
    kullanicininbakiyesi =   kullanicininbakiyesi += miktar ;   

      cout << "Bakiyeniz : " << kullanicininbakiyesi << endl; 

      break;
   case 2:

   
      

      cout << "Cekilecek Miktar : " << endl;

      cin >> miktar;

      if (miktar > kullanicininbakiyesi) 
      {
        
        cout << "Yeterli Bakiye Yok " << endl; //Yeterli Bakiyesi yoksa parayı çekemez.
        break;
        
      }
      
      kullanicininbakiyesi -= miktar;

      cout << "Bakiyeniz : " << kullanicininbakiyesi << endl;
      break;

   case 3: 


       cout << "Bakiyeniz : " << kullanicininbakiyesi << endl;

       break;  
   case 4: 
       
       cout << "Kartinizi Iade etmek istiyor musunuz : " << endl;
           
       cin >> yesorno;

       if ((yesorno == "Evet") || (yesorno == "Yes"))
       {
         cout << "Sahip oldugunuz kart ID'nizi yaziniz : " << endl;

         cin >> dogrulamakartid;
          
         if (kartid == dogrulamakartid)
         {
            cout << "Kartiniz Iade Edilmistir." << endl;
         }
         else 
         {
           cout << "Dogrulama Sifresi Yanlis Oldugu Icin Iade Edilmedi." << endl;
         }
       }
       
       break;    

      case 5: 
         
           cout << "Sifrenizi Degistirmek Istiyor Musunuz : " ;

           cin >> yesorno;

           if ((yesorno == "Evet") || (yesorno == "Yes"))
           {
             cout << "Su anki ID Giriniz : " ;

             cin >> dogrulamakartid;

             if (dogrulamakartid == kartid)
             {
               
              cout << "Yeni ID Giriniz :  " ;

              cin >> newid;

              cout << "Yeni Sifreniz :  " << newid << endl; 

             }
             
           }
          else 
          {
            cout << "Sifre Iptal Edilmedi." << endl;
          }


        break;

      case 6:  

      cout << "Kredi Basvurusu Secenegini Sectiniz " << endl;

      cout << "Kredi Basvursunda Bulunmak Istiyor Musunuz ? " ;

      cin >> yesorno;

      if ((yesorno == "Evet") || (yesorno == "Yes" ))
      {
         cout << "Gelirinizi Yillik Olarak Giriniz : " ;

         cin >> yillikgelir;

        if ((yillikgelir > 0) &&(yillikgelir <= 600000))
        {
          cout << "İhtiyac Kredisinde Bulunabilirsiniz." ;

          cout << "İhtiyac Kredisinde Bulunacaginiz miktari giriniz : ";

          cin >> miktar;

          if ((miktar > 0) && (miktar <= 10000)) //Buradaki Sistem Tamamen Hayal Ürünüdür Herhangi bir gerçeklk taşımıyor.
          {
            cout << "2 Ay %0  faiz ile odeyebilirsiniz." << endl;;
          }
          else if ((miktar > 10000 ) && (miktar <= 25000))
          {
            cout << "5 Ay %0.50 faiz ile odeyebilirsiniz." << endl;;
          }
          else if ((miktar > 20000) && (miktar <= 30000))
          {
            cout << "6 Ay %0.75 faiz ile odeyebilirsiniz." << endl;;
          }
          else if ((miktar > 30000) && (miktar <= 40000))
          {
            cout << "8 Ay %0.80 faiz ile odeyebilirsiniz." << endl;;
          }
          else if ((miktar > 40000) && (miktar <= 50000))
          {
           cout << "10 Ay %1 faiz ile odeyebilirsiniz" << endl;
          }
          else 
          {
            cout << "İhtiyac Kredisinde Bulunamazsiniz." << endl; 
          }
         
        }

      }

      else {

          cout << "İptal Edildi " << endl;

        } 
        
       break;
        
      case 7:

     cout << "Islemler :\n 1 : TL Cevirme (T)\n 2 : Euro Cevirme (E)\n 3 : Dolar Cevirme (D)\n 4 : Manat Cevirme (M)\n 5 : Sterlin Cevirme (S)\n " << endl;

     cout << "Islemi Seciniz : ";

     cin >> dovizislem;

     switch (dovizislem)
     {
     case 'T':

         cout << "Hangi Para Birimine Donusturmek Istiyorsunuz : ";

         cin >> parabirimi;

         if (parabirimi == 'E')
         {
            cout << "Miktari Giriniz : ";

            cin >> miktar;

            euro  = miktar * 0.028;

            cout << "Total Euro Bakiyesi  : " << euro << endl;
            
         }
         else if (parabirimi == 'D')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            dolar = miktar * 0.027;

            cout << "Total Dolar Bakiyesi : " << dolar << endl;
         }
         else if (parabirimi == 'M')
         {
           
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            manat = miktar * 0.048;

            cout << "Total Manat Bakiyesi : " << manat << endl;


         }
         else if (parabirimi == 'S')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            sterlin = miktar * 0.023;

            cout << "Total Sterlin Bakiyesi : " << sterlin << endl;
         }
         else 
         {
           cout << "Tanimlanamayan İslem." << endl;
         }
         
        break;
       case 'E':
         
         cout << "Hangi Para Birimine Donusturmek İstiyorsunuz : ";

         cin >> parabirimi;

         if (parabirimi == 'T')
         {

            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            tl = miktar * 36.25;

            cout << "Total TL Bakiye : " << tl << endl;
            
         }
         else if (parabirimi == 'D')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            dolar = miktar * 1.02;

            cout << "Total Dolar Bakiye : " << dolar << endl;
         }
         else if (parabirimi == 'M')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            manat = miktar * 1.74;

            cout << "Total Manat Bakiye : " << manat << endl;
         }
         else if (parabirimi == 'S')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            sterlin = miktar * 0.84;

            cout << "Total Sterlin Bakiye : " << sterlin << endl;
         }
         else
         {
            cout << "Tanimlanamayan Islem." << endl;
         }

        break;

       case 'D':

         
         cout << "Hangi Para Birimine Donusturmek Istiyorsunuz : ";

         cin >> parabirimi;

         if (parabirimi == 'T')
         {

            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            tl = miktar * 35.50;

            cout << "Total TL Bakiye : " << tl << endl; 
            
         }
         else if (parabirimi == 'E')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            euro = miktar * 0.98;

            cout << "Total Euro Bakiye : " << euro << endl; 
         }
         else if (parabirimi == 'M')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            manat = miktar * 1.70;

            cout << "Total Manat Bakiye : " << manat << endl; 
         }
         else if (parabirimi == 'S')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            sterlin = miktar * 0.82;

            cout << "Total Sterlin Bakiye : " << sterlin << endl; 
         }
         else
         {
           cout << "Tanimlanamayan İslem." << endl;
         }

       break;
      case 'M':

         cout << "Hangi Para Birimine Donusturmek Istiyorsunuz : ";

         cin >> parabirimi;;

         if (parabirimi == 'T')
         {

            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            tl = miktar * 20.88;

            cout << "Total TL Bakiye : " << tl << endl; 
            
         }
         else if (parabirimi == 'E')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            euro = miktar * 0.58;

            cout << "Total Euro Bakiye : " << euro << endl; 
         }
         else if (parabirimi == 'D')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            dolar = miktar * 0.59;

            cout << "Total Dolar Bakiye : " << dolar << endl; 
         }
         else if (parabirimi == 'S')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            sterlin = miktar * 0.48;

            cout << "Total Sterlin Bakiye : " << sterlin << endl; 
         }
         else
         {
            cout << "Tanimlanamayan İslem." << endl;
         }
         break;
        case 'S':

         cout << "Hangi Para Birimine Donusturmek Istiyorsunuz : ";

         cin >> parabirimi;

         if (parabirimi == 'T')
         {

            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            tl = miktar * 43.19;

            cout << "Total TL Bakiye : " << tl << endl; 
            
         }
         else if (parabirimi == 'E')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            euro = miktar * 1.19;

            cout << "Total Euro Bakiye : " << euro << endl; 
         }
         else if (parabirimi == 'M')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            manat = miktar * 2.07;

            cout << "Total Manat Bakiye : " << manat << endl; 
         }
         else if (parabirimi == 'D')
         {
            cout << "Miktari Giriniz :  ";

            cin >> miktar;

            dolar = miktar * 1.22;

            cout << "Total Dolar Bakiye : " << dolar << endl; 
         }
         else
         {
            cout << "Tanimlanamayan Islem." << endl;
         }
         break;
 
     default:
       printf("Onaysiz Islem");
        break;
     }


    break;

        break;

      case 8:

        cout << "Cikis Yapmak İstiyor Musunuz : " ;

        cin >> yesorno;

        if ((yesorno == "Evet") || (yesorno == "Yes"))
        {
          cout << "Cikis Yapildi" << endl;
        }
        
          
   default:
      break;
   }
        
      break;
      }
      else if ((isim != name) && (soyisim == surname) && (sifre == password))
      {
        
        cout << "Name is wrong" ;
        errornumber++;

        if (errornumber > 3)
        {
           cout << "So Much Error. Please Wait Five Minutes And Try Again." << endl;
           break;
        }
      
      }
       else if ((isim == name) && (soyisim != surname) && (sifre == password))
      {
         cout << "Surname Is Wrong" << endl;
         errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      else if ((isim == name) && (soyisim == surname) && (sifre != password))
      {
        cout << "Password Is Wrong" << endl;
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
        
      }
      else if ((isim != name) && (soyisim != surname) && (sifre == password))
      {
        
        cout << "Name and Surname are Wrong" << endl;
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
        
      }
      else if ((isim != name) && (soyisim == surname) && (sifre != password))
      {
        cout << "Name and Password are wrong" << endl;
        
        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      else if ((isim == name) && (soyisim != surname) && (sifre != password) )
      {
        cout << "Surname and Password are Wrong " << endl;

        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      else if ((isim != name) && (soyisim != surname) && (sifre != password))
      {
       
        cout << "Name,Surname and Password are wrong " << endl;

        errornumber++;

        if (errornumber > 5)
        {
          cout << "So Much Error , Please Wait 5 Minutes and Try Again" << endl;
          break;
        }
      }
      
      

    } while (true);
    


    


 

   






 




 
  
  
  
   
  
   
   
   
  
  
  
   
  
  
   
 


}
