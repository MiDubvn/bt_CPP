typedef struct NODE
{
	DATA info;
	NODE* pNext;
};
typedef struct List
{
	NODE* pHead;
};
void Init(List &l)
{
	l.pHead = NULL;
}
bool Isempty(List l)
{
	if (l.pHead != NULL)
		return true;
	return false;
}
NODE* Create(DATA x)
{
	NODE*p = new NODE;
	if (p != NULL)
	{
		p->info = x;
		p->pNext = NULL;
	}
	return p;
}
NODE * AddFrist(List &l, DATA x)
{
	NODE*p = Create(x);
	if (p != NULL)
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
	return p;
}
NODE * AddAfter(List &l,NODE*q, DATA x)
{
	NODE*p = Create(x);
	if (p != NULL)
	{
		p->pNext = q->pNext;
		q->pNext = p;
	}
	return p;
}
