void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  PartyOrganizationListViewItem_o *v4; // x19
  struct DeckListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4210225 & 1) == 0 )
  {
    sub_B0D8A4(&DeckListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&PartyOrganizationListViewItem_TypeInfo, v3);
    byte_4210225 = 1;
  }
  v4 = (PartyOrganizationListViewItem_o *)sub_B0D974(PartyOrganizationListViewItem_TypeInfo, v1, v2);
  PartyOrganizationListViewItem___ctor_30738796(v4, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  static_fields = DeckListViewItemDraw_TypeInfo->static_fields;
  static_fields->emptyFollowerListViewItem = v4;
  sub_B0D840(static_fields, v4);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0

  if ( (byte_4210224 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&PartyOrganizationConfirmItemDraw___TypeInfo, v3);
    byte_4210224 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0();
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B0D8BC(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_B0D840(&this->fields.memberObjectList, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_B0D97C(this);
  DeckListViewItemDraw__SetItem_16108712(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_16108712(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  DeckListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v11; // x21
  struct PartyOrganizationConfirmItemDraw_array *v12; // x8
  PartyOrganizationConfirmItemDraw_o *v13; // x22
  PartyOrganizationListViewItem_o *emptyFollowerListViewItem; // x1
  UILabel_o *deckNumLabel; // x21
  System_String_o *v16; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v18; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v20; // x0
  __int64 v21; // x0

  v6 = this;
  if ( (byte_4210223 & 1) == 0 )
  {
    sub_B0D8A4(&DeckListViewItemDraw_TypeInfo, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_10357/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v8);
    this = (DeckListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_10356/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v9);
    byte_4210223 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    v11 = 0LL;
    while ( (__int64)v11 < (int)memberObjectList->max_length )
    {
      if ( !item )
        goto LABEL_19;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(item, v11, 0LL);
      if ( !this )
        goto LABEL_19;
      v12 = v6->fields.memberObjectList;
      if ( !v12 )
        goto LABEL_19;
      if ( v11 >= v12->max_length )
      {
        v21 = sub_B0D9A8();
        sub_B0D948(v21, 0LL);
      }
      v13 = v12->m_Items[v11];
      emptyFollowerListViewItem = (PartyOrganizationListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.deckNameLabel) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( (BYTE3(DeckListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          this = (DeckListViewItemDraw_o *)j_il2cpp_runtime_class_init_0();
        }
        if ( !v13 )
          goto LABEL_19;
        emptyFollowerListViewItem = DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v13 )
      {
        goto LABEL_19;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v13, emptyFollowerListViewItem, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v11;
      if ( !memberObjectList )
        goto LABEL_19;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0();
    }
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10357/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !item )
      goto LABEL_19;
    v16 = (System_String_o *)this;
    DeckNum = PartyListViewItem__get_DeckNum(item, 0LL);
    v18 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format(v16, v18, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10356/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v20, (Il2CppObject *)item->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_19:
      sub_B0D97C(this);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}