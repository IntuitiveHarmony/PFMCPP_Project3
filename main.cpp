 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */

struct Computer
{
    // amount of storage
    float storageAmount = 30.31f;
    // amount of RAM
    int RAMAmount = 16;
    // manufacturer name
    std::string manufacturer = "Mac";
    // size of screen
    float screenSize = 13.1f;
    // number of usb ports (int)
    int amountUSBPort = 2;

    // 3 things it can do:
    // 1) connect to internet
    void connectToInternet();
    // 2) save files
    void save();
    //     3) run apps
    void runApp();
};

struct Car
{
    // engine size
    float engineSize = 13.1f;
    // make
    std::string make = "Subaru";
    // model
    std::string model = "Outback";
    // number of seats
    int numberOfSeats = 5;
    // average miles per gallon (float)
    float averageMPG = 30.2f;

    // 3 things it can do:
    // 1) the car can move forward
    int moveForward(int distanceTraveled, int time); // returns speed
    // 2) the car can stop
    void stopMovement();
    // 3) the car can turn
    bool turn(); // return whether the car will turn or not
    
};

struct Tree
{
    // height 
    float height = 13.7f;
    // age
    int age = 23;
    // type 
    std::string type = "Apple";
    // location
    std::string location = "Backyard";
    // number of branches (int)
    int numberOfBranches = 10349;

    // Nested UDT
    struct Fruit
    {
        // member variables
        std::string name= "Apple";
        std::string color = "Green";
        bool readyToEat = false;
        int numberOfSeeds = 5;
        // member functions
        int produceSeeds(); // returns number of seeds produced
        void fallFromTree();
        void inspireTheoryOfGravity(); // did this actually happen with Newton?
    };
    // 3 things it can do:
    // 1) grow
    int grow(int sunlight, int water); // returns growth amount
    // 2) produce fruit
    Fruit produceFruit();
    // 3) photosynthesize
    void photosynthesize();
};

struct Person
{
    // height
    float height = 5.4f;
    // age
    int age = 29;
    // number of siblings
    int numberOfSiblings = 3;
    // job
    std::string job = "Driver";
    // address
    std::string address = "1 S Anywhere St";

    // Nested UDT
    struct Eye
    {
        // member variables
        std::string color = "Blue";
        bool needsGlasses = true;
        bool hasCataracts = false;
        std::string typeOfColorBlindness = "Blue/ green";
        std::string vision = "20/50";
        // member functions
        void open();
        void close();
        void see(std::string vision, std::string typeOfColorBlindness);
    };
    // 3 things it can do:
    // 1) run
    void run(int speed);
    // 2) jump
    void jump(int height);
    // 3) play piano
    void playPiano(std::string piece);
};

struct Gears
{
    // number of gears
    int numberOfGears = 5;
    // brand 
    std::string brand = "Acme";
    // type
    std::string type = "Sproket";
    // condition
    std::string condition = "Good";
    // need maintenance?
    bool needmaintenance = false;

    // 3 things it can do:
    // 1) propel the bike
    void propelBike();
    // 2) spin independently of wheel
    void freeSpin();
    // 3) shift gear ratio
    int shiftGear(); // returns the current gear
};

struct Frame
{
    // weight
    float weight = 3.7f;
    // type
    char type = 'A';
    // material
    std::string material = "Carbon Fiber";
    // brand    
    std::string brand = "Acme";
    // need maintenance?
    bool needmaintenance = false;

    // 3 things it can do:
    // 1) adjust seat height
    int adjustSeatHight(int riderHeight); // returns the height of the seat
    // 2) absorb shock from bumps
    void shockAbsorb();
    // 3) support weight of rider
    void supportWeight();
};

struct Wheel
{
    // circumference
    float circumference = 30.2f;
    // number of spokes
    int numberOfSpokes = 25;
    // material
    std::string material = "Aluminum";
    // brand
    std::string brand = "Acme";
    // need maintenance?
    bool needmaintenance = false;

    // 3 things it can do:
    // 1) spin
    int spin(int speed); // returns spin duration 
    // 2) absorb shock from bumps
    void shockAbsorb();
    // 3) support weight of rider
    void supportWeight();
};

struct Brakes
{
    // type
    char type = 'B';
    // brand
    std::string brand = "Acme";
    // material
    std::string material = "Rubber";
    // amount of pad left
    float padRemaining = 0.2f;
    // need maintenance?
    bool needmaintenance = true;

    // 3 things it can do:
    // 1) stop the bike
    void stop();
    // 2) slow the bike
    void slow();
    // 3) squeak when needing to be replaced
    bool replaceSqueek(int padRemaining); // returns a boolean telling if the pads need replaced 
};

struct Handlebars
{
    // type
    char type = 'D';
    // material
    std::string material = "Carbon Fiber";
    // width
    float width = 7.9f;
    // brand
    std::string brand = "Acme";
    // need maintenance?
    bool needmaintenance = false;

    // 3 things it can do:
    // 1) turn the bike
    bool turn(); // returns if the bike will turn or not
    // 2) engage the brakes
    bool engageBrakes();  // returns if the bike will brake or not
    // 3) shift the gears
    void shiftGears(int desiredGear);
};

struct Bicycle
{
    // Gears
    Gears gears;
    // Frame
    Frame frame;
    // Wheel
    Wheel wheel;
    // Brakes
    Brakes brakes;
    // Handlebars
    Handlebars handlebars;

    // 3 things it can do:
    // 1) shift gears
    void shiftGears(int desiredGear);
    // 2) pedal forward
    void pedalForward();
    // 3) brake
    void brake();
};








int main()
{
    std::cout << "good to go!" << std::endl;
}
