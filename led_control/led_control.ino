volatile int value1 = 0; 
int val;//定义数字变量val

int LED1=2;
int LED2=3;
int LED3=4;
int ballswitch=5;


void setup() {
  // put your setup code here, to run once:
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
   pinMode(LED3,OUTPUT);
   pinMode(ballswitch,INPUT);//定义倾斜开关传感器为输出接口
  
}

void loop() {
  //倾斜开关控制LED1亮灭
  val=digitalRead(ballswitch);
  if(val==HIGH) digitalWrite(LED1,LOW);
  else digitalWrite(LED1,HIGH);

  
  value1 = analogRead(A0); 
  Serial.print(value1, DEC); 
  delay(100);
  
  /*
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  */
}
