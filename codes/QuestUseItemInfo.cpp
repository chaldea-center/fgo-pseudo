void QuestUseItemInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct QuestUseItemInfo_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct QuestUseItemInfo_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB2027 & 1) == 0 )
  {
    sub_1C6BA08(&QuestUseItemInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_6873/*"FriendshipUpItemUseState"*/);
    sub_1C6BA08(&StringLiteral_25305/*"{0}_icon"*/);
    sub_1C6BA08(&StringLiteral_6871/*"FriendshipUpItemEventUseState"*/);
    byte_4CB2027 = 1;
  }
  QuestUseItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6873/*"FriendshipUpItemUseState"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)QuestUseItemInfo_TypeInfo->static_fields, StringLiteral_6873/*"FriendshipUpItemUseState"*/, v1, v2);
  v3 = StringLiteral_6871/*"FriendshipUpItemEventUseState"*/;
  static_fields = QuestUseItemInfo_TypeInfo->static_fields;
  static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6871/*"FriendshipUpItemEventUseState"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, v3, v5, v6);
  v7 = StringLiteral_25305/*"{0}_icon"*/;
  v8 = QuestUseItemInfo_TypeInfo->static_fields;
  v8->ITEM_ICON_SUFFIX = (struct System_String_o *)StringLiteral_25305/*"{0}_icon"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->ITEM_ICON_SUFFIX, v7, v9, v10);
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
  GiftEntity_o *v12; // x24
  int32_t v13; // w8
  System_String_o *v14; // x0
  CGThumbnailListItem_o *p_Explanation_k__BackingField; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  System_String_o *Explanation_k__BackingField; // x0
  System_String_o *v22; // x24
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x0
  int32_t eventId; // w1
  int32_t CampaignType_k__BackingField; // w8
  BalanceConfig_c *v27; // x0
  float v28; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t outStartedAt; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CB2022 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_10250/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/);
    sub_1C6BA08(&StringLiteral_10913/*"QUEST_USE_ITEM_SELECT_DIALOG_REWARD_ADD_ITEM_EXPLANATION"*/);
    byte_4CB2022 = 1;
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
    p_Explanation_k__BackingField = (CGThumbnailListItem_o *)&this->fields._Explanation_k__BackingField;
    Explanation_k__BackingField = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = eventCampaignEntity->fields.value;
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(Explanation_k__BackingField, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_10250/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/, 0);
    v28 = (float)this->fields._Value_k__BackingField / 1000.0;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v28);
    v24 = System_String__Format(v22, v23, 0);
    v20 = (int)v24;
    this->fields._Explanation_k__BackingField = v24;
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = GiftMaster__GetListById((GiftMaster_o *)IsNullOrEmpty, eventCampaignEntity->fields.value, 0)) == 0 )
  {
LABEL_28:
    sub_1C6BC60(IsNullOrEmpty, v10);
  }
  if ( *((int *)IsNullOrEmpty + 6) >= 1 )
  {
    IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                      0,
                      (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_28;
    v12 = (GiftEntity_o *)IsNullOrEmpty;
    v13 = *((_DWORD *)IsNullOrEmpty + 7);
    p_Explanation_k__BackingField = (CGThumbnailListItem_o *)&this->fields._Explanation_k__BackingField;
    v14 = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = v13;
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v14, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      GiftEntity__GetInfo(v12, &nameText, &countText, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10913/*"QUEST_USE_ITEM_SELECT_DIALOG_REWARD_ADD_ITEM_EXPLANATION"*/, 0);
      v17 = System_String__Format(v16, (Il2CppObject *)nameText, 0);
      v20 = (int)v17;
      p_Explanation_k__BackingField->klass = (CGThumbnailListItem_c *)v17;
LABEL_19:
      sub_1C6B9AC(p_Explanation_k__BackingField, v20, v18, v19);
    }
  }
LABEL_20:
  this->fields._Num_k__BackingField = num;
  if ( !itemEntity )
    goto LABEL_28;
  this->fields._MaxNum_k__BackingField = ItemEntity__GetMaxNum(itemEntity, 0);
  eventId = eventCampaignEntity->fields.eventId;
  this->fields._TutorialEventId_k__BackingField = eventId;
  ItemEntity__GetUseLimitAt(itemEntity, eventId, &outStartedAt, &outEndedAt, 0);
  CampaignType_k__BackingField = this->fields._CampaignType_k__BackingField;
  this->fields._EndedAt_k__BackingField = outEndedAt;
  if ( CampaignType_k__BackingField == 30 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    if ( v27->static_fields->DefaultQuestUseFriendshipUpItemGroupId == this->fields._GroupId_k__BackingField )
      this->fields._TutorialEventId_k__BackingField = 0;
    else
      this->fields._IsFriendshipUpEventItem_k__BackingField = 1;
  }
  this->fields._IsValid_k__BackingField = 1;
}


void QuestUseItemInfo___ctor_34917868(
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
    sub_1C6BC60(this, campaignType);
  }
  return 0;
}


bool QuestUseItemInfo__GetUseFlag(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._UseFlag_k__BackingField;
}


bool QuestUseItemInfo__IsEventPeriod(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4CB2024 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2024 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0) <= this->fields._EndedAt_k__BackingField;
}


bool QuestUseItemInfo__IsObtained(QuestUseItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v5; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB2026 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB2026 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C6BC60(v5, v3);
  return UserItemMaster__TryGetEntity(
           (UserItemMaster_o *)Master_object,
           &entity,
           v5->static_fields->userIdNumber,
           this->fields._Id_k__BackingField,
           0);
}


void QuestUseItemInfo__OpenExpiredDialog(QuestUseItemInfo_o *this, System_Action_o *action, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  System_Action_o *v8; // x22
  System_Delegate_o *v9; // x0
  System_Action_o *v10; // x20
  Il2CppObject *v11; // x21
  System_String_o *v12; // x0
  QuestUseItemInfo_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CB2025 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_CommonUI_CloseNotificationDialog__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&StringLiteral_10242/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB2025 = 1;
  }
  this->fields._UseFlag_k__BackingField = 0;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  PartyOrganizationUtility__SaveQuestUseItemUseState(Instance, 0);
  v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, v7, Method_CommonUI_CloseNotificationDialog__, 0);
  v9 = System_Delegate__Combine((System_Delegate_o *)v8, (System_Delegate_o *)action, 0);
  v10 = (System_Action_o *)v9;
  if ( !v9 || (System_Action_c *)v9->klass == System_Action_TypeInfo )
  {
    v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
    Instance = (PartyOrganizationUtility_o *)System_String__Format(
                                               v12,
                                               (Il2CppObject *)this->fields._Name_k__BackingField,
                                               0);
    if ( v11 )
    {
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v11,
        (System_String_o *)StringLiteral_1/*""*/,
        (System_String_o *)Instance,
        v10,
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
    sub_1C6BC60(Instance, v6);
  }
  v13 = (QuestUseItemInfo_o *)sub_1C6BFFC(v9);
  QuestUseItemInfo__IsObtained(v13, v14);
}


void QuestUseItemInfo__SetItemEntity(QuestUseItemInfo_o *this, ItemEntity_o *itemEntity, const MethodInfo *method)
{
  QuestUseItemInfo_o *v4; // x19
  int32_t QuestUseItemGroupId; // w0
  struct System_String_o *name; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  QuestUseItemInfo_c *v12; // x0
  int32_t imageId; // w9
  System_String_o *ITEM_ICON_SUFFIX; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CB2023 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestUseItemGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestUseItemPickupMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    this = (QuestUseItemInfo_o *)sub_1C6BA08(&QuestUseItemInfo_TypeInfo);
    byte_4CB2023 = 1;
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestUseItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestUseItemGroupMaster___);
  if ( !this )
LABEL_17:
    sub_1C6BC60(this, itemEntity);
  this = (QuestUseItemInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 &entity,
                                 v4->fields._GroupId_k__BackingField,
                                 (const MethodInfo_33F9128 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    *(int32x2_t *)&v4->fields._BasePriority_k__BackingField = vrev64_s32(*(int32x2_t *)((char *)&entity[1].klass + 4));
  }
LABEL_11:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (QuestUseItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestUseItemPickupMaster___);
  if ( !this )
    goto LABEL_17;
  v4->fields._Priority_k__BackingField = QuestUseItemPickupMaster__TryGetPriority(
                                           (QuestUseItemPickupMaster_o *)this,
                                           v4->fields._Id_k__BackingField,
                                           v4->fields._GroupId_k__BackingField,
                                           v4->fields._BasePriority_k__BackingField,
                                           0);
  name = itemEntity->fields.name;
  v4->fields._Name_k__BackingField = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._Name_k__BackingField, (int32_t)name, v7, v8);
  EffectExplanation = ItemEntity__GetEffectExplanation(itemEntity, 0);
  v4->fields._Explanation_k__BackingField = EffectExplanation;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._Explanation_k__BackingField, (int32_t)EffectExplanation, v10, v11);
  v12 = QuestUseItemInfo_TypeInfo;
  if ( !QuestUseItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestUseItemInfo_TypeInfo);
    v12 = QuestUseItemInfo_TypeInfo;
  }
  imageId = itemEntity->fields.imageId;
  ITEM_ICON_SUFFIX = v12->static_fields->ITEM_ICON_SUFFIX;
  v19 = imageId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v16 = System_String__Format(ITEM_ICON_SUFFIX, v15, 0);
  v4->fields._SpriteName_k__BackingField = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._SpriteName_k__BackingField, (int32_t)v16, v17, v18);
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
  const MethodInfo *v3; // x3

  this->fields._Explanation_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Explanation_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._SpriteName_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void QuestUseItemInfo__set_UseFlag(QuestUseItemInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._UseFlag_k__BackingField = value;
}