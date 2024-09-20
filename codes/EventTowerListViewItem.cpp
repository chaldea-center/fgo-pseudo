void __fastcall EventTowerListViewItem___ctor(
        EventTowerListViewItem_o *this,
        EventTowerRewardEntity_o *targetEntity,
        bool isClearFloor,
        bool isOpenFloor,
        const MethodInfo *method)
{
  bool v7; // w24
  bool v8; // w23
  struct EventTowerRewardEntity_o **p_itemInfo; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct GiftEntity_o *DataById; // x0
  struct GiftEntity_o **p_clearReward; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  struct GiftEntity_o *clearReward; // x8
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  ServantStatusBattleListViewItem_o *p_servantEntity; // x19
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  int32_t v27; // w20
  System_String_o *v28; // x0
  int32_t v29; // w21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = isClearFloor;
  v8 = isOpenFloor;
  if ( (byte_4A5F454 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F454 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v7;
  this->fields.isOpenFloor = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemInfo, (int32_t)targetEntity, v10, v11);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_24;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0LL);
  this->fields.clearReward = DataById;
  p_clearReward = &this->fields.clearReward;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clearReward, (int32_t)DataById, v16, v17);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0LL);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_1B8880C(Instance, v13);
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v19 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (*p_clearReward)->fields.objectId,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v22 = (int)v19;
      this->fields.servantEntity = (struct ServantEntity_o *)v19;
      p_servantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v24 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (*p_clearReward)->fields.objectId,
              (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v22 = (int)v24;
      this->fields.itemEntity = (struct ItemEntity_o *)v24;
      p_servantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0LL);
      if ( !Instance )
        goto LABEL_24;
      v25 = (System_String_o *)Instance;
      v26 = System_String__Substring_61726036((System_String_o *)Instance, 0, Instance->fields.m_CachedPtr - 2, 0LL);
      v27 = System_Int32__Parse(v26, 0LL);
      v28 = System_String__Substring(v25, v25->fields._stringLength - 2, 0LL);
      v29 = System_Int32__Parse(v28, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v27, v29, 0LL) )
        return;
      v22 = (int)entity;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.servantCostumeEntity;
LABEL_22:
      sub_1B88554(p_servantEntity, v22, v20, v21);
      break;
    default:
      return;
  }
}


bool __fastcall EventTowerListViewItem__SetSortValue(
        EventTowerListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x9
  bool result; // w0

  itemInfo = this->fields.itemInfo;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !itemInfo )
    sub_1B8880C(this, sort);
  this->fields.sortValue0 = -itemInfo->fields.towerId;
  result = 1;
  this->fields.sortValue1 = itemInfo->fields.floor;
  return result;
}


int32_t __fastcall EventTowerListViewItem__get_BannerId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1B8880C(this, method);
  return itemInfo->fields.boardImageId;
}


System_String_o *__fastcall EventTowerListViewItem__get_BoardMessage(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  EventTowerListViewItem_o *v2; // x19
  struct EventTowerRewardEntity_o *itemInfo; // x8
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  struct EventTowerRewardEntity_o *v7; // x8
  System_String_o *boardMessage; // x19
  Il2CppObject *v9; // x0
  int32_t floor; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4A5F455 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    this = (EventTowerListViewItem_o *)sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    byte_4A5F455 = 1;
  }
  itemInfo = v2->fields.itemInfo;
  if ( !itemInfo
    || (this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage) == 0LL
    || (this = (EventTowerListViewItem_o *)System_String__Contains(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_24983/*"{0}"*/,
                                             0LL),
        (v7 = v2->fields.itemInfo) == 0LL) )
  {
    sub_1B8880C(this, method);
  }
  boardMessage = v7->fields.boardMessage;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    floor = v7->fields.floor;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &floor, v4, v5, v6);
    return System_String__Format(boardMessage, v9, 0LL);
  }
  return boardMessage;
}


int32_t __fastcall EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1B8880C(this, method);
  return itemInfo->fields.eventId;
}


int32_t __fastcall EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1B8880C(this, method);
  return clearReward->fields.type;
}


int32_t __fastcall EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1B8880C(this, method);
  return itemInfo->fields.iconId;
}


bool __fastcall EventTowerListViewItem__get_IsFloorClear(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isClearFloor;
}


bool __fastcall EventTowerListViewItem__get_IsOpenFloor(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOpenFloor;
}


ItemEntity_o *__fastcall EventTowerListViewItem__get_ItemEntity(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEntity;
}


System_String_o *__fastcall EventTowerListViewItem__get_RewardDispNum(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


System_String_o *__fastcall EventTowerListViewItem__get_RewardName(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardName;
}


int32_t __fastcall EventTowerListViewItem__get_RewardNum(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8
  int32_t num; // w8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1B8880C(this, method);
  num = clearReward->fields.num;
  if ( num <= 1 )
    return -1;
  else
    return num;
}


int32_t __fastcall EventTowerListViewItem__get_RewardObjectId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1B8880C(this, method);
  return clearReward->fields.objectId;
}


ServantCostumeEntity_o *__fastcall EventTowerListViewItem__get_ServantCostumeEntity(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantCostumeEntity;
}


ServantEntity_o *__fastcall EventTowerListViewItem__get_ServantEntity(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantEntity;
}