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

bool Computer::save(std::string fileName, bool clickSaveButton)
{
    return fileName != "" && clickSaveButton ? true : false;
}

void Computer::runApp(std::string text)
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
    Fruit produceFruit(int grow = 7);
    int photosynthesize(int sunLight = 5, int water = 3, int unkonwnFactor = 7);
};

Tree::Tree()
{
    std::cout << "Tree being constructed!" << std::endl;
}

Tree::Fruit::Fruit()
{
    std::cout << "Fruit being constructed!" << std::endl;
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
    Wheel();
    float circumference = 30.2f;
    int numberOfSpokes = 25;
    std::string material = "Aluminum";
    std::string brand = "Acme";
    bool needMaintenance = true;

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
