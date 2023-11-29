void __fastcall DeckListViewItem___ctor(
        DeckListViewItem_o *this,
        int32_t index,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  ListViewItem___ctor_30173668((ListViewItem_o *)this, index, 0LL);
  this->fields.partyItem = partyItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)partyItem,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall DeckListViewItem__Finalize(DeckListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


PartyOrganizationListViewItem_o *__fastcall DeckListViewItem__GetMember(
        DeckListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B170D4();
  return PartyListViewItem__GetMember(partyItem, num, 0LL);
}


PartyListViewItem_o *__fastcall DeckListViewItem__GetPartyListViewItem(
        DeckListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.partyItem;
}


UserDeckEntity_o *__fastcall DeckListViewItem__GetUserDeck(
        DeckListViewItem_o *this,
        PartyListViewItem_o *baseItem,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B170D4();
  return PartyListViewItem__GetUserDeck(partyItem, baseItem, 0LL);
}


int64_t __fastcall DeckListViewItem__get_DeckId(DeckListViewItem_o *this, const MethodInfo *method)
{
  struct PartyListViewItem_o *partyItem; // x8

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B170D4();
  return partyItem->fields.id;
}


System_String_o *__fastcall DeckListViewItem__get_DeckName(DeckListViewItem_o *this, const MethodInfo *method)
{
  struct PartyListViewItem_o *partyItem; // x8

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B170D4();
  return partyItem->fields.deckName;
}


int32_t __fastcall DeckListViewItem__get_DeckNum(DeckListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B170D4();
  return PartyListViewItem__get_DeckNum(partyItem, 0LL);
}