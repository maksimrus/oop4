void Remove(PersonListItem *&personListHead, int index, PersonListItem *&personListTail, int quantity)
{
	PersonListItem* currentItem1 = personListHead;
	PersonListItem* currentItem2 = personListTail;
	if (index == 0)
	{
		personListHead = currentItem1->PrevItem;
		while (true)
		{
			if (currentItem2->NextItem == 0)
			{
				currentItem2 = currentItem2->PrevItem;
				delete currentItem2->NextItem;
				currentItem2->NextItem = NULL;
				break;
			}
			currentItem2 = currentItem2->NextItem;
			currentItem2->NextItem = NULL;
		}
		return;
	}
	if (index == (quantity - 1))
	{
		personListTail = currentItem2->NextItem;
		while (1)
		{
			if (currentItem1->PrevItem == 0)
			{
				currentItem1 = currentItem1->NextItem;
				delete currentItem1->PrevItem;
				currentItem1->PrevItem = NULL;
				break;
			}
			currentItem1 = currentItem1->PrevItem;
		}
		return;
	}
	for (int j = 0; j < (index - 1); j++)
	{
		currentItem1 = currentItem1->PrevItem;
	}
	currentItem1->PrevItem = currentItem1->PrevItem->PrevItem;
	return;
}
