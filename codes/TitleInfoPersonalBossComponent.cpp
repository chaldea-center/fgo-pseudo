void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoPersonalBossComponent_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  TitleInfoPersonalBossComponent_c *v29; // x8

  if ( (byte_42130CA & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_14511/*"TitleInfoEventSuperBossEffect_Dead"*/, v8);
    sub_B0D8A4(&StringLiteral_18656/*"event_superboss_icon_"*/, v9);
    sub_B0D8A4(&StringLiteral_14510/*"TitleInfoEventSuperBossEffect_Break"*/, v10);
    byte_42130CA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18656/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18656/*"event_superboss_icon_"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_14511/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v13->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14511/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->SUPERBOSS_CLEAR_EFFECT_PREFAB, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_14510/*"TitleInfoEventSuperBossEffect_Break"*/;
  v21->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14510/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v21->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = TitleInfoPersonalBossComponent_TypeInfo;
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 1.5;
  v29->static_fields->CLEAR_CALLBACK_DELAY = 2.0;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42130C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16494/*"ar60"*/, v10);
    sub_B0D8A4(&StringLiteral_16489/*"ar210"*/, v11);
    byte_42130C9 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16494/*"ar60"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16494/*"ar60"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.breakHpDownSeName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16489/*"ar210"*/;
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = StringLiteral_16489/*"ar210"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.breakEffectStartWaitTime, v13, v14, v15, v16, v17, v18, v19);
  this->fields.assetData = (struct AssetData_o *)0x3E99999A3F800000LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.eventId = v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  __int64 v7; // x1
  UserSuperBossEntity_o *v8; // x22
  int64_t UserId; // x0

  if ( (byte_42130C8 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&UserSuperBossEntity_TypeInfo, v7);
    byte_42130C8 = 1;
  }
  v8 = (UserSuperBossEntity_o *)sub_B0D974(UserSuperBossEntity_TypeInfo, *(_QWORD *)&id, damange);
  UserSuperBossEntity___ctor(v8, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    sub_B0D97C(UserId);
  v8->fields.userId = UserId;
  v8->fields.eventId = eventId;
  v8->fields.superBossId = id;
  v8->fields.damage = damange;
  return v8;
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

  if ( (byte_42130BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, mapAssetData);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16264/*"_{0}{1:D2}"*/, v7);
    byte_42130BF = 1;
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
  v9 = System_String__Concat_43849904(
         v8->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16264/*"_{0}{1:D2}"*/,
         0LL);
  eventSuperBossEntity = (int)this->fields.eventSuperBossEntity;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventSuperBossEntity);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B0D97C(v10);
  v12 = (Il2CppObject *)v10;
  idx = eventBossStatusUiEntity->fields.idx;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v14 = System_String__Format_43845440(v9, v12, v13, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v14,
                                       (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
  struct EventBossStatusUiEntity_o *IsOpen; // x0
  const MethodInfo *v14; // x3
  __int64 v15; // x11
  unsigned __int64 v16; // x8
  __int64 v17; // x10
  int64_t v18; // x20
  __int64 v19; // x9
  __int64 v20; // x10
  __int64 v21; // x11
  __int64 v22; // x12
  BalanceConfig_c *v23; // x0
  struct BalanceConfig_StaticFields *v24; // x8
  int32_t v25; // w20
  int64_t v26; // x21
  BalanceConfig_c *v27; // x0
  struct BalanceConfig_StaticFields *v28; // x8
  int32_t v29; // w20
  int32_t v30; // w21
  __int64 v31; // x11
  unsigned __int64 v32; // x8
  unsigned __int64 v33; // x9
  __int64 v34; // x11
  __int64 v35; // x12
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t idx; // w19
  int32_t eventId; // w21
  __int64 v40; // x0

  if ( (byte_42130C7 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CondType_TypeInfo, v3);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    byte_42130C7 = 1;
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
  IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v11, OrtLatePhaseDead, 0, 0LL);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    v15 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v15 )
      goto LABEL_52;
    v16 = *(unsigned int *)(v15 + 24);
    v17 = (v16 << 32) - 0x100000000LL;
    if ( v17 >= 1 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = v17 >> 32;
      v21 = v15 + 32;
      while ( v19 < v16 )
      {
        v22 = *(_QWORD *)(v21 + 8 * v19++);
        v18 += v22;
        if ( v19 >= v20 )
          goto LABEL_46;
      }
      goto LABEL_51;
    }
  }
  else
  {
LABEL_23:
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    v24 = v23->static_fields;
    v25 = v24->OrtLateQuestId;
    v26 = v24->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v25, v26, 0, 0LL) )
      goto LABEL_43;
    v27 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    v28 = v27->static_fields;
    v29 = v28->OrtLateQuestId;
    v30 = v28->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v29, v30 + 1, 0, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_43:
      IsOpen = this->fields.eventBossStatusUiEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity((EventSuperBossEntity_o *)IsOpen, 0LL);
LABEL_52:
      sub_B0D97C(IsOpen);
    }
    v31 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v31 )
      goto LABEL_52;
    v32 = *(unsigned int *)(v31 + 24);
    if ( (__int64)(v32 << 32) >= 1 )
    {
      v18 = 0LL;
      v33 = 0LL;
      v34 = v31 + 32;
      while ( v33 < v32 )
      {
        v35 = *(_QWORD *)(v34 + 8 * v33++);
        v18 += v35;
        if ( (__int64)v33 >= (int)v32 )
          goto LABEL_46;
      }
LABEL_51:
      v40 = sub_B0D9A8(IsOpen);
      sub_B0D948(v40, 0LL);
    }
  }
  v18 = 0LL;
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
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, idx, v18, v14);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42130B7 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6224/*"EventUI/Prefabs/{0}"*/, v3);
    byte_42130B7 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6224/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42130BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, name);
    byte_42130BD = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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
  if ( (byte_42130C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, mapAssetData);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v6);
    byte_42130C1 = 1;
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
  v10 = System_String__Concat_43852188(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15952/*"_"*/,
          v9,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v10,
                                       (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
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

  if ( (byte_42130B3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_42130B3 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    sub_B0D97C(mapButtonGrid);
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
  __int64 v2; // x1
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_42130C6 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CondType_TypeInfo, v2);
    byte_42130C6 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  System_String_o *EventUIAssetDataPath; // x19
  __int64 v27; // x1
  __int64 v28; // x2
  AssetLoader_LoadEndDataHandler_o *v29; // x21

  if ( (byte_42130B8 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v8);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v9);
    sub_B0D8A4(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v10);
    byte_42130B8 = 1;
  }
  v11 = sub_B0D974(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, *(_QWORD *)&eventId, callback);
  TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v25);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v11,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v29, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v11 + 24), 0LL);
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
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v20; // [xsp+8h] [xbp-58h] BYREF
  int v21; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42130B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_23579/*"{0:D2}"*/, v9);
    sub_B0D8A4(&StringLiteral_5396/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_42130B9 = 1;
  }
  if ( this->fields.atlasList )
  {
    v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
    if ( !v11 )
LABEL_18:
      sub_B0D97C(v11);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v11,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v21 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23579/*"{0:D2}"*/, v14, 0LL);
      v20 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v17 = System_String__Format_43845440((System_String_o *)StringLiteral_5396/*"DownloadEventUIAtlas{0}{1}"*/, v16, v15, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v17,
                                                                 v18);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
      if ( !v11 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  LOBYTE(this->fields.hpList) = 0;
  this->fields.currentUserBossEnt = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.currentUserBossEnt, 0LL, v10, v11, v12, v13, v14, v15);
  TitleInfoPersonalBossComponent__SetDisp(this, v16);
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
  __int64 v13; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  TitleInfoPersonalBossComponent_c *v17; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v19; // x20
  System_Collections_IEnumerator_o *v20; // x1
  System_Action_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42130C0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v6);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v7);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v8);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v9);
    byte_42130C0 = 1;
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
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v12, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition(v12, 0LL);
    if ( v12 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v12,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        v17 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v17 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v17->static_fields->CLEAR_CALLBACK_DELAY;
        v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v20 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v19, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
        return;
      }
      v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(
        v21,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v21,
          0LL);
        v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
        System_Action___ctor(
          v24,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v24;
        sub_B0D840(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        return;
      }
    }
    sub_B0D97C(v13);
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
  UnityEngine_Component_o *rightAnchor; // x0
  struct UISprite_o *breakIcon_11; // x8
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v16; // w22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x0
  System_Action_o *v20; // x20
  System_Collections_IEnumerator_o *v21; // x1
  __int64 v22; // x0

  if ( (byte_42130C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v6);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v7);
    byte_42130C3 = 1;
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
  rightAnchor = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v10,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIcon_11 = this->fields.breakIcon_11;
  if ( !breakIcon_11 )
    goto LABEL_19;
  if ( !LODWORD(breakIcon_11->fields.leftAnchor) )
  {
    v22 = sub_B0D9A8(rightAnchor);
    sub_B0D948(v22, 0LL);
  }
  v13 = (UnityEngine_GameObject_o *)rightAnchor;
  rightAnchor = (UnityEngine_Component_o *)breakIcon_11->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(rightAnchor, 0LL);
  GameObjectExtensions__SafeSetParent_31184716(v13, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v13,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v16 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  v20 = v19;
  if ( v16 )
  {
    System_Action___ctor(
      v19,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v21 = BasicHelper__DelayCall(0.533, v20, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v21, 0LL);
    return;
  }
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_srcLineSprite )
LABEL_19:
    sub_B0D97C(rightAnchor);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v20, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  EasingObject_o *v30; // x20
  TitleInfoPersonalBossComponent_c *v31; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_o *v36; // x22

  if ( (byte_42130C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v5);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v7);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v8);
    sub_B0D8A4(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v9);
    byte_42130C2 = 1;
  }
  v10 = sub_B0D974(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, method, v2);
  TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_13;
  *(_QWORD *)(v10 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 32) = this->fields.oldDamage;
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL) )
  {
    v18 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 75) & 2) != 0 )
      v18 = (_QWORD *)sub_B0D8AC(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v19 = (System_Reflection_MethodBase_o *)sub_B0D888(v18, v18[3]);
    OverwriteAssetSoundName__PlaySe(v19, *(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v10 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  v30 = *(EasingObject_o **)(v10 + 16);
  v31 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v31 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v31->static_fields->ANIM_DURATION_HP_CUT;
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v10,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v10,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v30 )
LABEL_13:
    sub_B0D97C(v11);
  EasingObject__Play(v30, ANIM_DURATION_HP_CUT, v33, v36, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int64_t oldMaxHp; // d0
  int64_t currentDamage; // d1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  EasingObject_o *v29; // x20
  TitleInfoPersonalBossComponent_c *v30; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x22

  if ( (byte_42130C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v6);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v7);
    sub_B0D8A4(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v8);
    byte_42130C4 = 1;
  }
  v9 = sub_B0D974(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, method, v2);
  TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 32) = this->fields.currentDamage;
  *(_QWORD *)(v9 + 40) = this->fields.oldMaxHp;
  currentDamage = this->fields.currentDamage;
  oldMaxHp = this->fields.oldMaxHp;
  LODWORD(this->fields.currentMaxHp) = 0;
  *(float *)&oldMaxHp = 1.0 - (double)oldMaxHp / (double)currentDamage;
  *((float *)&this->fields.currentMaxHp + 1) = UnityEngine_Mathf__Clamp01(*(float *)&oldMaxHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), Component_UIWidget, v21, v22, v23, v24, v25, v26);
  v29 = *(EasingObject_o **)(v9 + 16);
  v30 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v30 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v30->static_fields->ANIM_DURATION_HP_CUT;
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v29 )
LABEL_9:
    sub_B0D97C(v10);
  EasingObject__Play(v29, ANIM_DURATION_HP_CUT, v32, v35, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_atlasList; // x19
  int32_t eventSuperBossEntity; // w20
  System_String_o *EventUIAssetDataPath; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42130BC & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v3);
    byte_42130BC = 1;
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
    sub_B0D840(p_atlasList, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v3; // x0

  if ( (byte_42130BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_42130BB = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
  if ( !v3 )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  System_Int32_array **CurrentUserSuperBossEntity; // x0
  float *p_HPfrom; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UserSuperBossEntity_o *currentUserBossEnt; // x24
  BalanceConfig_c *v22; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  UILabel_o *Master_WarQuestSelectionMaster; // x0
  int32_t eventSuperBossEntity; // w21
  EventSuperBossMaster_o *v28; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x2
  int32_t v33; // w21
  EventBossStatusUiMaster_o *v34; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v37; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  const MethodInfo *v40; // x2
  struct EventBossStatusUiEntity_o *v41; // x8
  struct System_String_o *breakEffectBeforeSeName; // x21
  int v43; // s0
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
  TitleInfoPersonalBossComponent_o *v73; // x0
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x3
  int32_t clearBossEffect; // w1
  TitleInfoPersonalBossComponent_o *v78; // x0
  int32_t v79; // w2
  struct EventBossStatusUiEntity_o *v80; // x8
  struct UserSuperBossEntity_o *v81; // x9
  EventBossStatusUiEntity_c *klass; // x8
  float v83; // s0
  float v84; // s0
  const MethodInfo *v85; // x2
  float v86; // s0
  float v87; // s0
  float v88; // s0
  const MethodInfo *v89; // x2
  float v90; // s0
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  const MethodInfo *v94; // x3
  UISprite_o *hpBarWhiteSprite; // x20
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x3
  const MethodInfo *v102; // x2
  __int64 v103; // x0
  EventSuperBossEntity_o *v104; // [xsp+0h] [xbp-50h] BYREF
  __int64 v105; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42130B5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CondType_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventSuperBossMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&TitleInfoPersonalBossComponent_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_18655/*"event_superboss_hp_white"*/, v8);
    sub_B0D8A4(&StringLiteral_18608/*"event_raid_hp_back"*/, v9);
    sub_B0D8A4(&StringLiteral_18650/*"event_superboss_hp_lower_"*/, v10);
    sub_B0D8A4(&StringLiteral_18609/*"event_raid_hp_frame"*/, v11);
    sub_B0D8A4(&StringLiteral_18654/*"event_superboss_hp_upper_"*/, v12);
    byte_42130B5 = 1;
  }
  v104 = 0LL;
  v105 = 0LL;
  CurrentUserSuperBossEntity = (System_Int32_array **)TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
                                                        this,
                                                        method);
  p_HPfrom = &this->fields.HPfrom;
  *(_QWORD *)&this->fields.HPfrom = CurrentUserSuperBossEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.HPfrom,
    CurrentUserSuperBossEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( !currentUserBossEnt )
    currentUserBossEnt = *(struct UserSuperBossEntity_o **)p_HPfrom;
  v22 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v22 = BalanceConfig_TypeInfo;
  }
  static_fields = v22->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v28 = (EventSuperBossMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v28 )
      goto LABEL_108;
    if ( EventSuperBossMaster__TryGetEntity(
           v28,
           &v104,
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
      if ( !v104 )
        goto LABEL_108;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v30 = System_Int32__ToString((int)v104 + 56, 0LL);
      v31 = System_String__Concat_43849904(SUPERBOSS_ICON_SPNAME_PREFIX, v30, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v31, v32);
      if ( !v104 )
        goto LABEL_108;
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_108;
      UILabel__set_text(Master_WarQuestSelectionMaster, v104->fields.name, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v33 = (int32_t)this->fields.eventSuperBossEntity;
    v34 = (EventBossStatusUiMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v34 )
      goto LABEL_108;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v34,
                                  v33,
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
    v37 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v38 = System_Int32__ToString((int)eventBossStatusUiEntity + 56, 0LL);
    v39 = System_String__Concat_43849904(v37, v38, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v39, v40);
    v41 = this->fields.eventBossStatusUiEntity;
    if ( !v41 )
      goto LABEL_108;
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UILabel__set_text(Master_WarQuestSelectionMaster, (System_String_o *)v41->fields.script, 0LL);
    EntityFromEventIdAndIndex = (EventBossStatusUiEntity_o *)this->fields.oldUserBossEnt;
  }
  breakEffectBeforeSeName = this->fields.breakEffectBeforeSeName;
  if ( EntityFromEventIdAndIndex )
  {
    v106.fields.r = 0.0;
    v106.fields.g = 0.0;
    v106.fields.b = 0.0;
    v106.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v43 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v106, 0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  else
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.eventBossStatusUiEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    *(UnityEngine_Color_o *)&v43 = EventSuperBossEntity__GetBossColor(
                                     (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                     0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  UILabel__set_effectColor((UILabel_o *)breakEffectBeforeSeName, *(UnityEngine_Color_o *)&v43, 0LL);
  Master_WarQuestSelectionMaster = this->fields.totalHpLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                  0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
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
    v103 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v103, 0LL);
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
  LODWORD(v105) = v53 + 1;
  HIDWORD(v105) = v53;
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL)) == 0LL )
  {
LABEL_108:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v73, v74) )
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( Master_WarQuestSelectionMaster )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v75);
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
      if ( Master_WarQuestSelectionMaster )
      {
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v78 = this;
        v79 = 0;
        goto LABEL_101;
      }
    }
    goto LABEL_108;
  }
  v80 = this->fields.eventBossStatusUiEntity;
  if ( v80 )
  {
    v81 = this->fields.currentUserBossEnt;
    if ( v81 )
    {
      klass = v80[1].klass;
      if ( v81->fields.damage < (__int64)klass
        && (!*(_QWORD *)p_HPfrom || *(_QWORD *)(*(_QWORD *)p_HPfrom + 32LL) >= (__int64)klass) )
      {
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v102);
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        v86 = 1.0;
        if ( v53 <= 0 )
          v86 = 0.0;
LABEL_95:
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v86, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v78 = this;
        v79 = v53;
        goto LABEL_101;
      }
    }
  }
  if ( LOBYTE(this->fields.hpList) )
  {
    v83 = 1.0 - (double)*(__int64 *)&this->fields.maxBreakCount / (double)this->fields.oldDamage;
    v84 = UnityEngine_Mathf__Clamp01(v83, 0LL);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    *(float *)&this->fields.currentMaxHp = v84;
    HIDWORD(this->fields.currentMaxHp) = 0;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v84, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(
      this,
      this->fields.oldDamage - *(_QWORD *)&this->fields.maxBreakCount,
      v85);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    v86 = 0.0;
    if ( v53 > 0 )
      v86 = 1.0;
    goto LABEL_95;
  }
  LODWORD(v105) = v48 + 1;
  HIDWORD(v105) = v48;
  v87 = 1.0 - (double)this->fields.oldMaxHp / (double)this->fields.currentDamage;
  v88 = UnityEngine_Mathf__Clamp01(v87, 0LL);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
  *(float *)&this->fields.currentMaxHp = v88;
  *((float *)&this->fields.currentMaxHp + 1) = v88;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v88, 0LL);
  TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentDamage - this->fields.oldMaxHp, v89);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  v90 = 0.0;
  if ( v48 > 0 )
    v90 = 1.0;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v90, 0LL);
  clearBossEffect = (int32_t)this->fields.clearBossEffect;
  v78 = this;
  v79 = v48;
LABEL_101:
  TitleInfoPersonalBossComponent__SetupBreakGauge(v78, clearBossEffect, v79, v76);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v92 = System_Int32__ToString((int32_t)&v105 + 4, 0LL);
  v93 = System_String__Concat_43849904((System_String_o *)StringLiteral_18650/*"event_superboss_hp_lower_"*/, v92, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v93, v94);
  hpBarWhiteSprite = this->fields.hpBarWhiteSprite;
  v96 = System_Int32__ToString((int32_t)&v105, 0LL);
  v97 = System_String__Concat_43849904((System_String_o *)StringLiteral_18654/*"event_superboss_hp_upper_"*/, v96, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarWhiteSprite, v97, v98);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.breakIconList,
    (System_String_o *)StringLiteral_18655/*"event_superboss_hp_white"*/,
    v99);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_18609/*"event_raid_hp_frame"*/,
    v100);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.hpBarSlider,
    (System_String_o *)StringLiteral_18608/*"event_raid_hp_back"*/,
    v101);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *IsNullOrEmpty; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v14; // x0
  bool v15; // w20
  int v16; // w21
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42130BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_42130BA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.eventId, (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v18,
      IsNullOrEmpty,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v19 = v18;
    do
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v12 )
      {
        v15 = 0;
        v16 = 8;
        goto LABEL_16;
      }
      current = v19.fields.current;
      if ( !v19.fields.current )
        sub_B0D97C(v12);
      v14 = UIAtlas__GetSprite((UIAtlas_o *)v19.fields.current, spriteName, 0LL);
    }
    while ( !v14 );
    if ( !sprite )
      sub_B0D97C(v14);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v15 = 1;
    v16 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v16 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B0D97C(IsNullOrEmpty);
    }
  }
  return v15;
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

  if ( (byte_42130C5 & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, hp);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3290/*"COMMON_NUM_FORMAT"*/, v6);
    byte_42130C5 = 1;
  }
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3290/*"COMMON_NUM_FORMAT"*/, 0LL);
  v11 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !hpBarUnderSprite )
    sub_B0D97C(v10);
  UILabel__set_text(hpBarUnderSprite, v10, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  EventBossStatusUiMaster_o *Master_WarQuestSelectionMaster; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **BreakGaugeHpList; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int32_t eventSuperBossEntity; // w20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Action_o *v39; // x21
  const MethodInfo *v40; // x3

  if ( (byte_42130B4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, superBossEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v11);
    sub_B0D8A4(&DataManager_TypeInfo, v12);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v13);
    byte_42130B4 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)superBossEntity,
    (System_String_array **)oldUserBossEnt,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentUserBossEnt = oldUserBossEnt;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentUserBossEnt,
    (System_Int32_array **)oldUserBossEnt,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  LOBYTE(this[1].klass) = 0;
  if ( this->fields.eventBossStatusUiEntity )
  {
    LODWORD(this->fields.eventSuperBossEntity) = this->fields.eventBossStatusUiEntity->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity
      || !Master_WarQuestSelectionMaster
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_WarQuestSelectionMaster,
                                        (int32_t)this->fields.eventSuperBossEntity,
                                        eventBossStatusUiEntity->fields.idx,
                                        0LL),
          this->fields.oldUserBossEnt = (struct UserSuperBossEntity_o *)EntityFromEventIdAndIndex,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.oldUserBossEnt,
            (System_Int32_array **)EntityFromEventIdAndIndex,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28),
          (Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)this->fields.eventBossStatusUiEntity) == 0LL) )
    {
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
    BreakGaugeHpList = (System_Int32_array **)EventSuperBossEntity__GetBreakGaugeHpList(
                                                (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField = BreakGaugeHpList;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._IsPlayedDamageAnimation_k__BackingField,
      BreakGaugeHpList,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventSuperBossEntity, v39, v40);
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
    sub_B0D97C(v6);
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
  int v13; // w24
  int v14; // w9
  __int64 v15; // x27
  struct UISprite_o *v16; // x8
  UISprite_o *v17; // x22
  System_String_o *v18; // x0
  System_String_o *v19; // x2
  TitleInfoPersonalBossComponent_o *v20; // x0
  UISprite_o *v21; // x1
  struct UISprite_o *v22; // x8
  struct UISprite_o *v23; // x8
  long double v24; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  __int64 v26; // x0
  int v27; // [xsp+Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_42130B6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18647/*"event_superboss_hp_icon_0"*/, *(_QWORD *)&maxCount);
    sub_B0D8A4(&StringLiteral_18648/*"event_superboss_hp_icon_11"*/, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_B0D8A4(&StringLiteral_18646/*"event_superboss_hp_icon_"*/, v9);
    byte_42130B6 = 1;
  }
  v27 = 0;
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
        (System_String_o *)StringLiteral_18648/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v24) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_B0D97C(this);
    }
    v13 = 2;
    LODWORD(v4) = 1.0;
    while ( 1 )
    {
      v14 = v13 - 2;
      if ( (unsigned int)(v13 - 2) >= LODWORD(breakIcon_11->fields.leftAnchor) )
        goto LABEL_37;
      v15 = v14;
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&breakIcon_11->fields.rightAnchor + v14);
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v15 < restCount )
        break;
      if ( (int)v15 < maxCount )
      {
        v22 = v7->fields.breakIcon_11;
        if ( !v22 )
          goto LABEL_36;
        if ( (unsigned int)v15 >= LODWORD(v22->fields.leftAnchor) )
          goto LABEL_37;
        v21 = (UISprite_o *)*((_QWORD *)&v22->fields.rightAnchor + v15);
        v19 = (System_String_o *)StringLiteral_18647/*"event_superboss_hp_icon_0"*/;
        v20 = v7;
        goto LABEL_24;
      }
LABEL_28:
      if ( v13 - 1 >= leftAnchor )
        goto LABEL_33;
      breakIcon_11 = v7->fields.breakIcon_11;
      ++v13;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
    v16 = v7->fields.breakIcon_11;
    if ( !v16 )
      goto LABEL_36;
    if ( (unsigned int)v15 >= LODWORD(v16->fields.leftAnchor) )
      goto LABEL_37;
    v17 = (UISprite_o *)*((_QWORD *)&v16->fields.rightAnchor + v15);
    v27 = v13;
    v18 = System_Int32__ToString((int32_t)&v27, 0LL);
    v19 = System_String__Concat_43849904((System_String_o *)StringLiteral_18646/*"event_superboss_hp_icon_"*/, v18, 0LL);
    v20 = v7;
    v21 = v17;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v20,
                                                 v21,
                                                 v19,
                                                 method);
    v23 = v7->fields.breakIcon_11;
    if ( !v23 )
      goto LABEL_36;
    if ( (unsigned int)v15 >= LODWORD(v23->fields.leftAnchor) )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&v23->fields.rightAnchor + v15);
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
    v12 = 0;
    while ( v12 < LODWORD(breakIcon_11->fields.leftAnchor) )
    {
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&breakIcon_11->fields.rightAnchor + (int)v12);
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
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
    v26 = sub_B0D9A8(this);
    sub_B0D948(v26, 0LL);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v7,
    (UISprite_o *)v7->fields.bossName,
    (System_String_o *)StringLiteral_18648/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v24) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.namespaze)(v24);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  EventBossStatusUiEntity_c *klass; // x8
  __int64 v17; // x9
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  System_Int32_array **ClearBossEffect; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *animEndCall; // x21
  const MethodInfo *v29; // x2
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  _QWORD *v39; // x0
  System_Reflection_MethodBase_o *v40; // x0
  float v41; // s8
  System_Action_o *v42; // x20
  System_Collections_IEnumerator_o *v43; // x1

  v10 = this;
  if ( (byte_42130BE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, mapAssetData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v12);
    this = (TitleInfoPersonalBossComponent_o *)sub_B0D8A4(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v13);
    byte_42130BE = 1;
  }
  if ( LOBYTE(v10[1].klass) )
    goto LABEL_4;
  eventBossStatusUiEntity = v10->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (currentUserBossEnt = v10->fields.currentUserBossEnt) != 0LL
    && (klass = eventBossStatusUiEntity[1].klass, currentUserBossEnt->fields.damage < (__int64)klass)
    && ((v17 = *(_QWORD *)&v10->fields.HPfrom) == 0 || *(_QWORD *)(v17 + 32) >= (__int64)klass)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    LOBYTE(v10[1].klass) = 1;
    *(_QWORD *)&v10->fields.isGaugeBreak = callback;
    sub_B0D840(
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
                                                 v20);
      v10->fields.gaugeBreakEffect = (struct UnityEngine_GameObject_o *)ClearBossEffect;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v10->fields.gaugeBreakEffect,
        ClearBossEffect,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v10, v19);
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
    sub_B0D840(
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
      v30 = (System_Int32_array **)TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v10, mapAssetData, v29);
      v10->fields.animEndCall = (struct System_Action_o *)v30;
      sub_B0D840((BattleServantConfConponent_o *)&v10->fields.animEndCall, v30, v31, v32, v33, v34, v35, v36);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakHpDownSeName, 0LL) )
    {
      v39 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 75) & 2) != 0 )
        v39 = (_QWORD *)sub_B0D8AC(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v40 = (System_Reflection_MethodBase_o *)sub_B0D888(v39, v39[3]);
      OverwriteAssetSoundName__PlaySe(v40, v10->fields.breakHpDownSeName, 0LL);
    }
    v41 = *(float *)&v10->fields.assetData;
    v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v37, v38);
    System_Action___ctor(
      v42,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v43 = BasicHelper__DelayCall(v41, v42, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v10, v43, 0LL);
  }
}


void __fastcall TitleInfoPersonalBossComponent__UpdateBreakGaugeDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v3; // x8
  int32_t clearBossEffect; // w1
  int64_t v5; // x9
  __int64 v6; // x8
  __int64 v7; // x10
  int v8; // w11
  __int64 v9; // x12
  int32_t v10; // w2
  __int64 v11; // x13
  __int64 *v12; // x13
  int64_t v13; // t1
  __int64 v14; // x13
  bool v15; // vf
  int64_t v16; // x13
  __int64 v17; // x0

  v3 = *(_QWORD *)&this->fields.HPfrom;
  clearBossEffect = (int32_t)this->fields.clearBossEffect;
  if ( v3 )
    v5 = *(_QWORD *)(v3 + 32);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v6 )
    sub_B0D97C(this);
  v7 = *(_QWORD *)(v6 + 24);
  if ( (int)v7 < 1 )
  {
    v16 = v5;
    v10 = (int32_t)this->fields.clearBossEffect;
  }
  else
  {
    v8 = 0;
    v9 = *(_QWORD *)(v6 + 24);
    v10 = (int32_t)this->fields.clearBossEffect;
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
        v17 = sub_B0D9A8(this);
        sub_B0D948(v17, 0LL);
      }
      v14 = *v12;
      v15 = __OFSUB__(v5, v14);
      v16 = v5 - v14;
      if ( v16 < 0 != v15 )
        break;
      ++v8;
      --v10;
      v5 = v16;
      if ( v8 >= (int)v7 )
        goto LABEL_14;
    }
    v16 = v5;
  }
LABEL_14:
  this->fields.oldMaxHp = v16;
  TitleInfoPersonalBossComponent__SetupBreakGauge(this, clearBossEffect, v10, v2);
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
  UnityEngine_Component_o *breakHpDownSeName; // x0

  v8 = *(System_Action_o **)&this->fields.isGaugeBreak;
  v9 = this;
  *(_QWORD *)&this->fields.isGaugeBreak = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B0D840((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v9[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
  {
    sub_B0D97C(breakHpDownSeName);
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
    sub_B0D97C(bossHpFrame);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B0D840((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B0D97C(0LL);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B0D840(&_4__this->fields.atlasList, data);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct TitleInfoPersonalBossComponent_o *v7; // x20
  float v8; // s8
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_42125AD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v3);
    byte_42125AD = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, 0LL),
        (v7 = this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(_4__this);
  }
  v8 = *((float *)&v7->fields.assetData + 1);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  v10 = BasicHelper__DelayCall(v8, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)v7, v10, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, 0LL);
}