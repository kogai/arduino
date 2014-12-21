const int LED = 9;
const int BUTTON = 7;
boolean state = true;

int brightness = 0;

void setup(){
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
}

void loop(){
    Serial.println( brightness );
	if(state == true){
		analogWrite(LED, brightness);
		brightness++;
		delay(50);
		if( brightness >= 50 ){
			state = false;
			delay(500);
		}
	}else{	
		analogWrite(LED, brightness);
		brightness--;
		delay(50);
		if( 0 => brightness ){
			state = true;
			delay(500);
		}
	}
}