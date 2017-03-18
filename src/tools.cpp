#include <iostream>
#include "tools.h"

using Eigen::VectorXd;
using Eigen::MatrixXd;
using std::vector;

Tools::Tools() {}

Tools::~Tools() {}

VectorXd Tools::CalculateRMSE(const vector<VectorXd> &estimations,
        const vector<VectorXd> &ground_truth) {
    /**
TODO:
     * Calculate the RMSE here.
     */
    Eigen::VectorXd sum(estimations[0].size());
    sum << 0,0,0,0;
    for(int i=0; i < estimations.size(); i++){
        Eigen::VectorXd err = (estimations[i] - ground_truth[i]);
        sum += (err.array()*err.array()).matrix();
    }
    return (sum / estimations.size()).array().sqrt();
}

MatrixXd Tools::CalculateJacobian(const VectorXd& x_state) {
    /**
TODO:
     * Calculate a Jacobian here.
     */
    return Eigen::MatrixXd(2,2);
}
