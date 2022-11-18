#include "Neuron.h"


/*
    Setter method for the input member.
    Parameters:
        - bool input: input for the neuron.
*/
void Neuron::SetInput(bool input) {
    Neuron::input = input;
    return;
}


/*
    Getter method for the output member.
*/
bool Neuron::GetOutput() {
    return Neuron::output;
}


/*
    Calculates the updated value of the neuron.
    Parameters:
        - vector<float> connections:    the weights of the connections.
        - vector<bool> states:          the state of all the other neurons.
        - float T:                      the temperature of the network.

    TODO: to be implemented.
*/
bool Neuron::Update(vector<float> weights, vector<bool> states, float T) {
    return false;
}


/*
    Calculates the output of the logistic function.
    Parameters:
        - float x:  input for the function.
*/
bool Neuron::LogisticFunction(float x) {
    return Neuron::L/(1+expf((-Neuron::k) * (x - Neuron::x0)));
}


/*
    Constructor.
    Parameters:
        - bool output:      the starting output of the neuron.
        - float x0:         The value of the sigmoid's midpoint.
        - float L:          The supremum of the values of the logistic function.
        - float k:          The logistic growth rate or steepness of the curve.
*/
Neuron::Neuron(bool output, float x0, float L, float k) {
    Neuron::output = output;
    Neuron::x0 = x0;
    Neuron::L = L;
    Neuron::k = k;
}


/*
    Constructor that will initialize x0 = 0, L = 0, k = 1 (standard logistic function).
    Parameters:
        - bool output: the starting output of the neuron.
*/
Neuron::Neuron(bool output) {
    Neuron::output = output;
    Neuron::x0 = 0.0f;
    Neuron::L = 1.0f;
    Neuron::k = 1.0f;
}
