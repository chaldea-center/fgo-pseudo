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
  int32_t v16; // w2
  int32_t v17; // w3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  struct GiftEntity_o *DataById; // x0
  struct GiftEntity_o **p_clearReward; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  struct GiftEntity_o *clearReward; // x8
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  ServantStatusBattleListViewItem_o *p_servantEntity; // x19
  Il2CppObject *v30; // x0
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  int32_t v33; // w20
  System_String_o *v34; // x0
  int32_t v35; // w21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v7 = isClearFloor;
  v8 = isOpenFloor;
  if ( (byte_4A321FB & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_GiftMaster___, targetEntity);
    sub_1B761C0(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B761C0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4A321FB = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v7;
  this->fields.isOpenFloor = v8;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.itemInfo, (int32_t)targetEntity, v16, v17);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_24;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0LL);
  this->fields.clearReward = DataById;
  p_clearReward = &this->fields.clearReward;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.clearReward, (int32_t)DataById, v22, v23);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0LL);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_1B7641C(Instance, v19);
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v25 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (*p_clearReward)->fields.objectId,
              (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v28 = (int)v25;
      this->fields.servantEntity = (struct ServantEntity_o *)v25;
      p_servantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v30 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              (*p_clearReward)->fields.objectId,
              (const MethodInfo_30FF780 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      v28 = (int)v30;
      this->fields.itemEntity = (struct ItemEntity_o *)v30;
      p_servantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0LL);
      if ( !Instance )
        goto LABEL_24;
      v31 = (System_String_o *)Instance;
      v32 = System_String__Substring_61554064((System_String_o *)Instance, 0, Instance->fields.m_CachedPtr - 2, 0LL);
      v33 = System_Int32__Parse(v32, 0LL);
      v34 = System_String__Substring(v31, v31->fields._stringLength - 2, 0LL);
      v35 = System_Int32__Parse(v34, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v33, v35, 0LL) )
        return;
      v28 = (int)entity;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = (ServantStatusBattleListViewItem_o *)&this->fields.servantCostumeEntity;
LABEL_22:
      sub_1B76164(p_servantEntity, v28, v26, v27);
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
    sub_1B7641C(this, sort);
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
    sub_1B7641C(this, method);
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
  if ( (byte_4A321FC & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, method);
    this = (EventTowerListViewItem_o *)sub_1B761C0(&StringLiteral_24970/*"{0}"*/, v3);
    byte_4A321FC = 1;
  }
  itemInfo = v2->fields.itemInfo;
  if ( !itemInfo
    || (this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage) == 0LL
    || (this = (EventTowerListViewItem_o *)System_String__Contains(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_24970/*"{0}"*/,
                                             0LL),
        (v8 = v2->fields.itemInfo) == 0LL) )
  {
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
  return itemInfo->fields.eventId;
}


int32_t __fastcall EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_1B7641C(this, method);
  return clearReward->fields.type;
}


int32_t __fastcall EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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