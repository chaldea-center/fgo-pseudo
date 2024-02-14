void __fastcall DeckListViewItem___ctor(
        DeckListViewItem_o *this,
        int32_t index,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.partyItem = partyItem;
  sub_B0D840(&this->fields.partyItem, partyItem);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
  return PartyListViewItem__GetUserDeck(partyItem, baseItem, 0LL);
}


int64_t __fastcall DeckListViewItem__get_DeckId(DeckListViewItem_o *this, const MethodInfo *method)
{
  struct PartyListViewItem_o *partyItem; // x8

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B0D97C(this);
  return partyItem->fields.id;
}


System_String_o *__fastcall DeckListViewItem__get_DeckName(DeckListViewItem_o *this, const MethodInfo *method)
{
  struct PartyListViewItem_o *partyItem; // x8

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B0D97C(this);
  return partyItem->fields.deckName;
}


int32_t __fastcall DeckListViewItem__get_DeckNum(DeckListViewItem_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0

  partyItem = this->fields.partyItem;
  if ( !partyItem )
    sub_B0D97C(0LL);
  return PartyListViewItem__get_DeckNum(partyItem, 0LL);
}