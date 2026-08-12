void PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596BF1E & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationListViewItemDraw___TypeInfo);
    byte_596BF1E = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_2213B20(PartyOrganizationListViewItemDraw___TypeInfo, 6);
  this->fields.itemDrawList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemDrawList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PartyListViewItemDraw__ClearItems(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 i; // x21
  PartyOrganizationListViewItemDraw_o *v5; // x0
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8

  if ( (byte_596BF1D & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596BF1D = 1;
  }
  for ( i = 0; ; ++i )
  {
    v5 = (PartyOrganizationListViewItemDraw_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
      v5 = (PartyOrganizationListViewItemDraw_o *)BalanceConfig_TypeInfo;
    }
    if ( (int)i >= v5->fields.noneEquipSprite->fields.mHeight )
      break;
    itemDrawList = this->fields.itemDrawList;
    if ( !itemDrawList )
      goto LABEL_12;
    if ( (unsigned int)i >= LODWORD(itemDrawList->max_length) )
      sub_2213CE4(v5);
    v5 = itemDrawList->m_Items[i];
    if ( !v5 )
LABEL_12:
      sub_2213CDC(v5, method);
    PartyOrganizationListViewItemDraw__ClearItem(v5, 0);
  }
}


void PartyListViewItemDraw__SetActiveGrandEffect(PartyListViewItemDraw_o *this, bool flag, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  bool v8; // w9
  System_Collections_Generic_IEnumerable_T__o *itemDrawList; // x19
  System_Action_PartyOrganizationListViewItemDraw__c *v10; // x0
  System_Action_object__o *v11; // x20

  if ( (byte_596BF1C & 1) == 0 )
  {
    sub_2213A60(&System_Action_PartyOrganizationListViewItemDraw__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_PartyOrganizationListViewItemDraw___);
    sub_2213A60(&Method_PartyListViewItemDraw___c__DisplayClass12_0__SetActiveGrandEffect_b__0__);
    sub_2213A60(&PartyListViewItemDraw___c__DisplayClass12_0_TypeInfo);
    byte_596BF1C = 1;
  }
  v5 = sub_2213CCC(PartyListViewItemDraw___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  v8 = flag;
  itemDrawList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.itemDrawList;
  v10 = System_Action_PartyOrganizationListViewItemDraw__TypeInfo;
  *(_BYTE *)(v5 + 16) = v8;
  v11 = (System_Action_object__o *)sub_2213CCC(v10);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_PartyListViewItemDraw___c__DisplayClass12_0__SetActiveGrandEffect_b__0__,
    0);
  BasicHelper__ForEach_object_(
    itemDrawList,
    (System_Action_T__o *)v11,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_PartyOrganizationListViewItemDraw___);
}


// local variable allocation has failed, the output may be wrong!
void PartyListViewItemDraw__SetInput(
        PartyListViewItemDraw_o *this,
        PartyListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o *Component_object; // x0
  __int64 i; // x22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v13; // x23

  if ( (byte_596BF1B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF1B = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, isInput);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_object
      || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                          Component_object,
                                                          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
    {
LABEL_20:
      sub_2213CDC(Component_object, v8);
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
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8, v9);
        Component_object = (UnityEngine_Component_o *)BalanceConfig_TypeInfo;
      }
      if ( (int)i >= *(_DWORD *)(Component_object[7].fields.m_CachedPtr + 172) )
        break;
      itemDrawList = this->fields.itemDrawList;
      if ( !itemDrawList )
        goto LABEL_20;
      if ( (unsigned int)i >= LODWORD(itemDrawList->max_length) )
        sub_2213CE4(Component_object);
      v13 = itemDrawList->m_Items[i];
      Component_object = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, 0);
      if ( !v13 )
        goto LABEL_20;
      PartyOrganizationListViewItemDraw__SetInput(v13, (PartyOrganizationListViewItem_o *)Component_object, isInput, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  unsigned __int64 i; // x21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v20; // x22
  PartyOrganizationListViewItem_o *v21; // x1
  PartyOrganizationListViewItemDraw_o *v22; // x0
  int32_t v23; // w2
  PartyOrganizationListViewItemDraw_o *v24; // x22
  __int64 j; // x22
  struct PartyOrganizationListViewItemDraw_array *v26; // x8
  PartyOrganizationListViewItemDraw_o *v27; // x23
  __int64 v28; // x2
  BalanceConfig_c *v29; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_596BF1A & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_20644/*"func_group_icon_1009_starting"*/);
    sub_2213A60(&StringLiteral_12828/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    sub_2213A60(&StringLiteral_20546/*"formation_support_bg"*/);
    sub_2213A60(&StringLiteral_20543/*"formation_member_bg"*/);
    byte_596BF1A = 1;
  }
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    IsSupportOnly = (void *)PartyListViewItem__IsSupportOnly(item, 0);
    if ( !baseSprite )
      goto LABEL_57;
    v10 = (System_String_o **)&StringLiteral_20546/*"formation_support_bg"*/;
    if ( ((unsigned __int8)IsSupportOnly & 1) == 0 )
      v10 = (System_String_o **)&StringLiteral_20543/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v10, 0);
    IsSupportOnly = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsSupportOnly )
      goto LABEL_57;
    *((_QWORD *)IsSupportOnly + 15) = item;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)((char *)IsSupportOnly + 120),
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
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v17);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( (__int64)i >= *(int *)(*((_QWORD *)IsSupportOnly + 23) + 172LL) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( i == 1 )
        {
          if ( !itemDrawList )
            goto LABEL_57;
          if ( (itemDrawList->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_58;
          v20 = itemDrawList->m_Items[1];
          IsSupportOnly = PartyListViewItem__GetMember(item, 1, 0);
          if ( !v20 )
            goto LABEL_57;
          v21 = (PartyOrganizationListViewItem_o *)IsSupportOnly;
          v22 = v20;
          v23 = 0;
        }
        else
        {
          if ( !itemDrawList )
            goto LABEL_57;
          if ( i >= LODWORD(itemDrawList->max_length) )
            goto LABEL_58;
          v24 = itemDrawList->m_Items[i];
          IsSupportOnly = PartyListViewItem__GetMember(item, i, 0);
          if ( !v24 )
            goto LABEL_57;
          v21 = (PartyOrganizationListViewItem_o *)IsSupportOnly;
          v22 = v24;
          v23 = 2;
        }
        PartyOrganizationListViewItemDraw__SetItem(v22, v21, v23, 1, 0);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        IsSupportOnly = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v17);
          IsSupportOnly = BalanceConfig_TypeInfo;
        }
        if ( (int)j >= *(_DWORD *)(*((_QWORD *)IsSupportOnly + 23) + 172LL) )
          break;
        v26 = this->fields.itemDrawList;
        if ( !v26 )
          goto LABEL_57;
        if ( (unsigned int)j >= LODWORD(v26->max_length) )
LABEL_58:
          sub_2213CE4(IsSupportOnly);
        v27 = v26->m_Items[j];
        IsSupportOnly = PartyListViewItem__GetMember(item, j, 0);
        if ( !v27 )
          goto LABEL_57;
        PartyOrganizationListViewItemDraw__SetItem(v27, (PartyOrganizationListViewItem_o *)IsSupportOnly, mode, 1, 0);
      }
    }
    IsSupportOnly = this->fields.warningBase;
    if ( !IsSupportOnly )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
    v29 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v28);
      v29 = BalanceConfig_TypeInfo;
    }
    static_fields = v29->static_fields;
    IsSupportOnly = this->fields.startingMemberFriendshipUpSprite;
    if ( static_fields->StartingMemberFriendshipRate >= 1 )
    {
      if ( IsSupportOnly )
      {
        IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
        if ( IsSupportOnly )
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
                  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31, v32);
                  AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_20644/*"func_group_icon_1009_starting"*/, 0);
                  startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
                  IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12828/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
                  if ( startingMemberFriendshipUpLabel )
                  {
                    UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)IsSupportOnly, 0);
                    startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                    IsSupportOnly = LocalizationManager__Get((System_String_o *)StringLiteral_12828/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, 0);
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
        }
      }
LABEL_57:
      sub_2213CDC(IsSupportOnly, v9);
    }
    if ( !IsSupportOnly )
      goto LABEL_57;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
    if ( !IsSupportOnly )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabel;
    if ( !IsSupportOnly )
      goto LABEL_57;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
    if ( !IsSupportOnly )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0);
    IsSupportOnly = this->fields.startingMemberFriendshipUpLabelOver;
    if ( !IsSupportOnly )
      goto LABEL_57;
    IsSupportOnly = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsSupportOnly, 0);
    if ( !IsSupportOnly )
      goto LABEL_57;
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
    sub_2213CDC(this, 0);
  PartyOrganizationListViewItemDraw__SetActiveGrandEffect(item, this->fields.flag, 0);
}