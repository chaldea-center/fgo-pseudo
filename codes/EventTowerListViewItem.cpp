// local variable allocation has failed, the output may be wrong!
void __fastcall EventTowerListViewItem___ctor(
        EventTowerListViewItem_o *this,
        EventTowerRewardEntity_o *targetEntity,
        bool isClearFloor,
        bool isOpenFloor,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  bool v27; // w8
  struct EventTowerRewardEntity_o **p_itemInfo; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  DataManager_o *Instance; // x0
  __int64 v36; // x1
  struct GiftEntity_o *DataById; // x0
  struct GiftEntity_o **p_clearReward; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct GiftEntity_o *clearReward; // x8
  struct ServantEntity_o *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleServantConfConponent_o *p_servantEntity; // x19
  System_String_o *v54; // x21
  System_String_o *v55; // x0
  int32_t v56; // w20
  System_String_o *v57; // x0
  int32_t v58; // w21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E8471 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)targetEntity, isClearFloor, isOpenFloor);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E8471 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v27 = isClearFloor;
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v27;
  this->fields.isOpenFloor = isOpenFloor;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemInfo,
    (System_Int32_array **)targetEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !Instance )
    goto LABEL_24;
  DataById = GiftMaster__getDataById((GiftMaster_o *)Instance, (*p_itemInfo)->fields.giftId, 0LL);
  this->fields.clearReward = DataById;
  p_clearReward = &this->fields.clearReward;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clearReward,
    (System_Int32_array **)DataById,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0LL);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_B5D69C(Instance, v36);
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v46 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        (*p_clearReward)->fields.objectId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = v46;
      p_servantEntity = (BattleServantConfConponent_o *)&this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !Instance )
        goto LABEL_24;
      v46 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        (*p_clearReward)->fields.objectId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      this->fields.itemEntity = (struct ItemEntity_o *)v46;
      p_servantEntity = (BattleServantConfConponent_o *)&this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      Instance = (DataManager_o *)System_Int32__ToString((int)clearReward + 24, 0LL);
      if ( !Instance )
        goto LABEL_24;
      v54 = (System_String_o *)Instance;
      v55 = System_String__Substring_44641524((System_String_o *)Instance, 0, Instance->fields.m_CachedPtr - 2, 0LL);
      v56 = System_Int32__Parse(v55, 0LL);
      v57 = System_String__Substring(v54, v54->fields.m_stringLength - 2, 0LL);
      v58 = System_Int32__Parse(v57, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_24;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !Instance )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Instance, &entity, v56, v58, 0LL) )
        return;
      v46 = (struct ServantEntity_o *)entity;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = (BattleServantConfConponent_o *)&this->fields.servantCostumeEntity;
LABEL_22:
      sub_B5D560(p_servantEntity, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
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
    sub_B5D69C(this, sort);
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
    sub_B5D69C(this, method);
  return itemInfo->fields.boardImageId;
}


System_String_o *__fastcall EventTowerListViewItem__get_BoardMessage(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventTowerListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventTowerRewardEntity_o *itemInfo; // x8
  struct EventTowerRewardEntity_o *v9; // x8
  System_String_o *boardMessage; // x19
  Il2CppObject *v11; // x0
  int32_t floor; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E8472 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    this = (EventTowerListViewItem_o *)sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v5, v6, v7);
    byte_42E8472 = 1;
  }
  itemInfo = v4->fields.itemInfo;
  if ( !itemInfo
    || (this = (EventTowerListViewItem_o *)itemInfo->fields.boardMessage) == 0LL
    || (this = (EventTowerListViewItem_o *)System_String__Contains(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_23850/*"{0}"*/,
                                             0LL),
        (v9 = v4->fields.itemInfo) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  boardMessage = v9->fields.boardMessage;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    floor = v9->fields.floor;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &floor);
    return System_String__Format(boardMessage, v11, 0LL);
  }
  return boardMessage;
}


int32_t __fastcall EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B5D69C(this, method);
  return itemInfo->fields.eventId;
}


int32_t __fastcall EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_B5D69C(this, method);
  return clearReward->fields.type;
}


int32_t __fastcall EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  num = clearReward->fields.num;
  if ( num < 2 )
    return -1;
  else
    return num;
}


int32_t __fastcall EventTowerListViewItem__get_RewardObjectId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_B5D69C(this, method);
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