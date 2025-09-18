/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 */

import { useState } from 'react';
import {
  StyleSheet,
  Text,
  TextInput,
  View,
} from 'react-native';

const multiplier = (n1: number, n2: number) => n1 * n2;

function App() {
  const [num1, setNum1] = useState<number>(0);
  const [num2, setNum2] = useState<number>(0);

  const createTextChangedEvent = (numberSetter: (newNumber: number) => void) => {
    const onTextChanged = (updatedText: string) => {
      const sanitizedInput = updatedText.replaceAll(/[^0-9]/g, '');
      numberSetter(Number(sanitizedInput));
    };

    return onTextChanged;
  }
  

  return (
    <View style={styles.container}>
      <Text>First Number</Text>
      <TextInput
        style={styles.input}
        value={String(num1)}
        onChangeText={createTextChangedEvent(setNum1)}
      />
      <Text>Second Number</Text>
      <TextInput
        style={styles.input}
        value={String(num2)}
        onChangeText={createTextChangedEvent(setNum2)}
      />
      <Text>Product</Text>
      <Text>{multiplier(num1, num2)}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    margin: 30,
  },
  input: {
    borderWidth: 1,
    borderColor: 'black',
  }
});

export default App;
