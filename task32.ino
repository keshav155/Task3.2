

int led1 = D6; 
int led2 = D5;
int led3 = D4;


void setup() {


  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Particle.function("led",led);

}


void loop() {



}
int led(String input)
{
    if(input == "one")
    {
        digitalWrite(led1,HIGH);
        
    }
    if(input == "two")
    {
        digitalWrite(led2,HIGH);
    }
    if(input == "three")
    {
        digitalWrite(led3,HIGH);
    }
    if(input == "1")
    {
        digitalWrite(led1,LOW);
        
    }
    if(input == "2")
    {
        digitalWrite(led2,LOW);
    }
    if(input == "3")
    {
        digitalWrite(led3,LOW);
    }
    
}