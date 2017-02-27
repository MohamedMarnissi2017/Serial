/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication2                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 27/02/2017 **
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
    numero = Serial.parseInt();// La variable r1 sera igual al missatge en valor int que arribi per el canal serie
    PS = numero % 2;
    if (PS == 1)
      {Serial.print("El numero ");//Imprimeix a monitor serie la frase "r1="
    Serial.print(numero);//Imprimeix a monitor serie el valor de r1
    Serial.print(" es senar");//Imprimeix a monitor serie la frase "ohms  "
    Serial.println();//obre linia nova
        Serial.println("entre el teu numero");//Imprimeix a monitor serie la frase "Entra un numero"
          
      }
    else
     { Serial.print("El numero  ");//Imprimeix a monitor serie la frase "r1="
    Serial.print(numero);//Imprimeix a monitor serie el valor de r1
    Serial.println("  es parell");//Imprimeix a monitor serie la frase "ohms  "
    Serial.println();//obre linia nova
    Serial.println("entre el teu numero");//Imprimeix a monitor serie la frase "Entra un numero"
      Serial.println();//obre linia nova
     }
    if (Serial.read() == '\n')//llegeix linia nova
     {}
    }

}

//************************** FUNCIONS ***************************
