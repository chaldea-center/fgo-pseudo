void __fastcall EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_o **p_nameTxt; // x22
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  int32_t type; // w8
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  struct EventRewardExtraEntity_o *v60; // x8
  struct System_String_o *detail; // x1
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v70; // x23

  if ( (byte_40FAC2C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6043/*"Error"*/, rewardData);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FAC2C = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isGetReward = isGet;
  this->fields.eventRewardEnt = rewardData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventRewardEnt,
    (System_Int32_array **)rewardData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.giftEnt = giftEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.giftEnt,
    (System_Int32_array **)giftEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.rewardObjectId = 0;
  p_nameTxt = &this->fields.nameTxt;
  v23 = (System_Int32_array **)StringLiteral_6043/*"Error"*/;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6043/*"Error"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.nameTxt, v23, v24, v25, v26, v27, v28, v29);
  this->fields.needPoint = 0LL;
  this->fields.iconId = 0;
  v30 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.rewardDetailTxt, v30, v31, v32, v33, v34, v35, v36);
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
      v70 = RewardSetData;
      this->fields.nameTxt = name;
      sub_B16F98((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)name, v63, v64, v65, v66, v67, v68);
      this->fields.iconId = v70->fields.iconId;
      detail = v70->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.rewardDetailTxt,
        (System_Int32_array **)detail,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0LL);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.rewardExtraEnt,
        (System_Int32_array **)SetRewardData,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
      if ( !this->fields.rewardExtraEnt )
        break;
      v53 = (System_Int32_array **)this->fields.rewardExtraEnt->fields.name;
      *p_nameTxt = (struct System_String_o *)v53;
      sub_B16F98((BattleServantConfConponent_o *)p_nameTxt, v53, v47, v48, v49, v50, v51, v52);
      v60 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v60->fields.iconId;
        detail = v60->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_B170D4();
    case 1:
      EventPointItemListViewItem__setGiftData(this, v37);
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
    sub_B170D4();
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
    sub_B170D4();
  return eventRewardEnt->fields.bgImageId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetEventId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_B170D4();
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
    sub_B170D4();
  return eventRewardEnt->fields.type;
}


System_String_o *__fastcall EventPointItemListViewItem__get_needPointTxt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventRewardEntity_o *eventRewardEnt; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x20
  Il2CppObject *v9; // x0
  int64_t needPoint; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FAC2E & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_5640/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v4);
    byte_40FAC2E = 1;
  }
  eventId = 0;
  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_B170D4();
  eventId = eventRewardEnt->fields.eventId;
  v6 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_5640/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v6, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(v7, 0LL);
  if ( System_String__op_Equality(v8, v7, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0LL);
  }
  needPoint = this->fields.needPoint;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &needPoint);
  return System_String__Format(v8, v9, 0LL);
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
  struct GiftEntity_o *v12; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct GiftEntity_o *v15; // x8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  BattleServantConfConponent_o *p_svtEnt; // x0
  WebViewManager_o *v24; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x0
  struct GiftEntity_o *v26; // x8
  WebViewManager_o *v27; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x0
  struct GiftEntity_o *v29; // x8
  WebViewManager_o *v30; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x0
  struct GiftEntity_o *v32; // x8
  int32_t num; // w8

  if ( (byte_40FAC2D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FAC2D = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0LL);
    v12 = this->fields.giftEnt;
    if ( !v12 )
      goto LABEL_27;
    switch ( v12->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        v15 = this->fields.giftEnt;
        if ( !v15 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             MasterData_WarQuestSelectionMaster,
                                             v15->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEnt = Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.svtEnt;
        break;
      case 2:
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v27 )
          goto LABEL_27;
        v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v27,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        v29 = this->fields.giftEnt;
        if ( !v29 || !v28 )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v28,
                                             v29->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEnt = (struct ItemEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        v30 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v30 )
          goto LABEL_27;
        v31 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v30,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v32 = this->fields.giftEnt;
        if ( !v32 || !v31 )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v31,
                                             v32->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.commandCodeEntity;
        break;
      case 0xC:
        v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v24 )
          goto LABEL_27;
        v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v24,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v26 = this->fields.giftEnt;
        if ( !v26 || !v25 )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v25,
                                             v26->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    sub_B16F98(p_svtEnt, (System_Int32_array **)Entity, v17, v18, v19, v20, v21, v22);
    v12 = this->fields.giftEnt;
    if ( !v12 )
LABEL_27:
      sub_B170D4();
LABEL_23:
    this->fields.rewardObjectId = v12->fields.objectId;
    num = v12->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}