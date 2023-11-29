void __fastcall BoxGachaItemListViewItem___ctor(
        BoxGachaItemListViewItem_o *this,
        BoxGachaBaseEntity_o *data,
        int32_t eventId,
        int32_t boxGachaId,
        bool isDraw,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  bool isRare; // w8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  MethodInfo *v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t DrawNum; // w0
  struct System_String_o *detail; // x1
  int32_t type; // w8
  struct GiftEntity_o *GiftData; // x0
  struct GiftEntity_o **p_giftEnt; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  struct GiftEntity_o *giftEnt; // x8
  WebViewManager_o *v42; // x0
  GiftAddMaster_o *v43; // x0
  GiftAddEntity_o *ValidPriorDataById; // x0
  struct System_String_o *OverwriteDetailText; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  EventRewardSetEntity_o *RewardSetData; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct System_String_o *name; // x1
  EventRewardSetEntity_o *v60; // x20
  struct System_String_o **p_nameTxt; // x19
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB44B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftAddMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40FB44B = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.gachaBaseData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gachaBaseData,
    (System_Int32_array **)data,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.currentEventId = eventId;
  this->fields.currentBoxGachaId = boxGachaId;
  if ( !data )
    goto LABEL_22;
  isRare = data->fields.isRare;
  this->fields.isDraw = isDraw;
  this->fields.isRare = isRare;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         boxGachaId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_22;
    DrawNum = BoxGachaHistoryEntity__getDrawNum((BoxGachaHistoryEntity_o *)entity, data->fields.no, v23);
  }
  else
  {
    DrawNum = 0;
  }
  this->fields.currenNum = data->fields.maxNum - DrawNum;
  this->fields.maxNum = data->fields.maxNum;
  detail = data->fields.detail;
  this->fields.detailTxt = detail;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.detailTxt,
    (System_Int32_array **)detail,
    (System_String_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  type = data->fields.type;
  if ( type == 1 )
  {
    GiftData = BoxGachaBaseEntity__getGiftData(data, 0LL);
    this->fields.giftEnt = GiftData;
    p_giftEnt = &this->fields.giftEnt;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.giftEnt,
      (System_Int32_array **)GiftData,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    giftEnt = this->fields.giftEnt;
    if ( giftEnt )
    {
      if ( !giftEnt->fields._IsReplacedData_k__BackingField
        || (v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
        && (v43 = (GiftAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v42,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0LL
        && (ValidPriorDataById = GiftAddMaster__GetValidPriorDataById(v43, data->fields.targetId, 0LL)) != 0LL
        && (OverwriteDetailText = GiftAddEntity__GetOverwriteDetailText(ValidPriorDataById, 0LL),
            this->fields.detailTxt = OverwriteDetailText,
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.detailTxt,
              (System_Int32_array **)OverwriteDetailText,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51),
            (giftEnt = *p_giftEnt) != 0LL) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v40);
        return;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    RewardSetData = BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, 0LL);
    if ( !RewardSetData )
      goto LABEL_22;
    name = RewardSetData->fields.name;
    v60 = RewardSetData;
    this->fields.nameTxt = name;
    p_nameTxt = &this->fields.nameTxt;
    sub_B16F98((BattleServantConfConponent_o *)p_nameTxt, (System_Int32_array **)name, v53, v54, v55, v56, v57, v58);
    *((_DWORD *)p_nameTxt - 2) = v60->fields.iconId;
    v62 = (System_Int32_array **)v60->fields.detail;
    p_nameTxt[5] = (struct System_String_o *)v62;
    sub_B16F98((BattleServantConfConponent_o *)(p_nameTxt + 5), v62, v63, v64, v65, v66, v67, v68);
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
    sub_B170D4();
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
    sub_B170D4();
  return gachaBaseData->fields.type;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetBannerId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  GiftEntity_o *giftEnt; // x0
  struct GiftEntity_o *v10; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct GiftEntity_o *v13; // x8
  struct ServantEntity_o *Entity; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_svtEnt; // x0
  WebViewManager_o *v22; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x0
  struct GiftEntity_o *v24; // x8
  WebViewManager_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x0
  struct GiftEntity_o *v27; // x8
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB44C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB44C = 1;
  }
  countText = 0LL;
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &countText, 0LL);
    v10 = this->fields.giftEnt;
    if ( !v10 )
      goto LABEL_23;
    switch ( v10->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
        v13 = this->fields.giftEnt;
        if ( !v13 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_23;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             MasterData_WarQuestSelectionMaster,
                                             v13->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        this->fields.svtEnt = Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.svtEnt;
        break;
      case 2:
        v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v22 )
          goto LABEL_23;
        v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v22,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        v24 = this->fields.giftEnt;
        if ( !v24 || !v23 )
          goto LABEL_23;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v23,
                                             v24->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        this->fields.itemEnt = (struct ItemEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v25 )
          goto LABEL_23;
        v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v25,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v27 = this->fields.giftEnt;
        if ( !v27 || !v26 )
          goto LABEL_23;
        Entity = (struct ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v26,
                                             v27->fields.objectId,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
        p_svtEnt = (BattleServantConfConponent_o *)&this->fields.commandCodeEntity;
        break;
      default:
        goto LABEL_19;
    }
    sub_B16F98(p_svtEnt, (System_Int32_array **)Entity, v15, v16, v17, v18, v19, v20);
    v10 = this->fields.giftEnt;
    if ( !v10 )
LABEL_23:
      sub_B170D4();
LABEL_19:
    this->fields.targetObjectId = v10->fields.objectId;
    num = v10->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}