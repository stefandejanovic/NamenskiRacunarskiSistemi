
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

void setup()
{
	Serial.begin(9600);
}

void loop() 
{
	// send data only when you receive data:
	if (Serial.available() > 0) 
	{
		// read the incoming byte:
		char inByte = Serial.read();
		Serial.write(inByte);
	}
	
}
