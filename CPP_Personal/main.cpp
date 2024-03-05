#include "Personal.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "Pointers/pointer.h"
#include "Tuple/tuple.h"
#include "Map/map.h"
//#include "Smart_Pointers/smart_pointer.h"
#include "Train/train.h"
#include "QT6_INTER/Producer/producer.h"
#include "QT6_INTER/Consumer/consumer.h"

#include <set>

#include <QSharedPointer>
#include <QScopedPointer>

//extern "C" int x;
//extern "C" {int y;}

void notif()
{
    Train mom;
    Train child;

    mom.setObjectName("Mom");
    child.setObjectName("Child");

    QObject::connect(&mom, &Train::alarm, &child, &Train::wake);

    //mom.testing();
    mom.testing();
    child.wake("NODE", 10);

}

int main(int argc, char *argv[])
{




    QSharedPointer<QObject> scoped_ptr(new QObject());


    /* Producer and Consumer example for signals and slots */
//    Producer prod; // Object that produces and sends data
//    Consumer cons; // Object that receives and consumes data

//    // Connect the signal dataAvailable (Will be emited in sendData function by object prod) and the slot onReceivedData
//    // in cons object, each the signal is emited the slot is invoked
//    QObject::connect(&prod, &Producer::dataAvailable, &cons, &Consumer::onReceivedData);
//    prod.sendData(10);
//    // Emit the signal dataAvailable to invoke the slot onReceivedData
//    Q_EMIT prod.dataAvailable(12);



//    Pointer p;
//    p.pointerWithArray();

//    Tuple tup;

//    Map mp;
//    char c = 'a';
//    std::string str =  "aaba";
//    std::cout << "Freq of the char is " << mp.getCharFreq(str, c) << std::endl;

    /* set are contrainers that stores elements without keeping the duplicate */
//    std::set<int> sett = {1, 2 , 3, 1, 2};
//    for(auto &s : sett) {
//        std::cout << s << std::endl;

//    }

    /* Example of retreiving the set in a vector (Dynamic array) */
//    std::vector<int> vc(sett.begin(), sett.end());
//    for (auto &v : vc) {
//        std::cout << v << std::endl;
//    }

    // Creating a vector and copying elements from the set
//    std::vector<int> vec;
//    for (int num : sett) {
//        vec.push_back(num);
//    }

    // Now vec contains the elements of sett
//    for (int num : vec) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;

    /********************* SMART POINTERS *********************/

    /* Unique pointers */
    // std::unique_ptr<SmartPointer> u_ptr = new SmartPointer();  This not works it tries to convert unique_ptr to raw pointers
    //std::unique_ptr<SmartPointer> u_ptr = std::make_unique<SmartPointer>(); // This works
    //std::unique_ptr<SmartPointer> u_ptr(new SmartPointer()); // This works (It's a direct initalization)

    // The following piece of code will not work (Will not even compile) in fact that we're trying to copy a unique ptr
    //std::unique_ptr<int> ptr1 = std::make_unique<int>(42);
    // Copy ptr1 to create additional unique_ptrs
    //std::unique_ptr<int> ptr2 = ptr1;

    /* Shared pointers */
//    std::shared_ptr<int> ptr1 = std::make_shared<int>(42);

    // Copy ptr1 to create additional shared_ptrs
//    std::shared_ptr<int> ptr2 = ptr1;

    // Copy smart pointer works with shared ptr and the pointers will point to the same address
//    std::cout << ptr1.get() << std::endl; // 0x18cfc1c6660
//    std::cout << ptr2.get() << std::endl; // 0x18cfc1c6660

    // Output reference counts
    //std::cout << "Reference count: " << ptr1.use_count() << std::endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

    /********************* SMART POINTERS END *********************/

    return 0;
}
