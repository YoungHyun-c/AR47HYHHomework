#include "Parts.h"


Parts::Parts()
{
	
}

Parts::~Parts()
{
}

// �� �� �� ��
void Parts::Update()
{
	//Dir = GetPos() - PrevPos;
	//if (Dir.X > 0)
	//{
	//	RenderChar = L'��';
	//}
	//else if (Dir.X < 0)
	//{
	//	RenderChar = L'��';
	//}
	//else if (Dir.Y > 0)
	//{
	//	RenderChar = L'��';
	//}
	//else if (Dir.Y < 0)
	//{
	//	RenderChar = L'��';
	//}
}

void Parts::NextMove()
{
	Parts* Next = GetNext();
	
	if (nullptr == Next)
	{
		return;
	}

	Next->PrevRenderChar = Next->RenderChar;
	Next->RenderChar = PrevRenderChar;
	Next->SetPos(GetPrevPos());
	return Next->NextMove();
}