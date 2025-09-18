#include "NativeMultiplierModule.h"

namespace facebook::react {

  NativeMultiplierModule(std::shared_ptr<CallInvoker> jsInvoker) : NativeSampleModuleCxxSpec(std::move(jsInvoker)) {}

  // This is where the actual C++ work happens
  int multiply(jsi::Runtime& rt, int num1, int num2) {
    return num1 * num2;
  }

} // namespace facebook::react