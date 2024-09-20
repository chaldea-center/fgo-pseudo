void __fastcall BoxGachaItemListViewItem___ctor(
        BoxGachaItemListViewItem_o *this,
        BoxGachaBaseEntity_o *data,
        int32_t eventId,
        int32_t boxGachaId,
        bool isDraw,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  void *Instance; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t DrawNum; // w0
  int32_t maxNum; // w8
  struct System_String_o *detail; // x1
  int32_t type; // w8
  struct GiftEntity_o *GiftData; // x0
  struct GiftEntity_o **p_giftEnt; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  struct GiftEntity_o *giftEnt; // x8
  struct System_String_o *OverwriteDetailText; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_String_o *v31; // x1
  void *v32; // x20
  struct System_String_o *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5EF6B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1B885B0(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF6B = 1;
  }
  entity = 0LL;
  ListViewItem___ctor((ListViewItem_o *)this, 0LL);
  this->fields.gachaBaseData = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.gachaBaseData, (int32_t)data, v11, v12);
  this->fields.currentEventId = eventId;
  this->fields.currentBoxGachaId = boxGachaId;
  if ( !data )
    goto LABEL_22;
  this->fields.isRare = data->fields.isRare;
  this->fields.isDraw = isDraw;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         boxGachaId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.detailTxt, (int32_t)detail, v15, v16);
  type = data->fields.type;
  if ( type == 1 )
  {
    GiftData = BoxGachaBaseEntity__getGiftData(data, 0LL);
    this->fields.giftEnt = GiftData;
    p_giftEnt = &this->fields.giftEnt;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.giftEnt, (int32_t)GiftData, v23, v24);
    giftEnt = this->fields.giftEnt;
    if ( giftEnt )
    {
      if ( !giftEnt->fields._IsReplacedData_k__BackingField
        || (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
        && (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0LL
        && (Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, data->fields.targetId, 0LL)) != 0LL
        && (OverwriteDetailText = GiftAddEntity__GetOverwriteDetailText((GiftAddEntity_o *)Instance, 0LL),
            this->fields.detailTxt = OverwriteDetailText,
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.detailTxt,
              (int32_t)OverwriteDetailText,
              v27,
              v28),
            (giftEnt = *p_giftEnt) != 0LL) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v14);
        return;
      }
    }
LABEL_22:
    sub_1B8880C(Instance, v14);
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    Instance = BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, 0LL);
    if ( !Instance )
      goto LABEL_22;
    v31 = (struct System_String_o *)*((_QWORD *)Instance + 4);
    v32 = Instance;
    this->fields.nameTxt = v31;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nameTxt, (int32_t)v31, v29, v30);
    this->fields.targetImgId = *((_DWORD *)v32 + 7);
    v33 = (struct System_String_o *)*((_QWORD *)v32 + 5);
    this->fields.extraDetailTxt = v33;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.extraDetailTxt, (int32_t)v33, v34, v35);
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
    sub_1B8880C(this, sort);
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
    sub_1B8880C(this, method);
  return gachaBaseData->fields.type;
}


int32_t __fastcall BoxGachaItemListViewItem__get_GetBannerId(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5EF6C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF6C = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
        v7 = this->fields.giftEnt;
        if ( !v7 || !Instance )
          goto LABEL_23;
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
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
        v13 = this->fields.giftEnt;
        if ( !v13 || !Instance )
          goto LABEL_23;
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
          goto LABEL_23;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
        v15 = this->fields.giftEnt;
        if ( !v15 || !Instance )
          goto LABEL_23;
        v16 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                v15->fields.objectId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        v11 = (int)v16;
        this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)v16;
        p_svtEnt = (ServantStatusBattleListViewItem_o *)&this->fields.commandCodeEntity;
        break;
      default:
        goto LABEL_19;
    }
    sub_1B88554(p_svtEnt, v11, v9, v10);
    v6 = this->fields.giftEnt;
    if ( !v6 )
LABEL_23:
      sub_1B8880C(Instance, v5);
LABEL_19:
    this->fields.targetObjectId = v6->fields.objectId;
    num = v6->fields.num;
    if ( num <= 1 )
      num = 0;
    this->fields.rewardNum = num;
  }
}