void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FBC8A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15677/*"[FF0000]"*/, method);
    byte_40FBC8A = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_15677/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15677/*"[FF0000]"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.consumableItemTextColor, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B170D4();
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
    sub_B170D4();
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
  if ( (byte_40FBC87 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_B16FFC(&StringLiteral_16372/*"ar173"*/, method);
    byte_40FBC87 = 1;
  }
  diggingSeList = v3->fields.diggingSeList;
  if ( !diggingSeList )
    sub_B170D4();
  animationId = v3->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v7 = (System_String_o **)&StringLiteral_16372/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = &diggingSeList->m_Items[animationId];
  }
  return *v7;
}


int32_t __fastcall DiggingBlockComponent__GetHintConsumeNum(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x9
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventDiggingBlockEntity_o *v8; // x8
  struct System_Int32_array *consumeHintItemNums; // x8

  if ( (byte_40FBC86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    byte_40FBC86 = 1;
  }
  hintInfo = this->fields.hintInfo;
  if ( !hintInfo )
    return 0;
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_11;
  v5 = System_Array__IndexOf_int_(
         diggingBlockEntity->fields.consumeHintImageIds,
         hintInfo->fields.hintImageId,
         (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  if ( (v5 & 0x80000000) != 0 )
    return 0;
  v8 = this->fields.diggingBlockEntity;
  if ( !v8 || (consumeHintItemNums = v8->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_B170D4();
  if ( (unsigned int)v5 >= consumeHintItemNums->max_length )
  {
    sub_B17100(v5, v6, v7);
    sub_B170A0();
  }
  return consumeHintItemNums->m_Items[(int)v5 + 1];
}


int32_t __fastcall DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  WarEntity_o *Entity; // x0
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  WarEntity_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8

  if ( (byte_40FBC89 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBC89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !MasterData_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Entity )
    return (int)Entity;
  hintInfo = this->fields.hintInfo;
  v11 = Entity;
  if ( !hintInfo
    || (Entity = (WarEntity_o *)System_Array__IndexOf_int_(
                                  (System_Int32_array *)Entity->fields.longName,
                                  hintInfo->fields.hintImageId,
                                  (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Entity & 0x80000000) != 0) )
  {
    LODWORD(Entity) = HIDWORD(v11->fields.name);
    return (int)Entity;
  }
  v14 = *(_QWORD *)&v11->fields.parentWarId;
  if ( !v14 )
LABEL_14:
    sub_B170D4();
  if ( (unsigned int)Entity >= *(_DWORD *)(v14 + 24) )
  {
    sub_B17100(Entity, v12, v13);
    sub_B170A0();
  }
  LODWORD(Entity) = HIDWORD(v11->fields.name) + *(_DWORD *)(v14 + 4LL * (int)Entity + 32);
  return (int)Entity;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingBlockComponent__Initialize(
        DiggingBlockComponent_o *this,
        DiggingInfo_BlockInfos_o *blockInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *hintSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EventDiggingBlockEntity_o *Entity; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  struct EventDiggingBlockEntity_o *v34; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  const MethodInfo *v38; // x3
  UnityEngine_GameObject_o *v39; // x0
  struct DiggingInfo_BlockInfos_o *v40; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FBC81 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, blockInfo);
    sub_B16FFC(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&StringLiteral_18431/*"event_digging_block_{0}"*/, v14);
    byte_40FBC81 = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hintInfo,
    0LL,
    *(System_String_array ***)&eventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(hintSprite, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.blockInfo,
    (System_Int32_array **)blockInfo,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  Entity = (struct EventDiggingBlockEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 MasterData_WarQuestSelectionMaster,
                                                 blockInfo->fields.diggingBlockId,
                                                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.diggingBlockEntity,
    (System_Int32_array **)Entity,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v32);
  v34 = this->fields.diggingBlockEntity;
  if ( !v34
    || (blockSprite = this->fields.blockSprite,
        imageId = v34->fields.imageId,
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId),
        v37 = System_String__Format((System_String_o *)StringLiteral_18431/*"event_digging_block_{0}"*/, v36, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v37, v38),
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (v40 = this->fields.blockInfo) == 0LL)
    || !v39 )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v39, v40->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_B170D4();
  return blockInfo->fields.isDigged == 1;
}


UnityEngine_GameObject_o *__fastcall DiggingBlockComponent__SelectAnimObj(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.selectAnimObj;
}


void __fastcall DiggingBlockComponent__SetActiveBlockUI(
        DiggingBlockComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *blockSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *hintSprite; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *consumableItemIcon; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Component_o *consumableItemText; // x0
  UnityEngine_GameObject_o *v12; // x0

  blockSprite = (UnityEngine_Component_o *)this->fields.blockSprite;
  if ( !blockSprite )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(blockSprite, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (v8 = UnityEngine_Component__get_gameObject(hintSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v8, isActive, 0LL),
        (consumableItemIcon = (UnityEngine_Component_o *)this->fields.consumableItemIcon) == 0LL)
    || (v10 = UnityEngine_Component__get_gameObject(consumableItemIcon, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v10, isActive, 0LL),
        (consumableItemText = (UnityEngine_Component_o *)this->fields.consumableItemText) == 0LL)
    || (v12 = UnityEngine_Component__get_gameObject(consumableItemText, 0LL)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v12, isActive, 0LL);
}


void __fastcall DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonConsumeMaster_o *commonConsumeMaster; // x0
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_o *consumableItemTextColor; // x20
  int64_t UserId; // x0
  const MethodInfo *v15; // x1
  CommonConsumeEntity_o *v16; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  int v21; // [xsp+Ch] [xbp-34h] BYREF
  UserItemEntity_o *v22; // [xsp+10h] [xbp-30h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_40FBC84 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    this = (DiggingBlockComponent_o *)sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FBC84 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  v21 = 0;
  commonConsumeMaster = DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v2->fields.diggingBlockEntity;
  if ( !diggingBlockEntity || !commonConsumeMaster )
    goto LABEL_23;
  if ( !CommonConsumeMaster__TryGetEntity(
          commonConsumeMaster,
          &entity,
          diggingBlockEntity->fields.commonConsumeId,
          1,
          0LL) )
    return;
  if ( !entity )
    goto LABEL_23;
  consumableItemIcon = v2->fields.consumableItemIcon;
  v9 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v9, v10);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  v22 = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !entity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !UserItemMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v22, UserId, entity->fields.objectId, 0LL) )
  {
    v16 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_19;
  }
  v16 = entity;
  if ( !entity || !v22 )
LABEL_23:
    sub_B170D4();
  if ( entity->fields.num > v22->fields.num )
LABEL_19:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v16->fields.num;
  v21 = DiggingBlockComponent__GetHintConsumeNum(v2, v15) + num;
  v19 = System_Int32__ToString((int32_t)&v21, 0LL);
  v20 = System_String__Concat_43743732(consumableItemTextColor, v19, 0LL);
  if ( !consumableItemText )
    goto LABEL_23;
  UILabel__set_text(consumableItemText, v20, 0LL);
}


void __fastcall DiggingBlockComponent__SetHintInfo(
        DiggingBlockComponent_o *this,
        DiggingInfo_HintInfos_o *hintInfo,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  UnityEngine_Component_o *hintSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  UISprite_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBC83 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, hintInfo);
    sub_B16FFC(&StringLiteral_18432/*"event_digging_layer_{0}"*/, v10);
    byte_40FBC83 = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hintInfo,
    (System_Int32_array **)hintInfo,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (gameObject = UnityEngine_Component__get_gameObject(hintSprite, 0LL), (blockInfo = this->fields.blockInfo) == 0LL)
    || !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, blockInfo->fields.isDigged != 1, 0LL), !hintInfo) )
  {
    sub_B170D4();
  }
  v14 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId);
  v16 = System_String__Format((System_String_o *)StringLiteral_18432/*"event_digging_layer_{0}"*/, v15, 0LL);
  DiggingBlockComponent__SetImage(this, v14, v16, v17);
  DiggingBlockComponent__SetConsumableItemInfo(this, v18);
}


void __fastcall DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_40FBC82 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, sprite);
    byte_40FBC82 = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, sprite, name, 0LL);
}


void __fastcall DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40FBC85 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, clickAction);
    sub_B16FFC(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, v7);
    sub_B16FFC(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, v8);
    byte_40FBC85 = 1;
  }
  v9 = sub_B170CC(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, clickAction, method, v3, v4);
  DiggingBlockComponent___c__DisplayClass23_0___ctor((DiggingBlockComponent___c__DisplayClass23_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = clickAction;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)clickAction,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v9 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v26, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FBC88 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6162/*"EventPoint_"*/, method);
    byte_40FBC88 = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v5 = System_String__Concat_43743732((System_String_o *)StringLiteral_6162/*"EventPoint_"*/, v4, 0LL);
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
  WebViewManager_o *Instance; // x0

  if ( (byte_40FBC80 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FBC80 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  if ( (byte_40F8B5A & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_DiggingBlockComponent___, method);
    byte_40F8B5A = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickAction,
    (BlankEarth_QAARotateEarthResponse_o *)this->fields.__4__this,
    (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}