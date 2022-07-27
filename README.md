# SolarTracker
Here I make a Solar tracker using Arduino nano

Solar tracker information:

The Solartracker tracks the Sun with help of LDR's placed on both side of the Solar Panel. If the value of Right LDR goes high the Servo Motor will rotate Right side If left LDR goes high servo will rotate Left side. If both values are same the Servo will stop rotating.
IN this project we get best quality wooden blocks to make a frame of solat tracker.

Dimensions:
Two horizontal Blocks: 47cm x 2
Two Vertical Blocks: 20cm x 2
Extra two Horizontal Blocks for rectangular side Frame: 18cm x 2

Cutting:
Two HOrizontal Blocks cut in half circular shape at upper end with 4cm Circular Drill bit.
one for gear motorfitting and second for Ball bearing.
first we design the farme idea then wee cut peices of wooden blocks and we join them with each other with tackus screws. 
now our frame is ready.

Asssimelings:
At first Horizonntal block we attach the gear motor. and same procedure we follow for sencond block. between them we fit the stenlessteel rod with attaching screw and motor.
we place the steel rod into the ball bearing this makes free notion for solar panel.
then we find the centre of steel rod after that we place the solar panel at centre of thr rod. this is very useful to stable our solar panel on rod and no any disturbance for all automation.

Connection:
IN arduino we use the Digital pins to get a data and write the data.
for this process we use digitalpin D2, D3, D4 and D5 
we use two pins for read data and oother two pins we use for write tha data.
for arduino we powered 5V by using bug conveter.

Code:
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, INPUT);
  pinMode(5, OUTPUT);
  pinMode(3, INPUT);
  pinMode(9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if( digitalRead(2)==HIGH)
  {
  digitalWrite(5, HIGH);   
  }
else   if( digitalRead(3)==HIGH)
  {
  digitalWrite(9, HIGH);   
  } 
else
{
  digitalWrite(5, LOW);
digitalWrite(92 , LOW);   
}              
}

Project Pics:



 
