#ifndef _ECE150_10_PROVIDED_
#define _ECE150_10_PROVIDED_

struct intListEntry {
    int i; // The int value we want to store in this entry
    intListEntry *next; // Address of the next entry in the list
};

/**
 * restoreSorted() -- you need to define this function
 * in your .cpp file.
 */
void restoreSorted(intListEntry * &);

/**
 * mixedFraction -- * You need to provide definitions
 * for the 4 functions, simplify(), mixedFraction(),
 * add() and print().
 */
class mixedFraction {
    private:
	/**
	 * Types and Data members
	 */
	struct fractionType {
	    int numerator;
	    unsigned denominator;
	};

	fractionType fraction;
	int whole;

    public:
	/**
	 * Constructor
	 * - w: the whole number part
	 * - n: the numerator of the fraction part
	 * - d: the denominator of the fraction part
	 */
	mixedFraction(int w, int n, int d);

	/**
	 * Adds the argument to this mixed fraction.
	 * That is, if this fraction is g, up on
	 * return from add(), g has the value g+f.
	 */
	void add(mixedFraction f);

	/**
	 * Simplifies this fraction. E.g.,
	 * -69/63 is simplified to -1 2/21.
	 *  I.e., whole = -1, fraction.numerator = 2,
	 *  fraction.denominator = 21.
	 */
	void simplify();
    
	/**
	 * Prints this fraction.
	 * You should be careful about special cases.
	 * See the assignment handout for a discussion.
	 */
	void print();
};
#endif
