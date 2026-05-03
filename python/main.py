#Brett Rogers
import Viper

id = 0
print("This is an interoperable test between")
print("---------------------------")
print();
print("Rust/C++/Python")
print();
print("This is a test for the improved Viper Engine Framework");
print("Please Enter a Number for the ID");
id = int(input())
print();


print("Python says, C++, Spawn a Generic with ID of", id)
g = Viper.Spawn(id)
print("From Rust passed to C++ passed to Python:", Viper.Get(g))



