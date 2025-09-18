import {TurboModule, TurboModuleRegistry} from 'react-native';

export interface Spec extends TurboModule {
  // This is the JS interface into your C++ functions. These function signatures need to match what is in your C++ header file
  readonly multiply: (num1: number, num2: number) => number;
}

export default TurboModuleRegistry.getEnforcing<Spec>(
  'NativeMultiplierModule',
);