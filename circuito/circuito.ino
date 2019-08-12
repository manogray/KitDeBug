
char comando;
int leitura;

void setup(){
  Serial.begin(9600);
  Serial.print("o");
}

void loop(){
  
  if(Serial.available() > 0){
    comando = Serial.read();
  }
      
  if(comando == 'r'){
    leitura = analogRead(A0);
    Serial.println(leitura);
  }
  
  delay(500);
  
}
