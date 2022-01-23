
# C and C++ are different: don’t mix them, and don’t mix them up.

# Don’t panic.

* C is an imperative programming language.


* C is a compiled programming language.


* A correct C program is portable between different platforms.


* A C program should compile cleanly without warnings.


* Punctuation characters can be used with several different meanings.


* All identifiers in a program have to be declared.


* Identifiers may have several consistent declarations.


* Declarations are bound to the scope in which they appear.


* Declarations specify identifiers, whereas definitions specify objects.

* An object is defined at the same time it is initialized.

* Missing elements in initializers default to 0.

* For an array with n elements, the first element has index 0, and the last has index n-1.

* Each object or function must have exactly one definition.

* Domain iterations should be coded with a for statement.

* The loop variable should be defined in the initial part of a for.

* The value 0 represents logical false.

* Any value different from 0 represents logical true.

* Don’t compare to 0, false, or true.

* All scalars have a truth value.

* case values must be integer constant expressions.

* case labels must not jump beyond a variable definition.

* The type size_t represents values in the range [0, SIZE_MAX].

* Unsigned arithmetic is always well defined.

* The operations +, -, and * on size_t provide the mathematically correct result if it is representable as a size_t.

* For unsigned values, a == (a/b) *b + (a%b).

* Unsigned / and % are well defined only if the second operand is not 0.

* Arithmetic on size_t implicitly does the computation %(SIZE_MAX+1).

* In the case of overflow, unsigned arithmetic wraps around.

* The result of unsigned / and % is always smaller than the operands.

* Unsigned / and % can’t overflow.

* Operators must have all their characters directly attached to each other.

* Side effects in value expressions are evil.

* Never modify more than one object in a statement.

* Comparison operators return the value false or true.

* Logic operators return the value false or true.

* &&, ||, ?:, and , evaluate their first operand first.

* Don’t use the , operator.

* Most operators don’t sequence their operands.

* Function calls don’t sequence their argument expressions.

* Functions that are called inside expressions should not have side effects.

* C programs primarily reason about values and not about their representation.

* All values are numbers or translate to numbers.

* All values have a type that is statically determined.

* Possible operations on a value are determined by its type.

* A value’s type determines the results of all operations.

* A type’s binary representation determines the results of all operations.

* A type’s binary representation is observable.

* (as-if) Programs execute as if following the abstract state machine.

* Type determines optimization opportunities.

* Before arithmetic, narrow integer types are promoted to signed int.

* Each of the four classes of base types has three distinct un-promoted types.

* Use size_t for sizes, cardinalities, or ordinal numbers.

* Use unsigned for small quantities that can’t be negative.

* Use signed for small quantities that bear a sign.

* Use ptrdiff_t for large differences that bear a sign.

* Use double for floating-point calculations.

* Use double complex for complex calculations.

* Consecutive string literals are concatenated.

* Numerical literals are never negative.

* Decimal integer constants are signed.

* A decimal integer constant has the first of the three signed types that fits it.

* The same value can have different types.

* Don’t use octal or hexadecimal constants to express negative values.

* Use decimal constants to express negative values.

* Different literals can have the same value.

* The effective value of a decimal floating-point constant may be different from its literal value.

* Literals have value, type, and binary representations.

* I is reserved for the imaginary unit.

* Unary - and + have the type of their promoted argument.

* Avoid narrowing conversions.

* Don’t use narrow types in arithmetic.

* Avoid operations with operands of different signed-ness.

* Use unsigned types whenever you can.

* Chose your arithmetic types such that implicit conversions are harmless.

* All variables should be initialized.

* Use designated initializers for all aggregate data types.

* {0} is a valid initializer for all object types that are not VLA.

* All constants with a particular meaning must be named.

* All constants with different meanings must be distinguished.

* An object of const-qualified type is read-only.

* String literals are read-only.

* Enumeration constants have either an explicit or a positional value.

* Enumeration constants are of type signed int.

* An integer constant expression doesn’t evaluate any object.

* Macro names are in all caps.

* A compound literal defines an object.

* Don’t hide a terminating semicolon inside a macro.

* Right-indent continuation markers for macros to the same column.

* The same value may have different binary representations.

* Unsigned arithmetic wraps nicely.

* The maximum value of any integer type is of the form 2p − 1.

* Arithmetic on an unsigned integer type is determined by its precision.

* The second operand of a shift operation must be less than the precision.

* Positive values are represented independently from signed-ness.

* Once the abstract state machine reaches an undefined state, no further assumption about the continuation of the execution can be made.

* It is your responsibility to avoid undefined behavior of all operations.

* Signed arithmetic may trap badly.

* In two’s complement representation, INT_MIN < -INT_MAX.

* Negation may overflow for signed arithmetic.

* Use unsigned types for bit operations.

* If the type uintN_t is provided, it is an unsigned integer type with exactly N bits of width and precision.

* If the type intN_t is provided, it is signed, with two’s complement representation and has a width of exactly N bits and a precision of N − 1.

* If types with the required properties exist for values of N = 8, 16, 32, and 64, types uintN_t and intN_t, respectively, must be provided.

* For any of the fixed-width types that are provided, _MIN (only signed), maximum _MAX, and literals _C macros are provided, too.

* Floating-point operations are neither associative, commutative, nor distributive.

* Never compare floating-point values for equality.

* Arrays are not pointers.

* An array in a condition evaluates to true.

* There are array objects but no array values.

* Arrays can’t be compared.

* Arrays can’t be assigned to.

* VLAs can’t have initializers.

* VLAs can’t be declared outside functions.

* The length of an FLA is determined by an integer constant expression (ICE) or
by an initializer.

* An array-length specification must be strictly positive.

* An array with a length that is not an integer constant expression is a VLA.

* The length of an array A is (sizeof A)/(sizeof A[0]).

* The innermost dimension of an array parameter to a function is lost.

* Don’t use the sizeof operator on array parameters to functions.

* Array parameters behave as if the array is passed by referenceC .

* A string is a 0-terminated array of char.

* Using a string function with a non-string has undefined behavior.

* Pointers are opaque objects.

* Pointers are valid, null, or indeterminate.

* Initialization or assignment with 0 makes a pointer null.

* In logical expressions, pointers evaluate to false if they are null.

* Indeterminate pointers lead to undefined behavior.

* Always initialize pointers.

* Omitted struct initializers force the corresponding member to 0.

* A struct initializer must initialize at least one member.

* struct parameters are passed by value.

* Structures can be assigned with = but not compared with == or !=.

* A structure layout is an important design decision.

* All struct declarations in a nested declaration have the same scope of visibility.

* Forward-declare a struct within a typedef using the same identifier as the
tag name.

* A typedef only creates an alias for a type, but never a new type.


* Identifier names terminating with _t are reserved.

* All functions must have prototypes.

* Functions have only one entry but can have several returns.

* A function return must be consistent with its type.

* Reaching the end of the {} block of a function is equivalent to a return statement without an expression.


* Reaching the end of the {} block of a function is only allowed for void functions.

* Use EXIT_SUCCESS and EXIT_FAILURE as return values for main.

* Reaching the end of main is equivalent to a return with value EXIT_SUCCESS.


* Calling exit(s) is equivalent to the evaluation of return s in main.

* exit never fails and never returns to its caller.

* All command-line arguments are transferred as strings.

* Of the arguments to main, argv[0] holds the name of the program invocation.

* Of the arguments to main, argv[argc] is 0.

* Make all preconditions for a function explicit.

* In a recursive function, first check the termination condition.

* Ensure the preconditions of a recursive function in a wrapper function.

* Multiple recursion may lead to exponential computation times.

* A bad algorithm will never lead to a implementation that performs well.

* Improving an algorithm can dramatically improve performance.

* Failure is always an option.

* Check the return value of library functions for errors.

* Fail fast, fail early, and fail often.

* Identifier names terminating with _s are reserved.

* Missed preconditions for the execution platform must abort compilation.

* Only evaluate macros and integer literals in a preprocessor condition.

* In preprocessor conditions, unknown identifiers evaluate to 0.

* Opaque types are specified through functional interfaces.

* Don’t rely on implementation details of opaque types.

* puts and fputs differ in their end-of-line handling.

* Text input and output converts data.

* There are three commonly used conversions to encode end-of-line.

* Text lines should not contain trailing white space.

* Parameters of printf must exactly correspond to the format specifiers.

* Use ”%d” and ”%u” formats to print integer values.

* Use the ”%x” format to print bit patterns.

* Use the ”%g” format to print floating-point values.

* Using an inappropriate format specifier or modifier makes the behavior undefined.


* Use ”%+d”, ”%#X”, and ”%a” for conversions that have to be read later.

* Don’t use gets.

* fgetc returns int to be able to encode a special error status, EOF, in addition129
130
to all valid characters.

* End of file can only be detected after a failed read.

* The interpretation of numerically encoded characters depends on the execution
character set.

* Regular program termination should use a return from main.

* Use exit from a function that may terminate the regular control flow.

* Don’t use functions other than exit for program termination, unless you have
to inhibit the execution of library cleanups.

* Use as many asserts as you can to confirm runtime properties.

* In production compilations, use NDEBUG to switch off all assert.

# All C code must be readable.

* Short-term memory and the field of vision are small.

* Coding style is not a question of taste but of culture.

* When you enter an established project, you enter a new cultural space.

* Choose a consistent strategy for white space and other text formatting.

* Have your text editor automatically format your code correctly.

* Choose a consistent naming policy for all identifiers.

* Any identifier that is visible in a header file must be conforming.

* Don’t pollute the global space of identifiers.

* Names must be recognizable and quickly distinguishable.

* Naming is a creative act.

* File-scope identifiers must be comprehensive.

* A type name identifies a concept.

* A global constant identifies an artifact.

* A global variable identifies state.

* A function or functional macro identifies an action.

* (what) Function interfaces describe what is done.

* (what for) Interface comments document the purpose of a function.

* (how) Function code tells how the function is organized.

* (in which manner) Code comments explain the manner in which function details
are implemented.

* Separate interface and implementation.

* Document the interface—explain the implementation.

* Document interfaces thoroughly.

* Structure your code in units that have strong semantic connections.

* Implement literally.

* Control flow must be obvious.

* Macros should not change control flow in a surprising way.

* Function-like macros should syntactically behave like function calls.

* Function parameters are passed by value.

* Global variables are frowned upon.

* Express small tasks as pure functions whenever possible.

* Using 
* with an indeterminate or null pointer has undefined behavior.

* A valid pointer refers to the first element of an array of the reference type.

* The length of an array object cannot be reconstructed from a pointer.

* Pointers are not arrays.

* Only subtract pointers from elements of an array object.

* All pointer differences have type ptrdiff_t.

* Use ptrdiff_t to encode signed differences of positions or sizes.

* For printing, cast pointer values to void*, and use the format %p.

* Pointers have truth.

* Set pointer variables to 0 as soon as you can.

* Accessing an object that has a trap representation of its type has undefined
behavior.

* When dereferenced, a pointed-to object must be of the designated type.

* A pointer must point to a valid object or one position beyond a valid object
or be null.

* Don’t use NULL.

* Don’t hide pointers in a typedef.

* The two expressions A[i] and 
*(A+i) are equivalent.

* (array decay) Evaluation of an array A returns &A[0].

* In a function declaration, any array parameter rewrites to a pointer.

* Only the innermost dimension of an array parameter is rewritten.

* Declare length parameters before array parameters.

* The validity of array arguments to functions must be guaranteed by the programmer.


* (function decay) A function f without a following opening ( decays to a
pointer to its start.

* Function pointers must be used with their exact type.

* The function call operator (...) applies to function pointers.

* Pointer types with distinct base types are distinct.

* sizeof(char) is 1 by definition.

* Every object A can be viewed as unsigned char[sizeof A].

* Pointers to character types are special.

* Use the type char for character and string data.

* Use the type unsigned char as the atom of all object types.

* The sizeof operator can be applied to objects and object types.

* The size of all objects of type T is given by sizeof(T).

* The in-memory order of the representation digits of an arithmetic type is implementation defined.

* On most architectures, CHAR_BIT is 8 and UCHAR_MAX is 255.

* (Aliasing) With the exclusion of character types, only pointers of the same
base type may alias.
Avoid the & operator.
Any object pointer converts to and from void
*.
An object has storage, type, and value.
Converting an object pointer to void
* and then back to the same type is the
identity operation.

* (avoid2 
*) Avoid void
*.

* Don’t use casts.

* (Effective Type) Objects must be accessed through their effective type
or through a pointer to a character type.

* Any member of an object that has an effective union type can be accessed at
any time, provided the byte representation amounts to a valid value of the access
type.

* The effective type of a variable or compound literal is the type of its declaration.

* Variables and compound literals must be accessed through their declared type
or through a pointer to a character type.

* Don’t cast the return of malloc and friends.

* Storage that is allocated through malloc is uninitialized and has no type.

* malloc indicates failure by returning a null pointer value.

* For every allocation, there must be a free.

* For every free, there must be a malloc, calloc, aligned_alloc, or
realloc.

* Only call free with pointers as they are returned by malloc, calloc,
aligned_alloc, or realloc.

* Identifiers only have visibility inside their scope, starting at their declaration.

* The visibility of an identifier can be shadowed by an identifier of the same
name in a subordinate scope.

* Every definition of a variable creates a new, distinct object.

* Read-only object literals may overlap.

* Objects have a lifetime outside of which they can’t be accessed.

* Referring to an object outside of its lifetime has undefined behavior.

* Objects with static storage duration are always initialized.

* Unless they are VLA or temporary objects, automatic objects have a lifetime
corresponding to the execution of their block of definition.

* Each recursive call creates a new local instance of an automatic object.

* The & operator is not allowed for variables declared with register.

* Variables declared with register can’t alias.

* Declare local variables that are not arrays in performance-critical code as
register.

* Arrays with storage class register are useless.

* Objects of temporary lifetime are read-only.

* Temporary lifetime ends at the end of the enclosing full expression.

* For an object that is not a VLA, lifetime starts when the scope of the definition is entered, and it ends when that scope is left.

* Initializers of automatic variables and compound literals are evaluated each
time the definition is met.

* For a VLA, lifetime starts when the definition is encountered and ends when
the visibility scope is left.

* Objects of static or thread-storage duration are initialized by default.

* Objects of automatic or allocated storage duration must be initialized explicitly.

* Systematically provide an initialization function for each of your data types.

* The string strto... conversion functions are not const-safe.

* The memchr and strchr search functions are not const-safe.

* The strspn and strcspn search functions are const-safe.

* sprintf makes no provision against buffer overflow.

* Use snprintf when formatting output of unknown length.

* Multibyte characters don’t contain null bytes.

* Multibyte strings are null terminated.

* Open streams on which you use fread or fwrite in binary mode.

* Files that are written in binary mode are not portable between platforms.

* fseek and ftell are not suitable for very large file offsets.

* Labels for goto are visible in the entire function that contains them.

* goto can only jump to a label inside the same function.

* goto should not jump over variable initializations.

 # Premature optimization is the root of all evil.

* Do not trade off safety for performance.

* Optimizers are clever enough to eliminate unused initializations.

* The different notations of pointer arguments to functions result in the same
binary code.

* Not taking addresses of local variables helps the optimizer because it inhibits
aliasing.

* Inlining can open up a lot of optimization opportunities.

* Adding a compatible declaration without the inline keyword ensures the
emission of the function symbol in the current TU.

* An inline function definition is visible in all TUs.

* An inline definition goes in a header file.

* An additional declaration without inline goes in exactly one TU.

* Only expose functions as inline if you consider them to be stable.

* All identifiers that are local to an inline function should be protected by a
convenient naming convention.

* inline functions can’t access identifiers of static functions.223


* inline functions can’t define or access identifiers of modifiable static
objects.

* A restrict-qualified pointer has to provide exclusive access.

* A restrict-qualification constrains the caller of a function. 

# Don’t speculate about the performance of code; verify it rigorously.

* Complexity assessment of algorithms requires proofs.

* Performance assessment of code requires measurement.

* All measurements introduce bias.

* Instrumentation changes compile-time and runtime properties.

* The relative standard deviation of run times must be in a low percentage range.

* Collecting higher-order moments of measurements to compute variance and
skew is simple and cheap.

* Runtime measurements must be hardened with statistics.

* Whenever possible, prefer an inline function to a functional macro.

* A functional macro shall provide a simple interface to a complex task.

* Macro replacement is done in an early translation phase, before any other interpretation is given to the tokens that compose the program.

* (macro retention) If a functional macro is not followed by (), it is not expanded.

* The line number in __LINE__ may not fit into an int.

* Using __LINE__ is inherently dangerous.

* Stringification with the operator # does not expand macros in its argument.

* When passed to a variadic parameter, all arithmetic types are converted as for arithmetic operations, with the exception of float arguments, which are converted to double.

* A variadic function has to receive valid information about the type of each argument in the variadic list.

* Using variadic functions is not portable unless each argument is forced to a specific type.

* Avoid variadic functions for new interfaces.

* The va_arg mechanism doesn’t give access to the length of the va_list.

* A variadic function needs a specific convention for the length of the list.


* The result type of a _Generic expression is the type of the chosen expression.


* Using _Generic with inline functions adds optimization opportunities.


* The type expressions in a _Generic expression should only be  unqualified types: no array types, and no function types.


* The type expressions in a _Generic expression must refer to mutually in compatible types.


* The type expressions in a _Generic expression cannot be a pointer to a VLA.



* All choices expression1 ... expressionN in a _Generic must be valid.


* Side effects in functions can lead to indeterminate results.


* The specific operation of any operator is sequenced after the evaluation of all its operands.


* The effect of updating an object with any of the assignment, increment, or decrement operators is sequenced after the evaluation of its operands.


* A function call is sequenced with respect to all evaluations of the caller.


* Initialization-list expressions for array or structure types are indeterminately sequenced.


* Each iteration defines a new instance of a local object.


* goto should only be used for exceptional changes in control flow.


* Each function call defines a new instance of a local object.


* longjmp never returns to the caller.


* When reached through normal control flow, a call to setjmp marks the call location as a jump target and returns 0.


* Leaving the scope of a call to setjmp invalidates the jump target.


* A call to longjmp transfers control directly to the position that was set by setjmp as if that had returned the condition argument.


* A 0 as a condition parameter to longjmp is replaced by 1.


* setjmp may be used only in simple comparisons inside controlling expression of conditionals.


* Optimization interacts badly with calls to setjmp.


* Objects that are modified across longjmp must be volatile.


* volatile objects are reloaded from memory each time they are accessed.


* volatile objects are stored to memory each time they are modified.


* The typedef for jmp_buf hides an array type.


* C’s signal-handling interface is minimal and should only be used for elementary situations.


* Signal handlers can kick in at any point of execution.


* After return from a signal handler, execution resumes exactly where it was interrupted.


* A C statement may correspond to several processor instructions.


* Signal handlers need types with uninterruptible operations.


* Objects of type sig_atomic_t should not be used as counters.


* Unless specified otherwise, C library functions are not asynchronous signal safe.


* If a thread T0 writes a non-atomic object that is simultaneously read or written by another thread T1 , the behavior of the execution becomes undefined.


* In view of execution in different threads, standard operations on atomic objects
are indivisible and linearizable.


* Use the specifier syntax _Atomic(T) for atomic declarations.


* There are no atomic array types.307


* Atomic objects are the privileged tool to force the absence of race conditions.


* A properly initialized FILE can be used race-free by several threads.


* Concurrent write operations should print entire lines at once.


* Destruction and de-allocation of shared dynamic objects needs a lot of care.


* Pass thread-specific data through function arguments.


* Keep thread-specific state in local variables.


* A thread_local variable has one separate instance for each thread.


* Use thread_local if initialization can be determined at compile time.


* Mutex operations provide linearizability.


* Every mutex must be initialized with mtx_init.


* A thread that holds a non-recursive mutex must not call any of the mutex lock330 functions for it.


* A recursive mutex is only released after the holding thread issues as many calls to mtx_unlock as it has acquired locks.


* A locked mutex must be released before the termination of the thread.


* A thread must only call mtx_unlock on a mutex that it holds.


* Each successful mutex lock corresponds to exactly one call to mtx_unlock.


* A mutex must be destroyed at the end of its lifetime.


* On return from a cnd_t wait, the expression must be checked again.


* A condition variable can only be used simultaneously with one mutex.


* A cnd_t must be initialized dynamically.


* A cnd_t must be destroyed at the end of its lifetime.


* Returning from main or calling exit terminates all threads.


* While blocking on mtx_t or cnd_t, a thread frees processing resources.


* Every evaluation has an effect.


* If F is sequenced before E, then F → E.


* The set of modifications of an atomic object X are performed in an order that is consistent with the sequenced-before relation of any thread that deals with X.


* An acquire operation E in a thread TE synchronizes with a release operation F if another thread TF if E reads the value that F has written.


* If F synchronizes with E, all effects X that happened before F must be visible at all evaluations G that happen after E.


* We only can conclude that one evaluation happened before another if we have a sequenced chain of synchronizations that links them.


* If an evaluation F happened before E, all effects that are known to have happened before F are also known to have happened before E.


* Critical sections that are protected by the same mutex occur sequentially.


* In a critical section that is protected by the mutex mut, all effects of previous critical sections protected by mut are visible.


* cnd_wait and cnd_timedwait have release-acquire semantics for the
mutex.


* Calls to cnd_signal and cnd_broadcast synchronize via the mutex.336


* Calls to cnd_signal and cnd_broadcast should occur inside a critical
section that is protected by the same mutex as the waiters.


* All atomic operations with sequential consistency occur in one global modification order, regardless of the atomic object they are applied to.


* All operators and functional interfaces on atomics that don’t specify other-wise have sequential consistency.


* Synchronizing functional interfaces for atomic objects have a form with _explicit appended that allows us to specify their consistency model.
