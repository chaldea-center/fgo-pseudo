void DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596BE06 & 1) == 0 )
  {
    sub_2213A60(&DeckListViewItemDraw_TypeInfo);
    sub_2213A60(&PartyOrganizationListViewItem_TypeInfo);
    byte_596BE06 = 1;
  }
  v1 = (PartyOrganizationListViewItem_o *)sub_2213CCC(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_40980060(v1, 0, 1, 0, 0, 1, 0, 0, 0);
  DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DeckListViewItemDraw_TypeInfo->static_fields,
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
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596BE05 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_596BE05 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_2213B20(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_2213CDC(this, 0);
  DeckListViewItemDraw__SetItem_40736472(this, item->fields.partyItem, mode, method);
}


// local variable allocation has failed, the output may be wrong!
void DeckListViewItemDraw__SetItem_40736472(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyListViewItem_o *v5; // x19
  DeckListViewItemDraw_o *v6; // x20
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v8; // x21
  __int64 v9; // x2
  struct PartyOrganizationConfirmItemDraw_array *v10; // x8
  DeckListViewItemDraw_o *v11; // x22
  UILabel_o *deckNumLabel; // x21
  DeckListViewItemDraw_o *v13; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v15; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v17; // x0

  v5 = item;
  v6 = this;
  if ( (byte_596BE04 & 1) == 0 )
  {
    sub_2213A60(&DeckListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10636/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/);
    this = (DeckListViewItemDraw_o *)sub_2213A60(&StringLiteral_10635/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/);
    byte_596BE04 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_20;
    v8 = 0;
    while ( (__int64)v8 < SLODWORD(memberObjectList->max_length) )
    {
      if ( !v5 )
        goto LABEL_20;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v8, 0);
      if ( !this )
        goto LABEL_20;
      v10 = v6->fields.memberObjectList;
      item = (PartyListViewItem_o *)this;
      if ( *((_BYTE *)this + 136) )
      {
        if ( !v10 )
          goto LABEL_20;
        if ( v8 >= LODWORD(v10->max_length) )
          goto LABEL_28;
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        v11 = (DeckListViewItemDraw_o *)v10->m_Items[v8];
        if ( !*(&DeckListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo, item, v9);
        if ( !v11 )
          goto LABEL_20;
        this = v11;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else
      {
        if ( !v10 )
          goto LABEL_20;
        if ( v8 >= LODWORD(v10->max_length) )
LABEL_28:
          sub_2213CE4(this);
        this = (DeckListViewItemDraw_o *)v10->m_Items[v8];
        if ( !this )
          goto LABEL_20;
      }
      PartyOrganizationConfirmItemDraw__SetItem(
        (PartyOrganizationConfirmItemDraw_o *)this,
        (PartyOrganizationListViewItem_o *)item,
        2,
        0,
        0,
        0,
        0,
        0);
      memberObjectList = v6->fields.memberObjectList;
      ++v8;
      if ( !memberObjectList )
        goto LABEL_20;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10636/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0);
    if ( !v5 )
      goto LABEL_20;
    v13 = this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0);
    v15 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0);
    this = (DeckListViewItemDraw_o *)System_String__Format((System_String_o *)v13, v15, 0);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0),
          deckNameLabel = v6->fields.deckNameLabel,
          v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10635/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0),
          this = (DeckListViewItemDraw_o *)System_String__Format(v17, (Il2CppObject *)v5->fields.deckName, 0),
          !deckNameLabel) )
    {
LABEL_20:
      sub_2213CDC(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0);
  }
}