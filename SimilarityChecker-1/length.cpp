#include <string>
#include <algorithm>
using namespace std;

class SimilarityCheck {
public:
	explicit SimilarityCheck(const string& answer) : answer(answer) {}

	int lengthcheck(const string& guessNumber) {
		int answer_len = answer.length();
		int guessNumber_len = guessNumber.length();
		if (guessNumber_len == answer_len) return 60;

		int longer = max(answer_len, guessNumber_len);
		int shorter = min(answer_len, guessNumber_len);
		if (longer >= 2 * shorter) return 0;

		return (1.00 - double((longer - shorter) / shorter)) * 60;
	}

	int getScore(const string& guessNumber) {
		score += lengthcheck(guessNumber);
		return score;
	}
private:
	string answer;
	int score = 0;
};