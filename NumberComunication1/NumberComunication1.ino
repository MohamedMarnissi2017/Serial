/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication1                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 27/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************


float r1, r2;             // estableix les variables r1 i r2 amb un valor float
float rSerie, rParallel;   // estableix les variables rSerie i rParallel amb un valor float

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");//Imprimeix a monitor serie la frase "Entra el valor de r1 i r2 (separats per una coma)"
  Serial.println();//obre linia nova

}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    r1 = Serial.parseInt();// La variable r1 sera igual al missatge en valor int que arribi per el canal serie
    Serial.print("r1=");//Imprimeix a monitor serie la frase "r1="
    Serial.print(r1);//Imprimeix a monitor serie el valor de r1
    Serial.print("ohms   ");//Imprimeix a monitor serie la frase "ohms  "
    r2 = Serial.parseInt();// La variable r2 sera igual al seguent missatge en valor int que arribi per el canal serie
    Serial.print("r2=");//Imprimeix a monitor serie la frase "r2="
    Serial.print(r2);//Imprimeix a monitor serie el valor de r2
    Serial.println("ohms   ");//Imprimeix a monitor serie la frase "ohms  "
    Serial.println();//obre linia nova
    rSerie = r1 + r2;// Suma r1+r2
    rParallel = 1 / (r1 + r2);// divideix 1 per la suma de r1 i r2
    if (Serial.read() == '\n')//llegeix linia nova
      Serial.print("rSerie=");//Imprimeix a monitor serie la frase "rSerie="
    Serial.print(rSerie);//Imprimeix a monitor serie el valor de la variable rSerie
    Serial.print("ohms   ");//Imprimeix a monitor serie la frase "ohms  "
    Serial.print("rParallel=");//Imprimeix a monitor serie la frase "rParallel="
    Serial.print(rParallel);//Imprimeix a monitor serie el valor de la variable rParallel
    Serial.println("ohms   ");//Imprimeix a monitor serie la frase "ohms  "
    Serial.println();;//obre linia nova
    Serial.println("Entra el valor de r1 i r2 (separats per una coma)");//Imprimeix a monitor serie la frase "Entra el valor de r1 i r2 (separats per una coma)"
    Serial.println();;//obre linia nova
  }
}


//************************** FUNCIONS ***************************
