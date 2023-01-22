// C++ code
//
void setup() {
  
	pinMode(8, OUTPUT);
  
  	pinMode(10, OUTPUT);
  
}

void loop()	{
  
  int tempo = 2000; // 2 segundos
  int tempoRapido = 200; // 200 nano segundos
  
    digitalWrite(10, LOW);
	digitalWrite(8, HIGH);
  
  	delay(tempo);
  
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
  
  	delay(tempo);
}