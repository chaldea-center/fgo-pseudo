void __fastcall DeckListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  PartyOrganizationListViewItem_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA4F4 & 1) == 0 )
  {
    sub_B16FFC(&DeckListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&PartyOrganizationListViewItem_TypeInfo, v5);
    byte_40FA4F4 = 1;
  }
  v6 = (PartyOrganizationListViewItem_o *)sub_B170CC(PartyOrganizationListViewItem_TypeInfo, v1, v2, v3, v4);
  PartyOrganizationListViewItem___ctor_32311272(v6, 0, 1, 0LL, 0LL, 1, 0, 0LL);
  static_fields = (BattleServantConfConponent_o *)DeckListViewItemDraw_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B16F98(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
}


void __fastcall DeckListViewItemDraw___ctor(DeckListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct PartyOrganizationConfirmItemDraw_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA4F3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&PartyOrganizationConfirmItemDraw___TypeInfo, v4);
    byte_40FA4F3 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (struct PartyOrganizationConfirmItemDraw_array *)sub_B17014(
                                                          PartyOrganizationConfirmItemDraw___TypeInfo,
                                                          (unsigned int)v5->static_fields->DeckMemberMax,
                                                          v2);
  this->fields.memberObjectList = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.memberObjectList,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall DeckListViewItemDraw__SetItem(
        DeckListViewItemDraw_o *this,
        DeckListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  if ( !item )
    sub_B170D4();
  DeckListViewItemDraw__SetItem_25779096(this, item->fields.partyItem, mode, method);
}


void __fastcall DeckListViewItemDraw__SetItem_25779096(
        DeckListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct PartyOrganizationConfirmItemDraw_array *memberObjectList; // x8
  unsigned __int64 v11; // x21
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct PartyOrganizationConfirmItemDraw_array *v15; // x8
  PartyOrganizationConfirmItemDraw_o *v16; // x22
  PartyOrganizationListViewItem_o *emptyFollowerListViewItem; // x1
  UILabel_o *deckNumLabel; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x22
  int32_t DeckNum; // w0
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  UILabel_o *deckNameLabel; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x0

  if ( (byte_40FA4F2 & 1) == 0 )
  {
    sub_B16FFC(&DeckListViewItemDraw_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_10300/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, v8);
    sub_B16FFC(&StringLiteral_10299/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, v9);
    byte_40FA4F2 = 1;
  }
  if ( mode )
  {
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    v11 = 0LL;
    while ( (__int64)v11 < (int)memberObjectList->max_length )
    {
      if ( !item )
        goto LABEL_19;
      Member = PartyListViewItem__GetMember(item, v11, 0LL);
      if ( !Member )
        goto LABEL_19;
      v15 = this->fields.memberObjectList;
      if ( !v15 )
        goto LABEL_19;
      if ( v11 >= v15->max_length )
      {
        sub_B17100(Member, v13, v14);
        sub_B170A0();
      }
      v16 = v15->m_Items[v11];
      emptyFollowerListViewItem = Member;
      if ( Member->fields.isFollower )
      {
        if ( (BYTE3(DeckListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DeckListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DeckListViewItemDraw_TypeInfo);
        }
        if ( !v16 )
          goto LABEL_19;
        emptyFollowerListViewItem = DeckListViewItemDraw_TypeInfo->static_fields->emptyFollowerListViewItem;
      }
      else if ( !v16 )
      {
        goto LABEL_19;
      }
      PartyOrganizationConfirmItemDraw__SetItem(v16, emptyFollowerListViewItem, 2, 0, 0, 0, 0, 0LL);
      memberObjectList = this->fields.memberObjectList;
      ++v11;
      if ( !memberObjectList )
        goto LABEL_19;
    }
    deckNumLabel = this->fields.deckNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_10300/*"PARTY_ORGANIZATION_DECK_SELECT_NUMBER"*/, 0LL);
    if ( !item )
      goto LABEL_19;
    v20 = v19;
    DeckNum = PartyListViewItem__get_DeckNum(item, 0LL);
    v22 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(DeckNum, 0LL);
    v23 = System_String__Format(v20, v22, 0LL);
    if ( !deckNumLabel
      || (UILabel__set_text(deckNumLabel, v23, 0LL),
          deckNameLabel = this->fields.deckNameLabel,
          v25 = LocalizationManager__Get((System_String_o *)StringLiteral_10299/*"PARTY_ORGANIZATION_DECK_SELECT_NAME"*/, 0LL),
          v26 = System_String__Format(v25, (Il2CppObject *)item->fields.deckName, 0LL),
          !deckNameLabel) )
    {
LABEL_19:
      sub_B170D4();
    }
    UILabel__set_text(deckNameLabel, v26, 0LL);
  }
}