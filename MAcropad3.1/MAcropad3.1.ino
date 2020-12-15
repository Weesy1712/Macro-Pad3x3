int r = 60; 

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

void setup(){
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

void loop(){
  Mouse.begin(); 
  Keyboard.begin();
  digitalWrite(led_red,HIGH);
  //Button1
  if(digitalRead(btn1) == 0){
delay(200); 

Mouse.move(r/2,0,0);
  delay(50);

   Mouse.press(MOUSE_LEFT); 
  Mouse.move(-r/2,0,0);
  delay(50);
  Mouse.move(r,0,0); 
    delay(50);

  Mouse.move(0,-r,0); 
    delay(50);

  Mouse.move(-r,0,0); 
    delay(50);

  Mouse.move(0,r,0); 
  Mouse.release(MOUSE_LEFT); 
 
 
 digitalWrite(led_blue,HIGH);        
  }else{
   
    digitalWrite(led_blue,LOW);
  }
  //Button2
  if(digitalRead(btn2) == 0){
    delay(200); 
    Mouse.move(r/2,0,0);
  delay(50);

   Mouse.press(MOUSE_LEFT);
   Mouse.move(-r/2,0,0);
     delay(r/2);

Mouse.move(r,0,0); 
  delay(50);

Mouse.move(-r/2,-r,0); 
  delay(50);

Mouse.move(-r/2,r,0);

     Mouse.release(MOUSE_LEFT); 

  
        digitalWrite(led_blue,HIGH);        

  }else{
   
        digitalWrite(led_blue,LOW);

  }
  //Button3
  if(digitalRead(btn3) == 0){
    int radius = r/2; 
    

delay(200); 

Mouse.move(r/2,0,0);
  delay(50);

   Mouse.press(MOUSE_LEFT); 
  for(int i = 0; i<= 360 ; i++){
    Mouse.move(1,-1,0);
    
  }
  Mouse.release(MOUSE_LEFT); 
      
       
         digitalWrite(led_blue,HIGH);


  }else{
    
        digitalWrite(led_blue,LOW);

  }
  //Button4
  if(digitalRead(btn4) == 0){
     
        digitalWrite(led_blue,HIGH);

        

  }else{
    
      digitalWrite(led_blue,LOW);
  }
  //Button5
  if(digitalRead(btn5) == 0){
     Keyboard.press('s');
        digitalWrite(led_blue,HIGH);

        

  }else{
    Keyboard.release('s');
        digitalWrite(led_blue,LOW);

  }
  //Button6
  if(digitalRead(btn6) == 0){
     
       
         digitalWrite(led_blue,HIGH);


  }else{
    Keyboard.release('d');
        digitalWrite(led_blue,LOW);

  }
  //Button7
  if(digitalRead(btn7) == 0){

        Keyboard.press(KEY_LEFT_CTRL);
 Keyboard.press(KEY_ESC);
 delay(100);
 Keyboard.releaseAll(); 
 delay(100);
 Keyboard.print("Chrome"); 
 delay(100);
 Keyboard.press(KEY_RETURN); 
 delay(100);
 Keyboard.release(KEY_RETURN); 
 delay(500);
 Keyboard.print("www3.lernplattform.schule.at&htlms&course&view.php_id)1516"); 
  Keyboard.press(KEY_RETURN); 
 delay(100);
 Keyboard.release(KEY_RETURN); 
 
  digitalWrite(led_blue,HIGH);
  }else{
    Keyboard.release(KEY_LEFT_SHIFT);
        digitalWrite(led_blue,LOW);
  }
  //button8
  if(digitalRead(btn8) == 0){
   
    delay(100) ;
      r = r+5; 
       
        digitalWrite(led_blue,HIGH);

    }else{
        digitalWrite(led_blue,LOW);

    }
    //Button9
  if(digitalRead(btn9) == 0){
    delay(100) ;
      r = r-5; 
       
         digitalWrite(led_blue,HIGH);


  }else{
        digitalWrite(led_blue,LOW);

  }
Keyboard.end(); 
Mouse.end(); 
}
