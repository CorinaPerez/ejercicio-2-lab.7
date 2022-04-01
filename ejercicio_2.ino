int led=13;
int input;
void setup(){
  Serial.begin(9600);
}
 
void loop(){
  if (Serial.available()>0){
 
    input=Serial.read();
 
    Serial.println(input);
  pinMode(13, OUTPUT); 
  Serial.begin(9600);
  }

  if (Serial.available()>0){
 
    input=Serial.read();
 
    if (input=='1'){
 
      digitalWrite(13, HIGH); //Si el valor de input es 1, se enciende el led
 
    }
 
    else
 
    {
 
      digitalWrite(13, LOW); //Si el valor de input es diferente de 1, se apaga el LED
 
    }
 
  }
}
