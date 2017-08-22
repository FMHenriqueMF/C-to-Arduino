//https://www.tinkercad.com/things/auhR4FJ6ue5-alarme-residencial/editel

int ultpush;
int tempo = 0;
int ligado = (digitalRead(12) == 1 && digitalRead(12) == ultpush);
int desligado = (digitalRead(12) == 1 && digitalRead(12) != ultpush);
int porta = digitalRead(10);
int ligades = digitalRead (12);

void setup () {
  pinMode(0, OUTPUT); //led vermelho
  pinMode(1, OUTPUT); //led amarelo
  pinMode(2, OUTPUT); //led verde
  
  pinMode(10, INPUT); //switcher
  pinMode(11, OUTPUT); //buzzer
  pinMode(12, INPUT); //pushbutton
  pinMode(13, INPUT); //sensor
  ultpush = LOW;
  digitalWrite(2,1);
  }

void loop () { 
  if (digitalRead(12) == 1 && digitalRead(12) == ultpush) {
    digitalWrite(2,1); //amarelo
    digitalWrite(1,0); //verde
    delay(500);
    ultpush = !ultpush;
    digitalWrite(0,0);
    noTone(11);
    tempo=0;
  } 
  
  if (digitalRead(12) == 1 && digitalRead(12) != ultpush){
    digitalWrite(1,1); //verde
    digitalWrite(2,0); //amarelo
    delay(500);
    ultpush = !ultpush;
    digitalWrite(0,0);
    noTone(11);
    tempo=0;
  } 
  
  //porta
  if (digitalRead(1) ==1 && digitalRead(10) ==1 ) {
  			if (tempo < 40) {
              	if (ligades == 1){
                  digitalWrite(1,0);
                  digitalWrite(2,1);
                }
        delay(250);
        tempo++;
        }
        else {
          tone(11, 100);
          digitalWrite(0,1);
          digitalWrite(11,1);
          digitalWrite(1,0);
        }
  }
  
  //janela
    if (digitalRead(13) == 1 && digitalRead(1)){
      	digitalWrite(11,1);
      	digitalWrite(0,1); //vermelho
    	  digitalWrite(1,0);
    }
}
    
