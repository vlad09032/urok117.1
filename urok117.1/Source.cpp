#include<iostream>
#include<cstdint>
using namespace std;

class RGBA
{
private:
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alpha;
public:
	RGBA(uint8_t red = (0), uint8_t green=(0), uint8_t blue = (0), uint8_t alpha = (255))
		:m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{}
	void print()
	{
		cout << "r=" << static_cast<int>(m_red) << " g=" << static_cast<int>(m_green) << " b=" << static_cast<int>(m_blue) << " a=" << static_cast<int>(m_alpha);
	}
};

int main()
{
	RGBA color(0, 135, 135);
	color.print();

	return 0;
}