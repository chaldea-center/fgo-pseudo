void EventTowerListViewItem___ctor(
        EventTowerListViewItem_o *this,
        EventTowerRewardEntity_o *targetEntity,
        bool isClearFloor,
        bool isOpenFloor,
        const MethodInfo *method)
{
  bool v7; // w24
  bool v8; // w23
  struct EventTowerRewardEntity_o **p_itemInfo; // x21
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct GiftEntity_o *DataById; // x0
  struct GiftEntity_o **p_clearReward; // x20
  struct GiftEntity_o *clearReward; // x8
  struct ServantEntity_o *v15; // x1
  void *p_servantEntity; // x19
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  int32_t v19; // w20
  System_String_o *v20; // x0
  int32_t v21; // w21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = isClearFloor;
  v8 = isOpenFloor;
  if ( (byte_4CC1D6F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC1D6F = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v7;
  this->fields.isOpenFloor = v8;
  sub_1C71354(&this->fields.itemInfo, targetEntity);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_24;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0);
  this->fields.clearReward = DataById;
  p_clearReward = &this->fields.clearReward;
  sub_1C71354(&this->fields.clearReward, DataById);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_1C71608(Instance, v11);
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v15 = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (*p_clearReward)->fields.objectId,
                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = v15;
      p_servantEntity = &this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v15 = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (*p_clearReward)->fields.objectId,
                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      this->fields.itemEntity = (struct ItemEntity_o *)v15;
      p_servantEntity = &this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0);
      if ( !Instance )
        goto LABEL_24;
      v17 = (System_String_o *)Instance;
      v18 = System_String__Substring_64077664(
              (System_String_o *)Instance,
              0,
              LODWORD(Instance->fields.m_CachedPtr) - 2,
              0);
      v19 = System_Int32__Parse(v18, 0);
      v20 = System_String__Substring(v17, v17->fields._stringLength - 2, 0);
      v21 = System_Int32__Parse(v20, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v19, v21, 0) )
        return;
      v15 = (struct ServantEntity_o *)entity;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = &this->fields.servantCostumeEntity;
LABEL_22:
      sub_1C71354(p_servantEntity, v15);
      break;
    default:
      return;
  }
}


bool EventTowerListViewItem__SetSortValue(
        EventTowerListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x9
  bool result; // w0

  itemInfo = this->fields.itemInfo;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !itemInfo )
    sub_1C71608(this, sort);
  this->fields.sortValue0 = -itemInfo->fields.towerId;
  result = 1;
  this->fields.sortValue1 = itemInfo->fields.floor;
  return result;
}


int32_t EventTowerListViewItem__get_BannerId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C71608(this, method);
  return itemInfo->fields.boardImageId;
}


System_String_o *EventTowerListViewItem__get_BoardMessage(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  EventTowerListViewItem_o *v2; // x19
  struct EventTowerRewardEntity_o *itemInfo; // x8
  struct EventTowerRewardEntity_o *v4; // x8
  System_String_o *boardMessage; // x19
  Il2CppObject *v6; // x0
  int32_t floor; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4CC1D70 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    this = (EventTowerListViewItem_o *)sub_1C713B0(&StringLiteral_25231/*"{0}"*/);
    byte_4CC1D70 = 1;
  }
  itemInfo = v2->fields.itemInfo;
  if ( !itemInfo
    || (this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage) == 0
    || (this = (EventTowerListViewItem_o *)System_String__Contains(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_25231/*"{0}"*/,
                                             0),
        (v4 = v2->fields.itemInfo) == 0) )
  {
    sub_1C71608(this, method);
  }
  boardMessage = v4->fields.boardMessage;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    floor = v4->fields.floor;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &floor);
    return System_String__Format(boardMessage, v6, 0);
  }
  return boardMessage;
}


int32_t EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C71608(this, method);
  return itemInfo->fields.eventId;
}


int32_t EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1C71608(this, method);
  return clearReward->fields.type;
}


int32_t EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C71608(this, method);
  return itemInfo->fields.iconId;
}


bool EventTowerListViewItem__get_IsFloorClear(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isClearFloor;
}


bool EventTowerListViewItem__get_IsOpenFloor(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isOpenFloor;
}


ItemEntity_o *EventTowerListViewItem__get_ItemEntity(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEntity;
}


System_String_o *EventTowerListViewItem__get_RewardDispNum(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardNum;
}


System_String_o *EventTowerListViewItem__get_RewardName(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardName;
}


int32_t EventTowerListViewItem__get_RewardNum(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8
  int32_t num; // w8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1C71608(this, method);
  num = clearReward->fields.num;
  if ( num <= 1 )
    return -1;
  else
    return num;
}


int32_t EventTowerListViewItem__get_RewardObjectId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1C71608(this, method);
  return clearReward->fields.objectId;
}


ServantCostumeEntity_o *EventTowerListViewItem__get_ServantCostumeEntity(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.servantCostumeEntity;
}


ServantEntity_o *EventTowerListViewItem__get_ServantEntity(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.servantEntity;
}