void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4B627C4 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationListViewItemDraw___TypeInfo, method);
    byte_4B627C4 = 1;
  }
  this->fields.itemDrawList = (struct PartyOrganizationListViewItemDraw_array *)sub_1BE4B74(
                                                                                  PartyOrganizationListViewItemDraw___TypeInfo,
                                                                                  6LL);
  sub_1BE4A70(&this->fields.itemDrawList);
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
  UnityEngine_Component_o *Component_object; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v15; // x23

  if ( (byte_4B627C3 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, item);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B627C3 = 1;
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
                                                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_20:
      sub_1BE4D28(Component_object, v10);
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
        sub_1BE4D30(Component_object, v10);
      v15 = itemDrawList->m_Items[i];
      Component_object = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, v11);
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UISprite_o *baseSprite; // x22
  System_String_o **v16; // x8
  const MethodInfo *v17; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v20; // x22
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v22; // x8
  PartyOrganizationListViewItemDraw_o *v23; // x23
  int rangeType; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_4B627C2 & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, item);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v7);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1BE4ACC(&StringLiteral_19941/*"func_group_icon_1009_starting"*/, v10);
    sub_1BE4ACC(&StringLiteral_12415/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/, v11);
    sub_1BE4ACC(&StringLiteral_19842/*"formation_support_bg"*/, v12);
    sub_1BE4ACC(&StringLiteral_19839/*"formation_member_bg"*/, v13);
    byte_4B627C2 = 1;
  }
  if ( item && mode )
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    baseSprite = this->fields.baseSprite;
    if ( questRestrictionInfo )
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL);
    if ( !baseSprite )
      goto LABEL_51;
    v16 = (System_String_o **)&StringLiteral_19842/*"formation_support_bg"*/;
    if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
      v16 = (System_String_o **)&StringLiteral_19839/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v16, 0LL);
    questRestrictionInfo = (QuestRestrictionInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !questRestrictionInfo )
      goto LABEL_51;
    questRestrictionInfo->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)item;
    sub_1BE4A70(&questRestrictionInfo->fields.positionsList);
    if ( mode == 4 )
    {
      for ( i = 0; ; ++i )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( i >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
          break;
        itemDrawList = this->fields.itemDrawList;
        if ( !itemDrawList )
          goto LABEL_51;
        if ( i >= itemDrawList->max_length )
          goto LABEL_52;
        v20 = itemDrawList->m_Items[i];
        questRestrictionInfo = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(item, i, v17);
        if ( !v20 )
          goto LABEL_51;
        PartyOrganizationListViewItemDraw__SetItem(
          v20,
          (PartyOrganizationListViewItem_o *)questRestrictionInfo,
          2 * (i != 1),
          0LL);
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
        }
        if ( j >= SHIDWORD(questRestrictionInfo->fields.uniqueSvtRestrictionEntity[2].fields.name) )
          break;
        v22 = this->fields.itemDrawList;
        if ( !v22 )
          goto LABEL_51;
        if ( j >= v22->max_length )
LABEL_52:
          sub_1BE4D30(questRestrictionInfo, item);
        v23 = v22->m_Items[j];
        questRestrictionInfo = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(item, j, v17);
        if ( !v23 )
          goto LABEL_51;
        PartyOrganizationListViewItemDraw__SetItem(
          v23,
          (PartyOrganizationListViewItem_o *)questRestrictionInfo,
          mode,
          0LL);
      }
    }
    questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.warningBase;
    if ( !questRestrictionInfo )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
    questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      questRestrictionInfo = (QuestRestrictionInfo_o *)BalanceConfig_TypeInfo;
    }
    if ( !this->fields.startingMemberFriendshipUpSprite )
      goto LABEL_51;
    rangeType = questRestrictionInfo->fields.uniqueSvtRestrictionEntity[16].fields.rangeType;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                                                       0LL);
    if ( !questRestrictionInfo )
      goto LABEL_51;
    if ( rangeType >= 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 1, 0LL);
      questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.startingMemberFriendshipUpLabel;
      if ( questRestrictionInfo )
      {
        questRestrictionInfo = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)questRestrictionInfo,
                                                           0LL);
        if ( questRestrictionInfo )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 1, 0LL);
          questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.startingMemberFriendshipUpLabelOver;
          if ( questRestrictionInfo )
          {
            questRestrictionInfo = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)questRestrictionInfo,
                                                               0LL);
            if ( questRestrictionInfo )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 1, 0LL);
              startingMemberFriendshipUpSprite = this->fields.startingMemberFriendshipUpSprite;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_19941/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              questRestrictionInfo = (QuestRestrictionInfo_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12415/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)questRestrictionInfo, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                questRestrictionInfo = (QuestRestrictionInfo_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12415/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                   0LL);
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
LABEL_51:
      sub_1BE4D28(questRestrictionInfo, item);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
    questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.startingMemberFriendshipUpLabel;
    if ( !questRestrictionInfo )
      goto LABEL_51;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)questRestrictionInfo,
                                                       0LL);
    if ( !questRestrictionInfo )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
    questRestrictionInfo = (QuestRestrictionInfo_o *)this->fields.startingMemberFriendshipUpLabelOver;
    if ( !questRestrictionInfo )
      goto LABEL_51;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)questRestrictionInfo,
                                                       0LL);
    if ( !questRestrictionInfo )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questRestrictionInfo, 0, 0LL);
  }
}