void DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C32063 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_15921/*"[FF0000]"*/);
    byte_4C32063 = 1;
  }
  v3 = StringLiteral_15921/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15921/*"[FF0000]"*/;
  sub_1C32BC4(&this->fields.consumableItemTextColor, v3);
  PanelComponentBase___ctor((PanelComponentBase_o *)this, 0);
}


bool DiggingBlockComponent__CheckBlockInfoByIndex(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1C32E7C(this);
  return blockInfo->fields.x == x && blockInfo->fields.y == y;
}


bool DiggingBlockComponent__CheckBlockObjectByIndex(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  return this->fields.x == x && this->fields.y == y;
}


int32_t DiggingBlockComponent__GetConsumeNum(
        DiggingBlockComponent_o *this,
        CommonConsumeEntity_o *consumeEnt,
        const MethodInfo *method)
{
  int32_t num; // w19

  if ( !consumeEnt )
    sub_1C32E7C(this);
  num = consumeEnt->fields.num;
  return DiggingBlockComponent__GetHintConsumeNum(this, (const MethodInfo *)consumeEnt) + num;
}


System_String_o *DiggingBlockComponent__GetDiggingSeName(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  struct System_String_array *diggingSeList; // x8
  __int64 animationId; // x9
  int max_length; // w10
  System_String_o **v6; // x8

  v2 = this;
  if ( (byte_4C32060 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1C32C20(&StringLiteral_16851/*"ar173"*/);
    byte_4C32060 = 1;
  }
  diggingSeList = v2->fields.diggingSeList;
  if ( !diggingSeList )
    sub_1C32E7C(this);
  animationId = v2->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v6 = (System_String_o **)&StringLiteral_16851/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
      sub_1C32E84(this);
    v6 = &diggingSeList->m_Items[animationId];
  }
  return *v6;
}


int32_t DiggingBlockComponent__GetHintConsumeNum(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x9
  struct EventDiggingBlockEntity_o *v5; // x8
  struct System_Int32_array *consumeHintItemNums; // x8

  v2 = this;
  if ( (byte_4C3205F & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1C32C20(&Method_System_Array_IndexOf_int___);
    byte_4C3205F = 1;
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
                                      (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v5 = v2->fields.diggingBlockEntity;
  if ( !v5 || (consumeHintItemNums = v5->fields.consumeHintItemNums) == 0 )
LABEL_11:
    sub_1C32E7C(this);
  if ( (unsigned int)this >= LODWORD(consumeHintItemNums->max_length) )
    sub_1C32E84(this);
  return consumeHintItemNums->m_Items[(unsigned int)this];
}


int32_t DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  Il2CppObject *v6; // x20
  _DWORD *monitor; // x8

  if ( (byte_4C32062 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32062 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_3396838 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v6 = Instance;
  if ( !hintInfo
    || (Instance = (Il2CppObject *)System_Array__IndexOf_int_(
                                     (System_Int32_array *)Instance[2].monitor,
                                     hintInfo->fields.hintImageId,
                                     (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = HIDWORD(v6[2].klass);
    return (int)Instance;
  }
  monitor = v6[3].monitor;
  if ( !monitor )
LABEL_14:
    sub_1C32E7C(Instance);
  if ( (unsigned int)Instance >= monitor[6] )
    sub_1C32E84(Instance);
  LODWORD(Instance) = HIDWORD(v6[2].klass) + monitor[(unsigned int)Instance + 8];
  return (int)Instance;
}


void DiggingBlockComponent__Initialize(
        DiggingBlockComponent_o *this,
        DiggingInfo_BlockInfos_o *blockInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hintSprite; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  struct EventDiggingBlockEntity_o *v17; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3
  struct DiggingInfo_BlockInfos_o *v22; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3205A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_19181/*"event_digging_block_{0}"*/);
    byte_4C3205A = 1;
  }
  this->fields.hintInfo = 0;
  sub_1C32BC4(&this->fields.hintInfo, 0);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0);
  if ( !hintSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, 0, 0);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_1C32BC4(&this->fields.blockInfo, blockInfo);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)hintSprite,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = (struct EventDiggingBlockEntity_o *)Entity;
  hintSprite = (UnityEngine_Component_o *)sub_1C32BC4(&this->fields.diggingBlockEntity, Entity);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v9);
  v17 = this->fields.diggingBlockEntity;
  if ( !v17
    || (blockSprite = this->fields.blockSprite,
        imageId = v17->fields.imageId,
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v11, v12, v13, v14, v15, v16),
        v20 = System_String__Format((System_String_o *)StringLiteral_19181/*"event_digging_block_{0}"*/, v19, 0),
        DiggingBlockComponent__SetImage(this, blockSprite, v20, v21),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0),
        (v22 = this->fields.blockInfo) == 0)
    || !hintSprite )
  {
LABEL_13:
    sub_1C32E7C(hintSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v22->fields.isDigged != 1, 0);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0);
}


bool DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1C32E7C(this);
  return blockInfo->fields.isDigged == 1;
}


UnityEngine_GameObject_o *DiggingBlockComponent__SelectAnimObj(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  return this->fields.selectAnimObj;
}


void DiggingBlockComponent__SetActiveBlockUI(DiggingBlockComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Component_o *blockSprite; // x0

  blockSprite = (UnityEngine_Component_o *)this->fields.blockSprite;
  if ( !blockSprite )
    goto LABEL_10;
  blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0);
  if ( !blockSprite )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0);
  blockSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !blockSprite
    || (blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0),
        (blockSprite = (UnityEngine_Component_o *)this->fields.consumableItemIcon) == 0)
    || (blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0),
        (blockSprite = (UnityEngine_Component_o *)this->fields.consumableItemText) == 0)
    || (blockSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(blockSprite, 0)) == 0 )
  {
LABEL_10:
    sub_1C32E7C(blockSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0);
}


void DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  CommonConsumeMaster_o *commonConsumeMaster; // x0
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  Il2CppObject *MasterData_object; // x21
  System_String_o *consumableItemTextColor; // x20
  const MethodInfo *v10; // x1
  CommonConsumeEntity_o *v11; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v14; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *v16; // [xsp+10h] [xbp-40h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4C3205D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (DiggingBlockComponent_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3205D = 1;
  }
  v16 = 0;
  entity = 0;
  v15 = 0;
  commonConsumeMaster = DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v2->fields.diggingBlockEntity;
  if ( !diggingBlockEntity || !commonConsumeMaster )
    goto LABEL_26;
  commonConsumeMaster = (CommonConsumeMaster_o *)CommonConsumeMaster__TryGetEntity(
                                                   commonConsumeMaster,
                                                   &entity,
                                                   diggingBlockEntity->fields.commonConsumeId,
                                                   1,
                                                   0);
  if ( ((unsigned __int8)commonConsumeMaster & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_26;
  consumableItemIcon = v2->fields.consumableItemIcon;
  v6 = System_Int32__ToString((int)entity + 28, 0);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v6, v7);
  commonConsumeMaster = (CommonConsumeMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_26;
  v16 = 0;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)commonConsumeMaster,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
                                                   &v16,
                                                   (int64_t)commonConsumeMaster[2].fields.list[1].monitor,
                                                   entity->fields.objectId,
                                                   0);
  if ( ((unsigned __int8)commonConsumeMaster & 1) == 0 )
  {
    v11 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_22;
  }
  v11 = entity;
  if ( !entity || !v16 )
LABEL_26:
    sub_1C32E7C(commonConsumeMaster);
  if ( entity->fields.num > v16->fields.num )
LABEL_22:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v11->fields.num;
  v15 = DiggingBlockComponent__GetHintConsumeNum(v2, v10) + num;
  v14 = System_Int32__ToString((int32_t)&v15, 0);
  commonConsumeMaster = (CommonConsumeMaster_o *)System_String__Concat_63518544(consumableItemTextColor, v14, 0);
  if ( !consumableItemText )
    goto LABEL_26;
  UILabel__set_text(consumableItemText, (System_String_o *)commonConsumeMaster, 0);
}


void DiggingBlockComponent__SetHintInfo(
        DiggingBlockComponent_o *this,
        DiggingInfo_HintInfos_o *hintInfo,
        const MethodInfo *method)
{
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  UISprite_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3205C & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_19182/*"event_digging_layer_{0}"*/);
    byte_4C3205C = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_1C32BC4(&this->fields.hintInfo, hintInfo);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0),
        (blockInfo = this->fields.blockInfo) == 0)
    || !hintSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, blockInfo->fields.isDigged != 1, 0),
        !hintInfo) )
  {
    sub_1C32E7C(hintSprite);
  }
  v13 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId, v7, v8, v9, v10, v11, v12);
  v15 = System_String__Format((System_String_o *)StringLiteral_19182/*"event_digging_layer_{0}"*/, v14, 0);
  DiggingBlockComponent__SetImage(this, v13, v15, v16);
  DiggingBlockComponent__SetConsumableItemInfo(this, v17);
}


void DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_4C3205B & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C3205B = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40507600(eventId, sprite, name, 0);
}


void DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4C3205E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__);
    sub_1C32C20(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
    byte_4C3205E = 1;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  v5[1].klass = (Il2CppClass *)clickAction;
  sub_1C32BC4(&v5[1], clickAction);
  v5[1].monitor = this;
  sub_1C32BC4(&v5[1].monitor, this);
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, v5, Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, 0);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v7, 0);
}


void DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C32061 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_6236/*"EventPoint_"*/);
    byte_4C32061 = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0);
  v5 = System_String__Concat_63518544((System_String_o *)StringLiteral_6236/*"EventPoint_"*/, v4, 0);
  DiggingBlockComponent__SetImage(this, eventPointAnimSp, v5, v6);
}


void DiggingBlockComponent__SetPosOnArea(DiggingBlockComponent_o *this, int32_t x, int32_t y, const MethodInfo *method)
{
  this->fields.x = x;
  this->fields.y = y;
}


CommonConsumeMaster_o *DiggingBlockComponent__get_commonConsumeMaster(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C32059 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32059 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
}


void DiggingBlockComponent___c__DisplayClass23_0___ctor(
        DiggingBlockComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DiggingBlockComponent___c__DisplayClass23_0___SetPanelClickAction_b__0(
        DiggingBlockComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C32064 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_DiggingBlockComponent___);
    byte_4C32064 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}