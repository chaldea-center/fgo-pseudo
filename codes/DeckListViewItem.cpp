void DeckListViewItem___ctor(
        DeckListViewItem_o *this,
        int32_t index,
        PartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.partyItem = partyItem;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, (int32_t)partyItem, v6, v7, v8, v9, v10, v11);
}


void DeckListViewItem__Finalize(DeckListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


PartyListViewItem_o *DeckListViewItem__GetPartyListViewItem(DeckListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.partyItem;
}