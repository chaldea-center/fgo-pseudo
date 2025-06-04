void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4AFDA2B & 1) == 0 )
  {
    sub_1BC3008(&PartyOrganizationListViewItemDraw___TypeInfo, method);
    byte_4AFDA2B = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_1BC30B0(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemDrawList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListViewItemDraw__SetActiveGrandEffect(
        PartyListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *itemDrawList; // x19
  System_Action_object__o *v12; // x20

  if ( (byte_4AFDA2A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_PartyOrganizationListViewItemDraw__TypeInfo, flag);
    sub_1BC3008(&Method_BasicHelper_ForEach_PartyOrganizationListViewItemDraw___, v5);
    sub_1BC3008(&Method_PartyListViewItemDraw___c__DisplayClass12_0__SetActiveGrandEffect_b__0__, v6);
    sub_1BC3008(&PartyListViewItemDraw___c__DisplayClass12_0_TypeInfo, v7);
    byte_4AFDA2A = 1;
  }
  v8 = sub_1BC3254(PartyListViewItemDraw___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_BYTE *)(v8 + 16) = flag;
  itemDrawList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemDrawList;
  v12 = (System_Action_object__o *)sub_1BC3254(System_Action_PartyOrganizationListViewItemDraw__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_PartyListViewItemDraw___c__DisplayClass12_0__SetActiveGrandEffect_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    itemDrawList,
    (System_Action_T__o *)v12,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_PartyOrganizationListViewItemDraw___);
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
  __int64 v11; // x2
  UnityEngine_Component_o *Component_object; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v15; // x23

  if ( (byte_4AFDA29 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, item);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4AFDA29 = 1;
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
                                                          (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_20:
      sub_1BC3264(Component_object, v10);
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
      if ( i >= *(_DWORD *)(*(_QWORD *)&Component_object[7].fields.m_CachedPtr + 172LL) )
        break;
      itemDrawList = this->fields.itemDrawList;
      if ( !itemDrawList )
        goto LABEL_20;
      if ( i >= itemDrawList->max_length )
        sub_1BC326C(Component_object, v10, v11);
      v15 = itemDrawList->m_Items[i];
      Component_object = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, 0LL);
      if ( !v15 )
        goto LABEL_20;
      PartyOrganizationListViewItemDraw__SetInput(
        v15,
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
  __int64 v20; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v23; // x22
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v25; // x8
  PartyOrganizationListViewItemDraw_o *v26; // x23
  int v27; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_4AFDA28 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, item);
    sub_1BC3008(&BalanceConfig_TypeInfo, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1BC3008(&StringLiteral_19528/*"func_group_icon_1009_starting"*/, v10);
    sub_1BC3008(&StringLiteral_12193/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v11);
    sub_1BC3008(&StringLiteral_19431/*"formation_support_bg"*/, v12);
    sub_1BC3008(&StringLiteral_19428/*"formation_member_bg"*/, v13);
    byte_4AFDA28 = 1;
  }
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    IsSupportOnly = (void *)PartyListViewItem__IsSupportOnly(item, 0LL);
    if ( !baseSprite )
      goto LABEL_49;
    v17 = (System_String_o **)&StringLiteral_19431/*"formation_support_bg"*/;
    if ( ((unsigned __int8)IsSupportOnly & 1) == 0 )
      v17 = (System_String_o **)&StringLiteral_19428/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v17, 0LL);
    IsSupportOnly = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsSupportOnly )
      goto LABEL_49;
    *((_QWORD *)IsSupportOnly + 12) = item;
    sub_1BC2FAC((CGThumbnailListItem_o *)((char *)IsSupportOnly + 96), (int32_t)item, v18, v19);
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
        if ( i >= itemDrawList->max_length )
          goto LABEL_50;
        v23 = itemDrawList->m_Items[i];
        IsSupportOnly = PartyListViewItem__GetMember(item, i, 0LL);
        if ( !v23 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(
          v23,
          (PartyOrganizationListViewItem_o *)IsSupportOnly,
          2 * (i != 1),
          1,
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
        if ( j >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 172LL) )
          break;
        v25 = this->fields.itemDrawList;
        if ( !v25 )
          goto LABEL_49;
        if ( j >= v25->max_length )
LABEL_50:
          sub_1BC326C(IsSupportOnly, v16, v20);
        v26 = v25->m_Items[j];
        IsSupportOnly = PartyListViewItem__GetMember(item, j, 0LL);
        if ( !v26 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(v26, (PartyOrganizationListViewItem_o *)IsSupportOnly, mode, 1, 0LL);
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
    v27 = *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 1136LL);
    IsSupportOnly = UnityEngine_Component__get_gameObject(
                      (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                      0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
    if ( v27 >= 1 )
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
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19528/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)IsSupportOnly, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0LL);
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
      sub_1BC3264(IsSupportOnly, v16);
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


void __fastcall PartyListViewItemDraw___c__DisplayClass12_0___ctor(
        PartyListViewItemDraw___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyListViewItemDraw___c__DisplayClass12_0___SetActiveGrandEffect_b__0(
        PartyListViewItemDraw___c__DisplayClass12_0_o *this,
        PartyOrganizationListViewItemDraw_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BC3264(this, 0LL);
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(item, this->fields.flag, 0LL);
}