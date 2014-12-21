const int LED = 13;
const int LED2 = 9;
const int BUTTON = 7;

int i = 0;

void setup(){

	pinMode(LED2, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop(){
	for ( i = 0; i < 255; ++i)
	{
		analogWrite(LED2, i);
		delay(25);
	}
	for ( i = 255; i > 0; i--)
	{
		analogWrite(LED2, i);
		delay(25);
	}
}