void setup() {
Serial.begin(9600);
Serial.println("Aloitetaan!");
}

void loop() {
  long alku, loppu, aika, laskutoimituksia, kokonaislukulaskentanopeus, liukulukulaskentanopeus;
  laskutoimituksia=1000000;
  
  // Kokonaislukulaskentanopeuden mittaus
  alku=millis();
  for (long i=0; i<laskutoimituksia; i++) {
    long j=(long)millis();
    j=i+j;
  }
  loppu=millis(); 
  aika=loppu-alku;
  Serial.print("Yhteenlasku: ");
  Serial.print(aika);
  Serial.println(" millisekuntia / miljoona kokonaislukulaskutoimitusta");
  Serial.print("Kokonaislukulaskentanopeus: ");
  kokonaislukulaskentanopeus = laskutoimituksia / aika;
  Serial.print(kokonaislukulaskentanopeus);
  Serial.println(" tuhatta kokonaislukulaskua sekunnissa (OPS).");
  
  // Liukulukulaskentanopeuden mittaus
  alku=millis();
  for (float i=0; i<laskutoimituksia; i++) {
    float j=millis()/3.14159265;
  }
  loppu=millis();
  aika=loppu-alku;
  Serial.print("Jakolasku: ");
  Serial.print(aika);
  Serial.println (" millisekuntia / miljoona liukulukulaskutoimitusta");
  Serial.print("Liukulukulaskentanopeus: ");
  liukulukulaskentanopeus = laskutoimituksia / aika;
  Serial.print(liukulukulaskentanopeus);
  Serial.println(" tuhatta liukulukulaskua sekunnissa (FLOPS).");
}
