#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethodS0)
		{
			// �������� ������� S0
			Assert::AreEqual(S0(1), 0, 0.1);
		}

		TEST_METHOD(TestMethodS1)
		{
			// �������� ������� S1
			Assert::AreEqual(S1(1), 0, 0.1);
		}

		TEST_METHOD(TestMethodS2)
		{
			// �������� ������� S2
			Assert::AreEqual(S2(1), -0.4, 0.1);
		}

		TEST_METHOD(TestMethodS3)
		{
			// �������� ������� S3
			Assert::AreEqual(S3(1, 2, 0), -0.4, 0.1);
		}

		TEST_METHOD(TestMethodS4)
		{
			// �������� ������� S4
			Assert::AreEqual(S4(1, 1, 0), 0, 0.1);
		}

	};
}