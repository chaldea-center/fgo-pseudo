void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B3CBE & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationListViewItemDraw___TypeInfo);
    byte_42B3CBE = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_B5299C(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemDrawList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyListViewItemDraw__SetInput(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  UnityEngine_Component_o *Component_WebViewObject; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v13; // x23
  __int64 v14; // x0

  if ( (byte_42B3CBD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3CBD = 1;
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
                                                                 (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_22:
      sub_B52A5C(Component_WebViewObject, v8);
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
        v14 = sub_B52A88(Component_WebViewObject);
        sub_B52A28(v14, 0LL);
      }
      v13 = itemDrawList->m_Items[i];
      Component_WebViewObject = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, v9);
      if ( !v13 )
        goto LABEL_22;
      PartyOrganizationListViewItemDraw__SetInput(
        v13,
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
  void *questRestrictionInfo; // x0
  UISprite_o *baseSprite; // x22
  System_String_o **v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v19; // x22
  PartyOrganizationListViewItem_o *v20; // x1
  PartyOrganizationListViewItemDraw_o *v21; // x0
  int32_t v22; // w2
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v24; // x8
  PartyOrganizationListViewItemDraw_o *v25; // x23
  int v26; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19
  __int64 v30; // x0

  if ( (byte_42B3CBC & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B52984(&StringLiteral_19068/*"func_group_icon_1009_starting"*/);
    sub_B52984(&StringLiteral_12423/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    sub_B52984(&StringLiteral_18988/*"formation_support_bg"*/);
    sub_B52984(&StringLiteral_18985/*"formation_member_bg"*/);
    byte_42B3CBC = 1;
  }
  if ( item && mode )
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    baseSprite = this->fields.baseSprite;
    v9 = (System_String_o **)&StringLiteral_18985/*"formation_member_bg"*/;
    if ( questRestrictionInfo )
    {
      questRestrictionInfo = (void *)QuestRestrictionInfo__IsSupportOnly(
                                       (QuestRestrictionInfo_o *)questRestrictionInfo,
                                       0LL);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
        v9 = (System_String_o **)&StringLiteral_18988/*"formation_support_bg"*/;
    }
    if ( !baseSprite )
      goto LABEL_62;
    UISprite__set_spriteName(baseSprite, *v9, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    questRestrictionInfo = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    *((_QWORD *)questRestrictionInfo + 11) = item;
    sub_B52920(
      (BattleServantConfConponent_o *)((char *)questRestrictionInfo + 88),
      (System_Int32_array **)item,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
        v19 = itemDrawList->m_Items[i];
        questRestrictionInfo = PartyListViewItem__GetMember(item, i, v16);
        if ( !v19 )
          goto LABEL_62;
        v20 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
        if ( i == 1 )
        {
          v21 = v19;
          v22 = 0;
        }
        else
        {
          v22 = 2;
          v21 = v19;
        }
        PartyOrganizationListViewItemDraw__SetItem(v21, v20, v22, 0LL);
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
        v24 = this->fields.itemDrawList;
        if ( !v24 )
          goto LABEL_62;
        if ( j >= v24->max_length )
        {
LABEL_63:
          v30 = sub_B52A88(questRestrictionInfo);
          sub_B52A28(v30, 0LL);
        }
        v25 = v24->m_Items[j];
        questRestrictionInfo = PartyListViewItem__GetMember(item, j, v16);
        if ( !v25 )
          goto LABEL_62;
        PartyOrganizationListViewItemDraw__SetItem(
          v25,
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
    v26 = *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 1056LL);
    questRestrictionInfo = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                             0LL);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    if ( v26 >= 1 )
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
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19068/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              questRestrictionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)questRestrictionInfo, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                questRestrictionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
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
      sub_B52A5C(questRestrictionInfo, item);
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