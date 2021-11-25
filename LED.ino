int IRSensor = 3; 
int LED = 13;

void setup() 
{
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}
bool on = false;      
void loop()
 {
 int statusSensor = digitalRead(IRSensor);
  if(statusSensor==0)
  {
      if(on==true)        
      {
        digitalWrite(LED,LOW);
        on=false;
       while(digitalRead(IRSensor)==0)
        {
         delay(10);
        }
       
      }else
      {
        digitalWrite(LED,HIGH);
        on=true;
        while(digitalRead(IRSensor)==0)
        {
          delay(10);
        }
        
      }
  }
}


  
