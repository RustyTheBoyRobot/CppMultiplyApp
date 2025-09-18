#pragma once

// This is created by Codegen and should match what's in package.json (`${codegenConfig.name}JSI.h`)
#include <CppMultiplyAppSpecsJSI.h>

#include <memory>

namespace facebook::react {

class NativeMultiplierModule : public NativeMultiplierModuleCxxSpec<NativeMultiplierModule> {
public:
  NativeMultiplierModule(std::shared_ptr<CallInvoker> jsInvoker);

  // This (and any other functions you define) should match the interface defined in the JS spec
  double multiply(jsi::Runtime& rt, double num1, double num2);
};

} // namespace facebook::react
