void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42EA967 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15930/*"[FF0000]"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EA967 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_15930/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15930/*"[FF0000]"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.consumableItemTextColor, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
  num = consumeEnt->fields.num;
  return DiggingBlockComponent__GetHintConsumeNum(this, (const MethodInfo *)consumeEnt) + num;
}


System_String_o *__fastcall DiggingBlockComponent__GetDiggingSeName(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DiggingBlockComponent_o *v4; // x19
  struct System_String_array *diggingSeList; // x8
  __int64 animationId; // x9
  int max_length; // w10
  System_String_o **v8; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42EA964 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_B5D5C4(&StringLiteral_16634/*"ar173"*/, (_DWORD)method, v2, v3);
    byte_42EA964 = 1;
  }
  diggingSeList = v4->fields.diggingSeList;
  if ( !diggingSeList )
    sub_B5D69C(this, method);
  animationId = v4->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v8 = (System_String_o **)&StringLiteral_16634/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
    {
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    v8 = &diggingSeList->m_Items[animationId];
  }
  return *v8;
}


int32_t __fastcall DiggingBlockComponent__GetHintConsumeNum(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DiggingBlockComponent_o *v4; // x19
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x9
  struct EventDiggingBlockEntity_o *v7; // x8
  struct System_Int32_array *consumeHintItemNums; // x8
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42EA963 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    byte_42EA963 = 1;
  }
  hintInfo = v4->fields.hintInfo;
  if ( !hintInfo )
    return 0;
  diggingBlockEntity = v4->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_11;
  this = (DiggingBlockComponent_o *)System_Array__IndexOf_int_(
                                      diggingBlockEntity->fields.consumeHintImageIds,
                                      hintInfo->fields.hintImageId,
                                      (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v7 = v4->fields.diggingBlockEntity;
  if ( !v7 || (consumeHintItemNums = v7->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_B5D69C(this, method);
  if ( (unsigned int)this >= consumeHintItemNums->max_length )
  {
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
  return consumeHintItemNums->m_Items[(int)this + 1];
}


int32_t __fastcall DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  _DWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x0

  if ( (byte_42EA966 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA966 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v18 = Instance;
  if ( !hintInfo
    || (Instance = (void *)System_Array__IndexOf_int_(
                             *((System_Int32_array **)Instance + 5),
                             hintInfo->fields.hintImageId,
                             (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = v18[9];
    return (int)Instance;
  }
  v19 = *((_QWORD *)v18 + 7);
  if ( !v19 )
LABEL_14:
    sub_B5D69C(Instance, v15);
  if ( (unsigned int)Instance >= *(_DWORD *)(v19 + 24) )
  {
    v20 = sub_B5D6C8(Instance);
    sub_B5D668(v20, 0LL);
  }
  LODWORD(Instance) = v18[9] + *(_DWORD *)(v19 + 4LL * (int)Instance + 32);
  return (int)Instance;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  const MethodInfo *v23; // x1
  UnityEngine_Component_o *hintSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct EventDiggingBlockEntity_o *Entity; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  struct EventDiggingBlockEntity_o *v39; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  struct DiggingInfo_BlockInfos_o *v44; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA95E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, (_DWORD)blockInfo, eventId, method);
    sub_B5D5C4(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_18729/*"event_digging_block_{0}"*/, v20, v21, v22);
    byte_42EA95E = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_B5D560(
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
  hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL);
  if ( !hintSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, 0, 0LL);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.blockInfo,
    (System_Int32_array **)blockInfo,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = (struct EventDiggingBlockEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)hintSprite,
                                                 blockInfo->fields.diggingBlockId,
                                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.diggingBlockEntity,
    (System_Int32_array **)Entity,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v23);
  v39 = this->fields.diggingBlockEntity;
  if ( !v39
    || (blockSprite = this->fields.blockSprite,
        imageId = v39->fields.imageId,
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId),
        v42 = System_String__Format((System_String_o *)StringLiteral_18729/*"event_digging_block_{0}"*/, v41, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v42, v43),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL),
        (v44 = this->fields.blockInfo) == 0LL)
    || !hintSprite )
  {
LABEL_13:
    sub_B5D69C(hintSprite, v23);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v44->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_B5D69C(this, method);
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
    sub_B5D69C(blockSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL);
}


void __fastcall DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DiggingBlockComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int64_t commonConsumeMaster; // x0
  const MethodInfo *v15; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v22; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v25; // x0
  int v26; // [xsp+Ch] [xbp-34h] BYREF
  UserItemEntity_o *v27; // [xsp+10h] [xbp-30h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42EA961 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    this = (DiggingBlockComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42EA961 = 1;
  }
  v27 = 0LL;
  entity = 0LL;
  v26 = 0;
  commonConsumeMaster = (int64_t)DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v4->fields.diggingBlockEntity;
  if ( !diggingBlockEntity || !commonConsumeMaster )
    goto LABEL_23;
  commonConsumeMaster = CommonConsumeMaster__TryGetEntity(
                          (CommonConsumeMaster_o *)commonConsumeMaster,
                          &entity,
                          diggingBlockEntity->fields.commonConsumeId,
                          1,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_23;
  consumableItemIcon = v4->fields.consumableItemIcon;
  v18 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v4, consumableItemIcon, v18, v19);
  commonConsumeMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_23;
  v27 = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)commonConsumeMaster,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  commonConsumeMaster = NetworkManager__get_UserId(0LL);
  if ( !entity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_23;
  commonConsumeMaster = UserItemMaster__TryGetEntity(
                          MasterData_WarQuestSelectionMaster,
                          &v27,
                          commonConsumeMaster,
                          entity->fields.objectId,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
  {
    v22 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_19;
  }
  v22 = entity;
  if ( !entity || !v27 )
LABEL_23:
    sub_B5D69C(commonConsumeMaster, v15);
  if ( entity->fields.num > v27->fields.num )
LABEL_19:
    consumableItemTextColor = v4->fields.consumableItemTextColor;
  consumableItemText = v4->fields.consumableItemText;
  num = v22->fields.num;
  v26 = DiggingBlockComponent__GetHintConsumeNum(v4, v15) + num;
  v25 = System_Int32__ToString((int32_t)&v26, 0LL);
  commonConsumeMaster = (int64_t)System_String__Concat_44577788(consumableItemTextColor, v25, 0LL);
  if ( !consumableItemText )
    goto LABEL_23;
  UILabel__set_text(consumableItemText, (System_String_o *)commonConsumeMaster, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  UISprite_o *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA960 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)hintInfo, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_18730/*"event_digging_layer_{0}"*/, v10, v11, v12);
    byte_42EA960 = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_B5D560(
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
    || (hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL),
        (blockInfo = this->fields.blockInfo) == 0LL)
    || !hintSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, blockInfo->fields.isDigged != 1, 0LL),
        !hintInfo) )
  {
    sub_B5D69C(hintSprite, v13);
  }
  v16 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId);
  v18 = System_String__Format((System_String_o *)StringLiteral_18730/*"event_digging_layer_{0}"*/, v17, 0LL);
  DiggingBlockComponent__SetImage(this, v16, v18, v19);
  DiggingBlockComponent__SetConsumableItemInfo(this, v20);
}


void __fastcall DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_42EA95F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)sprite, (_DWORD)name, method);
    byte_42EA95F = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, sprite, name, 0LL);
}


void __fastcall DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_42EA962 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)clickAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, v6, v7, v8);
    sub_B5D5C4(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, v9, v10, v11);
    byte_42EA962 = 1;
  }
  v12 = sub_B5D694(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  DiggingBlockComponent___c__DisplayClass23_0___ctor((DiggingBlockComponent___c__DisplayClass23_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = clickAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)clickAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v27, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA965 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6259/*"EventPoint_"*/, (_DWORD)method, v2, v3);
    byte_42EA965 = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v6 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v7 = System_String__Concat_44577788((System_String_o *)StringLiteral_6259/*"EventPoint_"*/, v6, 0LL);
  DiggingBlockComponent__SetImage(this, eventPointAnimSp, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42EA95D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42EA95D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6D90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_DiggingBlockComponent___, (_DWORD)method, v2, v3);
    byte_42E6D90 = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickAction,
    (BlankEarth_QAARotateEarthResponse_o *)this->fields.__4__this,
    (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}