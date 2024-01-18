void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418B52F & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationListViewItemDraw___TypeInfo, method);
    byte_418B52F = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_B2C374(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v3;
  sub_B2C2F8(
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UnityEngine_Component_o *Component_WebViewObject; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v15; // x23
  __int64 v16; // x0

  if ( (byte_418B52E & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418B52E = 1;
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
                                                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_22:
      sub_B2C434(Component_WebViewObject, v10);
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
        v16 = sub_B2C460(Component_WebViewObject);
        sub_B2C400(v16, 0LL);
      }
      v15 = itemDrawList->m_Items[i];
      Component_WebViewObject = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, v11);
      if ( !v15 )
        goto LABEL_22;
      PartyOrganizationListViewItemDraw__SetInput(
        v15,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *questRestrictionInfo; // x0
  UISprite_o *baseSprite; // x22
  System_String_o **v17; // x23
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v27; // x22
  PartyOrganizationListViewItem_o *v28; // x1
  PartyOrganizationListViewItemDraw_o *v29; // x0
  int32_t v30; // w2
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v32; // x8
  PartyOrganizationListViewItemDraw_o *v33; // x23
  int v34; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19
  __int64 v38; // x0

  if ( (byte_418B52D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&BalanceConfig_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v10);
    sub_B2C35C(&StringLiteral_18926/*"func_group_icon_1009_starting"*/, v11);
    sub_B2C35C(&StringLiteral_12334/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_18847/*"formation_support_bg"*/, v13);
    sub_B2C35C(&StringLiteral_18844/*"formation_member_bg"*/, v14);
    byte_418B52D = 1;
  }
  if ( item && mode )
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    baseSprite = this->fields.baseSprite;
    v17 = (System_String_o **)&StringLiteral_18844/*"formation_member_bg"*/;
    if ( questRestrictionInfo )
    {
      questRestrictionInfo = (void *)QuestRestrictionInfo__IsSupportOnly(
                                       (QuestRestrictionInfo_o *)questRestrictionInfo,
                                       0LL);
      if ( ((unsigned __int8)questRestrictionInfo & 1) != 0 )
        v17 = (System_String_o **)&StringLiteral_18847/*"formation_support_bg"*/;
    }
    if ( !baseSprite )
      goto LABEL_62;
    UISprite__set_spriteName(baseSprite, *v17, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    questRestrictionInfo = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    *((_QWORD *)questRestrictionInfo + 11) = item;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)((char *)questRestrictionInfo + 88),
      (System_Int32_array **)item,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
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
        v27 = itemDrawList->m_Items[i];
        questRestrictionInfo = PartyListViewItem__GetMember(item, i, v24);
        if ( !v27 )
          goto LABEL_62;
        v28 = (PartyOrganizationListViewItem_o *)questRestrictionInfo;
        if ( i == 1 )
        {
          v29 = v27;
          v30 = 0;
        }
        else
        {
          v30 = 2;
          v29 = v27;
        }
        PartyOrganizationListViewItemDraw__SetItem(v29, v28, v30, 0LL);
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
        v32 = this->fields.itemDrawList;
        if ( !v32 )
          goto LABEL_62;
        if ( j >= v32->max_length )
        {
LABEL_63:
          v38 = sub_B2C460(questRestrictionInfo);
          sub_B2C400(v38, 0LL);
        }
        v33 = v32->m_Items[j];
        questRestrictionInfo = PartyListViewItem__GetMember(item, j, v24);
        if ( !v33 )
          goto LABEL_62;
        PartyOrganizationListViewItemDraw__SetItem(
          v33,
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
    v34 = *(_DWORD *)(*((_QWORD *)questRestrictionInfo + 23) + 1056LL);
    questRestrictionInfo = UnityEngine_Component__get_gameObject(
                             (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                             0LL);
    if ( !questRestrictionInfo )
      goto LABEL_62;
    if ( v34 >= 1 )
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
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_18926/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              questRestrictionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)questRestrictionInfo, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                questRestrictionInfo = LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
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
      sub_B2C434(questRestrictionInfo, item);
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