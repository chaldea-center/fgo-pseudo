void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  PartyOrganizationListViewItem_o *v1; // x19
  struct DeckListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_434D828 & 1) == 0 )
  {
    sub_B70694(&DeckListViewItemDraw_TypeInfo);
    sub_B70694(&PartyOrganizationListViewItem_TypeInfo);
    byte_434D828 = 1;
  }
  v1 = (PartyOrganizationListViewItem_o *)sub_B70764(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_38392504(v1, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  static_fields = DeckListViewItemDraw_TypeInfo->static_fields;
  static_fields->emptyFollowerListViewItem = v1;
  sub_B70630(static_fields);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_434D827 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&PartyOrganizationConfirmItemDraw___TypeInfo);
    byte_434D827 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_B706AC(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v3->static_fields->DeckMemberMax);
  sub_B70630(&this->fields.memberObjectList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_B7076C(this, 0LL);
  DeckListViewItemDraw__SetItem_16945520(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_16945520(
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
  System_String_o *v12; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v14; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v16; // x0
  __int64 v17; // x0

  v5 = item;
  v6 = this;
  if ( (byte_434D826 & 1) == 0 )
  {
    sub_B70694(&DeckListViewItemDraw_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_10458/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/);
    this = (DeckListViewItemDraw_o *)sub_B70694(&StringLiteral_10457/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/);
    byte_434D826 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    v8 = 0LL;
    while ( (__int64)v8 < (int)memberObjectList->max_length )
    {
      if ( !v5 )
        goto LABEL_19;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v8, 0LL);
      if ( !this )
        goto LABEL_19;
      v9 = v6->fields.memberObjectList;
      if ( !v9 )
        goto LABEL_19;
      if ( v8 >= v9->max_length )
      {
        v17 = sub_B70798();
        sub_B70738(v17, 0LL);
      }
      v10 = v9->m_Items[v8];
      item = (PartyListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.deckNameLabel) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( (BYTE3(DeckListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          this = (DeckListViewItemDraw_o *)j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        }
        if ( !v10 )
          goto LABEL_19;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v10 )
      {
        goto LABEL_19;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v10, (PartyOrganizationListViewItem_o *)item, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v8;
      if ( !memberObjectList )
        goto LABEL_19;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10458/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !v5 )
      goto LABEL_19;
    v12 = (System_String_o *)this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0LL);
    v14 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format(v12, v14, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10457/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v16, (Il2CppObject *)v5->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_19:
      sub_B7076C(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}