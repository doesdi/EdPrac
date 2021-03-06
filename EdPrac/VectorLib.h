#pragma once
#ifdef VECTORS_EXPORTS
#define VECTORS_API __declspec(dllexport)
#else
#define VECTORS_API __declspec(dllimport)
#endif

namespace VectorFuns {
	class Vector {
	private:
		int n, i;
		char* array;
	public:
		VECTORS_API Vector();
		VECTORS_API Vector(int N);
		VECTORS_API Vector(char a[]);
		VECTORS_API ~Vector();
		VECTORS_API void push_back(char a);
		VECTORS_API void emplace(int j, char a);
		VECTORS_API void clear();
		VECTORS_API void pop_back();
		VECTORS_API void erase(int j);
		VECTORS_API void erase(int begin, int end);
		VECTORS_API int size();
		VECTORS_API bool empty();
		VECTORS_API void resize(int N);
		VECTORS_API void swap(int a, int b);
		VECTORS_API void show();
		VECTORS_API char show(int j);
	};
}
