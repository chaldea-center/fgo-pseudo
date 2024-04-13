void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PartyOrganizationListViewItem_o *v7; // x19
  struct DeckListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_42E44B7 & 1) == 0 )
  {
    sub_B5D5C4(&DeckListViewItemDraw_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v4, v5, v6);
    byte_42E44B7 = 1;
  }
  v7 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
  PartyOrganizationListViewItem___ctor_29764096(v7, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  static_fields = DeckListViewItemDraw_TypeInfo->static_fields;
  static_fields->emptyFollowerListViewItem = v7;
  sub_B5D560(static_fields);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BalanceConfig_c *v8; // x0

  if ( (byte_42E44B6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw___TypeInfo, v5, v6, v7);
    byte_42E44B6 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  this->fields.memberObjectList = (struct PartyOrganizationConfirmItemDraw_array *)sub_B5D5DC(
                                                                                     PartyOrganizationConfirmItemDraw___TypeInfo,
                                                                                     (unsigned int)v8->static_fields->DeckMemberMax);
  sub_B5D560(&this->fields.memberObjectList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_B5D69C(this, 0LL);
  DeckListViewItemDraw__SetItem_16939768(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_16939768(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  PartyListViewItem_o *v5; // x19
  DeckListViewItemDraw_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v17; // x21
  struct PartyOrganizationConfirmItemDraw_array *v18; // x8
  PartyOrganizationConfirmItemDraw_o *v19; // x22
  UILabel_o *deckNumLabel; // x21
  System_String_o *v21; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v23; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v25; // x0
  __int64 v26; // x0

  v5 = item;
  v6 = this;
  if ( (byte_42E44B5 & 1) == 0 )
  {
    sub_B5D5C4(&DeckListViewItemDraw_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_10439/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v10, v11, v12);
    this = (DeckListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_10438/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v13, v14, v15);
    byte_42E44B5 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    v17 = 0LL;
    while ( (__int64)v17 < (int)memberObjectList->max_length )
    {
      if ( !v5 )
        goto LABEL_19;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(v5, v17, 0LL);
      if ( !this )
        goto LABEL_19;
      v18 = v6->fields.memberObjectList;
      if ( !v18 )
        goto LABEL_19;
      if ( v17 >= v18->max_length )
      {
        v26 = sub_B5D6C8();
        sub_B5D668(v26, 0LL);
      }
      v19 = v18->m_Items[v17];
      item = (PartyListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.deckNameLabel) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( (BYTE3(DeckListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          this = (DeckListViewItemDraw_o *)j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        }
        if ( !v19 )
          goto LABEL_19;
        item = (PartyListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v19 )
      {
        goto LABEL_19;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v19, (PartyOrganizationListViewItem_o *)item, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v17;
      if ( !memberObjectList )
        goto LABEL_19;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10439/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !v5 )
      goto LABEL_19;
    v21 = (System_String_o *)this;
    DeckNum = PartyListViewItem__get_DeckNum(v5, 0LL);
    v23 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format(v21, v23, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10438/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v25, (Il2CppObject *)v5->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_19:
      sub_B5D69C(this, item);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}