
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int value;
char inByte;
void setup()
{
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(11, OUTPUT); 
	digitalWrite(11, LOW); 
	Serial.begin(9600);
}

void loop() 
{
	// send data only when you receive data:
	if (Serial.available() > 0) 
	{
		// read the incoming byte:
		inByte = Serial.read();
		value = inByte - '0';
		if(value >= 0 && value < 10)
		{
			printLedNumber(value);
		}
		else
		{
			printLedNotNumber();
		}
	}
	
}

void printLedNumber(int value)
{
	if(value==0){
		digitalWrite(2, LOW);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(value==1){
		digitalWrite(2, HIGH); 
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(value==2){
		digitalWrite(2, LOW); 
		digitalWrite(3, HIGH);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(value==3){
		digitalWrite(2, HIGH); 
		digitalWrite(3, HIGH);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(value==4){
		digitalWrite(2, LOW); 
		digitalWrite(3, LOW);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(value==5){
		digitalWrite(2, HIGH);
		digitalWrite(3, LOW);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(value==6){
		digitalWrite(2, LOW);
		digitalWrite(3, HIGH);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(value==7){
		digitalWrite(2, HIGH);
		digitalWrite(3, HIGH);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(value==8){
		digitalWrite(2, LOW);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, HIGH);
	}
	if(value==9){
		digitalWrite(2, HIGH);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, HIGH);
	}
}

void printLedNotNumber()
{
	digitalWrite(2, HIGH);
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
}

