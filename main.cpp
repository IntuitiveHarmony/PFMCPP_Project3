/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On this new branch:

 0) if you opted to not fill in any of your member functions in part2, 
    fill in ALL of your member functions
    
 1) Add a constructor for each User-Defined-Type.
    The constructor should be the first declaration in your UDT, before all member variables and member functions.
    add a std::cout message in the constructor that prints out the name of the class being constructed.  
    When you run your code, you'll see the order that your objects are created in the program output. 
 
 2) For each User-Defined-Type:
        amend some of the member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of EACH of your user-defined types in the main() function.  
    You should have at least 12 different variables declared in main(), because you have written 12 different types (including the nested types)

 4) For each instantiated UDT: 
        call each of that instance's member functions.
        You're doing this to show that your code doesn't produce warnings when you call the functions that take arguments.
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int thing = 0; //a member variable
    UDT();              //1) the constructor
    void printThing();  //the member function
};

//the function definitions are outside of the class
UDT::UDT()
{
    std::cout << "UDT being constructed!" << std::endl; //1) 
}

void UDT::printThing()
{
    std::cout << "UDT::printThing() " << thing << std::endl;  //2) printing out something interesting
}

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'thing' equal to 0? " << (foo.thing == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
} //end namespace Example

//insert Example::main() into main() of user's repo.




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
    
    needsGlasses = vision == "20/20" ? false : true;
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
    Example::main();
    
    std::cout << "good to go!" << std::endl;
}
