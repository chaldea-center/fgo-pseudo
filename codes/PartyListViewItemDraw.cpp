void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4C1DAAC & 1) == 0 )
  {
    sub_1C3B764(&PartyOrganizationListViewItemDraw___TypeInfo, method);
    byte_4C1DAAC = 1;
  }
  this->fields.itemDrawList = (struct PartyOrganizationListViewItemDraw_array *)sub_1C3B80C(
                                                                                  PartyOrganizationListViewItemDraw___TypeInfo,
                                                                                  6LL);
  sub_1C3B708(&this->fields.itemDrawList);
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

  if ( (byte_4C1DAAB & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, item);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    byte_4C1DAAB = 1;
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
                                                          (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_20:
      sub_1C3B9C0(Component_object, v10);
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
        sub_1C3B9C8(Component_object, v10);
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
  PartyOrganizationListViewItem_o *IsSupportOnly; // x0
  __int64 v16; // x1
  System_String_o **v17; // x8
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v20; // x22
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v22; // x8
  PartyOrganizationListViewItemDraw_o *v23; // x23
  int v24; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_4C1DAAA & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, item);
    sub_1C3B764(&BalanceConfig_TypeInfo, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_20064/*"img_quest_lasttime"*/, v10);
    sub_1C3B764(&StringLiteral_12501/*"Setting position is not supported on "*/, v11);
    sub_1C3B764(&StringLiteral_19969/*"img_flame_{0}"*/, v12);
    sub_1C3B764(&StringLiteral_19966/*"img_craft_reward_frame_1"*/, v13);
    byte_4C1DAAA = 1;
  }
  if ( item && mode )
  {
    baseSprite = this->fields.baseSprite;
    IsSupportOnly = (PartyOrganizationListViewItem_o *)PartyListViewItem__IsSupportOnly(item, 0LL);
    if ( !baseSprite )
      goto LABEL_49;
    v17 = (System_String_o **)&StringLiteral_19969/*"img_flame_{0}"*/;
    if ( ((unsigned __int8)IsSupportOnly & 1) == 0 )
      v17 = (System_String_o **)&StringLiteral_19966/*"img_craft_reward_frame_1"*/;
    UISprite__set_spriteName(baseSprite, *v17, 0LL);
    IsSupportOnly = (PartyOrganizationListViewItem_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !IsSupportOnly )
      goto LABEL_49;
    *(_QWORD *)&IsSupportOnly->fields.isTermination = item;
    sub_1C3B708(&IsSupportOnly->fields.isTermination);
    if ( mode == 4 )
    {
      for ( i = 0; ; ++i )
      {
        IsSupportOnly = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*(_QWORD *)&IsSupportOnly->fields.classId + 156LL) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_49;
        if ( i >= itemDrawList->max_length )
          goto LABEL_50;
        v20 = itemDrawList->m_Items[i];
        IsSupportOnly = PartyListViewItem__GetMember(item, i, 0LL);
        if ( !v20 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(v20, IsSupportOnly, 2 * (i != 1), 0LL);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        IsSupportOnly = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          IsSupportOnly = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
        }
        if ( j >= *(_DWORD *)(*(_QWORD *)&IsSupportOnly->fields.classId + 156LL) )
          break;
        v22 = this->fields.itemDrawList;
        if ( !v22 )
          goto LABEL_49;
        if ( j >= v22->max_length )
LABEL_50:
          sub_1C3B9C8(IsSupportOnly, v16);
        v23 = v22->m_Items[j];
        IsSupportOnly = PartyListViewItem__GetMember(item, j, 0LL);
        if ( !v23 )
          goto LABEL_49;
        PartyOrganizationListViewItemDraw__SetItem(v23, IsSupportOnly, mode, 0LL);
      }
    }
    IsSupportOnly = (PartyOrganizationListViewItem_o *)this->fields.warningBase;
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      IsSupportOnly = (PartyOrganizationListViewItem_o *)BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_49;
    v24 = *(_DWORD *)(*(_QWORD *)&IsSupportOnly->fields.classId + 1088LL);
    IsSupportOnly = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                                                         0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
    if ( v24 >= 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0LL);
      IsSupportOnly = (PartyOrganizationListViewItem_o *)this->fields.startingMemberFriendshipUpLabel;
      if ( IsSupportOnly )
      {
        IsSupportOnly = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)IsSupportOnly,
                                                             0LL);
        if ( IsSupportOnly )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0LL);
          IsSupportOnly = (PartyOrganizationListViewItem_o *)this->fields.startingMemberFriendshipUpLabelOver;
          if ( IsSupportOnly )
          {
            IsSupportOnly = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)IsSupportOnly,
                                                                 0LL);
            if ( IsSupportOnly )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 1, 0LL);
              startingMemberFriendshipUpSprite = this->fields.startingMemberFriendshipUpSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_20064/*"img_quest_lasttime"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              IsSupportOnly = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12501/*"Setting position is not supported on "*/,
                                                                   0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)IsSupportOnly, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                IsSupportOnly = (PartyOrganizationListViewItem_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_12501/*"Setting position is not supported on "*/,
                                                                     0LL);
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
      sub_1C3B9C0(IsSupportOnly, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = (PartyOrganizationListViewItem_o *)this->fields.startingMemberFriendshipUpLabel;
    if ( !IsSupportOnly )
      goto LABEL_49;
    IsSupportOnly = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)IsSupportOnly,
                                                         0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
    IsSupportOnly = (PartyOrganizationListViewItem_o *)this->fields.startingMemberFriendshipUpLabelOver;
    if ( !IsSupportOnly )
      goto LABEL_49;
    IsSupportOnly = (PartyOrganizationListViewItem_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)IsSupportOnly,
                                                         0LL);
    if ( !IsSupportOnly )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsSupportOnly, 0, 0LL);
  }
}