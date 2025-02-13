void __fastcall PartyListViewItemDraw___ctor(PartyListViewItemDraw_o *this, const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_array *v3; // x0

  if ( (byte_4BD80F8 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationListViewItemDraw___TypeInfo);
    byte_4BD80F8 = 1;
  }
  v3 = (struct PartyOrganizationListViewItemDraw_array *)sub_1C21EE0(PartyOrganizationListViewItemDraw___TypeInfo, 6LL);
  this->fields.itemDrawList = v3;
  sub_1C21DDC(&this->fields.itemDrawList, v3);
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
  UnityEngine_Component_o *Component_object; // x0
  int32_t i; // w22
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v13; // x23

  if ( (byte_4BD80F7 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD80F7 = 1;
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
                                                          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
      || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
          (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
    {
LABEL_20:
      sub_1C22094(Component_object, v8);
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
        sub_1C2209C(Component_object, v8);
      v13 = itemDrawList->m_Items[i];
      Component_object = (UnityEngine_Component_o *)PartyListViewItem__GetMember(item, i, v9);
      if ( !v13 )
        goto LABEL_20;
      PartyOrganizationListViewItemDraw__SetInput(
        v13,
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
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  UISprite_o *baseSprite; // x22
  System_String_o **v9; // x8
  const MethodInfo *v10; // x2
  int32_t i; // w21
  struct PartyOrganizationListViewItemDraw_array *itemDrawList; // x8
  PartyOrganizationListViewItemDraw_o *v13; // x22
  int32_t j; // w22
  struct PartyOrganizationListViewItemDraw_array *v15; // x8
  PartyOrganizationListViewItemDraw_o *v16; // x23
  int klass; // w20
  UISprite_o *startingMemberFriendshipUpSprite; // x20
  UILabel_o *startingMemberFriendshipUpLabel; // x20
  UILabel_o *startingMemberFriendshipUpLabelOver; // x19

  if ( (byte_4BD80F6 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&StringLiteral_20014/*"func_group_icon_1009_starting"*/);
    sub_1C21E38(&StringLiteral_12464/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/);
    sub_1C21E38(&StringLiteral_19915/*"formation_support_bg"*/);
    sub_1C21E38(&StringLiteral_19912/*"formation_member_bg"*/);
    byte_4BD80F6 = 1;
  }
  if ( item && mode )
  {
    questRestrictionInfo = item->fields.questRestrictionInfo;
    baseSprite = this->fields.baseSprite;
    if ( questRestrictionInfo )
      questRestrictionInfo = (QuestRestrictionInfo_o *)QuestRestrictionInfo__IsSupportOnly(questRestrictionInfo, 0LL);
    if ( !baseSprite )
      goto LABEL_51;
    v9 = (System_String_o **)&StringLiteral_19915/*"formation_support_bg"*/;
    if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 )
      v9 = (System_String_o **)&StringLiteral_19912/*"formation_member_bg"*/;
    UISprite__set_spriteName(baseSprite, *v9, 0LL);
    questRestrictionInfo = (QuestRestrictionInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !questRestrictionInfo )
      goto LABEL_51;
    questRestrictionInfo->fields.positionsList = (struct System_Collections_Generic_List_bool____o *)item;
    sub_1C21DDC(&questRestrictionInfo->fields.positionsList, item);
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
        v13 = itemDrawList->m_Items[i];
        questRestrictionInfo = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(item, i, v10);
        if ( !v13 )
          goto LABEL_51;
        PartyOrganizationListViewItemDraw__SetItem(
          v13,
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
        v15 = this->fields.itemDrawList;
        if ( !v15 )
          goto LABEL_51;
        if ( j >= v15->max_length )
LABEL_52:
          sub_1C2209C(questRestrictionInfo, item);
        v16 = v15->m_Items[j];
        questRestrictionInfo = (QuestRestrictionInfo_o *)PartyListViewItem__GetMember(item, j, v10);
        if ( !v16 )
          goto LABEL_51;
        PartyOrganizationListViewItemDraw__SetItem(
          v16,
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
    klass = (int)questRestrictionInfo->fields.uniqueSvtRestrictionEntity[17].klass;
    questRestrictionInfo = (QuestRestrictionInfo_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this->fields.startingMemberFriendshipUpSprite,
                                                       0LL);
    if ( !questRestrictionInfo )
      goto LABEL_51;
    if ( klass >= 1 )
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
              AtlasManager__SetEventUI(startingMemberFriendshipUpSprite, (System_String_o *)StringLiteral_20014/*"func_group_icon_1009_starting"*/, 0LL);
              startingMemberFriendshipUpLabel = this->fields.startingMemberFriendshipUpLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              questRestrictionInfo = (QuestRestrictionInfo_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_12464/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
                                                                 0LL);
              if ( startingMemberFriendshipUpLabel )
              {
                UILabel__set_text(startingMemberFriendshipUpLabel, (System_String_o *)questRestrictionInfo, 0LL);
                startingMemberFriendshipUpLabelOver = this->fields.startingMemberFriendshipUpLabelOver;
                questRestrictionInfo = (QuestRestrictionInfo_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12464/*"STARTING_MEMBER_FRIENDSHIP_UP_TITLE"*/,
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
      sub_1C22094(questRestrictionInfo, item);
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