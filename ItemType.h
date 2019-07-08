enum relation {LESS , GREATER , EQUAL};
const int MAX_ITEMS =5;
class ItemType {
	private :
	int value;
	public :
	void initialize(int value);
	relation compareTo(ItemType item);
	int getValue();
};
