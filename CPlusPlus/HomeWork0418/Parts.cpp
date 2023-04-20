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
	
}

void Parts::NextMove()
{
	Parts* Next = GetNext();
	
	if (nullptr == Next)
	{
		return;
	}

	Next->SetPos(GetPrevPos());

	int2 Pos = GetPos();
	int2 NextPos = Next->GetPos();
	Dir = Pos - NextPos;
	//Dir = GetPos() - PrevPos;
	if (Dir == int2::Right)
	{
		Next->RenderChar = L'��';
	}
	else if (Dir == int2::Left)
	{
		Next->RenderChar = L'��';
	}
	else if (Dir == int2::Down)
	{
		Next->RenderChar = L'��';
	}
	else if (Dir == int2::Up)
	{
		Next->RenderChar = L'��';
	}


	/*Next->PrevRenderChar = Next->RenderChar;
	Next->RenderChar = RenderChar;*/
	//Next->SetPos(GetPrevPos());
	return Next->NextMove();
}