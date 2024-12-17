float valor_alcohol;

void setup() { 
  Serial.begin(9600);               
  pinMode(13, OUTPUT);              
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() { 
  valor_alcohol = analogRead(A0);
  Serial.println(valor_alcohol);  
  
  float porcentaje = (valor_alcohol / 1000);  
  Serial.println(porcentaje); 
  Serial.println(' '); 
  
  if (valor_alcohol > 800) {    
    tone(13, 1000); 
    digitalWrite(12, HIGH); 
  } else {                                
    if (valor_alcohol > 500) {
      digitalWrite(11, HIGH); 
    } else {
      digitalWrite(10, HIGH); 
    }
  }
  
  
  delay(400);
  digitalWrite(12, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(10, LOW); 
  noTone(13); 

  
}
