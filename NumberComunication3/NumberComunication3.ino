/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication3                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 04/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

double long numero;// estableix la variable numero amb un valor double long
int Xifres = 1; // estableix la variable Xifres amb un valor int

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
    while(numero >= 10)//inicia funcio while amb la condicio variable numero ha de ser superior o igual a 10
    {
     numero= numero/10;// estableix variable numero sera igual a la mateixa partida de 10
     Xifres++;// incrementa valor de la variable Xifres en 1
    }
    if(numero<10)//inicia funcio if amb la condicio si numero inferior a 10 es compleix
    {
      Serial.print("el teu numero te ");//Imprimeix a monitor serie la frase "el teu numero te "
      Serial.print(Xifres);//Imprimeix a monitor serie el valor de la variable Xifres
      Serial.println("  Xifres");//Imprimeix a monitor serie la frase "Xifres "
      Xifres=1;//el valor de la variable Xifres passa a ser 1
      Serial.println();//obre linia nova
      Serial.println("entre el teu numero");//Imprimeix a monitor serie la frase "Entra el teu numero"
      Serial.println();//obre linia nova
    }
    if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura serie...
    {}
  }
}

//************************** FUNCIONS ***************************
