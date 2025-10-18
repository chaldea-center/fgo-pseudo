void EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  bool v8; // w24
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  int32_t type; // w8
  EventRewardSetEntity_o *RewardSetData; // x0
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v16; // x23
  struct System_String_o *detail; // x1
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  struct System_String_o *v20; // x1
  struct EventRewardExtraEntity_o *v21; // x8

  v8 = isGet;
  if ( (byte_4C3D4C3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6116/*"Error"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3D4C3 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isGetReward = v8;
  this->fields.eventRewardEnt = rewardData;
  sub_1C36FFC(&this->fields.eventRewardEnt, rewardData);
  this->fields.giftEnt = giftEntity;
  sub_1C36FFC(&this->fields.giftEnt, giftEntity);
  this->fields.rewardObjectId = 0;
  v9 = StringLiteral_6116/*"Error"*/;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6116/*"Error"*/;
  sub_1C36FFC(&this->fields.nameTxt, v9);
  this->fields.needPoint = 0;
  this->fields.iconId = 0;
  v10 = StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  v11 = sub_1C36FFC(&this->fields.rewardDetailTxt, v10);
  if ( !rewardData )
    goto LABEL_15;
  type = rewardData->fields.type;
  switch ( type )
  {
    case 3:
      RewardSetData = EventRewardEntity__getRewardSetData(rewardData, 0);
      if ( !RewardSetData )
        break;
      name = RewardSetData->fields.name;
      v16 = RewardSetData;
      this->fields.nameTxt = name;
      sub_1C36FFC(&this->fields.nameTxt, name);
      this->fields.iconId = v16->fields.iconId;
      detail = v16->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_1C36FFC(&this->fields.rewardDetailTxt, detail);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_1C36FFC(&this->fields.rewardExtraEnt, SetRewardData);
      if ( !this->fields.rewardExtraEnt )
        break;
      v20 = this->fields.rewardExtraEnt->fields.name;
      this->fields.nameTxt = v20;
      v11 = sub_1C36FFC(&this->fields.nameTxt, v20);
      v21 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v21->fields.iconId;
        detail = v21->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_1C372B4(v11);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v12);
      break;
  }
  this->fields.needPoint = rewardData->fields.point;
}


void EventPointItemListViewItem__Finalize(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool EventPointItemListViewItem__SetSortValue(
        EventPointItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x9
  bool result; // w0

  eventRewardEnt = this->fields.eventRewardEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventRewardEnt )
    sub_1C372B4(this);
  result = 1;
  this->fields.sortValue1 = eventRewardEnt->fields.point;
  return result;
}


CommandCodeEntity_o *EventPointItemListViewItem__get_CommandCodeEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


EventPointBuffEntity_o *EventPointItemListViewItem__get_EventPointBuffEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventPointBuffEntity;
}


int32_t EventPointItemListViewItem__get_GetBgImageId(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1C372B4(this);
  return eventRewardEnt->fields.bgImageId;
}


int32_t EventPointItemListViewItem__get_GetEventId(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1C372B4(this);
  return eventRewardEnt->fields.eventId;
}


int32_t EventPointItemListViewItem__get_GetGiftNum(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.num;
  else
    return 0;
}


int32_t EventPointItemListViewItem__get_GetPrioredIconId(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.prioredIconId;
  else
    return 0;
}


int32_t EventPointItemListViewItem__get_GetRewardNum(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardNum;
}


bool EventPointItemListViewItem__get_IsGetReward(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isGetReward;
}


ItemEntity_o *EventPointItemListViewItem__get_ItemEntity(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
}


System_String_o *EventPointItemListViewItem__get_NameText(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.nameTxt;
}


System_String_o *EventPointItemListViewItem__get_NumText(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.numTxt;
}


System_String_o *EventPointItemListViewItem__get_RewardDetailTXt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardDetailTxt;
}


int32_t EventPointItemListViewItem__get_RewardObjId(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardObjectId;
}


int32_t EventPointItemListViewItem__get_SetExtraIconId(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


ServantEntity_o *EventPointItemListViewItem__get_SvtEntity(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t EventPointItemListViewItem__get_Type(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.type;
  else
    return 0;
}


int32_t EventPointItemListViewItem__get_eventRewardType(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1C372B4(this);
  return eventRewardEnt->fields.type;
}


System_String_o *EventPointItemListViewItem__get_needPointTxt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v2; // x19
  struct EventRewardEntity_o *eventRewardEnt; // x8
  System_String_o *v4; // x0
  System_String_o *v5; // x21
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  int64_t needPoint; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C3D4C5 & 1) == 0 )
  {
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    this = (EventPointItemListViewItem_o *)sub_1C37058(&StringLiteral_5644/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/);
    byte_4C3D4C5 = 1;
  }
  eventRewardEnt = v2->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1C372B4(this);
  eventId = eventRewardEnt->fields.eventId;
  v4 = System_Int32__ToString((int32_t)&eventId, 0);
  v5 = System_String__Concat_63561656((System_String_o *)StringLiteral_5644/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v4, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0);
  if ( System_String__op_Equality(v6, v5, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0);
  }
  needPoint = v2->fields.needPoint;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &needPoint, v7, v8, v9, v10, v11, v12);
  return System_String__Format(v6, v13, 0);
}


void EventPointItemListViewItem__setGiftData(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_o *giftEnt; // x0
  Il2CppObject *Instance; // x0
  struct GiftEntity_o *v5; // x8
  struct GiftEntity_o *v6; // x8
  Il2CppObject *Entity; // x1
  void *p_svtEnt; // x0
  struct GiftEntity_o *v9; // x8
  struct GiftEntity_o *v10; // x8
  struct GiftEntity_o *v11; // x8
  int32_t num; // w8

  if ( (byte_4C3D4C4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D4C4 = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0);
    v5 = this->fields.giftEnt;
    if ( !v5 )
      goto LABEL_27;
    switch ( v5->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
        v6 = this->fields.giftEnt;
        if ( !v6 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v6->fields.objectId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEnt = (struct ServantEntity_o *)Entity;
        p_svtEnt = &this->fields.svtEnt;
        break;
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
        v9 = this->fields.giftEnt;
        if ( !v9 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v9->fields.objectId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEnt = (struct ItemEntity_o *)Entity;
        p_svtEnt = &this->fields.itemEnt;
        break;
      case 0xB:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v10 = this->fields.giftEnt;
        if ( !v10 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v10->fields.objectId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
        p_svtEnt = &this->fields.commandCodeEntity;
        break;
      case 0xC:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v11 = this->fields.giftEnt;
        if ( !v11 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v11->fields.objectId,
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)Entity;
        p_svtEnt = &this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    Instance = (Il2CppObject *)sub_1C36FFC(p_svtEnt, Entity);
    v5 = this->fields.giftEnt;
    if ( !v5 )
LABEL_27:
      sub_1C372B4(Instance);
LABEL_23:
    this->fields.rewardObjectId = v5->fields.objectId;
    num = v5->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}