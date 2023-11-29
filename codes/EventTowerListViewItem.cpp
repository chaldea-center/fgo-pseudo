void __fastcall EventTowerListViewItem___ctor(
        EventTowerListViewItem_o *this,
        EventTowerRewardEntity_o *targetEntity,
        bool isClearFloor,
        bool isOpenFloor,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  bool v15; // w8
  struct EventTowerRewardEntity_o **p_itemInfo; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GiftEntity_o *DataById; // x0
  struct GiftEntity_o **p_clearReward; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct GiftEntity_o *clearReward; // x8
  WebViewManager_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  struct ServantEntity_o *v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BattleServantConfConponent_o *p_servantEntity; // x19
  WebViewManager_o *v44; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *v47; // x21
  System_String_o *v48; // x0
  int32_t v49; // w20
  System_String_o *v50; // x0
  int32_t v51; // w21
  WebViewManager_o *v52; // x0
  ServantCostumeMaster_o *v53; // x0
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9BB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, targetEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40F9BB1 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  v15 = isClearFloor;
  this->fields.itemInfo = targetEntity;
  p_itemInfo = &this->fields.itemInfo;
  this->fields.isClearFloor = v15;
  this->fields.isOpenFloor = isOpenFloor;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemInfo,
    (System_Int32_array **)targetEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !*p_itemInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_24;
  DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, (*p_itemInfo)->fields.giftId, 0LL);
  this->fields.clearReward = DataById;
  p_clearReward = &this->fields.clearReward;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clearReward,
    (System_Int32_array **)DataById,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !this->fields.clearReward )
    return;
  GiftEntity__GetInfo(this->fields.clearReward, &this->fields.rewardName, &this->fields.rewardNum, 0LL);
  clearReward = this->fields.clearReward;
  if ( !clearReward )
LABEL_24:
    sub_B170D4();
  switch ( clearReward->fields.type )
  {
    case 1:
    case 6:
    case 7:
      v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v34 )
        goto LABEL_24;
      v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v34,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !*p_clearReward || !v35 )
        goto LABEL_24;
      v36 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v35,
                                        (*p_clearReward)->fields.objectId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      this->fields.servantEntity = v36;
      p_servantEntity = (BattleServantConfConponent_o *)&this->fields.servantEntity;
      goto LABEL_22;
    case 2:
      v44 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v44 )
        goto LABEL_24;
      v45 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v44,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*p_clearReward || !v45 )
        goto LABEL_24;
      v36 = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v45,
                                        (*p_clearReward)->fields.objectId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
      this->fields.itemEntity = (struct ItemEntity_o *)v36;
      p_servantEntity = (BattleServantConfConponent_o *)&this->fields.itemEntity;
      goto LABEL_22;
    case 9:
      v46 = System_Int32__ToString((int)clearReward + 24, 0LL);
      if ( !v46 )
        goto LABEL_24;
      v47 = v46;
      v48 = System_String__Substring_43807468(v46, 0, v46->fields.m_stringLength - 2, 0LL);
      v49 = System_Int32__Parse(v48, 0LL);
      v50 = System_String__Substring(v47, v47->fields.m_stringLength - 2, 0LL);
      v51 = System_Int32__Parse(v50, 0LL);
      v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v52 )
        goto LABEL_24;
      v53 = (ServantCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)v52,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
      if ( !v53 )
        goto LABEL_24;
      if ( !ServantCostumeMaster__TryGetEntity(v53, &entity, v49, v51, 0LL) )
        return;
      v36 = (struct ServantEntity_o *)entity;
      this->fields.servantCostumeEntity = entity;
      p_servantEntity = (BattleServantConfConponent_o *)&this->fields.servantCostumeEntity;
LABEL_22:
      sub_B16F98(p_servantEntity, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
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
    sub_B170D4();
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
    sub_B170D4();
  return itemInfo->fields.boardImageId;
}


System_String_o *__fastcall EventTowerListViewItem__get_BoardMessage(
        EventTowerListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct EventTowerRewardEntity_o *itemInfo; // x8
  System_String_o *boardMessage; // x0
  bool v6; // w0
  struct EventTowerRewardEntity_o *v7; // x8
  System_String_o *v8; // x19
  Il2CppObject *v9; // x0
  int32_t floor; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9BB2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23445, v3);
    byte_40F9BB2 = 1;
  }
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo
    || (boardMessage = itemInfo->fields.boardMessage) == 0LL
    || (v6 = System_String__Contains(boardMessage, (System_String_o *)StringLiteral_23445, 0LL),
        (v7 = this->fields.itemInfo) == 0LL) )
  {
    sub_B170D4();
  }
  v8 = v7->fields.boardMessage;
  if ( v6 )
  {
    floor = v7->fields.floor;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &floor);
    return System_String__Format(v8, v9, 0LL);
  }
  return v8;
}


int32_t __fastcall EventTowerListViewItem__get_EventId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B170D4();
  return itemInfo->fields.eventId;
}


int32_t __fastcall EventTowerListViewItem__get_GiftType(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *clearReward; // x8

  clearReward = this->fields.clearReward;
  if ( !clearReward )
    sub_B170D4();
  return clearReward->fields.type;
}


int32_t __fastcall EventTowerListViewItem__get_IconId(EventTowerListViewItem_o *this, const MethodInfo *method)
{
  struct EventTowerRewardEntity_o *itemInfo; // x8

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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