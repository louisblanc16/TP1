#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TP4_TU/TP4_TU.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUtest
{
	TEST_CLASS(TP4TUtest)
	{
	public:
		
		TEST_METHOD(TestEstPair) {
			Assert::AreEqual(estPair(6), 1);
		}

		TEST_METHOD(TestEstPair2) {
			Assert::AreEqual(estPair(7), 0);
		}

		TEST_METHOD(TestEstPair3) {
			Assert::AreEqual(estPair(0), 1);
		}

		TEST_METHOD(TestEstPair4) {
			Assert::AreEqual(estPair(-2), 1);
		}

		TEST_METHOD(TestEstPair5) {
			Assert::AreEqual(estPair(-3), 0);
		}

		TEST_METHOD(TestMax) {
			Assert::AreEqual(max2(5, 3),5);
		}

		TEST_METHOD(TestMax2) {
			Assert::AreEqual(max2(3, 5), 5); //ce test révèle le code
		}

		TEST_METHOD(TestMax3) {
			Assert::AreEqual(max2(-1, -8), -1);
		}

		TEST_METHOD(TestMax4) {
			Assert::AreEqual(max2(4, 4), 4);
		}

		TEST_METHOD(TestFact) {
			Assert::AreEqual(factorielle(0), 1);
		}

		TEST_METHOD(TestFact2) {
			Assert::AreEqual(factorielle(1), 1);
		}

		
		TEST_METHOD(TestFact3) {
			Assert::AreEqual(factorielle(4), 24);
		}

		TEST_METHOD(TestFact4) {
			Assert::AreEqual(factorielle(5), 120);
		}
		
		TEST_METHOD(TestFact5) {
			Assert::AreEqual(factorielle(-3), -6);
		}

		TEST_METHOD(TestMaj1) {
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}

		TEST_METHOD(TestMaj2) {
			Assert::AreEqual(contientMajuscule("BonJour"), 1);
		}

		TEST_METHOD(TestMaj3) {
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}

		TEST_METHOD(TestMaj4) {
			Assert::AreEqual(contientMajuscule(""), 0);
		}

		TEST_METHOD(TestMaj5) {
			Assert::AreEqual(contientMajuscule(NULL), 0);
		}
	};
}
