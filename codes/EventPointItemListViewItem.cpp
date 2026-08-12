void EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  bool v8; // w24
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x0
  const MethodInfo *v36; // x1
  int32_t type; // w8
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_String_o *v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct EventRewardExtraEntity_o *v59; // x8
  struct System_String_o *detail; // x1
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v69; // x23

  v8 = isGet;
  if ( (byte_596A7C9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6374/*"Error"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A7C9 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.isGetReward = v8;
  this->fields.eventRewardEnt = rewardData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventRewardEnt,
    (int32_t)rewardData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.giftEnt = giftEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.giftEnt,
    (int32_t)giftEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (struct System_String_o *)StringLiteral_6374/*"Error"*/;
  this->fields.rewardObjectId = 0;
  this->fields.nameTxt = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (int)StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.needPoint = 0;
  this->fields.iconId = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rewardDetailTxt, v28, v29, v30, v31, v32, v33, v34);
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
      v69 = RewardSetData;
      this->fields.nameTxt = name;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt,
        (int32_t)name,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      detail = v69->fields.detail;
      this->fields.iconId = v69->fields.iconId;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rewardDetailTxt,
        (int32_t)detail,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rewardExtraEnt,
        (int32_t)SetRewardData,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      if ( !this->fields.rewardExtraEnt )
        break;
      v52 = this->fields.rewardExtraEnt->fields.name;
      this->fields.nameTxt = v52;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt, (int32_t)v52, v46, v47, v48, v49, v50, v51);
      v59 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        detail = v59->fields.detail;
        this->fields.iconId = v59->fields.iconId;
        goto LABEL_13;
      }
LABEL_15:
      sub_2213CDC(v35, v36);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v36);
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

  eventRewardEnt = this->fields.eventRewardEnt;
  *(_WORD *)&this->fields.isTermination = 0;
  if ( !eventRewardEnt )
    sub_2213CDC(this, sort);
  this->fields.sortValue1 = eventRewardEnt->fields.point;
  return 1;
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
    sub_2213CDC(this, method);
  return eventRewardEnt->fields.bgImageId;
}


int32_t EventPointItemListViewItem__get_GetEventId(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
  return eventRewardEnt->fields.type;
}


System_String_o *EventPointItemListViewItem__get_needPointTxt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v2; // x19
  struct EventRewardEntity_o *eventRewardEnt; // x8
  System_String_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x21
  System_String_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  int64_t needPoint; // [xsp+0h] [xbp-40h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_596A7CB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (EventPointItemListViewItem_o *)sub_2213A60(&StringLiteral_5875/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/);
    byte_596A7CB = 1;
  }
  eventRewardEnt = v2->fields.eventRewardEnt;
  eventId = 0;
  if ( !eventRewardEnt )
    sub_2213CDC(this, method);
  eventId = eventRewardEnt->fields.eventId;
  v4 = System_Int32__ToString((int32_t)&eventId, 0);
  v7 = System_String__Concat_75651716((System_String_o *)StringLiteral_5875/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v4, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v8 = LocalizationManager__Get(v7, 0);
  if ( System_String__op_Equality(v8, v7, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5875/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0);
  }
  needPoint = v2->fields.needPoint;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &needPoint);
  return System_String__Format(v8, v11, 0);
}


void EventPointItemListViewItem__setGiftData(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_o *giftEnt; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct GiftEntity_o *v6; // x8
  int type; // w9
  struct GiftEntity_o *v8; // x8
  Il2CppObject *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  MissionNaviTransitionBoardItem_o *p_itemEnt; // x0
  struct GiftEntity_o *v18; // x8
  Il2CppObject *Entity; // x0
  struct GiftEntity_o *v20; // x8
  Il2CppObject *v21; // x0
  struct GiftEntity_o *v22; // x8
  Il2CppObject *v23; // x0
  int num; // w9
  int32_t v25; // w8

  if ( (byte_596A7CA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7CA = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0);
    v6 = this->fields.giftEnt;
    if ( !v6 )
      goto LABEL_33;
    type = v6->fields.type;
    if ( type <= 5 )
    {
      if ( type != 1 )
      {
        if ( type == 2 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_33;
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
          v18 = this->fields.giftEnt;
          if ( !v18 || !Instance )
            goto LABEL_33;
          Entity = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v18->fields.objectId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          v16 = (int)Entity;
          this->fields.itemEnt = (struct ItemEntity_o *)Entity;
          p_itemEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt;
LABEL_27:
          sub_2213A04(p_itemEnt, v16, v10, v11, v12, v13, v14, v15);
          v6 = this->fields.giftEnt;
          if ( v6 )
            goto LABEL_28;
LABEL_33:
          sub_2213CDC(Instance, v5);
        }
LABEL_28:
        num = v6->fields.num;
        this->fields.rewardObjectId = v6->fields.objectId;
        if ( num <= 1 )
          v25 = 0;
        else
          v25 = num;
        this->fields.rewardNum = v25;
        return;
      }
    }
    else if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type == 11 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_33;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v22 = this->fields.giftEnt;
        if ( !v22 || !Instance )
          goto LABEL_33;
        v23 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v22->fields.objectId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        v16 = (int)v23;
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)v23;
        p_itemEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity;
        goto LABEL_27;
      }
      if ( type == 12 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_33;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v8 = this->fields.giftEnt;
        if ( !v8 || !Instance )
          goto LABEL_33;
        v9 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v8->fields.objectId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        v16 = (int)v9;
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)v9;
        p_itemEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.eventPointBuffEntity;
        goto LABEL_27;
      }
      goto LABEL_28;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    v20 = this->fields.giftEnt;
    if ( !v20 || !Instance )
      goto LABEL_33;
    v21 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v20->fields.objectId,
            (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v16 = (int)v21;
    this->fields.svtEnt = (struct ServantEntity_o *)v21;
    p_itemEnt = (MissionNaviTransitionBoardItem_o *)&this->fields.svtEnt;
    goto LABEL_27;
  }
}