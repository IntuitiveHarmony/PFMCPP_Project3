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

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Feet
    {
        int stepSize();
        void stepForward();
    };

    Feet leftFoot, rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

int Person::Feet::stepSize()
{
    return 9;
}

void Person::Feet::stepForward()
{

}

void Person::run(int howFast, bool startsWithLeftFoot)
{
    if(startsWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();    
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize() * howFast;
}

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

    bool connectToInternet(bool paidISP);
    bool save(std::string fileName, bool clickSaveButton);
    bool runApp(bool doubleClick);
};

bool Computer::connectToInternet(bool paidISP = true)
{
    return paidISP ? true : false;
}

bool Computer::save(std::string fileName, bool clickSaveButton)
{
    return fileName != "" && clickSaveButton ? true : false;
}

bool Computer::runApp(bool doubleClick)
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

int Car::moveForward(int distanceTraveled, int time)
{
    return distanceTraveled / time;
}

bool Car::stopMovement(bool applyBrakes)
{
    return applyBrakes ? true : false;
}

bool Car::turn(bool rotateSteeringWheel)
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

int Tree::grow(int sunLight, int water)
{
    return sunLight * water;
}
// Here it is a bit DRYer
Tree::Fruit produceFruit(int grow)
{
    Tree::Fruit fruit;
    
    if (grow > 0)
    {
        fruit.readyToEat = true;    
    }
    else 
    {      
        fruit.readyToEat = false;
    }
    
    return fruit;
}

int Tree::photosynthesize(int sunLight, int water, int unkonwnFactor)
{
    return (sunLight > 0) ? water * unkonwnFactor : 0;
}

struct PersonTwo
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
        void see();
    };

    bool run(int speed);
    int jump(int crouch, int energy);
    bool playPiano(bool memoryRecal, int nerves);
};

bool PersonTwo::run(int speed)
{
    return (speed > 5) ? true : false;
}

int PersonTwo::jump(int crouch, int energy)
{
    return crouch * energy;
}

bool PersonTwo::playPiano(bool memoryRecal, int nerves)
{
     return memoryRecal && nerves > 10 ? true : false; 
}

bool PersonTwo::Eye::open(bool awake)
{
    return awake ? true : false;
}

bool PersonTwo::Eye::close(bool awake)
{
    return awake == false ? true : false;
}

void PersonTwo::Eye::see()
{
    // if(vision == "20/20")
    // {
    //     needsGlasses = false;
    // }
    // else
    // {
    //     needsGlasses = true;
    // }
    
    // I wrote out both to see how they looked side by side.
    
    vision == "20/20" ? needsGlasses == false : needsGlasses = true;
}


struct Gears
{
    int numberOfGears = 5;
    std::string brand = "Acme";
    std::string type = "Sproket";
    std::string condition = "Good";
    bool needMaintenance = false;

    int propelBike(bool pedal, int gearRatio, int pedalSpeed);
    bool freeSpin(bool needMaintenance);
    int shiftGear(int leftShifterValue, int rightShifterValue); 
};

int Gears::propelBike(bool pedal, int gearRatio, int pedalSpeed)
{
    return pedal ? gearRatio * pedalSpeed : 0;
}

bool Gears::freeSpin(bool needmaintenanceGears)
{
    return needmaintenanceGears ? false : true;
}

int Gears::shiftGear(int leftShifterValue, int rightShifterValue)
{
    return leftShifterValue * rightShifterValue;    
}

struct Frame
{
    float weight = 3.7f;
    char type = 'A';
    std::string material = "Carbon Fiber"; 
    std::string brand = "Acme";
    bool needMaintenance = false;

    int adjustSeatHeight(int riderHeight);
    bool shockAbsorbFrame(bool needMaintenance);
    bool supportWeight(bool needMaintenance);
};

int Frame::adjustSeatHeight(int riderHeight)
{
    return ((riderHeight / 70) + 2 ) * 3;
}

bool Frame::shockAbsorbFrame(bool needMaintenanceFrame)
{
    return needMaintenanceFrame ? false : true;
}

bool Frame::supportWeight(bool needMaintenanceFrame)
{
    return needMaintenanceFrame ? false : true;
}

struct Wheel
{
    float circumference = 30.2f;
    int numberOfSpokes = 25;
    std::string material = "Aluminum";
    std::string brand = "Acme";
    bool needMaintenance = false;

    int spin(int speed, int distance); 
    bool shockAbsorbWheel(bool needMaintenance);
    bool supportWeightWheel(bool needMaintenance);
};

int Wheel::spin(int speed, int distance)
{
    return speed * distance;
}

bool Wheel::shockAbsorbWheel(bool needMaintenanceWheel)
{
    return ! needMaintenanceWheel;
}

bool Wheel::supportWeightWheel(bool needMaintenanceWheel)
{
    return ! needMaintenanceWheel;
}

struct Brakes
{
    char type = 'B';
    std::string brand = "Acme";
    std::string material = "Rubber";
    float padRemaining = 0.2f;
    bool needMaintenance = true;

    bool stop(bool needMaintence, float pressureApplied);
    float slow(float pressureApplied);
    bool replaceSqueek(float padRemaining);
};

bool Brakes::stop(bool needMaintenceBrakes, float pressureApplied)
{
    if(needMaintenceBrakes == false && pressureApplied > 0)
    {
        return true;
    }   
    
    return false; 
}

float Brakes::slow(float pressureApplied)
{
    return pressureApplied * 0.2f;
}

bool Brakes::replaceSqueek(float myPadRemaining)
{
    return (myPadRemaining < 0.5f) ? true : false;
}

struct Handlebars
{
    int currentGear = 4;
    char type = 'D';
    std::string material = "Carbon Fiber";
    float width = 7.9f;
    std::string brand = "Acme";
    bool needMaintenance = false;

    float turn(bool needMaintenance, float turnDegree); 
    bool engageBrakes(bool needMaintence, float pressureApplied); 
    void shiftGears(int desiredGear);
};

float Handlebars::turn(bool needMaintenanceHandlebars, float turnDegree)
{
    return needMaintenanceHandlebars ? turnDegree : 0.0f;
}

bool Handlebars::engageBrakes(bool needMaintenanceHandlebars, float pressureApplied)
{
    if(needMaintenanceHandlebars == false && pressureApplied > 0.0f)
    {
        return true;
    }
    
    return false;
}

void Handlebars::shiftGears(int desiredGear)
{
    currentGear = desiredGear;
}

struct Bicycle
{
    Gears gears;
    Frame frame;
    Wheel wheel;
    Brakes brakes;
    Handlebars handlebars;

    bool shiftGears(int desiredGear, int currentGear);
    bool pedalForward(int pedalSpeed);
    bool brake(int appliedPressure);
};

bool Bicycle::shiftGears(int desiredGear, int currentGear)
{
    return (desiredGear != currentGear) ? true : false;
}

bool Bicycle::pedalForward(int pedalSpeed)
{
    return pedalSpeed > 0 ? true : false;
}

bool Bicycle::brake(int appliedPressure)
{
    return appliedPressure > 0 ? true : false;
}



int main()
{
    std::cout << "good to go!" << std::endl;
}
