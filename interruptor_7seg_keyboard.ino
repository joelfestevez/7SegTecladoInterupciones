/*Tarea 1.7
 * Diseño Mecatrónico
 * Flores Estévez Joel de Jesús
 * González Vela Humberto
 * Hernández Alvarado Sebastián
 * Mokay Bernal Joaquín Eduardo
 */

#include <sevenSegmentDisplay.h>
#include <Keypad.h>

#define a 13
#define b 12
#define c 11
#define d 10
#define e 9
#define f 8
#define g 7

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
//define the cymbols on the buttons of the keypads
char keypadArray[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'F','0','E','D'}
};
byte rowPins[ROWS] = {6, 5, 4, 3}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {2, 1, A4, A5}; //connect to the column pinouts of the keypad

//initialize an instance of the Keypad class
Keypad myKeypad = Keypad(makeKeymap(keypadArray), rowPins, colPins, ROWS, COLS); 
//create a 7 Segment Display library intance
sevenSegmentDisplay ssd(COMMON_ANODE, 13, 12, 11, 10, 9, 8, 7, A0);

int state = 0;
int previusState = 0;
int output = 0;

void setup(){
  pinMode(0,INPUT);
}

void loop()
{
  state=digitalRead(0);
  
  if((state==HIGH) && (previusState==LOW)){
    output=1-output;
    delay(20); //Debido al Rebote
  }
  
  previusState=state;

  char key = myKeypad.getKey();
  
  if(output==1){
    if (key == '0'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
  }   
    
  if (key == '1'){
    Serial.println(key);
  
   
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
  }    

    if (key == '2'){
    Serial.println(key);
  
 
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
    } 
     
     if (key == '3'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      
     }
    if (key == '4'){
    Serial.println(key);
  
 
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
          
    }
    if (key == '5'){
    Serial.println(key);
  
 
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      
    } 
    if (key == '6'){
    Serial.println(key);
  
 
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      
    }  
      
    if (key == '7'){
    Serial.println(key);
  
 
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      
    
    }
   if (key == '8'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
     
   }  

    if (key == '9'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      
    }  
    if (key == 'A'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
     
   }  
   if (key == 'B'){
    Serial.println(key);
  
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
     
   }
   if (key == 'C'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
     
   }
   if (key == 'D'){
    Serial.println(key);
  
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
     
   }
   if (key == 'E'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
     
   }
   if (key == 'F'){
    Serial.println(key);
  
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
     
   }
    Serial.println();    // End the line
  }else{
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);

  }
}
