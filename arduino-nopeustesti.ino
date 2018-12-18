void setup() {
Serial.begin(9600);
Serial.println("Aloitetaan!");
}

void loop() {
  long alku, loppu, aika;
  alku=millis();
  for (long i=0; i<1000000; i++) {
    long j=(long)millis();
    j=i+j;
  }
  loppu=millis(); 
  aika=loppu-alku;
  Serial.println("yhteenlasku");
  Serial.println(aika);
  
  alku=millis();
  for (float i=0; i<1000000; i++) {
    float j=millis()/3.14159265;
  }
  loppu=millis();
  aika=loppu-alku;
  Serial.println("jakolasku");
  Serial.println(aika);
  
}
