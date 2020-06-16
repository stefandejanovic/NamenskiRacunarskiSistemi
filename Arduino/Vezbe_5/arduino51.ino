﻿/*	Konfiguracija sistema:Pin 2: ulazni pin, dugmePinovi 6-13, izlazni pinovi, LED displeyPinovi 3 i 4, CS* za led displey*/int count;int old_state, new_state, time;void setup(){	pinMode(2, INPUT);	old_state = digitalRead(2);	int i;	for (i=6; i<14; i++){		pinMode(i, OUTPUT);		digitalWrite(i, LOW);	}	pinMode(3, OUTPUT);	digitalWrite(3, LOW);	pinMode(4, OUTPUT);	digitalWrite(4, LOW);	count=0;	time = millis();}void prikaziCifru(int cifra, int pin){	int i;	for(i=0; i<4; i++){		digitalWrite(pin+i, cifra%2);		cifra /= 2; 	}}void prikazi(int count) {	prikaziCifru(count%10, 6);	prikaziCifru((count/10)%10, 10);}void button() {	new_state = digitalRead(2);	if (new_state==1 && old_state == 0)	{	// dugme je upravo pritisnuto		time = millis();	}	else if (new_state == 0 && old_state == 1)	{   // dugme je upravo pusteno		if (millis()-time>1000)			count += 1;	}	old_state = new_state;	prikazi(count);}void loop(){	button();		delay(100);}