#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-6.3 IT/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int q = 0;
			const int n = 1;
			int a[n] = {3};
			quantity(a,n,q);
			Assert::AreEqual(q, 1);
		}
	};
}
