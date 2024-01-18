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

  if ( (byte_41863E8 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_14466/*"TitleInfoEventSuperBossEffect_Dead"*/, v8);
    sub_B2C35C(&StringLiteral_18598/*"event_superboss_icon_"*/, v9);
    sub_B2C35C(&StringLiteral_14465/*"TitleInfoEventSuperBossEffect_Break"*/, v10);
    byte_41863E8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18598/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18598/*"event_superboss_icon_"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_14466/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v13->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14466/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->SUPERBOSS_CLEAR_EFFECT_PREFAB, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_14465/*"TitleInfoEventSuperBossEffect_Break"*/;
  v21->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14465/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_B2C2F8(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_41863E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16445/*"ar60"*/, v10);
    sub_B2C35C(&StringLiteral_16440/*"ar210"*/, v11);
    byte_41863E7 = 1;
  }
  v12 = (System_Int32_array **)StringLiteral_16445/*"ar60"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16445/*"ar60"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.breakHpDownSeName, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Int32_array **)StringLiteral_16440/*"ar210"*/;
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = StringLiteral_16440/*"ar210"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.breakEffectStartWaitTime, v13, v14, v15, v16, v17, v18, v19);
  this->fields.assetData = (struct AssetData_o *)0x3E99999A3F800000LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.eventId = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
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
  __int64 v10; // x1

  if ( (byte_41863E6 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&UserSuperBossEntity_TypeInfo, v7);
    byte_41863E6 = 1;
  }
  v8 = (UserSuperBossEntity_o *)sub_B2C42C(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v8, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v8 )
    sub_B2C434(UserId, v10);
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
  __int64 v11; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  Il2CppObject *v13; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int eventSuperBossEntity; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41863DD & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, mapAssetData);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_16216/*"_{0}{1:D2}"*/, v7);
    byte_41863DD = 1;
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
  v9 = System_String__Concat_44305532(
         v8->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
         (System_String_o *)StringLiteral_16216/*"_{0}{1:D2}"*/,
         0LL);
  eventSuperBossEntity = (int)this->fields.eventSuperBossEntity;
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &eventSuperBossEntity);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B2C434(v10, v11);
  v13 = (Il2CppObject *)v10;
  idx = eventBossStatusUiEntity->fields.idx;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v15 = System_String__Format_44301068(v9, v13, v14, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v15,
                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  __int64 v16; // x11
  unsigned __int64 v17; // x8
  __int64 v18; // x10
  int64_t v19; // x20
  __int64 v20; // x9
  __int64 v21; // x10
  __int64 v22; // x11
  __int64 v23; // x12
  BalanceConfig_c *v24; // x0
  struct BalanceConfig_StaticFields *v25; // x8
  int32_t v26; // w20
  int64_t v27; // x21
  BalanceConfig_c *v28; // x0
  struct BalanceConfig_StaticFields *v29; // x8
  int32_t v30; // w20
  int32_t v31; // w21
  __int64 v32; // x11
  unsigned __int64 v33; // x8
  unsigned __int64 v34; // x9
  __int64 v35; // x11
  __int64 v36; // x12
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t idx; // w19
  int32_t eventId; // w21
  __int64 v41; // x0

  if ( (byte_41863E5 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    byte_41863E5 = 1;
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
    v16 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v16 )
      goto LABEL_52;
    v17 = *(unsigned int *)(v16 + 24);
    v18 = (v17 << 32) - 0x100000000LL;
    if ( v18 >= 1 )
    {
      v19 = 0LL;
      v20 = 0LL;
      v21 = v18 >> 32;
      v22 = v16 + 32;
      while ( v20 < v17 )
      {
        v23 = *(_QWORD *)(v22 + 8 * v20++);
        v19 += v23;
        if ( v20 >= v21 )
          goto LABEL_46;
      }
      goto LABEL_51;
    }
  }
  else
  {
LABEL_23:
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    v25 = v24->static_fields;
    v26 = v25->OrtLateQuestId;
    v27 = v25->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v26, v27, 0, 0LL) )
      goto LABEL_43;
    v28 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    v29 = v28->static_fields;
    v30 = v29->OrtLateQuestId;
    v31 = v29->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v30, v31 + 1, 0, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_43:
      IsOpen = this->fields.eventBossStatusUiEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity((EventSuperBossEntity_o *)IsOpen, 0LL);
LABEL_52:
      sub_B2C434(IsOpen, v14);
    }
    v32 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v32 )
      goto LABEL_52;
    v33 = *(unsigned int *)(v32 + 24);
    if ( (__int64)(v33 << 32) >= 1 )
    {
      v19 = 0LL;
      v34 = 0LL;
      v35 = v32 + 32;
      while ( v34 < v33 )
      {
        v36 = *(_QWORD *)(v35 + 8 * v34++);
        v19 += v36;
        if ( (__int64)v34 >= (int)v33 )
          goto LABEL_46;
      }
LABEL_51:
      v41 = sub_B2C460(IsOpen);
      sub_B2C400(v41, 0LL);
    }
  }
  v19 = 0LL;
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
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, idx, v19, v15);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41863D5 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v3);
    byte_41863D5 = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_41863DB & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    byte_41863DB = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
  if ( (byte_41863DF & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, mapAssetData);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v6);
    byte_41863DF = 1;
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
  v10 = System_String__Concat_44307816(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_15905/*"_"*/,
          v9,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v10,
                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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

  if ( (byte_41863D1 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_41863D1 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(mapButtonGrid, method);
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

  if ( (byte_41863E4 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CondType_TypeInfo, v2);
    byte_41863E4 = 1;
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
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21

  if ( (byte_41863D6 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v8);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v9);
    sub_B2C35C(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v10);
    byte_41863D6 = 1;
  }
  v11 = sub_B2C42C(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *)v11,
    0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v26);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v11,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v28, 1, 0LL) )
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

  if ( (byte_41863D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_41863D7 = 1;
  }
  if ( this->fields.atlasList )
  {
    v11 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
    if ( !v11 )
LABEL_18:
      sub_B2C434(v11, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v21 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23501/*"{0:D2}"*/, v14, 0LL);
      v20 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v17 = System_String__Format_44301068((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v15, 0LL);
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  LOBYTE(this->fields.hpList) = 0;
  this->fields.currentUserBossEnt = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.currentUserBossEnt, 0LL, v10, v11, v12, v13, v14, v15);
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
  __int64 v14; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  TitleInfoPersonalBossComponent_c *v16; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v18; // x20
  System_Collections_IEnumerator_o *v19; // x1
  System_Action_o *v20; // x21
  System_Action_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_41863DE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v6);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v7);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v8);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v9);
    byte_41863DE = 1;
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
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v12, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition(v12, 0LL);
    if ( v12 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v12,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        v16 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v16 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v16->static_fields->CLEAR_CALLBACK_DELAY;
        v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v19 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v18, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
        return;
      }
      v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v20,
          0LL);
        v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v21;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        return;
      }
    }
    sub_B2C434(v13, v14);
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
  __int64 v12; // x1
  struct UISprite_o *breakIcon_11; // x8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v17; // w22
  System_Action_o *v18; // x0
  System_Action_o *v19; // x20
  System_Collections_IEnumerator_o *v20; // x1
  __int64 v21; // x0

  if ( (byte_41863E1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v6);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v7);
    byte_41863E1 = 1;
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
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIcon_11 = this->fields.breakIcon_11;
  if ( !breakIcon_11 )
    goto LABEL_19;
  if ( !LODWORD(breakIcon_11->fields.leftAnchor) )
  {
    v21 = sub_B2C460(rightAnchor);
    sub_B2C400(v21, 0LL);
  }
  v14 = (UnityEngine_GameObject_o *)rightAnchor;
  rightAnchor = (UnityEngine_Component_o *)breakIcon_11->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(rightAnchor, 0LL);
  GameObjectExtensions__SafeSetParent_31331952(v14, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v14, 0LL);
  if ( !v14 )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v14,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v17 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v19 = v18;
  if ( v17 )
  {
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v20 = BasicHelper__DelayCall(0.533, v19, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
    return;
  }
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_srcLineSprite )
LABEL_19:
    sub_B2C434(rightAnchor, v12);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v19, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
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
  EasingObject_o *v28; // x20
  TitleInfoPersonalBossComponent_c *v29; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v31; // x21
  System_Action_o *v32; // x22

  if ( (byte_41863E0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v4);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v5);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v6);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v7);
    sub_B2C35C(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v8);
    byte_41863E0 = 1;
  }
  v9 = sub_B2C42C(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = this->fields.oldDamage;
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL) )
  {
    v18 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 75) & 2) != 0 )
      v18 = (_QWORD *)sub_B2C364(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v19 = (System_Reflection_MethodBase_o *)sub_B2C340(v18, v18[3]);
    OverwriteAssetSoundName__PlaySe(v19, *(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v9 + 16) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), Component_UIWidget, v22, v23, v24, v25, v26, v27);
  v28 = *(EasingObject_o **)(v9 + 16);
  v29 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v29 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v29->static_fields->ANIM_DURATION_HP_CUT;
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v32 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v9,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v28 )
LABEL_13:
    sub_B2C434(v10, v11);
  EasingObject__Play(v28, ANIM_DURATION_HP_CUT, v31, v32, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
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
  EasingObject_o *v27; // x20
  TitleInfoPersonalBossComponent_c *v28; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v30; // x21
  System_Action_o *v31; // x22

  if ( (byte_41863E2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v4);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v5);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v6);
    sub_B2C35C(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v7);
    byte_41863E2 = 1;
  }
  v8 = sub_B2C42C(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)v8,
    0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_QWORD *)(v8 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 32) = this->fields.currentDamage;
  *(_QWORD *)(v8 + 40) = this->fields.oldMaxHp;
  currentDamage = this->fields.currentDamage;
  oldMaxHp = this->fields.oldMaxHp;
  LODWORD(this->fields.currentMaxHp) = 0;
  *(float *)&oldMaxHp = 1.0 - (double)oldMaxHp / (double)currentDamage;
  *((float *)&this->fields.currentMaxHp + 1) = UnityEngine_Mathf__Clamp01(*(float *)&oldMaxHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v8 + 16) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), Component_UIWidget, v21, v22, v23, v24, v25, v26);
  v27 = *(EasingObject_o **)(v8 + 16);
  v28 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v28 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v28->static_fields->ANIM_DURATION_HP_CUT;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v8,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v8,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v27 )
LABEL_9:
    sub_B2C434(v9, v10);
  EasingObject__Play(v27, ANIM_DURATION_HP_CUT, v30, v31, 0.0, 0, 0LL);
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

  if ( (byte_41863DA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v3);
    byte_41863DA = 1;
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
    sub_B2C2F8(p_atlasList, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *v3; // x0

  if ( (byte_41863D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, method);
    byte_41863D9 = 1;
  }
  v3 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
  if ( !v3 )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v3,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
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
  __int64 v26; // x1
  UILabel_o *Master_WarQuestSelectionMaster; // x0
  int32_t eventSuperBossEntity; // w21
  EventSuperBossMaster_o *v29; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  int32_t v34; // w21
  EventBossStatusUiMaster_o *v35; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v38; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  const MethodInfo *v41; // x2
  struct EventBossStatusUiEntity_o *v42; // x8
  struct System_String_o *breakEffectBeforeSeName; // x21
  int v44; // s0
  __int64 v48; // x8
  int v49; // w22
  int64_t v50; // x9
  __int64 v51; // x10
  int v52; // w11
  __int64 v53; // x12
  int v54; // w21
  __int64 v55; // x13
  __int64 *v56; // x13
  int64_t v57; // t1
  __int64 v58; // x13
  bool v59; // vf
  __int64 v60; // x13
  __int64 v61; // x9
  int64_t v62; // x10
  __int64 v63; // x9
  int v64; // w11
  __int64 v65; // x12
  __int64 v66; // x13
  __int64 *v67; // x13
  int64_t v68; // t1
  __int64 v69; // x13
  int64_t v70; // x13
  struct EventBossStatusUiEntity_o *v71; // x8
  BalanceConfig_c *v72; // x0
  int32_t idx; // w24
  TitleInfoPersonalBossComponent_o *v74; // x0
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x3
  int32_t clearBossEffect; // w1
  TitleInfoPersonalBossComponent_o *v79; // x0
  int32_t v80; // w2
  struct EventBossStatusUiEntity_o *v81; // x8
  struct UserSuperBossEntity_o *v82; // x9
  EventBossStatusUiEntity_c *klass; // x8
  float v84; // s0
  float v85; // s0
  const MethodInfo *v86; // x2
  float v87; // s0
  float v88; // s0
  float v89; // s0
  const MethodInfo *v90; // x2
  float v91; // s0
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  const MethodInfo *v95; // x3
  UISprite_o *hpBarWhiteSprite; // x20
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  const MethodInfo *v99; // x3
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x3
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x2
  __int64 v104; // x0
  EventSuperBossEntity_o *v105; // [xsp+0h] [xbp-50h] BYREF
  __int64 v106; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41863D3 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_EventSuperBossMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&TitleInfoPersonalBossComponent_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_18597/*"event_superboss_hp_white"*/, v8);
    sub_B2C35C(&StringLiteral_18550/*"event_raid_hp_back"*/, v9);
    sub_B2C35C(&StringLiteral_18592/*"event_superboss_hp_lower_"*/, v10);
    sub_B2C35C(&StringLiteral_18551/*"event_raid_hp_frame"*/, v11);
    sub_B2C35C(&StringLiteral_18596/*"event_superboss_hp_upper_"*/, v12);
    byte_41863D3 = 1;
  }
  v105 = 0LL;
  v106 = 0LL;
  CurrentUserSuperBossEntity = (System_Int32_array **)TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
                                                        this,
                                                        method);
  p_HPfrom = &this->fields.HPfrom;
  *(_QWORD *)&this->fields.HPfrom = CurrentUserSuperBossEntity;
  sub_B2C2F8(
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
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v29 = (EventSuperBossMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v29 )
      goto LABEL_108;
    if ( EventSuperBossMaster__TryGetEntity(
           v29,
           &v105,
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
      if ( !v105 )
        goto LABEL_108;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v31 = System_Int32__ToString((int)v105 + 56, 0LL);
      v32 = System_String__Concat_44305532(SUPERBOSS_ICON_SPNAME_PREFIX, v31, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v32, v33);
      if ( !v105 )
        goto LABEL_108;
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_108;
      UILabel__set_text(Master_WarQuestSelectionMaster, v105->fields.name, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v34 = (int32_t)this->fields.eventSuperBossEntity;
    v35 = (EventBossStatusUiMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v35 )
      goto LABEL_108;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v35,
                                  v34,
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
    v38 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v39 = System_Int32__ToString((int)eventBossStatusUiEntity + 56, 0LL);
    v40 = System_String__Concat_44305532(v38, v39, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v40, v41);
    v42 = this->fields.eventBossStatusUiEntity;
    if ( !v42 )
      goto LABEL_108;
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UILabel__set_text(Master_WarQuestSelectionMaster, (System_String_o *)v42->fields.script, 0LL);
    EntityFromEventIdAndIndex = (EventBossStatusUiEntity_o *)this->fields.oldUserBossEnt;
  }
  breakEffectBeforeSeName = this->fields.breakEffectBeforeSeName;
  if ( EntityFromEventIdAndIndex )
  {
    v107.fields.r = 0.0;
    v107.fields.g = 0.0;
    v107.fields.b = 0.0;
    v107.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v44 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v107, 0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  else
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.eventBossStatusUiEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    *(UnityEngine_Color_o *)&v44 = EventSuperBossEntity__GetBossColor(
                                     (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                     0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  UILabel__set_effectColor((UILabel_o *)breakEffectBeforeSeName, *(UnityEngine_Color_o *)&v44, 0LL);
  Master_WarQuestSelectionMaster = this->fields.totalHpLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                  0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  v48 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v48 )
    goto LABEL_108;
  v49 = *(_DWORD *)(v48 + 24) - 1;
  LODWORD(this->fields.clearBossEffect) = v49;
  v50 = currentUserBossEnt ? currentUserBossEnt->fields.damage : 0LL;
  v51 = *(_QWORD *)(v48 + 24);
  if ( (int)v51 < 1 )
  {
    v60 = v50;
    v54 = v49;
  }
  else
  {
    v52 = 0;
    v53 = *(_QWORD *)(v48 + 24);
    v54 = v49;
    while ( 1 )
    {
      if ( v52 >= (unsigned int)v53 )
        goto LABEL_107;
      v55 = v48 + 8LL * v52;
      v57 = *(_QWORD *)(v55 + 32);
      v56 = (__int64 *)(v55 + 32);
      this->fields.oldDamage = v57;
      v53 = *(_QWORD *)(v48 + 24);
      if ( v52 >= (unsigned int)v53 )
        goto LABEL_107;
      v58 = *v56;
      v59 = __OFSUB__(v50, v58);
      v60 = v50 - v58;
      if ( v60 < 0 != v59 )
        break;
      ++v52;
      --v54;
      v50 = v60;
      if ( v52 >= (int)v51 )
        goto LABEL_62;
    }
    v60 = v50;
  }
LABEL_62:
  v61 = *(_QWORD *)&this->fields.HPfrom;
  *(_QWORD *)&this->fields.maxBreakCount = v60;
  if ( v61 )
    v62 = *(_QWORD *)(v61 + 32);
  else
    v62 = 0LL;
  v63 = *(_QWORD *)(v48 + 24);
  if ( (int)v63 >= 1 )
  {
    v64 = 0;
    v65 = *(_QWORD *)(v48 + 24);
    while ( v64 < (unsigned int)v65 )
    {
      v66 = v48 + 8LL * v64;
      v68 = *(_QWORD *)(v66 + 32);
      v67 = (__int64 *)(v66 + 32);
      this->fields.currentDamage = v68;
      v65 = *(_QWORD *)(v48 + 24);
      if ( v64 >= (unsigned int)v65 )
        break;
      v69 = *v67;
      v59 = __OFSUB__(v62, v69);
      v70 = v62 - v69;
      if ( v70 < 0 != v59 )
        goto LABEL_72;
      ++v64;
      --v49;
      v62 = v70;
      if ( v64 >= (int)v63 )
        goto LABEL_73;
    }
LABEL_107:
    v104 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v104, 0LL);
  }
LABEL_72:
  v70 = v62;
LABEL_73:
  v71 = this->fields.eventBossStatusUiEntity;
  this->fields.oldMaxHp = v70;
  if ( !v71 )
    goto LABEL_108;
  v72 = BalanceConfig_TypeInfo;
  idx = v71->fields.idx;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v72 = BalanceConfig_TypeInfo;
  }
  if ( idx == v72->static_fields->OrtThirdFormId )
    LOBYTE(this->fields.hpList) = v54 == 1 && v49 == 0;
  LODWORD(v106) = v54 + 1;
  HIDWORD(v106) = v54;
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL)) == 0LL )
  {
LABEL_108:
    sub_B2C434(Master_WarQuestSelectionMaster, v26);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v74, v75) )
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( Master_WarQuestSelectionMaster )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v76);
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
      if ( Master_WarQuestSelectionMaster )
      {
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v79 = this;
        v80 = 0;
        goto LABEL_101;
      }
    }
    goto LABEL_108;
  }
  v81 = this->fields.eventBossStatusUiEntity;
  if ( v81 )
  {
    v82 = this->fields.currentUserBossEnt;
    if ( v82 )
    {
      klass = v81[1].klass;
      if ( v82->fields.damage < (__int64)klass
        && (!*(_QWORD *)p_HPfrom || *(_QWORD *)(*(_QWORD *)p_HPfrom + 32LL) >= (__int64)klass) )
      {
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v103);
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        v87 = 1.0;
        if ( v54 <= 0 )
          v87 = 0.0;
LABEL_95:
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v87, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v79 = this;
        v80 = v54;
        goto LABEL_101;
      }
    }
  }
  if ( LOBYTE(this->fields.hpList) )
  {
    v84 = 1.0 - (double)*(__int64 *)&this->fields.maxBreakCount / (double)this->fields.oldDamage;
    v85 = UnityEngine_Mathf__Clamp01(v84, 0LL);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    *(float *)&this->fields.currentMaxHp = v85;
    HIDWORD(this->fields.currentMaxHp) = 0;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v85, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(
      this,
      this->fields.oldDamage - *(_QWORD *)&this->fields.maxBreakCount,
      v86);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    v87 = 0.0;
    if ( v54 > 0 )
      v87 = 1.0;
    goto LABEL_95;
  }
  LODWORD(v106) = v49 + 1;
  HIDWORD(v106) = v49;
  v88 = 1.0 - (double)this->fields.oldMaxHp / (double)this->fields.currentDamage;
  v89 = UnityEngine_Mathf__Clamp01(v88, 0LL);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
  *(float *)&this->fields.currentMaxHp = v89;
  *((float *)&this->fields.currentMaxHp + 1) = v89;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v89, 0LL);
  TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentDamage - this->fields.oldMaxHp, v90);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  v91 = 0.0;
  if ( v49 > 0 )
    v91 = 1.0;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v91, 0LL);
  clearBossEffect = (int32_t)this->fields.clearBossEffect;
  v79 = this;
  v80 = v49;
LABEL_101:
  TitleInfoPersonalBossComponent__SetupBreakGauge(v79, clearBossEffect, v80, v77);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v93 = System_Int32__ToString((int32_t)&v106 + 4, 0LL);
  v94 = System_String__Concat_44305532((System_String_o *)StringLiteral_18592/*"event_superboss_hp_lower_"*/, v93, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v94, v95);
  hpBarWhiteSprite = this->fields.hpBarWhiteSprite;
  v97 = System_Int32__ToString((int32_t)&v106, 0LL);
  v98 = System_String__Concat_44305532((System_String_o *)StringLiteral_18596/*"event_superboss_hp_upper_"*/, v97, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarWhiteSprite, v98, v99);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.breakIconList,
    (System_String_o *)StringLiteral_18597/*"event_superboss_hp_white"*/,
    v100);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_18551/*"event_raid_hp_frame"*/,
    v101);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.hpBarSlider,
    (System_String_o *)StringLiteral_18550/*"event_raid_hp_back"*/,
    v102);
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
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  bool v18; // w20
  int v19; // w21
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_41863D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_41863D8 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.eventId, (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v21,
      IsNullOrEmpty,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v22 = v21;
    do
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v13 )
      {
        v18 = 0;
        v19 = 8;
        goto LABEL_16;
      }
      current = v22.fields.current;
      if ( !v22.fields.current )
        sub_B2C434(v13, v14);
      v16 = UIAtlas__GetSprite((UIAtlas_o *)v22.fields.current, spriteName, 0LL);
    }
    while ( !v16 );
    if ( !sprite )
      sub_B2C434(v16, v17);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v18 = 1;
    v19 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v19 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B2C434(IsNullOrEmpty, v12);
    }
  }
  return v18;
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
  __int64 v11; // x1
  int64_t v12; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41863E3 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, hp);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3277/*"COMMON_NUM_FORMAT"*/, v6);
    byte_41863E3 = 1;
  }
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_NUM_FORMAT"*/, 0LL);
  v12 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !hpBarUnderSprite )
    sub_B2C434(v10, v11);
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
  __int64 v21; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **BreakGaugeHpList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t eventSuperBossEntity; // w20
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x3

  if ( (byte_41863D2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, superBossEntity);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v11);
    sub_B2C35C(&DataManager_TypeInfo, v12);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v13);
    byte_41863D2 = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)superBossEntity,
    (System_String_array **)oldUserBossEnt,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentUserBossEnt = oldUserBossEnt;
  sub_B2C2F8(
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
    Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity
      || !Master_WarQuestSelectionMaster
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_WarQuestSelectionMaster,
                                        (int32_t)this->fields.eventSuperBossEntity,
                                        eventBossStatusUiEntity->fields.idx,
                                        0LL),
          this->fields.oldUserBossEnt = (struct UserSuperBossEntity_o *)EntityFromEventIdAndIndex,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.oldUserBossEnt,
            (System_Int32_array **)EntityFromEventIdAndIndex,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29),
          (Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)this->fields.eventBossStatusUiEntity) == 0LL) )
    {
      sub_B2C434(Master_WarQuestSelectionMaster, v21);
    }
    BreakGaugeHpList = (System_Int32_array **)EventSuperBossEntity__GetBreakGaugeHpList(
                                                (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField = BreakGaugeHpList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._IsPlayedDamageAnimation_k__BackingField,
      BreakGaugeHpList,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v38 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventSuperBossEntity, v38, v39);
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
    sub_B2C434(v6, v7);
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
  if ( (byte_41863D4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18589/*"event_superboss_hp_icon_0"*/, *(_QWORD *)&maxCount);
    sub_B2C35C(&StringLiteral_18590/*"event_superboss_hp_icon_11"*/, v8);
    this = (TitleInfoPersonalBossComponent_o *)sub_B2C35C(&StringLiteral_18588/*"event_superboss_hp_icon_"*/, v9);
    byte_41863D4 = 1;
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
        (System_String_o *)StringLiteral_18590/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v24) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_B2C434(this, *(_QWORD *)&maxCount);
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
        v19 = (System_String_o *)StringLiteral_18589/*"event_superboss_hp_icon_0"*/;
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
    v19 = System_String__Concat_44305532((System_String_o *)StringLiteral_18588/*"event_superboss_hp_icon_"*/, v18, 0LL);
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
    v26 = sub_B2C460(this);
    sub_B2C400(v26, 0LL);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v7,
    (UISprite_o *)v7->fields.bossName,
    (System_String_o *)StringLiteral_18590/*"event_superboss_hp_icon_11"*/,
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
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  float v39; // s8
  System_Action_o *v40; // x20
  System_Collections_IEnumerator_o *v41; // x1

  v10 = this;
  if ( (byte_41863DC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, mapAssetData);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v12);
    this = (TitleInfoPersonalBossComponent_o *)sub_B2C35C(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v13);
    byte_41863DC = 1;
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
    sub_B2C2F8(
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
      sub_B2C2F8(
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
    sub_B2C2F8(
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
      sub_B2C2F8((BattleServantConfConponent_o *)&v10->fields.animEndCall, v30, v31, v32, v33, v34, v35, v36);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakHpDownSeName, 0LL) )
    {
      v37 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 75) & 2) != 0 )
        v37 = (_QWORD *)sub_B2C364(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v38 = (System_Reflection_MethodBase_o *)sub_B2C340(v37, v37[3]);
      OverwriteAssetSoundName__PlaySe(v38, v10->fields.breakHpDownSeName, 0LL);
    }
    v39 = *(float *)&v10->fields.assetData;
    v40 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v40,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v41 = BasicHelper__DelayCall(v39, v40, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v10, v41, 0LL);
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
    sub_B2C434(this, clearBossEffect_low);
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
        v17 = sub_B2C460(this);
        sub_B2C400(v17, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v9[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
  {
    sub_B2C434(breakHpDownSeName, v16);
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
    sub_B2C434(bossHpFrame, method);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B2C2F8((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B2C434(0LL, data);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B2C2F8(&_4__this->fields.atlasList, data);
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
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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
  struct TitleInfoPersonalBossComponent_o *v5; // x20
  float v6; // s8
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v8; // x1

  if ( (byte_4185345 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v3);
    byte_4185345 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, 0LL),
        (v5 = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, method);
  }
  v6 = *((float *)&v5->fields.assetData + 1);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  v8 = BasicHelper__DelayCall(v6, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v5, v8, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, 0LL);
}