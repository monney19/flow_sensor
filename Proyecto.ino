
int PinSensor = 36 ;
float caudal = 0;
float volumen = 0;
int cont = 0;

void setup() 
{  
  Serial.begin(9600); 
  pinMode(PinSensor, INPUT); 
} 

void loop ()    
{
   //Leemos adc
  caudal = analogRead(PinSensor)*0.0073;
  //volumen
    volumen = (caudal/120)+volumen; //paso a litros por segundo


   //Enviamos por el puerto serial
  Serial.print("Caudal: "); 
  Serial.print(caudal); 
  Serial.println(" l/min");
  Serial.print("Consumo: "); 
  Serial.print(volumen); 
  Serial.println(" l"); 
  delay(500);
 
  
}
