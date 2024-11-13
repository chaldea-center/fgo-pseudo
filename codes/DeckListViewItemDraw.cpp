void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationListViewItem_o *v6; // x19

  if ( (byte_4B11DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&DeckListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&PartyOrganizationListViewItem_TypeInfo, v4, v5);
    byte_4B11DA6 = 1;
  }
  v6 = (PartyOrganizationListViewItem_o *)sub_1BCAA2C(PartyOrganizationListViewItem_TypeInfo, v1, v2, v3);
  PartyOrganizationListViewItem___ctor_32613444(v6, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem = v6;
  sub_1BCA784(DeckListViewItemDraw_TypeInfo->static_fields, v6);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0
  struct PartyOrganizationConfirmItemDraw_array *v7; // x0

  if ( (byte_4B11DA5 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyOrganizationConfirmItemDraw___TypeInfo, v4, v5);
    byte_4B11DA5 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1BCA888(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v6->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v7;
  sub_1BCA784(&this->fields.memberObjectList, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  DeckListViewItemDraw__SetItem_32397232(this, item->fields.partyItem, mode, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckListViewItemDraw__SetItem_32397232(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyListViewItem_o *v5; // x19
  DeckListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v14; // x21
  struct PartyOrganizationConfirmItemDraw_array *v15; // x8
  PartyOrganizationConfirmItemDraw_o *v16; // x22
  UILabel_o *deckNumLabel; // x21
  DeckListViewItemDraw_o *v18; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v20; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v22; // x0

  v5 = item;
  v6 = this;
  if ( (byte_4B11DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&DeckListViewItemDraw_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_10383/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v9, v10);
    this = (DeckListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_10382/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v11, v12);
    byte_4B11DA4 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_18;
    v14 = 0LL;
    while ( (__int64)v14 < (int)memberObjectList->max_length )
    {
      if ( !v5 )
        goto LABEL_18;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v14, 0LL);
      if ( !this )
        goto LABEL_18;
      v15 = v6->fields.memberObjectList;
      if ( !v15 )
        goto LABEL_18;
      if ( v14 >= v15->max_length )
        sub_1BCAA44(this, item);
      v16 = v15->m_Items[v14];
      item = (PartyListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.baseButton) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo, item);
        if ( !v16 )
          goto LABEL_18;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v16 )
      {
        goto LABEL_18;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v16, (PartyOrganizationListViewItem_o *)item, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v14;
      if ( !memberObjectList )
        goto LABEL_18;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10383/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !v5 )
      goto LABEL_18;
    v18 = this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0LL);
    v20 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format((System_String_o *)v18, v20, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10382/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v22, (Il2CppObject *)v5->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_18:
      sub_1BCAA3C(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}