void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A02B25 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15868/*"[FF0000]"*/, method);
    byte_4A02B25 = 1;
  }
  v5 = StringLiteral_15868/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15868/*"[FF0000]"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.consumableItemTextColor, v5, v2, v3);
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
    sub_1B64C5C(this, x);
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
    sub_1B64C5C(this, 0LL);
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

  v2 = this;
  if ( (byte_4A02B22 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1B64A00(&StringLiteral_16807/*"ar173"*/, method);
    byte_4A02B22 = 1;
  }
  diggingSeList = v2->fields.diggingSeList;
  if ( !diggingSeList )
    sub_1B64C5C(this, method);
  animationId = v2->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v6 = (System_String_o **)&StringLiteral_16807/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
      sub_1B64C64(this, method);
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

  v2 = this;
  if ( (byte_4A02B21 & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1B64A00(&Method_System_Array_IndexOf_int___, method);
    byte_4A02B21 = 1;
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
                                      (const MethodInfo_2F3475C *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v5 = v2->fields.diggingBlockEntity;
  if ( !v5 || (consumeHintItemNums = v5->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_1B64C5C(this, method);
  if ( (unsigned int)this >= consumeHintItemNums->max_length )
    sub_1B64C64(this, method);
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
  _DWORD *monitor; // x8

  if ( (byte_4A02B24 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_IndexOf_int___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v3);
    sub_1B64A00(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A02B24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_30D6798 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v10 = Instance;
  if ( !hintInfo
    || (Instance = (Il2CppObject *)System_Array__IndexOf_int_(
                                     (System_Int32_array *)Instance[2].monitor,
                                     hintInfo->fields.hintImageId,
                                     (const MethodInfo_2F3475C *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = HIDWORD(v10[2].klass);
    return (int)Instance;
  }
  monitor = v10[3].monitor;
  if ( !monitor )
LABEL_14:
    sub_1B64C5C(Instance, v7);
  if ( (unsigned int)Instance >= monitor[6] )
    sub_1B64C64(Instance, v7);
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
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct EventDiggingBlockEntity_o *v22; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  struct DiggingInfo_BlockInfos_o *v27; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A02B1C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, blockInfo);
    sub_1B64A00(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v7);
    sub_1B64A00(&int_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B64A00(&StringLiteral_19092/*"event_digging_block_{0}"*/, v10);
    byte_4A02B1C = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.hintInfo, 0, eventId, (int32_t)method);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL);
  if ( !hintSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, 0, 0LL);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.blockInfo, (int32_t)blockInfo, v13, v14);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)hintSprite,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = (struct EventDiggingBlockEntity_o *)Entity;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.diggingBlockEntity, (int32_t)Entity, v16, v17);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v11);
  v22 = this->fields.diggingBlockEntity;
  if ( !v22
    || (blockSprite = this->fields.blockSprite,
        imageId = v22->fields.imageId,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v19, v20, v21),
        v25 = System_String__Format((System_String_o *)StringLiteral_19092/*"event_digging_block_{0}"*/, v24, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v25, v26),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL),
        (v27 = this->fields.blockInfo) == 0LL)
    || !hintSprite )
  {
LABEL_13:
    sub_1B64C5C(hintSprite, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v27->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1B64C5C(this, method);
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
    sub_1B64C5C(blockSprite, isActive);
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
  Il2CppObject *MasterData_object; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v14; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v17; // x0
  int v18; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *v19; // [xsp+8h] [xbp-38h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4A02B1F & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1B64A00(&NetworkManager_TypeInfo, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    this = (DiggingBlockComponent_o *)sub_1B64A00(&StringLiteral_1/*""*/, v5);
    byte_4A02B1F = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  v18 = 0;
  commonConsumeMaster = (int64_t)DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v2->fields.diggingBlockEntity;
  if ( !diggingBlockEntity || !commonConsumeMaster )
    goto LABEL_22;
  commonConsumeMaster = CommonConsumeMaster__TryGetEntity(
                          (CommonConsumeMaster_o *)commonConsumeMaster,
                          &entity,
                          diggingBlockEntity->fields.commonConsumeId,
                          1,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_22;
  consumableItemIcon = v2->fields.consumableItemIcon;
  v10 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v10, v11);
  commonConsumeMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_22;
  v19 = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)commonConsumeMaster,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  commonConsumeMaster = NetworkManager__get_UserId(0LL);
  if ( !entity || !MasterData_object )
    goto LABEL_22;
  commonConsumeMaster = UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)MasterData_object,
                          &v19,
                          commonConsumeMaster,
                          entity->fields.objectId,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
  {
    v14 = entity;
    if ( !entity )
      goto LABEL_22;
    goto LABEL_18;
  }
  v14 = entity;
  if ( !entity || !v19 )
LABEL_22:
    sub_1B64C5C(commonConsumeMaster, v7);
  if ( entity->fields.num > v19->fields.num )
LABEL_18:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v14->fields.num;
  v18 = DiggingBlockComponent__GetHintConsumeNum(v2, v7) + num;
  v17 = System_Int32__ToString((int32_t)&v18, 0LL);
  commonConsumeMaster = (int64_t)System_String__Concat_61385136(consumableItemTextColor, v17, 0LL);
  if ( !consumableItemText )
    goto LABEL_22;
  UILabel__set_text(consumableItemText, (System_String_o *)commonConsumeMaster, 0LL);
}


void __fastcall DiggingBlockComponent__SetHintInfo(
        DiggingBlockComponent_o *this,
        DiggingInfo_HintInfos_o *hintInfo,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UISprite_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A02B1E & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, hintInfo);
    sub_1B64A00(&StringLiteral_19093/*"event_digging_layer_{0}"*/, v6);
    byte_4A02B1E = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.hintInfo, (int32_t)hintInfo, (int32_t)method, v3);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL),
        (blockInfo = this->fields.blockInfo) == 0LL)
    || !hintSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, blockInfo->fields.isDigged != 1, 0LL),
        !hintInfo) )
  {
    sub_1B64C5C(hintSprite, v7);
  }
  v13 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId, v10, v11, v12);
  v15 = System_String__Format((System_String_o *)StringLiteral_19093/*"event_digging_layer_{0}"*/, v14, 0LL);
  DiggingBlockComponent__SetImage(this, v13, v15, v16);
  DiggingBlockComponent__SetConsumableItemInfo(this, v17);
}


void __fastcall DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_4A02B1D & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, sprite);
    byte_4A02B1D = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37549424(eventId, sprite, name, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x20

  if ( (byte_4A02B20 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, clickAction);
    sub_1B64A00(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, v5);
    sub_1B64A00(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, v6);
    byte_4A02B20 = 1;
  }
  v7 = sub_1B64C4C(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64C5C(v8, v9);
  *(_QWORD *)(v7 + 16) = clickAction;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)clickAction, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v12, v13);
  v14 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v14, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A02B23 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_6171/*"EventPoint_"*/, method);
    byte_4A02B23 = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v5 = System_String__Concat_61385136((System_String_o *)StringLiteral_6171/*"EventPoint_"*/, v4, 0LL);
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

  if ( (byte_4A02B1B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_CommonConsumeMaster___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A02B1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  if ( (byte_4A02B26 & 1) == 0 )
  {
    sub_1B64A00(&Method_ActionExtensions_Call_DiggingBlockComponent___, method);
    byte_4A02B26 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_2D9336C *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}