void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B6997 & 1) == 0 )
  {
    sub_1B4CF90(&PartyOrganizationListViewItemDraw___TypeInfo, method);
    byte_49B6997 = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_1B4D038(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v3;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemDrawList, (int32_t)v3, v4, v5);
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
  UnityEngine_Component_o *Component_object; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v14; // x23

  if ( (byte_49B6996 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, item);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    byte_49B6996 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                          Component_object,
                                                          (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_20:
      sub_1B4D1EC(Component_object, v10);
    }
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
      Component_object,
      0LL,
      1LL,
      Component_object->klass[1]._1.interfaceOffsets);
  }
  if ( item )
  {
    for ( i = 0; ; ++i )
    {
      Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      if ( i >= *(_DWORD *)(*(_QWORD *)&Component_object[7].fields.m_CachedPtr + 156LL) )
        break;
      itemDrawList = this->fields.itemDrawList;
      if ( !itemDrawList )
        goto LABEL_20;
      if ( i >= itemDrawList->max_length )
        sub_1B4D1F4(Component_object, v10);
      v14 = itemDrawList->m_Items[i];
      Component_object = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, 0LL);
      if ( !v14 )
        goto LABEL_20;
      PartyOrganizationListViewItemDraw__SetInput(
        v14,
        (PartyOrganizationListViewItem_o *)Component_object,
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
  UISprite_o *baseSprite; // x22
  void *IsSupportOnly; // x0
  __int64 v16; // x1
  System_String_o **v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v22; // x22
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v24; // x8
  PartyOrganizationListViewItemDraw_o *v25; // x23
  int v26; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_49B6995 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, item);
    sub_1B4CF90(&BalanceConfig_TypeInfo, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1B4CF90(&StringLiteral_19372/*"func_group_icon_1009_starting"*/, v10);
    sub_1B4CF90(&StringLiteral_12029/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v11);
    sub_1B4CF90(&StringLiteral_19279/*"formation_support_bg"*/, v12);
    sub_1B4CF90(&StringLiteral_19276/*"formation_member_bg"*/, v13);
    byte_49B6995 = 1;
  }
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    IsSupportOnly = (void *)PartyListViewItem__IsSupportOnly(item, 0LL);
    if ( !baseSprite )
      goto LABEL_49;
    v17 = (System_String_o **)&StringLiteral_19279/*"formation_support_bg"*/;
    if ( ((unsigned __int8)IsSupportOnly & 1) == 0 )
      v17 = (System_String_o **)&StringLiteral_19276/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v17, 0LL);
    IsSupportOnly = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsSupportOnly )
      goto LABEL_49;
    *((_QWORD *)IsSupportOnly + 11) = item;
    sub_1B4CF34((CGThumbnailListItem_o *)((char *)IsSupportOnly + 88), (int32_t)item, v18, v19);
    if ( mode == 4 )
    {
      for ( i = 0; ; ++i )
      {
        IsSupportOnly = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 156LL) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_49;
        if ( i >= itemDrawList->max_length )
          goto LABEL_50;
        v22 = itemDrawList->m_Items[i];
        IsSupportOnly = PartyListViewItem__GetMember(item, i, 0LL);
        if ( !v22 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(
          v22,
          (PartyOrganizationListViewItem_o *)IsSupportOnly,
          2 * (i != 1),
          0LL);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        IsSupportOnly = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( j >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 156LL) )
          break;
        v24 = this->fields.itemDrawList;
        if ( !v24 )
          goto LABEL_49;
        if ( j >= v24->max_length )
LABEL_50:
          sub_1B4D1F4(IsSupportOnly, v16);
        v25 = v24->m_Items[j];
        IsSupportOnly = PartyListViewItem__GetMember(item, j, 0LL);
        if ( !v25 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(v25, (PartyOrganizationListViewItem_o *)IsSupportOnly, mode, 0LL);
      }
    }
    IsSupportOnly = this->fields.warningBase;
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsSupportOnly = BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_49;
    v26 = *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 1088LL);
    IsSupportOnly = UnityEngine_Component__get_gameObject(
                      (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                      0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
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
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19372/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)IsSupportOnly, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
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
LABEL_49:
      sub_1B4D1EC(IsSupportOnly, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabel;
    if ( !IsSupportOnly )
      goto LABEL_49;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabelOver;
    if ( !IsSupportOnly )
      goto LABEL_49;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
  }
}