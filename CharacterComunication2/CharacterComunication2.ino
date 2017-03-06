
/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                         CharCom2                            **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

int lletra;// estableix la variable lletra amb valor int
char lletra1;//estableix la variable lletra1 amb valor de caracter
//************************** SETUP ******************************

void setup()// configura el final de salida
  {
    Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
    Serial.println("Intordueix una lletra...");//Imprimeix a monitor serie la frase "Prem una tecla..."
    Serial.println();//obre linia nova
  }

  //*************************** LOOP ******************************

  void loop()
  {
    while (Serial.available() > 0)//inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix
    {
lletra1 = Serial.read();//Estableix que la variable thatByte sera igual a la lectura del monitor serie.
lletra=lletra1; 
      {
        if(lletra>96 && lletra<=122)
         {
          Serial.print("La lletra ");//Imprimeix a monitor serie la frase "La lletra "
          Serial.print(lletra1);//Imprimeix a monitor serie el valor de la variable lletra 1
        Serial.println(" es minuscula.");//Imprimeix a monitor serie la frase "es minuscula."
        Serial.println();//obre linia nova
        Serial.println("Intordueix una lletra...");//Imprimeix a monitor serie la frase "Prem una tecla..."
        Serial.println();//obre linia nova
       
         }
        if(lletra>64 && lletra<=90)
        {
          Serial.print("La lletra ");//Imprimeix a monitor serie la frase "La lletra "
          Serial.print(lletra1);//Imprimeix a monitor serie el valor de la variable lletra 1
        Serial.println(" es majuscula.");//Imprimeix a monitor serie la frase "es majuscula."
        Serial.println();//obre linia nova
        Serial.println("Intordueix una lletra...");//Imprimeix a monitor serie la frase " es majuscula."
        Serial.println();//obre linia nova
  
        }
        
     
      if (lletra == '\n')//llegeix linia nova, Finalitza lectura serie...
      {}
       
      }
    }
  }

