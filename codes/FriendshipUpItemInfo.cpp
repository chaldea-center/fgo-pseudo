void __fastcall FriendshipUpItemInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct FriendshipUpItemInfo_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct FriendshipUpItemInfo_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49B68EA & 1) == 0 )
  {
    sub_1B4CF90(&FriendshipUpItemInfo_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_6766/*"FriendshipUpItemUseState"*/, v4);
    sub_1B4CF90(&StringLiteral_24799/*"{0}_icon"*/, v5);
    sub_1B4CF90(&StringLiteral_6764/*"FriendshipUpItemEventUseState"*/, v6);
    byte_49B68EA = 1;
  }
  FriendshipUpItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6766/*"FriendshipUpItemUseState"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)FriendshipUpItemInfo_TypeInfo->static_fields, StringLiteral_6766/*"FriendshipUpItemUseState"*/, v2, v3);
  v7 = StringLiteral_6764/*"FriendshipUpItemEventUseState"*/;
  static_fields = FriendshipUpItemInfo_TypeInfo->static_fields;
  static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_6764/*"FriendshipUpItemEventUseState"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE, v7, v9, v10);
  v11 = StringLiteral_24799/*"{0}_icon"*/;
  v12 = FriendshipUpItemInfo_TypeInfo->static_fields;
  v12->ITEM_ICON_SUFFIX = (struct System_String_o *)StringLiteral_24799/*"{0}_icon"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v12->ITEM_ICON_SUFFIX, v11, v13, v14);
}


void __fastcall FriendshipUpItemInfo___ctor(
        FriendshipUpItemInfo_o *this,
        ItemEntity_o *itemEntity,
        int32_t num,
        EventCampaignEntity_o *eventCampaignEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  void *IsNullOrEmpty; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  GiftEntity_o *v20; // x24
  int32_t v21; // w8
  System_String_o *v22; // x0
  CGThumbnailListItem_o *p_Explanation_k__BackingField; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  System_String_o *Explanation_k__BackingField; // x0
  System_String_o *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  struct System_String_o *v35; // x0
  int32_t eventId; // w1
  int32_t CampaignType_k__BackingField; // w8
  BalanceConfig_c *v38; // x0
  float v39; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t outStartedAt; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_49B68E5 & 1) == 0 )
  {
    sub_1B4CF90(&BalanceConfig_TypeInfo, itemEntity);
    sub_1B4CF90(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v13);
    sub_1B4CF90(&float_TypeInfo, v14);
    sub_1B4CF90(&StringLiteral_10046/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/, v15);
    sub_1B4CF90(&StringLiteral_10697/*"QUEST_USE_ITEM_SELECT_DIALOG_REWARD_ADD_ITEM_EXPLANATION"*/, v16);
    byte_49B68E5 = 1;
  }
  outEndedAt = 0LL;
  countText = 0LL;
  nameText = 0LL;
  outStartedAt = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventCampaignEntity )
    goto LABEL_28;
  this->fields._CampaignType_k__BackingField = eventCampaignEntity->fields.target;
  FriendshipUpItemInfo__SetItemEntity(this, itemEntity, v19);
  if ( this->fields._CampaignType_k__BackingField != 36 )
  {
    p_Explanation_k__BackingField = (CGThumbnailListItem_o *)&this->fields._Explanation_k__BackingField;
    Explanation_k__BackingField = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = eventCampaignEntity->fields.value;
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(Explanation_k__BackingField, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_10046/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_SELECT_DIALOG_VALUE"*/, 0LL);
    v39 = (float)this->fields._Value_k__BackingField / 1000.0;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v39, v31, v32, v33);
    v35 = System_String__Format(v30, v34, 0LL);
    v28 = (int)v35;
    this->fields._Explanation_k__BackingField = v35;
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = GiftMaster__GetListById((GiftMaster_o *)IsNullOrEmpty, eventCampaignEntity->fields.value, 0LL)) == 0LL )
  {
LABEL_28:
    sub_1B4D1EC(IsNullOrEmpty, v18);
  }
  if ( *((int *)IsNullOrEmpty + 6) >= 1 )
  {
    IsNullOrEmpty = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                      0,
                      (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_28;
    v20 = (GiftEntity_o *)IsNullOrEmpty;
    v21 = *((_DWORD *)IsNullOrEmpty + 7);
    p_Explanation_k__BackingField = (CGThumbnailListItem_o *)&this->fields._Explanation_k__BackingField;
    v22 = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = v21;
    IsNullOrEmpty = (void *)System_String__IsNullOrEmpty(v22, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      GiftEntity__GetInfo(v20, &nameText, &countText, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_10697/*"QUEST_USE_ITEM_SELECT_DIALOG_REWARD_ADD_ITEM_EXPLANATION"*/, 0LL);
      v25 = System_String__Format(v24, (Il2CppObject *)nameText, 0LL);
      v28 = (int)v25;
      p_Explanation_k__BackingField->klass = (CGThumbnailListItem_c *)v25;
LABEL_19:
      sub_1B4CF34(p_Explanation_k__BackingField, v28, v26, v27);
    }
  }
LABEL_20:
  this->fields._Num_k__BackingField = num;
  if ( !itemEntity )
    goto LABEL_28;
  this->fields._MaxNum_k__BackingField = ItemEntity__GetMaxNum(itemEntity, 0LL);
  eventId = eventCampaignEntity->fields.eventId;
  this->fields._TutorialEventId_k__BackingField = eventId;
  ItemEntity__GetUseLimitAt(itemEntity, eventId, &outStartedAt, &outEndedAt, 0LL);
  CampaignType_k__BackingField = this->fields._CampaignType_k__BackingField;
  this->fields._EndedAt_k__BackingField = outEndedAt;
  if ( CampaignType_k__BackingField == 30 )
  {
    v38 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v38 = BalanceConfig_TypeInfo;
    }
    if ( v38->static_fields->DefaultQuestUseFriendshipUpItemGroupId == this->fields._GroupId_k__BackingField )
      this->fields._TutorialEventId_k__BackingField = 0;
    else
      this->fields._IsFriendshipUpEventItem_k__BackingField = 1;
  }
  this->fields._IsValid_k__BackingField = 1;
}


void __fastcall FriendshipUpItemInfo___ctor_32045576(
        FriendshipUpItemInfo_o *this,
        int32_t campaignType,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CampaignType_k__BackingField = campaignType;
  FriendshipUpItemInfo__SetItemEntity(this, itemEntity, v7);
  this->fields._IsValid_k__BackingField = 0;
}


bool __fastcall FriendshipUpItemInfo__CheckSameItem(
        FriendshipUpItemInfo_o *this,
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
      return ItemEntity__GetQuestUseItemGroupId(entity, 0LL) == this->fields._GroupId_k__BackingField;
LABEL_9:
    sub_1B4D1EC(this, campaignType);
  }
  return 0;
}


bool __fastcall FriendshipUpItemInfo__GetUseFlag(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._UseFlag_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__IsEventPeriod(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  if ( (byte_49B68E7 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B68E7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getTime(0LL) <= this->fields._EndedAt_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__IsObtained(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B68E9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_TypeInfo, v4);
    byte_49B68E9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    byte_49B57A5 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1B4D1EC(v7, v5);
  return UserItemMaster__TryGetEntity(
           (UserItemMaster_o *)Master_object,
           &entity,
           v7->static_fields->userIdNumber,
           this->fields._Id_k__BackingField,
           0LL);
}


void __fastcall FriendshipUpItemInfo__OpenExpiredDialog(
        FriendshipUpItemInfo_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  System_Action_o *v14; // x22
  System_Delegate_o *v15; // x0
  System_Action_o *v16; // x20
  Il2CppObject *v17; // x21
  System_String_o *v18; // x0
  FriendshipUpItemInfo_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_49B68E8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, action);
    sub_1B4CF90(&Method_CommonUI_CloseNotificationDialog__, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1B4CF90(&StringLiteral_10038/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v9);
    sub_1B4CF90(&StringLiteral_1/*""*/, v10);
    byte_49B68E8 = 1;
  }
  this->fields._UseFlag_k__BackingField = 0;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  PartyOrganizationUtility__SaveQuestUseItemUseState(Instance, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v14, v13, Method_CommonUI_CloseNotificationDialog__, 0LL);
  v15 = System_Delegate__Combine((System_Delegate_o *)v14, (System_Delegate_o *)action, 0LL);
  v16 = (System_Action_o *)v15;
  if ( !v15 || (System_Action_c *)v15->klass == System_Action_TypeInfo )
  {
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10038/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
    Instance = (PartyOrganizationUtility_o *)System_String__Format(
                                               v18,
                                               (Il2CppObject *)this->fields._Name_k__BackingField,
                                               0LL);
    if ( v17 )
    {
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)v17,
        (System_String_o *)StringLiteral_1/*""*/,
        (System_String_o *)Instance,
        v16,
        -1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0LL,
        0.0,
        0LL);
      return;
    }
LABEL_10:
    sub_1B4D1EC(Instance, v12);
  }
  v19 = (FriendshipUpItemInfo_o *)sub_1B4D4AC(v15);
  FriendshipUpItemInfo__IsObtained(v19, v20);
}


void __fastcall FriendshipUpItemInfo__SetItemEntity(
        FriendshipUpItemInfo_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  FriendshipUpItemInfo_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t QuestUseItemGroupId; // w0
  struct System_String_o *name; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *EffectExplanation; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  FriendshipUpItemInfo_c *v20; // x0
  int32_t imageId; // w9
  System_String_o *ITEM_ICON_SUFFIX; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_49B68E6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestUseItemGroupMaster___, itemEntity);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestUseItemPickupMaster___, v5);
    sub_1B4CF90(&DataManager_TypeInfo, v6);
    sub_1B4CF90(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__, v7);
    sub_1B4CF90(&FriendshipUpItemInfo_TypeInfo, v8);
    this = (FriendshipUpItemInfo_o *)sub_1B4CF90(&int_TypeInfo, v9);
    byte_49B68E6 = 1;
  }
  entity = 0LL;
  if ( !itemEntity )
    goto LABEL_17;
  v4->fields._Id_k__BackingField = itemEntity->fields.id;
  v4->fields._BasePriority_k__BackingField = ItemEntity__GetQuestUseItemPriority(itemEntity, 0LL);
  v4->fields._NotDuplicationGroupId_k__BackingField = ItemEntity__GetNotDuplicationGroupId(itemEntity, 0LL);
  QuestUseItemGroupId = ItemEntity__GetQuestUseItemGroupId(itemEntity, 0LL);
  v4->fields._GroupId_k__BackingField = QuestUseItemGroupId;
  if ( !QuestUseItemGroupId )
    goto LABEL_11;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FriendshipUpItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestUseItemGroupMaster___);
  if ( !this )
LABEL_17:
    sub_1B4D1EC(this, itemEntity);
  this = (FriendshipUpItemInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v4->fields._GroupId_k__BackingField,
                                     (const MethodInfo_319D9E8 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    *(int32x2_t *)&v4->fields._BasePriority_k__BackingField = vrev64_s32(*(int32x2_t *)((char *)&entity[1].klass + 4));
  }
LABEL_11:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FriendshipUpItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestUseItemPickupMaster___);
  if ( !this )
    goto LABEL_17;
  v4->fields._Priority_k__BackingField = QuestUseItemPickupMaster__TryGetPriority(
                                           (QuestUseItemPickupMaster_o *)this,
                                           v4->fields._Id_k__BackingField,
                                           v4->fields._GroupId_k__BackingField,
                                           v4->fields._BasePriority_k__BackingField,
                                           0LL);
  name = itemEntity->fields.name;
  v4->fields._Name_k__BackingField = name;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._Name_k__BackingField, (int32_t)name, v12, v13);
  EffectExplanation = ItemEntity__GetEffectExplanation(itemEntity, 0LL);
  v4->fields._Explanation_k__BackingField = EffectExplanation;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._Explanation_k__BackingField, (int32_t)EffectExplanation, v15, v16);
  v20 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v20 = FriendshipUpItemInfo_TypeInfo;
  }
  imageId = itemEntity->fields.imageId;
  ITEM_ICON_SUFFIX = v20->static_fields->ITEM_ICON_SUFFIX;
  v27 = imageId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v17, v18, v19);
  v24 = System_String__Format(ITEM_ICON_SUFFIX, v23, 0LL);
  v4->fields._SpriteName_k__BackingField = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&v4->fields._SpriteName_k__BackingField, (int32_t)v24, v25, v26);
}


void __fastcall FriendshipUpItemInfo__SetUseFlag(FriendshipUpItemInfo_o *this, bool flag, const MethodInfo *method)
{
  this->fields._UseFlag_k__BackingField = flag;
}


int32_t __fastcall FriendshipUpItemInfo__get_BasePriority(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._BasePriority_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_CampaignType(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._CampaignType_k__BackingField;
}


int64_t __fastcall FriendshipUpItemInfo__get_EndedAt(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._EndedAt_k__BackingField;
}


System_String_o *__fastcall FriendshipUpItemInfo__get_Explanation(
        FriendshipUpItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Explanation_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_GroupId(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Id(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Id_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__get_InterruptionUseFlag(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._InterruptionUseFlag_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__get_IsFriendshipUpEventItem(
        FriendshipUpItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsFriendshipUpEventItem_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__get_IsGroupItem(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._GroupId_k__BackingField != 0;
}


bool __fastcall FriendshipUpItemInfo__get_IsValid(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsValid_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_MaxNum(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._MaxNum_k__BackingField;
}


System_String_o *__fastcall FriendshipUpItemInfo__get_Name(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_NotDuplicationGroupId(
        FriendshipUpItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._NotDuplicationGroupId_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Num(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Num_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Priority(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


System_String_o *__fastcall FriendshipUpItemInfo__get_SpriteName(
        FriendshipUpItemInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_TutorialEventId(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._TutorialEventId_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__get_UseFlag(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._UseFlag_k__BackingField;
}


int32_t __fastcall FriendshipUpItemInfo__get_Value(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void __fastcall FriendshipUpItemInfo__set_BasePriority(
        FriendshipUpItemInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BasePriority_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_EndedAt(
        FriendshipUpItemInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._EndedAt_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Explanation(
        FriendshipUpItemInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Explanation_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Explanation_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FriendshipUpItemInfo__set_GroupId(
        FriendshipUpItemInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GroupId_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Id(FriendshipUpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Id_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_InterruptionUseFlag(
        FriendshipUpItemInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._InterruptionUseFlag_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_MaxNum(FriendshipUpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MaxNum_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Name(
        FriendshipUpItemInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._Name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FriendshipUpItemInfo__set_NotDuplicationGroupId(
        FriendshipUpItemInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NotDuplicationGroupId_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Num(FriendshipUpItemInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Num_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_Priority(
        FriendshipUpItemInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void __fastcall FriendshipUpItemInfo__set_SpriteName(
        FriendshipUpItemInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SpriteName_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall FriendshipUpItemInfo__set_UseFlag(FriendshipUpItemInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._UseFlag_k__BackingField = value;
}