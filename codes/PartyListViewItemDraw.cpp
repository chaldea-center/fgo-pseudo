void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438E482 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationListViewItemDraw___TypeInfo);
    byte_438E482 = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_B775DC(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v3;
  sub_B77560(
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
  UnityEngine_Component_o *Component_WebViewObject; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v12; // x23
  __int64 v13; // x0

  if ( (byte_438E481 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E481 = 1;
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
                                                                 (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL),
          (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_22:
      sub_B7769C(Component_WebViewObject, v8);
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
        v13 = sub_B776C8(Component_WebViewObject);
        sub_B77668(v13, 0LL);
      }
      v12 = itemDrawList->m_Items[i];
      Component_WebViewObject = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, 0LL);
      if ( !v12 )
        goto LABEL_22;
      PartyOrganizationListViewItemDraw__SetInput(
        v12,
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
  UISprite_o *baseSprite; // x22
  void *IsSupportOnly; // x0
  __int64 v9; // x1
  System_String_o **v10; // x8
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
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

  if ( (byte_438E480 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B775C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B775C4(&StringLiteral_19309/*"func_group_icon_1009_starting"*/);
    sub_B775C4(&StringLiteral_12566/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    sub_B775C4(&StringLiteral_19226/*"formation_support_bg"*/);
    sub_B775C4(&StringLiteral_19223/*"formation_member_bg"*/);
    byte_438E480 = 1;
  }
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    IsSupportOnly = (void *)PartyListViewItem__IsSupportOnly(item, 0LL);
    if ( !baseSprite )
      goto LABEL_61;
    v10 = (System_String_o **)&StringLiteral_19226/*"formation_support_bg"*/;
    if ( ((unsigned __int8)IsSupportOnly & 1) == 0 )
      v10 = (System_String_o **)&StringLiteral_19223/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v10, 0LL);
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsSupportOnly = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsSupportOnly )
      goto LABEL_61;
    *((_QWORD *)IsSupportOnly + 11) = item;
    sub_B77560(
      (BattleServantConfConponent_o *)((char *)IsSupportOnly + 88),
      (System_Int32_array **)item,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    if ( mode == 4 )
    {
      for ( i = 0; ; ++i )
      {
        IsSupportOnly = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 156LL) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_61;
        if ( i >= itemDrawList->max_length )
          goto LABEL_62;
        v19 = itemDrawList->m_Items[i];
        IsSupportOnly = PartyListViewItem__GetMember(item, i, 0LL);
        if ( !v19 )
          goto LABEL_61;
        v20 = (PartyOrganizationListViewItem_o *)IsSupportOnly;
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
        IsSupportOnly = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( j >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 156LL) )
          break;
        v24 = this->fields.itemDrawList;
        if ( !v24 )
          goto LABEL_61;
        if ( j >= v24->max_length )
        {
LABEL_62:
          v30 = sub_B776C8(IsSupportOnly);
          sub_B77668(v30, 0LL);
        }
        v25 = v24->m_Items[j];
        IsSupportOnly = PartyListViewItem__GetMember(item, j, 0LL);
        if ( !v25 )
          goto LABEL_61;
        PartyOrganizationListViewItemDraw__SetItem(v25, (PartyOrganizationListViewItem_o *)IsSupportOnly, mode, 0LL);
      }
    }
    IsSupportOnly = this->fields.warningBase;
    if ( !IsSupportOnly )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsSupportOnly = BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_61;
    v26 = *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 1056LL);
    IsSupportOnly = UnityEngine_Component__get_gameObject(
                      (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                      0LL);
    if ( !IsSupportOnly )
      goto LABEL_61;
    if ( v26 >= 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0LL);
      IsSupportOnly = this->fields.startingMemberFriendshipUpLabel;
      if ( IsSupportOnly )
      {
        IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0LL);
        if ( IsSupportOnly )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0LL);
          IsSupportOnly = this->fields.startingMemberFriendshipUpLabelOver;
          if ( IsSupportOnly )
          {
            IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0LL);
            if ( IsSupportOnly )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0LL);
              startingMemberFriendshipUpSprite = this->fields.startingMemberFriendshipUpSprite;
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19309/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12566/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)IsSupportOnly, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12566/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
                if ( startingMemberFriendshipUpLabelOver )
                {
                  UILabel__set_text(startingMemberFriendshipUpLabelOver, (System_String_o *)IsSupportOnly, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_61:
      sub_B7769C(IsSupportOnly, v9);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabel;
    if ( !IsSupportOnly )
      goto LABEL_61;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0LL);
    if ( !IsSupportOnly )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabelOver;
    if ( !IsSupportOnly )
      goto LABEL_61;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0LL);
    if ( !IsSupportOnly )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
  }
}