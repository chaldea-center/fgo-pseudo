void __fastcall EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  bool v8; // w24
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x0
  const MethodInfo *v21; // x1
  int32_t type; // w8
  EventRewardSetEntity_o *RewardSetData; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_String_o *detail; // x1
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_String_o *v37; // x1
  struct EventRewardExtraEntity_o *v38; // x8

  v8 = isGet;
  if ( (byte_4A31E13 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6077/*"Error"*/, rewardData);
    sub_1B761C0(&StringLiteral_1/*""*/, v9);
    byte_4A31E13 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isGetReward = v8;
  this->fields.eventRewardEnt = rewardData;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.eventRewardEnt, (int32_t)rewardData, v10, v11);
  this->fields.giftEnt = giftEntity;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.giftEnt, (int32_t)giftEntity, v12, v13);
  this->fields.rewardObjectId = 0;
  v14 = StringLiteral_6077/*"Error"*/;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6077/*"Error"*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, v14, v15, v16);
  this->fields.needPoint = 0LL;
  this->fields.iconId = 0;
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.rewardDetailTxt, v17, v18, v19);
  if ( !rewardData )
    goto LABEL_15;
  type = rewardData->fields.type;
  switch ( type )
  {
    case 3:
      RewardSetData = EventRewardEntity__getRewardSetData(rewardData, 0LL);
      if ( !RewardSetData )
        break;
      name = RewardSetData->fields.name;
      v27 = RewardSetData;
      this->fields.nameTxt = name;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, (int32_t)name, v24, v25);
      this->fields.iconId = v27->fields.iconId;
      detail = v27->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.rewardDetailTxt, (int32_t)detail, v28, v29);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0LL);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.rewardExtraEnt, (int32_t)SetRewardData, v33, v34);
      if ( !this->fields.rewardExtraEnt )
        break;
      v37 = this->fields.rewardExtraEnt->fields.name;
      this->fields.nameTxt = v37;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, (int32_t)v37, v35, v36);
      v38 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v38->fields.iconId;
        detail = v38->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B7641C(v20, v21);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v21);
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
    sub_1B7641C(this, sort);
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
    sub_1B7641C(this, method);
  return eventRewardEnt->fields.bgImageId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetEventId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1B7641C(this, method);
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
    sub_1B7641C(this, method);
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
  if ( (byte_4A31E15 & 1) == 0 )
  {
    sub_1B761C0(&long_TypeInfo, method);
    sub_1B761C0(&LocalizationManager_TypeInfo, v3);
    this = (EventPointItemListViewItem_o *)sub_1B761C0(&StringLiteral_5648/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v4);
    byte_4A31E15 = 1;
  }
  eventRewardEnt = v2->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1B7641C(this, method);
  eventId = eventRewardEnt->fields.eventId;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_61535060((System_String_o *)StringLiteral_5648/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v6, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(v7, 0LL);
  if ( System_String__op_Equality(v8, v7, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5648/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0LL);
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
  Il2CppObject *Entity; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  ServantStatusBattleListViewItem_o *p_svtEnt; // x0
  struct GiftEntity_o *v21; // x8
  Il2CppObject *v22; // x0
  struct GiftEntity_o *v23; // x8
  Il2CppObject *v24; // x0
  struct GiftEntity_o *v25; // x8
  Il2CppObject *v26; // x0
  int32_t num; // w8

  if ( (byte_4A31E14 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v3);
    sub_1B761C0(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B761C0(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B761C0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1B761C0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B761C0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v8);
    sub_1B761C0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A31E14 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ServantMaster___);
        v15 = this->fields.giftEnt;
        if ( !v15 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v15->fields.objectId,
                   (const MethodInfo_30FF780 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v19 = (int)Entity;
        this->fields.svtEnt = (struct ServantEntity_o *)Entity;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.svtEnt;
        break;
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_ItemMaster___);
        v21 = this->fields.giftEnt;
        if ( !v21 || !Instance )
          goto LABEL_27;
        v22 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v21->fields.objectId,
                (const MethodInfo_30FF780 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v19 = (int)v22;
        this->fields.itemEnt = (struct ItemEntity_o *)v22;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v23 = this->fields.giftEnt;
        if ( !v23 || !Instance )
          goto LABEL_27;
        v24 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v23->fields.objectId,
                (const MethodInfo_30FF780 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        v19 = (int)v24;
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)v24;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity;
        break;
      case 0xC:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v25 = this->fields.giftEnt;
        if ( !v25 || !Instance )
          goto LABEL_27;
        v26 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v25->fields.objectId,
                (const MethodInfo_30FF780 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        v19 = (int)v26;
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)v26;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    sub_1B76164(p_svtEnt, v19, v17, v18);
    v14 = this->fields.giftEnt;
    if ( !v14 )
LABEL_27:
      sub_1B7641C(Instance, v13);
LABEL_23:
    this->fields.rewardObjectId = v14->fields.objectId;
    num = v14->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}