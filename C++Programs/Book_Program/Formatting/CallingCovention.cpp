// Calling conventions

//     First I should say that __fastcall is the keyword used to specify the Register calling convention.A calling convention tells the compiler how it should call functions; how the function name will be exported, how the function’s parameters should be passed, and who is responsible for cleaning up the stack (called function or calling function). Table A lists the calling conventions supported by C++Builder and their associated keywords.

// Table A: Calling conventions and their keywords.

// Calling convention

// Keyword

// C  ----------------->     __cdecl

// Standard call --------->  __stdcall

// Register --------------->  __fastcall

// Pascal  ----------------->  __pascal

// The default calling convention for a C++Builder project is the C calling convention.

// Q. when we explicitly declare a function to use the __fastcall convention.

// (A) Arguments are placed in registers
// (B) Arguments are placed in stack 
// (C) Arguments are placed in Heap

// Answer(A)

/* void __fastcall
TForm1::FormCreate(TObject *Sender)
{
}

*/

// It’s obvious from looking at this declaration that the Register calling convention is being used(the __fastcall keyword proceeds the function name).

// Q. What is the size of empty class?
// 1 Byte
//  to ensure that the two different objects will have different addresses.

// Q. Is const better than #define?

// geneally Yes

// In general, const is a better option if we have a choice. There are situations when #define cannot be replaced by const. For example, #define can take parameters (See this for example). #define can also be used to replace some text in a program with another text.

// Q . Can we reinitialize reference variable?
// No

