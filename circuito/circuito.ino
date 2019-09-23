
char circuito;
int leitura;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  if(Serial.available() > 0){
    circuito = Serial.read();
  }
      
  if(circuito == 'v'){
    leitura = analogRead(A0);
    Serial.println(leitura);
  }
  
  if(circuito == 'a'){
    leitura = analogRead(A1);
    Serial.println(leitura);
  }
  
  delay(300);
  
}
