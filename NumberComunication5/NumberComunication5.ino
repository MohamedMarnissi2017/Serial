/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication5                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 05/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int mida;// estableix la variable hores
//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.println();//obre linia nova

}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    {
      { 
        Serial.println();//obre linia nova
        Serial.println();//obre linia nova
        mida = 0;
      }
      { 
        Serial.println();//obre linia nova
        Serial.println();//obre linia nova
        mida = 0;
      }
      { 
        Serial.println();//obre linia nova
        Serial.println();//obre linia nova
        mida = 0;
      }
      { 
        Serial.println();//obre linia nova
        Serial.println();//obre linia nova
        mida = 0;
      }
      if(mida>10)
      {
          Serial.println();//obre linia nova
        Serial.println();//obre linia nova
        mida = 0;
      }
      if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura serie...
      {}
    }
  }
}

//************************** FUNCIONS ***************************
