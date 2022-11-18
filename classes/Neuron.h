#include <vector>
#include <cmath>
using std::vector;

//this is the building block of a Boltzmann machine
class Neuron {
public:
    /*
        Setter method for the input member.
        Parameters:
            - bool input: input for the neuron.
    */
    void SetInput(bool);


    /*
        Getter method for the output member.
    */
    bool GetOutput();


    /*
        Calculates the updated value of the neuron.
        Parameters:
            - vector<float> connections:    the weights of the connections.
            - vector<bool> states:          the state of all the other neurons.
            - float T:                      the temperature of the network.
    */
    bool Update(vector<float>, vector<bool>, float);


    /*
        Constructor
        Parameters:
            - bool output:      the starting output of the neuron.
            - float x0:         The value of the sigmoid's midpoint.
            - float L:          The supremum of the values of the logistic function.
            - float k:          The logistic growth rate or steepness of the curve.
    */
    Neuron(bool, float, float, float);


    /*
        Constructor that will initialize x0 = 0, L = 0, k = 1 (standard logistic function).
        Parameters:
            - bool output: the starting output of the neuron.
    */
    Neuron(bool);
private:
    bool input;         // The input of the noeuron.
    bool output;        // The current output of the neuron.
    float x0;     // The value of the sigmoid's midpoint. Used in LogisticFunction(). Usually 0.
    float L;      // The supremum of the values of the function. Used in LogisticFunction. Usually 1.
    float k;      // The logistic growth rate or steepness of the curve. Used in Logistic Function. Usually 1.


    /*
        Calculates the output of the logistic function.
        Parameters:
            - float x:  input for the function.
    */
    bool LogisticFunction(float);

};