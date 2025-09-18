#pragma once

#include <AppSpecsJSI.h>

#include <memory>

namespace facebook::react {

class NativeMultiplierModule : public NativeSampleModuleCxxSpec<NativeMultiplierModule> {
public:
  NativeMultiplierModule(std::shared_ptr<CallInvoker> jsInvoker);

  // This (and any other functions you define) should match the interface defined in the JS spec
  int multiply(jsi::Runtime& rt, int num1, int num2);
};

} // namespace facebook::react
