
int seguro = 4;
int giro1=3;
int giro2=2;

void setup() {
  // put your setup code here, to run once:
pinMode (seguro , OUTPUT);
pinMode ( giro1 , OUTPUT);
pinMode (giro2 , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite (seguro , 100); // Aca estamos mandando un pulso de 100 (pwm) es decir que en un segundo va a subir (a 5v)
 // y va bajar ( a 0v ) 100 veces, el motor se va a prender y apagar, por ende, el motor nos va a dar menor velocidad y fuerza //
 // si usamos una fuente de 5v y ponemos por ejemplo en vez de 100, 80, el motor no va a funcionar //
 // a mayor voltaje de fuente menor el numero que podemos poner //
 // esto puede combinarse por eje con un ultrasonido en donde cuando este ultimo no detecte nada subamos el numero de pulsos, pero en cambio //
 // si detecta algo que se esta acercando, haga que el numero de pulsos baje, y cuando llegue al tope, invierta el giro del motor //
 

 digitalWrite (giro1, LOW);
 digitalWrite (giro2 , HIGH);
 delay (500);

}
