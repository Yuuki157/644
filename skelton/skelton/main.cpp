#include<DxLib.h>

struct Vector2 {
	float x, y;
};

using Position2 = Vector2;

struct Rect {
	Position2 center;
	float w, h;//ÇªÇÍÇºÇÍïùÅAçÇÇ≥ÇÃîºï™

	float Left()const {
		return center.x - w;
	};

	float Right()const {
		return center.x + w;
	};

	float Top()const {
		return center.x - h;
	};

	float Bottom()const {
		return center.x + h;
	};
};

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	Rect rcA = { 200,200,50,50 };
	char KeyState[256];
	while (Pro);
	DrawBox(rcA.Left);

	constexpr float speed = 4.0f;
	if (KeyState)
	{

	}


}