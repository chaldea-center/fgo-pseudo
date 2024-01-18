void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4189422 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15740/*"[FF0000]"*/, method);
    byte_4189422 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_15740/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15740/*"[FF0000]"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.consumableItemTextColor, v9, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
  num = consumeEnt->fields.num;
  return DiggingBlockComponent__GetHintConsumeNum(this, (const MethodInfo *)consumeEnt) + num;
}


System_String_o *__fastcall DiggingBlockComponent__GetDiggingSeName(
        DiggingBlockComponent_o *this,
        const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  struct System_String_array *diggingSeList; // x8
  __int64 animationId; // x9
  int max_length; // w10
  System_String_o **v6; // x8
  __int64 v8; // x0

  v2 = this;
  if ( (byte_418941F & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_B2C35C(&StringLiteral_16436/*"ar173"*/, method);
    byte_418941F = 1;
  }
  diggingSeList = v2->fields.diggingSeList;
  if ( !diggingSeList )
    sub_B2C434(this, method);
  animationId = v2->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v6 = (System_String_o **)&StringLiteral_16436/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
    {
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
    v6 = &diggingSeList->m_Items[animationId];
  }
  return *v6;
}


int32_t __fastcall DiggingBlockComponent__GetHintConsumeNum(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x9
  struct EventDiggingBlockEntity_o *v5; // x8
  struct System_Int32_array *consumeHintItemNums; // x8
  __int64 v8; // x0

  v2 = this;
  if ( (byte_418941E & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    byte_418941E = 1;
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
                                      (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v5 = v2->fields.diggingBlockEntity;
  if ( !v5 || (consumeHintItemNums = v5->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_B2C434(this, method);
  if ( (unsigned int)this >= consumeHintItemNums->max_length )
  {
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
  }
  return consumeHintItemNums->m_Items[(int)this + 1];
}


int32_t __fastcall DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  _DWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0

  if ( (byte_4189421 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4189421 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v10 = Instance;
  if ( !hintInfo
    || (Instance = (void *)System_Array__IndexOf_int_(
                             *((System_Int32_array **)Instance + 5),
                             hintInfo->fields.hintImageId,
                             (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = v10[9];
    return (int)Instance;
  }
  v11 = *((_QWORD *)v10 + 7);
  if ( !v11 )
LABEL_14:
    sub_B2C434(Instance, v7);
  if ( (unsigned int)Instance >= *(_DWORD *)(v11 + 24) )
  {
    v12 = sub_B2C460(Instance);
    sub_B2C400(v12, 0LL);
  }
  LODWORD(Instance) = v10[9] + *(_DWORD *)(v11 + 4LL * (int)Instance + 32);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_Component_o *hintSprite; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct EventDiggingBlockEntity_o *Entity; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  struct EventDiggingBlockEntity_o *v31; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  struct DiggingInfo_BlockInfos_o *v36; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189419 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, blockInfo);
    sub_B2C35C(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&StringLiteral_18500/*"event_digging_block_{0}"*/, v14);
    byte_4189419 = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.blockInfo,
    (System_Int32_array **)blockInfo,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = (struct EventDiggingBlockEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)hintSprite,
                                                 blockInfo->fields.diggingBlockId,
                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.diggingBlockEntity,
    (System_Int32_array **)Entity,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v15);
  v31 = this->fields.diggingBlockEntity;
  if ( !v31
    || (blockSprite = this->fields.blockSprite,
        imageId = v31->fields.imageId,
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId),
        v34 = System_String__Format((System_String_o *)StringLiteral_18500/*"event_digging_block_{0}"*/, v33, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v34, v35),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL),
        (v36 = this->fields.blockInfo) == 0LL)
    || !hintSprite )
  {
LABEL_13:
    sub_B2C434(hintSprite, v15);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v36->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_B2C434(this, method);
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
    sub_B2C434(blockSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL);
}


void __fastcall DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t commonConsumeMaster; // x0
  const MethodInfo *v7; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x3
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v14; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v17; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF
  UserItemEntity_o *v19; // [xsp+10h] [xbp-30h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_418941C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    this = (DiggingBlockComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418941C = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  v18 = 0;
  commonConsumeMaster = (int64_t)DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v2->fields.diggingBlockEntity;
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
  consumableItemIcon = v2->fields.consumableItemIcon;
  v10 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v10, v11);
  commonConsumeMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_23;
  v19 = 0LL;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)commonConsumeMaster,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                          &v19,
                          commonConsumeMaster,
                          entity->fields.objectId,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
  {
    v14 = entity;
    if ( !entity )
      goto LABEL_23;
    goto LABEL_19;
  }
  v14 = entity;
  if ( !entity || !v19 )
LABEL_23:
    sub_B2C434(commonConsumeMaster, v7);
  if ( entity->fields.num > v19->fields.num )
LABEL_19:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v14->fields.num;
  v18 = DiggingBlockComponent__GetHintConsumeNum(v2, v7) + num;
  v17 = System_Int32__ToString((int32_t)&v18, 0LL);
  commonConsumeMaster = (int64_t)System_String__Concat_44305532(consumableItemTextColor, v17, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  UISprite_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418941B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, hintInfo);
    sub_B2C35C(&StringLiteral_18501/*"event_digging_layer_{0}"*/, v10);
    byte_418941B = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_B2C2F8(
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
    sub_B2C434(hintSprite, v11);
  }
  v14 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId);
  v16 = System_String__Format((System_String_o *)StringLiteral_18501/*"event_digging_layer_{0}"*/, v15, 0LL);
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

  if ( (byte_418941A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, sprite);
    byte_418941A = 1;
  }
  eventId = this->fields.eventId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, sprite, name, 0LL);
}


void __fastcall DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
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
  System_Action_o *v22; // x20

  if ( (byte_418941D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, clickAction);
    sub_B2C35C(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, v5);
    sub_B2C35C(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, v6);
    byte_418941D = 1;
  }
  v7 = sub_B2C42C(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  DiggingBlockComponent___c__DisplayClass23_0___ctor((DiggingBlockComponent___c__DisplayClass23_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = clickAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)clickAction,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v22, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189420 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6180/*"EventPoint_"*/, method);
    byte_4189420 = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v5 = System_String__Concat_44305532((System_String_o *)StringLiteral_6180/*"EventPoint_"*/, v4, 0LL);
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
  __int64 v4; // x1

  if ( (byte_4189418 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4189418 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  if ( (byte_41864EB & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_DiggingBlockComponent___, method);
    byte_41864EB = 1;
  }
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    (System_Action_T__o *)this->fields.clickAction,
    (BlankEarth_QAARotateEarthResponse_o *)this->fields.__4__this,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}