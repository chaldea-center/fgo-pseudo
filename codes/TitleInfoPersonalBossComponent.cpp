void TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TitleInfoPersonalBossComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3655E & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_14505/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_1C32C20(&StringLiteral_19284/*"event_superboss_icon_"*/);
    sub_1C32C20(&StringLiteral_14504/*"TitleInfoEventSuperBossEffect_Break"*/);
    byte_4C3655E = 1;
  }
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_19284/*"event_superboss_icon_"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields,
    StringLiteral_19284/*"event_superboss_icon_"*/,
    v1,
    v2);
  v3 = StringLiteral_14505/*"TitleInfoEventSuperBossEffect_Dead"*/;
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14505/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB, v3, v5, v6);
  v7 = StringLiteral_14504/*"TitleInfoEventSuperBossEffect_Break"*/;
  v8 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v8->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14504/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB, v7, v9, v10);
  *(_QWORD *)&TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 0x400000003FC00000LL;
}


void TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3655D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_1C32C20(&StringLiteral_16862/*"ar60"*/);
    sub_1C32C20(&StringLiteral_16855/*"ar210"*/);
    byte_4C3655D = 1;
  }
  v5 = StringLiteral_16862/*"ar60"*/;
  this->fields.breakEffectBeforeSeName = (struct System_String_o *)StringLiteral_16862/*"ar60"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.breakEffectBeforeSeName, v5, v2, v3);
  v6 = StringLiteral_16855/*"ar210"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16855/*"ar210"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.breakHpDownSeName, v6, v7, v8);
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.atlasList, (int32_t)v9, v10, v11);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoPersonalBossComponent__Awake(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  ;
}


float TitleInfoPersonalBossComponent__ConvertHpToRate(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


UserSuperBossEntity_o *TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(
        int32_t eventId,
        int32_t id,
        int64_t damange,
        const MethodInfo *method)
{
  UserSuperBossEntity_o *v7; // x22
  NetworkManager_c *v8; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  UserSuperBossEntity_o *result; // x0
  int64_t userIdNumber; // x8

  if ( (byte_4C3655C & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UserSuperBossEntity_TypeInfo);
    byte_4C3655C = 1;
  }
  v7 = (UserSuperBossEntity_o *)sub_1C32E6C(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v7, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  if ( !v7 )
    sub_1C32E7C(v8);
  static_fields = v8->static_fields;
  result = v7;
  userIdNumber = static_fields->userIdNumber;
  v7->fields.eventId = eventId;
  v7->fields.superBossId = id;
  v7->fields.damage = damange;
  v7->fields.userId = userIdNumber;
  return result;
}


UnityEngine_GameObject_o *TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t id; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C36553 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_16621/*"_{0}{1:D2}"*/);
    byte_4C36553 = 1;
  }
  if ( !mapAssetData )
    return 0;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v6 = System_String__Concat_63518544(
         v5->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16621/*"_{0}{1:D2}"*/,
         0);
  eventId = this->fields.eventId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &eventId, v7, v8, v9, v10, v11, v12);
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    sub_1C32E7C(v13);
  v21 = (Il2CppObject *)v13;
  id = eventSuperBossEntity->fields.id;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v14, v15, v16, v17, v18, v19);
  v23 = System_String__Format_63559836(v6, v21, v22, 0);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                       mapAssetData,
                                       v23,
                                       (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
}


UserSuperBossEntity_o *TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *v8; // x8
  int32_t v9; // w20
  int64_t OrtLatePhaseDead; // x21
  EventSuperBossEntity_o *IsOpen; // x0
  const MethodInfo *v12; // x3
  struct System_Int64_array *hpList; // x11
  unsigned __int64 max_length_low; // x8
  __int64 v15; // x10
  int64_t v16; // x20
  __int64 v17; // x9
  __int64 v18; // x10
  int64_t *m_Items; // x11
  int64_t v20; // x12
  BalanceConfig_c *v21; // x0
  struct BalanceConfig_StaticFields *v22; // x8
  int32_t v23; // w20
  int64_t v24; // x21
  BalanceConfig_c *v25; // x0
  struct BalanceConfig_StaticFields *v26; // x8
  int32_t v27; // w20
  int32_t v28; // w21
  struct System_Int64_array *v29; // x11
  unsigned __int64 v30; // x8
  unsigned __int64 v31; // x9
  int64_t *v32; // x11
  int64_t v33; // x12
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  int32_t id; // w19
  int32_t eventId; // w21

  if ( (byte_4C3655B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4C3655B = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0, 0) )
    goto LABEL_19;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = v7->static_fields;
  v9 = v8->OrtLateQuestId;
  OrtLatePhaseDead = v8->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v9, OrtLatePhaseDead, 0, 0, 0);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    hpList = this->fields.hpList;
    if ( !hpList )
      goto LABEL_43;
    max_length_low = LODWORD(hpList->max_length);
    v15 = (max_length_low << 32) - 0x100000000LL;
    if ( v15 >= 1 )
    {
      v16 = 0;
      v17 = 0;
      v18 = v15 >> 32;
      m_Items = hpList->m_Items;
      while ( v17 < max_length_low )
      {
        v20 = m_Items[v17++];
        v16 += v20;
        if ( v17 >= v18 )
          goto LABEL_38;
      }
      goto LABEL_42;
    }
  }
  else
  {
LABEL_19:
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    v22 = v21->static_fields;
    v23 = v22->OrtLateQuestId;
    v24 = v22->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v23, v24, 0, 0, 0) )
      goto LABEL_35;
    v25 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    v26 = v25->static_fields;
    v27 = v26->OrtLateQuestId;
    v28 = v26->OrtLatePhaseDead;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = (EventSuperBossEntity_o *)CondType__IsOpen(47, v27, v28 + 1, 0, 0, 0);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_35:
      IsOpen = this->fields.eventSuperBossEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity(IsOpen, 0);
LABEL_43:
      sub_1C32E7C(IsOpen);
    }
    v29 = this->fields.hpList;
    if ( !v29 )
      goto LABEL_43;
    v30 = LODWORD(v29->max_length);
    if ( (__int64)(v30 << 32) >= 1 )
    {
      v16 = 0;
      v31 = 0;
      v32 = v29->m_Items;
      while ( v31 < v30 )
      {
        v33 = v32[v31++];
        v16 += v33;
        if ( (__int64)v31 >= (int)v30 )
          goto LABEL_38;
      }
LABEL_42:
      sub_1C32E84(IsOpen);
    }
  }
  v16 = 0;
LABEL_38:
  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  if ( !eventSuperBossEntity )
    goto LABEL_43;
  eventId = eventSuperBossEntity->fields.eventId;
  id = eventSuperBossEntity->fields.id;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, id, v16, v12);
}


System_String_o *TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3654B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_6273/*"EventUI/Prefabs/{0}"*/);
    byte_4C3654B = 1;
  }
  v11 = eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_6273/*"EventUI/Prefabs/{0}"*/, v9, 0);
}


UnityEngine_GameObject_o *TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4C36551 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    byte_4C36551 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  return result;
}


UnityEngine_GameObject_o *TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int v4; // w20
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x1

  v4 = (int)this;
  if ( (byte_4C36555 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    byte_4C36555 = 1;
  }
  if ( !mapAssetData )
    return 0;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v5->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v7 = System_Int32__ToString(v4 + 184, 0);
  v8 = System_String__Concat_63556792(
         SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16107/*"_"*/,
         v7,
         0);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_object__51111776(
                                       mapAssetData,
                                       v8,
                                       (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
}


bool TitleInfoPersonalBossComponent__IsAlive(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity
      && (currentUserBossEnt = this->fields.currentUserBossEnt) != 0
      && currentUserBossEnt->fields.damage < eventSuperBossEntity->fields.maxHp;
}


bool TitleInfoPersonalBossComponent__IsAliveOldUserBoss(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9

  eventSuperBossEntity = this->fields.eventSuperBossEntity;
  return eventSuperBossEntity
      && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0
      && oldUserBossEnt->fields.damage < eventSuperBossEntity->fields.maxHp;
}


bool TitleInfoPersonalBossComponent__IsDispPossible(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *dispRoot; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4C36547 & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C36547 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  dispRoot = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    dispRoot = TerminalSceneComponent_TypeInfo;
  }
  mInstance = dispRoot->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0
    || (dispRoot = (TerminalSceneComponent_c *)mTerminalMap->fields.dispRoot) == 0 )
  {
    sub_1C32E7C(dispRoot);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)dispRoot, 0);
}


bool TitleInfoPersonalBossComponent__IsEventRaidBoss(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool TitleInfoPersonalBossComponent__IsForcePlayClearEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v2; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_4C3655A & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C3655A = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  static_fields = v2->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0, 0);
}


void TitleInfoPersonalBossComponent__LoadEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_4C3654C & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__);
    sub_1C32C20(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
    byte_4C3654C = 1;
  }
  v7 = sub_1C32E6C(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v13);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v15, 1, 0) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
}


void TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  TitleInfoPersonalBossComponent_o *v9; // x20
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  __int64 size; // x2
  int v12; // w9
  int i; // w28
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  Il2CppObject *Component_object; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  v9 = this;
  if ( (byte_4C3654D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25060/*"{0:D2}"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_1C32C20(&StringLiteral_5346/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4C3654D = 1;
  }
  if ( v9->fields.assetData )
  {
    atlasList = v9->fields.atlasList;
    if ( !atlasList )
LABEL_22:
      sub_1C32E7C(this);
    size = (unsigned int)atlasList->fields._size;
    v12 = atlasList->fields._version + 1;
    atlasList->fields._size = 0;
    atlasList->fields._version = v12;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, size, v3, v4, v5, v6, v7);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25060/*"{0:D2}"*/, v14, 0);
      v33 = eventId;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v16, v17, v18, v19, v20, v21);
      v23 = System_String__Format_63559836((System_String_o *)StringLiteral_5346/*"DownloadEventUIAtlas{0}{1}"*/, v22, v15, 0);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 v9,
                                                                 v23,
                                                                 v24);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoPersonalBossComponent_o *)UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_22;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        break;
      this = (TitleInfoPersonalBossComponent_o *)v9->fields.atlasList;
      if ( !this )
        goto LABEL_22;
      m_CachedPtr = this->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_UIAtlas__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !m_CachedPtr )
        goto LABEL_22;
      m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          Component_object,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
        LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_QWORD *)(v32 + 32) = Component_object;
        sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 32), (int32_t)Component_object, v27, v28);
      }
    }
  }
}


void TitleInfoPersonalBossComponent__OnDestroy(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__ReleaseLocalAtlas(this, method);
  TitleInfoPersonalBossComponent__ReleaseAssetData(this, v3);
}


void TitleInfoPersonalBossComponent__OnEndAnimation(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *animEndCall; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  animEndCall = this->fields.animEndCall;
  this->fields.animEndCall = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0);
  this->fields.isGaugeBreak = 0;
  this->fields.oldUserBossEnt = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.oldUserBossEnt, 0, v6, v7);
  TitleInfoPersonalBossComponent__SetDisp(this, v8);
}


void TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *clearBossEffect; // x20
  Il2CppObject *v4; // x20
  Il2CppObject *v5; // x20
  __int64 v6; // x0
  Il2CppObject *Component_object; // x20
  TitleInfoPersonalBossComponent_c *v8; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v10; // x20
  System_Collections_IEnumerator_o *v11; // x1
  System_Action_o *v12; // x21
  System_Action_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C36554 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4C36554 = 1;
  }
  clearBossEffect = (UnityEngine_Object_o *)this->fields.clearBossEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
  {
    v4 = (Il2CppObject *)this->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           v4,
           (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v5, (UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v5, 0);
    if ( v5 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v5,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v8 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v8 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v8->static_fields->CLEAR_CALLBACK_DELAY;
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0);
        v11 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v10, 1, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v11, 0);
        return;
      }
      v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0);
      if ( Component_object )
      {
        CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v12, 0);
        v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0);
        Component_object[2].monitor = v13;
        sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v13, v14, v15);
        return;
      }
    }
    sub_1C32E7C(v6);
  }
}


void TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  struct UISprite_array *breakIconList; // x8
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  bool v11; // w22
  System_Action_o *v12; // x0
  System_Action_o *v13; // x20
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_4C36557 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__);
    byte_4C36557 = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0, 0) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v4);
    return;
  }
  v5 = (Il2CppObject *)this->fields.gaugeBreakEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         v5,
         (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_17;
  if ( !LODWORD(breakIconList->max_length) )
    sub_1C32E84(v6);
  v8 = (UnityEngine_GameObject_o *)v6;
  v6 = (Il2CppObject *)breakIconList->m_Items[0];
  if ( !v6 )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  GameObjectExtensions__SafeSetParent_36042552(v8, gameObject, 0);
  GameObjectExtensions__ResetLocalPosition(v8, 0);
  if ( !v8 )
    goto LABEL_17;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v8,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  v13 = v12;
  if ( v11 )
  {
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0);
    v14 = BasicHelper__DelayCall(0.533, v13, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v14, 0);
    return;
  }
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0);
  if ( !Component_object )
LABEL_17:
    sub_1C32E7C(v6);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v13, 0);
}


void TitleInfoPersonalBossComponent__PlayHpCut(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  TitleInfoPersonalBossComponent_c *v13; // x0
  EasingObject_o *v14; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v16; // x21
  System_Action_o *v17; // x22

  if ( (byte_4C36556 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__);
    sub_1C32C20(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
    byte_4C36556 = 1;
  }
  v3 = sub_1C32E6C(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_12;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  *(_QWORD *)(v3 + 32) = this->fields.oldMaxHp;
  if ( !System_String__IsNullOrEmpty(this->fields.breakHpDownSeName, 0) )
  {
    v7 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySe(v8, this->fields.breakHpDownSeName, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v11, v12);
  v13 = TitleInfoPersonalBossComponent_TypeInfo;
  v14 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v13 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v13->static_fields->ANIM_DURATION_HP_CUT;
  v16 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0);
  v17 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0);
  if ( !v14 )
LABEL_12:
    sub_1C32E7C(v4);
  EasingObject__Play(v14, ANIM_DURATION_HP_CUT, v16, v17, 0.0, 0, 0);
}


void TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int64_t currentMaxHp; // x8
  int64_t currentDamage; // x9
  float v9; // s0
  float v10; // s1
  bool v11; // nf
  float v12; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  TitleInfoPersonalBossComponent_c *v17; // x0
  EasingObject_o *v18; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v20; // x21
  System_Action_o *v21; // x22

  if ( (byte_4C36558 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__);
    sub_1C32C20(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
    byte_4C36558 = 1;
  }
  v3 = sub_1C32E6C(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  currentMaxHp = this->fields.currentMaxHp;
  *(_QWORD *)(v3 + 32) = currentMaxHp;
  currentDamage = this->fields.currentDamage;
  v9 = 1.0 - (double)currentDamage / (double)currentMaxHp;
  v10 = fminf(v9, 1.0);
  v11 = v9 < 0.0;
  v12 = 0.0;
  if ( !v11 )
    v12 = v10;
  *(_QWORD *)(v3 + 40) = currentDamage;
  this->fields.HPfrom = 0.0;
  this->fields.HPto = v12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v15, v16);
  v17 = TitleInfoPersonalBossComponent_TypeInfo;
  v18 = *(EasingObject_o **)(v3 + 16);
  if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v17 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v17->static_fields->ANIM_DURATION_HP_CUT;
  v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0);
  v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0);
  if ( !v18 )
LABEL_10:
    sub_1C32E7C(v4);
  EasingObject__Play(v18, ANIM_DURATION_HP_CUT, v20, v21, 0.0, 0, 0);
}


void TitleInfoPersonalBossComponent__ReleaseAssetData(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_assetData; // x19
  int32_t eventId; // w20
  System_String_o *EventUIAssetDataPath; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C36550 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4C36550 = 1;
  }
  p_assetData = (CGThumbnailListItem_o *)&this->fields.assetData;
  if ( this->fields.assetData )
  {
    eventId = this->fields.eventId;
    if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, method);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
    p_assetData->klass = 0;
    sub_1C32BC4(p_assetData, 0, v6, v7);
  }
}


void TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v2; // x19
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4C3654F & 1) == 0 )
  {
    this = (TitleInfoPersonalBossComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_4C3654F = 1;
  }
  atlasList = v2->fields.atlasList;
  if ( !atlasList )
    sub_1C32E7C(this);
  size = atlasList->fields._size;
  v5 = atlasList->fields._version + 1;
  atlasList->fields._size = 0;
  atlasList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)atlasList->fields._items, 0, size, 0);
}


void TitleInfoPersonalBossComponent__SetDisp(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  struct UserSuperBossEntity_o *CurrentUserSuperBossEntity; // x0
  struct UserSuperBossEntity_o **p_currentUserBossEnt; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BalanceConfig_c *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x24
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  UILabel_o *Master_object; // x0
  int32_t eventId; // w21
  EventSuperBossMaster_o *v15; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w21
  EventBossStatusUiMaster_o *v21; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  System_String_o *v24; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x2
  struct EventSuperBossEntity_o *v28; // x8
  UILabel_o *bossName; // x21
  struct System_Int64_array *hpList; // x8
  int max_length; // w9
  int v32; // w22
  int64_t v33; // x10
  int v34; // w12
  int32_t v35; // w21
  Il2CppClass **v36; // x11
  Il2CppClass *v37; // x11
  bool v38; // vf
  int64_t v39; // x11
  struct UserSuperBossEntity_o *currentUserBossEnt; // x10
  int v41; // w11
  Il2CppClass **v42; // x9
  Il2CppClass *v43; // x9
  int64_t v44; // x9
  struct EventSuperBossEntity_o *v45; // x8
  BalanceConfig_c *v46; // x0
  int32_t id; // w24
  TitleInfoPersonalBossComponent_o *v48; // x0
  const MethodInfo *v49; // x1
  float v50; // s8
  const MethodInfo *v51; // x2
  struct EventSuperBossEntity_o *v52; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  int64_t oldDamage; // d0
  int64_t oldMaxHp; // d1
  float v57; // s1
  bool v58; // nf
  float v59; // s0
  const MethodInfo *v60; // x2
  float v61; // s0
  float v62; // s1
  float v63; // s0
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  const MethodInfo *v66; // x3
  UISprite_o *hpBarUnderSprite; // x20
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  const MethodInfo *v70; // x3
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  EventSuperBossEntity_o *v78; // [xsp+0h] [xbp-60h] BYREF
  __int64 v79; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C36549 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventSuperBossMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_19283/*"event_superboss_hp_white"*/);
    sub_1C32C20(&StringLiteral_19236/*"event_raid_hp_back"*/);
    sub_1C32C20(&StringLiteral_19278/*"event_superboss_hp_lower_"*/);
    sub_1C32C20(&StringLiteral_19237/*"event_raid_hp_frame"*/);
    sub_1C32C20(&StringLiteral_19282/*"event_superboss_hp_upper_"*/);
    byte_4C36549 = 1;
  }
  v78 = 0;
  v79 = 0;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  this->fields.currentUserBossEnt = CurrentUserSuperBossEntity;
  p_currentUserBossEnt = &this->fields.currentUserBossEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentUserBossEnt, (int32_t)CurrentUserSuperBossEntity, v5, v6);
  v7 = BalanceConfig_TypeInfo;
  if ( this->fields.oldUserBossEnt )
    v8 = 208;
  else
    v8 = 216;
  v9 = *(__int64 *)((char *)&this->klass + v8);
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventId = this->fields.eventId;
    v15 = (EventSuperBossMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v15 )
      goto LABEL_98;
    if ( EventSuperBossMaster__TryGetEntity(
           v15,
           &v78,
           eventId,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0) )
    {
      Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      if ( !v78 )
        goto LABEL_98;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v17 = System_Int32__ToString((int)v78 + 56, 0);
      v18 = System_String__Concat_63518544(SUPERBOSS_ICON_SPNAME_PREFIX, v17, 0);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v18, v19);
      if ( !v78 )
        goto LABEL_98;
      Master_object = this->fields.bossName;
      if ( !Master_object )
        goto LABEL_98;
      UILabel__set_text(Master_object, v78->fields.name, 0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UILabel_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v20 = this->fields.eventId;
    v21 = (EventBossStatusUiMaster_o *)Master_object;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !v21 )
      goto LABEL_98;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v21,
                                  v20,
                                  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
                                  0);
  }
  else
  {
    Master_object = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
    if ( !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity )
      goto LABEL_98;
    v24 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v25 = System_Int32__ToString((int)eventSuperBossEntity + 56, 0);
    v26 = System_String__Concat_63518544(v24, v25, 0);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v26, v27);
    v28 = this->fields.eventSuperBossEntity;
    if ( !v28 )
      goto LABEL_98;
    Master_object = this->fields.bossName;
    if ( !Master_object )
      goto LABEL_98;
    UILabel__set_text(Master_object, v28->fields.name, 0);
    EntityFromEventIdAndIndex = this->fields.eventBossStatusUiEntity;
  }
  bossName = this->fields.bossName;
  if ( EntityFromEventIdAndIndex )
  {
    v80.fields.r = 0.0;
    v80.fields.g = 0.0;
    v80.fields.b = 0.0;
    v80.fields.a = 0.0;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v80, 0);
    if ( !bossName )
      goto LABEL_98;
  }
  else
  {
    Master_object = (UILabel_o *)this->fields.eventSuperBossEntity;
    if ( !Master_object )
      goto LABEL_98;
    TextEffectColor = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)Master_object, 0);
    if ( !bossName )
      goto LABEL_98;
  }
  UILabel__set_effectColor(bossName, TextEffectColor, 0);
  Master_object = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_object )
    goto LABEL_98;
  Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  if ( !Master_object )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  hpList = this->fields.hpList;
  if ( !hpList )
    goto LABEL_98;
  max_length = hpList->max_length;
  v32 = max_length - 1;
  this->fields.maxBreakCount = max_length - 1;
  v33 = v9 ? *(_QWORD *)(v9 + 32) : 0LL;
  if ( max_length < 1 )
  {
    v39 = v33;
    v35 = max_length - 1;
  }
  else
  {
    v34 = 0;
    v35 = max_length - 1;
    while ( 1 )
    {
      v36 = &hpList->obj.klass + v34;
      this->fields.oldMaxHp = (int64_t)v36[4];
      v37 = v36[4];
      v38 = __OFSUB__(v33, v37);
      v39 = v33 - (_QWORD)v37;
      if ( v39 < 0 != v38 )
        break;
      --v35;
      ++v34;
      v33 = v39;
      if ( v35 == -1 )
        goto LABEL_53;
    }
    v39 = v33;
  }
LABEL_53:
  currentUserBossEnt = this->fields.currentUserBossEnt;
  this->fields.oldDamage = v39;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  if ( max_length >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      v42 = &hpList->obj.klass + v41;
      this->fields.currentMaxHp = (int64_t)v42[4];
      v43 = v42[4];
      v38 = __OFSUB__(currentUserBossEnt, v43);
      v44 = (char *)currentUserBossEnt - (char *)v43;
      if ( v44 < 0 != v38 )
        break;
      --v32;
      ++v41;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v44;
      if ( v32 == -1 )
        goto LABEL_61;
    }
  }
  v44 = (int64_t)currentUserBossEnt;
LABEL_61:
  v45 = this->fields.eventSuperBossEntity;
  this->fields.currentDamage = v44;
  if ( !v45 )
    goto LABEL_98;
  v46 = BalanceConfig_TypeInfo;
  id = v45->fields.id;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  if ( id == v46->static_fields->OrtThirdFormId )
    this->fields.isGaugeBreak = v35 == 1 && v32 == 0;
  LODWORD(v79) = v35 + 1;
  HIDWORD(v79) = v35;
  Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
  if ( !Master_object
    || (Master_object = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0)) == 0 )
  {
LABEL_98:
    sub_1C32E7C(Master_object);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v48, v49) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( Master_object )
    {
      v50 = 0.0;
      UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0, v51);
      Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
      if ( Master_object )
      {
        v35 = 0;
        goto LABEL_97;
      }
    }
    goto LABEL_98;
  }
  v52 = this->fields.eventSuperBossEntity;
  if ( v52
    && (oldUserBossEnt = this->fields.oldUserBossEnt) != 0
    && (maxHp = v52->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && (!*p_currentUserBossEnt || (*p_currentUserBossEnt)->fields.damage >= maxHp) )
  {
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    if ( !Master_object )
      goto LABEL_98;
    v50 = 0.0;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, 0, v65);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v35 > 0 )
      v50 = 1.0;
  }
  else if ( this->fields.isGaugeBreak )
  {
    oldMaxHp = this->fields.oldMaxHp;
    oldDamage = this->fields.oldDamage;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    this->fields.HPto = 0.0;
    *(float *)&oldDamage = 1.0 - (double)oldDamage / (double)oldMaxHp;
    v57 = fminf(*(float *)&oldDamage, 1.0);
    v58 = *(float *)&oldDamage < 0.0;
    v59 = 0.0;
    if ( !v58 )
      v59 = v57;
    this->fields.HPfrom = v59;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v59, 0);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.oldMaxHp - this->fields.oldDamage, v60);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v35 <= 0 )
      v50 = 0.0;
    else
      v50 = 1.0;
  }
  else
  {
    LODWORD(v79) = v32 + 1;
    HIDWORD(v79) = v32;
    Master_object = (UILabel_o *)this->fields.hpBarSlider;
    v61 = 1.0 - (double)this->fields.currentDamage / (double)this->fields.currentMaxHp;
    v62 = fminf(v61, 1.0);
    v58 = v61 < 0.0;
    v63 = 0.0;
    if ( !v58 )
      v63 = v62;
    this->fields.HPfrom = v63;
    this->fields.HPto = v63;
    if ( !Master_object )
      goto LABEL_98;
    UIProgressBar__set_value((UIProgressBar_o *)Master_object, v63, 0);
    TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentMaxHp - this->fields.currentDamage, v64);
    Master_object = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( !Master_object )
      goto LABEL_98;
    if ( v32 <= 0 )
      v50 = 0.0;
    else
      v50 = 1.0;
    v35 = v32;
  }
LABEL_97:
  UIProgressBar__set_value((UIProgressBar_o *)Master_object, v50, 0);
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, this->fields.maxBreakCount, v35, v66);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v68 = System_Int32__ToString((int32_t)&v79 + 4, 0);
  v69 = System_String__Concat_63518544((System_String_o *)StringLiteral_19278/*"event_superboss_hp_lower_"*/, v68, 0);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v69, v70);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v72 = System_Int32__ToString((int32_t)&v79, 0);
  v73 = System_String__Concat_63518544((System_String_o *)StringLiteral_19282/*"event_superboss_hp_upper_"*/, v72, 0);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v73, v74);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_19283/*"event_superboss_hp_white"*/,
    v75);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_19237/*"event_raid_hp_frame"*/,
    v76);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_19236/*"event_raid_hp_back"*/,
    v77);
}


bool TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3654E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_4C3654E = 1;
  }
  memset(&v13, 0, sizeof(v13));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0, 0);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v13 = v12;
  do
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v8 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0, 0);
        return 0;
      }
LABEL_19:
      sub_1C32E7C(IsNullOrEmpty);
    }
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C32E7C(v8);
    v10 = UIAtlas__GetSprite((UIAtlas_o *)v13.fields._current, spriteName, 0);
  }
  while ( !v10 );
  if ( !sprite )
    sub_1C32E7C(v10);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *totalHpLabel; // x20
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C36559 & 1) == 0 )
  {
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_3704/*"COMMON_NUM_FORMAT"*/);
    byte_4C36559 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMMON_NUM_FORMAT"*/, 0);
  v15 = hp;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v7, v8, v9, v10, v11, v12);
  v14 = System_String__Format(v6, v13, 0);
  if ( !totalHpLabel )
    sub_1C32E7C(v14);
  UILabel__set_text(totalHpLabel, v14, 0);
}


void TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  EventBossStatusUiMaster_o *Master_object; // x0
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Int64_array *BreakGaugeHpList; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t eventId; // w20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x3

  if ( (byte_4C36548 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__);
    byte_4C36548 = 1;
  }
  this->fields.eventSuperBossEntity = superBossEntity;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.eventSuperBossEntity,
    (int32_t)superBossEntity,
    (int32_t)oldUserBossEnt,
    method);
  this->fields.oldUserBossEnt = oldUserBossEnt;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.oldUserBossEnt, (int32_t)oldUserBossEnt, v7, v8);
  this->fields._IsPlayedDamageAnimation_k__BackingField = 0;
  if ( this->fields.eventSuperBossEntity )
  {
    this->fields.eventId = this->fields.eventSuperBossEntity->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventBossStatusUiMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventSuperBossEntity = this->fields.eventSuperBossEntity;
    if ( !eventSuperBossEntity
      || !Master_object
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_object,
                                        this->fields.eventId,
                                        eventSuperBossEntity->fields.id,
                                        0),
          this->fields.eventBossStatusUiEntity = EntityFromEventIdAndIndex,
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&this->fields.eventBossStatusUiEntity,
            (int32_t)EntityFromEventIdAndIndex,
            v12,
            v13),
          (Master_object = (EventBossStatusUiMaster_o *)this->fields.eventSuperBossEntity) == 0) )
    {
      sub_1C32E7C(Master_object);
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)Master_object, 0);
    this->fields.hpList = BreakGaugeHpList;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hpList, (int32_t)BreakGaugeHpList, v15, v16);
    eventId = this->fields.eventId;
    v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventId, v18, v19);
  }
}


void TitleInfoPersonalBossComponent__SetupBossIcon(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UISprite_o *bossIconSp; // x20
  struct UISprite_o *v6; // x0

  bossIconSp = this->fields.bossIconSp;
  v6 = (struct UISprite_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, bossIconSp, spName, v3);
  if ( !bossIconSp )
    goto LABEL_7;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, (unsigned __int8)v6 & 1, 0);
  v6 = this->fields.bossIconSp;
  if ( !v6 )
    goto LABEL_7;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0) )
  {
    v6 = this->fields.bossIconSp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v6,
        v6->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_7:
    sub_1C32E7C(v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoPersonalBossComponent__SetupBreakGauge(
        TitleInfoPersonalBossComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v6; // x19
  struct UISprite_array *breakIconList; // x8
  int max_length; // w22
  unsigned int v9; // w20
  int v10; // w23
  unsigned int v11; // w9
  __int64 v12; // x26
  struct UISprite_array *v13; // x8
  UISprite_o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x2
  TitleInfoPersonalBossComponent_o *v17; // x0
  UISprite_o *v18; // x1
  struct UISprite_array *v19; // x8
  struct UISprite_array *v20; // x8
  long double v21; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  int v23; // [xsp+Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4C3654A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19275/*"event_superboss_hp_icon_0"*/);
    sub_1C32C20(&StringLiteral_19276/*"event_superboss_hp_icon_11"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_1C32C20(&StringLiteral_19274/*"event_superboss_hp_icon_"*/);
    byte_4C3654A = 1;
  }
  v23 = 0;
  breakIconList = v6->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_36;
  max_length = breakIconList->max_length;
  if ( restCount <= 9 )
  {
    v10 = max_length - 1;
    if ( max_length < 1 )
    {
LABEL_33:
      TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        v6,
        v6->fields.breakIcon_11,
        (System_String_o *)StringLiteral_19276/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v21) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_1C32E7C(this);
    }
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= LODWORD(breakIconList->max_length) )
        goto LABEL_37;
      v12 = (int)v11;
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v11];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, _QWORD, const MethodInfo *, float))this->klass[1]._1.name)(
                                                   this,
                                                   this->klass[1]._1.namespaze,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v12 < restCount )
        break;
      if ( (int)v12 < maxCount )
      {
        v19 = v6->fields.breakIconList;
        if ( !v19 )
          goto LABEL_36;
        if ( (unsigned int)v12 >= LODWORD(v19->max_length) )
          goto LABEL_37;
        v18 = v19->m_Items[v12];
        v16 = (System_String_o *)StringLiteral_19275/*"event_superboss_hp_icon_0"*/;
        v17 = v6;
        goto LABEL_24;
      }
LABEL_28:
      if ( v10 == (_DWORD)v12 )
        goto LABEL_33;
      breakIconList = v6->fields.breakIconList;
      v11 = v12 + 1;
      if ( !breakIconList )
        goto LABEL_36;
    }
    v13 = v6->fields.breakIconList;
    if ( !v13 )
      goto LABEL_36;
    if ( (unsigned int)v12 >= LODWORD(v13->max_length) )
      goto LABEL_37;
    v14 = v13->m_Items[v12];
    v23 = v12 + 2;
    v15 = System_Int32__ToString((int32_t)&v23, 0);
    v16 = System_String__Concat_63518544((System_String_o *)StringLiteral_19274/*"event_superboss_hp_icon_"*/, v15, 0);
    v17 = v6;
    v18 = v14;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v17,
                                                 v18,
                                                 v16,
                                                 method);
    v20 = v6->fields.breakIconList;
    if ( !v20 )
      goto LABEL_36;
    if ( (unsigned int)v12 >= LODWORD(v20->max_length) )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)v20->m_Items[v12];
    if ( !this )
      goto LABEL_36;
    this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, float))this->klass[1]._1.name)(
                                                 this,
                                                 this->klass[1]._1.namespaze,
                                                 1.0);
    goto LABEL_28;
  }
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < LODWORD(breakIconList->max_length) )
    {
      this = (TitleInfoPersonalBossComponent_o *)breakIconList->m_Items[v9];
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, const char *, _QWORD, const MethodInfo *, float))this->klass[1]._1.name)(
                                                   this,
                                                   this->klass[1]._1.namespaze,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( max_length == ++v9 )
        goto LABEL_31;
      breakIconList = v6->fields.breakIconList;
      if ( !breakIconList )
        goto LABEL_36;
    }
LABEL_37:
    sub_1C32E84(this);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v6,
    v6->fields.breakIcon_11,
    (System_String_o *)StringLiteral_19276/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v6->fields.breakIcon_11;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v21) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.name)(v21);
}


void TitleInfoPersonalBossComponent__StartDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v6; // x19
  struct EventSuperBossEntity_o *eventSuperBossEntity; // x8
  struct UserSuperBossEntity_o *oldUserBossEnt; // x9
  int64_t maxHp; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  UnityEngine_Object_o *clearBossEffect; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  float breakEffectStartWaitTime; // s8
  System_Action_o *v25; // x20
  System_Collections_IEnumerator_o *v26; // x1

  v6 = this;
  if ( (byte_4C36552 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
    this = (TitleInfoPersonalBossComponent_o *)sub_1C32C20(&Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__);
    byte_4C36552 = 1;
  }
  if ( v6->fields._IsPlayedDamageAnimation_k__BackingField )
    goto LABEL_4;
  eventSuperBossEntity = v6->fields.eventSuperBossEntity;
  if ( eventSuperBossEntity
    && (oldUserBossEnt = v6->fields.oldUserBossEnt) != 0
    && (maxHp = eventSuperBossEntity->fields.maxHp, oldUserBossEnt->fields.damage < maxHp)
    && ((currentUserBossEnt = v6->fields.currentUserBossEnt) == 0 || currentUserBossEnt->fields.damage >= maxHp)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    v6->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v6->fields.animEndCall = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.animEndCall, (int32_t)callback, (int32_t)callback, method);
    clearBossEffect = (UnityEngine_Object_o *)v6->fields.clearBossEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(clearBossEffect, 0, 0) )
    {
      v14 = TitleInfoPersonalBossComponent__GetClearBossEffect(v6, mapAssetData, v13);
      v6->fields.clearBossEffect = v14;
      sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.clearBossEffect, (int32_t)v14, v15, v16);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v6, v12);
  }
  else
  {
    if ( !v6->fields.isGaugeBreak )
    {
LABEL_4:
      ActionExtensions__Call(callback, 0);
      return;
    }
    v6->fields._IsPlayedDamageAnimation_k__BackingField = 1;
    v6->fields.animEndCall = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.animEndCall, (int32_t)callback, (int32_t)callback, method);
    gaugeBreakEffect = (UnityEngine_Object_o *)v6->fields.gaugeBreakEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0, 0) )
    {
      v19 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v6, mapAssetData, v18);
      v6->fields.gaugeBreakEffect = v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.gaugeBreakEffect, (int32_t)v19, v20, v21);
    }
    if ( !System_String__IsNullOrEmpty(v6->fields.breakEffectBeforeSeName, 0) )
    {
      v22 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1C32C38(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v23 = (System_Reflection_MethodBase_o *)sub_1C32C04(v22, v22[4]);
      OverwriteAssetSoundName__PlaySe(v23, v6->fields.breakEffectBeforeSeName, 0, 0);
    }
    breakEffectStartWaitTime = v6->fields.breakEffectStartWaitTime;
    v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v6,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0);
    v26 = BasicHelper__DelayCall(breakEffectStartWaitTime, v25, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v6, v26, 0);
  }
}


void TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct UserSuperBossEntity_o *currentUserBossEnt; // x8
  struct System_Int64_array *hpList; // x9
  int max_length; // w10
  int32_t maxBreakCount; // w1
  int v7; // w12
  int32_t v8; // w2
  Il2CppClass **v9; // x13
  Il2CppClass *v10; // x13
  bool v11; // vf
  __int64 v12; // x13

  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( currentUserBossEnt )
    currentUserBossEnt = (struct UserSuperBossEntity_o *)currentUserBossEnt->fields.damage;
  hpList = this->fields.hpList;
  if ( !hpList )
    sub_1C32E7C(this);
  max_length = hpList->max_length;
  maxBreakCount = this->fields.maxBreakCount;
  if ( max_length < 1 )
  {
    v8 = this->fields.maxBreakCount;
  }
  else
  {
    v7 = 0;
    v8 = this->fields.maxBreakCount;
    while ( 1 )
    {
      v9 = &hpList->obj.klass + v7;
      this->fields.currentMaxHp = (int64_t)v9[4];
      v10 = v9[4];
      v11 = __OFSUB__(currentUserBossEnt, v10);
      v12 = (char *)currentUserBossEnt - (char *)v10;
      if ( v12 < 0 != v11 )
        break;
      ++v7;
      --v8;
      currentUserBossEnt = (struct UserSuperBossEntity_o *)v12;
      if ( max_length == v7 )
      {
        currentUserBossEnt = (struct UserSuperBossEntity_o *)v12;
        v8 = maxBreakCount - max_length;
        break;
      }
    }
  }
  this->fields.currentDamage = (int64_t)currentUserBossEnt;
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, maxBreakCount, v8, v2);
}


void TitleInfoPersonalBossComponent__UpdateDisp(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *animEndCall; // x20
  TitleInfoPersonalBossComponent_o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Component_o *breakHpDownSeName; // x0

  animEndCall = this->fields.animEndCall;
  v5 = this;
  this->fields.animEndCall = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0);
  v5->fields.oldUserBossEnt = 0;
  v5 = (TitleInfoPersonalBossComponent_o *)((char *)v5 + 208);
  LOBYTE(v5->fields.totalHpLabel) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)v5, 0, v6, v7);
  breakHpDownSeName = (UnityEngine_Component_o *)v5[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0)) == 0 )
  {
    sub_1C32E7C(breakHpDownSeName);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakHpDownSeName, 0, 0);
}


void TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bossIconSp; // x0

  bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
  if ( !bossIconSp
    || (bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0)) == 0 )
  {
    sub_1C32E7C(bossIconSp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0);
}


void TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_2(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *animEndCall; // x20
  TitleInfoPersonalBossComponent_o *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  animEndCall = this->fields.animEndCall;
  v5 = this;
  this->fields.animEndCall = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animEndCall, 0, v2, v3);
  ActionExtensions__Call(animEndCall, 0);
  v5->fields.oldUserBossEnt = 0;
  v5 = (TitleInfoPersonalBossComponent_o *)((char *)v5 + 208);
  LOBYTE(v5->fields.totalHpLabel) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)v5, 0, v6, v7);
}


void TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void TitleInfoPersonalBossComponent___Setup_b__48_0(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  TitleInfoPersonalBossComponent__LoadLocalAtlas(this, this->fields.eventId, v2);
  TitleInfoPersonalBossComponent__SetDisp(this, v4);
}


bool TitleInfoPersonalBossComponent__get_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsPlayedDamageAnimation_k__BackingField;
}


void TitleInfoPersonalBossComponent__set_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPlayedDamageAnimation_k__BackingField = value;
}


void TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass55_0___LoadEventUIAssetData_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  _4__this->fields.assetData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&_4__this->fields.assetData, (int32_t)data, (int32_t)method, v3);
  ActionExtensions__Call(this->fields.callback, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  struct TitleInfoPersonalBossComponent_o *_4__this; // x8
  TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *v4; // x19
  float mNow; // s0
  float v6; // s1
  bool v7; // nf
  float v8; // s0
  float v9; // s8
  const MethodInfo *v10; // x2
  double v11; // d0
  int64_t v12; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_11;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this )
    goto LABEL_11;
  mNow = easingObj->fields.mNow;
  this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)_4__this->fields.hpBarSlider;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  if ( !this
    || (v9 = _4__this->fields.HPfrom + (float)(v8 * (float)(_4__this->fields.HPto - _4__this->fields.HPfrom)),
        UIProgressBar__set_value((UIProgressBar_o *)this, v9, 0),
        (this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v4->fields.__4__this) == 0) )
  {
LABEL_11:
    sub_1C32E7C(this);
  }
  v11 = v9 * (double)v4->fields.maxHp;
  if ( v11 == INFINITY )
    v12 = 0x8000000000000000LL;
  else
    v12 = (__int64)v11;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v12, v10);
}


void TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(_4__this, method);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EasingObject_o *easingObj; // x9
  TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *v4; // x8
  float mNow; // s0
  float v6; // s3
  bool v7; // nf
  float v8; // s0
  double v9; // d0
  int64_t v10; // x1

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v4 = this, (this = (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(this);
  }
  mNow = easingObj->fields.mNow;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  v9 = (double)v4->fields.maxHp
     * (float)(*(float *)&this[4].klass
             + (float)(v8 * (float)(*((float *)&this[4].klass + 1) - *(float *)&this[4].klass)));
  if ( v9 == INFINITY )
    v10 = 0x8000000000000000LL;
  else
    v10 = (__int64)v9;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, v10, v2);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v5; // x20
  float breakEffectEndrWaitTime; // s8
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4C3655F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__);
    byte_4C3655F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, v2),
        (v5 = this->fields.__4__this) == 0) )
  {
    sub_1C32E7C(_4__this);
  }
  breakEffectEndrWaitTime = v5->fields.breakEffectEndrWaitTime;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  v10 = BasicHelper__DelayCall(breakEffectEndrWaitTime, _9__2, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)v5, v10, 0);
}


void TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, method);
}