const int LED = 13;
const int BUTTON = 7;

int val = 0;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop()
{
	val = digitalRead(BUTTON);
	if(digitalRead(BUTTON) == 'HIGH'){
		digitalWrite(LED,HIGH);
	}else{
		digitalWrite(LED,LOW);
	}
}