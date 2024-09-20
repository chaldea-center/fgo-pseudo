void __fastcall EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  bool v8; // w24
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  int32_t type; // w8
  EventRewardSetEntity_o *RewardSetData; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_String_o *detail; // x1
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_String_o *v36; // x1
  struct EventRewardExtraEntity_o *v37; // x8

  v8 = isGet;
  if ( (byte_4A5F06C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6078/*"Error"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F06C = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isGetReward = v8;
  this->fields.eventRewardEnt = rewardData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventRewardEnt, (int32_t)rewardData, v9, v10);
  this->fields.giftEnt = giftEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.giftEnt, (int32_t)giftEntity, v11, v12);
  this->fields.rewardObjectId = 0;
  v13 = StringLiteral_6078/*"Error"*/;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6078/*"Error"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, v13, v14, v15);
  this->fields.needPoint = 0LL;
  this->fields.iconId = 0;
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardDetailTxt, v16, v17, v18);
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
      v26 = RewardSetData;
      this->fields.nameTxt = name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, (int32_t)name, v23, v24);
      this->fields.iconId = v26->fields.iconId;
      detail = v26->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardDetailTxt, (int32_t)detail, v27, v28);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0LL);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rewardExtraEnt, (int32_t)SetRewardData, v32, v33);
      if ( !this->fields.rewardExtraEnt )
        break;
      v36 = this->fields.rewardExtraEnt->fields.name;
      this->fields.nameTxt = v36;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, (int32_t)v36, v34, v35);
      v37 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v37->fields.iconId;
        detail = v37->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_1B8880C(v19, v20);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v20);
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
    sub_1B8880C(this, sort);
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
    sub_1B8880C(this, method);
  return eventRewardEnt->fields.bgImageId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetEventId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  return eventRewardEnt->fields.type;
}


System_String_o *__fastcall EventPointItemListViewItem__get_needPointTxt(
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
  Il2CppObject *v10; // x0
  int64_t needPoint; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4A5F06E & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (EventPointItemListViewItem_o *)sub_1B885B0(&StringLiteral_5649/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/);
    byte_4A5F06E = 1;
  }
  eventRewardEnt = v2->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1B8880C(this, method);
  eventId = eventRewardEnt->fields.eventId;
  v4 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_5649/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v4, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v5, 0LL);
  if ( System_String__op_Equality(v6, v5, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5649/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0LL);
  }
  needPoint = v2->fields.needPoint;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &needPoint, v7, v8, v9);
  return System_String__Format(v6, v10, 0LL);
}


void __fastcall EventPointItemListViewItem__setGiftData(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_o *giftEnt; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct GiftEntity_o *v6; // x8
  struct GiftEntity_o *v7; // x8
  Il2CppObject *Entity; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  ServantStatusBattleListViewItem_o *p_svtEnt; // x0
  struct GiftEntity_o *v13; // x8
  Il2CppObject *v14; // x0
  struct GiftEntity_o *v15; // x8
  Il2CppObject *v16; // x0
  struct GiftEntity_o *v17; // x8
  Il2CppObject *v18; // x0
  int32_t num; // w8

  if ( (byte_4A5F06D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F06D = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0LL);
    v6 = this->fields.giftEnt;
    if ( !v6 )
      goto LABEL_27;
    switch ( v6->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        v7 = this->fields.giftEnt;
        if ( !v7 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v7->fields.objectId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v11 = (int)Entity;
        this->fields.svtEnt = (struct ServantEntity_o *)Entity;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.svtEnt;
        break;
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
        v13 = this->fields.giftEnt;
        if ( !v13 || !Instance )
          goto LABEL_27;
        v14 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v13->fields.objectId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v11 = (int)v14;
        this->fields.itemEnt = (struct ItemEntity_o *)v14;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v15 = this->fields.giftEnt;
        if ( !v15 || !Instance )
          goto LABEL_27;
        v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v15->fields.objectId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        v11 = (int)v16;
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)v16;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity;
        break;
      case 0xC:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v17 = this->fields.giftEnt;
        if ( !v17 || !Instance )
          goto LABEL_27;
        v18 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v17->fields.objectId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        v11 = (int)v18;
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)v18;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    sub_1B88554(p_svtEnt, v11, v9, v10);
    v6 = this->fields.giftEnt;
    if ( !v6 )
LABEL_27:
      sub_1B8880C(Instance, v5);
LABEL_23:
    this->fields.rewardObjectId = v6->fields.objectId;
    num = v6->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}