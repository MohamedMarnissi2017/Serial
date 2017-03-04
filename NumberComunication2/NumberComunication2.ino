/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication2                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 04/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int numero;// estableix la variable numero amb un valor int
int PS;// estableix la variable PS amb un valor int

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.println("entre el teu numero");//Imprimeix a monitor serie la frase "Entra un numero"
  Serial.println();//obre linia nova

}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    numero = Serial.parseInt();// La variable numero sera igual al missatge en valor int que arribi per el canal serie
    PS = numero % 2;// Executa operacio de modul de variable numero partit de 2
    if (PS == 1)//Inicia funcio if amb la condicio si variable PS es igual 1 , condicio es compleix
    { Serial.print("El numero ");//Imprimeix a monitor serie la frase "el numero"
      Serial.print(numero);//Imprimeix a monitor serie el valor de numero
      Serial.println(" es senar");//Imprimeix a monitor serie la frase "es senar "
      Serial.println();//obre linia nova
      Serial.println("entre el teu numero");//Imprimeix a monitor serie la frase "Entra el treu numero"
      Serial.println();//obre linia nova
    }
    else//En qualsevol altre cas..
    { Serial.print("El numero  ");//Imprimeix a monitor serie la frase "El numero"
      Serial.print(numero);//Imprimeix a monitor serie el valor de numero
      Serial.println("  es parell");//Imprimeix a monitor serie la frase "es parell"
      Serial.println();//obre linia nova
      Serial.println("entre el teu numero");//Imprimeix a monitor serie la frase "Entra el teu numero"
      Serial.println();//obre linia nova
    }
    if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura...
    {}
  }

}

//************************** FUNCIONS ***************************
