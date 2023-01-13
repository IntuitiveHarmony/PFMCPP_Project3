/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) do this for each class in this project: 
    initialize some of your member variables either in-class or in the Constructor member initializer list.
    Show me that you understand how to use these language features.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable that IS NOT initialized in-class
    float b { 2.f }; //a member variable that IS initialized in-class
    UDT() : a(0) { } // 'constructor-initializer-list' initializing the member that wasn't initialized in-class.
    void printAandB()  //the member function
    {
        std::cout << "UDT::printAandB() a:" << a << " b: " << b << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printAandB(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()



struct Computer
{
    
    float storageAmount = {0};
    int RAMAmount = {0};
    std::string manufacturer = {""};
    float screenSize = {0.0f};
    int amountUSBPort = {0};
    
    Computer();

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

bool Computer::save(std::string fileName, bool clickSaveButton)
{
    return fileName != "" && clickSaveButton ? true : false;
}

void Computer::runApp(std::string text)
{
    std::cout << text << " on " << RAMAmount << " GB of RAM" << std::endl;
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

Car::Car() :
engineSize(0),
make(""),
model(""),
numberOfSeats(0),
averageMPG(0)
{
  std::cout << "Car being constructed!" << std::endl;
}

int Car::moveForward(int distanceTraveled, int time)
{
    std::cout << distanceTraveled / time << std::endl;
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

void Car::honk()
{
    std::cout << "Beep, Beep! \nHere are some of the initial values of the car member variables: \nEnginesize: " << engineSize  << "\nMake: " << make << "\nModel: " << model << std::endl;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Tree
{ 
    float height = {0.0f};
    int age = {0};
    std::string type = {""};
    std::string location = {""};
    int numberOfBranches = {0};

    Tree();

    struct Fruit
    {
        std::string name = {""};
        std::string color = {""};
        bool readyToEat = {false};
        int numberOfSeeds = {0};
        
        Fruit();

        void produceSeeds();
        void fallFromTree();
        void inspireTheoryOfGravity();
    };

    void grow();
    Fruit produceFruit(int grow = 7);
    int photosynthesize(int sunLight = 5, int water = 3, int unkonwnFactor = 7);
};

Tree::Tree()
{
    std::cout << "Tree being constructed!" << std::endl;
}

Tree::Fruit::Fruit()
{
    std::cout << "Fruit being constructed! \nRight now it has " << numberOfSeeds << " seeds." << std::endl;
}

void Tree::grow()
{
    std::cout << "All is well in the shade of the apple tree" << std::endl;
}

Tree::Fruit Tree::produceFruit(int grow)
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

void Tree::Fruit::produceSeeds()
{
    srand(1);
    numberOfSeeds = rand() % 10;
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
    float height = {0.0f};
    int age = {0};
    int numberOfSiblings = {0};
    std::string job = {""};
    std::string address = {""};

    PersonTwo();

    struct Eye
    {
        std::string color = {""};
        bool needsGlasses = {false};
        bool hasCataracts = {false};
        std::string typeOfColorBlindness = {""};
        std::string vision = {""};

        Eye();

        bool open(bool awake = true);
        bool close(bool awake = true);
        void see();
    };

    bool run(int speed = 7);
    int jump(int crouch = 9, int energy = 4);
    bool playPiano(bool memoryRecal = true, int nerves = 11);
    void printFace();
};

PersonTwo::PersonTwo()
{
    std::cout << "PersonTwo being constructed!" << std::endl; 
}

PersonTwo::Eye::Eye()
{
    std::cout << "The eye is being constructed!" << std::endl;
}

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

void PersonTwo::printFace()
{
    std::cout << "(o_*)" << std::endl;
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

Gears::Gears() :
numberOfGears(0),
brand(""),
type(""),
condition(""),
needMaintenance(false)
{
    std::cout << "Gears being constructed!" << std::endl; 
}

int Gears::propelBike(bool pedal, int gearRatio, int pedalSpeed)
{
    return pedal ? gearRatio * pedalSpeed : 0;
}

bool Gears::freeSpin(bool needmaintenanceGears)
{
    std::cout << "Initial number of gears: " << numberOfGears << std::endl;
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
    float weight = {0.0f};
    char type = {'A'};
    std::string material = {""}; 
    std::string brand = {""};
    bool needMaintenance = {false};

    Frame();

    void adjustSeatHeight(int riderHeight);
    bool shockAbsorb(bool needMaintenance);
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

bool Frame::shockAbsorb(bool needMaintenanceFrame)
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
    float circumference = {0.0f};
    int numberOfSpokes = {0};
    std::string material = {""};
    std::string brand = {""};
    bool needMaintenance = {false};

    Wheel();

    int spin(int speed, int distance); 
    bool shockAbsorb(bool needMaintenance);
    bool supportWeight(bool needMaintenance);
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

bool Wheel::shockAbsorb(bool needMaintenanceWheel)
{
    return ! needMaintenanceWheel;
}

bool Wheel::supportWeight(bool needMaintenanceWheel)
{
    return ! needMaintenanceWheel;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

struct Brakes
{
    char type = {'A'};
    std::string brand = {""};
    std::string material = {"Rubber"};
    float padRemaining = {1.0f};
    bool needMaintenance = {false};

    Brakes();

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
    int currentGear = {0};
    char type = {'A'};
    std::string material = {""};
    float width = {0.0f};
    std::string brand = {""};
    bool needMaintenance = {false};

    Handlebars();

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
    computer.save("Sweet Cat Video", true);
    computer.runApp("App is running");
    std::cout << "Is the RAM higher than 8? " << (computer.RAMAmount > 8 ? "Yes" : "No") << "\n\n";
    
    Car car;
    car.moveForward(60, 4);
    car.stopMovement(true);
    car.turn(false);
    car.honk();
    std::cout << "Does it have 5 seats? " << (car.numberOfSeats >= 5 ? "Yes" : "No") << "\n\n";
    
    Tree tree;
    tree.grow();
    tree.produceFruit();
    tree.photosynthesize();
    std::cout << "The tree is " << tree.height << " feet tall and has " << tree.numberOfBranches << " branches! \n";
    
    Tree::Fruit fruit;
    fruit.produceSeeds();
    fruit.fallFromTree();
    fruit.inspireTheoryOfGravity();
    std::cout << "Does the apple have more than 4 seeds? " << (fruit.numberOfSeeds > 4 ? "Yes, it has " : "No, it only has ") << fruit.numberOfSeeds << (fruit.numberOfSeeds == 1 ? " seed. \n\n" : " seeds. \n\n");

    PersonTwo personTwo;
    personTwo.run();
    personTwo.jump();
    personTwo.playPiano();
    personTwo.printFace();
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
    frame.shockAbsorb(false);
    frame.supportWeight(false);
    std::cout << "Is the frame sound? " << (frame.needMaintenance ? "No" : "Yes") << "\n\n";

    Wheel wheel;
    wheel.spin(10, 60);
    wheel.shockAbsorb(true);
    wheel.supportWeight(true);
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
