
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int count;

void setup()
{
	count=0;
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(11, OUTPUT); 
	digitalWrite(11, LOW); 
}

void loop()
{
	if(count==0){
		digitalWrite(2, LOW);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(count==1){
		digitalWrite(2, HIGH); 
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(count==2){
		digitalWrite(2, LOW); 
		digitalWrite(3, HIGH);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(count==3){
		digitalWrite(2, HIGH); 
		digitalWrite(3, HIGH);
		digitalWrite(4, LOW);
		digitalWrite(5, LOW);
	}
	if(count==4){
		digitalWrite(2, LOW); 
		digitalWrite(3, LOW);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(count==5){
		digitalWrite(2, HIGH);
		digitalWrite(3, LOW);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(count==6){
		digitalWrite(2, LOW);
		digitalWrite(3, HIGH);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(count==7){
		digitalWrite(2, HIGH);
		digitalWrite(3, HIGH);
		digitalWrite(4, HIGH);
		digitalWrite(5, LOW);
	}
	if(count==8){
		digitalWrite(2, LOW);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, HIGH);
	}
	if(count==9){
		digitalWrite(2, HIGH);
		digitalWrite(3, LOW);
		digitalWrite(4, LOW);
		digitalWrite(5, HIGH);
	}
	delay(1000);
	count=count+1;
	if(count == 10)
		count = 0;
}
