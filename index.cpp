#include <iostream>
#include <string.h>
#include <math.h>
#include <random>
#include <time.h>
using namespace std;
int main(){


   int kullaniciSayisi1,kullaniciSayisi2,kullaniciSayisi3; 
   int randomSayi1,randomSayi2,randomSayi3;
   int puan = 0;
   int tamGalibiyet = 3;
   int yariGalibiyet = 2;
   int yariMaglubiyet = -1;
   int tamMaglubiyet = -2;
   int min = 1;
   int max = 10;
  
   char devam;
 
 

   cout << "Birinci Sayiyi Giriniz : " ;

   cin >> kullaniciSayisi1;

   cout << "Ikinci Sayiyi Giriniz : " ;

   cin >> kullaniciSayisi2;

   cout << "Ucuncu Sayiyi Giriniz : " ;

   cin >> kullaniciSayisi3;

   cout << "  | ____?____ |   | ____?____ |   | ____?____ | " << endl;

   srand(time(NULL) + clock());

   randomSayi1 = rand() % (max - min + 1);
   randomSayi2 = rand() % (max - min + 1);
   randomSayi3 = rand() % (max - min + 1);

   if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

     cout << "Kazandiniz!" << endl;

     puan += tamGalibiyet;

     cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

     cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

     cout << "Puan : " << puan << endl;
     
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

    cout << "2/3 Yaptiniz!" << endl;

    puan += yariGalibiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

    cout << "2/3 Yaptiniz!" << endl;

    puan += yariGalibiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "2/3 Yaptiniz!" << endl;

    puan += yariGalibiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

    cout << "1/3 Yaptiniz!" << endl;

    puan += yariMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "1/3 Yaptiniz!" << endl;

    puan += yariMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "1/3 Yaptiniz!" << endl;

    puan += yariMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "Kaybettiniz!" << endl;

    puan += tamMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }

      
   cout << "Devam Etmek Istiyor Musunuz : (E) , (H) " ;

   cin >> devam;


   while (devam == 'E'  ||  devam == 'e')  
   {

   cout << "Birinci Sayiyi Giriniz : " ;

   cin >> kullaniciSayisi1;

   cout << "Ikinci Sayiyi Giriniz : " ;

   cin >> kullaniciSayisi2;

   cout << "Ucuncu Sayiyi Giriniz : " ;

   cin >> kullaniciSayisi3;

   cout << "  | ____?____ |   | ____?____ |   | ____?____ | " << endl;

   srand(time(NULL) + clock());

   randomSayi1 = rand() % (max - min + 1);
   randomSayi2 = rand() % (max - min + 1);
   randomSayi3 = rand() % (max - min + 1);

   if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

     cout << "Kazandiniz!" << endl;

     puan += tamGalibiyet;

     cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

     cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

     cout << "Puan : " << puan << endl;
     
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

    cout << "2/3 Yaptiniz!" << endl;

    puan += yariGalibiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

    cout << "2/3 Yaptiniz!" << endl;

    puan += yariGalibiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "2/3 Yaptiniz!" << endl;

    puan += yariGalibiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 == kullaniciSayisi3))
   {

    cout << "1/3 Yaptiniz!" << endl;

    puan += yariMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 == kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "1/3 Yaptiniz!" << endl;

    puan += yariMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 == kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "1/3 Yaptiniz!" << endl;

    puan += yariMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }
   else if ((randomSayi1 != kullaniciSayisi1) && (randomSayi2 != kullaniciSayisi2) && (randomSayi3 != kullaniciSayisi3))
   {

    cout << "Kaybettiniz!" << endl;

    puan += tamMaglubiyet;

    cout << "Sizin Tahminleriniz : " << "\t" << kullaniciSayisi1  << "\t" << kullaniciSayisi2  << "\t" << kullaniciSayisi3 << endl;

    cout << "Cevaplar : " << randomSayi1  << "\t" << randomSayi2  << "\t" << randomSayi3 << endl;

    cout << "Puan : " << puan << endl;
    
   }

      
   cout << "Devam Etmek Istiyor Musunuz : (E) , (H) " ;

   cin >> devam;

   }
   
   cout << "Puan : " << puan  << endl;  
   
       
     

      
       
      
      


 

}
