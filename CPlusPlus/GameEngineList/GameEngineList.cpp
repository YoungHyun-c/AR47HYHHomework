// GameEngineList.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
#include <crtdbg.h>

// 자료구조의 구분

// 메모리 형태로서의 구분 => 노드형 배열형
// 데이터 처리방식으로서의 구분 => 시퀀스 연관 어댑터
// 배열형 시퀀스 자료구조가 vector였다.
// 상황에 따른 너무나도 커질 수 있는 재할당과 복사 연산의 위험성이 벡터의 문제점이다.
// 10만개 짜리 벡터에서 10만1개짜리
// 백터가 되는 순간 벌어지는 일을 생각해라


// 메모리는 연속되어있을때 가장 빠릅니다.
// 컴퓨터 친화적 코딩이라고 합니다.
// 할 수 있다면 최대한 벡터로 짜는게 좋다.
// 그 단점을 해결하기 위한게 리스트
// 대부분의 연산에서 느립니다.
// 리스트의 가장 큰 장점은 편의성입니다.

typedef int DataType;

class GameEngineList
{
private:
	class ListNode
	{
	public:
		ListNode* Prev = nullptr;
		ListNode* Next = nullptr;
		DataType Value;

	public:
		~ListNode()
		{
			if (nullptr != Next)
			{
				delete Next;
				Next = nullptr;
			}
		}
	};

public:
	class iterator
	{
		friend GameEngineList;

	public:
		iterator()
		{

		}

		iterator(ListNode* _CurNode)
			: CurNode(_CurNode)
		{

		}

		bool operator != (const iterator& _Other)
		{
			return CurNode != _Other.CurNode;
		}

		iterator& operator ++()
		{
			CurNode = CurNode->Next;

			return *this;
		}

		DataType& operator*()
		{
			return CurNode->Value;
		}

	private:
		ListNode* CurNode = nullptr;
	};


	GameEngineList()
	{
		StartNode->Next = EndNode;
		EndNode->Prev = StartNode;
	}

	~GameEngineList()
	{
		if (nullptr != StartNode)
		{
			delete StartNode;
			StartNode = nullptr;
		}
	}

	iterator begin()
	{
		return iterator(StartNode->Next);
	}

	iterator end()
	{
		return iterator(EndNode);
	}

	iterator erase(iterator& _DeleteNode)
	{
		ListNode* DeleteNode = _DeleteNode.CurNode;

		ListNode* PrevNode = DeleteNode->Prev;
		ListNode* NextNode = DeleteNode->Next;

		DeleteNode->Prev = nullptr;
		DeleteNode->Next = nullptr;

		if (nullptr != DeleteNode)
		{
			delete DeleteNode;
			DeleteNode = nullptr;
		}

		PrevNode->Next = NextNode;
		NextNode->Prev = PrevNode;

		return iterator(NextNode);

	}

	void push_back(const DataType& _Data)
	{
		ListNode* NewListNode = new ListNode();
		NewListNode->Value = _Data;

		ListNode* PrevNode = EndNode->Prev;

		// 연결을 끊고
		/*PrevNode->Next = nullptr;
		EndNode->Prev = nullptr;*/

		PrevNode->Next = NewListNode;
		EndNode->Prev = NewListNode;
		NewListNode->Next = EndNode;
		NewListNode->Prev = PrevNode;
	}

	void push_front(const DataType& _Data)
	{
		ListNode* NewListNode = new ListNode();
		NewListNode->Value = _Data;
		
		ListNode* PrevNode = StartNode->Next;

		StartNode->Next = NewListNode;
		NewListNode->Next = PrevNode;

		PrevNode->Prev = NewListNode;
		NewListNode->Prev = StartNode;
		
	}

private:
	// 더미노드
	ListNode* StartNode = new ListNode();
	ListNode* EndNode = new ListNode();

};

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	{
		GameEngineList NewList;

		NewList.push_back(999);
		NewList.push_back(888);
		NewList.push_back(777);
		NewList.push_back(123156456);
		NewList.push_front(2000);

		{
			GameEngineList::iterator Delete = NewList.begin();
			++Delete;

			NewList.erase(Delete);
		}

		GameEngineList::iterator Start = NewList.begin();
		GameEngineList::iterator End = NewList.end();

		for (; Start != End; ++Start)
		{
			printf_s("%d\n", *Start);
		}
	}

	return 1;

	{
		std::list<int> NewList;

		NewList.push_back(999);
		NewList.push_back(888);
		NewList.push_back(777);
		NewList.push_back(123156456);
		NewList.push_front(2000);


		{
			std::list<int>::iterator Delete = NewList.begin();
			++Delete;

			NewList.erase(Delete);
		}

		// Node들을 기억해보면
		// Node형태의 자료들을 순회를 돌려면
		// 그 중 한 지점의 노드의 주소를 알아야만 돌 수 있따.
		// 그걸 Node를 직접 외부에 공개하지 않습니다.

		std::list<int>::iterator Start = NewList.begin();
		std::list<int>::iterator End = NewList.end();

		for (; Start != End; ++Start)
		{
			printf_s("%d\n", *Start);
		}

		int a = 0;
	}
}