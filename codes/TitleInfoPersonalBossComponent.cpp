void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *static_fields; // x0
  __int64 v6; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v7; // x0
  __int64 v8; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v9; // x0
  __int64 v10; // x1
  TitleInfoPersonalBossComponent_c *v11; // x8

  if ( (byte_40F8439 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_14406, v2);
    sub_B16FFC(&StringLiteral_18528, v3);
    sub_B16FFC(&StringLiteral_14405, v4);
    byte_40F8439 = 1;
  }
  static_fields = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v6 = StringLiteral_18528;
  static_fields->SUPERBOSS_ICON_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_18528;
  sub_B16F98(static_fields, v6);
  v7 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v8 = StringLiteral_14406;
  v7->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14406;
  sub_B16F98(&v7->SUPERBOSS_CLEAR_EFFECT_PREFAB, v8);
  v9 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v10 = StringLiteral_14405;
  v9->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14405;
  sub_B16F98(&v9->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB, v10);
  v11 = TitleInfoPersonalBossComponent_TypeInfo;
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 1.5;
  v11->static_fields->CLEAR_CALLBACK_DELAY = 2.0;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20

  if ( (byte_40F8438 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16381, v4);
    sub_B16FFC(&StringLiteral_16376, v5);
    byte_40F8438 = 1;
  }
  v6 = StringLiteral_16381;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16381;
  sub_B16F98(&this->fields.breakHpDownSeName, v6);
  v7 = StringLiteral_16376;
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = StringLiteral_16376;
  sub_B16F98(&this->fields.breakEffectStartWaitTime, v7);
  this->fields.assetData = (struct AssetData_o *)0x3E99999A3F800000LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.eventId = v12;
  sub_B16F98(&this->fields.eventId, v12);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Awake(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  ;
}


float __fastcall TitleInfoPersonalBossComponent__ConvertHpToRate(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


// local variable allocation has failed, the output may be wrong!
UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(
        int32_t eventId,
        int32_t id,
        int64_t damange,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  UserSuperBossEntity_o *v9; // x22
  int64_t UserId; // x0

  if ( (byte_40F8437 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&UserSuperBossEntity_TypeInfo, v8);
    byte_40F8437 = 1;
  }
  v9 = (UserSuperBossEntity_o *)sub_B170CC(UserSuperBossEntity_TypeInfo, *(_QWORD *)&id, damange, method, v4);
  UserSuperBossEntity___ctor(v9, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
    sub_B170D4();
  v9->fields.userId = UserId;
  v9->fields.eventId = eventId;
  v9->fields.superBossId = id;
  v9->fields.damage = damange;
  return v9;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoPersonalBossComponent_c *v8; // x0
  System_String_o *v9; // x21
  __int64 v10; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int eventSuperBossEntity; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F842E & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, mapAssetData);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16151, v7);
    byte_40F842E = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v8 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v8 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v9 = System_String__Concat_43743732(
         v8->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16151,
         0LL);
  eventSuperBossEntity = (int)this->fields.eventSuperBossEntity;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventSuperBossEntity);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B170D4();
  v12 = (Il2CppObject *)v10;
  idx = eventBossStatusUiEntity->fields.idx;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v14 = System_String__Format_43739268(v9, v12, v13, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v14,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  BalanceConfig_c *v9; // x0
  struct BalanceConfig_StaticFields *v10; // x8
  int32_t v11; // w20
  int64_t OrtLatePhaseDead; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x11
  unsigned __int64 v15; // x8
  __int64 v16; // x10
  int64_t v17; // x20
  __int64 v18; // x9
  __int64 v19; // x10
  __int64 v20; // x11
  __int64 v21; // x12
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *v23; // x8
  int32_t v24; // w20
  int64_t v25; // x21
  BalanceConfig_c *v26; // x0
  struct BalanceConfig_StaticFields *v27; // x8
  int32_t v28; // w20
  int32_t v29; // w21
  __int64 v30; // x11
  unsigned __int64 v31; // x8
  unsigned __int64 v32; // x9
  __int64 v33; // x11
  __int64 v34; // x12
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x0
  struct EventBossStatusUiEntity_o *v37; // x8
  int32_t idx; // w19
  int32_t eventId; // w21

  if ( (byte_40F8436 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CondType_TypeInfo, v3);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    byte_40F8436 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL) )
    goto LABEL_23;
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v10 = v9->static_fields;
  v11 = v10->OrtLateQuestId;
  OrtLatePhaseDead = v10->OrtLatePhaseDead;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(47, v11, OrtLatePhaseDead, 0, 0LL) )
  {
    v14 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v14 )
      goto LABEL_52;
    v15 = *(unsigned int *)(v14 + 24);
    v16 = (v15 << 32) - 0x100000000LL;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = v16 >> 32;
      v20 = v14 + 32;
      while ( v18 < v15 )
      {
        v21 = *(_QWORD *)(v20 + 8 * v18++);
        v17 += v21;
        if ( v18 >= v19 )
          goto LABEL_46;
      }
      goto LABEL_51;
    }
  }
  else
  {
LABEL_23:
    v22 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    v23 = v22->static_fields;
    v24 = v23->OrtLateQuestId;
    v25 = v23->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v24, v25, 0, 0LL) )
      goto LABEL_43;
    v26 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    v27 = v26->static_fields;
    v28 = v27->OrtLateQuestId;
    v29 = v27->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(47, v28, v29 + 1, 0, 0LL) )
    {
LABEL_43:
      eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
      if ( eventBossStatusUiEntity )
        return EventSuperBossEntity__GetUserSuperBossEntity((EventSuperBossEntity_o *)eventBossStatusUiEntity, 0LL);
LABEL_52:
      sub_B170D4();
    }
    v30 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v30 )
      goto LABEL_52;
    v31 = *(unsigned int *)(v30 + 24);
    if ( (__int64)(v31 << 32) >= 1 )
    {
      v17 = 0LL;
      v32 = 0LL;
      v33 = v30 + 32;
      while ( v32 < v31 )
      {
        v34 = *(_QWORD *)(v33 + 8 * v32++);
        v17 += v34;
        if ( (__int64)v32 >= (int)v31 )
          goto LABEL_46;
      }
LABEL_51:
      sub_B17100();
      sub_B170A0();
    }
  }
  v17 = 0LL;
LABEL_46:
  v37 = this->fields.eventBossStatusUiEntity;
  if ( !v37 )
    goto LABEL_52;
  eventId = v37->fields.eventId;
  idx = v37->fields.idx;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  }
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, idx, v17, v13);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8426 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6189, v3);
    byte_40F8426 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6189, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F842C & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    byte_40F842C = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int v4; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoPersonalBossComponent_c *v7; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x0

  v4 = (int)this;
  if ( (byte_40F8430 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, mapAssetData);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15842, v6);
    byte_40F8430 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v7 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v7 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v7->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v9 = System_Int32__ToString(v4 + 176, 0LL);
  v10 = System_String__Concat_43746016(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15842,
          v9,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v10,
                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
}


bool __fastcall TitleInfoPersonalBossComponent__IsAlive(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  __int64 v3; // x9

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  return eventBossStatusUiEntity
      && (v3 = *(_QWORD *)&this->fields.HPfrom) != 0
      && *(_QWORD *)(v3 + 32) < (__int64)eventBossStatusUiEntity[1].klass;
}


bool __fastcall TitleInfoPersonalBossComponent__IsAliveOldUserBoss(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9

  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  return eventBossStatusUiEntity
      && (currentUserBossEnt = this->fields.currentUserBossEnt) != 0LL
      && currentUserBossEnt->fields.damage < (__int64)eventBossStatusUiEntity[1].klass;
}


bool __fastcall TitleInfoPersonalBossComponent__IsDispPossible(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  UnityEngine_GameObject_o *mapButtonGrid; // x0

  if ( (byte_40F8422 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F8422 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL
    || (mapButtonGrid = (UnityEngine_GameObject_o *)mTerminalMap->fields.mapButtonGrid) == 0LL )
  {
    sub_B170D4();
  }
  return UnityEngine_GameObject__get_activeSelf(mapButtonGrid, 0LL);
}


bool __fastcall TitleInfoPersonalBossComponent__IsEventRaidBoss(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  return 0;
}


bool __fastcall TitleInfoPersonalBossComponent__IsForcePlayClearEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_40F8435 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CondType_TypeInfo, v2);
    byte_40F8435 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *v12; // x22
  const MethodInfo *v13; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  AssetLoader_LoadEndDataHandler_o *v19; // x21

  if ( (byte_40F8427 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v9);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v10);
    sub_B16FFC(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v11);
    byte_40F8427 = 1;
  }
  v12 = (TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *)sub_B170CC(
                                                                    TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo,
                                                                    *(_QWORD *)&eventId,
                                                                    callback,
                                                                    method,
                                                                    v4);
  TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields, this);
  v12->fields.callback = callback;
  sub_B16F98(&v12->fields.callback, callback);
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v13);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16, v17, v18);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v12,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v19, 1, 0LL) )
    ActionExtensions__Call(v12->fields.callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v11; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F8428 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407, v9);
    sub_B16FFC(&StringLiteral_5361, v10);
    byte_40F8428 = 1;
  }
  if ( this->fields.atlasList )
  {
    v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
    if ( !v11 )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v11,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v22 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407, v15, 0LL);
      v21 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_5361, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v18,
                                                                 v19);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GameObjectFromEventUIAssetData, 0LL, 0LL) )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v14 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.eventId;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall TitleInfoPersonalBossComponent__OnDestroy(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__ReleaseLocalAtlas(this, method);
  TitleInfoPersonalBossComponent__ReleaseAssetData(this, v3);
}


void __fastcall TitleInfoPersonalBossComponent__OnEndAnimation(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v2; // x20
  const MethodInfo *v4; // x1

  v2 = *(System_Action_o **)&this->fields.isGaugeBreak;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B16F98(&this->fields.isGaugeBreak, 0LL);
  ActionExtensions__Call(v2, 0LL);
  LOBYTE(this->fields.hpList) = 0;
  this->fields.currentUserBossEnt = 0LL;
  sub_B16F98(&this->fields.currentUserBossEnt, 0LL);
  TitleInfoPersonalBossComponent__SetDisp(this, v4);
}


void __fastcall TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  struct UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  TitleInfoPersonalBossComponent_c *v18; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v20; // x20
  System_Collections_IEnumerator_o *v21; // x1
  System_Action_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x21

  if ( (byte_40F842F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v6);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v7);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v8);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v9);
    byte_40F842F = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
  {
    v11 = this->fields.gaugeBreakEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)v11,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v12, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition(v12, 0LL);
    if ( v12 )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v12,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
      {
        v18 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v18 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v18->static_fields->CLEAR_CALLBACK_DELAY;
        v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v21 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v20, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
        return;
      }
      v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(
        v22,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v22,
          0LL);
        v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
        System_Action___ctor(
          v27,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        Component_srcLineSprite[1].monitor = v27;
        sub_B16F98(&Component_srcLineSprite[1].monitor, v27);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_o *animEndCall; // x20
  const MethodInfo *v9; // x1
  struct System_Action_o *v10; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  struct UISprite_o *breakIcon_11; // x8
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Component_o *rightAnchor; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v20; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x0
  System_Action_o *v26; // x20
  System_Collections_IEnumerator_o *v27; // x1

  if ( (byte_40F8432 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v6);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v7);
    byte_40F8432 = 1;
  }
  animEndCall = this->fields.animEndCall;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)animEndCall, 0LL, 0LL) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v9);
    return;
  }
  v10 = this->fields.animEndCall;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          (UnityEngine_UI_Dropdown_DropdownItem_o *)v10,
          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIcon_11 = this->fields.breakIcon_11;
  if ( !breakIcon_11 )
    goto LABEL_19;
  if ( !LODWORD(breakIcon_11->fields.leftAnchor) )
  {
    sub_B17100(v11, v12, v13, v14);
    sub_B170A0();
  }
  v16 = (UnityEngine_GameObject_o *)v11;
  rightAnchor = (UnityEngine_Component_o *)breakIcon_11->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(rightAnchor, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(v16, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v16, 0LL);
  if ( !v16 )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v16,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v20 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
  v26 = v25;
  if ( v20 )
  {
    System_Action___ctor(
      v25,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v27 = BasicHelper__DelayCall(0.533, v26, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
    return;
  }
  System_Action___ctor(
    v25,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_srcLineSprite )
LABEL_19:
    sub_B170D4();
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v26, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *v12; // x19
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  EasingObject_o *easingObj; // x20
  TitleInfoPersonalBossComponent_c *v22; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Action_o *v29; // x22

  if ( (byte_40F8431 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v7);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v8);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v9);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v10);
    sub_B16FFC(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v11);
    byte_40F8431 = 1;
  }
  v12 = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)sub_B170CC(
                                                                    TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
  TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields.__4__this, this);
  v12->fields.maxHp = this->fields.oldDamage;
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL) )
  {
    v13 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 75) & 2) != 0 )
      v13 = (_QWORD *)sub_B17004();
    v14 = (System_Reflection_MethodBase_o *)sub_B16FE0(v13, v13[3]);
    OverwriteAssetSoundName__PlaySe(v14, *(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v12->fields.easingObj = (struct EasingObject_o *)Component_UIWidget;
  sub_B16F98(&v12->fields, Component_UIWidget);
  easingObj = v12->fields.easingObj;
  v22 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v22 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v25, v26, v27, v28);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v12,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !easingObj )
LABEL_13:
    sub_B170D4();
  EasingObject__Play(easingObj, ANIM_DURATION_HP_CUT, v24, v29, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *v11; // x19
  int64_t oldMaxHp; // d0
  int64_t currentDamage; // d1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  EasingObject_o *easingObj; // x20
  TitleInfoPersonalBossComponent_c *v21; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x22

  if ( (byte_40F8433 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v7);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v8);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v9);
    sub_B16FFC(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v10);
    byte_40F8433 = 1;
  }
  v11 = (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)sub_B170CC(
                                                                    TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
  TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v11->fields.__4__this = this;
  sub_B16F98(&v11->fields.__4__this, this);
  v11->fields.maxHp = this->fields.currentDamage;
  v11->fields.damage = this->fields.oldMaxHp;
  currentDamage = this->fields.currentDamage;
  oldMaxHp = this->fields.oldMaxHp;
  LODWORD(this->fields.currentMaxHp) = 0;
  *(float *)&oldMaxHp = 1.0 - (double)oldMaxHp / (double)currentDamage;
  *((float *)&this->fields.currentMaxHp + 1) = UnityEngine_Mathf__Clamp01(*(float *)&oldMaxHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v11->fields.easingObj = (struct EasingObject_o *)Component_UIWidget;
  sub_B16F98(&v11->fields, Component_UIWidget);
  easingObj = v11->fields.easingObj;
  v21 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v21 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v21->static_fields->ANIM_DURATION_HP_CUT;
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !easingObj )
LABEL_9:
    sub_B170D4();
  EasingObject__Play(easingObj, ANIM_DURATION_HP_CUT, v23, v28, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_UIAtlas__o **p_atlasList; // x19
  int32_t eventSuperBossEntity; // w20
  System_String_o *EventUIAssetDataPath; // x20

  if ( (byte_40F842B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v3);
    byte_40F842B = 1;
  }
  p_atlasList = &this->fields.atlasList;
  if ( this->fields.atlasList )
  {
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    {
      ((void (*)(void))j_il2cpp_runtime_class_init_0)();
    }
    EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventSuperBossEntity, method);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
    *p_atlasList = 0LL;
    sub_B16F98(p_atlasList, 0LL);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v3; // x0

  if ( (byte_40F842A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_40F842A = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
  if ( !v3 )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserSuperBossEntity_o *CurrentUserSuperBossEntity; // x0
  float *p_HPfrom; // x20
  struct UserSuperBossEntity_o *currentUserBossEnt; // x24
  BalanceConfig_c *v16; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t eventSuperBossEntity; // w21
  EventSuperBossMaster_o *v22; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x2
  struct System_String_o *breakEffectBeforeSeName; // x0
  WarQuestSelectionMaster_o *v28; // x0
  int32_t v29; // w21
  EventBossStatusUiMaster_o *v30; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v33; // x21
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  const MethodInfo *v36; // x2
  struct EventBossStatusUiEntity_o *v37; // x8
  struct System_String_o *v38; // x0
  struct System_String_o *v39; // x21
  int v40; // s0
  struct EventBossStatusUiEntity_o *v44; // x0
  UnityEngine_Component_o *totalHpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v47; // x8
  int v48; // w22
  int64_t v49; // x9
  __int64 v50; // x10
  int v51; // w11
  __int64 v52; // x12
  int v53; // w21
  __int64 v54; // x13
  __int64 *v55; // x13
  int64_t v56; // t1
  __int64 v57; // x13
  bool v58; // vf
  __int64 v59; // x13
  __int64 v60; // x9
  int64_t v61; // x10
  __int64 v62; // x9
  int v63; // w11
  __int64 v64; // x12
  __int64 v65; // x13
  __int64 *v66; // x13
  int64_t v67; // t1
  __int64 v68; // x13
  int64_t v69; // x13
  struct EventBossStatusUiEntity_o *v70; // x8
  BalanceConfig_c *v71; // x0
  int32_t idx; // w24
  UnityEngine_Component_o *hpBarSliderWhite; // x0
  UnityEngine_GameObject_o *v74; // x0
  TitleInfoPersonalBossComponent_o *v75; // x0
  const MethodInfo *v76; // x1
  UIProgressBar_o *hpBarSliderUnder; // x0
  const MethodInfo *v78; // x2
  UIProgressBar_o *v79; // x0
  const MethodInfo *v80; // x3
  int32_t clearBossEffect; // w1
  TitleInfoPersonalBossComponent_o *v82; // x0
  int32_t v83; // w2
  struct EventBossStatusUiEntity_o *v84; // x8
  struct UserSuperBossEntity_o *v85; // x9
  EventBossStatusUiEntity_c *klass; // x8
  float v87; // s0
  float v88; // s0
  UIProgressBar_o *v89; // x0
  const MethodInfo *v90; // x2
  UIProgressBar_o *v91; // x0
  float v92; // s0
  float v93; // s0
  float v94; // s0
  UIProgressBar_o *v95; // x0
  const MethodInfo *v96; // x2
  UIProgressBar_o *v97; // x0
  float v98; // s0
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  const MethodInfo *v102; // x3
  UISprite_o *hpBarWhiteSprite; // x20
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x3
  UIProgressBar_o *v110; // x0
  const MethodInfo *v111; // x2
  EventSuperBossEntity_o *v112; // [xsp+0h] [xbp-50h] BYREF
  __int64 v113; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8424 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CondType_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_EventSuperBossMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&TitleInfoPersonalBossComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_18527, v8);
    sub_B16FFC(&StringLiteral_18481, v9);
    sub_B16FFC(&StringLiteral_18522, v10);
    sub_B16FFC(&StringLiteral_18482, v11);
    sub_B16FFC(&StringLiteral_18526, v12);
    byte_40F8424 = 1;
  }
  v112 = 0LL;
  v113 = 0LL;
  CurrentUserSuperBossEntity = TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(this, method);
  p_HPfrom = &this->fields.HPfrom;
  *(_QWORD *)&this->fields.HPfrom = CurrentUserSuperBossEntity;
  sub_B16F98(&this->fields.HPfrom, CurrentUserSuperBossEntity);
  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( !currentUserBossEnt )
    currentUserBossEnt = *(struct UserSuperBossEntity_o **)p_HPfrom;
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  static_fields = v16->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v22 = (EventSuperBossMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v22 )
      goto LABEL_108;
    if ( EventSuperBossMaster__TryGetEntity(
           v22,
           &v112,
           eventSuperBossEntity,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      }
      if ( !v112 )
        goto LABEL_108;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v24 = System_Int32__ToString((int)v112 + 56, 0LL);
      v25 = System_String__Concat_43743732(SUPERBOSS_ICON_SPNAME_PREFIX, v24, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v25, v26);
      if ( !v112 )
        goto LABEL_108;
      breakEffectBeforeSeName = this->fields.breakEffectBeforeSeName;
      if ( !breakEffectBeforeSeName )
        goto LABEL_108;
      UILabel__set_text((UILabel_o *)breakEffectBeforeSeName, v112->fields.name, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v28 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v29 = (int32_t)this->fields.eventSuperBossEntity;
    v30 = (EventBossStatusUiMaster_o *)v28;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v30 )
      goto LABEL_108;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v30,
                                  v29,
                                  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
                                  0LL);
  }
  else
  {
    if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    }
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity )
      goto LABEL_108;
    v33 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v34 = System_Int32__ToString((int)eventBossStatusUiEntity + 56, 0LL);
    v35 = System_String__Concat_43743732(v33, v34, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v35, v36);
    v37 = this->fields.eventBossStatusUiEntity;
    if ( !v37 )
      goto LABEL_108;
    v38 = this->fields.breakEffectBeforeSeName;
    if ( !v38 )
      goto LABEL_108;
    UILabel__set_text((UILabel_o *)v38, (System_String_o *)v37->fields.script, 0LL);
    EntityFromEventIdAndIndex = (EventBossStatusUiEntity_o *)this->fields.oldUserBossEnt;
  }
  v39 = this->fields.breakEffectBeforeSeName;
  if ( EntityFromEventIdAndIndex )
  {
    v114.fields.r = 0.0;
    v114.fields.g = 0.0;
    v114.fields.b = 0.0;
    v114.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v40 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v114, 0LL);
    if ( !v39 )
      goto LABEL_108;
  }
  else
  {
    v44 = this->fields.eventBossStatusUiEntity;
    if ( !v44 )
      goto LABEL_108;
    *(UnityEngine_Color_o *)&v40 = EventSuperBossEntity__GetBossColor((EventSuperBossEntity_o *)v44, 0LL);
    if ( !v39 )
      goto LABEL_108;
  }
  UILabel__set_effectColor((UILabel_o *)v39, *(UnityEngine_Color_o *)&v40, 0LL);
  totalHpLabel = (UnityEngine_Component_o *)this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_108;
  gameObject = UnityEngine_Component__get_gameObject(totalHpLabel, 0LL);
  if ( !gameObject )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v47 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v47 )
    goto LABEL_108;
  v48 = *(_DWORD *)(v47 + 24) - 1;
  LODWORD(this->fields.clearBossEffect) = v48;
  v49 = currentUserBossEnt ? currentUserBossEnt->fields.damage : 0LL;
  v50 = *(_QWORD *)(v47 + 24);
  if ( (int)v50 < 1 )
  {
    v59 = v49;
    v53 = v48;
  }
  else
  {
    v51 = 0;
    v52 = *(_QWORD *)(v47 + 24);
    v53 = v48;
    while ( 1 )
    {
      if ( v51 >= (unsigned int)v52 )
        goto LABEL_107;
      v54 = v47 + 8LL * v51;
      v56 = *(_QWORD *)(v54 + 32);
      v55 = (__int64 *)(v54 + 32);
      this->fields.oldDamage = v56;
      v52 = *(_QWORD *)(v47 + 24);
      if ( v51 >= (unsigned int)v52 )
        goto LABEL_107;
      v57 = *v55;
      v58 = __OFSUB__(v49, v57);
      v59 = v49 - v57;
      if ( v59 < 0 != v58 )
        break;
      ++v51;
      --v53;
      v49 = v59;
      if ( v51 >= (int)v50 )
        goto LABEL_62;
    }
    v59 = v49;
  }
LABEL_62:
  v60 = *(_QWORD *)&this->fields.HPfrom;
  *(_QWORD *)&this->fields.maxBreakCount = v59;
  if ( v60 )
    v61 = *(_QWORD *)(v60 + 32);
  else
    v61 = 0LL;
  v62 = *(_QWORD *)(v47 + 24);
  if ( (int)v62 >= 1 )
  {
    v63 = 0;
    v64 = *(_QWORD *)(v47 + 24);
    while ( v63 < (unsigned int)v64 )
    {
      v65 = v47 + 8LL * v63;
      v67 = *(_QWORD *)(v65 + 32);
      v66 = (__int64 *)(v65 + 32);
      this->fields.currentDamage = v67;
      v64 = *(_QWORD *)(v47 + 24);
      if ( v63 >= (unsigned int)v64 )
        break;
      v68 = *v66;
      v58 = __OFSUB__(v61, v68);
      v69 = v61 - v68;
      if ( v69 < 0 != v58 )
        goto LABEL_72;
      ++v63;
      --v48;
      v61 = v69;
      if ( v63 >= (int)v62 )
        goto LABEL_73;
    }
LABEL_107:
    sub_B17100();
    sub_B170A0();
  }
LABEL_72:
  v69 = v61;
LABEL_73:
  v70 = this->fields.eventBossStatusUiEntity;
  this->fields.oldMaxHp = v69;
  if ( !v70 )
    goto LABEL_108;
  v71 = BalanceConfig_TypeInfo;
  idx = v70->fields.idx;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v71 = BalanceConfig_TypeInfo;
  }
  if ( idx == v71->static_fields->OrtThirdFormId )
    LOBYTE(this->fields.hpList) = v53 == 1 && v48 == 0;
  LODWORD(v113) = v53 + 1;
  HIDWORD(v113) = v53;
  hpBarSliderWhite = (UnityEngine_Component_o *)this->fields.hpBarSliderWhite;
  if ( !hpBarSliderWhite || (v74 = UnityEngine_Component__get_gameObject(hpBarSliderWhite, 0LL)) == 0LL )
LABEL_108:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v74, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v75, v76) )
  {
    hpBarSliderUnder = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
    if ( hpBarSliderUnder )
    {
      UIProgressBar__set_value(hpBarSliderUnder, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v78);
      v79 = (UIProgressBar_o *)this->fields.hpBarSliderWhite;
      if ( v79 )
      {
        UIProgressBar__set_value(v79, 0.0, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v82 = this;
        v83 = 0;
        goto LABEL_101;
      }
    }
    goto LABEL_108;
  }
  v84 = this->fields.eventBossStatusUiEntity;
  if ( v84 )
  {
    v85 = this->fields.currentUserBossEnt;
    if ( v85 )
    {
      klass = v84[1].klass;
      if ( v85->fields.damage < (__int64)klass
        && (!*(_QWORD *)p_HPfrom || *(_QWORD *)(*(_QWORD *)p_HPfrom + 32LL) >= (__int64)klass) )
      {
        v110 = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
        if ( !v110 )
          goto LABEL_108;
        UIProgressBar__set_value(v110, 0.0, 0LL);
        TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v111);
        v91 = (UIProgressBar_o *)this->fields.hpBarSliderWhite;
        if ( !v91 )
          goto LABEL_108;
        v92 = 1.0;
        if ( v53 <= 0 )
          v92 = 0.0;
LABEL_95:
        UIProgressBar__set_value(v91, v92, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v82 = this;
        v83 = v53;
        goto LABEL_101;
      }
    }
  }
  if ( LOBYTE(this->fields.hpList) )
  {
    v87 = 1.0 - (double)*(__int64 *)&this->fields.maxBreakCount / (double)this->fields.oldDamage;
    v88 = UnityEngine_Mathf__Clamp01(v87, 0LL);
    v89 = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
    *(float *)&this->fields.currentMaxHp = v88;
    HIDWORD(this->fields.currentMaxHp) = 0;
    if ( !v89 )
      goto LABEL_108;
    UIProgressBar__set_value(v89, v88, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(
      this,
      this->fields.oldDamage - *(_QWORD *)&this->fields.maxBreakCount,
      v90);
    v91 = (UIProgressBar_o *)this->fields.hpBarSliderWhite;
    if ( !v91 )
      goto LABEL_108;
    v92 = 0.0;
    if ( v53 > 0 )
      v92 = 1.0;
    goto LABEL_95;
  }
  LODWORD(v113) = v48 + 1;
  HIDWORD(v113) = v48;
  v93 = 1.0 - (double)this->fields.oldMaxHp / (double)this->fields.currentDamage;
  v94 = UnityEngine_Mathf__Clamp01(v93, 0LL);
  v95 = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
  *(float *)&this->fields.currentMaxHp = v94;
  *((float *)&this->fields.currentMaxHp + 1) = v94;
  if ( !v95 )
    goto LABEL_108;
  UIProgressBar__set_value(v95, v94, 0LL);
  TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentDamage - this->fields.oldMaxHp, v96);
  v97 = (UIProgressBar_o *)this->fields.hpBarSliderWhite;
  if ( !v97 )
    goto LABEL_108;
  v98 = 0.0;
  if ( v48 > 0 )
    v98 = 1.0;
  UIProgressBar__set_value(v97, v98, 0LL);
  clearBossEffect = (int32_t)this->fields.clearBossEffect;
  v82 = this;
  v83 = v48;
LABEL_101:
  TitleInfoPersonalBossComponent__SetupBreakGauge(v82, clearBossEffect, v83, v80);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v100 = System_Int32__ToString((int32_t)&v113 + 4, 0LL);
  v101 = System_String__Concat_43743732((System_String_o *)StringLiteral_18522, v100, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v101, v102);
  hpBarWhiteSprite = this->fields.hpBarWhiteSprite;
  v104 = System_Int32__ToString((int32_t)&v113, 0LL);
  v105 = System_String__Concat_43743732((System_String_o *)StringLiteral_18526, v104, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarWhiteSprite, v105, v106);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.breakIconList,
    (System_String_o *)StringLiteral_18527,
    v107);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_18482,
    v108);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.hpBarSlider,
    (System_String_o *)StringLiteral_18481,
    v109);
}


bool __fastcall TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v11; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F8429 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40F8429 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          *(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.eventId,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    v11 = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.eventId;
    if ( !v11 )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      v11,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v17 = v16;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
      {
        v13 = 0;
        v14 = 8;
        goto LABEL_16;
      }
      current = v17.fields.current;
      if ( !v17.fields.current )
        sub_B170D4();
    }
    while ( !UIAtlas__GetSprite((UIAtlas_o *)v17.fields.current, spriteName, 0LL) );
    if ( !sprite )
      sub_B170D4();
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v13 = 1;
    v14 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v14 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v13;
}


void __fastcall TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8434 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, hp);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3268, v6);
    byte_40F8434 = 1;
  }
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3268, 0LL);
  v11 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !hpBarUnderSprite )
    sub_B170D4();
  UILabel__set_text(hpBarUnderSprite, v10, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventBossStatusUiMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventBossStatusUiEntity_o *v13; // x0
  System_Int64_array *BreakGaugeHpList; // x0
  int32_t eventSuperBossEntity; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_40F8423 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, superBossEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v9);
    byte_40F8423 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  sub_B16F98(&this->fields.eventBossStatusUiEntity, superBossEntity);
  this->fields.currentUserBossEnt = oldUserBossEnt;
  sub_B16F98(&this->fields.currentUserBossEnt, oldUserBossEnt);
  LOBYTE(this[1].klass) = 0;
  if ( this->fields.eventBossStatusUiEntity )
  {
    LODWORD(this->fields.eventSuperBossEntity) = this->fields.eventBossStatusUiEntity->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity
      || !Master_WarQuestSelectionMaster
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_WarQuestSelectionMaster,
                                        (int32_t)this->fields.eventSuperBossEntity,
                                        eventBossStatusUiEntity->fields.idx,
                                        0LL),
          this->fields.oldUserBossEnt = (struct UserSuperBossEntity_o *)EntityFromEventIdAndIndex,
          sub_B16F98(&this->fields.oldUserBossEnt, EntityFromEventIdAndIndex),
          (v13 = this->fields.eventBossStatusUiEntity) == 0LL) )
    {
      sub_B170D4();
    }
    BreakGaugeHpList = EventSuperBossEntity__GetBreakGaugeHpList((EventSuperBossEntity_o *)v13, 0LL);
    *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField = BreakGaugeHpList;
    sub_B16F98(&this->fields._IsPlayedDamageAnimation_k__BackingField, BreakGaugeHpList);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventSuperBossEntity, v20, v21);
  }
}


void __fastcall TitleInfoPersonalBossComponent__SetupBossIcon(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UISprite_o *bossHpFrame; // x20
  bool v6; // w0
  UnityEngine_Behaviour_o *v7; // x0
  struct UISprite_o *v8; // x0

  bossHpFrame = this->fields.bossHpFrame;
  v6 = TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, bossHpFrame, spName, v3);
  if ( !bossHpFrame )
    goto LABEL_7;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossHpFrame, v6, 0LL);
  v7 = (UnityEngine_Behaviour_o *)this->fields.bossHpFrame;
  if ( !v7 )
    goto LABEL_7;
  if ( UnityEngine_Behaviour__get_enabled(v7, 0LL) )
  {
    v8 = this->fields.bossHpFrame;
    if ( v8 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
        v8,
        v8->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_7:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetupBreakGauge(
        TitleInfoPersonalBossComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  long double v4; // q8
  TitleInfoPersonalBossComponent_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  struct UISprite_o *breakIcon_11; // x8
  int leftAnchor; // w23
  unsigned int v12; // w20
  __int64 v13; // x0
  int v14; // w24
  int v15; // w9
  __int64 v16; // x27
  __int64 v17; // x0
  struct UISprite_o *v18; // x8
  UISprite_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x2
  TitleInfoPersonalBossComponent_o *v22; // x0
  UISprite_o *v23; // x1
  struct UISprite_o *v24; // x8
  struct UISprite_o *v25; // x8
  __int64 v26; // x0
  long double v27; // q0
  struct UILabel_o *v28; // x0
  UILabel_c *klass; // x8
  struct UILabel_o *bossName; // x0
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_40F8425 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18519, *(_QWORD *)&maxCount);
    sub_B16FFC(&StringLiteral_18520, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_B16FFC(&StringLiteral_18518, v9);
    byte_40F8425 = 1;
  }
  v31 = 0;
  breakIcon_11 = v7->fields.breakIcon_11;
  if ( !breakIcon_11 )
    goto LABEL_36;
  leftAnchor = (int)breakIcon_11->fields.leftAnchor;
  if ( restCount <= 9 )
  {
    if ( leftAnchor < 1 )
    {
LABEL_33:
      TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        v7,
        (UISprite_o *)v7->fields.bossName,
        (System_String_o *)StringLiteral_18520,
        method);
      bossName = v7->fields.bossName;
      if ( bossName )
      {
        klass = bossName->klass;
        LODWORD(v27) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_B170D4();
    }
    v14 = 2;
    LODWORD(v4) = 1.0;
    while ( 1 )
    {
      v15 = v14 - 2;
      if ( (unsigned int)(v14 - 2) >= LODWORD(breakIcon_11->fields.leftAnchor) )
        goto LABEL_37;
      v16 = v15;
      v17 = *((_QWORD *)&breakIcon_11->fields.rightAnchor + v15);
      if ( !v17 )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const MethodInfo *, float))(*(_QWORD *)v17 + 440LL))(
                                                   v17,
                                                   *(_QWORD *)(*(_QWORD *)v17 + 448LL),
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v16 < restCount )
        break;
      if ( (int)v16 < maxCount )
      {
        v24 = v7->fields.breakIcon_11;
        if ( !v24 )
          goto LABEL_36;
        if ( (unsigned int)v16 >= LODWORD(v24->fields.leftAnchor) )
          goto LABEL_37;
        v23 = (UISprite_o *)*((_QWORD *)&v24->fields.rightAnchor + v16);
        v21 = (System_String_o *)StringLiteral_18519;
        v22 = v7;
        goto LABEL_24;
      }
LABEL_28:
      if ( v14 - 1 >= leftAnchor )
        goto LABEL_33;
      breakIcon_11 = v7->fields.breakIcon_11;
      ++v14;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
    v18 = v7->fields.breakIcon_11;
    if ( !v18 )
      goto LABEL_36;
    if ( (unsigned int)v16 >= LODWORD(v18->fields.leftAnchor) )
      goto LABEL_37;
    v19 = (UISprite_o *)*((_QWORD *)&v18->fields.rightAnchor + v16);
    v31 = v14;
    v20 = System_Int32__ToString((int32_t)&v31, 0LL);
    v21 = System_String__Concat_43743732((System_String_o *)StringLiteral_18518, v20, 0LL);
    v22 = v7;
    v23 = v19;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v22,
                                                 v23,
                                                 v21,
                                                 method);
    v25 = v7->fields.breakIcon_11;
    if ( !v25 )
      goto LABEL_36;
    if ( (unsigned int)v16 >= LODWORD(v25->fields.leftAnchor) )
      goto LABEL_37;
    v26 = *((_QWORD *)&v25->fields.rightAnchor + v16);
    if ( !v26 )
      goto LABEL_36;
    this = (TitleInfoPersonalBossComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)v26 + 440LL))(
                                                 v26,
                                                 *(_QWORD *)(*(_QWORD *)v26 + 448LL),
                                                 v4);
    goto LABEL_28;
  }
  if ( leftAnchor >= 1 )
  {
    v12 = 0;
    while ( v12 < LODWORD(breakIcon_11->fields.leftAnchor) )
    {
      v13 = *((_QWORD *)&breakIcon_11->fields.rightAnchor + (int)v12);
      if ( !v13 )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const MethodInfo *, float))(*(_QWORD *)v13 + 440LL))(
                                                   v13,
                                                   *(_QWORD *)(*(_QWORD *)v13 + 448LL),
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)++v12 >= leftAnchor )
        goto LABEL_31;
      breakIcon_11 = v7->fields.breakIcon_11;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
LABEL_37:
    sub_B17100(this, *(_QWORD *)&maxCount, *(_QWORD *)&restCount, method);
    sub_B170A0();
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v7,
    (UISprite_o *)v7->fields.bossName,
    (System_String_o *)StringLiteral_18520,
    method);
  v28 = v7->fields.bossName;
  if ( !v28 )
    goto LABEL_36;
  klass = v28->klass;
  LODWORD(v27) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass->vtable._8_set_alpha.method)(v27);
}


void __fastcall TitleInfoPersonalBossComponent__StartDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  EventBossStatusUiEntity_c *klass; // x8
  __int64 v13; // x9
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *ClearBossEffect; // x0
  UnityEngine_Object_o *animEndCall; // x21
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  float v27; // s8
  System_Action_o *v28; // x20
  System_Collections_IEnumerator_o *v29; // x1

  v6 = this;
  if ( (byte_40F842D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, mapAssetData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_B16FFC(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v9);
    byte_40F842D = 1;
  }
  if ( LOBYTE(v6[1].klass) )
    goto LABEL_4;
  eventBossStatusUiEntity = v6->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (currentUserBossEnt = v6->fields.currentUserBossEnt) != 0LL
    && (klass = eventBossStatusUiEntity[1].klass, currentUserBossEnt->fields.damage < (__int64)klass)
    && ((v13 = *(_QWORD *)&v6->fields.HPfrom) == 0 || *(_QWORD *)(v13 + 32) >= (__int64)klass)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    LOBYTE(v6[1].klass) = 1;
    *(_QWORD *)&v6->fields.isGaugeBreak = callback;
    sub_B16F98(&v6->fields.isGaugeBreak, callback);
    gaugeBreakEffect = (UnityEngine_Object_o *)v6->fields.gaugeBreakEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
    {
      ClearBossEffect = TitleInfoPersonalBossComponent__GetClearBossEffect(v6, mapAssetData, v16);
      v6->fields.gaugeBreakEffect = ClearBossEffect;
      sub_B16F98(&v6->fields.gaugeBreakEffect, ClearBossEffect);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v6, v15);
  }
  else
  {
    if ( !LOBYTE(v6->fields.hpList) )
    {
LABEL_4:
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    LOBYTE(v6[1].klass) = 1;
    *(_QWORD *)&v6->fields.isGaugeBreak = callback;
    sub_B16F98(&v6->fields.isGaugeBreak, callback);
    animEndCall = (UnityEngine_Object_o *)v6->fields.animEndCall;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(animEndCall, 0LL, 0LL) )
    {
      v20 = TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v6, mapAssetData, v19);
      v6->fields.animEndCall = (struct System_Action_o *)v20;
      sub_B16F98(&v6->fields.animEndCall, v20);
    }
    if ( !System_String__IsNullOrEmpty(v6->fields.breakHpDownSeName, 0LL) )
    {
      v25 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 75) & 2) != 0 )
        v25 = (_QWORD *)sub_B17004();
      v26 = (System_Reflection_MethodBase_o *)sub_B16FE0(v25, v25[3]);
      OverwriteAssetSoundName__PlaySe(v26, v6->fields.breakHpDownSeName, 0LL);
    }
    v27 = *(float *)&v6->fields.assetData;
    v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v6,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v29 = BasicHelper__DelayCall(v27, v28, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v6, v29, 0LL);
  }
}


void __fastcall TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v3; // x8
  __int64 clearBossEffect_low; // x1
  int64_t v5; // x9
  __int64 v6; // x8
  __int64 v7; // x10
  int v8; // w11
  __int64 v9; // x12
  __int64 v10; // x2
  __int64 v11; // x13
  __int64 *v12; // x13
  int64_t v13; // t1
  __int64 v14; // x13
  bool v15; // vf
  int64_t v16; // x13

  v3 = *(_QWORD *)&this->fields.HPfrom;
  clearBossEffect_low = LODWORD(this->fields.clearBossEffect);
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 32);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v6 )
    sub_B170D4();
  v7 = *(_QWORD *)(v6 + 24);
  if ( (int)v7 < 1 )
  {
    v16 = v5;
    LODWORD(v10) = this->fields.clearBossEffect;
  }
  else
  {
    v8 = 0;
    v9 = *(_QWORD *)(v6 + 24);
    v10 = (unsigned int)clearBossEffect_low;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v9
        || (v11 = v6 + 8LL * v8,
            v13 = *(_QWORD *)(v11 + 32),
            v12 = (__int64 *)(v11 + 32),
            this->fields.currentDamage = v13,
            v9 = *(_QWORD *)(v6 + 24),
            v8 >= (unsigned int)v9) )
      {
        sub_B17100(this, clearBossEffect_low, v10);
        sub_B170A0();
      }
      v14 = *v12;
      v15 = __OFSUB__(v5, v14);
      v16 = v5 - v14;
      if ( v16 < 0 != v15 )
        break;
      ++v8;
      v10 = (unsigned int)(v10 - 1);
      v5 = v16;
      if ( v8 >= (int)v7 )
        goto LABEL_14;
    }
    v16 = v5;
  }
LABEL_14:
  this->fields.oldMaxHp = v16;
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, clearBossEffect_low, v10, v2);
}


void __fastcall TitleInfoPersonalBossComponent__UpdateDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v2; // x20
  TitleInfoPersonalBossComponent_o *v3; // x19
  UnityEngine_Component_o *breakHpDownSeName; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v2 = *(System_Action_o **)&this->fields.isGaugeBreak;
  v3 = this;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B16F98(&this->fields.isGaugeBreak, 0LL);
  ActionExtensions__Call(v2, 0LL);
  v3->fields.currentUserBossEnt = 0LL;
  v3 = (TitleInfoPersonalBossComponent_o *)((char *)v3 + 200);
  LOBYTE(v3->fields.hpBarUpperSprite) = 0;
  sub_B16F98(v3, 0LL);
  breakHpDownSeName = (UnityEngine_Component_o *)v3[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName || (gameObject = UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bossHpFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  bossHpFrame = (UnityEngine_Component_o *)this->fields.bossHpFrame;
  if ( !bossHpFrame || (gameObject = UnityEngine_Component__get_gameObject(bossHpFrame, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_2(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v2; // x20
  TitleInfoPersonalBossComponent_o *v3; // x19

  v2 = *(System_Action_o **)&this->fields.isGaugeBreak;
  v3 = this;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B16F98(&this->fields.isGaugeBreak, 0LL);
  ActionExtensions__Call(v2, 0LL);
  v3->fields.currentUserBossEnt = 0LL;
  v3 = (TitleInfoPersonalBossComponent_o *)((char *)v3 + 200);
  LOBYTE(v3->fields.hpBarUpperSprite) = 0;
  sub_B16F98(v3, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void __fastcall TitleInfoPersonalBossComponent___PlayGaugeBreakEffect_b__66_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(this, method);
  TitleInfoPersonalBossComponent__PlayHpRecoverEffect(this, v3);
}


void __fastcall TitleInfoPersonalBossComponent___Setup_b__48_0(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  TitleInfoPersonalBossComponent__LoadLocalAtlas(this, (int32_t)this->fields.eventSuperBossEntity, v2);
  TitleInfoPersonalBossComponent__SetDisp(this, v4);
}


bool __fastcall TitleInfoPersonalBossComponent__get_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  return (bool)this[1].klass;
}


void __fastcall TitleInfoPersonalBossComponent__set_IsPlayedDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = value;
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass55_0___LoadEventUIAssetData_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.atlasList,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  struct TitleInfoPersonalBossComponent_o *_4__this; // x9
  float v5; // s0
  struct TitleInfoPersonalBossComponent_o *v6; // x8
  UIProgressBar_o *hpBarSliderUnder; // x0
  float v8; // s8
  TitleInfoPersonalBossComponent_o *v9; // x0
  double v10; // d3
  double v11; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (_4__this = this->fields.__4__this) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(
               *(float *)&_4__this->fields.currentMaxHp,
               *((float *)&_4__this->fields.currentMaxHp + 1),
               easingObj->fields.mStartTime,
               0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (hpBarSliderUnder = (UIProgressBar_o *)v6->fields.hpBarSliderUnder) == 0LL
    || (v8 = v5, UIProgressBar__set_value(hpBarSliderUnder, v5, 0LL), (v9 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = v8 * (double)this->fields.maxHp;
  v11 = -v10;
  if ( v10 != INFINITY )
    v11 = v8 * (double)this->fields.maxHp;
  TitleInfoPersonalBossComponent__SetTotalHpText(v9, (__int64)v11, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(_4__this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__0(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  struct TitleInfoPersonalBossComponent_o *_4__this; // x9
  float v5; // s0
  TitleInfoPersonalBossComponent_o *v6; // x0
  double v7; // d3
  double v8; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (_4__this = this->fields.__4__this) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(
               *(float *)&_4__this->fields.currentMaxHp,
               *((float *)&_4__this->fields.currentMaxHp + 1),
               easingObj->fields.mStartTime,
               0LL),
        (v6 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v7 = v5 * (double)this->fields.maxHp;
  v8 = -v7;
  if ( v7 != INFINITY )
    v8 = v7;
  TitleInfoPersonalBossComponent__SetTotalHpText(v6, (__int64)v8, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct TitleInfoPersonalBossComponent_o *v9; // x20
  float v10; // s8
  System_Action_o *_9__2; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_40F7836 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v3);
    byte_40F7836 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, 0LL),
        (v9 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = *((float *)&v9->fields.assetData + 1);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = BasicHelper__DelayCall(v10, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)v9, v18, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, 0LL);
}