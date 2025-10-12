void BoxGachaItemListViewItem___ctor(
        BoxGachaItemListViewItem_o *this,
        BoxGachaBaseEntity_o *data,
        int32_t eventId,
        int32_t boxGachaId,
        bool isDraw,
        const MethodInfo *method)
{
  void *Instance; // x0
  int32_t DrawNum; // w0
  int32_t maxNum; // w8
  struct System_String_o *detail; // x1
  int32_t type; // w8
  struct GiftEntity_o *GiftData; // x0
  struct GiftEntity_o **p_giftEnt; // x22
  const MethodInfo *v18; // x1
  struct GiftEntity_o *giftEnt; // x8
  struct System_String_o *OverwriteDetailText; // x0
  struct System_String_o *v21; // x1
  void *v22; // x20
  struct System_String_o *v23; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C31DBA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftAddMaster___);
    sub_1C32C20(&Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31DBA = 1;
  }
  entity = 0;
  ListViewItem___ctor((ListViewItem_o *)this, 0);
  this->fields.gachaBaseData = data;
  Instance = (void *)sub_1C32BC4(&this->fields.gachaBaseData, data);
  this->fields.currentEventId = eventId;
  this->fields.currentBoxGachaId = boxGachaId;
  if ( !data )
    goto LABEL_22;
  this->fields.isRare = data->fields.isRare;
  this->fields.isDraw = isDraw;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BoxGachaHistoryMaster___);
  if ( !Instance )
    goto LABEL_22;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         boxGachaId,
         (const MethodInfo_3396884 *)Method_DataMasterBase_BoxGachaHistoryMaster__BoxGachaHistoryEntity__int__TryGetEntity__) )
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
  detail = data->fields.detail;
  this->fields.detailTxt = detail;
  sub_1C32BC4(&this->fields.detailTxt, detail);
  type = data->fields.type;
  if ( type == 1 )
  {
    GiftData = BoxGachaBaseEntity__getGiftData(data, 0);
    this->fields.giftEnt = GiftData;
    p_giftEnt = &this->fields.giftEnt;
    Instance = (void *)sub_1C32BC4(&this->fields.giftEnt, GiftData);
    giftEnt = this->fields.giftEnt;
    if ( giftEnt )
    {
      if ( !giftEnt->fields._IsReplacedData_k__BackingField
        || (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0
        && (Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftAddMaster___)) != 0
        && (Instance = GiftAddMaster__GetValidPriorDataById((GiftAddMaster_o *)Instance, data->fields.targetId, 0)) != 0
        && (OverwriteDetailText = GiftAddEntity__GetOverwriteDetailText((GiftAddEntity_o *)Instance, 0),
            this->fields.detailTxt = OverwriteDetailText,
            Instance = (void *)sub_1C32BC4(&this->fields.detailTxt, OverwriteDetailText),
            (giftEnt = *p_giftEnt) != 0) )
      {
        this->fields.giftType = giftEnt->fields.type;
        BoxGachaItemListViewItem__setGiftData(this, v18);
        return;
      }
    }
LABEL_22:
    sub_1C32E7C(Instance);
  }
  if ( (type & 0xFFFFFFFE) == 2 )
  {
    Instance = BoxGachaBaseEntity__getRewardSetData(data, this->fields.currentEventId, 0);
    if ( !Instance )
      goto LABEL_22;
    v21 = (struct System_String_o *)*((_QWORD *)Instance + 4);
    v22 = Instance;
    this->fields.nameTxt = v21;
    sub_1C32BC4(&this->fields.nameTxt, v21);
    this->fields.targetImgId = *((_DWORD *)v22 + 7);
    v23 = (struct System_String_o *)*((_QWORD *)v22 + 5);
    this->fields.extraDetailTxt = v23;
    sub_1C32BC4(&this->fields.extraDetailTxt, v23);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return gachaBaseData->fields.type;
}


int32_t BoxGachaItemListViewItem__get_GetBannerId(BoxGachaItemListViewItem_o *this, const MethodInfo *method)
{
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8

  gachaBaseData = this->fields.gachaBaseData;
  if ( !gachaBaseData )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  struct BoxGachaBaseEntity_o *v6; // x8
  int32_t v7; // w20
  int32_t v8; // w22
  struct GiftEntity_o *v9; // x8
  struct GiftEntity_o *v10; // x8
  Il2CppObject *Entity; // x1
  void *p_svtEnt; // x0
  int32_t objectId; // w1
  struct GiftEntity_o *v14; // x8
  Il2CppObject *v15; // x0
  struct ItemEntity_o *itemEnt; // x8
  struct GiftEntity_o *v17; // x8
  struct GiftEntity_o *v18; // x8
  int32_t num; // w8
  System_String_o *countText; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C31DBB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_22550/*"overwriteFirstTimeDispItemId"*/);
    sub_1C32C20(&StringLiteral_22541/*"overwriteDispItemId"*/);
    sub_1C32C20(&StringLiteral_22549/*"overwriteFirstTimeDispItemGet"*/);
    byte_4C31DBB = 1;
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
                   (System_String_o *)StringLiteral_22541/*"overwriteDispItemId"*/,
                   0,
                   0);
      v6 = this->fields.gachaBaseData;
      if ( v6 )
      {
        v7 = IntValue;
        IntValue = EntityScriptUtil__GetIntValue(v6->fields.script, (System_String_o *)StringLiteral_22550/*"overwriteFirstTimeDispItemId"*/, 0, 0);
        if ( (int)IntValue >= 1 )
        {
          v8 = IntValue;
          IntValue = UnityEngine_PlayerPrefs__GetInt_71181884((System_String_o *)StringLiteral_22549/*"overwriteFirstTimeDispItemGet"*/, 0);
          if ( !(_DWORD)IntValue )
            v7 = v8;
        }
        v9 = this->fields.giftEnt;
        if ( v9 )
        {
          switch ( v9->fields.type )
          {
            case 1:
            case 6:
            case 7:
              IntValue = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !IntValue )
                break;
              IntValue = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)IntValue,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
              v10 = this->fields.giftEnt;
              if ( !v10 || !IntValue )
                break;
              Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                         v10->fields.objectId,
                         (const MethodInfo_3396838 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
              this->fields.svtEnt = (struct ServantEntity_o *)Entity;
              p_svtEnt = &this->fields.svtEnt;
              goto LABEL_26;
            case 2:
              IntValue = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !IntValue )
                break;
              IntValue = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)IntValue,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ItemMaster___);
              objectId = v7;
              if ( v7 > 0 )
                goto LABEL_19;
              v14 = this->fields.giftEnt;
              if ( !v14 )
                break;
              objectId = v14->fields.objectId;
LABEL_19:
              if ( !IntValue )
                break;
              v15 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                      objectId,
                      (const MethodInfo_3396838 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
              this->fields.itemEnt = (struct ItemEntity_o *)v15;
              IntValue = sub_1C32BC4(&this->fields.itemEnt, v15);
              itemEnt = this->fields.itemEnt;
              if ( !itemEnt )
                break;
              Entity = (Il2CppObject *)itemEnt->fields.name;
              p_svtEnt = &this->fields.nameTxt;
              this->fields.nameTxt = (struct System_String_o *)Entity;
LABEL_26:
              IntValue = sub_1C32BC4(p_svtEnt, Entity);
LABEL_27:
              v18 = this->fields.giftEnt;
              if ( v7 < 1 )
              {
                if ( v18 )
                {
LABEL_32:
                  v7 = v18->fields.objectId;
LABEL_33:
                  this->fields.targetObjectId = v7;
                  num = v18->fields.num;
                  if ( num <= 1 )
                    num = 0;
                  this->fields.rewardNum = num;
                  return;
                }
              }
              else if ( v18 )
              {
                if ( v18->fields.type == 2 )
                  goto LABEL_33;
                goto LABEL_32;
              }
              break;
            case 0xB:
              IntValue = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !IntValue )
                break;
              IntValue = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)IntValue,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
              v17 = this->fields.giftEnt;
              if ( !v17 || !IntValue )
                break;
              Entity = DataMasterBase_object__object__int___GetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)IntValue,
                         v17->fields.objectId,
                         (const MethodInfo_3396838 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
              this->fields.commandCodeEntity = (struct CommandCodeEntity_o *)Entity;
              p_svtEnt = &this->fields.commandCodeEntity;
              goto LABEL_26;
            default:
              goto LABEL_27;
          }
        }
      }
    }
    sub_1C32E7C(IntValue);
  }
}