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
  struct GiftEntity_o **p_clearReward; // x20
  struct GiftEntity_o *clearReward; // x8
  void *p_servantEntity; // x19
  System_String_o *v15; // x21
  System_String_o *v16; // x0
  int32_t v17; // w20
  System_String_o *v18; // x0
  int32_t v19; // w21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = isClearFloor;
  v8 = isOpenFloor;
  if ( (byte_4C21C1E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21C1E = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v7;
  this->fields.isOpenFloor = v8;
  sub_1C2D434(&this->fields.itemInfo);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_24;
  this->fields.clearReward = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0);
  p_clearReward = &this->fields.clearReward;
  sub_1C2D434(&this->fields.clearReward);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_1C2D6EC(Instance, v11);
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      this->fields.servantEntity = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                               (*p_clearReward)->fields.objectId,
                                                               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      p_servantEntity = &this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      this->fields.itemEntity = (struct ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                         (*p_clearReward)->fields.objectId,
                                                         (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      p_servantEntity = &this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0);
      if ( !Instance )
        goto LABEL_24;
      v15 = (System_String_o *)Instance;
      v16 = System_String__Substring_63503788(
              (System_String_o *)Instance,
              0,
              LODWORD(Instance->fields.m_CachedPtr) - 2,
              0);
      v17 = System_Int32__Parse(v16, 0);
      v18 = System_String__Substring(v15, v15->fields._stringLength - 2, 0);
      v19 = System_Int32__Parse(v18, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v17, v19, 0) )
        return;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = &this->fields.servantCostumeEntity;
LABEL_22:
      sub_1C2D434(p_servantEntity);
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
    sub_1C2D6EC(this, sort);
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
    sub_1C2D6EC(this, method);
  return itemInfo->fields.boardImageId;
}


System_String_o *EventTowerListViewItem__get_BoardMessage(EventTowerListViewItem_o *this, const MethodInfo *method)
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
  if ( (byte_4C21C1F & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    this = (EventTowerListViewItem_o *)sub_1C2D490(&StringLiteral_25078/*"{0}"*/);
    byte_4C21C1F = 1;
  }
  itemInfo = v2->fields.itemInfo;
  if ( !itemInfo
    || (this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage) == 0
    || (this = (EventTowerListViewItem_o *)System_String__Contains(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_25078/*"{0}"*/,
                                             0),
        (v7 = v2->fields.itemInfo) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  boardMessage = v7->fields.boardMessage;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    floor = v7->fields.floor;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &floor, v4, v5, v6);
    return System_String__Format(boardMessage, v9, 0);
  }
  return boardMessage;
}


int32_t EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C2D6EC(this, method);
  return itemInfo->fields.eventId;
}


int32_t EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1C2D6EC(this, method);
  return clearReward->fields.type;
}


int32_t EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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