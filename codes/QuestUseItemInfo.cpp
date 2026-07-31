void QuestUseItemInfo___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct QuestUseItemInfo_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct QuestUseItemInfo_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5934229 & 1) == 0 )
  {
    sub_21FFC50(&QuestUseItemInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_7158/*"FriendshipUpItemUseState"*/);
    sub_21FFC50(&StringLiteral_26540/*"{0}_icon"*/);
    sub_21FFC50(&StringLiteral_7156/*"FriendshipUpItemEventUseState"*/);
    byte_5934229 = 1;
  }
  v7 = StringLiteral_7158/*"FriendshipUpItemUseState"*/;
  QuestUseItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_7158/*"FriendshipUpItemUseState"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)QuestUseItemInfo_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_7156/*"FriendshipUpItemEventUseState"*/;
  static_fields = QuestUseItemInfo_TypeInfo->static_fields;
  static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_7156/*"FriendshipUpItemEventUseState"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_26540/*"{0}_icon"*/;
  v17 = QuestUseItemInfo_TypeInfo->static_fields;
  v17->ITEM_ICON_SUFFIX = (struct System_String_o *)StringLiteral_26540/*"{0}_icon"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->ITEM_ICON_SUFFIX, v16, v18, v19, v20, v21, v22, v23);
}


void QuestUseItemInfo___ctor(
        QuestUseItemInfo_o *this,
        ItemEntity_o *itemEntity,
        int32_t num,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  void *IsNullOrEmpty; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  GiftEntity_o *v14; // x24
  int32_t v15; // w8
  System_String_o *v16; // x0
  MissionNaviTransitionBoardItem_o *p_Explanation_k__BackingField; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *Explanation_k__BackingField; // x0
  __int64 v30; // x2
  System_String_o *v31; // x24
  Il2CppObject *v32; // x0
  struct System_String_o *v33; // x0
  int32_t MaxNum; // w0
  int32_t eventId; // w1
  __int64 v36; // x1
  __int64 v37; // x2
  int32_t CampaignType_k__BackingField; // w8
  BalanceConfig_c *v39; // x0
  float v40; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t outStartedAt; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_5934224 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_10649/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/);
    sub_21FFC50(&StringLiteral_11368/*"QUEST_USE_ITEM_SELECT_DIALOG_REWARD_ADD_ITEM_EXPLANATION"*/);
    byte_5934224 = 1;
  }
  outEndedAt = 0;
  countText = 0;
  nameText = 0;
  outStartedAt = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !eventCampaignEntity )
    goto LABEL_28;
  this->fields._CampaignType_k__BackingField = eventCampaignEntity->fields.target;
  QuestUseItemInfo__SetItemEntity(this, itemEntity, v11);
  if ( this->fields._CampaignType_k__BackingField != 36 )
  {
    p_Explanation_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._Explanation_k__BackingField;
    Explanation_k__BackingField = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = eventCampaignEntity->fields.value;
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(Explanation_k__BackingField, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_20;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v30);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_10649/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/, 0);
    v40 = (float)this->fields._Value_k__BackingField / 1000.0;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v40);
    v33 = System_String__Format(v31, v32, 0);
    v28 = (int)v33;
    this->fields._Explanation_k__BackingField = v33;
    goto LABEL_19;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = GiftMaster__GetListById((GiftMaster_o *)IsNullOrEmpty, eventCampaignEntity->fields.value, 0)) == 0 )
  {
LABEL_28:
    sub_21FFECC(IsNullOrEmpty, v10);
  }
  if ( *((int *)IsNullOrEmpty + 6) >= 1 )
  {
    IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                      0,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_28;
    v14 = (GiftEntity_o *)IsNullOrEmpty;
    v15 = *((_DWORD *)IsNullOrEmpty + 7);
    p_Explanation_k__BackingField = (MissionNaviTransitionBoardItem_o *)&this->fields._Explanation_k__BackingField;
    v16 = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = v15;
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v16, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      GiftEntity__GetInfo(v14, &nameText, &countText, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_11368/*"QUEST_USE_ITEM_SELECT_DIALOG_REWARD_ADD_ITEM_EXPLANATION"*/, 0);
      v21 = System_String__Format(v20, (Il2CppObject *)nameText, 0);
      v28 = (int)v21;
      p_Explanation_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v21;
LABEL_19:
      sub_21FFBF4(p_Explanation_k__BackingField, v28, v22, v23, v24, v25, v26, v27);
    }
  }
LABEL_20:
  this->fields._Num_k__BackingField = num;
  if ( !itemEntity )
    goto LABEL_28;
  MaxNum = ItemEntity__GetMaxNum(itemEntity, 0);
  eventId = eventCampaignEntity->fields.eventId;
  this->fields._MaxNum_k__BackingField = MaxNum;
  this->fields._TutorialEventId_k__BackingField = eventId;
  ItemEntity__GetUseLimitAt(itemEntity, eventId, &outStartedAt, &outEndedAt, 0);
  CampaignType_k__BackingField = this->fields._CampaignType_k__BackingField;
  this->fields._EndedAt_k__BackingField = outEndedAt;
  if ( CampaignType_k__BackingField == 30 )
  {
    v39 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36, v37);
      v39 = BalanceConfig_TypeInfo;
    }
    if ( v39->static_fields->DefaultQuestUseFriendshipUpItemGroupId == this->fields._GroupId_k__BackingField )
      this->fields._TutorialEventId_k__BackingField = 0;
    else
      this->fields._IsFriendshipUpEventItem_k__BackingField = 1;
  }
  this->fields._IsValid_k__BackingField = 1;
}


void QuestUseItemInfo___ctor_41427856(
        QuestUseItemInfo_o *this,
        int32_t campaignType,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._CampaignType_k__BackingField = campaignType;
  QuestUseItemInfo__SetItemEntity(this, itemEntity, v7);
  this->fields._IsValid_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestUseItemInfo__CheckSameItem(
        QuestUseItemInfo_o *this,
        int32_t campaignType,
        ItemEntity_o *entity,
        const MethodInfo *method)
{
  if ( this->fields._CampaignType_k__BackingField == campaignType )
  {
    if ( !entity )
      goto LABEL_9;
    if ( entity->fields.id == this->fields._Id_k__BackingField )
      return 1;
  }
  if ( this->fields._GroupId_k__BackingField )
  {
    if ( entity )
      return ItemEntity__GetQuestUseItemGroupId(entity, 0) == this->fields._GroupId_k__BackingField;
LABEL_9:
    sub_21FFECC(this, *(_QWORD *)&campaignType);
  }
  return 0;
}


bool QuestUseItemInfo__GetUseFlag(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._UseFlag_k__BackingField;
}


bool QuestUseItemInfo__IsEventPeriod(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934226 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934226 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  return NetworkManager__getTime(0) <= this->fields._EndedAt_k__BackingField;
}


bool QuestUseItemInfo__IsObtained(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v8; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934228 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934228 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_21FFECC(v8, v5);
  return UserItemMaster__TryGetEntity(
           (UserItemMaster_o *)Master_object,
           &entity,
           v8->static_fields->userIdNumber,
           this->fields._Id_k__BackingField,
           0);
}


void QuestUseItemInfo__OpenExpiredDialog(QuestUseItemInfo_o *this, System_Action_o *action, const MethodInfo *method)
{
  const MethodInfo_476EDF8 *v5; // x0
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  System_Action_o *v9; // x22
  System_Delegate_o *v10; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x21
  System_String_o *v17; // x0
  QuestUseItemInfo_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_5934227 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonUI_CloseNotificationDialog__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_10641/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934227 = 1;
  }
  v5 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  this->fields._UseFlag_k__BackingField = 0;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance(v5);
  if ( !Instance )
    goto LABEL_10;
  PartyOrganizationUtility__SaveQuestUseItemUseState(Instance, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, v8, Method_CommonUI_CloseNotificationDialog__, 0);
  v10 = System_Delegate__Combine((System_Delegate_o *)v9, (System_Delegate_o *)action, 0);
  v13 = (System_Action_o *)v10;
  if ( !v10 || (System_Action_c *)v10->klass == System_Action_TypeInfo )
  {
    v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_10641/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
    Instance = (PartyOrganizationUtility_o *)System_String__Format(
                                               v17,
                                               (Il2CppObject *)this->fields._Name_k__BackingField,
                                               0);
    if ( v16 )
    {
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v16,
        (System_String_o *)StringLiteral_1/*""*/,
        (System_String_o *)Instance,
        v13,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0.0,
        0,
        0);
      return;
    }
LABEL_10:
    sub_21FFECC(Instance, v7);
  }
  v18 = (QuestUseItemInfo_o *)sub_220024C(v10, System_Action_TypeInfo, v11, v12);
  QuestUseItemInfo__IsObtained(v18, v19);
}


void QuestUseItemInfo__SetItemEntity(QuestUseItemInfo_o *this, ItemEntity_o *itemEntity, const MethodInfo *method)
{
  QuestUseItemInfo_o *v4; // x19
  int32_t QuestUseItemGroupId; // w0
  __int64 v6; // x2
  int32_t Priority; // w0
  struct System_String_o *name; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *EffectExplanation; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  __int64 v23; // x2
  QuestUseItemInfo_c *v24; // x0
  int32_t imageId; // w10
  System_String_o *ITEM_ICON_SUFFIX; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_5934225 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestUseItemGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestUseItemPickupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__);
    this = (QuestUseItemInfo_o *)sub_21FFC50(&QuestUseItemInfo_TypeInfo);
    byte_5934225 = 1;
  }
  entity = 0;
  if ( !itemEntity )
    goto LABEL_17;
  v4->fields._Id_k__BackingField = itemEntity->fields.id;
  v4->fields._BasePriority_k__BackingField = ItemEntity__GetQuestUseItemPriority(itemEntity, 0);
  v4->fields._NotDuplicationGroupId_k__BackingField = ItemEntity__GetNotDuplicationGroupId(itemEntity, 0);
  QuestUseItemGroupId = ItemEntity__GetQuestUseItemGroupId(itemEntity, 0);
  v4->fields._GroupId_k__BackingField = QuestUseItemGroupId;
  if ( !QuestUseItemGroupId )
    goto LABEL_11;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemEntity, v6);
  this = (QuestUseItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestUseItemGroupMaster___);
  if ( !this )
LABEL_17:
    sub_21FFECC(this, itemEntity);
  this = (QuestUseItemInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 &entity,
                                 v4->fields._GroupId_k__BackingField,
                                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    *(int32x2_t *)&v4->fields._BasePriority_k__BackingField = vrev64_s32(*(int32x2_t *)((char *)&entity[1].klass + 4));
  }
LABEL_11:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemEntity, v6);
  this = (QuestUseItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestUseItemPickupMaster___);
  if ( !this )
    goto LABEL_17;
  Priority = QuestUseItemPickupMaster__TryGetPriority(
               (QuestUseItemPickupMaster_o *)this,
               v4->fields._Id_k__BackingField,
               v4->fields._GroupId_k__BackingField,
               v4->fields._BasePriority_k__BackingField,
               0);
  name = itemEntity->fields.name;
  v4->fields._Priority_k__BackingField = Priority;
  v4->fields._Name_k__BackingField = name;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._Name_k__BackingField,
    (int32_t)name,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  EffectExplanation = ItemEntity__GetEffectExplanation(itemEntity, 0);
  v4->fields._Explanation_k__BackingField = EffectExplanation;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._Explanation_k__BackingField,
    (int32_t)EffectExplanation,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = QuestUseItemInfo_TypeInfo;
  if ( !*(&QuestUseItemInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo, v22, v23);
    v24 = QuestUseItemInfo_TypeInfo;
  }
  imageId = itemEntity->fields.imageId;
  ITEM_ICON_SUFFIX = v24->static_fields->ITEM_ICON_SUFFIX;
  v35 = imageId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v35);
  v28 = System_String__Format(ITEM_ICON_SUFFIX, v27, 0);
  v4->fields._SpriteName_k__BackingField = v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._SpriteName_k__BackingField,
    (int32_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void QuestUseItemInfo__SetUseFlag(QuestUseItemInfo_o *this, bool flag, const MethodInfo *method)
{
  this->fields._UseFlag_k__BackingField = flag;
}


int32_t QuestUseItemInfo__get_BasePriority(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._BasePriority_k__BackingField;
}


int32_t QuestUseItemInfo__get_CampaignType(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._CampaignType_k__BackingField;
}


int64_t QuestUseItemInfo__get_EndedAt(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._EndedAt_k__BackingField;
}


System_String_o *QuestUseItemInfo__get_Explanation(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Explanation_k__BackingField;
}


int32_t QuestUseItemInfo__get_GroupId(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


int32_t QuestUseItemInfo__get_Id(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


bool QuestUseItemInfo__get_InterruptionUseFlag(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._InterruptionUseFlag_k__BackingField;
}


bool QuestUseItemInfo__get_IsFriendshipUpEventItem(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsFriendshipUpEventItem_k__BackingField;
}


bool QuestUseItemInfo__get_IsGroupItem(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField != 0;
}


bool QuestUseItemInfo__get_IsValid(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsValid_k__BackingField;
}


int32_t QuestUseItemInfo__get_MaxNum(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._MaxNum_k__BackingField;
}


System_String_o *QuestUseItemInfo__get_Name(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t QuestUseItemInfo__get_NotDuplicationGroupId(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._NotDuplicationGroupId_k__BackingField;
}


int32_t QuestUseItemInfo__get_Num(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int32_t QuestUseItemInfo__get_Priority(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


System_String_o *QuestUseItemInfo__get_SpriteName(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int32_t QuestUseItemInfo__get_TutorialEventId(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._TutorialEventId_k__BackingField;
}


bool QuestUseItemInfo__get_UseFlag(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._UseFlag_k__BackingField;
}


int32_t QuestUseItemInfo__get_Value(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void QuestUseItemInfo__set_BasePriority(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._BasePriority_k__BackingField = value;
}


void QuestUseItemInfo__set_EndedAt(QuestUseItemInfo_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._EndedAt_k__BackingField = value;
}


void QuestUseItemInfo__set_Explanation(QuestUseItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Explanation_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Explanation_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestUseItemInfo__set_GroupId(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._GroupId_k__BackingField = value;
}


void QuestUseItemInfo__set_Id(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void QuestUseItemInfo__set_InterruptionUseFlag(QuestUseItemInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._InterruptionUseFlag_k__BackingField = value;
}


void QuestUseItemInfo__set_MaxNum(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxNum_k__BackingField = value;
}


void QuestUseItemInfo__set_Name(QuestUseItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestUseItemInfo__set_NotDuplicationGroupId(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._NotDuplicationGroupId_k__BackingField = value;
}


void QuestUseItemInfo__set_Num(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}


void QuestUseItemInfo__set_Priority(QuestUseItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void QuestUseItemInfo__set_SpriteName(QuestUseItemInfo_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpriteName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestUseItemInfo__set_UseFlag(QuestUseItemInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._UseFlag_k__BackingField = value;
}