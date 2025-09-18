#include "NativeMultiplierModule.h"

namespace facebook::react {

NativeMultiplierModule::NativeMultiplierModule(std::shared_ptr<CallInvoker> jsInvoker)
    : NativeMultiplierModuleCxxSpec(std::move(jsInvoker)) {}

// This is where the actual C++ work happens
double NativeMultiplierModule::multiply(jsi::Runtime& rt, double num1, double num2) {
  return num1 * num2;
}

} // namespace facebook::react