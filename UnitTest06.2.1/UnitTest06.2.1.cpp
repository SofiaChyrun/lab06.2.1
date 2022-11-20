#include "pch.h"
#include "CppUnitTest.h"
#include "../ChyrunSofialab6.2.1/ChyrunSofialab6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0621
{
	TEST_CLASS(UnitTest0621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 1,2,3,4,5,6 };
			t = Max(a, n);
			Assert::AreEqual(t, 6);
		}
	};
}
