
int seguro=4;
int giro1=3;
int giro2=2;

void setup() {
  // put your setup code here, to run once:
 pinMode( seguro , OUTPUT);
 pinMode ( giro1 , OUTPUT);
 pinMode ( giro2 , OUTPUT); // para controlar 2 motores tenemos que agregar dos variables mas, dos giros por motor //

}

void loop() {
  // put your main code here, to run repeatedly:
 // No se puede poner en este caso al trabajar con motores digitalWrite HIGH en ambos motores pq puede provocar cortocircuitos //
 digitalWrite ( seguro , HIGH);
 digitalWrite ( giro1 , HIGH);
 digitalWrtie ( giro2 , LOW);
 delay (500); // siempre poner un delay para dar tiempo a recomodacion del circuito de arduino //
}
