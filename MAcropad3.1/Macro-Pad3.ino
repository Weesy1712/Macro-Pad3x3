#include <Keyboard.h> 
#include <Mouse.h>
#define led_red 3
#define led_green 5
#define led_blue 6
#define btn1 2
#define btn2 4
#define btn3 7
#define btn4 8
#define btn5 9
#define btn6 10
#define btn7 16
#define btn8 14
#define btn9 15
void setup(); 
void loop(); 
void setup() {
 pinMode(led_red, OUTPUT);
 pinMode(led_green, OUTPUT);
 pinMode(led_blue, OUTPUT);
pinMode(btn1 ,INPUT_PULLUP);
pinMode(btn2 ,INPUT_PULLUP);
pinMode(btn3 ,INPUT_PULLUP);
pinMode(btn4 ,INPUT_PULLUP);
pinMode(btn5 ,INPUT_PULLUP);
pinMode(btn6 ,INPUT_PULLUP);
pinMode(btn7 ,INPUT_PULLUP);
pinMode(btn8 ,INPUT_PULLUP);
pinMode(btn9 ,INPUT_PULLUP);

}

void loop() {
  Mouse.begin(); 
  Keyboard.begin();
  digitalWrite(led_red,HIGH);
  //Button1



 if(digitalRead(btn1) == 0){
   digitalWrite(led_blue,HIGH);
   Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F1);  
  delay(200); 
  Keyboard.releaseAll();     
  }else{
    
   Keyboard.releaseAll(); 
    digitalWrite(led_blue,LOW);
  }
  //Button2
  
  if(digitalRead(btn2) == 0){
     digitalWrite(led_blue,HIGH);
 Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
   delay(200); 
  Keyboard.releaseAll();   
  }else{
   
        digitalWrite(led_blue,LOW);

  }
  //Button3
  if(digitalRead(btn3) == 0){
    digitalWrite(led_blue,HIGH);
 Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F3);
   delay(200); 
  Keyboard.releaseAll();   
       
         


  }else{
    
        digitalWrite(led_blue,LOW);

  }
  //Button4
  if(digitalRead(btn4) == 0){
     digitalWrite(led_blue,HIGH);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
   delay(200); 
  Keyboard.releaseAll();   
     
  }else{
    
      digitalWrite(led_blue,LOW);
  }
  //Button5
  if(digitalRead(btn5) == 0){
     digitalWrite(led_blue,HIGH);
     Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F5);
   delay(200); 
  Keyboard.releaseAll();   
     

  }else{
    
        digitalWrite(led_blue,LOW);

  }
  //Button6
  if(digitalRead(btn6) == 0){
     digitalWrite(led_blue,HIGH);
    Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F6);
   delay(200); 
  Keyboard.releaseAll();   
     
  }else{
    
        digitalWrite(led_blue,LOW);

  }
  //Button7
  if(digitalRead(btn7) == 0){
     digitalWrite(led_blue,HIGH);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F7);
   delay(200); 
  Keyboard.releaseAll();   
     
       
  
  }else{
    
        digitalWrite(led_blue,LOW);
  }
  //button8
  if(digitalRead(btn8) == 0){
     digitalWrite(led_blue,HIGH);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F8);
   delay(200); 
  Keyboard.releaseAll();   
     
       

    }else{
        digitalWrite(led_blue,LOW);
        
    }
    //Button9
  if(digitalRead(btn9) == 0){
     digitalWrite(led_blue,HIGH);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F9);
   delay(200); 
  Keyboard.releaseAll();   
     
       
         


  }else{
        digitalWrite(led_blue,LOW);

  }
Keyboard.end(); 
Mouse.end(); 
}
