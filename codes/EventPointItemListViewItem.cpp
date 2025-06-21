void __fastcall EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  bool v8; // w24
  __int64 v9; // x1
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  int32_t type; // w8
  EventRewardSetEntity_o *RewardSetData; // x0
  EventRewardSetEntity_o *v14; // x23
  struct System_String_o *detail; // x1
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  struct EventRewardExtraEntity_o *v17; // x8

  v8 = isGet;
  if ( (byte_4B16B0C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6064/*"Error"*/, rewardData);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B16B0C = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isGetReward = v8;
  this->fields.eventRewardEnt = rewardData;
  sub_1BCAF9C(&this->fields.eventRewardEnt);
  this->fields.giftEnt = giftEntity;
  sub_1BCAF9C(&this->fields.giftEnt);
  this->fields.rewardObjectId = 0;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6064/*"Error"*/;
  sub_1BCAF9C(&this->fields.nameTxt);
  this->fields.needPoint = 0LL;
  this->fields.iconId = 0;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  v10 = sub_1BCAF9C(&this->fields.rewardDetailTxt);
  if ( !rewardData )
    goto LABEL_15;
  type = rewardData->fields.type;
  switch ( type )
  {
    case 3:
      RewardSetData = EventRewardEntity__getRewardSetData(rewardData, 0LL);
      if ( !RewardSetData )
        break;
      v14 = RewardSetData;
      this->fields.nameTxt = RewardSetData->fields.name;
      sub_1BCAF9C(&this->fields.nameTxt);
      this->fields.iconId = v14->fields.iconId;
      detail = v14->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_1BCAF9C(&this->fields.rewardDetailTxt);
      break;
    case 2:
      this->fields.rewardExtraEnt = EventRewardEntity__getSetRewardData(rewardData, 0LL);
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_1BCAF9C(&this->fields.rewardExtraEnt);
      if ( !this->fields.rewardExtraEnt )
        break;
      this->fields.nameTxt = this->fields.rewardExtraEnt->fields.name;
      v10 = sub_1BCAF9C(&this->fields.nameTxt);
      v17 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v17->fields.iconId;
        detail = v17->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_1BCB254(v10, v11);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v11);
      break;
  }
  this->fields.needPoint = rewardData->fields.point;
}


void __fastcall EventPointItemListViewItem__Finalize(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall EventPointItemListViewItem__SetSortValue(
        EventPointItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x9
  bool result; // w0

  eventRewardEnt = this->fields.eventRewardEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventRewardEnt )
    sub_1BCB254(this, sort);
  result = 1;
  this->fields.sortValue1 = eventRewardEnt->fields.point;
  return result;
}


CommandCodeEntity_o *__fastcall EventPointItemListViewItem__get_CommandCodeEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


EventPointBuffEntity_o *__fastcall EventPointItemListViewItem__get_EventPointBuffEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventPointBuffEntity;
}


int32_t __fastcall EventPointItemListViewItem__get_GetBgImageId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1BCB254(this, method);
  return eventRewardEnt->fields.bgImageId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetEventId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1BCB254(this, method);
  return eventRewardEnt->fields.eventId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetGiftNum(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.num;
  else
    return 0;
}


int32_t __fastcall EventPointItemListViewItem__get_GetPrioredIconId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.prioredIconId;
  else
    return 0;
}


int32_t __fastcall EventPointItemListViewItem__get_GetRewardNum(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool __fastcall EventPointItemListViewItem__get_IsGetReward(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isGetReward;
}


ItemEntity_o *__fastcall EventPointItemListViewItem__get_ItemEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEnt;
}


System_String_o *__fastcall EventPointItemListViewItem__get_NameText(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.nameTxt;
}


System_String_o *__fastcall EventPointItemListViewItem__get_NumText(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.numTxt;
}


System_String_o *__fastcall EventPointItemListViewItem__get_RewardDetailTXt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardDetailTxt;
}


int32_t __fastcall EventPointItemListViewItem__get_RewardObjId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardObjectId;
}


int32_t __fastcall EventPointItemListViewItem__get_SetExtraIconId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconId;
}


ServantEntity_o *__fastcall EventPointItemListViewItem__get_SvtEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t __fastcall EventPointItemListViewItem__get_Type(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.type;
  else
    return 0;
}


int32_t __fastcall EventPointItemListViewItem__get_eventRewardType(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1BCB254(this, method);
  return eventRewardEnt->fields.type;
}


System_String_o *__fastcall EventPointItemListViewItem__get_needPointTxt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventRewardEntity_o *eventRewardEnt; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int64_t needPoint; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4B16B0E & 1) == 0 )
  {
    sub_1BCAFF8(&long_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    this = (EventPointItemListViewItem_o *)sub_1BCAFF8(&StringLiteral_5598/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v4);
    byte_4B16B0E = 1;
  }
  eventRewardEnt = v2->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1BCB254(this, method);
  eventId = eventRewardEnt->fields.eventId;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_5598/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  if ( System_String__op_Equality(v8, v7, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5598/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0LL);
  }
  needPoint = v2->fields.needPoint;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &needPoint, v9, v10, v11);
  return System_String__Format(v8, v12, 0LL);
}


void __fastcall EventPointItemListViewItem__setGiftData(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  GiftEntity_o *giftEnt; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct GiftEntity_o *v14; // x8
  struct GiftEntity_o *v15; // x8
  void *p_svtEnt; // x0
  struct GiftEntity_o *v17; // x8
  struct GiftEntity_o *v18; // x8
  struct GiftEntity_o *v19; // x8
  int32_t num; // w8

  if ( (byte_4B16B0D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B16B0D = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0LL);
    v14 = this->fields.giftEnt;
    if ( !v14 )
      goto LABEL_27;
    switch ( v14->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
        v15 = this->fields.giftEnt;
        if ( !v15 || !Instance )
          goto LABEL_27;
        this->fields.svtEnt = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                          v15->fields.objectId,
                                                          (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        p_svtEnt = &this->fields.svtEnt;
        break;
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        v17 = this->fields.giftEnt;
        if ( !v17 || !Instance )
          goto LABEL_27;
        this->fields.itemEnt = (struct ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                        v17->fields.objectId,
                                                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        p_svtEnt = &this->fields.itemEnt;
        break;
      case 0xB:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v18 = this->fields.giftEnt;
        if ( !v18 || !Instance )
          goto LABEL_27;
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                         v18->fields.objectId,
                                                                         (const MethodInfo_32C7E00 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        p_svtEnt = &this->fields.commandCodeEntity;
        break;
      case 0xC:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v19 = this->fields.giftEnt;
        if ( !v19 || !Instance )
          goto LABEL_27;
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                               v19->fields.objectId,
                                                                               (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        p_svtEnt = &this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    Instance = (Il2CppObject *)sub_1BCAF9C(p_svtEnt);
    v14 = this->fields.giftEnt;
    if ( !v14 )
LABEL_27:
      sub_1BCB254(Instance, v13);
LABEL_23:
    this->fields.rewardObjectId = v14->fields.objectId;
    num = v14->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}