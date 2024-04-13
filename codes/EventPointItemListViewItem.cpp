// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_String_o **p_nameTxt; // x22
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  int32_t type; // w8
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct EventRewardExtraEntity_o *v63; // x8
  struct System_String_o *detail; // x1
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v73; // x23

  if ( (byte_42E90C8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6140/*"Error"*/, (_DWORD)rewardData, (_DWORD)giftEntity, isGet);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E90C8 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isGetReward = isGet;
  this->fields.eventRewardEnt = rewardData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventRewardEnt,
    (System_Int32_array **)rewardData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.giftEnt = giftEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.giftEnt,
    (System_Int32_array **)giftEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.rewardObjectId = 0;
  p_nameTxt = &this->fields.nameTxt;
  v25 = (System_Int32_array **)StringLiteral_6140/*"Error"*/;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6140/*"Error"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.nameTxt, v25, v26, v27, v28, v29, v30, v31);
  this->fields.needPoint = 0LL;
  this->fields.iconId = 0;
  v32 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rewardDetailTxt, v32, v33, v34, v35, v36, v37, v38);
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
      v73 = RewardSetData;
      this->fields.nameTxt = name;
      sub_B5D560((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)name, v66, v67, v68, v69, v70, v71);
      this->fields.iconId = v73->fields.iconId;
      detail = v73->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.rewardDetailTxt,
        (System_Int32_array **)detail,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0LL);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.rewardExtraEnt,
        (System_Int32_array **)SetRewardData,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      if ( !this->fields.rewardExtraEnt )
        break;
      v56 = (System_Int32_array **)this->fields.rewardExtraEnt->fields.name;
      *p_nameTxt = (struct System_String_o *)v56;
      sub_B5D560((BattleServantConfConponent_o *)p_nameTxt, v56, v50, v51, v52, v53, v54, v55);
      v63 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v63->fields.iconId;
        detail = v63->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_B5D69C(v39, v40);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v40);
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
    sub_B5D69C(this, sort);
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
    sub_B5D69C(this, method);
  return eventRewardEnt->fields.bgImageId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetEventId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  return eventRewardEnt->fields.type;
}


System_String_o *__fastcall EventPointItemListViewItem__get_needPointTxt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventPointItemListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventRewardEntity_o *eventRewardEnt; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x21
  System_String_o *v14; // x20
  Il2CppObject *v15; // x0
  int64_t needPoint; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E90CA & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    this = (EventPointItemListViewItem_o *)sub_B5D5C4(&StringLiteral_5733/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v8, v9, v10);
    byte_42E90CA = 1;
  }
  eventId = 0;
  eventRewardEnt = v4->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_B5D69C(this, method);
  eventId = eventRewardEnt->fields.eventId;
  v12 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v13 = System_String__Concat_44577788((System_String_o *)StringLiteral_5733/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v12, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get(v13, 0LL);
  if ( System_String__op_Equality(v14, v13, 0LL) )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5733/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0LL);
  }
  needPoint = v4->fields.needPoint;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &needPoint);
  return System_String__Format(v14, v15, 0LL);
}


void __fastcall EventPointItemListViewItem__setGiftData(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  GiftEntity_o *giftEnt; // x0
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  struct GiftEntity_o *v32; // x8
  struct GiftEntity_o *v33; // x8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *p_svtEnt; // x0
  struct GiftEntity_o *v42; // x8
  struct GiftEntity_o *v43; // x8
  struct GiftEntity_o *v44; // x8
  int32_t num; // w8

  if ( (byte_42E90C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E90C9 = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0LL);
    v32 = this->fields.giftEnt;
    if ( !v32 )
      goto LABEL_27;
    switch ( v32->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
        v33 = this->fields.giftEnt;
        if ( !v33 || !Instance )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v33->fields.objectId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEnt = Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.svtEnt;
        break;
      case 2:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        v43 = this->fields.giftEnt;
        if ( !v43 || !Instance )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v43->fields.objectId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEnt = (struct ItemEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v44 = this->fields.giftEnt;
        if ( !v44 || !Instance )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v44->fields.objectId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.commandCodeEntity;
        break;
      case 0xC:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v42 = this->fields.giftEnt;
        if ( !v42 || !Instance )
          goto LABEL_27;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v42->fields.objectId,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    sub_B5D560(p_svtEnt, (System_Int32_array **)Entity, v35, v36, v37, v38, v39, v40);
    v32 = this->fields.giftEnt;
    if ( !v32 )
LABEL_27:
      sub_B5D69C(Instance, v31);
LABEL_23:
    this->fields.rewardObjectId = v32->fields.objectId;
    num = v32->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}