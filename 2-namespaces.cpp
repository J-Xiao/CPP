#include <iostream>

namespace myFriend {
    int alice;
    int bob;
}

namespace myEnemy {
    int carol;
    int bob; // A different Bob
}

int main() {
    myFriend::alice = 19;
    myFriend::bob = 18;

    myEnemy::bob = 60;

    std::cout << "myFriend::alice is " << myFriend::alice << ", myFriend::bob is " << myFriend::bob << ", myEnemy::bob is " << myEnemy::bob << std::endl;

    return 0;
}
