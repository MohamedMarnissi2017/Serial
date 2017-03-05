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
  Serial.println("Quina mida te el cargol en cm?");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"
  Serial.println();//obre linia nova

}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    mida = Serial.parseInt();// La variable mida sera igual al missatge en valor int que arribi per el canal serie
    while (mida > 0) //inicia funcio while amb la condicio variable mida ha de ser superior a 0
    {
      if (mida>=1 && mida<3)//inicia funcio if amb la condicio variable mida superior o igual a 1 pero inferior a 3
      { 
        Serial.print("el cargol amb una mida de ");//Imprimeix a monitor serie la frase "el cargol amb una mida de  "
        Serial.print(mida);//Imprimeix a monitor serie el valor de la variable mida
        Serial.println(" cm es petit.");//Imprimeix a monitor serie la frase "cm es petit."
        Serial.println();//obre linia nova
        Serial.println("Quina mida te el cargol en cm?");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"
        Serial.println();//obre linia nova
        mida = 0;//variable mida sera igual a 0
      }
       if (mida>=3 && mida<5)//inicia funcio if amb la condicio variable mida superior o igual a 3 pero inferior a 5
      { 
        Serial.print("el cargol amb una mida de ");//Imprimeix a monitor serie la frase "el cargol amb una mida de  "
        Serial.print(mida);//Imprimeix a monitor serie el valor de la variable mida
        Serial.println(" cm es mitja.");//Imprimeix a monitor serie la frase "cm es mitja."
        Serial.println();//obre linia nova
        Serial.println("Quina mida te el cargol en cm?");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"
        Serial.println();//obre linia nova
        mida = 0;//variable mida sera igual a 0
      }
       if (mida>=5 && mida<8)//inicia funcio if amb la condicio variable mida superior o igual a 5 pero inferior a 8
      { 
        Serial.print("el cargol amb una mida de ");//Imprimeix a monitor serie la frase "el cargol amb una mida de  "
        Serial.print(mida);//Imprimeix a monitor serie el valor de la variable mida
        Serial.println(" cm es gran.");//Imprimeix a monitor serie la frase "cm es gran."
        Serial.println();//obre linia nova
        Serial.println("Quina mida te el cargol en cm?");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"
        Serial.println();//obre linia nova
        mida = 0;//variable mida sera igual a 0
      }
       if (mida>=8 && mida<=10)//inicia funcio if amb la condicio variable mida superior o igual a 8 pero inferior o igual  a 10
      { 
        Serial.print("el cargol amb una mida de ");//Imprimeix a monitor serie la frase "el cargol amb una mida de  "
        Serial.print(mida);//Imprimeix a monitor serie el valor de la variable mida
        Serial.println(" cm es molt gran.");//Imprimeix a monitor serie la frase "cm es molt gran."
        Serial.println();//obre linia nova
        Serial.println("Quina mida te el cargol en cm?");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"
        Serial.println();//obre linia nova
        mida = 0;//variable mida sera igual a 0
      }
      if(mida>10)//inicia funcio if amb la condicio variable mida superior a 10
      {
        Serial.println("La mida del cargol introduida es incorrecta.");//Imprimeix a monitor serie la frase "La mida del cargol introduida es incorrecta."
          Serial.println();//obre linia nova
        Serial.println("Quina mida te el cargol en cm?");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"
        Serial.println();//obre linia nova
        mida = 0;//variable mida sera igual a 0
      }
      if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura serie...
      {}
    }
  }
}

//************************** FUNCIONS ***************************
