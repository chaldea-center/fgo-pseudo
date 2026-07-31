void BoxGachaItemListViewItem___ctor(
        BoxGachaItemListViewItem_o *this,
        BoxGachaBaseEntity_o *data,
        int32_t eventId,
        int32_t boxGachaId,
        bool isDraw,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  void *Instance; // x0
  const MethodInfo *v18; // x1
  bool isRare; // w8
  const MethodInfo_476E8C0 *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t DrawNum; // w0
  int32_t maxNum; // w8
  struct System_String_o *detail; // x1
  int32_t type; // w8
  struct GiftEntity_o *GiftData; // x0
  struct GiftEntity_o **p_giftEnt; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct GiftEntity_o *giftEnt; // x8
  struct System_String_o *OverwriteDetailText; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_String_o *v53; // x1
  void *v54; // x20
  struct System_String_o *v55; // x1
  int32_t v56; // w8
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59325C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_21FFC50(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59325C2 = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.gachaBaseData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaBaseData,
    (int32_t)data,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.currentEventId = eventId;
  this->fields.currentBoxGachaId = boxGachaId;
  if ( !data )
    goto LABEL_22;
  isRare = data->fields.isRare;
  this->fields.isDraw = isDraw;
  v20 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.isRare = isRare;
  Instance = SingletonMonoBehaviour_object___get_Instance(v20);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         boxGachaId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_22;
    DrawNum = BoxGachaHistoryEntity__getDrawNum((BoxGachaHistoryEntity_o *)entity, data->fields.no, 0);
  }
  else
  {
    DrawNum = 0;
  }
  maxNum = data->fields.maxNum;
  detail = data->fields.detail;
  this->fields.detailTxt = detail;
  this->fields.currenNum = maxNum - DrawNum;
  this->fields.maxNum = maxNum;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.detailTxt,
    (int32_t)detail,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  type = data->fields.type;
  if ( type == 1 )
  {
    GiftData = BoxGachaBaseEntity__getGiftData(data, 0);
    this->fields.giftEnt = GiftData;
    p_giftEnt = &this->fields.giftEnt;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.giftEnt,
      (int32_t)GiftData,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    giftEnt = this->fields.giftEnt;
    if ( giftEnt )
    {
      if ( !giftEnt->fields._IsReplacedData_k__BackingField
        || (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0
        && (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0
        && (Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, data->fields.targetId, 0)) != 0
        && (OverwriteDetailText = GiftAddEntity__GetOverwriteDetailText((GiftAddEntity_o *)Instance, 0),
            this->fields.detailTxt = OverwriteDetailText,
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.detailTxt,
              (int32_t)OverwriteDetailText,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46),
            (giftEnt = *p_giftEnt) != 0) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v18);
        return;
      }
    }
LABEL_22:
    sub_21FFECC(Instance, v18);
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    Instance = BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, 0);
    if ( !Instance )
      goto LABEL_22;
    v53 = (struct System_String_o *)*((_QWORD *)Instance + 4);
    v54 = Instance;
    this->fields.nameTxt = v53;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt, (int32_t)v53, v47, v48, v49, v50, v51, v52);
    v55 = (struct System_String_o *)*((_QWORD *)v54 + 5);
    v56 = *((_DWORD *)v54 + 7);
    this->fields.extraDetailTxt = v55;
    this->fields.targetImgId = v56;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.extraDetailTxt,
      (int32_t)v55,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
}


void BoxGachaItemListViewItem__Finalize(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


bool BoxGachaItemListViewItem__SetSortValue(
        BoxGachaItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t currenNum; // w9
  bool v4; // cc
  struct BoxGachaBaseEntity_o *gachaBaseData; // x9
  int64_t v6; // x10
  bool result; // w0

  currenNum = this->fields.currenNum;
  *(_WORD *)&this->fields.isTermination = 0;
  v4 = currenNum <= 0;
  gachaBaseData = this->fields.gachaBaseData;
  v6 = !v4;
  this->fields.sortValue0 = v6;
  if ( !gachaBaseData )
    sub_21FFECC(this, sort);
  result = 1;
  this->fields.sortValue1 = -gachaBaseData->fields.priority;
  return result;
}


CommandCodeEntity_o *BoxGachaItemListViewItem__get_CommandCodeEntity(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


int32_t BoxGachaItemListViewItem__get_CurrentNum(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currenNum;
}


System_String_o *BoxGachaItemListViewItem__get_DetailTxt(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.detailTxt;
}


System_String_o *BoxGachaItemListViewItem__get_ExtraDetailTXt(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.extraDetailTxt;
}


int32_t BoxGachaItemListViewItem__get_GachaBaseType(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_21FFECC(this, method);
  return gachaBaseData->fields.type;
}


int32_t BoxGachaItemListViewItem__get_GetBannerId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_21FFECC(this, method);
  return gachaBaseData->fields.bannerId;
}


int32_t BoxGachaItemListViewItem__get_GetBoxGachaId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentBoxGachaId;
}


int32_t BoxGachaItemListViewItem__get_GetEventId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t BoxGachaItemListViewItem__get_GetIconId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_21FFECC(this, method);
  return gachaBaseData->fields.iconId;
}


int32_t BoxGachaItemListViewItem__get_GetRewardNum(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.rewardNum;
}


GiftEntity_o *BoxGachaItemListViewItem__get_GiftEntity(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.giftEnt;
}


int32_t BoxGachaItemListViewItem__get_GiftType(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.type;
  else
    return 0;
}


bool BoxGachaItemListViewItem__get_IsDraw(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDraw;
}


bool BoxGachaItemListViewItem__get_IsRare(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRare;
}


ItemEntity_o *BoxGachaItemListViewItem__get_ItemEntity(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
}


int32_t BoxGachaItemListViewItem__get_MaxNum(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxNum;
}


System_String_o *BoxGachaItemListViewItem__get_NameTxt(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.nameTxt;
}


ServantEntity_o *BoxGachaItemListViewItem__get_SvtEntity(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t BoxGachaItemListViewItem__get_TargetImgId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.targetImgId;
}


int32_t BoxGachaItemListViewItem__get_TargetObjectId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.targetObjectId;
}


void BoxGachaItemListViewItem__setGiftData(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_o *giftEnt; // x0
  Il2CppObject *IntValue; // x0
  __int64 objectId; // x1
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  struct BoxGachaBaseEntity_o *v7; // x8
  int32_t v8; // w20
  int32_t v9; // w21
  struct GiftEntity_o *v10; // x8
  int type; // w9
  struct GiftEntity_o *v12; // x8
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_String_o *name; // x1
  MissionNaviTransitionBoardItem_o *p_nameTxt; // x0
  struct GiftEntity_o *v22; // x8
  Il2CppObject *Entity; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ItemEntity_o *itemEnt; // x8
  struct GiftEntity_o *v31; // x8
  Il2CppObject *v32; // x0
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59325C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23648/*"overwriteFirstTimeDispItemId"*/);
    sub_21FFC50(&StringLiteral_23639/*"overwriteDispItemId"*/);
    sub_21FFC50(&StringLiteral_23647/*"overwriteFirstTimeDispItemGet"*/);
    byte_59325C3 = 1;
  }
  giftEnt = this->fields.giftEnt;
  countText = 0;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &countText, 0);
    gachaBaseData = this->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_41;
    IntValue = (Il2CppObject *)EntityScriptUtil__GetIntValue(
                                 gachaBaseData->fields.script,
                                 (System_String_o *)StringLiteral_23639/*"overwriteDispItemId"*/,
                                 0,
                                 0);
    v7 = this->fields.gachaBaseData;
    if ( !v7 )
      goto LABEL_41;
    v8 = (int)IntValue;
    IntValue = (Il2CppObject *)EntityScriptUtil__GetIntValue(
                                 v7->fields.script,
                                 (System_String_o *)StringLiteral_23648/*"overwriteFirstTimeDispItemId"*/,
                                 0,
                                 0);
    if ( (int)IntValue >= 1 )
    {
      v9 = (int)IntValue;
      IntValue = (Il2CppObject *)UnityEngine_PlayerPrefs__GetInt_83183516((System_String_o *)StringLiteral_23647/*"overwriteFirstTimeDispItemGet"*/, 0);
      if ( !(_DWORD)IntValue )
        v8 = v9;
    }
    v10 = this->fields.giftEnt;
    if ( !v10 )
      goto LABEL_41;
    type = v10->fields.type;
    if ( type <= 5 )
    {
      if ( type != 1 )
      {
        if ( type != 2 )
          goto LABEL_31;
        IntValue = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !IntValue )
          goto LABEL_41;
        IntValue = DataManager__GetMasterData_object_(
                     (DataManager_o *)IntValue,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        objectId = (unsigned int)v8;
        if ( v8 <= 0 )
        {
          v22 = this->fields.giftEnt;
          if ( !v22 )
            goto LABEL_41;
          objectId = (unsigned int)v22->fields.objectId;
        }
        if ( !IntValue
          || (Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                         objectId,
                         (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
              this->fields.itemEnt = (struct ItemEntity_o *)Entity,
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt,
                (int32_t)Entity,
                v24,
                v25,
                v26,
                v27,
                v28,
                v29),
              (itemEnt = this->fields.itemEnt) == 0) )
        {
LABEL_41:
          sub_21FFECC(IntValue, objectId);
        }
        name = itemEnt->fields.name;
        p_nameTxt = (MissionNaviTransitionBoardItem_o *)&this->fields.nameTxt;
        this->fields.nameTxt = name;
LABEL_30:
        sub_21FFBF4(p_nameTxt, (int32_t)name, v14, v15, v16, v17, v18, v19);
        v10 = this->fields.giftEnt;
LABEL_31:
        if ( v8 < 1 )
        {
          if ( v10 )
          {
LABEL_36:
            v8 = v10->fields.objectId;
LABEL_37:
            num = v10->fields.num;
            this->fields.targetObjectId = v8;
            if ( num <= 1 )
              num = 0;
            this->fields.rewardNum = num;
            return;
          }
        }
        else if ( v10 )
        {
          if ( v10->fields.type == 2 )
            goto LABEL_37;
          goto LABEL_36;
        }
        goto LABEL_41;
      }
    }
    else if ( (unsigned int)(type - 6) >= 2 )
    {
      if ( type != 11 )
        goto LABEL_31;
      IntValue = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IntValue )
        goto LABEL_41;
      IntValue = DataManager__GetMasterData_object_(
                   (DataManager_o *)IntValue,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      v12 = this->fields.giftEnt;
      if ( !v12 || !IntValue )
        goto LABEL_41;
      v13 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
              v12->fields.objectId,
              (const MethodInfo_3EDD388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
      LODWORD(name) = (_DWORD)v13;
      this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)v13;
      p_nameTxt = (MissionNaviTransitionBoardItem_o *)&this->fields.commandCodeEntity;
      goto LABEL_30;
    }
    IntValue = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !IntValue )
      goto LABEL_41;
    IntValue = DataManager__GetMasterData_object_(
                 (DataManager_o *)IntValue,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
    v31 = this->fields.giftEnt;
    if ( !v31 || !IntValue )
      goto LABEL_41;
    v32 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
            v31->fields.objectId,
            (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    LODWORD(name) = (_DWORD)v32;
    this->fields.svtEnt = (struct ServantEntity_o *)v32;
    p_nameTxt = (MissionNaviTransitionBoardItem_o *)&this->fields.svtEnt;
    goto LABEL_30;
  }
}