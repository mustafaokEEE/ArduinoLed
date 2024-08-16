int ledPin=13; // ledin 13 no'lu pinde olduğunu ledPin değişkenine atadık
bool ledBlink=false; // bool türünde true false döndüren değişkeni tanımladık.
void setup() 
{
  pinMode(ledPin,OUTPUT); // ledPin'in çıkış pini olduğunu belirttik.
}
void loop ()
{ if(ledBlink==false) // eğer ledBlink false ise aşağıdaki olaylar olmaya başlar
  { for (int i=0; i<10; i++)
    {
      digitalWrite(ledPin,HIGH); // 13 no'lu ledPin bacağının enerjilenmesini sağlar
       delay(500); // 0.5 sn gecikme
      digitalWrite(ledPin,LOW); // 13 no'lu ledPin bacağının enerjisiz olmasını sağlar.
        delay(500); // 0.5 sn gecikme
    } 
  ledBlink=true; // for koşulları saglandıktan sonra bool true döner.
    if(ledBlink==true) // eger koşul saglandıysa ledi kapatır.
      {
        digitalWrite(ledPin,LOW);
      }
  }
}