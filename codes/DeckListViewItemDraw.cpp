void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PartyOrganizationListViewItem_o *v3; // x19

  if ( (byte_4BF91BA & 1) == 0 )
  {
    sub_1C2E12C(&DeckListViewItemDraw_TypeInfo, v1);
    sub_1C2E12C(&PartyOrganizationListViewItem_TypeInfo, v2);
    byte_4BF91BA = 1;
  }
  v3 = (PartyOrganizationListViewItem_o *)sub_1C2E378(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_33055944(v3, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem = v3;
  sub_1C2E0D0(DeckListViewItemDraw_TypeInfo->static_fields);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0

  if ( (byte_4BF91B9 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, method);
    sub_1C2E12C(&PartyOrganizationConfirmItemDraw___TypeInfo, v3);
    byte_4BF91B9 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C2E1D4(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v4->static_fields->DeckMemberMax);
  sub_1C2E0D0(&this->fields.memberObjectList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C2E388(this, 0LL);
  DeckListViewItemDraw__SetItem_32829492(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_32829492(
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
  int32_t DeckNum; // w0
  Il2CppObject *v17; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v19; // x0

  v5 = item;
  v6 = this;
  if ( (byte_4BF91B8 & 1) == 0 )
  {
    sub_1C2E12C(&DeckListViewItemDraw_TypeInfo, item);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_10442/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v8);
    this = (DeckListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_10441/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v9);
    byte_4BF91B8 = 1;
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
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v11, 0LL);
      if ( !this )
        goto LABEL_18;
      v12 = v6->fields.memberObjectList;
      if ( !v12 )
        goto LABEL_18;
      if ( v11 >= v12->max_length )
        sub_1C2E390(this, item);
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
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !v5 )
      goto LABEL_18;
    v15 = this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0LL);
    v17 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format((System_String_o *)v15, v17, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10441/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v19, (Il2CppObject *)v5->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_18:
      sub_1C2E388(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}