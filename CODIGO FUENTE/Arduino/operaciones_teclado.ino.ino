 #include  <Keypad.h>
    #include <LiquidCrystal.h>
    
    
    LiquidCrystal lcd (0,1,10,11,12,13);  // creamos un objeto LiquidCrystal ()
    char entrada;
    
    
    // Empieza el codigo necesario para utilizar el keypad
    const byte filas = 4;
    const byte columnas = 4;
    byte pinFilas [filas] = {9,8,7,6};   //en orden: F1,F2,F3,F4
    byte pinColumnas [columnas] = {5,4,3,2};   //en orden: C1,C2,C3
    
    char teclas [filas][columnas] = {
      {'1','2','3','A'},
      {'4','5','6','B'},
      {'7','8','9','C'},
      {'*','0','#','D'},
      };
      
      Keypad teclado = Keypad(makeKeymap(teclas), pinFilas, pinColumnas, filas, columnas);
    //termina el codigo necesario
    char tecla;
    int numero; 
    int numeros[6]={0,0,0,0,0,0};
    int registro[6]={0,0,0,0,0,0};
    int cont;
    int orden[6];
    
    void setup(){
       lcd.begin(16,2);
       lcd.print(" Hola por favor ");   //imprimimos un mensaje
       lcd.setCursor(1,1);
       lcd.print(" ingresa 6 dig. ");  //istrucciones
       delay(2000);
       lcd.clear();   //limpiar la pantalla
       delay(2500);
      }
      
    void loop(){ 
    tecla = teclado.getKey();
       if(tecla !=NO_KEY){  //si se presiona una tecla
          if(tecla==65)  //si tecla es A (65 en asc11), Ordena los numeros presionados de mayor a menor y mostrar el orden en el LCD 
         {
          ordenar(); //llama funcion para ordenar numeros
         }
          
         else if(tecla==66)//si tecla es B, suma los numeros presionados y mostrara el resultado de la suma en el LCD
         {
           sumatoria();  
         }
          
          
          else if (tecla==67)  //si la tecla es C, En base a los numeros presionados se mostraran enel LCD en el numero mayor
         {
           
           numeroMayor();
          }
            
            
          else if(tecla==68) //si la tecla es D, En base a los numeros presionados se mostrara en el LCD numero menor  
          {
           numeroMenor();
          }
           else{
           numero = tecla - 48;    //convertir el caracter a valor numerico 
           numeros[cont]=numero;  //se guardar caracter por caracter en el arreglo numeros []
           registro[cont]=numero;  //variables parqa funcion ordenar()
           lcd.setCursor(cont, 1);
           lcd.print(numeros[cont]);       //desplegar en el lcd
           cont=cont+1;   //icrementamos la variable cont
           }
         }
       }     
       void ordenar()
       {
       int aux,y,x;
       // 2,6,3,7,4,0
           
           for(x=0;x<cont;x++)
        {
          aux=-1;
          for(y=0;y<cont;y++)
          {
           if( registro[y] > aux)   //compara el valor actual en los siguientes 
           {
              aux= registro[y];
              orden[x] = y ;
           }
        }    
         registro[orden[x]]=0; //se iguala a 0 para que no siempre detecte el mismo numero como mayor
      }   
    //orden[0]=mayor
    //orden[1]=
    //orden[2]=  
    //orden[3]=  
    //orden[15]=menor         
    //con respecto a los valores
    //ejemplos:si orden [0]=3 significa que el numero mayor esta en numeros[3]      
    //DESPLEGAR VALORES ORDENADOS EN LCD
         
    for(x=0;x<cont;x++)
    {
      lcd.setCursor(x, 1);
      lcd.print(numeros[orden[x]]);   //se imprime en el LCD la tecla presionada
      } 
    }       
    void sumatoria()
    {
      int suma=0,x,aux=0;
      for(x=0; x<16; x++) 
      {
       suma=numeros[x] + suma;
      } 
       lcd.clear();  //limpiar la pantalla
       delay(200);
       lcd.print("Suma=");
       lcd.print(suma);  //se imprime en el LCD la tecla presionada
    }
      void numeroMayor()
     {
       int aux,y,x;
       for(x=0;x<cont;x++)
     {
         aux=-1;
       for(y=0;y<cont;y++)
       {
          if(numeros[y]>aux)   //compara el valor actual con los siguientes
         aux=numeros[y];
       }
     } 
         lcd.clear();   //limpiar la pantalla
         delay(200);
         lcd.print("Mayor=");
         lcd.print(aux);   //se imprime en el LCD en el numero mayor
     }  
      void numeroMenor()
      {
      int aux,y,x;
      for(x=0;x<cont;x++)
      {
          aux=10;
          for(y=0;y<cont;y++)
        {   
           if(numeros[y] < aux )   //compara el valor actual con los siguientes
            aux=numeros[y]; 
       }  
    }     
    lcd.clear();   //limpiar la pantalla
    delay(200);
    lcd.print("Menor=");
    lcd.print(aux);
    }
