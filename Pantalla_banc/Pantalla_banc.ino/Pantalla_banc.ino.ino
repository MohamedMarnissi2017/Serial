/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Pantalla banc                          **
**                                                             **
**  NOM: Mohamed el Marnissi                    DATA:06/02/2016**
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                 // configura el final de salida
 Serial.begin(9600);//Inicialitza comunicacio serie a velocitat 9600
Serial.println("Escull el numero de l'operacio que voleu fer:"); //envia comunicacio en linea nova amb el missatge que hi ha entre cometes. 
Serial.println("1-Comprovar numero de la tarjeta.");//envia comunicacio en linea nova amb el missatge que hi ha entre cometes.
Serial.println("2-Comprovar numero de compte bancari.");//envia comunicacio en linea nova amb el missatge que hi ha entre cometes.
Serial.println("3-Buscar un digit perdut de tarjeta de credit.");//envia comunicacio en linea nova amb el missatge que hi ha entre cometes.
//Com que el programa esta escrit al bloc ''setup'' nomes s'executara un cop.
}

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
  

}

//************************** FUNCIONS ***************************
