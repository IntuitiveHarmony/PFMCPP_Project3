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

// I started this one but got stuck because I don't really understand what the question is asking
struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    
    void run(int howFast, bool startWithLeftFoot);
};



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
    float storageAmount = 30.31f;
    int RAMAmount = 16;
    std::string manufacturer = "Mac";
    float screenSize = 13.1f;
    int amountUSBPort = 2;

    bool connectToInternet(bool paidISP = true);
    bool save(std::string fileName, bool clickSaveButton);
    bool runApp(bool doubleClick);
};

bool connectToInternet(bool paidISP = true)
{
    return paidISP ? true : false;
}

bool save(std::string fileName, bool clickSaveButton)
{
    return fileName != "" && clickSaveButton ? true : false;
}

bool runApp(bool doubleClick)
{
    return doubleClick ? true : false;
}

struct Car
{
    float engineSize = 13.1f;
    std::string make = "Subaru";
    std::string model = "Outback";
    int numberOfSeats = 5;
    float averageMPG = 30.2f;

    int moveForward(int distanceTraveled, int time);
    bool stopMovement(bool applyBrakes);
    bool turn(bool rotateSteeringWheel);
    
};

int moveForward(int distanceTraveled, int time)
{
    return distanceTraveled / time;
}

bool stopMovement(bool applyBrakes)
{
    return applyBrakes ? true : false;
}

bool turn(bool rotateSteeringWheel)
{
   return rotateSteeringWheel ? true : false; 
}

struct Tree
{ 
    float height = 13.7f;
    int age = 23;
    std::string type = "Apple";
    std::string location = "Backyard";
    int numberOfBranches = 10349;

    struct Fruit
    {
        std::string name = "Apple";
        std::string color = "Green";
        bool readyToEat = false;
        int numberOfSeeds = 5;

        int produceSeeds();
        void fallFromTree();
        void inspireTheoryOfGravity();
    };

    int grow(int sunLight, int water);
    Fruit produceFruit();
    int photosynthesize(int sunLight, int water, int unkonwnFactor);
};

int grow(int sunLight, int water)
{
    return sunLight * water;
}
// I couldn't quite figure out how to make this return a Fruit 
// Tree::Fruit produceFruit(int grow)
// {
//      if (grow > 0)
//      {
//          return
//             bool readyToEat = true;
//      }
//     else 
//      {      
//         return
//             bool readyToEat = false;
//     }
// }

int photosynthesize(int sunLight, int water, int unkonwnFactor)
{
    return (sunLight > 0) ? water * unkonwnFactor : 0;
}

struct myPerson
{
    float height = 5.4f;
    int age = 29;
    int numberOfSiblings = 3;
    std::string job = "Driver";
    std::string address = "1 S Anywhere St";

    struct Eye
    {
        std::string color = "Blue";
        bool needsGlasses = true;
        bool hasCataracts = false;
        std::string typeOfColorBlindness = "Blue/ green";
        std::string vision = "20/50";

        bool open(bool awake);
        bool close(bool awake);
        void see(std::string vision, std::string typeOfColorBlindness);
    };

    bool run(int speed);
    int jump(int crouch, int energy);
    bool playPiano(bool memoryRecal, int nerves);
};

bool run(int speed)
{
    return (speed > 5) ? true : false;
}

int jump(int crouch, int energy)
{
    return crouch * energy;
}

bool playPiano(bool memoryRecal, int nerves)
{
     return memoryRecal && nerves > 10 ? true : false; 
}

bool myPerson::Eye::open(bool awake)
{
    return awake ? true : false;
}

bool myPerson::Eye::close(bool awake)
{
    return awake == false ? true : false;
}

// void myPerson::Eye::see(std::string vision, std::string typeOfColorBlindness)
// {
        // I couldn't quite figure this one out.  Maybe I can get some pointers for my code review
// }

struct Gears
{
    int numberOfGears = 5;
    std::string brand = "Acme";
    std::string type = "Sproket";
    std::string condition = "Good";
    bool needmaintenance = false;

    int propelBike(bool pedal, int gearRatio, int pedalSpeed);
    bool freeSpin(bool needmaintenance);
    int shiftGear(int leftShifterValue, int rightShifterValue); 
};

int propelBike(bool pedal, int gearRatio, int pedalSpeed)
{
    return pedal ? gearRatio * pedalSpeed : 0;
}

bool freeSpin(bool needmaintenance)
{
    return needmaintenance ? false : true;
}

int shiftGear(int leftShifterValue, int rightShifterValue)
{
    return leftShifterValue * rightShifterValue;    
}

struct Frame
{
    float weight = 3.7f;
    char type = 'A';
    std::string material = "Carbon Fiber"; 
    std::string brand = "Acme";
    bool needmaintenance = false;

    int adjustSeatHight(int riderHeight);
    void shockAbsorbFrame(bool needmaintenance);
    void supportWeight(bool needmaintenance);
};

int adjustSeatHeight(int riderHeight)
{
    return ((riderHeight / 70) + 2 ) * 3;
}

bool shockAbsorbFrame(bool needmaintenance)
{
    return needmaintenance ? false : true;
}

bool supportWeightFrame(bool needmaintenance)
{
    return needmaintenance ? false : true;
}

struct Wheel
{
    float circumference = 30.2f;
    int numberOfSpokes = 25;
    std::string material = "Aluminum";
    std::string brand = "Acme";
    bool needmaintenance = false;

    int spin(int speed); 
    bool shockAbsorbWheel(bool needmaintenance);
    bool supportWeightWheel(bool needmaintenance);
};

int spin(int speed, int distance)
{
    return speed * distance;
}

bool shockAbsorbWheel(bool needmaintenance)
{
    return needmaintenance ? false : true;
}

bool supportWeightWheel(bool needmaintenance)
{
    // should I write it like this or how it was above? I feel like this way is less confusing with the true value being first spot in the ternary opeator after the question mark.
    return needmaintenance == false ? true : false;
}

struct Brakes
{
    char type = 'B';
    std::string brand = "Acme";
    std::string material = "Rubber";
    float padRemaining = 0.2f;
    bool needmaintenance = true;

    bool stop(bool needMaintence, int pressureApplied);
    float slow(float pressureApplied);
    bool replaceSqueek(float padRemaining);
};

bool stop(bool needMaintence, float pressureApplied)
{
    return (needMaintence == false && pressureApplied > 0) ? true : false; 
}

float slow(float pressureApplied)
{
    return pressureApplied * 0.2f;
}

bool replaceSqueek(float padRemaining)
{
    return (padRemaining < 0.5f) ? true : false;
}

struct Handlebars
{
    char type = 'D';
    std::string material = "Carbon Fiber";
    float width = 7.9f;
    std::string brand = "Acme";
    bool needMaintenance = false;

    float turn(bool needMaintenance, float turnDegree); 
    bool engageBrakes(bool needMaintence, float pressureApplied); 
    void shiftGears(int desiredGear);
};

float turn(bool needMaintenance, float turnDegree)
{
    return needMaintenance ? turnDegree : 0.0f;
}

bool engageBrakes(bool needMaintence, float pressureApplied)
{
    return (needMaintence == false && pressureApplied > 0.0f) ? true : false;
}

struct Bicycle
{
    Gears gears;
    Frame frame;
    Wheel wheel;
    Brakes brakes;
    Handlebars handlebars;

    bool shiftGears(int desiredGear);
    bool pedalForward(int pedalSpeed);
    bool brake(int appliedPressure);
};

bool shiftGears(int desiredGear, int currentGear)
{
    return (desiredGear != currentGear) ? true : false;
}

bool pedalForward(int pedalSpeed)
{
    return pedalSpeed > 0 ? true : false;
}

bool brake(int appliedPressure)
{
    return appliedPressure > 0 ? true : false;
}



int main()
{
    std::cout << "good to go!" << std::endl;
}
