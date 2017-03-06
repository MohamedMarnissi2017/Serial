/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                         CharCom1                            **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int thisByte;// estableix la variable thisByte amb valor int
int thatByte = 33;// estableix la variable that amb valor int
//************************** SETUP ******************************

void setup()// configura el final de salida
  {
    Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
    Serial.println("Prem una tecla...");//Imprimeix a monitor serie la frase "Prem una tecla..."
  }

  //*************************** LOOP ******************************

  void loop()
  {
    while (Serial.available() > 0)//inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix
    {
      thisByte = thatByte;//estableix que la variable thisByte sera i gual a la variable thatByte
      thatByte = Serial.read();//Estableix que la variable thatByte sera igual a la lectura del monitor serie.
      {
        if (thatByte == '\n')// look for the newline. Is the end of your sentence://llegeix linia nova, Finalitza lectura serie...
          Serial.println("El caracter que he rebut te el seguents valors:");//Imprimeix a monitor serie la frase "El caracter que he rebut te el seguents valors:"
        Serial.print("En format deciamal es:");//Imprimeix a monitor serie la frase "En format deciamal es:"
        Serial.println(thisByte, DEC);//inprimeix el valor de la variable thisByte en format deciaml
        Serial.print("En format hexadecimal es:");//Imprimeix a monitor serie la frase "En format deciamal es:"
        Serial.println(thisByte, HEX);//inprimeix el valor de la variable thisByte en format hexadeciaml
        Serial.print("En format octal es:");//Imprimeix a monitor serie la frase "En format deciamal es:"
        Serial.println(thisByte, OCT);//inprimeix el valor de la variable thisByte en format octal
        Serial.print("En format bin es:");//Imprimeix a monitor serie la frase "En format deciamal es:"
        Serial.println(thisByte, BIN);//inprimeix el valor de la variable thisByte en format binari
        Serial.println();//obre linia nova
        Serial.println("Prem una tecla...");//Imprimeix a monitor serie la frase "Prem una tecla..."
       
      }
    }
  }


  //************************** FUNCIONS ***************************
