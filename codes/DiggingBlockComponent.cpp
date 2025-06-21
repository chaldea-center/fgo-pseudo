void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B16C95 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15789/*"[FF0000]"*/, method);
    byte_4B16C95 = 1;
  }
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15789/*"[FF0000]"*/;
  sub_1BCAF9C(&this->fields.consumableItemTextColor);
  PanelComponentBase___ctor((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__CheckBlockInfoByIndex(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1BCB254(this, x);
  return blockInfo->fields.x == x && blockInfo->fields.y == y;
}


bool __fastcall DiggingBlockComponent__CheckBlockObjectByIndex(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.x == x && this->fields.y == y;
}


int32_t __fastcall DiggingBlockComponent__GetConsumeNum(
        DiggingBlockComponent_o *this,
        CommonConsumeEntity_o *consumeEnt,
        const MethodInfo *method)
{
  int32_t num; // w19

  if ( !consumeEnt )
    sub_1BCB254(this, 0LL);
  num = consumeEnt->fields.num;
  return DiggingBlockComponent__GetHintConsumeNum(this, (const MethodInfo *)consumeEnt) + num;
}


System_String_o *__fastcall DiggingBlockComponent__GetDiggingSeName(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingBlockComponent_o *v3; // x19
  struct System_String_array *diggingSeList; // x8
  __int64 animationId; // x9
  int max_length; // w10
  System_String_o **v7; // x8

  v3 = this;
  if ( (byte_4B16C92 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1BCAFF8(&StringLiteral_16715/*"ar173"*/, method);
    byte_4B16C92 = 1;
  }
  diggingSeList = v3->fields.diggingSeList;
  if ( !diggingSeList )
    sub_1BCB254(this, method);
  animationId = v3->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v7 = (System_String_o **)&StringLiteral_16715/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
      sub_1BCB25C(this, method, v2);
    v7 = &diggingSeList->m_Items[animationId];
  }
  return *v7;
}


int32_t __fastcall DiggingBlockComponent__GetHintConsumeNum(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x9
  __int64 v5; // x2
  struct EventDiggingBlockEntity_o *v6; // x8
  struct System_Int32_array *consumeHintItemNums; // x8

  v2 = this;
  if ( (byte_4B16C91 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1BCAFF8(&Method_System_Array_IndexOf_int___, method);
    byte_4B16C91 = 1;
  }
  hintInfo = v2->fields.hintInfo;
  if ( !hintInfo )
    return 0;
  diggingBlockEntity = v2->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_11;
  this = (DiggingBlockComponent_o *)System_Array__IndexOf_int_(
                                      diggingBlockEntity->fields.consumeHintImageIds,
                                      hintInfo->fields.hintImageId,
                                      (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v6 = v2->fields.diggingBlockEntity;
  if ( !v6 || (consumeHintItemNums = v6->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_1BCB254(this, method);
  if ( (unsigned int)this >= consumeHintItemNums->max_length )
    sub_1BCB25C(this, method, v5);
  return consumeHintItemNums->m_Items[(unsigned int)this + 1];
}


int32_t __fastcall DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  _DWORD *monitor; // x8

  if ( (byte_4B16C94 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B16C94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v10 = Instance;
  if ( !hintInfo
    || (Instance = (Il2CppObject *)System_Array__IndexOf_int_(
                                     (System_Int32_array *)Instance[2].monitor,
                                     hintInfo->fields.hintImageId,
                                     (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = HIDWORD(v10[2].klass);
    return (int)Instance;
  }
  monitor = v10[3].monitor;
  if ( !monitor )
LABEL_14:
    sub_1BCB254(Instance, v7);
  if ( (unsigned int)Instance >= monitor[6] )
    sub_1BCB25C(Instance, v7, v11);
  LODWORD(Instance) = HIDWORD(v10[2].klass) + monitor[(unsigned int)Instance + 8];
  return (int)Instance;
}


void __fastcall DiggingBlockComponent__Initialize(
        DiggingBlockComponent_o *this,
        DiggingInfo_BlockInfos_o *blockInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct EventDiggingBlockEntity_o *v17; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3
  struct DiggingInfo_BlockInfos_o *v22; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C8C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, blockInfo);
    sub_1BCAFF8(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BCAFF8(&StringLiteral_19014/*"event_digging_block_{0}"*/, v10);
    byte_4B16C8C = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_1BCAF9C(&this->fields.hintInfo);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL);
  if ( !hintSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, 0, 0LL);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_1BCAF9C(&this->fields.blockInfo);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  this->fields.diggingBlockEntity = (struct EventDiggingBlockEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)hintSprite,
                                                                          blockInfo->fields.diggingBlockId,
                                                                          (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  hintSprite = (UnityEngine_Component_o *)sub_1BCAF9C(&this->fields.diggingBlockEntity);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v11);
  v17 = this->fields.diggingBlockEntity;
  if ( !v17
    || (blockSprite = this->fields.blockSprite,
        imageId = v17->fields.imageId,
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v14, v15, v16),
        v20 = System_String__Format((System_String_o *)StringLiteral_19014/*"event_digging_block_{0}"*/, v19, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v20, v21),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL),
        (v22 = this->fields.blockInfo) == 0LL)
    || !hintSprite )
  {
LABEL_13:
    sub_1BCB254(hintSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v22->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1BCB254(this, method);
  return blockInfo->fields.isDigged == 1;
}


UnityEngine_GameObject_o *__fastcall DiggingBlockComponent__SelectAnimObj(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.selectAnimObj;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingBlockComponent__SetActiveBlockUI(
        DiggingBlockComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *blockSprite; // x0

  blockSprite = (UnityEngine_Component_o *)this->fields.blockSprite;
  if ( !blockSprite )
    goto LABEL_10;
  blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0LL);
  if ( !blockSprite )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL);
  blockSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !blockSprite
    || (blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL),
        (blockSprite = (UnityEngine_Component_o *)this->fields.consumableItemIcon) == 0LL)
    || (blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL),
        (blockSprite = (UnityEngine_Component_o *)this->fields.consumableItemText) == 0LL)
    || (blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1BCB254(blockSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL);
}


void __fastcall DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonConsumeMaster_o *commonConsumeMaster; // x0
  const MethodInfo *v7; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  Il2CppObject *MasterData_object; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v14; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *v19; // [xsp+10h] [xbp-40h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4B16C8F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    this = (DiggingBlockComponent_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B16C8F = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  v18 = 0;
  commonConsumeMaster = DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v2->fields.diggingBlockEntity;
  if ( !diggingBlockEntity || !commonConsumeMaster )
    goto LABEL_26;
  commonConsumeMaster = (CommonConsumeMaster_o *)CommonConsumeMaster__TryGetEntity(
                                                   commonConsumeMaster,
                                                   &entity,
                                                   diggingBlockEntity->fields.commonConsumeId,
                                                   1,
                                                   0LL);
  if ( ((unsigned __int8)commonConsumeMaster & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_26;
  consumableItemIcon = v2->fields.consumableItemIcon;
  v10 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v10, v11);
  commonConsumeMaster = (CommonConsumeMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_26;
  v19 = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)commonConsumeMaster,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    byte_4B165D1 = 1;
  }
  commonConsumeMaster = (CommonConsumeMaster_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    commonConsumeMaster = (CommonConsumeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !entity || !MasterData_object )
    goto LABEL_26;
  commonConsumeMaster = (CommonConsumeMaster_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)MasterData_object,
                                                   &v19,
                                                   (int64_t)commonConsumeMaster[2].fields.list[1].monitor,
                                                   entity->fields.objectId,
                                                   0LL);
  if ( ((unsigned __int8)commonConsumeMaster & 1) == 0 )
  {
    v14 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_22;
  }
  v14 = entity;
  if ( !entity || !v19 )
LABEL_26:
    sub_1BCB254(commonConsumeMaster, v7);
  if ( entity->fields.num > v19->fields.num )
LABEL_22:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v14->fields.num;
  v18 = DiggingBlockComponent__GetHintConsumeNum(v2, v7) + num;
  v17 = System_Int32__ToString((int32_t)&v18, 0LL);
  commonConsumeMaster = (CommonConsumeMaster_o *)System_String__Concat_62450424(consumableItemTextColor, v17, 0LL);
  if ( !consumableItemText )
    goto LABEL_26;
  UILabel__set_text(consumableItemText, (System_String_o *)commonConsumeMaster, 0LL);
}


void __fastcall DiggingBlockComponent__SetHintInfo(
        DiggingBlockComponent_o *this,
        DiggingInfo_HintInfos_o *hintInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  UISprite_o *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C8E & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, hintInfo);
    sub_1BCAFF8(&StringLiteral_19015/*"event_digging_layer_{0}"*/, v5);
    byte_4B16C8E = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_1BCAF9C(&this->fields.hintInfo);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL),
        (blockInfo = this->fields.blockInfo) == 0LL)
    || !hintSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, blockInfo->fields.isDigged != 1, 0LL),
        !hintInfo) )
  {
    sub_1BCB254(hintSprite, v6);
  }
  v12 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId, v9, v10, v11);
  v14 = System_String__Format((System_String_o *)StringLiteral_19015/*"event_digging_layer_{0}"*/, v13, 0LL);
  DiggingBlockComponent__SetImage(this, v12, v14, v15);
  DiggingBlockComponent__SetConsumableItemInfo(this, v16);
}


void __fastcall DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_4B16C8D & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, sprite);
    byte_4B16C8D = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39794720(eventId, sprite, name, 0LL);
}


void __fastcall DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Action_o *v10; // x20

  if ( (byte_4B16C90 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, clickAction);
    sub_1BCAFF8(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, v5);
    sub_1BCAFF8(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, v6);
    byte_4B16C90 = 1;
  }
  v7 = (Il2CppObject *)sub_1BCB244(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  v7[1].klass = (Il2CppClass *)clickAction;
  sub_1BCAF9C(&v7[1]);
  v7[1].monitor = this;
  sub_1BCAF9C(&v7[1].monitor);
  v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v10, v7, Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, 0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v10, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16C93 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_6185/*"EventPoint_"*/, method);
    byte_4B16C93 = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v5 = System_String__Concat_62450424((System_String_o *)StringLiteral_6185/*"EventPoint_"*/, v4, 0LL);
  DiggingBlockComponent__SetImage(this, eventPointAnimSp, v5, v6);
}


void __fastcall DiggingBlockComponent__SetPosOnArea(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  this->fields.x = x;
  this->fields.y = y;
}


CommonConsumeMaster_o *__fastcall DiggingBlockComponent__get_commonConsumeMaster(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B16C8B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonConsumeMaster___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4B16C8B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


void __fastcall DiggingBlockComponent___c__DisplayClass23_0___ctor(
        DiggingBlockComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DiggingBlockComponent___c__DisplayClass23_0___SetPanelClickAction_b__0(
        DiggingBlockComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B16C96 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_DiggingBlockComponent___, method);
    byte_4B16C96 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}