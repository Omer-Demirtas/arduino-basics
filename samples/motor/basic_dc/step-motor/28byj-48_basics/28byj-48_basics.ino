/*
  28BYJ-48 Step Motor ve ULN2003 Sürücü Kartı Arduino ile Nasıl Kullanılır?
 
  28BYJ-48 Step Motor ve ULN2003 Sürücü Kartının detaylı açıklaması ve örnek projelerini
  web sitemizde bulabilirsiniz.
 
  Mete Hoca
  https://www.metehoca.com/
*/
 
int IN1 = 4;           // Motor sürücüye bağlanan pinleri tanımlıyoruz
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
 
int tamtur = 2048;      // 28BYJ-48 motoru tam turunu 2048 adımda tamamlıyor
 
void setup() {
  pinMode(IN1, OUTPUT); // Pinleri çıkış olarak ayarlıyoruz
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}
 
void loop() {
  sol(1);      // Sola tam tur dönelim ve bekleme 2 olsun
  delay(1000); // Döndükten sonra biraz bekleyelim
  sag(1);      // Sağa tam tur dönelim ve bekleme 1 olsun
  delay(1000); // Döndükten sonra biraz bekleyelim
}
 
void sol(int bekle) {    // Sola dönüş fonksiyonu
  int i = 0;
  while(i < tamtur / 4){
    gonder(1,0,0,0);     // Pinleri belirli bir sırayla ayarlıyoruz
    delay(bekle);
    gonder(1,1,0,0);
    delay(bekle);
    gonder(0,1,0,0);
    delay(bekle);
    gonder(0,1,1,0);
    delay(bekle);
    gonder(0,0,1,0);
    delay(bekle);
    gonder(0,0,1,1);
    delay(bekle);
    gonder(0,0,0,1);
    delay(bekle);
    gonder(1,0,0,1);
    delay(bekle);
    i++;
  }
}
 
void sag(int bekle) {    // Sağa dönüş fonksiyonu
  int i = 0;
  while(i < tamtur / 4){
    gonder(1,0,0,1);     // Pinleri sola dönüşün tam tersine ayarlıyoruz
    delay(bekle);
    gonder(0,0,0,1);
    delay(bekle);
    gonder(0,0,1,1);
    delay(bekle);
    gonder(0,0,1,0);
    delay(bekle);
    gonder(0,1,1,0);
    delay(bekle);
    gonder(0,1,0,0);
    delay(bekle);
    gonder(1,1,0,0);
    delay(bekle);
    gonder(1,0,0,0);
    delay(bekle);
    i++;
  }
}
 
void gonder(int a,int b,int c,int d){ // Ayarlanan pin değerleri tek seferde gönderiliyor
  digitalWrite(IN1, a);
  digitalWrite(IN2, b);
  digitalWrite(IN3, c);
  digitalWrite(IN4, d);
}
