void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5F1EE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15933/*"[FF0000]"*/);
    byte_4A5F1EE = 1;
  }
  v5 = StringLiteral_15933/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_15933/*"[FF0000]"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.consumableItemTextColor, v5, v2, v3);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5F1EB & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1B885B0(&StringLiteral_16873/*"ar173"*/);
    byte_4A5F1EB = 1;
  }
  diggingSeList = v2->fields.diggingSeList;
  if ( !diggingSeList )
    sub_1B8880C(this, method);
  animationId = v2->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v6 = (System_String_o **)&StringLiteral_16873/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
      sub_1B88814(this, method);
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
  if ( (byte_4A5F1EA & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1B885B0(&Method_System_Array_IndexOf_int___);
    byte_4A5F1EA = 1;
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
                                      (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v5 = v2->fields.diggingBlockEntity;
  if ( !v5 || (consumeHintItemNums = v5->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_1B8880C(this, method);
  if ( (unsigned int)this >= consumeHintItemNums->max_length )
    sub_1B88814(this, method);
  return consumeHintItemNums->m_Items[(unsigned int)this + 1];
}


int32_t __fastcall DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  Il2CppObject *v7; // x20
  _DWORD *monitor; // x8

  if ( (byte_4A5F1ED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v7 = Instance;
  if ( !hintInfo
    || (Instance = (Il2CppObject *)System_Array__IndexOf_int_(
                                     (System_Int32_array *)Instance[2].monitor,
                                     hintInfo->fields.hintImageId,
                                     (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = HIDWORD(v7[2].klass);
    return (int)Instance;
  }
  monitor = v7[3].monitor;
  if ( !monitor )
LABEL_14:
    sub_1B8880C(Instance, v4);
  if ( (unsigned int)Instance >= monitor[6] )
    sub_1B88814(Instance, v4);
  LODWORD(Instance) = HIDWORD(v7[2].klass) + monitor[(unsigned int)Instance + 8];
  return (int)Instance;
}


void __fastcall DiggingBlockComponent__Initialize(
        DiggingBlockComponent_o *this,
        DiggingInfo_BlockInfos_o *blockInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *hintSprite; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Entity; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct EventDiggingBlockEntity_o *v18; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  struct DiggingInfo_BlockInfos_o *v23; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5F1E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_19165/*"event_digging_block_{0}"*/);
    byte_4A5F1E5 = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hintInfo, 0, eventId, (int32_t)method);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL);
  if ( !hintSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, 0, 0LL);
  this->fields.blockInfo = blockInfo;
  this->fields.eventId = eventId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blockInfo, (int32_t)blockInfo, v9, v10);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)hintSprite,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = (struct EventDiggingBlockEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.diggingBlockEntity, (int32_t)Entity, v12, v13);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v7);
  v18 = this->fields.diggingBlockEntity;
  if ( !v18
    || (blockSprite = this->fields.blockSprite,
        imageId = v18->fields.imageId,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v15, v16, v17),
        v21 = System_String__Format((System_String_o *)StringLiteral_19165/*"event_digging_block_{0}"*/, v20, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v21, v22),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL),
        (v23 = this->fields.blockInfo) == 0LL)
    || !hintSprite )
  {
LABEL_13:
    sub_1B8880C(hintSprite, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v23->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1B8880C(this, method);
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
    sub_1B8880C(blockSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL);
}


void __fastcall DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  DiggingBlockComponent_o *v2; // x19
  int64_t commonConsumeMaster; // x0
  const MethodInfo *v4; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  Il2CppObject *MasterData_object; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v11; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v14; // x0
  int v15; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *v16; // [xsp+8h] [xbp-38h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4A5F1E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (DiggingBlockComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F1E8 = 1;
  }
  entity = 0LL;
  v16 = 0LL;
  v15 = 0;
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
  v7 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v2, consumableItemIcon, v7, v8);
  commonConsumeMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_22;
  v16 = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)commonConsumeMaster,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  commonConsumeMaster = NetworkManager__get_UserId(0LL);
  if ( !entity || !MasterData_object )
    goto LABEL_22;
  commonConsumeMaster = UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)MasterData_object,
                          &v16,
                          commonConsumeMaster,
                          entity->fields.objectId,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
  {
    v11 = entity;
    if ( !entity )
      goto LABEL_22;
    goto LABEL_18;
  }
  v11 = entity;
  if ( !entity || !v16 )
LABEL_22:
    sub_1B8880C(commonConsumeMaster, v4);
  if ( entity->fields.num > v16->fields.num )
LABEL_18:
    consumableItemTextColor = v2->fields.consumableItemTextColor;
  consumableItemText = v2->fields.consumableItemText;
  num = v11->fields.num;
  v15 = DiggingBlockComponent__GetHintConsumeNum(v2, v4) + num;
  v14 = System_Int32__ToString((int32_t)&v15, 0LL);
  commonConsumeMaster = (int64_t)System_String__Concat_61707032(consumableItemTextColor, v14, 0LL);
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

  if ( (byte_4A5F1E7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_19166/*"event_digging_layer_{0}"*/);
    byte_4A5F1E7 = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hintInfo, (int32_t)hintInfo, (int32_t)method, v3);
  hintSprite = (UnityEngine_Component_o *)this->fields.hintSprite;
  if ( !hintSprite
    || (hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(hintSprite, 0LL),
        (blockInfo = this->fields.blockInfo) == 0LL)
    || !hintSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, blockInfo->fields.isDigged != 1, 0LL),
        !hintInfo) )
  {
    sub_1B8880C(hintSprite, v6);
  }
  v12 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId, v9, v10, v11);
  v14 = System_String__Format((System_String_o *)StringLiteral_19166/*"event_digging_layer_{0}"*/, v13, 0LL);
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

  if ( (byte_4A5F1E6 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5F1E6 = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, sprite, name, 0LL);
}


void __fastcall DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_4A5F1E9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__);
    sub_1B885B0(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
    byte_4A5F1E9 = 1;
  }
  v5 = sub_1B887FC(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = clickAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)clickAction, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v12, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5F1EC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6197/*"EventPoint_"*/);
    byte_4A5F1EC = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v4 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_6197/*"EventPoint_"*/, v4, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5F1E4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F1E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  if ( (byte_4A5F1EF & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_DiggingBlockComponent___);
    byte_4A5F1EF = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}