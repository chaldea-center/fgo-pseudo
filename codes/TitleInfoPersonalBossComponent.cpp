void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoPersonalBossComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  TitleInfoPersonalBossComponent_c *v25; // x8

  if ( (byte_435031A & 1) == 0 )
  {
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&StringLiteral_14651/*"TitleInfoEventSuperBossEffect_Dead"*/);
    sub_B70694(&StringLiteral_18879/*"event_superboss_icon_"*/);
    sub_B70694(&StringLiteral_14650/*"TitleInfoEventSuperBossEffect_Break"*/);
    byte_435031A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18879/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18879/*"event_superboss_icon_"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_14651/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v9->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14651/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->SUPERBOSS_CLEAR_EFFECT_PREFAB, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_14650/*"TitleInfoEventSuperBossEffect_Break"*/;
  v17->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14650/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_B70630(
    (BattleServantConfConponent_o *)&v17->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = TitleInfoPersonalBossComponent_TypeInfo;
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 1.5;
  v25->static_fields->CLEAR_CALLBACK_DELAY = 2.0;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4350319 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B70694(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    sub_B70694(&StringLiteral_16687/*"ar60"*/);
    sub_B70694(&StringLiteral_16682/*"ar210"*/);
    byte_4350319 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16687/*"ar60"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16687/*"ar60"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.breakHpDownSeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16682/*"ar210"*/;
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = StringLiteral_16682/*"ar210"*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.breakEffectStartWaitTime, v10, v11, v12, v13, v14, v15, v16);
  this->fields.assetData = (struct AssetData_o *)0x3E99999A3F800000LL;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.eventId = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(
        int32_t eventId,
        int32_t id,
        int64_t damange,
        const MethodInfo *method)
{
  UserSuperBossEntity_o *v7; // x22
  int64_t UserId; // x0
  __int64 v9; // x1

  if ( (byte_4350318 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UserSuperBossEntity_TypeInfo);
    byte_4350318 = 1;
  }
  v7 = (UserSuperBossEntity_o *)sub_B70764(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v7, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v7 )
    sub_B7076C(UserId, v9);
  v7->fields.userId = UserId;
  v7->fields.eventId = eventId;
  v7->fields.superBossId = id;
  v7->fields.damage = damange;
  return v7;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *v6; // x21
  __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  Il2CppObject *v12; // x20
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int eventSuperBossEntity; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435030F & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&StringLiteral_16454/*"_{0}{1:D2}"*/);
    byte_435030F = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v6 = System_String__Concat_44758168(
         v5->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16454/*"_{0}{1:D2}"*/,
         0LL);
  eventSuperBossEntity = (int)this->fields.eventSuperBossEntity;
  v8 = j_il2cpp_value_box_0(int_TypeInfo, &eventSuperBossEntity, v7);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B7076C(v8, v9);
  v12 = (Il2CppObject *)v8;
  idx = eventBossStatusUiEntity->fields.idx;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v10);
  v14 = System_String__Format_44753704(v6, v12, v13, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v14,
                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
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
  struct EventBossStatusUiEntity_o *IsOpen; // x0
  __int64 v12; // x1
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
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t idx; // w19
  int32_t eventId; // w21
  __int64 v39; // x0

  if ( (byte_4350317 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4350317 = 1;
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
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL) )
    goto LABEL_23;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = v7->static_fields;
  v9 = v8->OrtLateQuestId;
  OrtLatePhaseDead = v8->OrtLatePhaseDead;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v9, OrtLatePhaseDead, 0, 0LL);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
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
    IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v28, v29 + 1, 0, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_43:
      IsOpen = this->fields.eventBossStatusUiEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity((EventSuperBossEntity_o *)IsOpen, 0LL);
LABEL_52:
      sub_B7076C(IsOpen, v12);
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
      v39 = sub_B70798(IsOpen);
      sub_B70738(v39, 0LL);
    }
  }
  v17 = 0LL;
LABEL_46:
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    goto LABEL_52;
  eventId = eventBossStatusUiEntity->fields.eventId;
  idx = eventBossStatusUiEntity->fields.idx;
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
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4350307 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_6299/*"EventUI/Prefabs/{0}"*/);
    byte_4350307 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Format((System_String_o *)StringLiteral_6299/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_435030D & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    byte_435030D = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  int v4; // w20
  TitleInfoPersonalBossComponent_c *v5; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0

  v4 = (int)this;
  if ( (byte_4350311 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4350311 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v5 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v5 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v5->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v7 = System_Int32__ToString(v4 + 176, 0LL);
  v8 = System_String__Concat_44760452(
         SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16127/*"_"*/,
         v7,
         0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v8,
                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
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
  TerminalSceneComponent_c *mapButtonGrid; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4350303 & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4350303 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  mapButtonGrid = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mapButtonGrid = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mapButtonGrid->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL
    || (mapButtonGrid = (TerminalSceneComponent_c *)mTerminalMap->fields.mapButtonGrid) == 0LL )
  {
    sub_B7076C(mapButtonGrid, method);
  }
  return UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)mapButtonGrid, 0LL);
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
  BalanceConfig_c *v2; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_4350316 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    byte_4350316 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  static_fields = v2->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseDead = static_fields->OrtLatePhaseDead;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseDead, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__LoadEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
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
  const MethodInfo *v22; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_4350308 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__);
    sub_B70694(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
    byte_4350308 = 1;
  }
  v7 = sub_B70764(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *)v7,
    0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v22);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v24, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v5; // x0
  __int64 v6; // x2
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v16; // [xsp+8h] [xbp-58h] BYREF
  int v17; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4350309 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23884/*"{0:D2}"*/);
    sub_B70694(&StringLiteral_5467/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_4350309 = 1;
  }
  if ( this->fields.atlasList )
  {
    v5 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
    if ( !v5 )
LABEL_18:
      sub_B7076C(v5, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v5,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v17 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v6);
      v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23884/*"{0:D2}"*/, v9, 0LL);
      v16 = eventId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11);
      v13 = System_String__Format_44753704((System_String_o *)StringLiteral_5467/*"DownloadEventUIAtlas{0}{1}"*/, v12, v10, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v13,
                                                                 v14);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                        GameObjectFromEventUIAssetData,
                                                                        0LL,
                                                                        0LL);
      if ( ((unsigned __int8)v5 & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v5 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
      if ( !v5 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v8; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1

  v8 = *(System_Action_o **)&this->fields.isGaugeBreak;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  LOBYTE(this->fields.hpList) = 0;
  this->fields.currentUserBossEnt = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.currentUserBossEnt, 0LL, v10, v11, v12, v13, v14, v15);
  TitleInfoPersonalBossComponent__SetDisp(this, v16);
}


void __fastcall TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  struct UnityEngine_GameObject_o *v4; // x20
  UnityEngine_GameObject_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  TitleInfoPersonalBossComponent_c *v9; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v11; // x20
  System_Collections_IEnumerator_o *v12; // x1
  System_Action_o *v13; // x21
  System_Action_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4350310 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__);
    sub_B70694(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__);
    sub_B70694(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_4350310 = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
  {
    v4 = this->fields.gaugeBreakEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       (UnityEngine_UI_Dropdown_DropdownItem_o *)v4,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v5, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition(v5, 0LL);
    if ( v5 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v5,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        v9 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v9 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v9->static_fields->CLEAR_CALLBACK_DELAY;
        v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v12 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v11, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
        return;
      }
      v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v13,
          0LL);
        v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v14;
        sub_B70630(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v14,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        return;
      }
    }
    sub_B7076C(v6, v7);
  }
}


void __fastcall TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *animEndCall; // x20
  const MethodInfo *v4; // x1
  struct System_Action_o *v5; // x20
  UnityEngine_Component_o *rightAnchor; // x0
  __int64 v7; // x1
  struct UISprite_o *breakIcon_11; // x8
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v12; // w22
  System_Action_o *v13; // x0
  System_Action_o *v14; // x20
  System_Collections_IEnumerator_o *v15; // x1
  __int64 v16; // x0

  if ( (byte_4350313 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__);
    sub_B70694(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__);
    byte_4350313 = 1;
  }
  animEndCall = this->fields.animEndCall;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)animEndCall, 0LL, 0LL) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v4);
    return;
  }
  v5 = this->fields.animEndCall;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rightAnchor = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v5,
                                             (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIcon_11 = this->fields.breakIcon_11;
  if ( !breakIcon_11 )
    goto LABEL_19;
  if ( !LODWORD(breakIcon_11->fields.leftAnchor) )
  {
    v16 = sub_B70798(rightAnchor);
    sub_B70738(v16, 0LL);
  }
  v9 = (UnityEngine_GameObject_o *)rightAnchor;
  rightAnchor = (UnityEngine_Component_o *)breakIcon_11->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(rightAnchor, 0LL);
  GameObjectExtensions__SafeSetParent_32503456(v9, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v9,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v12 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  v14 = v13;
  if ( v12 )
  {
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v15 = BasicHelper__DelayCall(0.533, v14, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
    return;
  }
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_srcLineSprite )
LABEL_19:
    sub_B7076C(rightAnchor, v7);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v14, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EasingObject_o *v22; // x20
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v24; // x21
  System_Action_o *v25; // x22
  TitleInfoPersonalBossComponent_c *v26; // x0

  if ( (byte_4350312 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__);
    sub_B70694(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__);
    sub_B70694(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
    byte_4350312 = 1;
  }
  v3 = sub_B70764(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v3 + 32) = this->fields.oldDamage;
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL) )
  {
    v12 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B7069C(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v13 = (System_Reflection_MethodBase_o *)sub_B70678(v12, v12[3]);
    OverwriteAssetSoundName__PlaySe(v13, *(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), Component_UIWidget, v16, v17, v18, v19, v20, v21);
  v22 = *(EasingObject_o **)(v3 + 16);
  v26 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v26 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v26->static_fields->ANIM_DURATION_HP_CUT;
  v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v22 )
LABEL_13:
    sub_B7076C(v4, v5);
  EasingObject__Play(v22, ANIM_DURATION_HP_CUT, v24, v25, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int64_t oldMaxHp; // d0
  int64_t currentDamage; // d1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  EasingObject_o *v22; // x20
  TitleInfoPersonalBossComponent_c *v23; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v25; // x21
  System_Action_o *v26; // x22

  if ( (byte_4350314 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__);
    sub_B70694(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__);
    sub_B70694(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
    byte_4350314 = 1;
  }
  v3 = sub_B70764(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v3 + 32) = this->fields.currentDamage;
  *(_QWORD *)(v3 + 40) = this->fields.oldMaxHp;
  currentDamage = this->fields.currentDamage;
  oldMaxHp = this->fields.oldMaxHp;
  LODWORD(this->fields.currentMaxHp) = 0;
  *(float *)&oldMaxHp = 1.0 - (double)oldMaxHp / (double)currentDamage;
  *((float *)&this->fields.currentMaxHp + 1) = UnityEngine_Mathf__Clamp01(*(float *)&oldMaxHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1D4BBAC *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_UIWidget;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), Component_UIWidget, v16, v17, v18, v19, v20, v21);
  v22 = *(EasingObject_o **)(v3 + 16);
  v23 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v23 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v23->static_fields->ANIM_DURATION_HP_CUT;
  v25 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v26 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v22 )
LABEL_9:
    sub_B7076C(v4, v5);
  EasingObject__Play(v22, ANIM_DURATION_HP_CUT, v25, v26, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_atlasList; // x19
  int32_t eventSuperBossEntity; // w20
  System_String_o *EventUIAssetDataPath; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_435030C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    byte_435030C = 1;
  }
  p_atlasList = (BattleServantConfConponent_o *)&this->fields.atlasList;
  if ( this->fields.atlasList )
  {
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    }
    EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventSuperBossEntity, method);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0LL);
    p_atlasList->klass = 0LL;
    sub_B70630(p_atlasList, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v3; // x0

  if ( (byte_435030B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    byte_435030B = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
  if ( !v3 )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Int32_array **CurrentUserSuperBossEntity; // x0
  float *p_HPfrom; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UserSuperBossEntity_o *currentUserBossEnt; // x24
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v16; // x1
  UILabel_o *Master_WarQuestSelectionMaster; // x0
  int32_t eventSuperBossEntity; // w21
  EventSuperBossMaster_o *v19; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  int32_t v24; // w21
  EventBossStatusUiMaster_o *v25; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v28; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  struct EventBossStatusUiEntity_o *v32; // x8
  struct System_String_o *breakEffectBeforeSeName; // x21
  int v34; // s0
  __int64 v38; // x8
  int v39; // w22
  int64_t v40; // x9
  __int64 v41; // x10
  int v42; // w11
  __int64 v43; // x12
  int v44; // w21
  __int64 v45; // x13
  __int64 *v46; // x13
  int64_t v47; // t1
  __int64 v48; // x13
  bool v49; // vf
  __int64 v50; // x13
  __int64 v51; // x9
  int64_t v52; // x10
  __int64 v53; // x9
  int v54; // w11
  __int64 v55; // x12
  __int64 v56; // x13
  __int64 *v57; // x13
  int64_t v58; // t1
  __int64 v59; // x13
  int64_t v60; // x13
  struct EventBossStatusUiEntity_o *v61; // x8
  BalanceConfig_c *v62; // x0
  int32_t idx; // w24
  TitleInfoPersonalBossComponent_o *v64; // x0
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x3
  int32_t clearBossEffect; // w1
  TitleInfoPersonalBossComponent_o *v69; // x0
  int32_t v70; // w2
  struct EventBossStatusUiEntity_o *v71; // x8
  struct UserSuperBossEntity_o *v72; // x9
  EventBossStatusUiEntity_c *klass; // x8
  float v74; // s0
  float v75; // s0
  const MethodInfo *v76; // x2
  float v77; // s0
  float v78; // s0
  float v79; // s0
  const MethodInfo *v80; // x2
  float v81; // s0
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v83; // x0
  System_String_o *v84; // x0
  const MethodInfo *v85; // x3
  UISprite_o *hpBarWhiteSprite; // x20
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x2
  __int64 v94; // x0
  EventSuperBossEntity_o *v95; // [xsp+0h] [xbp-50h] BYREF
  __int64 v96; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4350305 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventSuperBossMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&TitleInfoPersonalBossComponent_TypeInfo);
    sub_B70694(&StringLiteral_18878/*"event_superboss_hp_white"*/);
    sub_B70694(&StringLiteral_18831/*"event_raid_hp_back"*/);
    sub_B70694(&StringLiteral_18873/*"event_superboss_hp_lower_"*/);
    sub_B70694(&StringLiteral_18832/*"event_raid_hp_frame"*/);
    sub_B70694(&StringLiteral_18877/*"event_superboss_hp_upper_"*/);
    byte_4350305 = 1;
  }
  v95 = 0LL;
  v96 = 0LL;
  CurrentUserSuperBossEntity = (System_Int32_array **)TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
                                                        this,
                                                        method);
  p_HPfrom = &this->fields.HPfrom;
  *(_QWORD *)&this->fields.HPfrom = CurrentUserSuperBossEntity;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.HPfrom, CurrentUserSuperBossEntity, v5, v6, v7, v8, v9, v10);
  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( !currentUserBossEnt )
    currentUserBossEnt = *(struct UserSuperBossEntity_o **)p_HPfrom;
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  static_fields = v12->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v19 = (EventSuperBossMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v19 )
      goto LABEL_108;
    if ( EventSuperBossMaster__TryGetEntity(
           v19,
           &v95,
           eventSuperBossEntity,
           BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
           0LL) )
    {
      Master_WarQuestSelectionMaster = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
      }
      if ( !v95 )
        goto LABEL_108;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v21 = System_Int32__ToString((int)v95 + 56, 0LL);
      v22 = System_String__Concat_44758168(SUPERBOSS_ICON_SPNAME_PREFIX, v21, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v22, v23);
      if ( !v95 )
        goto LABEL_108;
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_108;
      UILabel__set_text(Master_WarQuestSelectionMaster, v95->fields.name, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v24 = (int32_t)this->fields.eventSuperBossEntity;
    v25 = (EventBossStatusUiMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v25 )
      goto LABEL_108;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v25,
                                  v24,
                                  BalanceConfig_TypeInfo->static_fields->OrtSecondFormId,
                                  0LL);
  }
  else
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)TitleInfoPersonalBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    }
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity )
      goto LABEL_108;
    v28 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v29 = System_Int32__ToString((int)eventBossStatusUiEntity + 56, 0LL);
    v30 = System_String__Concat_44758168(v28, v29, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v30, v31);
    v32 = this->fields.eventBossStatusUiEntity;
    if ( !v32 )
      goto LABEL_108;
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UILabel__set_text(Master_WarQuestSelectionMaster, (System_String_o *)v32->fields.script, 0LL);
    EntityFromEventIdAndIndex = (EventBossStatusUiEntity_o *)this->fields.oldUserBossEnt;
  }
  breakEffectBeforeSeName = this->fields.breakEffectBeforeSeName;
  if ( EntityFromEventIdAndIndex )
  {
    v97.fields.r = 0.0;
    v97.fields.g = 0.0;
    v97.fields.b = 0.0;
    v97.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v34 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v97, 0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  else
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.eventBossStatusUiEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    *(UnityEngine_Color_o *)&v34 = EventSuperBossEntity__GetBossColor(
                                     (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                     0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  UILabel__set_effectColor((UILabel_o *)breakEffectBeforeSeName, *(UnityEngine_Color_o *)&v34, 0LL);
  Master_WarQuestSelectionMaster = this->fields.totalHpLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                  0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  v38 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v38 )
    goto LABEL_108;
  v39 = *(_DWORD *)(v38 + 24) - 1;
  LODWORD(this->fields.clearBossEffect) = v39;
  v40 = currentUserBossEnt ? currentUserBossEnt->fields.damage : 0LL;
  v41 = *(_QWORD *)(v38 + 24);
  if ( (int)v41 < 1 )
  {
    v50 = v40;
    v44 = v39;
  }
  else
  {
    v42 = 0;
    v43 = *(_QWORD *)(v38 + 24);
    v44 = v39;
    while ( 1 )
    {
      if ( v42 >= (unsigned int)v43 )
        goto LABEL_107;
      v45 = v38 + 8LL * v42;
      v47 = *(_QWORD *)(v45 + 32);
      v46 = (__int64 *)(v45 + 32);
      this->fields.oldDamage = v47;
      v43 = *(_QWORD *)(v38 + 24);
      if ( v42 >= (unsigned int)v43 )
        goto LABEL_107;
      v48 = *v46;
      v49 = __OFSUB__(v40, v48);
      v50 = v40 - v48;
      if ( v50 < 0 != v49 )
        break;
      ++v42;
      --v44;
      v40 = v50;
      if ( v42 >= (int)v41 )
        goto LABEL_62;
    }
    v50 = v40;
  }
LABEL_62:
  v51 = *(_QWORD *)&this->fields.HPfrom;
  *(_QWORD *)&this->fields.maxBreakCount = v50;
  if ( v51 )
    v52 = *(_QWORD *)(v51 + 32);
  else
    v52 = 0LL;
  v53 = *(_QWORD *)(v38 + 24);
  if ( (int)v53 >= 1 )
  {
    v54 = 0;
    v55 = *(_QWORD *)(v38 + 24);
    while ( v54 < (unsigned int)v55 )
    {
      v56 = v38 + 8LL * v54;
      v58 = *(_QWORD *)(v56 + 32);
      v57 = (__int64 *)(v56 + 32);
      this->fields.currentDamage = v58;
      v55 = *(_QWORD *)(v38 + 24);
      if ( v54 >= (unsigned int)v55 )
        break;
      v59 = *v57;
      v49 = __OFSUB__(v52, v59);
      v60 = v52 - v59;
      if ( v60 < 0 != v49 )
        goto LABEL_72;
      ++v54;
      --v39;
      v52 = v60;
      if ( v54 >= (int)v53 )
        goto LABEL_73;
    }
LABEL_107:
    v94 = sub_B70798(Master_WarQuestSelectionMaster);
    sub_B70738(v94, 0LL);
  }
LABEL_72:
  v60 = v52;
LABEL_73:
  v61 = this->fields.eventBossStatusUiEntity;
  this->fields.oldMaxHp = v60;
  if ( !v61 )
    goto LABEL_108;
  v62 = BalanceConfig_TypeInfo;
  idx = v61->fields.idx;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  if ( idx == v62->static_fields->OrtThirdFormId )
    LOBYTE(this->fields.hpList) = v44 == 1 && v39 == 0;
  LODWORD(v96) = v44 + 1;
  HIDWORD(v96) = v44;
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL)) == 0LL )
  {
LABEL_108:
    sub_B7076C(Master_WarQuestSelectionMaster, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v64, v65) )
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( Master_WarQuestSelectionMaster )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v66);
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
      if ( Master_WarQuestSelectionMaster )
      {
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v69 = this;
        v70 = 0;
        goto LABEL_101;
      }
    }
    goto LABEL_108;
  }
  v71 = this->fields.eventBossStatusUiEntity;
  if ( v71 )
  {
    v72 = this->fields.currentUserBossEnt;
    if ( v72 )
    {
      klass = v71[1].klass;
      if ( v72->fields.damage < (__int64)klass
        && (!*(_QWORD *)p_HPfrom || *(_QWORD *)(*(_QWORD *)p_HPfrom + 32LL) >= (__int64)klass) )
      {
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v93);
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        v77 = 1.0;
        if ( v44 <= 0 )
          v77 = 0.0;
LABEL_95:
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v77, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v69 = this;
        v70 = v44;
        goto LABEL_101;
      }
    }
  }
  if ( LOBYTE(this->fields.hpList) )
  {
    v74 = 1.0 - (double)*(__int64 *)&this->fields.maxBreakCount / (double)this->fields.oldDamage;
    v75 = UnityEngine_Mathf__Clamp01(v74, 0LL);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    *(float *)&this->fields.currentMaxHp = v75;
    HIDWORD(this->fields.currentMaxHp) = 0;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v75, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(
      this,
      this->fields.oldDamage - *(_QWORD *)&this->fields.maxBreakCount,
      v76);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    v77 = 0.0;
    if ( v44 > 0 )
      v77 = 1.0;
    goto LABEL_95;
  }
  LODWORD(v96) = v39 + 1;
  HIDWORD(v96) = v39;
  v78 = 1.0 - (double)this->fields.oldMaxHp / (double)this->fields.currentDamage;
  v79 = UnityEngine_Mathf__Clamp01(v78, 0LL);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
  *(float *)&this->fields.currentMaxHp = v79;
  *((float *)&this->fields.currentMaxHp + 1) = v79;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v79, 0LL);
  TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentDamage - this->fields.oldMaxHp, v80);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  v81 = 0.0;
  if ( v39 > 0 )
    v81 = 1.0;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v81, 0LL);
  clearBossEffect = (int32_t)this->fields.clearBossEffect;
  v69 = this;
  v70 = v39;
LABEL_101:
  TitleInfoPersonalBossComponent__SetupBreakGauge(v69, clearBossEffect, v70, v67);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v83 = System_Int32__ToString((int32_t)&v96 + 4, 0LL);
  v84 = System_String__Concat_44758168((System_String_o *)StringLiteral_18873/*"event_superboss_hp_lower_"*/, v83, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v84, v85);
  hpBarWhiteSprite = this->fields.hpBarWhiteSprite;
  v87 = System_Int32__ToString((int32_t)&v96, 0LL);
  v88 = System_String__Concat_44758168((System_String_o *)StringLiteral_18877/*"event_superboss_hp_upper_"*/, v87, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarWhiteSprite, v88, v89);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.breakIconList,
    (System_String_o *)StringLiteral_18878/*"event_superboss_hp_white"*/,
    v90);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_18832/*"event_raid_hp_frame"*/,
    v91);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.hpBarSlider,
    (System_String_o *)StringLiteral_18831/*"event_raid_hp_back"*/,
    v92);
}


bool __fastcall TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_435030A & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_435030A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.eventId, (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    IsNullOrEmpty = *(System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o **)&this->fields.eventId;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      IsNullOrEmpty,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B7076C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B7076C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B7076C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


void __fastcall TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v6; // x21
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4350315 & 1) == 0 )
  {
    sub_B70694(&long_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3352/*"COMMON_NUM_FORMAT"*/);
    byte_4350315 = 1;
  }
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3352/*"COMMON_NUM_FORMAT"*/, 0LL);
  v11 = hp;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11, v7);
  v9 = System_String__Format(v6, v8, 0LL);
  if ( !hpBarUnderSprite )
    sub_B7076C(v9, v10);
  UILabel__set_text(hpBarUnderSprite, v9, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__Setup(
        TitleInfoPersonalBossComponent_o *this,
        EventSuperBossEntity_o *superBossEntity,
        UserSuperBossEntity_o *oldUserBossEnt,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  EventBossStatusUiMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **BreakGaugeHpList; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int32_t eventSuperBossEntity; // w20
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x3

  if ( (byte_4350304 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__);
    byte_4350304 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)superBossEntity,
    (System_String_array **)oldUserBossEnt,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentUserBossEnt = oldUserBossEnt;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.currentUserBossEnt,
    (System_Int32_array **)oldUserBossEnt,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  LOBYTE(this[1].klass) = 0;
  if ( this->fields.eventBossStatusUiEntity )
  {
    LODWORD(this->fields.eventSuperBossEntity) = this->fields.eventBossStatusUiEntity->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity
      || !Master_WarQuestSelectionMaster
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_WarQuestSelectionMaster,
                                        (int32_t)this->fields.eventSuperBossEntity,
                                        eventBossStatusUiEntity->fields.idx,
                                        0LL),
          this->fields.oldUserBossEnt = (struct UserSuperBossEntity_o *)EntityFromEventIdAndIndex,
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.oldUserBossEnt,
            (System_Int32_array **)EntityFromEventIdAndIndex,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26),
          (Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)this->fields.eventBossStatusUiEntity) == 0LL) )
    {
      sub_B7076C(Master_WarQuestSelectionMaster, v18);
    }
    BreakGaugeHpList = (System_Int32_array **)EventSuperBossEntity__GetBreakGaugeHpList(
                                                (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField = BreakGaugeHpList;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields._IsPlayedDamageAnimation_k__BackingField,
      BreakGaugeHpList,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v35 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventSuperBossEntity, v35, v36);
  }
}


void __fastcall TitleInfoPersonalBossComponent__SetupBossIcon(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *spName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UISprite_o *bossHpFrame; // x20
  struct UISprite_o *v6; // x0
  __int64 v7; // x1

  bossHpFrame = this->fields.bossHpFrame;
  v6 = (struct UISprite_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, bossHpFrame, spName, v3);
  if ( !bossHpFrame )
    goto LABEL_7;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossHpFrame, (unsigned __int8)v6 & 1, 0LL);
  v6 = this->fields.bossHpFrame;
  if ( !v6 )
    goto LABEL_7;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0LL) )
  {
    v6 = this->fields.bossHpFrame;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_7:
    sub_B7076C(v6, v7);
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
  struct UISprite_o *breakIcon_11; // x8
  int leftAnchor; // w23
  unsigned int v10; // w20
  int v11; // w24
  int v12; // w9
  __int64 v13; // x27
  struct UISprite_o *v14; // x8
  UISprite_o *v15; // x22
  System_String_o *v16; // x0
  System_String_o *v17; // x2
  TitleInfoPersonalBossComponent_o *v18; // x0
  UISprite_o *v19; // x1
  struct UISprite_o *v20; // x8
  struct UISprite_o *v21; // x8
  long double v22; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  __int64 v24; // x0
  int v25; // [xsp+Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_4350306 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_18870/*"event_superboss_hp_icon_0"*/);
    sub_B70694(&StringLiteral_18871/*"event_superboss_hp_icon_11"*/);
    this = (TitleInfoPersonalBossComponent_o *)sub_B70694(&StringLiteral_18869/*"event_superboss_hp_icon_"*/);
    byte_4350306 = 1;
  }
  v25 = 0;
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
        (System_String_o *)StringLiteral_18871/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v22) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_B7076C(this, *(_QWORD *)&maxCount);
    }
    v11 = 2;
    LODWORD(v4) = 1.0;
    while ( 1 )
    {
      v12 = v11 - 2;
      if ( (unsigned int)(v11 - 2) >= LODWORD(breakIcon_11->fields.leftAnchor) )
        goto LABEL_37;
      v13 = v12;
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&breakIcon_11->fields.rightAnchor + v12);
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v13 < restCount )
        break;
      if ( (int)v13 < maxCount )
      {
        v20 = v7->fields.breakIcon_11;
        if ( !v20 )
          goto LABEL_36;
        if ( (unsigned int)v13 >= LODWORD(v20->fields.leftAnchor) )
          goto LABEL_37;
        v19 = (UISprite_o *)*((_QWORD *)&v20->fields.rightAnchor + v13);
        v17 = (System_String_o *)StringLiteral_18870/*"event_superboss_hp_icon_0"*/;
        v18 = v7;
        goto LABEL_24;
      }
LABEL_28:
      if ( v11 - 1 >= leftAnchor )
        goto LABEL_33;
      breakIcon_11 = v7->fields.breakIcon_11;
      ++v11;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
    v14 = v7->fields.breakIcon_11;
    if ( !v14 )
      goto LABEL_36;
    if ( (unsigned int)v13 >= LODWORD(v14->fields.leftAnchor) )
      goto LABEL_37;
    v15 = (UISprite_o *)*((_QWORD *)&v14->fields.rightAnchor + v13);
    v25 = v11;
    v16 = System_Int32__ToString((int32_t)&v25, 0LL);
    v17 = System_String__Concat_44758168((System_String_o *)StringLiteral_18869/*"event_superboss_hp_icon_"*/, v16, 0LL);
    v18 = v7;
    v19 = v15;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v18,
                                                 v19,
                                                 v17,
                                                 method);
    v21 = v7->fields.breakIcon_11;
    if ( !v21 )
      goto LABEL_36;
    if ( (unsigned int)v13 >= LODWORD(v21->fields.leftAnchor) )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&v21->fields.rightAnchor + v13);
    if ( !this )
      goto LABEL_36;
    this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, long double))this->klass[1]._1.namespaze)(
                                                 this,
                                                 this->klass[1]._1.byval_arg.data,
                                                 v4);
    goto LABEL_28;
  }
  if ( leftAnchor >= 1 )
  {
    v10 = 0;
    while ( v10 < LODWORD(breakIcon_11->fields.leftAnchor) )
    {
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&breakIcon_11->fields.rightAnchor + (int)v10);
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)++v10 >= leftAnchor )
        goto LABEL_31;
      breakIcon_11 = v7->fields.breakIcon_11;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
LABEL_37:
    v24 = sub_B70798(this);
    sub_B70738(v24, 0LL);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v7,
    (UISprite_o *)v7->fields.bossName,
    (System_String_o *)StringLiteral_18871/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v22) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.namespaze)(v22);
}


void __fastcall TitleInfoPersonalBossComponent__StartDamageAnimation(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TitleInfoPersonalBossComponent_o *v10; // x19
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  EventBossStatusUiEntity_c *klass; // x8
  __int64 v14; // x9
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  System_Int32_array **ClearBossEffect; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *animEndCall; // x21
  const MethodInfo *v26; // x2
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  float v36; // s8
  System_Action_o *v37; // x20
  System_Collections_IEnumerator_o *v38; // x1

  v10 = this;
  if ( (byte_435030E & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
    this = (TitleInfoPersonalBossComponent_o *)sub_B70694(&Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__);
    byte_435030E = 1;
  }
  if ( LOBYTE(v10[1].klass) )
    goto LABEL_4;
  eventBossStatusUiEntity = v10->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (currentUserBossEnt = v10->fields.currentUserBossEnt) != 0LL
    && (klass = eventBossStatusUiEntity[1].klass, currentUserBossEnt->fields.damage < (__int64)klass)
    && ((v14 = *(_QWORD *)&v10->fields.HPfrom) == 0 || *(_QWORD *)(v14 + 32) >= (__int64)klass)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    LOBYTE(v10[1].klass) = 1;
    *(_QWORD *)&v10->fields.isGaugeBreak = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->fields.isGaugeBreak,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    gaugeBreakEffect = (UnityEngine_Object_o *)v10->fields.gaugeBreakEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
    {
      ClearBossEffect = (System_Int32_array **)TitleInfoPersonalBossComponent__GetClearBossEffect(
                                                 v10,
                                                 mapAssetData,
                                                 v17);
      v10->fields.gaugeBreakEffect = (struct UnityEngine_GameObject_o *)ClearBossEffect;
      sub_B70630(
        (BattleServantConfConponent_o *)&v10->fields.gaugeBreakEffect,
        ClearBossEffect,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v10, v16);
  }
  else
  {
    if ( !LOBYTE(v10->fields.hpList) )
    {
LABEL_4:
      ActionExtensions__Call(callback, 0LL);
      return;
    }
    LOBYTE(v10[1].klass) = 1;
    *(_QWORD *)&v10->fields.isGaugeBreak = callback;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->fields.isGaugeBreak,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    animEndCall = (UnityEngine_Object_o *)v10->fields.animEndCall;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(animEndCall, 0LL, 0LL) )
    {
      v27 = (System_Int32_array **)TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v10, mapAssetData, v26);
      v10->fields.animEndCall = (struct System_Action_o *)v27;
      sub_B70630((BattleServantConfConponent_o *)&v10->fields.animEndCall, v27, v28, v29, v30, v31, v32, v33);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakHpDownSeName, 0LL) )
    {
      v34 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 75) & 2) != 0 )
        v34 = (_QWORD *)sub_B7069C(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v35 = (System_Reflection_MethodBase_o *)sub_B70678(v34, v34[3]);
      OverwriteAssetSoundName__PlaySe(v35, v10->fields.breakHpDownSeName, 0LL);
    }
    v36 = *(float *)&v10->fields.assetData;
    v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v38 = BasicHelper__DelayCall(v36, v37, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)v10, v38, 0LL);
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
  int32_t clearBossEffect; // w2
  __int64 v11; // x13
  __int64 *v12; // x13
  int64_t v13; // t1
  __int64 v14; // x13
  bool v15; // vf
  int64_t v16; // x13
  __int64 v17; // x0

  v3 = *(_QWORD *)&this->fields.HPfrom;
  clearBossEffect_low = LODWORD(this->fields.clearBossEffect);
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 32);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v6 )
    sub_B7076C(this, clearBossEffect_low);
  v7 = *(_QWORD *)(v6 + 24);
  if ( (int)v7 < 1 )
  {
    v16 = v5;
    clearBossEffect = (int32_t)this->fields.clearBossEffect;
  }
  else
  {
    v8 = 0;
    v9 = *(_QWORD *)(v6 + 24);
    clearBossEffect = (int32_t)this->fields.clearBossEffect;
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
        v17 = sub_B70798(this);
        sub_B70738(v17, 0LL);
      }
      v14 = *v12;
      v15 = __OFSUB__(v5, v14);
      v16 = v5 - v14;
      if ( v16 < 0 != v15 )
        break;
      ++v8;
      --clearBossEffect;
      v5 = v16;
      if ( v8 >= (int)v7 )
        goto LABEL_14;
    }
    v16 = v5;
  }
LABEL_14:
  this->fields.oldMaxHp = v16;
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, clearBossEffect_low, clearBossEffect, v2);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v8; // x20
  TitleInfoPersonalBossComponent_o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  UnityEngine_Component_o *breakHpDownSeName; // x0

  v8 = *(System_Action_o **)&this->fields.isGaugeBreak;
  v9 = this;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B70630((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v9[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
  {
    sub_B7076C(breakHpDownSeName, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)breakHpDownSeName, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_1(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bossHpFrame; // x0

  bossHpFrame = (UnityEngine_Component_o *)this->fields.bossHpFrame;
  if ( !bossHpFrame
    || (bossHpFrame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossHpFrame, 0LL)) == 0LL )
  {
    sub_B7076C(bossHpFrame, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossHpFrame, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___PlayClearBossEffect_b__63_2(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v8; // x20
  TitleInfoPersonalBossComponent_o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v8 = *(System_Action_o **)&this->fields.isGaugeBreak;
  v9 = this;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B70630((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
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
  struct TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, data);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B70630(&_4__this->fields.atlasList);
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
  TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *v4; // x19
  float v5; // s0
  struct TitleInfoPersonalBossComponent_o *v6; // x8
  float v7; // s8
  double v8; // d3
  double v9; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_9;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this
    || (v5 = UnityEngine_Mathf__Lerp(
               *(float *)&_4__this->fields.currentMaxHp,
               *((float *)&_4__this->fields.currentMaxHp + 1),
               easingObj->fields.mStartTime,
               0LL),
        (v6 = v4->fields.__4__this) == 0LL)
    || (this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v6->fields.hpBarSliderUnder) == 0LL
    || (v7 = v5,
        UIProgressBar__set_value((UIProgressBar_o *)this, v5, 0LL),
        (this = (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_B7076C(this, method);
  }
  v8 = v7 * (double)v4->fields.maxHp;
  v9 = -v8;
  if ( v8 != INFINITY )
    v9 = v7 * (double)v4->fields.maxHp;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, (__int64)v9, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass65_0___PlayHpCut_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
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
  TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *v4; // x19
  float v5; // s0
  double v6; // d3
  double v7; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (_4__this = this->fields.__4__this, v4 = this, !_4__this)
    || (v5 = UnityEngine_Mathf__Lerp(
               *(float *)&_4__this->fields.currentMaxHp,
               *((float *)&_4__this->fields.currentMaxHp + 1),
               easingObj->fields.mStartTime,
               0LL),
        (this = (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  v6 = v5 * (double)v4->fields.maxHp;
  v7 = -v6;
  if ( v6 != INFINITY )
    v7 = v6;
  TitleInfoPersonalBossComponent__SetTotalHpText((TitleInfoPersonalBossComponent_o *)this, (__int64)v7, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__1(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v4; // x20
  float v5; // s8
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_434F294 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__);
    byte_434F294 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, 0LL),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(_4__this, method);
  }
  v5 = *((float *)&v4->fields.assetData + 1);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B70630(&this->fields.__9__2);
  }
  v7 = BasicHelper__DelayCall(v5, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)v4, v7, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, 0LL);
}