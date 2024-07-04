void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PartyOrganizationListViewItem_o *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48DE7EE & 1) == 0 )
  {
    sub_1B00CCC(&DeckListViewItemDraw_TypeInfo, v1);
    sub_1B00CCC(&PartyOrganizationListViewItem_TypeInfo, v2);
    byte_48DE7EE = 1;
  }
  v3 = (PartyOrganizationListViewItem_o *)sub_1B00F18(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_31158388(v3, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem = v3;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DE7ED & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, method);
    sub_1B00CCC(&PartyOrganizationConfirmItemDraw___TypeInfo, v3);
    byte_48DE7ED = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B00D74(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B00F28(this, 0LL);
  DeckListViewItemDraw__SetItem_30853996(this, item->fields.partyItem, mode, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewItemDraw__SetItem_30853996(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyListViewItem_o *v5; // x19
  DeckListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v11; // x21
  struct PartyOrganizationConfirmItemDraw_array *v12; // x8
  PartyOrganizationConfirmItemDraw_o *v13; // x22
  UILabel_o *deckNumLabel; // x21
  DeckListViewItemDraw_o *v15; // x22
  Il2CppObject *v16; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v18; // x0

  v5 = item;
  v6 = this;
  if ( (byte_48DE7EC & 1) == 0 )
  {
    sub_1B00CCC(&DeckListViewItemDraw_TypeInfo, item);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_10135/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v8);
    this = (DeckListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_10134/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v9);
    byte_48DE7EC = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_18;
    v11 = 0LL;
    while ( (__int64)v11 < (int)memberObjectList->max_length )
    {
      if ( !v5 )
        goto LABEL_18;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v11, *(const MethodInfo **)&mode);
      if ( !this )
        goto LABEL_18;
      v12 = v6->fields.memberObjectList;
      if ( !v12 )
        goto LABEL_18;
      if ( v11 >= v12->max_length )
        sub_1B00F30(this, item);
      v13 = v12->m_Items[v11];
      item = (PartyListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.baseButton) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        if ( !v13 )
          goto LABEL_18;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v13 )
      {
        goto LABEL_18;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v13, (PartyOrganizationListViewItem_o *)item, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v11;
      if ( !memberObjectList )
        goto LABEL_18;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10135/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !v5
      || (v15 = this,
          v16 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(v5->fields.index + 1, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format((System_String_o *)v15, v16, 0LL),
          !deckNumLabel)
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v18, (Il2CppObject *)v5->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_18:
      sub_1B00F28(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}