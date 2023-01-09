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
#include <cstdlib>
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
    Computer();
    float storageAmount = 30.31f;
    int RAMAmount = 16;
    std::string manufacturer = "Mac";
    float screenSize = 13.1f;
    int amountUSBPort = 2;

    bool connectToInternet(bool paidISP);
    bool save(std::string fileName, bool clickSaveButton);
    void runApp(std::string something);
};

Computer::Computer()
{
    std::cout << "Computer being constructed!" << std::endl; 
}

bool Computer::connectToInternet(bool paidISP = true)
{
    return paidISP ? true : false;
}

bool Computer::save(std::string fileName = "Sweet Cat Video", bool clickSaveButton = true)
{
    return fileName != "" && clickSaveButton ? true : false;
}

void Computer::runApp(std::string text = "App is running")
{
    std::cout << text << std::endl;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Car
{
    Car();
    float engineSize = 13.1f;
    std::string make = "Subaru";
    std::string model = "Outback";
    int numberOfSeats = 5;
    float averageMPG = 30.2f;

    int moveForward(int distanceTraveled, int time);
    bool stopMovement(bool applyBrakes);
    bool turn(bool rotateSteeringWheel);
    void honk();
};

Car::Car()
{
    std::cout << "Car being constructed!" << std::endl; 
}

int Car::moveForward(int distanceTraveled = 60, int time = 4)
{
    std::cout << distanceTraveled / time << std::endl;
    return distanceTraveled / time;
}

bool Car::stopMovement(bool applyBrakes = false)
{
    return applyBrakes ? true : false;
}

bool Car::turn(bool rotateSteeringWheel = true)
{
    return rotateSteeringWheel ? true : false; 
}

void Car::honk()
{
    std::cout << "Beep, Beep" << std::endl;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Tree
{ 
    Tree();
    float height = 13.7f;
    int age = 23;
    std::string type = "Apple";
    std::string location = "Backyard";
    int numberOfBranches = 10349;

    struct Fruit
    {
        Fruit();
        std::string name = "Apple";
        std::string color = "Green";
        bool readyToEat = false;
        int numberOfSeeds = 0;

        void produceSeeds();
        void fallFromTree();
        void inspireTheoryOfGravity();
    };

    void grow();
    Fruit produceFruit();
    int photosynthesize(int sunLight, int water, int unkonwnFactor);
};

Tree::Tree()
{
    std::cout << "Tree being constructed!" << std::endl;
}

Tree::Fruit::Fruit()
{
    numberOfSeeds = 5;
    std::cout << "Fruit being constructed!" << std::endl;
}

void Tree::grow()
{
    std::cout << "All is well in the shade of the apple tree" << std::endl;
}

Tree::Fruit produceFruit(int grow = 7)
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

int Tree::photosynthesize(int sunLight = 5, int water = 3, int unkonwnFactor = 7)
{
    return (sunLight > 0) ? water * unkonwnFactor : 0;
}

void Tree::Fruit::produceSeeds()
{
   // I was going to have it generate a random number of seeds but that proved to be more difficult than I thought it would be
}

void Tree::Fruit::fallFromTree()
{
    std::cout << "yum!" << std::endl;
}

void Tree::Fruit::inspireTheoryOfGravity()
{
    std::cout << "Eureka!" << std::endl;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct PersonTwo
{
    PersonTwo();
    float height = 5.4f;
    int age = 29;
    int numberOfSiblings = 3;
    std::string job = "Driver";
    std::string address = "1 S Anywhere St";

    struct Eye
    {
        Eye();
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
    void face();
};

PersonTwo::PersonTwo()
{
    std::cout << "PersonTwo being constructed!" << std::endl; 
}

PersonTwo::Eye::Eye()
{
    std::cout << "The eye is being constructed!" << std::endl;
}

bool PersonTwo::run(int speed = 7)
{
    return (speed > 5) ? true : false;
}

int PersonTwo::jump(int crouch = 9, int energy = 4)
{
    return crouch * energy;
}

bool PersonTwo::playPiano(bool memoryRecal = true, int nerves = 11)
{
    return memoryRecal && nerves > 10 ? true : false; 
}

void PersonTwo::face()
{
    std::cout << "(o_*)" << std::endl;
}

bool PersonTwo::Eye::open(bool awake = true)
{
    return awake ? true : false;
}

bool PersonTwo::Eye::close(bool awake = true)
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

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Gears
{
    Gears();
    int numberOfGears = 5;
    std::string brand = "Acme";
    std::string type = "Sproket";
    std::string condition = "Good";
    bool needMaintenance = false;

    int propelBike(bool pedal, int gearRatio, int pedalSpeed);
    bool freeSpin(bool needMaintenance);
    int shiftGear(int leftShifterValue, int rightShifterValue); 
};

Gears::Gears()
{
    std::cout << "Gears being constructed!" << std::endl; 
}

int Gears::propelBike(bool pedal, int gearRatio, int pedalSpeed)
{
    return pedal ? gearRatio * pedalSpeed : 0;
}

bool Gears::freeSpin(bool needmaintenanceGears)
{
    std::cout << "Clanka clanka Clanka clanka Clanka clanka \n";
    return needmaintenanceGears ? false : true;
}

int Gears::shiftGear(int leftShifterValue, int rightShifterValue)
{
    return leftShifterValue * rightShifterValue;    
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Frame
{
    Frame();
    float weight = 3.7f;
    char type = 'A';
    std::string material = "Carbon Fiber"; 
    std::string brand = "Acme";
    bool needMaintenance = false;

    void adjustSeatHeight(int riderHeight);
    bool shockAbsorbFrame(bool needMaintenance);
    bool supportWeight(bool needMaintenance);
};

Frame::Frame()
{
    std::cout << "Frame being constructed!" << std::endl; 
}

void Frame::adjustSeatHeight(int riderHeight)
{
    std::cout << "Seat Height: " << ((riderHeight / 70) + 2 ) * 3 << "\n";
}

bool Frame::shockAbsorbFrame(bool needMaintenanceFrame)
{
    return needMaintenanceFrame ? false : true;
}

bool Frame::supportWeight(bool needMaintenanceFrame)
{
    return needMaintenanceFrame ? false : true;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Wheel
{
    Wheel();
    float circumference = 30.2f;
    int numberOfSpokes = 25;
    std::string material = "Aluminum";
    std::string brand = "Acme";
    bool needMaintenance = true;

    int spin(int speed, int distance); 
    bool shockAbsorbWheel(bool needMaintenance);
    bool supportWeightWheel(bool needMaintenance);
};

Wheel::Wheel()
{
    std::cout << "Wheel being constructed!" << std::endl; 
}

int Wheel::spin(int speed, int distance)
{
    std::cout << speed * distance << "\n";
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

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Brakes
{
    Brakes();
    char type = 'B';
    std::string brand = "Acme";
    std::string material = "Rubber";
    float padRemaining = 0.2f;
    bool needMaintenance = true;

    bool stop(bool needMaintence, float pressureApplied);
    float slow(float pressureApplied);
    bool replaceSqueek(float padRemaining);
};

Brakes::Brakes()
{
    std::cout << "Brakes being constructed!" << std::endl; 
}

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
    if(needMaintenance)
        std::cout << "SSKKKKRRREEEEEEEE \n";
    return pressureApplied * 0.2f;
}

bool Brakes::replaceSqueek(float myPadRemaining)
{
    return (myPadRemaining < 0.5f) ? true : false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Handlebars
{
    Handlebars();
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

Handlebars::Handlebars()
{
    std::cout << "Handlebars being constructed!" << std::endl; 
}

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
    std::cout << "CLICK \n";
    currentGear = desiredGear;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Bicycle
{
    Bicycle();
    Gears gears;
    Frame frame;
    Wheel wheel;
    Brakes brakes;
    Handlebars handlebars;

    bool shiftGears(int desiredGear, int currentGear);
    bool pedalForward(int pedalSpeed);
    bool brake(int appliedPressure);
    void ringBell();
};

Bicycle::Bicycle()
{
    std::cout << "Bicycle being constructed!" << std::endl; 
}

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
void Bicycle::ringBell()
{
    std::cout << "Ding, Ding \n";
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main()
{
    // Example::main();
    
    Computer computer;
    computer.connectToInternet();
    computer.save();
    computer.runApp();
    std::cout << "Is the RAM higher than 8? " << (computer.RAMAmount > 8 ? "Yes" : "No") << "\n\n";
    
    Car car;
    car.moveForward();
    car.stopMovement();
    car.turn();
    car.honk();
    std::cout << "Does it have 5 seats? " << (car.numberOfSeats >= 5 ? "Yes" : "No") << "\n\n";
    
    Tree tree;
    tree.grow();
    // This produceFruit is giving me issues again.  I do not understand the error it produces when I run it:
        // in function `main':
        // main.cpp:(.text+0x16e2): undefined reference to `Tree::produceFruit()'
        // clang-12: error: linker command failed with exit code 1 (use -v to see invocation)
        // exit status 1
    // tree.produceFruit();
    tree.photosynthesize();
    std::cout << "The tree is " << tree.height << " feet tall and has " << tree.numberOfBranches << " branches! \n";
    
    Tree::Fruit fruit;
    fruit.fallFromTree();
    fruit.produceSeeds();
    fruit.inspireTheoryOfGravity();
    std::cout << "Does the apple have more than 4 seeds? " << (fruit.numberOfSeeds > 4 ? "Yes" : "No") << "\n\n";

    PersonTwo personTwo;
    personTwo.run();
    personTwo.jump();
    personTwo.playPiano();
    personTwo.face();
    PersonTwo::Eye eye;
    eye.open();
    eye.close();
    eye.see();
    std::cout << "Is the person awake? Will they play the Piano? " << (eye.open() ? "Yes" : "No") << " and " << (eye.open() && personTwo.playPiano() ? "Yes" : "No") << "\n\n";

    Gears gears;
    gears.propelBike(true, 5, 5);
    gears.freeSpin(false);
    gears.shiftGear(2, 4);
    std::cout << "Do the gears need maintenance? " << (gears.needMaintenance ? "Yes" : "No") << "\n\n";
    
    Frame frame;
    frame.adjustSeatHeight(4);
    frame.shockAbsorbFrame(false);
    frame.supportWeight(false);
    std::cout << "Is the frame sound? " << (frame.needMaintenance ? "No" : "Yes") << "\n\n";

    Wheel wheel;
    wheel.spin(10, 60);
    wheel.shockAbsorbWheel(true);
    wheel.supportWeightWheel(true);
    std::cout << "Is the wheel sound? " << (wheel.needMaintenance ? "No" : "Yes") << "\n\n";

    Brakes brakes;
    brakes.stop(false, 3.5f);
    brakes.slow(4.7f);
    brakes.replaceSqueek(0.2f);
    std::cout << "Do the brakes need replaced? " << (brakes.replaceSqueek(0.2f) ? "Yes" : "No") << "\n\n";

    Handlebars handlebars;
    handlebars.turn(false, 0.3f);
    handlebars.engageBrakes(false, 3.7f);
    handlebars.shiftGears(5);
    std::cout << "Do the handlebars need maintenance? " << (handlebars.needMaintenance ? "Yes" : "No") << "\n\n";

    Bicycle bicycle;
    bicycle.shiftGears(2, 5);
    bicycle.pedalForward(5);
    bicycle.brake(4);
    bicycle.ringBell();
    std::cout << "\n";
    
    std::cout << "good to go!" << std::endl;
}
