void EventTowerListViewItem___ctor(
        EventTowerListViewItem_o *this,
        EventTowerRewardEntity_o *targetEntity,
        bool isClearFloor,
        bool isOpenFloor,
        const MethodInfo *method)
{
  bool v7; // w23
  bool v8; // w24
  struct EventTowerRewardEntity_o **p_itemInfo; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct GiftEntity_o *DataById; // x0
  struct GiftEntity_o **p_clearReward; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct GiftEntity_o *clearReward; // x8
  int type; // w9
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  int32_t v30; // w20
  System_String_o *v31; // x0
  int32_t v32; // w21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  Il2CppObject *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int32_t v47; // w1
  MissionNaviTransitionBoardItem_o *p_itemEntity; // x19
  Il2CppObject *v49; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = isClearFloor;
  v8 = isOpenFloor;
  if ( (byte_5932BF3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932BF3 = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v7;
  this->fields.isOpenFloor = v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemInfo,
    (int32_t)targetEntity,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_28;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0);
  this->fields.clearReward = DataById;
  p_clearReward = &this->fields.clearReward;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clearReward,
    (int32_t)DataById,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
    goto LABEL_28;
  type = clearReward->fields.type;
  if ( type <= 5 )
  {
    if ( type != 1 )
    {
      if ( type != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance
        || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___),
            !*p_clearReward)
        || !Instance )
      {
LABEL_28:
        sub_21FFECC(Instance, v17);
      }
      v40 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (*p_clearReward)->fields.objectId,
              (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v47 = (int)v40;
      this->fields.itemEntity = (struct ItemEntity_o *)v40;
      p_itemEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.itemEntity;
LABEL_27:
      sub_21FFBF4(p_itemEntity, v47, v41, v42, v43, v44, v45, v46);
      return;
    }
LABEL_23:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_28;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !*p_clearReward || !Instance )
      goto LABEL_28;
    v49 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            (*p_clearReward)->fields.objectId,
            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v47 = (int)v49;
    this->fields.servantEntity = (struct ServantEntity_o *)v49;
    p_itemEntity = (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity;
    goto LABEL_27;
  }
  if ( (unsigned int)(type - 6) < 2 )
    goto LABEL_23;
  if ( type != 9 )
    return;
  Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0);
  if ( !Instance )
    goto LABEL_28;
  v28 = (System_String_o *)Instance;
  v29 = System_String__Substring_75489544((System_String_o *)Instance, 0, LODWORD(Instance->fields.m_CachedPtr) - 2, 0);
  v30 = System_Int32__Parse(v29, 0);
  v31 = System_String__Substring(v28, v28->fields._stringLength - 2, 0);
  v32 = System_Int32__Parse(v31, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_28;
  if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v30, v32, 0) )
  {
    v39 = (int)entity;
    this->fields.servantCostumeEntity = entity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.servantCostumeEntity,
      v39,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
}


bool EventTowerListViewItem__SetSortValue(
        EventTowerListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x9
  int32_t towerId; // w10

  itemInfo = this->fields.itemInfo;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !itemInfo )
    sub_21FFECC(this, sort);
  towerId = itemInfo->fields.towerId;
  this->fields.sortValue1 = itemInfo->fields.floor;
  this->fields.sortValue0 = -towerId;
  return 1;
}


int32_t EventTowerListViewItem__get_BannerId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_21FFECC(this, method);
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
  if ( (byte_5932BF4 & 1) == 0 )
  {
    this = (EventTowerListViewItem_o *)sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    byte_5932BF4 = 1;
  }
  itemInfo = v2->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_10;
  this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage;
  if ( !this )
    goto LABEL_10;
  this = (EventTowerListViewItem_o *)System_String__Contains(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_26433/*"{0}"*/,
                                       0);
  v4 = v2->fields.itemInfo;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4 )
    {
      boardMessage = v4->fields.boardMessage;
      floor = v4->fields.floor;
      v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &floor);
      return System_String__Format(boardMessage, v6, 0);
    }
LABEL_10:
    sub_21FFECC(this, method);
  }
  if ( !v4 )
    goto LABEL_10;
  return v4->fields.boardMessage;
}


int32_t EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_21FFECC(this, method);
  return itemInfo->fields.eventId;
}


int32_t EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_21FFECC(this, method);
  return clearReward->fields.type;
}


int32_t EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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