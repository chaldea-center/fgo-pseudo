void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct PartyOrganizationListViewItemDraw_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42ECE87 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationListViewItemDraw___TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECE87 = 1;
  }
  v5 = (struct PartyOrganizationListViewItemDraw_array *)sub_B5D5DC(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDrawList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyListViewItemDraw__SetInput(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *Component_WebViewObject; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v19; // x23
  __int64 v20; // x0

  if ( (byte_42ECE86 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, isInput, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42ECE86 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_WebViewObject
      || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                 Component_WebViewObject,
                                                                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_22:
      sub_B5D69C(Component_WebViewObject, v14);
    }
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
      Component_WebViewObject,
      0LL,
      1LL,
      Component_WebViewObject->klass[1]._1.interfaceOffsets);
  }
  if ( item )
  {
    for ( i = 0; ; ++i )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Component_WebViewObject = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&Component_WebViewObject[7].fields.m_CachedPtr + 156LL) )
        break;
      itemDrawList = this->fields.itemDrawList;
      if ( !itemDrawList )
        goto LABEL_22;
      if ( i >= itemDrawList->max_length )
      {
        v20 = sub_B5D6C8(Component_WebViewObject);
        sub_B5D668(v20, 0LL);
      }
      v19 = itemDrawList->m_Items[i];
      Component_WebViewObject = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, v15);
      if ( !v19 )
        goto LABEL_22;
      PartyOrganizationListViewItemDraw__SetInput(
        v19,
        (PartyOrganizationListViewItem_o *)Component_WebViewObject,
        isInput,
        0LL);
    }
  }
}


void __fastcall PartyListViewItemDraw__SetItem(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  void *questRestrictionInfo; // x0
  UISprite_o *baseSprite; // x22
  System_String_o **v33; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v43; // x22
  PartyOrganizationListViewItem_o *v44; // x1
  PartyOrganizationListViewItemDraw_o *v45; // x0
  int32_t v46; // w2
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v48; // x8
  PartyOrganizationListViewItemDraw_o *v49; // x23
  int v50; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19
  __int64 v54; // x0

  if ( (byte_42ECE85 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19165/*"func_group_icon_1009_starting"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12481/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_19083/*"formation_support_bg"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19080/*"formation_member_bg"*/, v28, v29, v30);
    byte_42ECE85 = 1;
  }
  if ( item && mode )
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    baseSprite = this->fields.baseSprite;
    v33 = (System_String_o **)&StringLiteral_19080/*"formation_member_bg"*/;
    if ( questRestrictionInfo )
    {
      questRestrictionInfo = (void *)QuestRestrictionInfo__IsSupportOnly(
                                       (QuestRestrictionInfo_o *)questRestrictionInfo,
                                       0LL);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
        v33 = (System_String_o **)&StringLiteral_19083/*"formation_support_bg"*/;
    }
    if ( !baseSprite )
      goto LABEL_62;
    UISprite__set_spriteName(baseSprite, *v33, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    questRestrictionInfo = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    *((_QWORD *)questRestrictionInfo + 11) = item;
    sub_B5D560(
      (BattleServantConfConponent_o *)((char *)questRestrictionInfo + 88),
      (System_Int32_array **)item,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    if ( mode == 4 )
    {
      for ( i = 0; ; ++i )
      {
        questRestrictionInfo = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 156LL) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_62;
        if ( i >= itemDrawList->max_length )
          goto LABEL_63;
        v43 = itemDrawList->m_Items[i];
        questRestrictionInfo = PartyListViewItem__GetMember(item, i, v40);
        if ( !v43 )
          goto LABEL_62;
        v44 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
        if ( i == 1 )
        {
          v45 = v43;
          v46 = 0;
        }
        else
        {
          v46 = 2;
          v45 = v43;
        }
        PartyOrganizationListViewItemDraw__SetItem(v45, v44, v46, 0LL);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        questRestrictionInfo = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = BalanceConfig_TypeInfo;
        }
        if ( j >= *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 156LL) )
          break;
        v48 = this->fields.itemDrawList;
        if ( !v48 )
          goto LABEL_62;
        if ( j >= v48->max_length )
        {
LABEL_63:
          v54 = sub_B5D6C8(questRestrictionInfo);
          sub_B5D668(v54, 0LL);
        }
        v49 = v48->m_Items[j];
        questRestrictionInfo = PartyListViewItem__GetMember(item, j, v40);
        if ( !v49 )
          goto LABEL_62;
        PartyOrganizationListViewItemDraw__SetItem(
          v49,
          (PartyOrganizationListViewItem_o *)questRestrictionInfo,
          mode,
          0LL);
      }
    }
    questRestrictionInfo = this->fields.warningBase;
    if ( !questRestrictionInfo )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
    questRestrictionInfo = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_62;
    v50 = *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 1056LL);
    questRestrictionInfo = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                             0LL);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    if ( v50 >= 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 1, 0LL);
      questRestrictionInfo = this->fields.startingMemberFriendshipUpLabel;
      if ( questRestrictionInfo )
      {
        questRestrictionInfo = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)questRestrictionInfo,
                                 0LL);
        if ( questRestrictionInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 1, 0LL);
          questRestrictionInfo = this->fields.startingMemberFriendshipUpLabelOver;
          if ( questRestrictionInfo )
          {
            questRestrictionInfo = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)questRestrictionInfo,
                                     0LL);
            if ( questRestrictionInfo )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 1, 0LL);
              startingMemberFriendshipUpSprite = this->fields.startingMemberFriendshipUpSprite;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19165/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              questRestrictionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)questRestrictionInfo, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                questRestrictionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12481/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
                if ( startingMemberFriendshipUpLabelOver )
                {
                  UILabel__set_text(startingMemberFriendshipUpLabelOver, (System_String_o *)questRestrictionInfo, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_62:
      sub_B5D69C(questRestrictionInfo, item);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
    questRestrictionInfo = this->fields.startingMemberFriendshipUpLabel;
    if ( !questRestrictionInfo )
      goto LABEL_62;
    questRestrictionInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)questRestrictionInfo, 0LL);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
    questRestrictionInfo = this->fields.startingMemberFriendshipUpLabelOver;
    if ( !questRestrictionInfo )
      goto LABEL_62;
    questRestrictionInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)questRestrictionInfo, 0LL);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
  }
}