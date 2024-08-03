void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  PartyOrganizationListViewItem_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F8202 & 1) == 0 )
  {
    sub_1B640C8(&DeckListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&PartyOrganizationListViewItem_TypeInfo, v3);
    byte_49F8202 = 1;
  }
  v4 = (PartyOrganizationListViewItem_o *)sub_1B64314(PartyOrganizationListViewItem_TypeInfo, v1, v2);
  PartyOrganizationListViewItem___ctor_31804960(v4, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DeckListViewItemDraw_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  struct PartyOrganizationConfirmItemDraw_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F8201 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&PartyOrganizationConfirmItemDraw___TypeInfo, v3);
    byte_49F8201 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct PartyOrganizationConfirmItemDraw_array *)sub_1B64170(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v4->static_fields->DeckMemberMax);
  this->fields.memberObjectList = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_1B64324(this);
  DeckListViewItemDraw__SetItem_31589428(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_31589428(
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
  __int64 v12; // x1
  struct PartyOrganizationConfirmItemDraw_array *v13; // x8
  PartyOrganizationConfirmItemDraw_o *v14; // x22
  PartyOrganizationListViewItem_o *emptyFollowerListViewItem; // x1
  UILabel_o *deckNumLabel; // x21
  DeckListViewItemDraw_o *v17; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v19; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v21; // x0

  v6 = this;
  if ( (byte_49F8200 & 1) == 0 )
  {
    sub_1B640C8(&DeckListViewItemDraw_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_10201/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v8);
    this = (DeckListViewItemDraw_o *)sub_1B640C8(&StringLiteral_10200/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v9);
    byte_49F8200 = 1;
  }
  if ( mode )
  {
    memberObjectList = v6->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_18;
    v11 = 0LL;
    while ( (__int64)v11 < (int)memberObjectList->max_length )
    {
      if ( !item )
        goto LABEL_18;
      this = (DeckListViewItemDraw_o *)PartyListViewItem__GetMember(item, v11, 0LL);
      if ( !this )
        goto LABEL_18;
      v13 = v6->fields.memberObjectList;
      if ( !v13 )
        goto LABEL_18;
      if ( v11 >= v13->max_length )
        sub_1B6432C(this, v12);
      v14 = v13->m_Items[v11];
      emptyFollowerListViewItem = (PartyOrganizationListViewItem_o *)this;
      if ( LOBYTE(this[1].fields.baseButton) )
      {
        this = (DeckListViewItemDraw_o *)DeckListViewItemDraw_TypeInfo;
        if ( !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        if ( !v14 )
          goto LABEL_18;
        emptyFollowerListViewItem = DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v14 )
      {
        goto LABEL_18;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v14, emptyFollowerListViewItem, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = v6->fields.memberObjectList;
      ++v11;
      if ( !memberObjectList )
        goto LABEL_18;
    }
    deckNumLabel = v6->fields.deckNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (DeckListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10201/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !item )
      goto LABEL_18;
    v17 = this;
    DeckNum = PartyListViewItem__get_DeckNum(item, 0LL);
    v19 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    this = (DeckListViewItemDraw_o *)System_String__Format((System_String_o *)v17, v19, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, (System_String_o *)this, 0LL),
          deckNameLabel = v6->fields.deckNameLabel,
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10200/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          this = (DeckListViewItemDraw_o *)System_String__Format(v21, (Il2CppObject *)item->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_18:
      sub_1B64324(this);
    }
    UILabel__set_text(deckNameLabel, (System_String_o *)this, 0LL);
  }
}