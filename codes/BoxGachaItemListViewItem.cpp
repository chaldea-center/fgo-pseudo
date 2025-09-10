void BoxGachaItemListViewItem___ctor(
        BoxGachaItemListViewItem_o *this,
        BoxGachaBaseEntity_o *data,
        int32_t eventId,
        int32_t boxGachaId,
        bool isDraw,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v12; // x1
  int32_t DrawNum; // w0
  int32_t maxNum; // w8
  int32_t type; // w8
  struct GiftEntity_o **p_giftEnt; // x22
  struct GiftEntity_o *giftEnt; // x8
  void *v18; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C216EB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1C2D490(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C216EB = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.gachaBaseData = data;
  Instance = (void *)sub_1C2D434(&this->fields.gachaBaseData);
  this->fields.currentEventId = eventId;
  this->fields.currentBoxGachaId = boxGachaId;
  if ( !data )
    goto LABEL_22;
  this->fields.isRare = data->fields.isRare;
  this->fields.isDraw = isDraw;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         boxGachaId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
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
  this->fields.currenNum = maxNum - DrawNum;
  this->fields.maxNum = maxNum;
  this->fields.detailTxt = data->fields.detail;
  sub_1C2D434(&this->fields.detailTxt);
  type = data->fields.type;
  if ( type == 1 )
  {
    this->fields.giftEnt = BoxGachaBaseEntity__getGiftData(data, 0);
    p_giftEnt = &this->fields.giftEnt;
    Instance = (void *)sub_1C2D434(&this->fields.giftEnt);
    giftEnt = this->fields.giftEnt;
    if ( giftEnt )
    {
      if ( !giftEnt->fields._IsReplacedData_k__BackingField
        || (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0
        && (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0
        && (Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, data->fields.targetId, 0)) != 0
        && (this->fields.detailTxt = GiftAddEntity__GetOverwriteDetailText((GiftAddEntity_o *)Instance, 0),
            Instance = (void *)sub_1C2D434(&this->fields.detailTxt),
            (giftEnt = *p_giftEnt) != 0) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v12);
        return;
      }
    }
LABEL_22:
    sub_1C2D6EC(Instance, v12);
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    Instance = BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, 0);
    if ( !Instance )
      goto LABEL_22;
    v18 = Instance;
    this->fields.nameTxt = (struct System_String_o *)*((_QWORD *)Instance + 4);
    sub_1C2D434(&this->fields.nameTxt);
    this->fields.targetImgId = *((_DWORD *)v18 + 7);
    this->fields.extraDetailTxt = (struct System_String_o *)*((_QWORD *)v18 + 5);
    sub_1C2D434(&this->fields.extraDetailTxt);
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
  int32_t currenNum; // w10
  struct BoxGachaBaseEntity_o *gachaBaseData; // x9
  bool result; // w0

  currenNum = this->fields.currenNum;
  gachaBaseData = this->fields.gachaBaseData;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = currenNum > 0;
  if ( !gachaBaseData )
    sub_1C2D6EC(this, sort);
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
    sub_1C2D6EC(this, method);
  return gachaBaseData->fields.type;
}


int32_t BoxGachaItemListViewItem__get_GetBannerId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_1C2D6EC(this, method);
  return gachaBaseData->fields.bannerId;
}


BoxGachaBaseEntity_o *BoxGachaItemListViewItem__get_GetBaseData(
        BoxGachaItemListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gachaBaseData;
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
    sub_1C2D6EC(this, method);
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
  __int64 IntValue; // x0
  __int64 objectId; // x1
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  struct BoxGachaBaseEntity_o *v7; // x8
  int32_t v8; // w20
  int32_t v9; // w22
  struct GiftEntity_o *v10; // x8
  struct GiftEntity_o *v11; // x8
  void *p_svtEnt; // x0
  struct GiftEntity_o *v13; // x8
  struct ItemEntity_o *itemEnt; // x8
  struct GiftEntity_o *v15; // x8
  struct GiftEntity_o *v16; // x8
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C216EC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_22533/*"overwriteFirstTimeDispItemId"*/);
    sub_1C2D490(&StringLiteral_22524/*"overwriteDispItemId"*/);
    sub_1C2D490(&StringLiteral_22532/*"overwriteFirstTimeDispItemGet"*/);
    byte_4C216EC = 1;
  }
  countText = 0;
  giftEnt = this->fields.giftEnt;
  if ( giftEnt )
  {
    GiftEntity__GetInfo(giftEnt, &this->fields.nameTxt, &countText, 0);
    gachaBaseData = this->fields.gachaBaseData;
    if ( gachaBaseData )
    {
      IntValue = EntityScriptUtil__GetIntValue(
                   gachaBaseData->fields.script,
                   (System_String_o *)StringLiteral_22524/*"overwriteDispItemId"*/,
                   0,
                   0);
      v7 = this->fields.gachaBaseData;
      if ( v7 )
      {
        v8 = IntValue;
        IntValue = EntityScriptUtil__GetIntValue(v7->fields.script, (System_String_o *)StringLiteral_22533/*"overwriteFirstTimeDispItemId"*/, 0, 0);
        if ( (int)IntValue >= 1 )
        {
          v9 = IntValue;
          IntValue = UnityEngine_PlayerPrefs__GetInt_71121948((System_String_o *)StringLiteral_22532/*"overwriteFirstTimeDispItemGet"*/, 0);
          if ( !(_DWORD)IntValue )
            v8 = v9;
        }
        v10 = this->fields.giftEnt;
        if ( v10 )
        {
          switch ( v10->fields.type )
          {
            case 1:
            case 6:
            case 7:
              IntValue = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !IntValue )
                break;
              IntValue = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)IntValue,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
              v11 = this->fields.giftEnt;
              if ( !v11 || !IntValue )
                break;
              this->fields.svtEnt = (struct ServantEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                                                                v11->fields.objectId,
                                                                (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              p_svtEnt = &this->fields.svtEnt;
              goto LABEL_26;
            case 2:
              IntValue = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !IntValue )
                break;
              IntValue = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)IntValue,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
              objectId = (unsigned int)v8;
              if ( v8 > 0 )
                goto LABEL_19;
              v13 = this->fields.giftEnt;
              if ( !v13 )
                break;
              objectId = (unsigned int)v13->fields.objectId;
LABEL_19:
              if ( !IntValue )
                break;
              this->fields.itemEnt = (struct ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                                                              objectId,
                                                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              IntValue = sub_1C2D434(&this->fields.itemEnt);
              itemEnt = this->fields.itemEnt;
              if ( !itemEnt )
                break;
              p_svtEnt = &this->fields.nameTxt;
              this->fields.nameTxt = itemEnt->fields.name;
LABEL_26:
              IntValue = sub_1C2D434(p_svtEnt);
LABEL_27:
              v16 = this->fields.giftEnt;
              if ( v8 < 1 )
              {
                if ( v16 )
                {
LABEL_32:
                  v8 = v16->fields.objectId;
LABEL_33:
                  this->fields.targetObjectId = v8;
                  num = v16->fields.num;
                  if ( num <= 1 )
                    num = 0;
                  this->fields.rewardNum = num;
                  return;
                }
              }
              else if ( v16 )
              {
                if ( v16->fields.type == 2 )
                  goto LABEL_33;
                goto LABEL_32;
              }
              break;
            case 0xB:
              IntValue = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !IntValue )
                break;
              IntValue = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)IntValue,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
              v15 = this->fields.giftEnt;
              if ( !v15 || !IntValue )
                break;
              this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                                                                               v15->fields.objectId,
                                                                               (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
              p_svtEnt = &this->fields.commandCodeEntity;
              goto LABEL_26;
            default:
              goto LABEL_27;
          }
        }
      }
    }
    sub_1C2D6EC(IntValue, objectId);
  }
}