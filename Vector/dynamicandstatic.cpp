//difference between dynamic and static vector

//1.dynamic vector is a vector which can change its size at runtime.
//static vector is a vector which has a fixed size at compile time.

//2.dynamic vector is implemented using linked list or array.
//static vector is implemented using array.

//3.dynamic vector can grow or shrink in size as needed.
//static vector cannot grow or shrink in size.

//4. Heap memory is used for dynamic vector.
//Stack memory is used for static vector.

//what is stack memory?
//Stack memory is a type of memory that is used for storing local variables and function calls. It is a last in first out (LIFO) data structure. When a function is called, a new stack frame is created and the local variables of the function are stored in that stack frame.
// When the function returns, the stack frame is destroyed and the local variables are removed from the stack. Stack memory is faster than heap memory because it is managed by the operating system and does not require dynamic memory allocation.

//what is heap memory?
//Heap memory is a type of memory that is used for dynamic memory allocation.
// It is a region of memory that is managed by the operating system and can be used to store data that needs to persist beyond the scope of a function. Heap memory is slower than stack memory because it requires dynamic memory allocation and deallocation, which can lead to fragmentation and overhead.

//dynamic memory allocation?
//Dynamic memory allocation is the process of allocating memory at runtime. It allows us to create data structures that can grow or shrink in size as needed.
// In C++, we can use the new operator to allocate memory on the heap and the delete operator to deallocate memory. 
//Dynamic memory allocation is useful when we do not know the size of the data structure at compile time or when we want to create data structures that can grow or shrink in size.