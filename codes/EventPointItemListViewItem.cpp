void __fastcall EventPointItemListViewItem___ctor(
        EventPointItemListViewItem_o *this,
        EventRewardEntity_o *rewardData,
        GiftEntity_o *giftEntity,
        bool isGet,
        const MethodInfo *method)
{
  bool v8; // w24
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x0
  const MethodInfo *v38; // x1
  int32_t type; // w8
  EventRewardSetEntity_o *RewardSetData; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v48; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_String_o *detail; // x1
  struct EventRewardExtraEntity_o *SetRewardData; // x0
  struct EventRewardExtraEntity_o **p_rewardExtraEnt; // x23
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_String_o *v70; // x1
  struct EventRewardExtraEntity_o *v71; // x8

  v8 = isGet;
  if ( (byte_4B1A258 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6192/*"Error"*/, rewardData, giftEntity);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B1A258 = 1;
  }
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.isGetReward = v8;
  this->fields.eventRewardEnt = rewardData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventRewardEnt,
    (int64_t)rewardData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.giftEnt = giftEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.giftEnt, (int64_t)giftEntity, v17, v18, v19, v20, v21, v22);
  this->fields.rewardObjectId = 0;
  v23 = StringLiteral_6192/*"Error"*/;
  this->fields.nameTxt = (struct System_String_o *)StringLiteral_6192/*"Error"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nameTxt, v23, v24, v25, v26, v27, v28, v29);
  this->fields.needPoint = 0LL;
  this->fields.iconId = 0;
  v30 = StringLiteral_1/*""*/;
  this->fields.rewardDetailTxt = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.rewardDetailTxt, (int64_t)v30, v31, v32, v33, v34, v35, v36);
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
      v48 = RewardSetData;
      this->fields.nameTxt = name;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nameTxt, (int64_t)name, v41, v42, v43, v44, v45, v46);
      this->fields.iconId = v48->fields.iconId;
      detail = v48->fields.detail;
LABEL_13:
      this->fields.rewardDetailTxt = detail;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.rewardDetailTxt,
        (int64_t)detail,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      break;
    case 2:
      SetRewardData = EventRewardEntity__getSetRewardData(rewardData, 0LL);
      this->fields.rewardExtraEnt = SetRewardData;
      p_rewardExtraEnt = &this->fields.rewardExtraEnt;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.rewardExtraEnt,
        (int64_t)SetRewardData,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !this->fields.rewardExtraEnt )
        break;
      v70 = this->fields.rewardExtraEnt->fields.name;
      this->fields.nameTxt = v70;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nameTxt, (int64_t)v70, v64, v65, v66, v67, v68, v69);
      v71 = *p_rewardExtraEnt;
      if ( *p_rewardExtraEnt )
      {
        this->fields.iconId = v71->fields.iconId;
        detail = v71->fields.detail;
        goto LABEL_13;
      }
LABEL_15:
      sub_1BCAA3C(v37, v38);
    case 1:
      EventPointItemListViewItem__setGiftData(this, v38);
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
    sub_1BCAA3C(this, sort);
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
    sub_1BCAA3C(this, method);
  return eventRewardEnt->fields.bgImageId;
}


int32_t __fastcall EventPointItemListViewItem__get_GetEventId(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct EventRewardEntity_o *eventRewardEnt; // x8

  eventRewardEnt = this->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  return eventRewardEnt->fields.type;
}


System_String_o *__fastcall EventPointItemListViewItem__get_needPointTxt(
        EventPointItemListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventPointItemListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventRewardEntity_o *eventRewardEnt; // x8
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  System_String_o *v12; // x20
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  int64_t needPoint; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B1A25A & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    this = (EventPointItemListViewItem_o *)sub_1BCA7E0(&StringLiteral_5733/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v6, v7);
    byte_4B1A25A = 1;
  }
  eventRewardEnt = v3->fields.eventRewardEnt;
  if ( !eventRewardEnt )
    sub_1BCAA3C(this, method);
  eventId = eventRewardEnt->fields.eventId;
  v9 = System_Int32__ToString((int32_t)&eventId, 0LL);
  v11 = System_String__Concat_62401220((System_String_o *)StringLiteral_5733/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, v9, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  v12 = LocalizationManager__Get(v11, 0LL);
  if ( System_String__op_Equality(v12, v11, 0LL) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5733/*"EVENT_POINT_ITEM_REQUIRED_POINT"*/, 0LL);
  }
  needPoint = v3->fields.needPoint;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &needPoint);
  return System_String__Format(v12, v14, 0LL);
}


void __fastcall EventPointItemListViewItem__setGiftData(EventPointItemListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  GiftEntity_o *giftEnt; // x0
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  struct GiftEntity_o *v23; // x8
  struct GiftEntity_o *v24; // x8
  Il2CppObject *Entity; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_o *p_svtEnt; // x0
  struct GiftEntity_o *v33; // x8
  struct GiftEntity_o *v34; // x8
  struct GiftEntity_o *v35; // x8
  int32_t num; // w8

  if ( (byte_4B1A259 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B1A259 = 1;
  }
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &this->fields.numTxt, 0LL);
    v23 = this->fields.giftEnt;
    if ( !v23 )
      goto LABEL_27;
    switch ( v23->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
        v24 = this->fields.giftEnt;
        if ( !v24 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v24->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEnt = (struct ServantEntity_o *)Entity;
        p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.svtEnt;
        break;
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        v33 = this->fields.giftEnt;
        if ( !v33 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v33->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEnt = (struct ItemEntity_o *)Entity;
        p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v34 = this->fields.giftEnt;
        if ( !v34 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v34->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
        p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.commandCodeEntity;
        break;
      case 0xC:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
        v35 = this->fields.giftEnt;
        if ( !v35 || !Instance )
          goto LABEL_27;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v35->fields.objectId,
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
        this->fields.eventPointBuffEntity = (struct EventPointBuffEntity_o *)Entity;
        p_svtEnt = (PartyOrganizationUtility_o *)&this->fields.eventPointBuffEntity;
        break;
      default:
        goto LABEL_23;
    }
    sub_1BCA784(p_svtEnt, (int64_t)Entity, v26, v27, v28, v29, v30, v31);
    v23 = this->fields.giftEnt;
    if ( !v23 )
LABEL_27:
      sub_1BCAA3C(Instance, v22);
LABEL_23:
    this->fields.rewardObjectId = v23->fields.objectId;
    num = v23->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}