void __fastcall TitleInfoPersonalBossComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct TitleInfoPersonalBossComponent_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TitleInfoPersonalBossComponent_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  TitleInfoPersonalBossComponent_c *v35; // x8

  if ( (byte_42E6C70 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_14623/*"TitleInfoEventSuperBossEffect_Dead"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18829/*"event_superboss_icon_"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_14622/*"TitleInfoEventSuperBossEffect_Break"*/, v14, v15, v16);
    byte_42E6C70 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18829/*"event_superboss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18829/*"event_superboss_icon_"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_14623/*"TitleInfoEventSuperBossEffect_Dead"*/;
  v19->SUPERBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14623/*"TitleInfoEventSuperBossEffect_Dead"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->SUPERBOSS_CLEAR_EFFECT_PREFAB, v20, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoPersonalBossComponent_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_14622/*"TitleInfoEventSuperBossEffect_Break"*/;
  v27->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14622/*"TitleInfoEventSuperBossEffect_Break"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v27->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = TitleInfoPersonalBossComponent_TypeInfo;
  TitleInfoPersonalBossComponent_TypeInfo->static_fields->ANIM_DURATION_HP_CUT = 1.5;
  v35->static_fields->CLEAR_CALLBACK_DELAY = 2.0;
}


void __fastcall TitleInfoPersonalBossComponent___ctor(TitleInfoPersonalBossComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **v18; // x1
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E6C6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16643/*"ar60"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16638/*"ar210"*/, v15, v16, v17);
    byte_42E6C6F = 1;
  }
  v18 = (System_Int32_array **)StringLiteral_16643/*"ar60"*/;
  this->fields.breakHpDownSeName = (struct System_String_o *)StringLiteral_16643/*"ar60"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.breakHpDownSeName, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Int32_array **)StringLiteral_16638/*"ar210"*/;
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = StringLiteral_16638/*"ar210"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.breakEffectStartWaitTime, v19, v20, v21, v22, v23, v24, v25);
  this->fields.assetData = (struct AssetData_o *)0x3E99999A3F800000LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  *(_QWORD *)&this->fields.eventId = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventId,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UserSuperBossEntity_o *v10; // x22
  int64_t UserId; // x0
  __int64 v12; // x1

  if ( (byte_42E6C6E & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, id, damange, method);
    sub_B5D5C4(&UserSuperBossEntity_TypeInfo, v7, v8, v9);
    byte_42E6C6E = 1;
  }
  v10 = (UserSuperBossEntity_o *)sub_B5D694(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v10, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v10 )
    sub_B5D69C(UserId, v12);
  v10->fields.userId = UserId;
  v10->fields.eventId = eventId;
  v10->fields.superBossId = id;
  v10->fields.damage = damange;
  return v10;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  TitleInfoPersonalBossComponent_c *v15; // x0
  System_String_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int eventSuperBossEntity; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6C65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)mapAssetData, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16410/*"_{0}{1:D2}"*/, v12, v13, v14);
    byte_42E6C65 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v15 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v15 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  v16 = System_String__Concat_44577788(
          v15->static_fields->SUPERBOSS_CLEAR_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16410/*"_{0}{1:D2}"*/,
          0LL);
  eventSuperBossEntity = (int)this->fields.eventSuperBossEntity;
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &eventSuperBossEntity);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  if ( !eventBossStatusUiEntity )
    sub_B5D69C(v17, v18);
  v20 = (Il2CppObject *)v17;
  idx = eventBossStatusUiEntity->fields.idx;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v22 = System_String__Format_44573324(v16, v20, v21, 0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v22,
                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
}


UserSuperBossEntity_o *__fastcall TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w20
  int64_t OrtLatePhaseBreak; // x21
  BalanceConfig_c *v15; // x0
  struct BalanceConfig_StaticFields *v16; // x8
  int32_t v17; // w20
  int64_t OrtLatePhaseDead; // x21
  struct EventBossStatusUiEntity_o *IsOpen; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  __int64 v22; // x11
  unsigned __int64 v23; // x8
  __int64 v24; // x10
  int64_t v25; // x20
  __int64 v26; // x9
  __int64 v27; // x10
  __int64 v28; // x11
  __int64 v29; // x12
  BalanceConfig_c *v30; // x0
  struct BalanceConfig_StaticFields *v31; // x8
  int32_t v32; // w20
  int64_t v33; // x21
  BalanceConfig_c *v34; // x0
  struct BalanceConfig_StaticFields *v35; // x8
  int32_t v36; // w20
  int32_t v37; // w21
  __int64 v38; // x11
  unsigned __int64 v39; // x8
  unsigned __int64 v40; // x9
  __int64 v41; // x11
  __int64 v42; // x12
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t idx; // w19
  int32_t eventId; // w21
  __int64 v47; // x0

  if ( (byte_42E6C6D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v8, v9, v10);
    byte_42E6C6D = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  static_fields = v11->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseBreak = static_fields->OrtLatePhaseBreak;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseBreak, 0, 0LL) )
    goto LABEL_23;
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = v15->static_fields;
  v17 = v16->OrtLateQuestId;
  OrtLatePhaseDead = v16->OrtLatePhaseDead;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v17, OrtLatePhaseDead, 0, 0LL);
  if ( ((unsigned __int8)IsOpen & 1) != 0 )
  {
    v22 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v22 )
      goto LABEL_52;
    v23 = *(unsigned int *)(v22 + 24);
    v24 = (v23 << 32) - 0x100000000LL;
    if ( v24 >= 1 )
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = v24 >> 32;
      v28 = v22 + 32;
      while ( v26 < v23 )
      {
        v29 = *(_QWORD *)(v28 + 8 * v26++);
        v25 += v29;
        if ( v26 >= v27 )
          goto LABEL_46;
      }
      goto LABEL_51;
    }
  }
  else
  {
LABEL_23:
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    v31 = v30->static_fields;
    v32 = v31->OrtLateQuestId;
    v33 = v31->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( !CondType__IsOpen(46, v32, v33, 0, 0LL) )
      goto LABEL_43;
    v34 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    v35 = v34->static_fields;
    v36 = v35->OrtLateQuestId;
    v37 = v35->OrtLatePhaseDead;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsOpen = (struct EventBossStatusUiEntity_o *)CondType__IsOpen(47, v36, v37 + 1, 0, 0LL);
    if ( ((unsigned __int8)IsOpen & 1) == 0 )
    {
LABEL_43:
      IsOpen = this->fields.eventBossStatusUiEntity;
      if ( IsOpen )
        return EventSuperBossEntity__GetUserSuperBossEntity((EventSuperBossEntity_o *)IsOpen, 0LL);
LABEL_52:
      sub_B5D69C(IsOpen, v20);
    }
    v38 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
    if ( !v38 )
      goto LABEL_52;
    v39 = *(unsigned int *)(v38 + 24);
    if ( (__int64)(v39 << 32) >= 1 )
    {
      v25 = 0LL;
      v40 = 0LL;
      v41 = v38 + 32;
      while ( v40 < v39 )
      {
        v42 = *(_QWORD *)(v41 + 8 * v40++);
        v25 += v42;
        if ( (__int64)v40 >= (int)v39 )
          goto LABEL_46;
      }
LABEL_51:
      v47 = sub_B5D6C8(IsOpen);
      sub_B5D668(v47, 0LL);
    }
  }
  v25 = 0LL;
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
  return TitleInfoPersonalBossComponent__CreateDummyUserSuperBossEntity(eventId, idx, v25, v21);
}


System_String_o *__fastcall TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E6C5D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v5, v6, v7);
    byte_42E6C5D = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
        TitleInfoPersonalBossComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E6C63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, (_DWORD)method, v3);
    byte_42E6C63 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.atlasList;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  return result;
}


UnityEngine_GameObject_o *__fastcall TitleInfoPersonalBossComponent__GetGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  TitleInfoPersonalBossComponent_c *v12; // x0
  System_String_o *SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x0

  v5 = (int)this;
  if ( (byte_42E6C67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)mapAssetData, (_DWORD)method, v3);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v9, v10, v11);
    byte_42E6C67 = 1;
  }
  if ( !mapAssetData )
    return 0LL;
  v12 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v12 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB = v12->static_fields->SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB;
  v14 = System_Int32__ToString(v5 + 176, 0LL);
  v15 = System_String__Concat_44580072(
          SUPERBOSS_GAUGE_BREAK_EFFECT_PREFAB,
          (System_String_o *)StringLiteral_16096/*"_"*/,
          v14,
          0LL);
  return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                       mapAssetData,
                                       v15,
                                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_c *mapButtonGrid; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_42E6C59 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C59 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
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
    sub_B5D69C(mapButtonGrid, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w19
  int64_t OrtLatePhaseDead; // x20

  if ( (byte_42E6C6C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v4, v5, v6);
    byte_42E6C6C = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  System_String_o *EventUIAssetDataPath; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_42E6C5E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, eventId, (_DWORD)callback, method);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__, v13, v14, v15);
    sub_B5D5C4(&TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo, v16, v17, v18);
    byte_42E6C5E = 1;
  }
  v19 = sub_B5D694(TitleInfoPersonalBossComponent___c__DisplayClass55_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass55_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass55_0_o *)v19,
    0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)callback, v28, v29, v30, v31, v32, v33);
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
  }
  EventUIAssetDataPath = TitleInfoPersonalBossComponent__GetEventUIAssetDataPath(eventId, v34);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v19,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass55_0__LoadEventUIAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(EventUIAssetDataPath, v36, 1, 0LL) )
    ActionExtensions__Call(*(System_Action_o **)(v19 + 24), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__LoadLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *v24; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v33; // [xsp+8h] [xbp-58h] BYREF
  int v34; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E6C5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23812/*"{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v21, v22, v23);
    byte_42E6C5F = 1;
  }
  if ( this->fields.atlasList )
  {
    v24 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
    if ( !v24 )
LABEL_18:
      sub_B5D69C(v24, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v24,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23812/*"{0:D2}"*/, v27, 0LL);
      v33 = eventId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      v30 = System_String__Format_44573324((System_String_o *)StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v29, v28, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)TitleInfoPersonalBossComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v30,
                                                                 v31);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)v24 & 1) != 0 )
        break;
      if ( !GameObjectFromEventUIAssetData )
        goto LABEL_18;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)GameObjectFromEventUIAssetData,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        break;
      v24 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
      if ( !v24 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  LOBYTE(this->fields.hpList) = 0;
  this->fields.currentUserBossEnt = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.currentUserBossEnt, 0LL, v10, v11, v12, v13, v14, v15);
  TitleInfoPersonalBossComponent__SetDisp(this, v16);
}


void __fastcall TitleInfoPersonalBossComponent__PlayClearBossEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_Object_o *gaugeBreakEffect; // x20
  struct UnityEngine_GameObject_o *v27; // x20
  UnityEngine_GameObject_o *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  TitleInfoPersonalBossComponent_c *v32; // x0
  float CLEAR_CALLBACK_DELAY; // s8
  System_Action_o *v34; // x20
  System_Collections_IEnumerator_o *v35; // x1
  System_Action_o *v36; // x21
  System_Action_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_42E6C66 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__, v17, v18, v19);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__, v20, v21, v22);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v23, v24, v25);
    byte_42E6C66 = 1;
  }
  gaugeBreakEffect = (UnityEngine_Object_o *)this->fields.gaugeBreakEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(gaugeBreakEffect, 0LL, 0LL) )
  {
    v27 = this->fields.gaugeBreakEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)v27,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    GameObjectExtensions__SafeSetParent(v28, (UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__ResetLocalPosition(v28, 0LL);
    if ( v28 )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v28,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        v32 = TitleInfoPersonalBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
          v32 = TitleInfoPersonalBossComponent_TypeInfo;
        }
        CLEAR_CALLBACK_DELAY = v32->static_fields->CLEAR_CALLBACK_DELAY;
        v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v34,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_0__,
          0LL);
        v35 = BasicHelper__DelayCall(CLEAR_CALLBACK_DELAY, v34, 0LL);
        UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
        return;
      }
      v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)this,
        Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_1__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v36,
          0LL);
        v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v37,
          (Il2CppObject *)this,
          Method_TitleInfoPersonalBossComponent__PlayClearBossEffect_b__63_2__,
          0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v37;
        sub_B5D560(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        return;
      }
    }
    sub_B5D69C(v29, v30);
  }
}


void __fastcall TitleInfoPersonalBossComponent__PlayGaugeBreakEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Action_o *animEndCall; // x20
  const MethodInfo *v21; // x1
  struct System_Action_o *v22; // x20
  UnityEngine_Component_o *rightAnchor; // x0
  __int64 v24; // x1
  struct UISprite_o *breakIcon_11; // x8
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v29; // w22
  System_Action_o *v30; // x0
  System_Action_o *v31; // x20
  System_Collections_IEnumerator_o *v32; // x1
  __int64 v33; // x0

  if ( (byte_42E6C69 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__, v17, v18, v19);
    byte_42E6C69 = 1;
  }
  animEndCall = this->fields.animEndCall;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)animEndCall, 0LL, 0LL) )
  {
    TitleInfoPersonalBossComponent__OnEndAnimation(this, v21);
    return;
  }
  v22 = this->fields.animEndCall;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rightAnchor = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v22,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  breakIcon_11 = this->fields.breakIcon_11;
  if ( !breakIcon_11 )
    goto LABEL_19;
  if ( !LODWORD(breakIcon_11->fields.leftAnchor) )
  {
    v33 = sub_B5D6C8(rightAnchor);
    sub_B5D668(v33, 0LL);
  }
  v26 = (UnityEngine_GameObject_o *)rightAnchor;
  rightAnchor = (UnityEngine_Component_o *)breakIcon_11->fields.rightAnchor;
  if ( !rightAnchor )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(rightAnchor, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(v26, gameObject, 0LL);
  GameObjectExtensions__ResetLocalPosition(v26, 0LL);
  if ( !v26 )
    goto LABEL_19;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v26,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v29 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v31 = v30;
  if ( v29 )
  {
    System_Action___ctor(
      v30,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_0__,
      0LL);
    v32 = BasicHelper__DelayCall(0.533, v31, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v32, 0LL);
    return;
  }
  System_Action___ctor(
    v30,
    (Il2CppObject *)this,
    Method_TitleInfoPersonalBossComponent__PlayGaugeBreakEffect_b__66_1__,
    0LL);
  if ( !Component_srcLineSprite )
LABEL_19:
    sub_B5D69C(rightAnchor, v24);
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v31, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpCut(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EasingObject_o *v42; // x20
  TitleInfoPersonalBossComponent_c *v43; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v45; // x21
  System_Action_o *v46; // x22

  if ( (byte_42E6C68 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6, v7);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent_PlayHpCut__, v8, v9, v10);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__, v17, v18, v19);
    sub_B5D5C4(&TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo, v20, v21, v22);
    byte_42E6C68 = 1;
  }
  v23 = sub_B5D694(TitleInfoPersonalBossComponent___c__DisplayClass65_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass65_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass65_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_13;
  *(_QWORD *)(v23 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v23 + 32) = this->fields.oldDamage;
  if ( !System_String__IsNullOrEmpty(*(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL) )
  {
    v32 = Method_TitleInfoPersonalBossComponent_PlayHpCut__;
    if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_PlayHpCut__ + 75) & 2) != 0 )
      v32 = (_QWORD *)sub_B5D5CC(Method_TitleInfoPersonalBossComponent_PlayHpCut__);
    v33 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v32, v32[3]);
    OverwriteAssetSoundName__PlaySe(v33, *(System_String_o **)&this->fields.breakEffectStartWaitTime, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v23 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), Component_UIWidget, v36, v37, v38, v39, v40, v41);
  v42 = *(EasingObject_o **)(v23 + 16);
  v43 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v43 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v43->static_fields->ANIM_DURATION_HP_CUT;
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v23,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__0__,
    0LL);
  v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v23,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass65_0__PlayHpCut_b__1__,
    0LL);
  if ( !v42 )
LABEL_13:
    sub_B5D69C(v24, v25);
  EasingObject__Play(v42, ANIM_DURATION_HP_CUT, v45, v46, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__PlayHpRecoverEffect(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int64_t oldMaxHp; // d0
  int64_t currentDamage; // d1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  EasingObject_o *v39; // x20
  TitleInfoPersonalBossComponent_c *v40; // x0
  float ANIM_DURATION_HP_CUT; // s8
  System_Action_o *v42; // x21
  System_Action_o *v43; // x22

  if ( (byte_42E6C6A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6, v7);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__, v14, v15, v16);
    sub_B5D5C4(&TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo, v17, v18, v19);
    byte_42E6C6A = 1;
  }
  v20 = sub_B5D694(TitleInfoPersonalBossComponent___c__DisplayClass68_0_TypeInfo);
  TitleInfoPersonalBossComponent___c__DisplayClass68_0___ctor(
    (TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *)v20,
    0LL);
  if ( !v20 )
    goto LABEL_9;
  *(_QWORD *)(v20 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 32) = this->fields.currentDamage;
  *(_QWORD *)(v20 + 40) = this->fields.oldMaxHp;
  currentDamage = this->fields.currentDamage;
  oldMaxHp = this->fields.oldMaxHp;
  LODWORD(this->fields.currentMaxHp) = 0;
  *(float *)&oldMaxHp = 1.0 - (double)oldMaxHp / (double)currentDamage;
  *((float *)&this->fields.currentMaxHp + 1) = UnityEngine_Mathf__Clamp01(*(float *)&oldMaxHp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v20 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), Component_UIWidget, v33, v34, v35, v36, v37, v38);
  v39 = *(EasingObject_o **)(v20 + 16);
  v40 = TitleInfoPersonalBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoPersonalBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoPersonalBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoPersonalBossComponent_TypeInfo);
    v40 = TitleInfoPersonalBossComponent_TypeInfo;
  }
  ANIM_DURATION_HP_CUT = v40->static_fields->ANIM_DURATION_HP_CUT;
  v42 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v20,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__0__,
    0LL);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v20,
    Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__1__,
    0LL);
  if ( !v39 )
LABEL_9:
    sub_B5D69C(v21, v22);
  EasingObject__Play(v39, ANIM_DURATION_HP_CUT, v42, v43, 0.0, 0, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseAssetData(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_atlasList; // x19
  int32_t eventSuperBossEntity; // w20
  System_String_o *EventUIAssetDataPath; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E6C62 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v5, v6, v7);
    byte_42E6C62 = 1;
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
    sub_B5D560(p_atlasList, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall TitleInfoPersonalBossComponent__ReleaseLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *v5; // x0

  if ( (byte_42E6C61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, (_DWORD)method, v2, v3);
    byte_42E6C61 = 1;
  }
  v5 = *(System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.eventId;
  if ( !v5 )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    v5,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoPersonalBossComponent__SetDisp(
        TitleInfoPersonalBossComponent_o *this,
        const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Int32_array **CurrentUserSuperBossEntity; // x0
  float *p_HPfrom; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserSuperBossEntity_o *currentUserBossEnt; // x24
  BalanceConfig_c *v44; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t OrtLateQuestId; // w21
  int64_t OrtLatePhaseSecondForm; // x22
  __int64 v48; // x1
  UILabel_o *Master_WarQuestSelectionMaster; // x0
  int32_t eventSuperBossEntity; // w21
  EventSuperBossMaster_o *v51; // x22
  System_String_o *SUPERBOSS_ICON_SPNAME_PREFIX; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  const MethodInfo *v55; // x2
  int32_t v56; // w21
  EventBossStatusUiMaster_o *v57; // x22
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  System_String_o *v60; // x21
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  const MethodInfo *v63; // x2
  struct EventBossStatusUiEntity_o *v64; // x8
  struct System_String_o *breakEffectBeforeSeName; // x21
  int v66; // s0
  __int64 v70; // x8
  int v71; // w22
  int64_t v72; // x9
  __int64 v73; // x10
  int v74; // w11
  __int64 v75; // x12
  int v76; // w21
  __int64 v77; // x13
  __int64 *v78; // x13
  int64_t v79; // t1
  __int64 v80; // x13
  bool v81; // vf
  __int64 v82; // x13
  __int64 v83; // x9
  int64_t v84; // x10
  __int64 v85; // x9
  int v86; // w11
  __int64 v87; // x12
  __int64 v88; // x13
  __int64 *v89; // x13
  int64_t v90; // t1
  __int64 v91; // x13
  int64_t v92; // x13
  struct EventBossStatusUiEntity_o *v93; // x8
  BalanceConfig_c *v94; // x0
  int32_t idx; // w24
  TitleInfoPersonalBossComponent_o *v96; // x0
  const MethodInfo *v97; // x1
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x3
  int32_t clearBossEffect; // w1
  TitleInfoPersonalBossComponent_o *v101; // x0
  int32_t v102; // w2
  struct EventBossStatusUiEntity_o *v103; // x8
  struct UserSuperBossEntity_o *v104; // x9
  EventBossStatusUiEntity_c *klass; // x8
  float v106; // s0
  float v107; // s0
  const MethodInfo *v108; // x2
  float v109; // s0
  float v110; // s0
  float v111; // s0
  const MethodInfo *v112; // x2
  float v113; // s0
  UISprite_o *hpBarUpperSprite; // x20
  System_String_o *v115; // x0
  System_String_o *v116; // x0
  const MethodInfo *v117; // x3
  UISprite_o *hpBarWhiteSprite; // x20
  System_String_o *v119; // x0
  System_String_o *v120; // x0
  const MethodInfo *v121; // x3
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x3
  const MethodInfo *v124; // x3
  const MethodInfo *v125; // x2
  __int64 v126; // x0
  EventSuperBossEntity_o *v127; // [xsp+0h] [xbp-50h] BYREF
  __int64 v128; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E6C5B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventSuperBossMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TitleInfoPersonalBossComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_18828/*"event_superboss_hp_white"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18781/*"event_raid_hp_back"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18823/*"event_superboss_hp_lower_"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_18782/*"event_raid_hp_frame"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_18827/*"event_superboss_hp_upper_"*/, v32, v33, v34);
    byte_42E6C5B = 1;
  }
  v127 = 0LL;
  v128 = 0LL;
  CurrentUserSuperBossEntity = (System_Int32_array **)TitleInfoPersonalBossComponent__GetCurrentUserSuperBossEntity(
                                                        this,
                                                        method);
  p_HPfrom = &this->fields.HPfrom;
  *(_QWORD *)&this->fields.HPfrom = CurrentUserSuperBossEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.HPfrom,
    CurrentUserSuperBossEntity,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  currentUserBossEnt = this->fields.currentUserBossEnt;
  if ( !currentUserBossEnt )
    currentUserBossEnt = *(struct UserSuperBossEntity_o **)p_HPfrom;
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  static_fields = v44->static_fields;
  OrtLateQuestId = static_fields->OrtLateQuestId;
  OrtLatePhaseSecondForm = static_fields->OrtLatePhaseSecondForm;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( CondType__IsOpen(46, OrtLateQuestId, OrtLatePhaseSecondForm, 0, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventSuperBossMaster___);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v51 = (EventSuperBossMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v51 )
      goto LABEL_108;
    if ( EventSuperBossMaster__TryGetEntity(
           v51,
           &v127,
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
      if ( !v127 )
        goto LABEL_108;
      SUPERBOSS_ICON_SPNAME_PREFIX = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
      v53 = System_Int32__ToString((int)v127 + 56, 0LL);
      v54 = System_String__Concat_44577788(SUPERBOSS_ICON_SPNAME_PREFIX, v53, 0LL);
      TitleInfoPersonalBossComponent__SetupBossIcon(this, v54, v55);
      if ( !v127 )
        goto LABEL_108;
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_108;
      UILabel__set_text(Master_WarQuestSelectionMaster, v127->fields.name, 0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (UILabel_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    v56 = (int32_t)this->fields.eventSuperBossEntity;
    v57 = (EventBossStatusUiMaster_o *)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !v57 )
      goto LABEL_108;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  v57,
                                  v56,
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
    v60 = TitleInfoPersonalBossComponent_TypeInfo->static_fields->SUPERBOSS_ICON_SPNAME_PREFIX;
    v61 = System_Int32__ToString((int)eventBossStatusUiEntity + 56, 0LL);
    v62 = System_String__Concat_44577788(v60, v61, 0LL);
    TitleInfoPersonalBossComponent__SetupBossIcon(this, v62, v63);
    v64 = this->fields.eventBossStatusUiEntity;
    if ( !v64 )
      goto LABEL_108;
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.breakEffectBeforeSeName;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UILabel__set_text(Master_WarQuestSelectionMaster, (System_String_o *)v64->fields.script, 0LL);
    EntityFromEventIdAndIndex = (EventBossStatusUiEntity_o *)this->fields.oldUserBossEnt;
  }
  breakEffectBeforeSeName = this->fields.breakEffectBeforeSeName;
  if ( EntityFromEventIdAndIndex )
  {
    v129.fields.r = 0.0;
    v129.fields.g = 0.0;
    v129.fields.b = 0.0;
    v129.fields.a = 0.0;
    *(UnityEngine_Color_o *)&v66 = EventBossStatusUiEntity__GetTextEffectColor(EntityFromEventIdAndIndex, v129, 0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  else
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.eventBossStatusUiEntity;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    *(UnityEngine_Color_o *)&v66 = EventSuperBossEntity__GetBossColor(
                                     (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                     0LL);
    if ( !breakEffectBeforeSeName )
      goto LABEL_108;
  }
  UILabel__set_effectColor((UILabel_o *)breakEffectBeforeSeName, *(UnityEngine_Color_o *)&v66, 0LL);
  Master_WarQuestSelectionMaster = this->fields.totalHpLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                  0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
  v70 = *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField;
  if ( !v70 )
    goto LABEL_108;
  v71 = *(_DWORD *)(v70 + 24) - 1;
  LODWORD(this->fields.clearBossEffect) = v71;
  v72 = currentUserBossEnt ? currentUserBossEnt->fields.damage : 0LL;
  v73 = *(_QWORD *)(v70 + 24);
  if ( (int)v73 < 1 )
  {
    v82 = v72;
    v76 = v71;
  }
  else
  {
    v74 = 0;
    v75 = *(_QWORD *)(v70 + 24);
    v76 = v71;
    while ( 1 )
    {
      if ( v74 >= (unsigned int)v75 )
        goto LABEL_107;
      v77 = v70 + 8LL * v74;
      v79 = *(_QWORD *)(v77 + 32);
      v78 = (__int64 *)(v77 + 32);
      this->fields.oldDamage = v79;
      v75 = *(_QWORD *)(v70 + 24);
      if ( v74 >= (unsigned int)v75 )
        goto LABEL_107;
      v80 = *v78;
      v81 = __OFSUB__(v72, v80);
      v82 = v72 - v80;
      if ( v82 < 0 != v81 )
        break;
      ++v74;
      --v76;
      v72 = v82;
      if ( v74 >= (int)v73 )
        goto LABEL_62;
    }
    v82 = v72;
  }
LABEL_62:
  v83 = *(_QWORD *)&this->fields.HPfrom;
  *(_QWORD *)&this->fields.maxBreakCount = v82;
  if ( v83 )
    v84 = *(_QWORD *)(v83 + 32);
  else
    v84 = 0LL;
  v85 = *(_QWORD *)(v70 + 24);
  if ( (int)v85 >= 1 )
  {
    v86 = 0;
    v87 = *(_QWORD *)(v70 + 24);
    while ( v86 < (unsigned int)v87 )
    {
      v88 = v70 + 8LL * v86;
      v90 = *(_QWORD *)(v88 + 32);
      v89 = (__int64 *)(v88 + 32);
      this->fields.currentDamage = v90;
      v87 = *(_QWORD *)(v70 + 24);
      if ( v86 >= (unsigned int)v87 )
        break;
      v91 = *v89;
      v81 = __OFSUB__(v84, v91);
      v92 = v84 - v91;
      if ( v92 < 0 != v81 )
        goto LABEL_72;
      ++v86;
      --v71;
      v84 = v92;
      if ( v86 >= (int)v85 )
        goto LABEL_73;
    }
LABEL_107:
    v126 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v126, 0LL);
  }
LABEL_72:
  v92 = v84;
LABEL_73:
  v93 = this->fields.eventBossStatusUiEntity;
  this->fields.oldMaxHp = v92;
  if ( !v93 )
    goto LABEL_108;
  v94 = BalanceConfig_TypeInfo;
  idx = v93->fields.idx;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v94 = BalanceConfig_TypeInfo;
  }
  if ( idx == v94->static_fields->OrtThirdFormId )
    LOBYTE(this->fields.hpList) = v76 == 1 && v71 == 0;
  LODWORD(v128) = v76 + 1;
  HIDWORD(v128) = v76;
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                        0LL)) == 0LL )
  {
LABEL_108:
    sub_B5D69C(Master_WarQuestSelectionMaster, v48);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( TitleInfoPersonalBossComponent__IsForcePlayClearEffect(v96, v97) )
  {
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    if ( Master_WarQuestSelectionMaster )
    {
      UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
      TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v98);
      Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
      if ( Master_WarQuestSelectionMaster )
      {
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v101 = this;
        v102 = 0;
        goto LABEL_101;
      }
    }
    goto LABEL_108;
  }
  v103 = this->fields.eventBossStatusUiEntity;
  if ( v103 )
  {
    v104 = this->fields.currentUserBossEnt;
    if ( v104 )
    {
      klass = v103[1].klass;
      if ( v104->fields.damage < (__int64)klass
        && (!*(_QWORD *)p_HPfrom || *(_QWORD *)(*(_QWORD *)p_HPfrom + 32LL) >= (__int64)klass) )
      {
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, 0.0, 0LL);
        TitleInfoPersonalBossComponent__SetTotalHpText(this, 0LL, v125);
        Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_108;
        v109 = 1.0;
        if ( v76 <= 0 )
          v109 = 0.0;
LABEL_95:
        UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v109, 0LL);
        clearBossEffect = (int32_t)this->fields.clearBossEffect;
        v101 = this;
        v102 = v76;
        goto LABEL_101;
      }
    }
  }
  if ( LOBYTE(this->fields.hpList) )
  {
    v106 = 1.0 - (double)*(__int64 *)&this->fields.maxBreakCount / (double)this->fields.oldDamage;
    v107 = UnityEngine_Mathf__Clamp01(v106, 0LL);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
    *(float *)&this->fields.currentMaxHp = v107;
    HIDWORD(this->fields.currentMaxHp) = 0;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v107, 0LL);
    TitleInfoPersonalBossComponent__SetTotalHpText(
      this,
      this->fields.oldDamage - *(_QWORD *)&this->fields.maxBreakCount,
      v108);
    Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_108;
    v109 = 0.0;
    if ( v76 > 0 )
      v109 = 1.0;
    goto LABEL_95;
  }
  LODWORD(v128) = v71 + 1;
  HIDWORD(v128) = v71;
  v110 = 1.0 - (double)this->fields.oldMaxHp / (double)this->fields.currentDamage;
  v111 = UnityEngine_Mathf__Clamp01(v110, 0LL);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderUnder;
  *(float *)&this->fields.currentMaxHp = v111;
  *((float *)&this->fields.currentMaxHp + 1) = v111;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v111, 0LL);
  TitleInfoPersonalBossComponent__SetTotalHpText(this, this->fields.currentDamage - this->fields.oldMaxHp, v112);
  Master_WarQuestSelectionMaster = (UILabel_o *)this->fields.hpBarSliderWhite;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_108;
  v113 = 0.0;
  if ( v71 > 0 )
    v113 = 1.0;
  UIProgressBar__set_value((UIProgressBar_o *)Master_WarQuestSelectionMaster, v113, 0LL);
  clearBossEffect = (int32_t)this->fields.clearBossEffect;
  v101 = this;
  v102 = v71;
LABEL_101:
  TitleInfoPersonalBossComponent__SetupBreakGauge(v101, clearBossEffect, v102, v99);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v115 = System_Int32__ToString((int32_t)&v128 + 4, 0LL);
  v116 = System_String__Concat_44577788((System_String_o *)StringLiteral_18823/*"event_superboss_hp_lower_"*/, v115, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v116, v117);
  hpBarWhiteSprite = this->fields.hpBarWhiteSprite;
  v119 = System_Int32__ToString((int32_t)&v128, 0LL);
  v120 = System_String__Concat_44577788((System_String_o *)StringLiteral_18827/*"event_superboss_hp_upper_"*/, v119, 0LL);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(this, hpBarWhiteSprite, v120, v121);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.breakIconList,
    (System_String_o *)StringLiteral_18828/*"event_superboss_hp_white"*/,
    v122);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_18782/*"event_raid_hp_frame"*/,
    v123);
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    this,
    (UISprite_o *)this->fields.hpBarSlider,
    (System_String_o *)StringLiteral_18781/*"event_raid_hp_back"*/,
    v124);
}


bool __fastcall TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
        TitleInfoPersonalBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v24; // x0
  __int64 v25; // x1
  bool v26; // w20
  int v27; // w21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E6C60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, (_DWORD)sprite, (_DWORD)spriteName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v16, v17, v18);
    byte_42E6C60 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__IsNullOrEmpty(
                                                                                                   spriteName,
                                                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(*(System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.eventId, (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v29,
      IsNullOrEmpty,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v30 = v29;
    do
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v21 )
      {
        v26 = 0;
        v27 = 8;
        goto LABEL_16;
      }
      current = v30.fields.current;
      if ( !v30.fields.current )
        sub_B5D69C(v21, v22);
      v24 = UIAtlas__GetSprite((UIAtlas_o *)v30.fields.current, spriteName, 0LL);
    }
    while ( !v24 );
    if ( !sprite )
      sub_B5D69C(v24, v25);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v26 = 1;
    v27 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v27 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B5D69C(IsNullOrEmpty, v20);
    }
  }
  return v26;
}


void __fastcall TitleInfoPersonalBossComponent__SetTotalHpText(
        TitleInfoPersonalBossComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UILabel_o *hpBarUnderSprite; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E6C6B & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, hp, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3343/*"COMMON_NUM_FORMAT"*/, v9, v10, v11);
    byte_42E6C6B = 1;
  }
  hpBarUnderSprite = (UILabel_o *)this->fields.hpBarUnderSprite;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"COMMON_NUM_FORMAT"*/, 0LL);
  v17 = hp;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v15 = System_String__Format(v13, v14, 0LL);
  if ( !hpBarUnderSprite )
    sub_B5D69C(v15, v16);
  UILabel__set_text(hpBarUnderSprite, v15, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  EventBossStatusUiMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **BreakGaugeHpList; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t eventSuperBossEntity; // w20
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x3

  if ( (byte_42E6C5A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)superBossEntity, (_DWORD)oldUserBossEnt, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBossStatusUiMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, v17, v18, v19);
    byte_42E6C5A = 1;
  }
  this->fields.eventBossStatusUiEntity = (struct EventBossStatusUiEntity_o *)superBossEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
    (System_Int32_array **)superBossEntity,
    (System_String_array **)oldUserBossEnt,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentUserBossEnt = oldUserBossEnt;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentUserBossEnt,
    (System_Int32_array **)oldUserBossEnt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  LOBYTE(this[1].klass) = 0;
  if ( this->fields.eventBossStatusUiEntity )
  {
    LODWORD(this->fields.eventSuperBossEntity) = this->fields.eventBossStatusUiEntity->fields.eventId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBossStatusUiMaster___);
    eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
    if ( !eventBossStatusUiEntity
      || !Master_WarQuestSelectionMaster
      || (EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                        Master_WarQuestSelectionMaster,
                                        (int32_t)this->fields.eventSuperBossEntity,
                                        eventBossStatusUiEntity->fields.idx,
                                        0LL),
          this->fields.oldUserBossEnt = (struct UserSuperBossEntity_o *)EntityFromEventIdAndIndex,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.oldUserBossEnt,
            (System_Int32_array **)EntityFromEventIdAndIndex,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35),
          (Master_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)this->fields.eventBossStatusUiEntity) == 0LL) )
    {
      sub_B5D69C(Master_WarQuestSelectionMaster, v27);
    }
    BreakGaugeHpList = (System_Int32_array **)EventSuperBossEntity__GetBreakGaugeHpList(
                                                (EventSuperBossEntity_o *)Master_WarQuestSelectionMaster,
                                                0LL);
    *(_QWORD *)&this->fields._IsPlayedDamageAnimation_k__BackingField = BreakGaugeHpList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._IsPlayedDamageAnimation_k__BackingField,
      BreakGaugeHpList,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    eventSuperBossEntity = (int32_t)this->fields.eventSuperBossEntity;
    v44 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_TitleInfoPersonalBossComponent__Setup_b__48_0__, 0LL);
    TitleInfoPersonalBossComponent__LoadEventUIAssetData(this, eventSuperBossEntity, v44, v45);
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
    sub_B5D69C(v6, v7);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct UISprite_o *breakIcon_11; // x8
  int leftAnchor; // w23
  unsigned int v16; // w20
  int v17; // w24
  int v18; // w9
  __int64 v19; // x27
  struct UISprite_o *v20; // x8
  UISprite_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x2
  TitleInfoPersonalBossComponent_o *v24; // x0
  UISprite_o *v25; // x1
  struct UISprite_o *v26; // x8
  struct UISprite_o *v27; // x8
  long double v28; // q0
  TitleInfoPersonalBossComponent_c *klass; // x8
  __int64 v30; // x0
  int v31; // [xsp+Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_42E6C5C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18820/*"event_superboss_hp_icon_0"*/, maxCount, restCount, method);
    sub_B5D5C4(&StringLiteral_18821/*"event_superboss_hp_icon_11"*/, v8, v9, v10);
    this = (TitleInfoPersonalBossComponent_o *)sub_B5D5C4(&StringLiteral_18819/*"event_superboss_hp_icon_"*/, v11, v12, v13);
    byte_42E6C5C = 1;
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
        (System_String_o *)StringLiteral_18821/*"event_superboss_hp_icon_11"*/,
        method);
      this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
      if ( this )
      {
        klass = this->klass;
        LODWORD(v28) = 0;
        goto LABEL_35;
      }
LABEL_36:
      sub_B5D69C(this, *(_QWORD *)&maxCount);
    }
    v17 = 2;
    LODWORD(v4) = 1.0;
    while ( 1 )
    {
      v18 = v17 - 2;
      if ( (unsigned int)(v17 - 2) >= LODWORD(breakIcon_11->fields.leftAnchor) )
        goto LABEL_37;
      v19 = v18;
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&breakIcon_11->fields.rightAnchor + v18);
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)v19 < restCount )
        break;
      if ( (int)v19 < maxCount )
      {
        v26 = v7->fields.breakIcon_11;
        if ( !v26 )
          goto LABEL_36;
        if ( (unsigned int)v19 >= LODWORD(v26->fields.leftAnchor) )
          goto LABEL_37;
        v25 = (UISprite_o *)*((_QWORD *)&v26->fields.rightAnchor + v19);
        v23 = (System_String_o *)StringLiteral_18820/*"event_superboss_hp_icon_0"*/;
        v24 = v7;
        goto LABEL_24;
      }
LABEL_28:
      if ( v17 - 1 >= leftAnchor )
        goto LABEL_33;
      breakIcon_11 = v7->fields.breakIcon_11;
      ++v17;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
    v20 = v7->fields.breakIcon_11;
    if ( !v20 )
      goto LABEL_36;
    if ( (unsigned int)v19 >= LODWORD(v20->fields.leftAnchor) )
      goto LABEL_37;
    v21 = (UISprite_o *)*((_QWORD *)&v20->fields.rightAnchor + v19);
    v31 = v17;
    v22 = System_Int32__ToString((int32_t)&v31, 0LL);
    v23 = System_String__Concat_44577788((System_String_o *)StringLiteral_18819/*"event_superboss_hp_icon_"*/, v22, 0LL);
    v24 = v7;
    v25 = v21;
LABEL_24:
    this = (TitleInfoPersonalBossComponent_o *)TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
                                                 v24,
                                                 v25,
                                                 v23,
                                                 method);
    v27 = v7->fields.breakIcon_11;
    if ( !v27 )
      goto LABEL_36;
    if ( (unsigned int)v19 >= LODWORD(v27->fields.leftAnchor) )
      goto LABEL_37;
    this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&v27->fields.rightAnchor + v19);
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
    v16 = 0;
    while ( v16 < LODWORD(breakIcon_11->fields.leftAnchor) )
    {
      this = (TitleInfoPersonalBossComponent_o *)*((_QWORD *)&breakIcon_11->fields.rightAnchor + (int)v16);
      if ( !this )
        goto LABEL_36;
      this = (TitleInfoPersonalBossComponent_o *)((__int64 (__fastcall *)(TitleInfoPersonalBossComponent_o *, void *, _QWORD, const MethodInfo *, float))this->klass[1]._1.namespaze)(
                                                   this,
                                                   this->klass[1]._1.byval_arg.data,
                                                   *(_QWORD *)&restCount,
                                                   method,
                                                   0.0);
      if ( (int)++v16 >= leftAnchor )
        goto LABEL_31;
      breakIcon_11 = v7->fields.breakIcon_11;
      if ( !breakIcon_11 )
        goto LABEL_36;
    }
LABEL_37:
    v30 = sub_B5D6C8(this);
    sub_B5D668(v30, 0LL);
  }
LABEL_31:
  TitleInfoPersonalBossComponent__SetSpriteByLocalAtlas(
    v7,
    (UISprite_o *)v7->fields.bossName,
    (System_String_o *)StringLiteral_18821/*"event_superboss_hp_icon_11"*/,
    method);
  this = (TitleInfoPersonalBossComponent_o *)v7->fields.bossName;
  if ( !this )
    goto LABEL_36;
  klass = this->klass;
  LODWORD(v28) = 1.0;
LABEL_35:
  ((void (__fastcall *)(long double))klass[1]._1.namespaze)(v28);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  struct UserSuperBossEntity_o *currentUserBossEnt; // x9
  EventBossStatusUiEntity_c *klass; // x8
  __int64 v23; // x9
  UnityEngine_Object_o *gaugeBreakEffect; // x21
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  System_Int32_array **ClearBossEffect; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Object_o *animEndCall; // x21
  const MethodInfo *v35; // x2
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  float v45; // s8
  System_Action_o *v46; // x20
  System_Collections_IEnumerator_o *v47; // x1

  v10 = this;
  if ( (byte_42E6C64 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)mapAssetData, (_DWORD)callback, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent_StartDamageAnimation__, v14, v15, v16);
    this = (TitleInfoPersonalBossComponent_o *)sub_B5D5C4(
                                                 &Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
                                                 v17,
                                                 v18,
                                                 v19);
    byte_42E6C64 = 1;
  }
  if ( LOBYTE(v10[1].klass) )
    goto LABEL_4;
  eventBossStatusUiEntity = v10->fields.eventBossStatusUiEntity;
  if ( eventBossStatusUiEntity
    && (currentUserBossEnt = v10->fields.currentUserBossEnt) != 0LL
    && (klass = eventBossStatusUiEntity[1].klass, currentUserBossEnt->fields.damage < (__int64)klass)
    && ((v23 = *(_QWORD *)&v10->fields.HPfrom) == 0 || *(_QWORD *)(v23 + 32) >= (__int64)klass)
    || TitleInfoPersonalBossComponent__IsForcePlayClearEffect(this, (const MethodInfo *)mapAssetData) )
  {
    LOBYTE(v10[1].klass) = 1;
    *(_QWORD *)&v10->fields.isGaugeBreak = callback;
    sub_B5D560(
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
                                                 v26);
      v10->fields.gaugeBreakEffect = (struct UnityEngine_GameObject_o *)ClearBossEffect;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v10->fields.gaugeBreakEffect,
        ClearBossEffect,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    TitleInfoPersonalBossComponent__PlayClearBossEffect(v10, v25);
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
    sub_B5D560(
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
      v36 = (System_Int32_array **)TitleInfoPersonalBossComponent__GetGaugeBreakEffect(v10, mapAssetData, v35);
      v10->fields.animEndCall = (struct System_Action_o *)v36;
      sub_B5D560((BattleServantConfConponent_o *)&v10->fields.animEndCall, v36, v37, v38, v39, v40, v41, v42);
    }
    if ( !System_String__IsNullOrEmpty(v10->fields.breakHpDownSeName, 0LL) )
    {
      v43 = Method_TitleInfoPersonalBossComponent_StartDamageAnimation__;
      if ( (*((_BYTE *)Method_TitleInfoPersonalBossComponent_StartDamageAnimation__ + 75) & 2) != 0 )
        v43 = (_QWORD *)sub_B5D5CC(Method_TitleInfoPersonalBossComponent_StartDamageAnimation__);
      v44 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v43, v43[3]);
      OverwriteAssetSoundName__PlaySe(v44, v10->fields.breakHpDownSeName, 0LL);
    }
    v45 = *(float *)&v10->fields.assetData;
    v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v46,
      (Il2CppObject *)v10,
      Method_TitleInfoPersonalBossComponent__StartDamageAnimation_b__61_0__,
      0LL);
    v47 = BasicHelper__DelayCall(v45, v46, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v10, v47, 0LL);
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
    sub_B5D69C(this, clearBossEffect_low);
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
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B5D560((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
  breakHpDownSeName = (UnityEngine_Component_o *)v9[-1].fields.breakHpDownSeName;
  if ( !breakHpDownSeName
    || (breakHpDownSeName = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(breakHpDownSeName, 0LL)) == 0LL )
  {
    sub_B5D69C(breakHpDownSeName, v16);
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
    sub_B5D69C(bossHpFrame, method);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.isGaugeBreak, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(v8, 0LL);
  v9->fields.currentUserBossEnt = 0LL;
  v9 = (TitleInfoPersonalBossComponent_o *)((char *)v9 + 200);
  LOBYTE(v9->fields.hpBarUpperSprite) = 0;
  sub_B5D560((BattleServantConfConponent_o *)v9, 0LL, v10, v11, v12, v13, v14, v15);
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
    sub_B5D69C(0LL, data);
  _4__this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)data;
  sub_B5D560(&_4__this->fields.atlasList);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TitleInfoPersonalBossComponent_o *_4__this; // x0
  struct TitleInfoPersonalBossComponent_o *v9; // x20
  float v10; // s8
  System_Action_o *_9__2; // x22
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_42E624C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__, v5, v6, v7);
    byte_42E624C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (TitleInfoPersonalBossComponent__SetTotalHpText(_4__this, this->fields.maxHp - this->fields.damage, 0LL),
        (v9 = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  v10 = *((float *)&v9->fields.assetData + 1);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_TitleInfoPersonalBossComponent___c__DisplayClass68_0__PlayHpRecoverEffect_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  v12 = BasicHelper__DelayCall(v10, _9__2, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v9, v12, 0LL);
}


void __fastcall TitleInfoPersonalBossComponent___c__DisplayClass68_0___PlayHpRecoverEffect_b__2(
        TitleInfoPersonalBossComponent___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  TitleInfoPersonalBossComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  TitleInfoPersonalBossComponent__OnEndAnimation(_4__this, 0LL);
}