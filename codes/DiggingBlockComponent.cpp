void DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596AA51 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16545/*"[FF0000]"*/);
    byte_596AA51 = 1;
  }
  v9 = StringLiteral_16545/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_16545/*"[FF0000]"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.consumableItemTextColor, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool DiggingBlockComponent__CheckBlockInfoByIndex(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_2213CDC(this, *(_QWORD *)&x);
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
    sub_2213CDC(this, 0);
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
  if ( (byte_596AA4E & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_2213A60(&StringLiteral_17563/*"ar173"*/);
    byte_596AA4E = 1;
  }
  diggingSeList = v2->fields.diggingSeList;
  if ( !diggingSeList )
    sub_2213CDC(this, method);
  animationId = v2->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v6 = (System_String_o **)&StringLiteral_17563/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
      sub_2213CE4(this);
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
  if ( (byte_596AA4D & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_2213A60(&Method_System_Array_IndexOf_int___);
    byte_596AA4D = 1;
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
                                      (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v5 = v2->fields.diggingBlockEntity;
  if ( !v5 || (consumeHintItemNums = v5->fields.consumeHintItemNums) == 0 )
LABEL_11:
    sub_2213CDC(this, method);
  if ( (unsigned int)this >= LODWORD(consumeHintItemNums->max_length) )
    sub_2213CE4(this);
  return consumeHintItemNums->m_Items[(unsigned int)this];
}


int32_t DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  Il2CppObject *v7; // x20
  _DWORD *monitor; // x8

  if ( (byte_596AA50 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v7 = Instance;
  if ( !hintInfo
    || (Instance = (Il2CppObject *)System_Array__IndexOf_int_(
                                     (System_Int32_array *)Instance[2].monitor,
                                     hintInfo->fields.hintImageId,
                                     (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = HIDWORD(v7[2].klass);
    return (int)Instance;
  }
  monitor = v7[3].monitor;
  if ( !monitor )
LABEL_14:
    sub_2213CDC(Instance, v4);
  if ( (unsigned int)Instance >= monitor[6] )
    sub_2213CE4(Instance);
  LODWORD(Instance) = HIDWORD(v7[2].klass) + monitor[(unsigned int)Instance + 8];
  return (int)Instance;
}


// local variable allocation has failed, the output may be wrong!
void DiggingBlockComponent__Initialize(
        DiggingBlockComponent_o *this,
        DiggingInfo_BlockInfos_o *blockInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *hintSprite; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *Entity; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  struct EventDiggingBlockEntity_o *v27; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  struct DiggingInfo_BlockInfos_o *v32; // x8
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596AA48 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_20076/*"event_digging_block_{0}"*/);
    byte_596AA48 = 1;
  }
  this->fields.hintInfo = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.hintInfo,
    0,
    *(System_String_o **)&eventId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0);
  if ( !hintSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, 0, 0);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.blockInfo,
    (int32_t)blockInfo,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)hintSprite,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = (struct EventDiggingBlockEntity_o *)Entity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.diggingBlockEntity,
    (int32_t)Entity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v11);
  v27 = this->fields.diggingBlockEntity;
  if ( !v27
    || (blockSprite = this->fields.blockSprite,
        imageId = v27->fields.imageId,
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &imageId),
        v30 = System_String__Format((System_String_o *)StringLiteral_20076/*"event_digging_block_{0}"*/, v29, 0),
        DiggingBlockComponent__SetImage(this, blockSprite, v30, v31),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0),
        (v32 = this->fields.blockInfo) == 0)
    || !hintSprite )
  {
LABEL_13:
    sub_2213CDC(hintSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v32->fields.isDigged != 1, 0);
  this->fields._OnClickPanel_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    0,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


bool DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_2213CDC(this, method);
  return blockInfo->fields.isDigged == 1;
}


UnityEngine_GameObject_o *DiggingBlockComponent__SelectAnimObj(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  return this->fields.selectAnimObj;
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(blockSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0);
}


void DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  CommonConsumeMaster_o *commonConsumeMaster; // x0
  const MethodInfo *v4; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x2
  Il2CppObject *MasterData_object; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v12; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v15; // x0
  int v16; // [xsp+Ch] [xbp-44h] BYREF
  UserItemEntity_o *v17; // [xsp+10h] [xbp-40h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_596AA4B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (DiggingBlockComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AA4B = 1;
  }
  v17 = 0;
  entity = 0;
  v16 = 0;
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
  v7 = System_Int32__ToString((int)entity + 28, 0);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v7, v8);
  commonConsumeMaster = (CommonConsumeMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)commonConsumeMaster,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  v17 = 0;
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v9);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  commonConsumeMaster = (CommonConsumeMaster_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v9);
    commonConsumeMaster = (CommonConsumeMaster_o *)NetworkManager_TypeInfo;
  }
  if ( !entity || !MasterData_object )
    goto LABEL_26;
  commonConsumeMaster = (CommonConsumeMaster_o *)UserItemMaster__TryGetEntity(
                                                   (UserItemMaster_o *)MasterData_object,
                                                   &v17,
                                                   (int64_t)commonConsumeMaster[2].fields.list[1].monitor,
                                                   entity->fields.objectId,
                                                   0);
  if ( ((unsigned __int8)commonConsumeMaster & 1) == 0 )
  {
    v12 = entity;
    if ( !entity )
      goto LABEL_26;
    goto LABEL_22;
  }
  v12 = entity;
  if ( !entity || !v17 )
LABEL_26:
    sub_2213CDC(commonConsumeMaster, v4);
  if ( entity->fields.num > v17->fields.num )
LABEL_22:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v12->fields.num;
  v16 = DiggingBlockComponent__GetHintConsumeNum(v2, v4) + num;
  v15 = System_Int32__ToString((int32_t)&v16, 0);
  commonConsumeMaster = (CommonConsumeMaster_o *)System_String__Concat_75651716(consumableItemTextColor, v15, 0);
  if ( !consumableItemText )
    goto LABEL_26;
  UILabel__set_text(consumableItemText, (System_String_o *)commonConsumeMaster, 0);
}


void DiggingBlockComponent__SetHintInfo(
        DiggingBlockComponent_o *this,
        DiggingInfo_HintInfos_o *hintInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  int32_t hintImageId; // w9
  UISprite_o *v14; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596AA4A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20077/*"event_digging_layer_{0}"*/);
    byte_596AA4A = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.hintInfo,
    (int32_t)hintInfo,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0),
        (blockInfo = this->fields.blockInfo) == 0)
    || !hintSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, blockInfo->fields.isDigged != 1, 0),
        !hintInfo) )
  {
    sub_2213CDC(hintSprite, v10);
  }
  hintImageId = hintInfo->fields.hintImageId;
  v14 = this->fields.hintSprite;
  v19 = hintImageId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
  v16 = System_String__Format((System_String_o *)StringLiteral_20077/*"event_digging_layer_{0}"*/, v15, 0);
  DiggingBlockComponent__SetImage(this, v14, v16, v17);
  DiggingBlockComponent__SetConsumableItemInfo(this, v18);
}


void DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_596AA49 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_596AA49 = 1;
  }
  eventId = this->fields.eventId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite, name);
  AtlasManager__SetEventUI_47569484(eventId, sprite, name, 0);
}


void DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596AA4C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__);
    sub_2213A60(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
    byte_596AA4C = 1;
  }
  v5 = sub_2213CCC(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = clickAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)clickAction, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0);
  this->fields._OnClickPanel_k__BackingField = v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnClickPanel_k__BackingField,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596AA4F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6501/*"EventPoint_"*/);
    byte_596AA4F = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0);
  v5 = System_String__Concat_75651716((System_String_o *)StringLiteral_6501/*"EventPoint_"*/, v4, 0);
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
  __int64 v3; // x1

  if ( (byte_596AA47 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596AA47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  if ( (byte_596AA52 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_DiggingBlockComponent___);
    byte_596AA52 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_36FFECC *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}