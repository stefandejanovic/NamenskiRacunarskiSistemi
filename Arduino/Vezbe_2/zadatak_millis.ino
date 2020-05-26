
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int count;
bool btn;
unsigned long time1;
void setup()
{
	count=0;
	btn = false;
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(11, OUTPUT); 
	pinMode(6, INPUT);
	digitalWrite(11, LOW);
}

void loop()
{
	delay(100);
  if( digitalRead(6) )
  {
    if(!btn)
    {
      time1 = millis();     
      btn = true;          
    }
    else
    {
      if( millis() - time1 > 2000 )
        count = count + 1;
    }
  }
  else
  {
    btn = false;
  }
}
