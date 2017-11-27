typedef struct NODE
{
	DATA info;
	NODE *pNext;
};

typedef struct List
{
	NODE *pHead;
};

void Initialize(List &l)
{
	l.pHead = NULL;
}

bool IsEmpty(List l)
{
	if (l.pHead == NULL)
		return true;
	return false;
}

NODE* CreateNode(DATA x)
{
	NODE *p = new NODE;
	if (p != NULL)
	{
		p->info = x;
		p->pNext = NULL;
	}
	return p;
}

NODE* AddTop(List &l, DATA x)
{
	NODE *p = CreateNode(x);
	if (p != NULL)
	{
		p->pNext = l.pHead;
		l.pHead = p;
		return p;
	}
}

bool DeleteTop(List &l)
{
	if (!IsEmpty(l))
	{
		NODE *p = l.pHead;
		l.pHead = l.pHead->pNext;
		delete p;
		return true;
	}
	return false;
}

bool Push(List &l, DATA x)
{
	NODE *p = AddTop(l, x);
	if (p != NULL)
		return true;
	return false;
}

DATA Pop(List &l)
{
	if (!IsEmpty(l))
	{
		DATA x = l.pHead->info;
		DeleteTop(l);
		return x;
	}
}

DATA GetTop(List &l)
{
	if (!IsEmpty(l))
	{
		DATA x = l.pHead->info;
		return x;
	}
}