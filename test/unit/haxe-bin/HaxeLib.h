/**
 * HaxeLib.h
 * Automatically generated by HaxeEmbed
 */

#ifndef HaxeLib_h
#define HaxeLib_h

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include "MessagePayload.h"

typedef const char* HaxeLib_NonTrivialAlias;
enum HaxeLib_IntEnum2 {
	AAA = 9,
	BBB = 10,
	CCC = 8
};
typedef enum HaxeLib_IntEnum2 HaxeLib_EnumAlias;
typedef void HaxeLib_AliasA;
typedef HaxeLib_AliasA HaxeLib_CppVoidX;
typedef void (* function_Bool_Void) (bool);
typedef void (* function_Void) (void);
typedef int (* function_Int) (void);
typedef const char* (* function_Int_cpp_ConstCharStar) (int);
typedef int* (* function_cpp_Star_Int__cpp_Star_Int_) (int*);
typedef const char* (* function_CustomStar_Int__cpp_ConstCharStar) (int*);
typedef function_CustomStar_Int__cpp_ConstCharStar HaxeLib_FunctionAlias;
typedef void (* function_MessagePayload_Void) (MessagePayload);
enum HaxeLib_IntEnumAbstract {
	A = 0,
	B = 1
};

typedef void (* HaxeExceptionCallback) (const char* exceptionInfo);

#ifdef __cplusplus
extern "C" {
#endif

	/**
	 * Initializes a haxe thread that remains alive indefinitely and executes the user's haxe main()
	 * 
	 * This must be first before calling haxe functions (otherwise those calls will hang waiting for a response from the haxe thread)
	 * 
	 * @param unhandledExceptionCallback a callback to execute if an unhandled exception occurs on the haxe thread. The haxe thread will continue processing events after an unhandled exception. Use `NULL` for no callback
	 * @returns `NULL` if the thread initializes successfully or a null terminated C string if an error occurs during initialization
	 */
	const char* HaxeLib_initializeHaxeThread(HaxeExceptionCallback unhandledExceptionCallback);

	/**
	 * Ends the haxe thread after it finishes processing pending events (events scheduled in the future will not be executed). Once ended, it cannot be restarted
	 * 
	 * No more calls to main-thread haxe functions can be made (as these will hang waiting for a response from the main thread)
	 *
	 * If the haxe thread is active it will blocks until the haxe thread has finished (unless executed on the haxe main thread)
	 * 
	 * Thread-safety: May be called on a different thread to `HaxeLib_startHaxeThread`
	 * @returns `true` if thread was stopped synchronously or `false` otherwise – this might be because the haxe thread was not running or another thread has already called `stopHaxeThread()`
	 */
	bool HaxeLib_stopHaxeThread();

	int HaxeLib_Main_getLoopCount();

	int HaxeLib_Main_hxcppGcMemUsage();

	int HaxeLib_Main_hxcppGcMemUsageExternal();

	void HaxeLib_Main_hxcppGcRun(bool major);

	void HaxeLib_Main_printTime();

	/**
	 * Some doc
	 * @param a some integer
	 * @param b some string
	 * @returns void
	 */
	void HaxeLib_voidRtn(int a, const char* b, HaxeLib_NonTrivialAlias c, HaxeLib_EnumAlias e);

	void HaxeLib_noArgsNoReturn();

	/**
	 * when called externally from C this function will be executed synchronously on the main thread
	 */
	bool HaxeLib_callInMainThread(double f64);

	/**
	 * When called externally from C this function will be executed on the calling thread.
	 * Beware: you cannot interact with the rest of your code without first synchronizing with the main thread (or risk crashes)
	 */
	bool HaxeLib_callInExternalThread(double f64);

	int HaxeLib_add(int a, int b);

	int* HaxeLib_starPointers(void* starVoid, HaxeLib_CppVoidX* starVoid2, HaxeLib_CppVoidX* customStar, int** customStar2, const void* constStarVoid, int* starInt, const char* constCharStar);

	void* HaxeLib_rawPointers(void* rawPointer, int64_t* rawInt64Pointer, const void* rawConstPointer);

	int64_t* HaxeLib_hxcppPointers(function_Bool_Void assert, void* pointer, int64_t* int64Array, int int64ArrayLength, const void* constPointer);

	function_Int_cpp_ConstCharStar HaxeLib_hxcppCallbacks(function_Bool_Void assert, function_Void voidVoid, function_Int voidInt, function_Int_cpp_ConstCharStar intString, function_cpp_Star_Int__cpp_Star_Int_ pointers, HaxeLib_FunctionAlias fnAlias, function_MessagePayload_Void fnStruct);

	MessagePayload HaxeLib_externStruct(MessagePayload v, MessagePayload* vStar);

	/**
	 * Test the GC behavior, runs on haxe main thread
	 */
	void HaxeLib_allocateABunchOfData();

	/**
	 * Test the GC behavior, runs on external (but hxcpp attached) thread
	 */
	void HaxeLib_allocateABunchOfDataExternalThread();

	void HaxeLib_optional(float single);

	void HaxeLib_badOptional(float opt, float notOpt);

	enum HaxeLib_IntEnum2 HaxeLib_enumTypes(enum HaxeLib_IntEnumAbstract e, const char* s, HaxeLib_EnumAlias a);

	void HaxeLib_cppCoreTypes(size_t sizet, char char_, const char* constCharStar);

	/**
	 * single-line doc
	 */
	uint64_t HaxeLib_cppCoreTypes2(int i, double f, float s, signed char i8, short i16, int i32, int64_t i64, uint64_t ui64, const char* str);

	void HaxeLib_throwException();

	int HaxeLib_pack__ExampleClass_ExampleClassPrivate_examplePrivate();

	int HaxeLib_pack_ExampleClass_example();

#ifdef __cplusplus
}
#endif

#endif /* HaxeLib_h */
