void __fastcall EventTowerListViewItem___ctor(
        EventTowerListViewItem_o *this,
        EventTowerRewardEntity_o *targetEntity,
        bool isClearFloor,
        bool isOpenFloor,
        const MethodInfo *method)
{
  bool v7; // w24
  bool v8; // w23
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct EventTowerRewardEntity_o **p_itemInfo; // x21
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct GiftEntity_o **p_clearReward; // x20
  struct GiftEntity_o *clearReward; // x8
  void *p_servantEntity; // x19
  System_String_o *v21; // x21
  System_String_o *v22; // x0
  int32_t v23; // w20
  System_String_o *v24; // x0
  int32_t v25; // w21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = isClearFloor;
  v8 = isOpenFloor;
  if ( (byte_4B16F1E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_GiftMaster___, targetEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B16F1E = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v7;
  this->fields.isOpenFloor = v8;
  sub_1BCAF9C(&this->fields.itemInfo);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_24;
  this->fields.clearReward = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0LL);
  p_clearReward = &this->fields.clearReward;
  sub_1BCAF9C(&this->fields.clearReward);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0LL);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_1BCB254(Instance, v17);
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                               (*p_clearReward)->fields.objectId,
                                                               (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_servantEntity = &this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      this->fields.itemEntity = (struct ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                         (*p_clearReward)->fields.objectId,
                                                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      p_servantEntity = &this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0LL);
      if ( !Instance )
        goto LABEL_24;
      v21 = (System_String_o *)Instance;
      v22 = System_String__Substring_62496348((System_String_o *)Instance, 0, Instance->fields.m_CachedPtr - 2, 0LL);
      v23 = System_Int32__Parse(v22, 0LL);
      v24 = System_String__Substring(v21, v21->fields._stringLength - 2, 0LL);
      v25 = System_Int32__Parse(v24, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v23, v25, 0LL) )
        return;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = &this->fields.servantCostumeEntity;
LABEL_22:
      sub_1BCAF9C(p_servantEntity);
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
    sub_1BCB254(this, sort);
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
    sub_1BCB254(this, method);
  return itemInfo->fields.boardImageId;
}


System_String_o *__fastcall EventTowerListViewItem__get_BoardMessage(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  EventTowerListViewItem_o *v2; // x19
  __int64 v3; // x1
  struct EventTowerRewardEntity_o *itemInfo; // x8
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct EventTowerRewardEntity_o *v8; // x8
  System_String_o *boardMessage; // x19
  Il2CppObject *v10; // x0
  int32_t floor; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4B16F1F & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    this = (EventTowerListViewItem_o *)sub_1BCAFF8(&StringLiteral_24882/*"{0}"*/, v3);
    byte_4B16F1F = 1;
  }
  itemInfo = v2->fields.itemInfo;
  if ( !itemInfo
    || (this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage) == 0LL
    || (this = (EventTowerListViewItem_o *)System_String__Contains(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_24882/*"{0}"*/,
                                             0LL),
        (v8 = v2->fields.itemInfo) == 0LL) )
  {
    sub_1BCB254(this, method);
  }
  boardMessage = v8->fields.boardMessage;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    floor = v8->fields.floor;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &floor, v5, v6, v7);
    return System_String__Format(boardMessage, v10, 0LL);
  }
  return boardMessage;
}


int32_t __fastcall EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1BCB254(this, method);
  return itemInfo->fields.eventId;
}


int32_t __fastcall EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1BCB254(this, method);
  return clearReward->fields.type;
}


int32_t __fastcall EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1BCB254(this, method);
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
    sub_1BCB254(this, method);
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
    sub_1BCB254(this, method);
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