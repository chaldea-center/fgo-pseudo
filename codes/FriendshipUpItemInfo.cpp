void __fastcall FriendshipUpItemInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct FriendshipUpItemInfo_StaticFields *static_fields; // x0
  struct FriendshipUpItemInfo_StaticFields *v6; // x0

  if ( (byte_4C1DA01 & 1) == 0 )
  {
    sub_1C3B764(&FriendshipUpItemInfo_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_7018/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/, v2);
    sub_1C3B764(&StringLiteral_25611, v3);
    sub_1C3B764(&StringLiteral_7016/*"HEROINE_CHANGECARDVOICE"*/, v4);
    byte_4C1DA01 = 1;
  }
  FriendshipUpItemInfo_TypeInfo->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_7018/*"HEROINE_TREASURE_DEVICE_RANKUP_EFFECTS"*/;
  sub_1C3B708(FriendshipUpItemInfo_TypeInfo->static_fields);
  static_fields = FriendshipUpItemInfo_TypeInfo->static_fields;
  static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE = (struct System_String_o *)StringLiteral_7016/*"HEROINE_CHANGECARDVOICE"*/;
  sub_1C3B708(&static_fields->SAVE_KEY_FRIENDSHIP_EVENT_ITEM_USE_STATE);
  v6 = FriendshipUpItemInfo_TypeInfo->static_fields;
  v6->ITEM_ICON_SUFFIX = (struct System_String_o *)StringLiteral_25611;
  sub_1C3B708(&v6->ITEM_ICON_SUFFIX);
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
  __int64 IsNullOrEmpty; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  GiftEntity_o *v20; // x24
  int32_t v21; // w8
  System_String_o *v22; // x0
  struct System_String_o **p_Explanation_k__BackingField; // x23
  System_String_o *v24; // x0
  System_String_o *Explanation_k__BackingField; // x0
  System_String_o *v26; // x24
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  int32_t eventId; // w1
  int32_t CampaignType_k__BackingField; // w8
  BalanceConfig_c *v33; // x0
  float v34; // [xsp+4h] [xbp-5Ch] BYREF
  int64_t outStartedAt; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *countText; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-48h] BYREF
  int64_t outEndedAt; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C1D9FC & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, itemEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&float_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_10472/*"Prefix \"xml\" is reserved for use by XML and can be mapped only to namespace name \"http://www.w3.org/XML/1998/namespace\"."*/, v15);
    sub_1C3B764(&StringLiteral_11139/*"RootCameraPrefab"*/, v16);
    byte_4C1D9FC = 1;
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
    p_Explanation_k__BackingField = &this->fields._Explanation_k__BackingField;
    Explanation_k__BackingField = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = eventCampaignEntity->fields.value;
    IsNullOrEmpty = System_String__IsNullOrEmpty(Explanation_k__BackingField, 0LL);
    if ( (IsNullOrEmpty & 1) == 0 )
      goto LABEL_20;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_10472/*"Prefix \"xml\" is reserved for use by XML and can be mapped only to namespace name \"http://www.w3.org/XML/1998/namespace\"."*/, 0LL);
    v34 = (float)this->fields._Value_k__BackingField / 1000.0;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v34, v27, v28, v29);
    this->fields._Explanation_k__BackingField = System_String__Format(v26, v30, 0LL);
    goto LABEL_19;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (__int64)GiftMaster__GetListById(
                                   (GiftMaster_o *)IsNullOrEmpty,
                                   eventCampaignEntity->fields.value,
                                   0LL)) == 0 )
  {
LABEL_28:
    sub_1C3B9C0(IsNullOrEmpty, v18);
  }
  if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
  {
    IsNullOrEmpty = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
                               0,
                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !IsNullOrEmpty )
      goto LABEL_28;
    v20 = (GiftEntity_o *)IsNullOrEmpty;
    v21 = *(_DWORD *)(IsNullOrEmpty + 28);
    p_Explanation_k__BackingField = &this->fields._Explanation_k__BackingField;
    v22 = this->fields._Explanation_k__BackingField;
    this->fields._Value_k__BackingField = v21;
    IsNullOrEmpty = System_String__IsNullOrEmpty(v22, 0LL);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      GiftEntity__GetInfo(v20, &nameText, &countText, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11139/*"RootCameraPrefab"*/, 0LL);
      *p_Explanation_k__BackingField = System_String__Format(v24, (Il2CppObject *)nameText, 0LL);
LABEL_19:
      IsNullOrEmpty = sub_1C3B708(p_Explanation_k__BackingField);
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
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v33 = BalanceConfig_TypeInfo;
    }
    if ( v33->static_fields->DefaultQuestUseFriendshipUpItemGroupId == this->fields._GroupId_k__BackingField )
      this->fields._TutorialEventId_k__BackingField = 0;
    else
      this->fields._IsFriendshipUpEventItem_k__BackingField = 1;
  }
  this->fields._IsValid_k__BackingField = 1;
}


void __fastcall FriendshipUpItemInfo___ctor_32955684(
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
    sub_1C3B9C0(this, campaignType);
  }
  return 0;
}


bool __fastcall FriendshipUpItemInfo__GetUseFlag(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  return this->fields._UseFlag_k__BackingField;
}


bool __fastcall FriendshipUpItemInfo__IsEventPeriod(FriendshipUpItemInfo_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D9FE & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1D9FE = 1;
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

  if ( (byte_4C1DA00 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_UserItemMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    byte_4C1DA00 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    byte_4C1C955 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    sub_1C3B9C0(v7, v5);
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

  if ( (byte_4C1D9FF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, action);
    sub_1C3B764(&Method_CommonUI_CloseNotificationDialog__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8);
    sub_1C3B764(&StringLiteral_10464/*"PreComputeUnionConstructor"*/, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C1D9FF = 1;
  }
  this->fields._UseFlag_k__BackingField = 0;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  PartyOrganizationUtility__SaveQuestUseItemUseState(Instance, 0LL);
  v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v14, v13, Method_CommonUI_CloseNotificationDialog__, 0LL);
  v15 = System_Delegate__Combine((System_Delegate_o *)v14, (System_Delegate_o *)action, 0LL);
  v16 = (System_Action_o *)v15;
  if ( !v15 || (System_Action_c *)v15->klass == System_Action_TypeInfo )
  {
    v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10464/*"PreComputeUnionConstructor"*/, 0LL);
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
    sub_1C3B9C0(Instance, v12);
  }
  v19 = (FriendshipUpItemInfo_o *)sub_1C3BC80(v15);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  FriendshipUpItemInfo_c *v14; // x0
  int32_t imageId; // w9
  System_String_o *ITEM_ICON_SUFFIX; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C1D9FD & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestUseItemGroupMaster___, itemEntity);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestUseItemPickupMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__, v7);
    sub_1C3B764(&FriendshipUpItemInfo_TypeInfo, v8);
    this = (FriendshipUpItemInfo_o *)sub_1C3B764(&int_TypeInfo, v9);
    byte_4C1D9FD = 1;
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
  this = (FriendshipUpItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestUseItemGroupMaster___);
  if ( !this )
LABEL_17:
    sub_1C3B9C0(this, itemEntity);
  this = (FriendshipUpItemInfo_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v4->fields._GroupId_k__BackingField,
                                     (const MethodInfo_329AE94 *)Method_DataMasterBase_QuestUseItemGroupMaster__QuestUseItemGroupEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    *(int32x2_t *)&v4->fields._BasePriority_k__BackingField = vrev64_s32(*(int32x2_t *)((char *)&entity[1].klass + 4));
  }
LABEL_11:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (FriendshipUpItemInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestUseItemPickupMaster___);
  if ( !this )
    goto LABEL_17;
  v4->fields._Priority_k__BackingField = QuestUseItemPickupMaster__TryGetPriority(
                                           (QuestUseItemPickupMaster_o *)this,
                                           v4->fields._Id_k__BackingField,
                                           v4->fields._GroupId_k__BackingField,
                                           v4->fields._BasePriority_k__BackingField,
                                           0LL);
  v4->fields._Name_k__BackingField = itemEntity->fields.name;
  sub_1C3B708(&v4->fields._Name_k__BackingField);
  v4->fields._Explanation_k__BackingField = ItemEntity__GetEffectExplanation(itemEntity, 0LL);
  sub_1C3B708(&v4->fields._Explanation_k__BackingField);
  v14 = FriendshipUpItemInfo_TypeInfo;
  if ( !FriendshipUpItemInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendshipUpItemInfo_TypeInfo);
    v14 = FriendshipUpItemInfo_TypeInfo;
  }
  imageId = itemEntity->fields.imageId;
  ITEM_ICON_SUFFIX = v14->static_fields->ITEM_ICON_SUFFIX;
  v18 = imageId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
  v4->fields._SpriteName_k__BackingField = System_String__Format(ITEM_ICON_SUFFIX, v17, 0LL);
  sub_1C3B708(&v4->fields._SpriteName_k__BackingField);
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
  this->fields._Explanation_k__BackingField = value;
  sub_1C3B708(&this->fields._Explanation_k__BackingField);
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
  this->fields._Name_k__BackingField = value;
  sub_1C3B708(&this->fields._Name_k__BackingField);
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
  this->fields._SpriteName_k__BackingField = value;
  sub_1C3B708(&this->fields._SpriteName_k__BackingField);
}


void __fastcall FriendshipUpItemInfo__set_UseFlag(FriendshipUpItemInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._UseFlag_k__BackingField = value;
}