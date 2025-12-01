void PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC2CE2 & 1) == 0 )
  {
    sub_1C713B0(&PartyOrganizationListViewItemDraw___TypeInfo);
    byte_4CC2CE2 = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_1C71458(PartyOrganizationListViewItemDraw___TypeInfo, 6);
  this->fields.itemDrawList = v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemDrawList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyListViewItemDraw__SetActiveGrandEffect(PartyListViewItemDraw_o *this, bool flag, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *itemDrawList; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4CC2CE1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_PartyOrganizationListViewItemDraw__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_PartyOrganizationListViewItemDraw___);
    sub_1C713B0(&Method_PartyListViewItemDraw___c__DisplayClass12_0__SetActiveGrandEffect_b__0__);
    sub_1C713B0(&PartyListViewItemDraw___c__DisplayClass12_0_TypeInfo);
    byte_4CC2CE1 = 1;
  }
  v5 = sub_1C715FC(PartyListViewItemDraw___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_BYTE *)(v5 + 16) = flag;
  itemDrawList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemDrawList;
  v9 = (System_Action_object__o *)sub_1C715FC(System_Action_PartyOrganizationListViewItemDraw__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_PartyListViewItemDraw___c__DisplayClass12_0__SetActiveGrandEffect_b__0__,
    0);
  BasicHelper__ForEach_object_(
    itemDrawList,
    (System_Action_T__o *)v9,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_PartyOrganizationListViewItemDraw___);
}


void PartyListViewItemDraw__SetInput(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v12; // x23

  if ( (byte_4CC2CE0 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC2CE0 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                          Component_object,
                                                          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
    {
LABEL_20:
      sub_1C71608(Component_object, v8);
    }
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
      Component_object,
      0,
      1,
      Component_object->klass[1]._1.implementedInterfaces);
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
      if ( i >= *(_DWORD *)(Component_object[7].fields.m_CachedPtr + 172) )
        break;
      itemDrawList = this->fields.itemDrawList;
      if ( !itemDrawList )
        goto LABEL_20;
      if ( (unsigned int)i >= LODWORD(itemDrawList->max_length) )
        sub_1C71610(Component_object);
      v12 = itemDrawList->m_Items[i];
      Component_object = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, 0);
      if ( !v12 )
        goto LABEL_20;
      PartyOrganizationListViewItemDraw__SetInput(v12, (PartyOrganizationListViewItem_o *)Component_object, isInput, 0);
    }
  }
}


void PartyListViewItemDraw__SetItem(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UISprite_o *baseSprite; // x22
  void *IsSupportOnly; // x0
  __int64 v9; // x1
  System_String_o **v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v19; // x22
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v21; // x8
  PartyOrganizationListViewItemDraw_o *v22; // x23
  int v23; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_4CC2CDF & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C713B0(&StringLiteral_19788/*"func_group_icon_1009_starting"*/);
    sub_1C713B0(&StringLiteral_12315/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    sub_1C713B0(&StringLiteral_19691/*"formation_support_bg"*/);
    sub_1C713B0(&StringLiteral_19688/*"formation_member_bg"*/);
    byte_4CC2CDF = 1;
  }
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    IsSupportOnly = (void *)PartyListViewItem__IsSupportOnly(item, 0);
    if ( !baseSprite )
      goto LABEL_49;
    v10 = (System_String_o **)&StringLiteral_19691/*"formation_support_bg"*/;
    if ( ((unsigned __int8)IsSupportOnly & 1) == 0 )
      v10 = (System_String_o **)&StringLiteral_19688/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v10, 0);
    IsSupportOnly = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsSupportOnly )
      goto LABEL_49;
    *((_QWORD *)IsSupportOnly + 12) = item;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)((char *)IsSupportOnly + 96),
      (int32_t)item,
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
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 172LL) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_49;
        if ( (unsigned int)i >= LODWORD(itemDrawList->max_length) )
          goto LABEL_50;
        v19 = itemDrawList->m_Items[i];
        IsSupportOnly = PartyListViewItem__GetMember(item, i, 0);
        if ( !v19 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(
          v19,
          (PartyOrganizationListViewItem_o *)IsSupportOnly,
          2 * (i != 1),
          1,
          0);
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
        if ( j >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 172LL) )
          break;
        v21 = this->fields.itemDrawList;
        if ( !v21 )
          goto LABEL_49;
        if ( (unsigned int)j >= LODWORD(v21->max_length) )
LABEL_50:
          sub_1C71610(IsSupportOnly);
        v22 = v21->m_Items[j];
        IsSupportOnly = PartyListViewItem__GetMember(item, j, 0);
        if ( !v22 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(v22, (PartyOrganizationListViewItem_o *)IsSupportOnly, mode, 1, 0);
      }
    }
    IsSupportOnly = this->fields.warningBase;
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
    IsSupportOnly = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsSupportOnly = BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_49;
    v23 = *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 1136LL);
    IsSupportOnly = UnityEngine_Component__get_gameObject(
                      (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                      0);
    if ( !IsSupportOnly )
      goto LABEL_49;
    if ( v23 >= 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0);
      IsSupportOnly = this->fields.startingMemberFriendshipUpLabel;
      if ( IsSupportOnly )
      {
        IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
        if ( IsSupportOnly )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0);
          IsSupportOnly = this->fields.startingMemberFriendshipUpLabelOver;
          if ( IsSupportOnly )
          {
            IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
            if ( IsSupportOnly )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0);
              startingMemberFriendshipUpSprite = this->fields.startingMemberFriendshipUpSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19788/*"func_group_icon_1009_starting"*/, 0);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)IsSupportOnly, 0);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                if ( startingMemberFriendshipUpLabelOver )
                {
                  UILabel__set_text(startingMemberFriendshipUpLabelOver, (System_String_o *)IsSupportOnly, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_49:
      sub_1C71608(IsSupportOnly, v9);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabel;
    if ( !IsSupportOnly )
      goto LABEL_49;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabelOver;
    if ( !IsSupportOnly )
      goto LABEL_49;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
  }
}


void PartyListViewItemDraw___c__DisplayClass12_0___ctor(
        PartyListViewItemDraw___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void PartyListViewItemDraw___c__DisplayClass12_0___SetActiveGrandEffect_b__0(
        PartyListViewItemDraw___c__DisplayClass12_0_o *this,
        PartyOrganizationListViewItemDraw_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C71608(this, 0);
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(item, this->fields.flag, 0);
}