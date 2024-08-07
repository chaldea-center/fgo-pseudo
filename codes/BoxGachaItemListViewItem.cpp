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
  int32_t v14; // w2
  int32_t v15; // w3
  void *Instance; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t DrawNum; // w0
  int32_t maxNum; // w8
  struct System_String_o *detail; // x1
  int32_t type; // w8
  struct GiftEntity_o *GiftData; // x0
  struct GiftEntity_o **p_giftEnt; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  struct GiftEntity_o *giftEnt; // x8
  struct System_String_o *OverwriteDetailText; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_String_o *v34; // x1
  void *v35; // x20
  struct System_String_o *v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A028A2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___, data);
    sub_1B64A00(&Method_DataManager_GetMasterData_GiftAddMaster___, v11);
    sub_1B64A00(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A028A2 = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.gachaBaseData = data;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.gachaBaseData, (int32_t)data, v14, v15);
  this->fields.currentEventId = eventId;
  this->fields.currentBoxGachaId = boxGachaId;
  if ( !data )
    goto LABEL_22;
  this->fields.isRare = data->fields.isRare;
  this->fields.isDraw = isDraw;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         boxGachaId,
         (const MethodInfo_30D67EC *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
  {
    Instance = entity;
    if ( !entity )
      goto LABEL_22;
    DrawNum = BoxGachaHistoryEntity__getDrawNum((BoxGachaHistoryEntity_o *)entity, data->fields.no, 0LL);
  }
  else
  {
    DrawNum = 0;
  }
  maxNum = data->fields.maxNum;
  this->fields.currenNum = maxNum - DrawNum;
  this->fields.maxNum = maxNum;
  detail = data->fields.detail;
  this->fields.detailTxt = detail;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.detailTxt, (int32_t)detail, v18, v19);
  type = data->fields.type;
  if ( type == 1 )
  {
    GiftData = BoxGachaBaseEntity__getGiftData(data, 0LL);
    this->fields.giftEnt = GiftData;
    p_giftEnt = &this->fields.giftEnt;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.giftEnt, (int32_t)GiftData, v26, v27);
    giftEnt = this->fields.giftEnt;
    if ( giftEnt )
    {
      if ( !giftEnt->fields._IsReplacedData_k__BackingField
        || (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
        && (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0LL
        && (Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, data->fields.targetId, 0LL)) != 0LL
        && (OverwriteDetailText = GiftAddEntity__GetOverwriteDetailText((GiftAddEntity_o *)Instance, 0LL),
            this->fields.detailTxt = OverwriteDetailText,
            sub_1B649A4(
              (ServantStatusBattleListViewItem_o *)&this->fields.detailTxt,
              (int32_t)OverwriteDetailText,
              v30,
              v31),
            (giftEnt = *p_giftEnt) != 0LL) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v17);
        return;
      }
    }
LABEL_22:
    sub_1B64C5C(Instance, v17);
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    Instance = BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, 0LL);
    if ( !Instance )
      goto LABEL_22;
    v34 = (struct System_String_o *)*((_QWORD *)Instance + 4);
    v35 = Instance;
    this->fields.nameTxt = v34;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, (int32_t)v34, v32, v33);
    this->fields.targetImgId = *((_DWORD *)v35 + 7);
    v36 = (struct System_String_o *)*((_QWORD *)v35 + 5);
    this->fields.extraDetailTxt = v36;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.extraDetailTxt, (int32_t)v36, v37, v38);
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
  int32_t currenNum; // w10
  struct BoxGachaBaseEntity_o *gachaBaseData; // x9
  bool result; // w0

  currenNum = this->fields.currenNum;
  gachaBaseData = this->fields.gachaBaseData;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = currenNum > 0;
  if ( !gachaBaseData )
    sub_1B64C5C(this, sort);
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
    sub_1B64C5C(this, method);
  return gachaBaseData->fields.type;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetBannerId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_1B64C5C(this, method);
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
    sub_1B64C5C(this, method);
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct GiftEntity_o *v12; // x8
  struct GiftEntity_o *v13; // x8
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  ServantStatusBattleListViewItem_o *p_svtEnt; // x0
  struct GiftEntity_o *v19; // x8
  Il2CppObject *v20; // x0
  struct GiftEntity_o *v21; // x8
  Il2CppObject *v22; // x0
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A028A3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_CommandCodeMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v4);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_1B64A00(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A028A3 = 1;
  }
  countText = 0LL;
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &countText, 0LL);
    v12 = this->fields.giftEnt;
    if ( !v12 )
      goto LABEL_23;
    switch ( v12->fields.type )
    {
      case 1:
      case 6:
      case 7:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
        v13 = this->fields.giftEnt;
        if ( !v13 || !Instance )
          goto LABEL_23;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v13->fields.objectId,
                   (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        v17 = (int)Entity;
        this->fields.svtEnt = (struct ServantEntity_o *)Entity;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.svtEnt;
        break;
      case 2:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
        v19 = this->fields.giftEnt;
        if ( !v19 || !Instance )
          goto LABEL_23;
        v20 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v19->fields.objectId,
                (const MethodInfo_30D6798 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        v17 = (int)v20;
        this->fields.itemEnt = (struct ItemEntity_o *)v20;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.itemEnt;
        break;
      case 0xB:
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v21 = this->fields.giftEnt;
        if ( !v21 || !Instance )
          goto LABEL_23;
        v22 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v21->fields.objectId,
                (const MethodInfo_30D6798 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        v17 = (int)v22;
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)v22;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity;
        break;
      default:
        goto LABEL_19;
    }
    sub_1B649A4(p_svtEnt, v17, v15, v16);
    v12 = this->fields.giftEnt;
    if ( !v12 )
LABEL_23:
      sub_1B64C5C(Instance, v11);
LABEL_19:
    this->fields.targetObjectId = v12->fields.objectId;
    num = v12->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}