#include<iostream>
using namespace std;

class Angle { // to store the angle of a ship
       int degree; //variable to store the degree
       float min; //variable to store the min
       char dir; //variable to store the direction
public:
       Angle() :degree(0), min(0), dir(0) {} //default constructor intizalizes the private members to zero
       Angle(int de, float mi, char an) :degree(de), min(mi), dir(an) {} //constructor intizalizes the private members to accordngto the user given values

      //set_angle(int, float, char);
       void display(); //declaration of a function to display the angle
};

class Ship { // to store the ship position
       int serial_no; //variable to store the serial no.
       static int num;
       Angle lattitude, longitude; //objects to store the lattitude and longitude of a ship
public:    //constructor to set the serial number
      //@start-editable@

       Ship();
       
       
       //@end-editable@  
       
      //declaration of a function to display serial number
      //@start-editable@

       int get_serial();
       
       
       //@end-editable@  
       
       //declaration of a function to set the lattitude and longitude of a ship
       //@start-editable@

       
       void set_ship_direction(Angle, Angle);
       
       //@end-editable@  
       
       //declaration of a function to display the ship postion
        //@start-editable@

       void display_angle();
       
       
       //@end-editable@
};
int Ship::num = 0;

Angle set_A(); //declaration of a function to take the position from the user

int main()
{
       Angle lat, longi; //creating objects of Angle class
       Ship S1, S2, S3; //creating object of Ship class
       S1.get_serial();cout<< endl;
       
       lat = set_A(); //calling of a function to take the lattitude from the user
       
       longi = set_A();  //calling of a function to take the lattitude from the user
       S1.set_ship_direction(lat, longi); //set the lattitude and longitude of ship 1
       cin.clear();
       //@start-editable@

       
       
       S2.get_serial(); cout << endl;
       lat = set_A();
       longi = set_A();
       S2.set_ship_direction(lat, longi);
       cin.clear();
       
       S3.get_serial(); cout << endl;
       lat = set_A();
       longi = set_A();
       S3.set_ship_direction(lat, longi);
       cin.clear();
       
       S1.display_angle();
       S2.display_angle();
       S3.display_angle();
       
       //@end-editable@
}
void Angle::display() //function to display the angle
{
       //@start-editable@

       cout << degree << "degree " << min << "' " << dir << endl;
       
       
       //@end-editable@
}
Ship::Ship() //constructor to set the serial number
{
      //@start-editable@

       num++;
       serial_no = num;
       
       
       //@end-editable@
}
void Ship::set_ship_direction(Angle la, Angle lon) // function to set the lattitude and longitude of a ship
{
       //@start-editable@

       lattitude = la;
       longitude = lon;
       
       
       //@end-editable@
}
void Ship::display_angle() //function to display the ship postion
{
       //@start-editable@

       lattitude.display();
       longitude.display();
       
       
       //@end-editable@
}
Angle set_A()   // function to take the position from the user, please do not modify
{
       int d; float m; char a;
       
       while (!(cin >> d))
       {
              cin.clear();
              cin.ignore(900, '\n');
       
       }

      
       while (!(cin >> m))
       {
              cin.clear();
              cin.ignore(900, '\n');
            
       }
      
       while (!(cin >> a))
       {
              cin.clear();
              cin.ignore(900, '\n');
            
       }
       return Angle(d, m, a);
}
int Ship::get_serial() //function to display serial number
{
       return serial_no;
}