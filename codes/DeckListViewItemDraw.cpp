void DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27F25 & 1) == 0 )
  {
    sub_1C94098(&DeckListViewItemDraw_TypeInfo);
    sub_1C94098(&PartyOrganizationListViewItem_TypeInfo);
    byte_4D27F25 = 1;
  }
  v1 = (PartyOrganizationListViewItem_o *)sub_1C942E4(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_34909064(v1, 0, 1, 0, 0, 1, 0, 0, 0);
  DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem = v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)DeckListViewItemDraw_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct PartyOrganizationConfirmItemDraw_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D27F24 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_4D27F24 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1C94140(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v3->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.memberObjectList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C942F0(this, 0);
  DeckListViewItemDraw__SetItem_34590880(this, item->fields.partyItem, mode, method);
}


void DeckListViewItemDraw__SetItem_34590880(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyListViewItem_o *v5; // x19
  DeckListViewItemDraw_o *v6; // x20
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v8; // x21
  struct PartyOrganizationConfirmItemDraw_array *v9; // x8
  PartyOrganizationConfirmItemDraw_o *v10; // x22
  UILabel_o *deckNumLabel; // x21
  DeckListViewItemDraw_o *v12; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v14; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v16; // x0

  v5 = item;
  v6 = this;
  if ( (byte_4D27F23 & 1) == 0 )
  {
    sub_1C94098(&DeckListViewItemDraw_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10255/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/);
    this = (DeckListViewItemDraw_o *)sub_1C94098(&StringLiteral_10254/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/);
    byte_4D27F23 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_18;
    v8 = 0;
    while ( (__int64)v8 < SLODWORD(memberObjectList->max_length) )
    {
      if ( !v5 )
        goto LABEL_18;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v8, 0);
      if ( !this )
        goto LABEL_18;
      v9 = v6->fields.memberObjectList;
      if ( !v9 )
        goto LABEL_18;
      if ( v8 >= LODWORD(v9->max_length) )
        sub_1C942F8(this);
      v10 = v9->m_Items[v8];
      item = (PartyListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.deckNumLabel) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        if ( !v10 )
          goto LABEL_18;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v10 )
      {
        goto LABEL_18;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v10, (PartyOrganizationListViewItem_o *)item, 2, 0, 0, 0, 0, 0);
      memberObjectList = v6->fields.memberObjectList;
      ++v8;
      if ( !memberObjectList )
        goto LABEL_18;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10255/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0);
    if ( !v5 )
      goto LABEL_18;
    v12 = this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0);
    v14 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0);
    this = (DeckListViewItemDraw_o *)System_String__Format((System_String_o *)v12, v14, 0);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0),
          deckNameLabel = v6->fields.deckNameLabel,
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0),
          this = (DeckListViewItemDraw_o *)System_String__Format(v16, (Il2CppObject *)v5->fields.deckName, 0),
          !deckNameLabel) )
    {
LABEL_18:
      sub_1C942F0(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0);
  }
}