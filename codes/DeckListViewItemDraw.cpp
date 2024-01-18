void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  PartyOrganizationListViewItem_o *v3; // x19
  struct DeckListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4183657 & 1) == 0 )
  {
    sub_B2C35C(&DeckListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v2);
    byte_4183657 = 1;
  }
  v3 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_32212232(v3, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  static_fields = DeckListViewItemDraw_TypeInfo->static_fields;
  static_fields->emptyFollowerListViewItem = v3;
  sub_B2C2F8(static_fields, v3);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0

  if ( (byte_4183656 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw___TypeInfo, v3);
    byte_4183656 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B2C374(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_B2C2F8(&this->fields.memberObjectList, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_B2C434(this, 0LL);
  DeckListViewItemDraw__SetItem_16750152(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_16750152(
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
  System_String_o *v15; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v17; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v19; // x0
  __int64 v20; // x0

  v5 = item;
  v6 = this;
  if ( (byte_4183655 & 1) == 0 )
  {
    sub_B2C35C(&DeckListViewItemDraw_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_10333/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v8);
    this = (DeckListViewItemDraw_o *)sub_B2C35C(&StringLiteral_10332/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v9);
    byte_4183655 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    v11 = 0LL;
    while ( (__int64)v11 < (int)memberObjectList->max_length )
    {
      if ( !v5 )
        goto LABEL_19;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v11, 0LL);
      if ( !this )
        goto LABEL_19;
      v12 = v6->fields.memberObjectList;
      if ( !v12 )
        goto LABEL_19;
      if ( v11 >= v12->max_length )
      {
        v20 = sub_B2C460();
        sub_B2C400(v20, 0LL);
      }
      v13 = v12->m_Items[v11];
      item = (PartyListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.deckNameLabel) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( (BYTE3(DeckListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          this = (DeckListViewItemDraw_o *)j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        }
        if ( !v13 )
          goto LABEL_19;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v13 )
      {
        goto LABEL_19;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v13, (PartyOrganizationListViewItem_o *)item, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v11;
      if ( !memberObjectList )
        goto LABEL_19;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10333/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !v5 )
      goto LABEL_19;
    v15 = (System_String_o *)this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0LL);
    v17 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format(v15, v17, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10332/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v19, (Il2CppObject *)v5->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_19:
      sub_B2C434(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}