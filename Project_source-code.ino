#define sensor Digital 2  
#define LED 3  
#define buzzer 4  
#define sensorAnalog A1 
#define relay 5  
void setup ()  
{  
pinMode(sensorDigital, INPUT);   
pinMode(LED, OUTPUT);   
pinMode(buzzer, OUTPUT); 
pinMode(relay, OUTPUT);  
Serial.begin(9600);  
}  
void loop ()  
{  
bool digital = digitalRead(sensorDigital); 
int analog = analogRead(sensorAnalog); 
Serial.print("Analog value : ");  
Serial.print(analog);  
Serial.print("t");  
Serial.print("Digital value :");   
Serial.println(digital);  
if (digital == 0)  
{  
digitalWrite(LED, HIGH);     
digitalWrite(buzzer, HIGH);   
digitalWrite(relay, LOW); 
} 
else  
{    
  digitalWrite(LED, LOW); 
digitalWrite(buzzer, LOW);   
digitalWrite(relay, HIGH); 
} 
} 
