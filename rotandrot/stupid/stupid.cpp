#include <iostream>

using namespace std;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;
using i32 = int_fast32_t;
using u32 = uint_fast32_t;

#define int i64
#define uint u64

// modint class
template<uint Mod>
class Modint {
private:
	u64 value;

public:
	inline Modint(u64 x = 0) noexcept: value(x % Mod) {}
	inline Modint operator +(const Modint &rhs) const noexcept {
		return Modint(*this) += rhs;
	}
	inline Modint operator -(const Modint &rhs) const noexcept {
		return Modint(*this) -= rhs;
	}
	inline Modint operator *(const Modint &rhs) const noexcept {
		return Modint(*this) *= rhs;
	}
	inline Modint operator /(const Modint &rhs) const noexcept {
		return Modint(*this) /= rhs;
	}
	inline Modint &operator +=(const Modint &rhs) noexcept {
		this->value += rhs.value;
		if(this->value >= Mod) this->value -= Mod;
		return *this;
	}
	inline Modint &operator -=(const Modint &rhs) noexcept {
		if(this->value < rhs.value) this->value += Mod;
		this->value -= rhs.value;
		return *this;
	}
	inline Modint &operator *=(const Modint &rhs) noexcept {
		this->value = this->value * rhs.value % Mod;
		return *this;
	}
	inline Modint &operator /=(const Modint &rhs) noexcept {
		this->value = this->value * rhs.pow(Mod - 2).value % Mod;
		return *this;
	}

	inline Modint pow(u64 n) const noexcept {
		Modint res(1);
		Modint a(*this);
		while(n) {
			if(n & 1) res *= a;
			a *= a;
			n >>= 1;
		}
		return res;
	}

	inline u64 val() const noexcept {
		return this->value;
	}
};

const uint MOD = 13;

signed main() {
	u64 s, a, b, n;
	cin >> s >> a >> b >> n;

	Modint<MOD> S(s), A(a), B(b);

	for(u64 i = 0; i < n; i++) S = S * (A + 1) + B;
	cout << S.val() << endl;

	return 0;
}
