void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PartyOrganizationListViewItemDraw_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FDDA8 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationListViewItemDraw___TypeInfo, method);
    byte_40FDDA8 = 1;
  }
  v4 = (struct PartyOrganizationListViewItemDraw_array *)sub_B17014(
                                                           PartyOrganizationListViewItemDraw___TypeInfo,
                                                           6LL,
                                                           v2);
  this->fields.itemDrawList = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDrawList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyListViewItemDraw__SetInput(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UIButton_o *v14; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v17; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  BalanceConfig_c *v19; // x0

  if ( (byte_40FDDA7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FDDA7 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !v12
      || (Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                v12,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL),
          (v14 = this->fields.baseButton) == 0LL) )
    {
LABEL_22:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UIButton_o *, _QWORD, __int64, Il2CppMethodPointer))v14->klass->vtable._14_SetState.method)(
      v14,
      0LL,
      1LL,
      v14->klass->vtable._15_OnClick.methodPtr);
  }
  if ( item )
  {
    for ( i = 0; ; ++i )
    {
      v19 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      if ( i >= v19->static_fields->DeckMemberMax )
        break;
      itemDrawList = this->fields.itemDrawList;
      if ( !itemDrawList )
        goto LABEL_22;
      if ( i >= itemDrawList->max_length )
      {
        sub_B17100(v19, v10, v11);
        sub_B170A0();
      }
      v17 = itemDrawList->m_Items[i];
      Member = PartyListViewItem__GetMember(item, i, v11);
      if ( !v17 )
        goto LABEL_22;
      PartyOrganizationListViewItemDraw__SetInput(v17, Member, isInput, 0LL);
    }
  }
}


void __fastcall PartyListViewItemDraw__SetItem(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UISprite_o *baseSprite; // x22
  System_String_o **v17; // x23
  clsQuestCheck_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v29; // x22
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v31; // x1
  PartyOrganizationListViewItemDraw_o *v32; // x0
  int32_t v33; // w2
  BalanceConfig_c *v34; // x0
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v36; // x8
  PartyOrganizationListViewItemDraw_o *v37; // x23
  PartyOrganizationListViewItem_o *v38; // x0
  UnityEngine_GameObject_o *warningBase; // x0
  BalanceConfig_c *v40; // x0
  int StartingMemberFriendshipRate; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *startingMemberFriendshipUpLabel; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Component_o *startingMemberFriendshipUpLabelOver; // x0
  UnityEngine_GameObject_o *v46; // x0
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *v48; // x20
  System_String_o *v49; // x0
  UILabel_o *v50; // x19
  System_String_o *v51; // x0
  UnityEngine_Component_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0

  if ( (byte_40FDDA6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&BalanceConfig_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18854, v11);
    sub_B16FFC(&StringLiteral_12281, v12);
    sub_B16FFC(&StringLiteral_18775, v13);
    sub_B16FFC(&StringLiteral_18772, v14);
    byte_40FDDA6 = 1;
  }
  if ( item && mode )
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    baseSprite = this->fields.baseSprite;
    v17 = (System_String_o **)&StringLiteral_18772;
    if ( questRestrictionInfo && QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL) )
      v17 = (System_String_o **)&StringLiteral_18775;
    if ( !baseSprite )
      goto LABEL_62;
    UISprite__set_spriteName(baseSprite, *v17, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    v18 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !v18 )
      goto LABEL_62;
    v18[2].fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)item;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18[2].fields.cQuestReleaseListP,
      (System_Int32_array **)item,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( mode == 4 )
    {
      for ( i = 0; ; ++i )
      {
        v34 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v34 = BalanceConfig_TypeInfo;
        }
        if ( i >= v34->static_fields->DeckMemberMax )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_62;
        if ( i >= itemDrawList->max_length )
          goto LABEL_63;
        v29 = itemDrawList->m_Items[i];
        Member = PartyListViewItem__GetMember(item, i, v26);
        if ( !v29 )
          goto LABEL_62;
        v31 = Member;
        if ( i == 1 )
        {
          v32 = v29;
          v33 = 0;
        }
        else
        {
          v33 = 2;
          v32 = v29;
        }
        PartyOrganizationListViewItemDraw__SetItem(v32, v31, v33, 0LL);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        v34 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v34 = BalanceConfig_TypeInfo;
        }
        if ( j >= v34->static_fields->DeckMemberMax )
          break;
        v36 = this->fields.itemDrawList;
        if ( !v36 )
          goto LABEL_62;
        if ( j >= v36->max_length )
        {
LABEL_63:
          sub_B17100(v34, v25, v26);
          sub_B170A0();
        }
        v37 = v36->m_Items[j];
        v38 = PartyListViewItem__GetMember(item, j, v26);
        if ( !v37 )
          goto LABEL_62;
        PartyOrganizationListViewItemDraw__SetItem(v37, v38, mode, 0LL);
      }
    }
    warningBase = this->fields.warningBase;
    if ( !warningBase )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive(warningBase, 0, 0LL);
    v40 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v40 = BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_62;
    StartingMemberFriendshipRate = v40->static_fields->StartingMemberFriendshipRate;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                   0LL);
    if ( !gameObject )
      goto LABEL_62;
    if ( StartingMemberFriendshipRate >= 1 )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      startingMemberFriendshipUpLabel = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpLabel;
      if ( startingMemberFriendshipUpLabel )
      {
        v44 = UnityEngine_Component__get_gameObject(startingMemberFriendshipUpLabel, 0LL);
        if ( v44 )
        {
          UnityEngine_GameObject__SetActive(v44, 1, 0LL);
          startingMemberFriendshipUpLabelOver = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpLabelOver;
          if ( startingMemberFriendshipUpLabelOver )
          {
            v46 = UnityEngine_Component__get_gameObject(startingMemberFriendshipUpLabelOver, 0LL);
            if ( v46 )
            {
              UnityEngine_GameObject__SetActive(v46, 1, 0LL);
              startingMemberFriendshipUpSprite = this->fields.startingMemberFriendshipUpSprite;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_18854, 0LL);
              v48 = this->fields.startingMemberFriendshipUpLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12281, 0LL);
              if ( v48 )
              {
                UILabel__set_text(v48, v49, 0LL);
                v50 = this->fields.startingMemberFriendshipUpLabelOver;
                v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12281, 0LL);
                if ( v50 )
                {
                  UILabel__set_text(v50, v51, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_62:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v52 = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpLabel;
    if ( !v52 )
      goto LABEL_62;
    v53 = UnityEngine_Component__get_gameObject(v52, 0LL);
    if ( !v53 )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive(v53, 0, 0LL);
    v54 = (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpLabelOver;
    if ( !v54 )
      goto LABEL_62;
    v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
    if ( !v55 )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive(v55, 0, 0LL);
  }
}