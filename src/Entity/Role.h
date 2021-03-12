#pragma once
#include <string>

using namespace std;

// Each role assigns different starting attributes for the character
class Role
{
protected:
    string roleName; // Can either be a warrior or an assassin for now
    double baseDef;  // Base defense value
    double baseAtt;  // Base damage value

public:
    Role(char roleIndex); // Given an index chosen from the console, a role is asign for the character
};