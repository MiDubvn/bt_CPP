typedef struct NODE
{
	DATA info;
	NODE *pNext;
};

typedef struct Queue
{
	NODE *pHead;
	NODE *pTail;
};

void Initialize(Queue &q)
{
	q.pHead=q.pTail = NULL;
}

bool IsEmpty(Queue q)
{
	if (q.pHead == NULL)
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

NODE* insertTail(Queue &q, DATA x)
{
	NODE*p = (CreateNode(x));
	if (IsEmpty(q))
	{
		q.pHead = p;
		q.pTail = p;
	}
	else
	{
		q.pTail->pNext = p;
		q.pTail = p;
	}return p;

}

bool DeleteHead(Queue &q)
{
	NODE*p = q.pHead;
	if (p!=NULL)
	{
		q.pHead = q.pHead->pNext;
		delete p;
		return true;
	}
	return false;
}

bool Push(Queue &q, DATA x)
{
	NODE *p = insertTail(q, x);
	if (p != NULL)
		return true;
	return false;
}

DATA Pop(Queue &q)
{
	if (!IsEmpty(q))
	{
		DATA x = q.pHead->info;
		DeleteHead(q);
		return x;
	}
}

DATA GetTop(Queue &q)
{
	if (!IsEmpty(q))
	{
		DATA x = q.pHead->info;
		return x;
	}
}
DATA GetRear(Queue q)
{
	if (!IsEmpty(q))
	{
		DATA x = q.pTail->info;
		return x;
	}
}