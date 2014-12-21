const int LED = 9;
const int BUTTON = 7;

int i = 0;

void setup(){

	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop(){
	for ( i = 0; i < 255; ++i)
	{
		analogWrite(LED, i);
		delay(25);
	}
	for ( i = 255; i > 0; i--)
	{
		analogWrite(LED, i);
		delay(25);
	}
}