void DeckListViewItem___ctor(
        DeckListViewItem_o *this,
        int32_t index,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.partyItem = partyItem;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, (int32_t)partyItem, v6, v7, v8, v9, v10, v11);
}


void DeckListViewItem__Finalize(DeckListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


PartyOrganizationListViewItem_o *DeckListViewItem__GetMember(
        DeckListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_1C942F0(0, num);
  return PartyListViewItem__GetMember(partyItem, num, 0);
}


PartyListViewItem_o *DeckListViewItem__GetPartyListViewItem(DeckListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyItem;
}


UserDeckEntity_o *DeckListViewItem__GetUserDeck(
        DeckListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_1C942F0(0, baseItem);
  return PartyListViewItem__GetUserDeck(partyItem, baseItem, 0);
}


int64_t DeckListViewItem__get_DeckId(DeckListViewItem_o *this, const MethodInfo *method)
{
  struct PartyListViewItem_o *partyItem; // x8

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_1C942F0(this, method);
  return partyItem->fields.id;
}


System_String_o *DeckListViewItem__get_DeckName(DeckListViewItem_o *this, const MethodInfo *method)
{
  struct PartyListViewItem_o *partyItem; // x8

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_1C942F0(this, method);
  return partyItem->fields.deckName;
}


int32_t DeckListViewItem__get_DeckNum(DeckListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_1C942F0(0, method);
  return PartyListViewItem__get_DeckNum(partyItem, 0);
}