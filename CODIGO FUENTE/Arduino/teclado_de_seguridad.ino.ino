#include <Keypad.h>

const byte ROWS = 4; //Para filas
const byte COLS = 4; //Para columnas
char keys [ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
byte rowPins[ROWS]={9,8,7,6};//conectar las columnas 
byte colPins[COLS]={5,4,3,2};//conecto los pines a las filas

Keypad keypad = Keypad{makeKeymap(keys),rowPins,colPins,ROWS,COLS};
char password[7];
char rpassword[7]="456786";
byte index=0;

void setup(){
  Serial.begin(9600);
  Serial.print("INGRESE CONTRASENIA\n");
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}
void loop(){
  char key=keypad.getKey();
    if(key!= NO_KEY){//no se ha apretado ninguna tecla
    Serial.println(key);
    password[index]=key;
    index++;
  }
  if (index==6){
    byte check =0;
      for(int i=0;i<6;i++){
        Serial.print(password[i]);
        if(password[i]==rpassword[i]){
          check++;
        }
      }
    if(check == 6){
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
      Serial.println("GREEN");
    }else{
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      Serial.println("RED");
    }
    index=0;
  }
}
