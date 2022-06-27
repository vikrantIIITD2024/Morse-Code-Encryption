// C++ code
//
int l1 = 7;
int l2 = 6;
int h = 1000; // high
int d = 2000; //delay

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter your Message:" );
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  
}

void loop()
{
  
  // String s = Serial.readString(); When u need to take input from the user then uncomment the line number 20
  String s = "All is well";
  for(int i=0;i<s.length();i++){
  	letter(s[i]);
  } 
}
void letter(char c)
{
  if(c == 'A' || c == 'a'){
	led1();
    led2();
  }
  if(c == 'B' || c == 'b'){
	led2();
    led1();
    led1();
    led1();
  }
  if(c == 'C' || c == 'c'){
	led2();
    led1();
    led2();
    led1();
  }
  if(c == 'D' || c == 'd'){
	led2();
    led1();
    led1();
  }
  if(c == 'E' || c == 'e'){
	led1();
  }
  if(c == 'F' || c == 'f'){
	led1();
    led1();
    led2();
    led1();
  }
  if(c == 'G' || c == 'g'){
	led2();
    led2();
    led1();
  }
  if(c == 'H' || c == 'h'){
	led1();
    led1();
    led1();
    led1();
  }
  if(c == 'I' || c == 'i'){
	led1();
    led1();
  }if(c == 'J' || c == 'j'){
	led1();
    led2();
    led2();
    led2();
  }
  if(c == 'K' || c == 'k'){
	led2();
    led1();
    led2();
  }
  if(c == 'L' || c == 'l'){
	led1();
    led2();
    led1();
    led1(); 
 

  }
  if(c == 'M' || c == 'm'){
	led2();
    led2();
  }
  
  if(c == 'N' || c == 'n'){
	led2();
    led1();
  }
  if(c == 'O' || c == 'o'){
	led2();
    led2();
    led2();
  }
  if(c == 'P' || c == 'p'){
	led1();
    led2();
    led2();
    led1();
  }
  if(c == 'Q' || c == 'q'){
	led2();
    led2();
    led1();
    led2();
  }
  if(c == 'R' || c == 'r'){
	led1();
    led2();
    led1();
  }
  if(c == 'S' || c == 's'){
	led1();
    led1();
    led1();
  }
  if(c == 'T' || c == 't'){
	led2();
  }
  if(c == 'U' || c == 'u'){
	led1();	
    led1();
    led2();
  }
  if(c == 'V' || c == 'v'){
	led1();
    led1();
    led1();
    led2();
  }
  if(c == 'W' || c == 'w'){
	led1();
   	led2();
   	led2();
  }
  if(c == 'X' || c == 'x'){
	led2();
    led1();
    led1();
    led2();
  }
  if(c == 'Y' || c == 'y'){
	led2();
    led1();
    led2();
    led2();
  }
  if(c == 'Z' || c == 'z'){
	led2();
    led2();
    led1();
   	led1();
    
  }
  if(c == ' ')
  {
    delay(4000);
  }
  if(c==1){
  	led1();
  	led2();
  	led2();
  	led2();
  	led2();
  }
  
  if(c==2){
  	led1();
  	led1();
    led2();
    led2();
    led2();
  }
 
  
}
void led1(){
  	digitalWrite(l1, HIGH); //  led1 glow
    delay(1000);
    digitalWrite(l1, LOW); //led1 off
    delay(2000);
}
void led2(){
  	digitalWrite(l2, HIGH); //led2 glow 
    delay(2000);
    digitalWrite(l2, LOW); //led2 off
    delay(2000);
}
  