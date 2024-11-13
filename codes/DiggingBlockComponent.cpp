void __fastcall DiggingBlockComponent___ctor(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B1A3E0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16099/*"[FF0000]"*/, method, v2);
    byte_4B1A3E0 = 1;
  }
  v9 = StringLiteral_16099/*"[FF0000]"*/;
  this->fields.consumableItemTextColor = (struct System_String_o *)StringLiteral_16099/*"[FF0000]"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.consumableItemTextColor, v9, v2, v3, v4, v5, v6, v7);
  PanelComponentBase___ctor((PanelComponentBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DiggingBlockComponent__CheckBlockInfoByIndex(
        DiggingBlockComponent_o *this,
        int32_t x,
        int32_t y,
        const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1BCAA3C(this, *(_QWORD *)&x);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B1A3DD & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1BCA7E0(&StringLiteral_17044/*"ar173"*/, method, v2);
    byte_4B1A3DD = 1;
  }
  diggingSeList = v3->fields.diggingSeList;
  if ( !diggingSeList )
    sub_1BCAA3C(this, method);
  animationId = v3->fields.animationId;
  max_length = diggingSeList->max_length;
  if ( (int)animationId >= max_length )
  {
    v7 = (System_String_o **)&StringLiteral_17044/*"ar173"*/;
  }
  else
  {
    if ( (unsigned int)animationId >= max_length )
      sub_1BCAA44(this, method);
    v7 = &diggingSeList->m_Items[animationId];
  }
  return *v7;
}


int32_t __fastcall DiggingBlockComponent__GetHintConsumeNum(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingBlockComponent_o *v3; // x19
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x9
  struct EventDiggingBlockEntity_o *v6; // x8
  struct System_Int32_array *consumeHintItemNums; // x8

  v3 = this;
  if ( (byte_4B1A3DC & 1) == 0 )
  {
    this = (DiggingBlockComponent_o *)sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    byte_4B1A3DC = 1;
  }
  hintInfo = v3->fields.hintInfo;
  if ( !hintInfo )
    return 0;
  diggingBlockEntity = v3->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_11;
  this = (DiggingBlockComponent_o *)System_Array__IndexOf_int_(
                                      diggingBlockEntity->fields.consumeHintImageIds,
                                      hintInfo->fields.hintImageId,
                                      (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
  if ( ((unsigned int)this & 0x80000000) != 0 )
    return 0;
  v6 = v3->fields.diggingBlockEntity;
  if ( !v6 || (consumeHintItemNums = v6->fields.consumeHintItemNums) == 0LL )
LABEL_11:
    sub_1BCAA3C(this, method);
  if ( (unsigned int)this >= consumeHintItemNums->max_length )
    sub_1BCAA44(this, method);
  return consumeHintItemNums->m_Items[(unsigned int)this + 1];
}


int32_t __fastcall DiggingBlockComponent__GetTotalEventPoint(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  struct DiggingInfo_HintInfos_o *hintInfo; // x8
  Il2CppObject *v14; // x20
  _DWORD *monitor; // x8

  if ( (byte_4B1A3DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B1A3DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  blockInfo = this->fields.blockInfo;
  if ( !blockInfo || !Instance )
    goto LABEL_14;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               blockInfo->fields.diggingBlockId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  if ( !Instance )
    return (int)Instance;
  hintInfo = this->fields.hintInfo;
  v14 = Instance;
  if ( !hintInfo
    || (Instance = (Il2CppObject *)System_Array__IndexOf_int_(
                                     (System_Int32_array *)Instance[2].monitor,
                                     hintInfo->fields.hintImageId,
                                     (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___),
        ((unsigned int)Instance & 0x80000000) != 0) )
  {
    LODWORD(Instance) = HIDWORD(v14[2].klass);
    return (int)Instance;
  }
  monitor = v14[3].monitor;
  if ( !monitor )
LABEL_14:
    sub_1BCAA3C(Instance, v11);
  if ( (unsigned int)Instance >= monitor[6] )
    sub_1BCAA44(Instance, v11);
  LODWORD(Instance) = HIDWORD(v14[2].klass) + monitor[(unsigned int)Instance + 8];
  return (int)Instance;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DiggingBlockComponent__Initialize(
        DiggingBlockComponent_o *this,
        DiggingInfo_BlockInfos_o *blockInfo,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x1
  UnityEngine_Component_o *hintSprite; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  Il2CppObject *Entity; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  struct EventDiggingBlockEntity_o *v35; // x8
  UISprite_o *blockSprite; // x20
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  struct DiggingInfo_BlockInfos_o *v40; // x8
  int32_t imageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A3D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDiggingBlockMaster___, blockInfo, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_19366/*"event_digging_block_{0}"*/, v17, v18);
    byte_4B1A3D7 = 1;
  }
  this->fields.hintInfo = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.hintInfo,
    0LL,
    *(int64_t *)&eventId,
    (int32_t)method,
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.blockInfo, (int64_t)blockInfo, v21, v22, v23, v24, v25, v26);
  hintSprite = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !hintSprite )
    goto LABEL_13;
  hintSprite = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)hintSprite,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDiggingBlockMaster___);
  if ( !blockInfo )
    goto LABEL_13;
  if ( !hintSprite )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)hintSprite,
             blockInfo->fields.diggingBlockId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDiggingBlockMaster__EventDiggingBlockEntity__int__GetEntity__);
  this->fields.diggingBlockEntity = (struct EventDiggingBlockEntity_o *)Entity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.diggingBlockEntity,
    (int64_t)Entity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  diggingBlockEntity = this->fields.diggingBlockEntity;
  if ( !diggingBlockEntity )
    goto LABEL_13;
  this->fields.animationId = diggingBlockEntity->fields.objectId;
  DiggingBlockComponent__SetConsumableItemInfo(this, v19);
  v35 = this->fields.diggingBlockEntity;
  if ( !v35
    || (blockSprite = this->fields.blockSprite,
        imageId = v35->fields.imageId,
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId),
        v38 = System_String__Format((System_String_o *)StringLiteral_19366/*"event_digging_block_{0}"*/, v37, 0LL),
        DiggingBlockComponent__SetImage(this, blockSprite, v38, v39),
        hintSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL),
        (v40 = this->fields.blockInfo) == 0LL)
    || !hintSprite )
  {
LABEL_13:
    sub_1BCAA3C(hintSprite, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)hintSprite, v40->fields.isDigged != 1, 0LL);
  PanelComponentBase__Initialize((PanelComponentBase_o *)this, 0LL);
}


bool __fastcall DiggingBlockComponent__IsDigged(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8

  blockInfo = this->fields.blockInfo;
  if ( !blockInfo )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(blockSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)blockSprite, isActive, 0LL);
}


void __fastcall DiggingBlockComponent__SetConsumableItemInfo(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  DiggingBlockComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t commonConsumeMaster; // x0
  const MethodInfo *v11; // x1
  struct EventDiggingBlockEntity_o *diggingBlockEntity; // x8
  UISprite_o *consumableItemIcon; // x20
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x21
  System_String_o *consumableItemTextColor; // x20
  CommonConsumeEntity_o *v19; // x8
  UILabel_o *consumableItemText; // x21
  int32_t num; // w22
  System_String_o *v22; // x0
  int v23; // [xsp+4h] [xbp-3Ch] BYREF
  UserItemEntity_o *v24; // [xsp+8h] [xbp-38h] BYREF
  CommonConsumeEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B1A3DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    this = (DiggingBlockComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B1A3DA = 1;
  }
  entity = 0LL;
  v24 = 0LL;
  v23 = 0;
  commonConsumeMaster = (int64_t)DiggingBlockComponent__get_commonConsumeMaster(this, method);
  diggingBlockEntity = v3->fields.diggingBlockEntity;
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
  consumableItemIcon = v3->fields.consumableItemIcon;
  v14 = System_Int32__ToString((int)entity + 28, 0LL);
  DiggingBlockComponent__SetImage(v3, consumableItemIcon, v14, v15);
  commonConsumeMaster = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !commonConsumeMaster )
    goto LABEL_22;
  v24 = 0LL;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)commonConsumeMaster,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
  consumableItemTextColor = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  commonConsumeMaster = NetworkManager__get_UserId(0LL);
  if ( !entity || !MasterData_object )
    goto LABEL_22;
  commonConsumeMaster = UserItemMaster__TryGetEntity(
                          (UserItemMaster_o *)MasterData_object,
                          &v24,
                          commonConsumeMaster,
                          entity->fields.objectId,
                          0LL);
  if ( (commonConsumeMaster & 1) == 0 )
  {
    v19 = entity;
    if ( !entity )
      goto LABEL_22;
    goto LABEL_18;
  }
  v19 = entity;
  if ( !entity || !v24 )
LABEL_22:
    sub_1BCAA3C(commonConsumeMaster, v11);
  if ( entity->fields.num > v24->fields.num )
LABEL_18:
    consumableItemTextColor = v3->fields.consumableItemTextColor;
  consumableItemText = v3->fields.consumableItemText;
  num = v19->fields.num;
  v23 = DiggingBlockComponent__GetHintConsumeNum(v3, v11) + num;
  v22 = System_Int32__ToString((int32_t)&v23, 0LL);
  commonConsumeMaster = (int64_t)System_String__Concat_62401220(consumableItemTextColor, v22, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  UnityEngine_Component_o *hintSprite; // x0
  struct DiggingInfo_BlockInfos_o *blockInfo; // x8
  UISprite_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t hintImageId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A3D9 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, hintInfo, method);
    sub_1BCA7E0(&StringLiteral_19367/*"event_digging_layer_{0}"*/, v10, v11);
    byte_4B1A3D9 = 1;
  }
  this->fields.hintInfo = hintInfo;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.hintInfo,
    (int64_t)hintInfo,
    (int64_t)method,
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
    sub_1BCAA3C(hintSprite, v12);
  }
  v15 = this->fields.hintSprite;
  hintImageId = hintInfo->fields.hintImageId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &hintImageId);
  v17 = System_String__Format((System_String_o *)StringLiteral_19367/*"event_digging_layer_{0}"*/, v16, 0LL);
  DiggingBlockComponent__SetImage(this, v15, v17, v18);
  DiggingBlockComponent__SetConsumableItemInfo(this, v19);
}


void __fastcall DiggingBlockComponent__SetImage(
        DiggingBlockComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t eventId; // w21

  if ( (byte_4B1A3D8 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, sprite, name);
    byte_4B1A3D8 = 1;
  }
  eventId = this->fields.eventId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, sprite);
  AtlasManager__SetEventUI_38574572(eventId, sprite, name, 0LL);
}


void __fastcall DiggingBlockComponent__SetPanelClickAction(
        DiggingBlockComponent_o *this,
        System_Action_DiggingBlockComponent__o *clickAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B1A3DB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, clickAction, method);
    sub_1BCA7E0(&Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__, v6, v7);
    sub_1BCA7E0(&DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, v8, v9);
    byte_4B1A3DB = 1;
  }
  v10 = sub_1BCAA2C(DiggingBlockComponent___c__DisplayClass23_0_TypeInfo, clickAction, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = clickAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)clickAction, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_DiggingBlockComponent___c__DisplayClass23_0__SetPanelClickAction_b__0__,
    0LL);
  PanelComponentBase__SetTheCallBackWhenClickPanel((PanelComponentBase_o *)this, v28, 0LL);
}


void __fastcall DiggingBlockComponent__SetPointAnimSprite(DiggingBlockComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISprite_o *eventPointAnimSp; // x20
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t TotalEventPoint; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1A3DE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6317/*"EventPoint_"*/, method, v2);
    byte_4B1A3DE = 1;
  }
  eventPointAnimSp = this->fields.eventPointAnimSp;
  TotalEventPoint = DiggingBlockComponent__GetTotalEventPoint(this, method);
  v5 = System_Int32__ToString((int32_t)&TotalEventPoint, 0LL);
  v6 = System_String__Concat_62401220((System_String_o *)StringLiteral_6317/*"EventPoint_"*/, v5, 0LL);
  DiggingBlockComponent__SetImage(this, eventPointAnimSp, v6, v7);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1A3D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B1A3D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (CommonConsumeMaster_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  __int64 v2; // x2

  if ( (byte_4B1A3E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_DiggingBlockComponent___, method, v2);
    byte_4B1A3E1 = 1;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.clickAction,
    (Il2CppObject *)this->fields.__4__this,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_DiggingBlockComponent___);
}