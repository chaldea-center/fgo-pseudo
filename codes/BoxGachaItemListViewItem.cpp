void __fastcall BoxGachaItemListViewItem___ctor(
        BoxGachaItemListViewItem_o *this,
        BoxGachaBaseEntity_o *data,
        int32_t eventId,
        int32_t boxGachaId,
        bool isDraw,
        const MethodInfo *method)
{
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  bool isRare; // w8
  MethodInfo *v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t DrawNum; // w0
  struct System_String_o *detail; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  int32_t type; // w8
  struct GiftEntity_o *GiftData; // x0
  struct GiftEntity_o **p_giftEnt; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct GiftEntity_o *giftEnt; // x8
  struct System_String_o *OverwriteDetailText; // x0
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
  struct System_String_o *lookup; // x1
  DataManager_o *v54; // x20
  struct System_String_o **p_nameTxt; // x19
  System_Int32_array **masterDataBytes; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B178C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_B52984(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B178C = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.gachaBaseData = data;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.gachaBaseData,
    (System_Int32_array **)data,
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
  this->fields.isRare = isRare;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         &entity,
         boxGachaId,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    DrawNum = BoxGachaHistoryEntity__getDrawNum((BoxGachaHistoryEntity_o *)entity, data->fields.no, v20);
  }
  else
  {
    DrawNum = 0;
  }
  this->fields.currenNum = data->fields.maxNum - DrawNum;
  this->fields.maxNum = data->fields.maxNum;
  detail = data->fields.detail;
  this->fields.detailTxt = detail;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.detailTxt,
    (System_Int32_array **)detail,
    (System_String_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  type = data->fields.type;
  if ( type == 1 )
  {
    GiftData = BoxGachaBaseEntity__getGiftData(data, v28);
    this->fields.giftEnt = GiftData;
    p_giftEnt = &this->fields.giftEnt;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.giftEnt,
      (System_Int32_array **)GiftData,
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
        || (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
        && (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0LL
        && (Instance = (DataManager_o *)GiftAddMaster__GetValidPriorDataById(
                                          (GiftAddMaster_o *)Instance,
                                          data->fields.targetId,
                                          0LL)) != 0LL
        && (OverwriteDetailText = GiftAddEntity__GetOverwriteDetailText((GiftAddEntity_o *)Instance, 0LL),
            this->fields.detailTxt = OverwriteDetailText,
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.detailTxt,
              (System_Int32_array **)OverwriteDetailText,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46),
            (giftEnt = *p_giftEnt) != 0LL) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v18);
        return;
      }
    }
LABEL_22:
    sub_B52A5C(Instance, v18);
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    Instance = (DataManager_o *)BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, v29);
    if ( !Instance )
      goto LABEL_22;
    lookup = (struct System_String_o *)Instance->fields.lookup;
    v54 = Instance;
    this->fields.nameTxt = lookup;
    p_nameTxt = &this->fields.nameTxt;
    sub_B52920((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)lookup, v47, v48, v49, v50, v51, v52);
    *((_DWORD *)p_nameTxt - 2) = HIDWORD(v54->fields.datalist);
    masterDataBytes = (System_Int32_array **)v54->fields.masterDataBytes;
    p_nameTxt[5] = (struct System_String_o *)masterDataBytes;
    sub_B52920((BattleServantConfConponent_o *)(p_nameTxt + 5), masterDataBytes, v57, v58, v59, v60, v61, v62);
  }
}


void __fastcall BoxGachaItemListViewItem__Finalize(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


bool __fastcall BoxGachaItemListViewItem__SetSortValue(
        BoxGachaItemListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x9
  bool result; // w0

  *(_WORD *)&this->fields.isTermination = 0;
  if ( !this
    || (gachaBaseData = this->fields.gachaBaseData, this->fields.sortValue0 = this->fields.currenNum > 0, !gachaBaseData) )
  {
    sub_B52A5C(this, sort);
  }
  result = 1;
  this->fields.sortValue1 = -gachaBaseData->fields.priority;
  return result;
}


CommandCodeEntity_o *__fastcall BoxGachaItemListViewItem__get_CommandCodeEntity(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.commandCodeEntity;
}


int32_t __fastcall BoxGachaItemListViewItem__get_CurrentNum(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currenNum;
}


System_String_o *__fastcall BoxGachaItemListViewItem__get_DetailTxt(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.detailTxt;
}


System_String_o *__fastcall BoxGachaItemListViewItem__get_ExtraDetailTXt(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.extraDetailTxt;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GachaBaseType(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_B52A5C(this, method);
  return gachaBaseData->fields.type;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetBannerId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_B52A5C(this, method);
  return gachaBaseData->fields.bannerId;
}


BoxGachaBaseEntity_o *__fastcall BoxGachaItemListViewItem__get_GetBaseData(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gachaBaseData;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetBoxGachaId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.currentBoxGachaId;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetEventId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetIconId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_B52A5C(this, method);
  return gachaBaseData->fields.iconId;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetRewardNum(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.rewardNum;
}


GiftEntity_o *__fastcall BoxGachaItemListViewItem__get_GiftEntity(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.giftEnt;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GiftType(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct GiftEntity_o *giftEnt; // x8

  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
    return giftEnt->fields.type;
  else
    return 0;
}


bool __fastcall BoxGachaItemListViewItem__get_IsDraw(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isDraw;
}


bool __fastcall BoxGachaItemListViewItem__get_IsRare(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isRare;
}


ItemEntity_o *__fastcall BoxGachaItemListViewItem__get_ItemEntity(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEnt;
}


int32_t __fastcall BoxGachaItemListViewItem__get_MaxNum(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.maxNum;
}


System_String_o *__fastcall BoxGachaItemListViewItem__get_NameTxt(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.nameTxt;
}


ServantEntity_o *__fastcall BoxGachaItemListViewItem__get_SvtEntity(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.svtEnt;
}


int32_t __fastcall BoxGachaItemListViewItem__get_TargetImgId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.targetImgId;
}


int32_t __fastcall BoxGachaItemListViewItem__get_TargetObjectId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.targetObjectId;
}


void __fastcall BoxGachaItemListViewItem__setGiftData(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  GiftEntity_o *giftEnt; // x0
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct GiftEntity_o *v6; // x8
  struct GiftEntity_o *v7; // x8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_svtEnt; // x0
  struct GiftEntity_o *v16; // x8
  struct GiftEntity_o *v17; // x8
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B178D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B178D = 1;
  }
  countText = 0LL;
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &countText, 0LL);
    v6 = this->fields.giftEnt;
    if ( !v6 )
      goto LABEL_23;
    switch ( v6->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
        v7 = this->fields.giftEnt;
        if ( !v7 || !Instance )
          goto LABEL_23;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v7->fields.objectId,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEnt = Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.svtEnt;
        break;
      case 2:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
        v16 = this->fields.giftEnt;
        if ( !v16 || !Instance )
          goto LABEL_23;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v16->fields.objectId,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEnt = (struct ItemEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v17 = this->fields.giftEnt;
        if ( !v17 || !Instance )
          goto LABEL_23;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                             v17->fields.objectId,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.commandCodeEntity;
        break;
      default:
        goto LABEL_19;
    }
    sub_B52920(p_svtEnt, (System_Int32_array **)Entity, v9, v10, v11, v12, v13, v14);
    v6 = this->fields.giftEnt;
    if ( !v6 )
LABEL_23:
      sub_B52A5C(Instance, v5);
LABEL_19:
    this->fields.targetObjectId = v6->fields.objectId;
    num = v6->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}