void setup() {
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);


}

void loop() {
 String girilen_deger="";
 if(Serial.available()){
 girilen_deger=Serial.readString();
 Serial.print("Girilen Değer:");
 Serial.println(girilen_deger);}
if(girilen_deger=="kirmizi"){

   digitalWrite(3,1);
   delay(3000);
   digitalWrite(3,0);
}
  
 if(girilen_deger=="sari"){
  digitalWrite(4,1);
  delay(3000);
  digitalWrite(4,0);
  }
  
}
