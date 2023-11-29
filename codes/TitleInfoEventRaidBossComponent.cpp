void __fastcall TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
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
  struct TitleInfoEventRaidBossComponent_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoEventRaidBossComponent_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  TitleInfoEventRaidBossComponent_c *v29; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v30; // x9

  if ( (byte_40FDFFA & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_21586, v8);
    sub_B16FFC(&StringLiteral_14399, v9);
    sub_B16FFC(&StringLiteral_21587, v10);
    byte_40FDFFA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_21586;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21586;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_21587;
  v13->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_21587;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_14399;
  v21->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14399;
  sub_B16F98((BattleServantConfConponent_o *)&v21->RAIDBOSS_CLEAR_EFFECT_PREFAB, v22, v23, v24, v25, v26, v27, v28);
  v29 = TitleInfoEventRaidBossComponent_TypeInfo;
  v30 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v30->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v30->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v29->static_fields->REST_TIME_UPDATE_INTERVAL_SEC = 1.0;
  v29->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X = 226;
  v29->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v29->static_fields->ANIM_DURATION_HP_CUT = 0.0;
  v29->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v29->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v29->static_fields->CLEAR_END_CALLBACK_DELAY = 0.5;
  v29->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID = 1.5;
  v29->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
}


void __fastcall TitleInfoEventRaidBossComponent___ctor(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall TitleInfoEventRaidBossComponent__ConvertHpToRate(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  return 1.0 - (double)hp / (double)maxHp;
}


void __fastcall TitleInfoEventRaidBossComponent__Destroy(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent__DisableCheckTutorial(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  *(&this->fields.isLastBattleRelease + 3) = 0;
}


void __fastcall TitleInfoEventRaidBossComponent__DoClearCallback(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoEventRaidBossComponent_c *v5; // x0
  float HPto; // w21
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  BalanceConfig_c *v8; // x0
  TitleInfoEventRaidBossComponent_c *v9; // x0

  if ( (byte_40FDFF4 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_9964, v4);
    byte_40FDFF4 = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  HPto = this->fields.HPto;
  CLEAR_END_CALLBACK_DELAY_NORMAL = v5->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  if ( LODWORD(HPto) == v8->static_fields->FesWarId )
  {
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( *(&this->fields.isLastBattleRelease + 5) )
    {
      if ( (WORD1(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_17;
      goto LABEL_15;
    }
    if ( (WORD1(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    CLEAR_END_CALLBACK_DELAY_NORMAL = v9->static_fields->CLEAR_END_CALLBACK_DELAY;
  }
  else if ( *(&this->fields.isLastBattleRelease + 5) )
  {
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_17:
      CLEAR_END_CALLBACK_DELAY_NORMAL = v9->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID;
      goto LABEL_22;
    }
LABEL_15:
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    goto LABEL_17;
  }
LABEL_22:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9964,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0LL);
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  __int64 v18; // x9
  System_Collections_Generic_IEnumerable_TSource__o *damage; // x20
  System_Func_long__bool__o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct UserEventRaidEntity_o *v24; // x8
  __int64 v25; // x8
  System_String_o **v26; // x8

  if ( (byte_40FDFF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_long___, totalDamage);
    sub_B16FFC(&Method_System_Func_long__bool___ctor__, v7);
    sub_B16FFC(&System_Func_long__bool__TypeInfo, v8);
    sub_B16FFC(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__, v9);
    sub_B16FFC(&TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40FDFF6 = 1;
  }
  v12 = (TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *)sub_B170CC(
                                                                     TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo,
                                                                     totalDamage,
                                                                     method,
                                                                     v3,
                                                                     v4);
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  v12->fields.totalDamage = totalDamage;
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_13;
  v18 = *(_QWORD *)&userEventRaidEntity[2].fields.eventId;
  if ( !v18 )
    goto LABEL_13;
  if ( !*(_QWORD *)(v18 + 24) )
  {
    v26 = (System_String_o **)&StringLiteral_1;
    return *v26;
  }
  damage = (System_Collections_Generic_IEnumerable_TSource__o *)userEventRaidEntity[2].fields.damage;
  v20 = (System_Func_long__bool__o *)sub_B170CC(System_Func_long__bool__TypeInfo, v13, v14, v15, v16);
  System_Func_long__bool____ctor(
    v20,
    (Il2CppObject *)v12,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__,
    (const MethodInfo_2B682B0 *)Method_System_Func_long__bool___ctor__);
  v21 = System_Linq_Enumerable__Count_long_(
          damage,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_18D4740 *)Method_System_Linq_Enumerable_Count_long___);
  v24 = this->fields.userEventRaidEntity;
  if ( !v24 || (v25 = *(_QWORD *)&v24[2].fields.eventId) == 0 )
LABEL_13:
    sub_B170D4();
  if ( (unsigned int)v21 >= *(_DWORD *)(v25 + 24) )
  {
    sub_B17100(v21, v22, v23);
    sub_B170A0();
  }
  v26 = (System_String_o **)(v25 + 8LL * (int)v21 + 32);
  return *v26;
}


UnityEngine_AnimationClip_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TitleInfoEventRaidBossComponent_c *v9; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  __int64 v12; // x0
  struct UserEventRaidEntity_o *v13; // x8
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  UnityEngine_Object_o *Clip; // x21
  struct UserEventRaidEntity_o *v18; // x8
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  TitleInfoEventRaidBossComponent_c *v22; // x0
  int v24; // [xsp+4h] [xbp-3Ch] BYREF
  int monitor; // [xsp+8h] [xbp-38h] BYREF
  int userId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FDFF9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, animation);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_23549, v7);
    sub_B16FFC(&StringLiteral_23551, v8);
    byte_40FDFF9 = 1;
  }
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)v9->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
  userId = userEventRaidEntity->fields.userId;
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v13 = this->fields.userEventRaidEntity;
  if ( !v13 )
    goto LABEL_26;
  v14 = (Il2CppObject *)v12;
  monitor = (int)v13[1].monitor;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v16 = System_String__Format_43744796(
          (System_String_o *)StringLiteral_23551,
          RAIDBOSS_CLEAR_EFFECT_PREFAB,
          v14,
          v15,
          0LL);
  if ( !animation )
    goto LABEL_26;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v16, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
  {
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v18 = this->fields.userEventRaidEntity;
    if ( v18 )
    {
      v19 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v24 = v18->fields.userId;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v21 = System_String__Format_43739268((System_String_o *)StringLiteral_23549, v19, v20, 0LL);
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v21, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
      {
        v22 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v22 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return UnityEngine_Animation__GetClip(animation, v22->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0LL);
      }
      return (UnityEngine_AnimationClip_o *)Clip;
    }
LABEL_26:
    sub_B170D4();
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TitleInfoEventRaidBossComponent_c *v10; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x21
  __int64 v13; // x0
  struct UserEventRaidEntity_o *v14; // x8
  Il2CppObject *v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  struct UserEventRaidEntity_o *v19; // x8
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  TitleInfoEventRaidBossComponent_c *v23; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  int monitor; // [xsp+18h] [xbp-38h] BYREF
  int userId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FDFF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, mapAssetData);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23549, v8);
    sub_B16FFC(&StringLiteral_23551, v9);
    byte_40FDFF8 = 1;
  }
  v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v10 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)v10->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
  userId = userEventRaidEntity->fields.userId;
  v13 = j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v14 = this->fields.userEventRaidEntity;
  if ( !v14 )
    goto LABEL_26;
  v15 = (Il2CppObject *)v13;
  monitor = (int)v14[1].monitor;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v17 = System_String__Format_43744796(
          (System_String_o *)StringLiteral_23551,
          RAIDBOSS_CLEAR_EFFECT_PREFAB,
          v15,
          v16,
          0LL);
  if ( !mapAssetData )
    goto LABEL_26;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             v17,
                                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v19 = this->fields.userEventRaidEntity;
    if ( v19 )
    {
      v20 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v25 = v19->fields.userId;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v22 = System_String__Format_43739268((System_String_o *)StringLiteral_23549, v20, v21, 0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 mapAssetData,
                                                                 v22,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v23 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v23 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             mapAssetData,
                                             v23->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_26:
    sub_B170D4();
  }
  return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
}


float __fastcall TitleInfoEventRaidBossComponent__GetHpSplitPositionX(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t splitHp,
        int64_t maxHp,
        const MethodInfo *method)
{
  float v4; // s0

  v4 = (double)splitHp / (double)maxHp;
  return -(float)(*((float *)&this->fields.useBarSlider + 1) * v4);
}


int64_t __fastcall TitleInfoEventRaidBossComponent__GetRaidBossMaxHP(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8

  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    return (int64_t)userEventRaidEntity[1].klass;
  else
    return 0LL;
}


int64_t __fastcall TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TotalEventRaidMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  bool v6; // w8
  int64_t result; // x0
  struct UserEventRaidEntity_o *v8; // x8
  int64_t klass; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FDFEA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_TotalEventRaidMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FDFEA = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_15;
  v6 = TotalEventRaidMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         (int32_t)this->fields.eventRaidEntity,
         HIDWORD(userEventRaidEntity->fields.userId),
         0LL);
  result = 0LL;
  if ( !v6 )
    return result;
  v8 = this->fields.userEventRaidEntity;
  if ( !v8 || !entity )
LABEL_15:
    sub_B170D4();
  klass = (int64_t)v8[1].klass;
  if ( klass <= entity->fields.totalDamage )
    return klass;
  else
    return entity->fields.totalDamage;
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetRestCountText(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalHp,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EventBossStatusUiEntity_o *v14; // x0
  System_String_o *CountFormat; // x22
  System_String_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Text_StringBuilder_o *v21; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v26; // x19
  Il2CppObject *NumberFormat_23125544; // x1
  System_String_o *v28; // x0
  System_String_o *v29; // x19
  System_String_o *v30; // x19
  System_String_o *v31; // x19
  int64_t v32; // [xsp+0h] [xbp-30h] BYREF
  int64_t v33; // [xsp+8h] [xbp-28h] BYREF

  v33 = totalHp;
  if ( (byte_40FDFF7 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, totalHp);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5671, v9);
    sub_B16FFC(&StringLiteral_5672, v10);
    sub_B16FFC(&StringLiteral_80, v11);
    sub_B16FFC(&StringLiteral_5609, v12);
    sub_B16FFC(&StringLiteral_13367, v13);
    byte_40FDFF7 = 1;
  }
  v14 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  if ( v14 )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(v14, 0LL);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0LL) )
    {
      v26 = System_Int64__ToString((int64_t)&v33, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      NumberFormat_23125544 = (Il2CppObject *)LocalizationManager__GetNumberFormat_23125544(v26, 0LL);
      v28 = CountFormat;
      return System_String__Format(v28, NumberFormat_23125544, 0LL);
    }
  }
  if ( !*(&this->fields.isLastBattleRelease + 5) && !LOBYTE(this->fields.hpBarSplitters) )
  {
    if ( *(&this->fields.isLastBattleRelease + 4) && !BYTE1(this->fields.hpBarSplitters) )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5609, 0LL);
      v32 = totalDamage;
      NumberFormat_23125544 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
      v28 = v31;
    }
    else
    {
      v29 = System_Int64__ToString((int64_t)&v33, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__GetNumberFormat_23125544(v29, 0LL);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_13367, 0LL);
      NumberFormat_23125544 = (Il2CppObject *)v30;
    }
    return System_String__Format(v28, NumberFormat_23125544, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5672, 0LL);
  v21 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v17, v18, v19, v20);
  System_Text_StringBuilder___ctor_41908412(v21, v16, 0LL);
  if ( !v21 )
    sub_B170D4();
  System_Text_StringBuilder__Append_41914240(v21, (System_String_o *)StringLiteral_80, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5671, 0LL);
  v32 = totalHp;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
  v24 = System_String__Format(v22, v23, 0LL);
  System_Text_StringBuilder__Append_41914240(v21, v24, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v21->klass->vtable._3_ToString.method)(
                              v21,
                              v21->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsAliveRaidBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  UserEventRaidEntity_c *klass; // x19

  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
    klass = userEventRaidEntity[1].klass;
  else
    klass = 0LL;
  return (__int64)klass - TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, method) > 0;
}


bool __fastcall TitleInfoEventRaidBossComponent__IsClear(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return LOBYTE(this->fields.HPfrom);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsDispPossible(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 260LL;
  if ( *(&this->fields.isLastBattleRelease + 4) )
    v2 = 281LL;
  return *((_BYTE *)&this->klass + v2);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsEventRaidBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventRaidBossComponent__IsJumbleSingleRaidLastBattle(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  EventRaidEntity_o *userEventRaidEntity; // x0

  userEventRaidEntity = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    sub_B170D4();
  return EventRaidEntity__IsJumbleSingleRaid(userEventRaidEntity, 0LL) && BYTE2(this->fields.hpBarSplitters) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t raidDeadQuestId,
        bool isJumbleSingleRaid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  EventRaidEntity_o *userEventRaidEntity; // x0
  EventRaidEntity_o *v10; // x0
  struct UserEventRaidEntity_o *v11; // x8
  int32_t eventRaidEntity; // w19
  int32_t userId_high; // w20
  clsQuestCheck_o *v15; // x0

  if ( (byte_40FDFF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&raidDeadQuestId);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40FDFF2 = 1;
  }
  userEventRaidEntity = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_24;
  if ( !EventRaidEntity__IsValidDefeatedTime(userEventRaidEntity, 0LL)
    || !*(&this->fields.isLastBattleRelease + 5)
    || isJumbleSingleRaid )
  {
    if ( *(float *)&this->fields.HPsplitNo > 0.0 )
      return 0;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( v15 )
      return clsQuestCheck__IsQuestClear(v15, raidDeadQuestId, 0, 0LL) || *(&this->fields.isLastBattleRelease + 5);
LABEL_24:
    sub_B170D4();
  }
  v10 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
  if ( !v10 )
    goto LABEL_24;
  if ( !EventRaidEntity__IsJustDefeated(v10, 0LL) )
    return 0;
  v11 = this->fields.userEventRaidEntity;
  if ( !v11 )
    goto LABEL_24;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  userId_high = HIDWORD(v11->fields.userId);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return !TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(eventRaidEntity, userId_high, 0LL);
}


bool __fastcall TitleInfoEventRaidBossComponent__IsTargetRaid(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8

  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    sub_B170D4();
  return LODWORD(userEventRaidEntity->fields.userId) == eventId && HIDWORD(userEventRaidEntity->fields.userId) == day;
}


void __fastcall TitleInfoEventRaidBossComponent__OnDestroy(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent__OnEndAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onClearCall; // x20
  const MethodInfo *v10; // x1

  onClearCall = this->fields.onClearCall;
  this->fields.onClearCall = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(onClearCall, 0LL);
  TitleInfoEventRaidBossComponent__SetDisp(this, v10);
}


void __fastcall TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_o *splitHpEffect; // x20
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t eventRaidEntity; // w20
  int32_t userId_high; // w21
  UnityEngine_Component_o *hpFrame; // x0
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventRaidBossComponent_c *v19; // x8
  TweenWidth_o *v20; // x0

  if ( (byte_40FDFF5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v9);
    sub_B16FFC(&Method_UITweener_Begin_TweenAlpha___, v10);
    byte_40FDFF5 = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E57 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    byte_40F6E57 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(0LL);
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  userId_high = HIDWORD(userEventRaidEntity->fields.userId);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(eventRaidEntity, userId_high, 0LL);
  TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(0LL);
  hpFrame = (UnityEngine_Component_o *)this->fields.hpFrame;
  LOBYTE(this->fields.HPfrom) = 1;
  if ( !hpFrame )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject(hpFrame, 0LL);
  v19 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v19 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v20 = UITweener__Begin_TweenWidth_(
          gameObject,
          v19->static_fields->ANIM_DURATION_SPLIT_ALPHA,
          (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !v20 )
LABEL_26:
    sub_B170D4();
  v20->fields.style = 1;
  *(_QWORD *)&v20->fields.from = 1065353216LL;
}


void __fastcall TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  TitleInfoEventRaidBossComponent_c *v9; // x8
  TweenWidth_o *v10; // x0
  TweenWidth_o *v11; // x20
  float32x2_t *static_fields; // x8
  float v13; // s1
  int animEndCall; // w9
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FDFEF & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    sub_B16FFC(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B16FFC(&StringLiteral_10645, v4);
    byte_40FDFEF = 1;
  }
  if ( *(&this->fields.isLastBattleRelease + 5) || LOBYTE(this->fields.hpBarSplitters) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(gameObject, 0, 0LL);
    if ( !Child )
      goto LABEL_13;
    v7 = UnityEngine_Component__get_gameObject(Child, 0LL);
    if ( !v7 )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v10 = UITweener__Begin_TweenWidth_(
          v8,
          v9->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
          (const MethodInfo_2254D94 *)Method_UITweener_Begin_TweenPosition___);
  if ( !v10 )
LABEL_13:
    sub_B170D4();
  v11 = v10;
  static_fields = (float32x2_t *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v13 = *(float *)&this->fields.animEndCall + static_fields[4].n64_f32[0];
  *(float32x2_t *)&v10->fields.from = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *(float *)&v10->fields.updateTable = v13;
  animEndCall = (int)this->fields.animEndCall;
  *(_QWORD *)(&v10->fields.updateTable + 4) = *(_QWORD *)&this->fields.originPos.fields.z;
  HIDWORD(v10->fields.mWidget) = animEndCall;
  v10->fields.style = 2;
  v15 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v15;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.eventReceiver, v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Int32_array **)StringLiteral_10645;
  v11->fields.callWhenFinished = (struct System_String_o *)StringLiteral_10645;
  sub_B16F98((BattleServantConfConponent_o *)&v11->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpCut(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  UIWidget_o *Component_UIWidget; // x20
  TitleInfoEventRaidBossComponent_c *v14; // x8
  TitleInfoEventRaidBossComponent___c_c *v15; // x0
  float ANIM_DURATION_HP_CUT; // s8
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__87_0; // x21
  Il2CppObject *v19; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x22

  if ( (byte_40FDFF0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_B16FFC(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, v4);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_B16FFC(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, v6);
    sub_B16FFC(&TitleInfoEventRaidBossComponent___c_TypeInfo, v7);
    byte_40FDFF0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v14 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v14 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v15 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v14->static_fields->ANIM_DURATION_HP_CUT;
  if ( (BYTE3(TitleInfoEventRaidBossComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo);
    v15 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__87_0 = static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(_9__87_0, v19, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, 0LL);
    v20 = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    v20->__9__87_0 = _9__87_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !Component_UIWidget )
    sub_B170D4();
  EasingObject__Play((EasingObject_o *)Component_UIWidget, ANIM_DURATION_HP_CUT, _9__87_0, v27, 0.0, 0, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpDeletion(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidMaster_o *v12; // x20
  bool IsJumbleSingleRaid; // w0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t eventRaidEntity; // w1
  int32_t RaidGroupDeadQuestId; // w0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t v18; // w20
  __int64 v19; // x22
  EventRaidEntity_o *v20; // x0
  TotalEventRaidEntity_o *TotalEventRaidEntity; // x0
  const MethodInfo *v22; // x3
  int64_t totalDamage; // x2
  struct UserEventRaidEntity_o *v24; // x8
  UILabel_o *v25; // x21
  System_String_o *RestCountText; // x0
  EventRaidEntity_o *v27; // x0
  bool v28; // w0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v33; // x20
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_o *v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_40FDFF1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, v8);
    sub_B16FFC(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__, v9);
    byte_40FDFF1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.userEventRaidEntity )
    goto LABEL_44;
  v12 = (EventRaidMaster_o *)MasterData_WarQuestSelectionMaster;
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)this->fields.userEventRaidEntity, 0LL);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_44;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  if ( IsJumbleSingleRaid )
  {
    if ( !v12 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                             v12,
                             eventRaidEntity,
                             userEventRaidEntity->fields.eventId,
                             0LL);
  }
  else
  {
    if ( !v12 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                             v12,
                             eventRaidEntity,
                             HIDWORD(userEventRaidEntity->fields.userId),
                             0LL);
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v18 = RaidGroupDeadQuestId;
  v19 = eventBossStatusUiEntity ? -(__int64)eventBossStatusUiEntity[1].klass : 0LL;
  v20 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
  if ( !v20
    || ((TotalEventRaidEntity = EventRaidEntity__getTotalEventRaidEntity(v20, 0LL)) == 0LL
      ? (totalDamage = 0LL)
      : (totalDamage = TotalEventRaidEntity->fields.totalDamage),
        (v24 = this->fields.userEventRaidEntity) == 0LL
     || (v25 = *(UILabel_o **)&this->fields.eventId,
         RestCountText = TitleInfoEventRaidBossComponent__GetRestCountText(
                           this,
                           ((__int64)v24[1].klass + v19 - totalDamage) & ~(((__int64)v24[1].klass + v19 - totalDamage) >> 63),
                           totalDamage,
                           v22),
         !v25)
     || (UILabel__set_text(v25, RestCountText, 0LL), (v27 = (EventRaidEntity_o *)this->fields.userEventRaidEntity) == 0LL)) )
  {
LABEL_44:
    sub_B170D4();
  }
  v28 = EventRaidEntity__IsJumbleSingleRaid(v27, 0LL);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v18, v28, v29) )
  {
    klass = (UnityEngine_Object_o *)this[1].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v32 = 0LL;
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v33 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v32 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v33,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v32, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v32, 0LL);
    }
    *(&this->fields.isLastBattleRelease + 2) = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
    {
      if ( !v32 )
        goto LABEL_44;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v32,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
      System_Action___ctor(
        v39,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v39,
          0LL);
        v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
        System_Action___ctor(v44, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v44;
        sub_B16F98(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        return;
      }
      goto LABEL_44;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v35);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v30);
  }
}


// attributes: thunk
void __fastcall TitleInfoEventRaidBossComponent__PlayHpNameAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent__PlayHpCut(this, method);
}


void __fastcall TitleInfoEventRaidBossComponent__SetBossIcon(
        TitleInfoEventRaidBossComponent_o *this,
        EventRaidEntity_o *eventRaidEnt,
        bool isLastBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UISprite_o *hpFrame; // x21
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  UISprite_o *v12; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  struct UISprite_o *v16; // x0

  if ( (byte_40FDFE6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventRaidEnt);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    byte_40FDFE6 = 1;
  }
  if ( isLastBattle )
  {
    hpFrame = this->fields.hpFrame;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    if ( !eventRaidEnt )
      goto LABEL_23;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v10 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
    v11 = System_String__Concat_43743732(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v10, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI(hpFrame, v11, 0LL) )
      goto LABEL_20;
  }
  v12 = this->fields.hpFrame;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
  }
  if ( !eventRaidEnt )
    goto LABEL_23;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v14 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
  v15 = System_String__Concat_43743732(RAIDBOSS_ICON_SPNAME_PREFIX, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v12, v15, 0LL) )
  {
LABEL_20:
    v16 = this->fields.hpFrame;
    if ( v16 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
        v16,
        v16->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetClearAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TitleInfoEventRaidBossComponent_c *v7; // x0
  float HPto; // w20
  float CLEAR_CALLBACK_DELAY; // s8
  BalanceConfig_c *v10; // x0
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Animation_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v17; // x0

  if ( (byte_40FDFF3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_5324, v6);
    byte_40FDFF3 = 1;
  }
  v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  HPto = this->fields.HPto;
  CLEAR_CALLBACK_DELAY = v7->static_fields->CLEAR_CALLBACK_DELAY;
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  if ( LODWORD(HPto) != v10->static_fields->FesWarId && !*(&this->fields.isLastBattleRelease + 5) )
  {
    klass = (UnityEngine_Object_o *)this[1].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = 0LL;
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v13 = (UnityEngine_GameObject_o *)this[1].klass;
      if ( !v13 )
        goto LABEL_33;
      Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             v13,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    ClearBossAnimClip = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      ClearBossAnimClip = (UnityEngine_Object_o *)TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
                                                    this,
                                                    Component_srcLineSprite,
                                                    v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    length = 0.0;
    if ( !UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0LL, 0LL) )
      goto LABEL_28;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0LL);
LABEL_28:
      v17 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v17 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = UnityEngine_Mathf__Max(
                               0.0,
                               length - v17->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL,
                               0LL);
      goto LABEL_32;
    }
LABEL_33:
    sub_B170D4();
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5324,
    CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  TotalEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  __int64 v16; // x20
  int64_t totalDamage; // x21
  struct UserEventRaidEntity_o *v18; // x8
  float v19; // s0
  float v20; // s0
  struct UserEventRaidEntity_o *v21; // x8
  float v22; // s0
  float v23; // s0
  struct UserEventRaidEntity_o *v24; // x8
  int64_t damage; // x11
  int v26; // w10
  __int64 v27; // x9
  int64_t v28; // x11
  __int64 v29; // x12
  __int64 klass; // d0
  struct UILabel_o *useTotalLabel; // x0
  UnityEngine_Component_o *defeatCntBarSliderWhiteSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_o *v34; // x0
  struct UISprite_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *transform; // x0
  int v38; // w8
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_GameObject_o *v41; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDFED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, onClearCallback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FDFED = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  TotalEventRaidMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    &entity,
    (int32_t)this->fields.eventRaidEntity,
    HIDWORD(userEventRaidEntity->fields.userId),
    0LL);
  this->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)onClearCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.splitHpEffect,
    (System_Int32_array **)onClearCallback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v16 = eventBossStatusUiEntity ? (__int64)eventBossStatusUiEntity[1].klass : 0LL;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    v16 += totalDamage;
  }
  else
  {
    totalDamage = 0LL;
  }
  v18 = this->fields.userEventRaidEntity;
  if ( !v18 )
    goto LABEL_36;
  v19 = 1.0 - (double)totalDamage / (double)(__int64)v18[1].klass;
  v20 = UnityEngine_Mathf__Clamp01(v19, 0LL);
  v21 = this->fields.userEventRaidEntity;
  this->fields.HPsplitPoint = v20;
  if ( !v21 )
    goto LABEL_36;
  v22 = 1.0 - (double)v16 / (double)(__int64)v21[1].klass;
  v23 = UnityEngine_Mathf__Clamp01(v22, 0LL);
  v24 = this->fields.userEventRaidEntity;
  *(float *)&this->fields.HPsplitNo = v23;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v24 )
    goto LABEL_36;
  damage = v24[2].fields.damage;
  if ( !damage )
    goto LABEL_36;
  v26 = *(_DWORD *)(damage + 24);
  if ( v26 >= 1 )
  {
    v27 = 0LL;
    v28 = damage + 32;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v28 + 8 * v27);
      if ( v29 > totalDamage && v29 <= v16 )
        break;
      if ( (int)++v27 >= v26 )
        goto LABEL_23;
    }
    klass = (__int64)v24[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v27;
    *(float *)&klass = 1.0 - (double)v29 / (double)klass;
    LODWORD(this->fields.originPos.fields.x) = klass;
  }
LABEL_23:
  useTotalLabel = this->fields.useTotalLabel;
  if ( !useTotalLabel )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)useTotalLabel, this->fields.HPsplitPoint, 0LL);
  defeatCntBarSliderWhiteSp = (UnityEngine_Component_o *)this->fields.defeatCntBarSliderWhiteSp;
  if ( !defeatCntBarSliderWhiteSp )
    goto LABEL_36;
  gameObject = UnityEngine_Component__get_gameObject(defeatCntBarSliderWhiteSp, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v34 = this->fields.defeatCntBarSliderWhiteSp;
  if ( !v34 )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)v34, this->fields.HPsplitPoint, 0LL);
  v35 = this->fields.defeatCntBarSliderWhiteSp;
  if ( !v35 )
    goto LABEL_36;
  UIProgressBar__set_alpha((UIProgressBar_o *)v35, 0.0, 0LL);
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v36 )
    goto LABEL_36;
  transform = UnityEngine_GameObject__get_transform(v36, 0LL);
  if ( !transform )
    goto LABEL_36;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v38 = *((unsigned __int8 *)&this->fields.isLastBattleRelease + 5);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = localPosition;
  if ( v38 || LOBYTE(this->fields.hpBarSplitters) )
  {
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (UnityEngine_Component_o *)GameObjectExtensions__GetChild(v39, 0, 0LL);
    if ( Child )
    {
      v41 = UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( v41 )
      {
        UnityEngine_GameObject__SetActive(v41, 0, 0LL);
        return;
      }
    }
LABEL_36:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetDisp(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  TotalEventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct UserEventRaidEntity_o *v13; // x8
  int64_t damage; // x8
  int v15; // w20
  _BOOL4 v16; // w8
  _BOOL4 v17; // w9
  int v18; // w21
  __int64 v19; // x2
  int v20; // s3
  float v21; // s4
  float v22; // s5
  float v23; // s6
  char v24; // w25
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Component_o *Parent; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  UnityEngine_Component_o *v35; // x22
  __int64 v36; // x26
  unsigned int v37; // w28
  __int64 v38; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *defeatCntBarSplitterSp; // x24
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x24
  UnityEngine_GameObject_o *v46; // x0
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x24
  __int64 v53; // x0
  __int64 v54; // x8
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserEventRaidEntity_o *v57; // x8
  int64_t v58; // x9
  __int64 v59; // x10
  UnityEngine_Component_o *v60; // x0
  __int64 v61; // d9
  __int64 klass; // d10
  float v63; // s8
  UnityEngine_Transform_o *transform; // x0
  float v65; // s0
  int v66; // s1
  int v67; // s0
  int v68; // s2
  const MethodInfo *v69; // x1
  EventBossStatusUiEntity_o *v70; // x0
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct UserEventRaidEntity_o *v75; // x8
  __int64 v76; // x22
  const MethodInfo *v77; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *lastBattleSpr; // x21
  System_String_o *AiModeName; // x0
  const MethodInfo *v81; // x2
  UnityEngine_Component_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x0
  const MethodInfo *v84; // x3
  UILabel_o *v85; // x21
  System_String_o *RestCountText; // x0
  const MethodInfo *v87; // x2
  UnityEngine_Object_o *v88; // x21
  UnityEngine_Component_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  const MethodInfo *v91; // x2
  struct UserEventRaidEntity_o *v92; // x8
  UILabel_o *v93; // x0
  struct UILabel_o *useTotalLabel; // x0
  float v95; // s0
  EventRaidEntity_o *v96; // x0
  struct UserEventRaidEntity_o *v97; // x8
  UnityEngine_Component_o *bossName; // x0
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_Component_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  const MethodInfo *v102; // x2
  UnityEngine_Object_o *v103; // x20
  const MethodInfo *v104; // x2
  UILabel_o *defeatCntFrame; // x0
  const MethodInfo *v106; // x2
  bool *p_isRaidClear; // [xsp+0h] [xbp-90h]
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDFE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&UISprite___TypeInfo, v7);
    byte_40FDFE9 = 1;
  }
  memset(&methoda, 0, 24);
  if ( *(&this->fields.isLastBattleRelease + 2) )
  {
    if ( !*(&this->fields.isLastBattleRelease + 4) )
      goto LABEL_8;
  }
  else if ( !*(&this->fields.isLastBattleRelease + 4) )
  {
    return;
  }
  BYTE1(this->fields.HPfrom) = 1;
LABEL_8:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  MasterData_WarQuestSelectionMaster = (TotalEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_89;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_89;
  TotalEventRaidMaster__TryGetEntity(
    MasterData_WarQuestSelectionMaster,
    (TotalEventRaidEntity_o **)&methoda.name,
    (int32_t)this->fields.eventRaidEntity,
    HIDWORD(userEventRaidEntity->fields.userId),
    0LL);
  TitleInfoEventRaidBossComponent__SetBossIcon(
    this,
    (EventRaidEntity_o *)this->fields.userEventRaidEntity,
    BYTE2(this->fields.hpBarSplitters),
    v11);
  v13 = this->fields.userEventRaidEntity;
  if ( !v13 )
    goto LABEL_89;
  damage = v13[2].fields.damage;
  if ( !damage )
    goto LABEL_89;
  v15 = *(_DWORD *)(damage + 24);
  v16 = *(&this->fields.isLastBattleRelease + 4);
  v17 = v15 > 0;
  v18 = v17 && v16;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, v17 && v16, v12);
  if ( v18 )
  {
    p_isRaidClear = &this->fields.isRaidClear;
    if ( *(_QWORD *)&this->fields.isRaidClear )
    {
      v24 = 1;
    }
    else
    {
      v25 = (System_Int32_array **)sub_B17014(UISprite___TypeInfo, (unsigned int)v15, v19);
      *(_QWORD *)&this->fields.isRaidClear = v25;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.isRaidClear, v25, v26, v27, v28, v29, v30, v31);
      v24 = 0;
    }
    Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(
                                          (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                          0LL);
    v35 = Parent;
    v36 = 4LL;
    do
    {
      v37 = v36 - 4;
      if ( (v24 & 1) == 0 )
      {
        v38 = *(_QWORD *)&this->fields.isRaidClear;
        defeatCntBarSplitterSp = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.defeatCntBarSplitterSp;
        if ( (_DWORD)v36 == 4 )
        {
          if ( !defeatCntBarSplitterSp )
            goto LABEL_89;
          Parent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v38 )
            goto LABEL_89;
          v45 = (System_Int32_array **)Parent;
          if ( Parent )
          {
            Parent = (UnityEngine_Component_o *)sub_B170BC(Parent, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
            if ( !Parent )
              goto LABEL_91;
          }
          if ( !*(_DWORD *)(v38 + 24) )
            goto LABEL_90;
          *(_QWORD *)(v38 + 32) = v45;
          sub_B16F98((BattleServantConfConponent_o *)(v38 + 32), v45, v34, v40, v41, v42, v43, v44);
        }
        else
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v46 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              defeatCntBarSplitterSp,
                                              (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !v46 )
            goto LABEL_89;
          Parent = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v46,
                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v38 )
            goto LABEL_89;
          v52 = (System_Int32_array **)Parent;
          if ( Parent )
          {
            Parent = (UnityEngine_Component_o *)sub_B170BC(Parent, *(_QWORD *)(*(_QWORD *)v38 + 64LL));
            if ( !Parent )
            {
LABEL_91:
              sub_B170F4(Parent);
              sub_B170A0();
            }
          }
          if ( v37 >= *(_DWORD *)(v38 + 24) )
            goto LABEL_90;
          v53 = v38 + 8LL * (int)v37;
          *(_QWORD *)(v53 + 32) = v52;
          sub_B16F98((BattleServantConfConponent_o *)(v53 + 32), v52, v34, v47, v48, v49, v50, v51);
          v54 = *(_QWORD *)p_isRaidClear;
          if ( !*(_QWORD *)p_isRaidClear )
            goto LABEL_89;
          if ( v37 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_90;
          v55 = *(UnityEngine_Component_o **)(v54 + 8LL * (int)v37 + 32);
          if ( !v55 )
            goto LABEL_89;
          gameObject = UnityEngine_Component__get_gameObject(v55, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v35, 0LL);
        }
      }
      v57 = this->fields.userEventRaidEntity;
      if ( !v57 )
        goto LABEL_89;
      v58 = v57[2].fields.damage;
      if ( !v58 )
        goto LABEL_89;
      if ( v37 >= *(_DWORD *)(v58 + 24) )
        goto LABEL_90;
      v59 = *(_QWORD *)&this->fields.isRaidClear;
      if ( !v59 )
        goto LABEL_89;
      if ( v37 >= *(_DWORD *)(v59 + 24) )
      {
LABEL_90:
        sub_B17100(Parent, v33, v34);
        sub_B170A0();
      }
      v60 = *(UnityEngine_Component_o **)(v59 + 8 * v36);
      if ( !v60 )
        goto LABEL_89;
      v61 = *(_QWORD *)(v58 + 8 * v36);
      klass = (__int64)v57[1].klass;
      v63 = *((float *)&this->fields.useBarSlider + 1);
      transform = UnityEngine_Component__get_transform(v60, 0LL);
      if ( !transform )
        goto LABEL_89;
      v65 = (double)v61 / (double)klass;
      v109.fields.x = -(float)(v63 * v65);
      v109.fields.y = 0.0;
      v109.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v109, 0LL);
    }
    while ( (int)++v36 - 4 < v15 );
  }
  v66 = 1024495761;
  v67 = 1052819649;
  v68 = 1024495761;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v20 - 3), v21, v22, v23, &methoda);
  v70 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  g = *((float *)&methoda.methodPointer + 1);
  r = *(float *)&methoda.methodPointer;
  a = *((float *)&methoda.invoker_method + 1);
  b = *(float *)&methoda.invoker_method;
  if ( v70 )
  {
    *(_QWORD *)&v110.fields.r = methoda.methodPointer;
    *(_QWORD *)&v110.fields.b = methoda.invoker_method;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(v70, v110, 0LL);
    r = TextEffectColor.fields.r;
    g = TextEffectColor.fields.g;
    b = TextEffectColor.fields.b;
    a = TextEffectColor.fields.a;
  }
  v75 = this->fields.userEventRaidEntity;
  if ( !v75 )
    goto LABEL_89;
  v76 = (__int64)v75[1].klass;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v69);
  if ( *(&this->fields.isLastBattleRelease + 4) )
  {
    lastBattleSpr = (UILabel_o *)this->fields.lastBattleSpr;
    AiModeName = TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v77);
    if ( !lastBattleSpr )
      goto LABEL_89;
    UILabel__set_text(lastBattleSpr, AiModeName, 0LL);
    v112.fields.r = r;
    v112.fields.g = g;
    v112.fields.b = b;
    v112.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, (UILabel_o *)this->fields.lastBattleSpr, v112, v81);
  }
  v82 = *(UnityEngine_Component_o **)&this->fields.eventId;
  if ( !v82 )
    goto LABEL_89;
  v83 = UnityEngine_Component__get_gameObject(v82, 0LL);
  if ( !v83 )
    goto LABEL_89;
  if ( UnityEngine_GameObject__get_activeSelf(v83, 0LL) )
  {
    v85 = *(UILabel_o **)&this->fields.eventId;
    RestCountText = TitleInfoEventRaidBossComponent__GetRestCountText(
                      this,
                      v76 - RaidBossTotalDamage,
                      RaidBossTotalDamage,
                      v84);
    if ( !v85 )
      goto LABEL_89;
    UILabel__set_text(v85, RestCountText, 0LL);
    v113.fields.r = r;
    v113.fields.g = g;
    v113.fields.b = b;
    v113.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.eventId, v113, v87);
  }
  v88 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
  {
    v89 = *(UnityEngine_Component_o **)&this->fields.overwritePosX;
    if ( !v89 )
      goto LABEL_89;
    v90 = UnityEngine_Component__get_gameObject(v89, 0LL);
    if ( !v90 )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive(v90, *(&this->fields.isLastBattleRelease + 5), 0LL);
    if ( *(&this->fields.isLastBattleRelease + 5) )
    {
      v92 = this->fields.userEventRaidEntity;
      if ( !v92 )
        goto LABEL_89;
      v93 = *(UILabel_o **)&this->fields.overwritePosX;
      if ( !v93 )
        goto LABEL_89;
      UILabel__set_text(v93, (System_String_o *)v92->fields.damage, 0LL);
    }
    v114.fields.r = r;
    v114.fields.g = g;
    v114.fields.b = b;
    v114.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.overwritePosX, v114, v91);
  }
  useTotalLabel = this->fields.useTotalLabel;
  if ( !useTotalLabel )
    goto LABEL_89;
  v95 = 1.0 - (double)RaidBossTotalDamage / (double)v76;
  UIProgressBar__set_value((UIProgressBar_o *)useTotalLabel, v95, 0LL);
  if ( *(&this->fields.isLastBattleRelease + 5) )
  {
    v96 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
    if ( !v96 )
      goto LABEL_89;
    if ( !EventRaidEntity__IsJumbleSingleRaid(v96, 0LL) )
      goto LABEL_76;
  }
  if ( !*(&this->fields.isLastBattleRelease + 4) )
    goto LABEL_76;
  if ( !BYTE2(this->fields.hpBarSplitters) )
  {
    v97 = this->fields.userEventRaidEntity;
    if ( !v97 )
      goto LABEL_89;
    if ( (__int64)v97[1].klass > RaidBossTotalDamage )
    {
LABEL_76:
      bossName = (UnityEngine_Component_o *)this->fields.bossName;
      if ( bossName )
      {
        v99 = UnityEngine_Component__get_gameObject(bossName, 0LL);
        if ( v99 )
        {
          UnityEngine_GameObject__SetActive(v99, 0, 0LL);
          goto LABEL_86;
        }
      }
LABEL_89:
      sub_B170D4();
    }
  }
  v100 = (UnityEngine_Component_o *)this->fields.bossName;
  if ( !v100 )
    goto LABEL_89;
  v101 = UnityEngine_Component__get_gameObject(v100, 0LL);
  if ( !v101 )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive(v101, 1, 0LL);
  v115.fields.r = r;
  v115.fields.g = g;
  v115.fields.b = b;
  v115.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.eventId, v115, v102);
  v103 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
  {
    v116.fields.r = r;
    v116.fields.g = g;
    v116.fields.b = b;
    v116.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.overwritePosX, v116, v104);
  }
LABEL_86:
  defeatCntFrame = (UILabel_o *)this->fields.defeatCntFrame;
  if ( !defeatCntFrame )
    goto LABEL_89;
  v117.fields.r = r;
  v117.fields.g = g;
  v117.fields.b = b;
  v117.fields.a = a;
  UILabel__set_effectColor(defeatCntFrame, v117, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v106);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *defeatCntBarSplitterSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0

  if ( (byte_40FDFEB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isFlag);
    byte_40FDFEB = 1;
  }
  defeatCntBarSplitterSp = (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp;
  if ( !defeatCntBarSplitterSp
    || (gameObject = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitterSp, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, isFlag, 0LL);
  v10 = *(_QWORD *)&this->fields.isRaidClear;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 24);
    if ( (int)v11 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v11; ++i )
      {
        if ( i >= (unsigned int)v11 )
        {
          sub_B17100(v7, v8, v9);
          sub_B170A0();
        }
        v13 = *(UnityEngine_Object_o **)(v10 + 32 + 8 * i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v7 = UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( v7 )
        {
          if ( !v13 )
            goto LABEL_18;
          v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
          if ( !v14 )
            goto LABEL_18;
          UnityEngine_GameObject__SetActive(v14, isFlag, 0LL);
        }
        LODWORD(v11) = *(_DWORD *)(v10 + 24);
      }
    }
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetLastBattleIcon(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  int32_t v18; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FDFE8 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, sprite);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_23549, v11);
    sub_B16FFC(&StringLiteral_23551, v12);
    byte_40FDFE8 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v20 = eventId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v19 = iconId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15 = System_String__Format_43744796((System_String_o *)StringLiteral_23551, (Il2CppObject *)prefix, v13, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v15, 0LL) )
  {
LABEL_12:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_13;
    v18 = eventId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = System_String__Format_43739268((System_String_o *)StringLiteral_23549, (Il2CppObject *)prefix, v16, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( !AtlasManager__SetEventUI(sprite, v17, 0LL) )
    {
LABEL_13:
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI(sprite, prefix, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetOutlineBattleColor(
        TitleInfoEventRaidBossComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v4; // x0

  v4 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  if ( v4 )
    defaultColor = EventBossStatusUiEntity__GetStatusBattleColor(v4, defaultColor, 0LL);
  if ( !label )
    sub_B170D4();
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetOutlineLastColor(
        TitleInfoEventRaidBossComponent_o *this,
        UILabel_o *label,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v4; // x0

  v4 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  if ( v4 )
    defaultColor = EventBossStatusUiEntity__GetStatusLastColor(v4, defaultColor, 0LL);
  if ( !label )
    sub_B170D4();
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_String_o *v9; // x0
  System_String_o *v10; // x21
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = gaugeId;
  if ( (byte_40FDFE7 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, sprite);
    sub_B16FFC(&StringLiteral_15842, v8);
    byte_40FDFE7 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43746016(prefix, (System_String_o *)StringLiteral_15842, v9, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v10, 0LL) )
  {
LABEL_8:
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(sprite, prefix, 0LL);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__Setup(
        TitleInfoEventRaidBossComponent_o *this,
        UIAtlas_o *terminalAtlas,
        int32_t eventId,
        int32_t warId,
        int32_t day,
        bool isJumbleRaid,
        bool isSingleRaid,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  WebViewManager_o *Instance; // x0
  DataManager_o *v34; // x23
  EventRaidMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventRaidMaster_o *v36; // x21
  EventRaidEntity_o *Entity; // x0
  struct UserEventRaidEntity_o **p_userEventRaidEntity; // x22
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  UserEventRaidMaster_o *v46; // x0
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndDay; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *v54; // x0
  EventDetailEntity_o *v55; // x0
  bool isRaidDefeatCount; // w0
  EventBossStatusUiMaster_o *v57; // x0
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  const MethodInfo *v65; // x5
  EventBossStatusUiEntity_o *GaugeId; // x0
  int32_t v67; // w23
  TitleInfoEventRaidBossComponent_o *v68; // x0
  const MethodInfo *v69; // x4
  TitleInfoEventRaidBossComponent_o *v70; // x0
  const MethodInfo *v71; // x4
  TitleInfoEventRaidBossComponent_o *v72; // x0
  const MethodInfo *v73; // x4
  struct UISlider_o *hpBarSlider; // x0
  float v75; // s0
  struct UILabel_o *totalHpLabel; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **restTimeLabel; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  UnityEngine_Component_o *v90; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  char v94; // w1
  UISprite_o *defeatCntBg; // x23
  struct UISlider_o *defeatCntBarSlider; // x0
  float v97; // s0
  struct UILabel_o *totalDefeatCntLabel; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **defeatCntBarSliderWhite; // x1
  int32_t *p_eventId; // x23
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  UnityEngine_Component_o *lastBattleSpr; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *raidBossIconSp; // x0
  UnityEngine_GameObject_o *defeatCntBarParent; // x0
  void *monitor; // x24
  int64_t Time; // x0
  UnityEngine_Component_o *v119; // x8
  int64_t v120; // x23
  UnityEngine_GameObject_o *v121; // x0
  float RAIDBOSS_DEFEAT_COUNT_POS_X; // s0
  UnityEngine_GameObject_o *v123; // x23
  TitleInfoEventRaidBossComponent_c *v124; // x0
  UnityEngine_GameObject_o *v125; // x0
  UnityEngine_Transform_o *transform; // x0
  clsQuestCheck_o *v127; // x0
  bool v128; // w0
  EventRaidEntity_o *v129; // x8
  bool IsJumbleSingleRaid; // w0
  int32_t eventRaidEntity; // w1
  int32_t RaidGroupDeadQuestId; // w0
  const MethodInfo *v133; // x1
  int32_t v134; // w20
  clsQuestCheck_o *v135; // x0

  if ( (byte_40FDFE5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, terminalAtlas);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18);
    sub_B16FFC(&NetworkManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v21);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v22);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_18479, v24);
    sub_B16FFC(&StringLiteral_18527, v25);
    sub_B16FFC(&StringLiteral_18484, v26);
    sub_B16FFC(&StringLiteral_18481, v27);
    sub_B16FFC(&StringLiteral_18480, v28);
    sub_B16FFC(&StringLiteral_18482, v29);
    sub_B16FFC(&StringLiteral_18488, v30);
    sub_B16FFC(&StringLiteral_18478, v31);
    sub_B16FFC(&StringLiteral_18483, v32);
    byte_40FDFE5 = 1;
  }
  LODWORD(this->fields.eventRaidEntity) = eventId;
  BYTE1(this->fields.HPfrom) = 0;
  LODWORD(this->fields.HPto) = warId;
  *((_WORD *)&this->fields.isLastBattleRelease + 1) = 256;
  *(&this->fields.isLastBattleRelease + 5) = isJumbleRaid;
  LOBYTE(this->fields.hpBarSplitters) = isSingleRaid;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v34 = (DataManager_o *)Instance;
  MasterData_WarQuestSelectionMaster = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v36 = MasterData_WarQuestSelectionMaster;
  if ( (day & 0x80000000) != 0 )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_68;
    day = EventRaidMaster__GetCurrentDay(MasterData_WarQuestSelectionMaster, (int32_t)this->fields.eventRaidEntity, 0LL);
  }
  else if ( !MasterData_WarQuestSelectionMaster )
  {
    goto LABEL_68;
  }
  Entity = EventRaidMaster__GetEntity(v36, (int32_t)this->fields.eventRaidEntity, day, 0LL);
  p_userEventRaidEntity = &this->fields.userEventRaidEntity;
  this->fields.userEventRaidEntity = (struct UserEventRaidEntity_o *)Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.userEventRaidEntity,
    (System_Int32_array **)Entity,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
  {
    BYTE1(this->fields.hpBarSplitters) = userEventRaidEntity[2].fields.userId > 0;
    v46 = (UserEventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     v34,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( v46 )
    {
      EntityFromEventIdAndDay = (struct EventBossStatusUiEntity_o *)UserEventRaidMaster__getEntityFromEventIdAndDay(
                                                                      v46,
                                                                      (int32_t)this->fields.eventRaidEntity,
                                                                      day,
                                                                      0LL);
      this->fields.eventBossStatusUiEntity = EntityFromEventIdAndDay;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
        (System_Int32_array **)EntityFromEventIdAndDay,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      v54 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v34,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( v54 )
      {
        v55 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       v54,
                                       (int32_t)this->fields.eventRaidEntity,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( v55 )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount(v55, 0LL);
          *(&this->fields.isLastBattleRelease + 4) = isRaidDefeatCount;
          LOBYTE(this->fields.hpBarParent) = isRaidDefeatCount;
          v57 = (EventBossStatusUiMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v34,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( v57 )
          {
            EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                 v57,
                                                                 (int32_t)this->fields.eventRaidEntity,
                                                                 day,
                                                                 0LL);
            *(_QWORD *)&this->fields.restTimeUpdateSec = EntityFromEventIdAndIndex;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.restTimeUpdateSec,
              EntityFromEventIdAndIndex,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            GaugeId = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
            if ( GaugeId )
            {
              GaugeId = (EventBossStatusUiEntity_o *)EventBossStatusUiEntity__GetGaugeId(GaugeId, 0LL);
              v67 = (int)GaugeId;
              if ( *(_QWORD *)&this->fields.restTimeUpdateSec )
                GaugeId = (EventBossStatusUiEntity_o *)EventBossStatusUiEntity__GetLastBattleIconId(
                                                         *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec,
                                                         0LL);
            }
            else
            {
              v67 = -1;
            }
            if ( *p_userEventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)GaugeId,
                (UISprite_o *)this->fields.bossName,
                (System_String_o *)StringLiteral_18484,
                (*p_userEventRaidEntity)->fields.userId,
                (int32_t)(*p_userEventRaidEntity)[1].monitor,
                v65);
              if ( *(&this->fields.isLastBattleRelease + 4) && !BYTE1(this->fields.hpBarSplitters) )
              {
                defeatCntBg = this->fields.defeatCntBg;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(defeatCntBg, (System_String_o *)StringLiteral_18479, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_18478, 0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSlider,
                  (System_String_o *)StringLiteral_18480,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSplitter,
                  (System_String_o *)StringLiteral_18527,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.modeName,
                  (System_String_o *)StringLiteral_18488,
                  0LL);
                defeatCntBarSlider = this->fields.defeatCntBarSlider;
                if ( !defeatCntBarSlider )
                  goto LABEL_68;
                v97 = ((float (__fastcall *)(struct UISlider_o *, _QWORD))defeatCntBarSlider->klass[1]._2.genericContainerHandle)(
                        defeatCntBarSlider,
                        *(_QWORD *)&defeatCntBarSlider->klass[1]._2.instance_size);
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                *((float *)&this->fields.useBarSlider + 1) = v97;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalDefeatCntLabel,
                  v99,
                  v100,
                  v101,
                  v102,
                  v103,
                  v104);
                defeatCntBarSliderWhite = (System_Int32_array **)this->fields.defeatCntBarSliderWhite;
                p_eventId = &this->fields.eventId;
                *(_QWORD *)&this->fields.eventId = defeatCntBarSliderWhite;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  defeatCntBarSliderWhite,
                  v107,
                  v108,
                  v109,
                  v110,
                  v111,
                  v112);
                lastBattleSpr = (UnityEngine_Component_o *)this->fields.lastBattleSpr;
                if ( !lastBattleSpr )
                  goto LABEL_68;
                gameObject = UnityEngine_Component__get_gameObject(lastBattleSpr, 0LL);
                if ( !gameObject )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                raidBossIconSp = (UnityEngine_GameObject_o *)this->fields.raidBossIconSp;
                if ( !raidBossIconSp )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive(raidBossIconSp, 1, 0LL);
                defeatCntBarParent = this->fields.defeatCntBarParent;
                if ( !defeatCntBarParent )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive(defeatCntBarParent, 0, 0LL);
                if ( !*p_userEventRaidEntity )
                  goto LABEL_68;
                monitor = (*p_userEventRaidEntity)[2].monitor;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                Time = NetworkManager__getTime(0LL);
                v119 = *(UnityEngine_Component_o **)p_eventId;
                if ( !*(_QWORD *)p_eventId )
                  goto LABEL_68;
                v120 = Time;
                v93 = UnityEngine_Component__get_gameObject(v119, 0LL);
                if ( (__int64)monitor > v120 || *(&this->fields.isLastBattleRelease + 5) )
                {
                  v94 = 1;
                  if ( !v93 )
                    goto LABEL_68;
                }
                else
                {
                  v94 = LOBYTE(this->fields.hpBarSplitters) != 0;
                  if ( !v93 )
                    goto LABEL_68;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v68,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_18482,
                  v67,
                  v69);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v70,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_18481,
                  v67,
                  v71);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v72,
                  (UISprite_o *)this->fields.hpBarSlider,
                  (System_String_o *)StringLiteral_18483,
                  v67,
                  v73);
                hpBarSlider = this->fields.hpBarSlider;
                if ( !hpBarSlider )
                  goto LABEL_68;
                v75 = ((float (__fastcall *)(struct UISlider_o *, _QWORD))hpBarSlider->klass[1]._2.genericContainerHandle)(
                        hpBarSlider,
                        *(_QWORD *)&hpBarSlider->klass[1]._2.instance_size);
                totalHpLabel = this->fields.totalHpLabel;
                *((float *)&this->fields.useBarSlider + 1) = v75;
                this->fields.useTotalLabel = totalHpLabel;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalHpLabel,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82);
                restTimeLabel = (System_Int32_array **)this->fields.restTimeLabel;
                *(_QWORD *)&this->fields.eventId = restTimeLabel;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  restTimeLabel,
                  v84,
                  v85,
                  v86,
                  v87,
                  v88,
                  v89);
                v90 = (UnityEngine_Component_o *)this->fields.lastBattleSpr;
                if ( !v90 )
                  goto LABEL_68;
                v91 = UnityEngine_Component__get_gameObject(v90, 0LL);
                if ( !v91 )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive(v91, 0, 0LL);
                v92 = (UnityEngine_GameObject_o *)this->fields.raidBossIconSp;
                if ( !v92 )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive(v92, 0, 0LL);
                v93 = this->fields.defeatCntBarParent;
                if ( !v93 )
                  goto LABEL_68;
                v94 = 1;
              }
              UnityEngine_GameObject__SetActive(v93, v94, 0LL);
              v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              RAIDBOSS_DEFEAT_COUNT_POS_X = *(float *)&this->fields.useBarSlider;
              v123 = v121;
              if ( RAIDBOSS_DEFEAT_COUNT_POS_X == 0.0 )
              {
                v124 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v124 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                RAIDBOSS_DEFEAT_COUNT_POS_X = (float)v124->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v123, RAIDBOSS_DEFEAT_COUNT_POS_X, 0LL);
              v125 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v125 )
              {
                transform = UnityEngine_GameObject__get_transform(v125, 0LL);
                if ( transform )
                {
                  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = UnityEngine_Transform__get_localPosition(
                                                                                 transform,
                                                                                 0LL);
                  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                  }
                  v127 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( v127 )
                  {
                    v128 = clsQuestCheck__IsEncountRaidBoss(v127, (int32_t)this->fields.eventRaidEntity, day, 0LL);
                    v129 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
                    *(&this->fields.isLastBattleRelease + 2) = v128;
                    if ( v129 )
                    {
                      IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid(v129, 0LL);
                      eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
                      if ( IsJumbleSingleRaid )
                      {
                        if ( !*p_userEventRaidEntity )
                          goto LABEL_68;
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                                 v36,
                                                 eventRaidEntity,
                                                 (*p_userEventRaidEntity)->fields.eventId,
                                                 0LL);
                      }
                      else
                      {
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v36, eventRaidEntity, day, 0LL);
                      }
                      v134 = RaidGroupDeadQuestId;
                      if ( RaidGroupDeadQuestId < 1 )
                        goto LABEL_66;
                      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                      }
                      v135 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                      if ( v135 )
                      {
                        BYTE2(this->fields.hpBarSplitters) = clsQuestCheck__IsQuestRelease(v135, v134, -1, 0, 0LL);
LABEL_66:
                        TitleInfoEventRaidBossComponent__SetDisp(this, v133);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_68:
    sub_B170D4();
  }
}


void __fastcall TitleInfoEventRaidBossComponent__StartDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *ClearBossEffect; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1

  this->fields.onClearCall = callBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClearCall,
    (System_Int32_array **)callBack,
    (System_String_array **)callBack,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ClearBossEffect = TitleInfoEventRaidBossComponent__GetClearBossEffect(this, mapAssetData, v10);
  this[1].klass = (TitleInfoEventRaidBossComponent_c *)ClearBossEffect;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)ClearBossEffect,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  TitleInfoEventRaidBossComponent__PlayFrameInBoss(this, v18);
}


void __fastcall TitleInfoEventRaidBossComponent__Update(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 0, v2);
}


void __fastcall TitleInfoEventRaidBossComponent__UpdateDisp(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__UpdateRestTime(
        TitleInfoEventRaidBossComponent_o *this,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool *p_isSingleRaid; // x20
  float realtimeSinceStartup; // s0
  float v11; // s9
  float v12; // s8
  TitleInfoEventRaidBossComponent_c *v13; // x0
  int64_t Time; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x22
  unsigned __int64 v19; // x21
  UILabel_o *defeatCntFrame; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  unsigned __int64 v26; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v27; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v28; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FDFEC & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, isForce);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_13353, v8);
    byte_40FDFEC = 1;
  }
  if ( *(&this->fields.isLastBattleRelease + 2) && !*(&this->fields.isLastBattleRelease + 4) )
  {
    if ( isForce )
    {
      p_isSingleRaid = &this->fields.isSingleRaid;
LABEL_11:
      *(float *)p_isSingleRaid = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Time = NetworkManager__getTime(0LL);
      userEventRaidEntity = this->fields.userEventRaidEntity;
      if ( !userEventRaidEntity )
        goto LABEL_24;
      v16 = (unsigned __int64)userEventRaidEntity[2].monitor - Time;
      if ( (__int64)v16 < 1 )
      {
        v19 = 0LL;
        v18 = 0LL;
        v17 = 0LL;
      }
      else
      {
        v17 = v16 % 0x3C;
        v18 = v16 / 0x3C % 0x3C;
        v19 = v16 / 0xE10;
      }
      defeatCntFrame = (UILabel_o *)this->fields.defeatCntFrame;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13353, 0LL);
      v28 = v19;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28);
      v27 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
      v26 = v17;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
      v25 = System_String__Format_43744796(v21, v22, v23, v24, 0LL);
      if ( !defeatCntFrame )
LABEL_24:
        sub_B170D4();
      UILabel__set_text(defeatCntFrame, v25, 0LL);
      return;
    }
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v11 = *(float *)&this->fields.isSingleRaid;
    v12 = realtimeSinceStartup;
    p_isSingleRaid = &this->fields.isSingleRaid;
    v13 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v13 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(v12 - v11) > v13->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
      goto LABEL_11;
  }
}


void __fastcall TitleInfoEventRaidBossComponent__setBeforeMovePos(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoEventRaidBossComponent_c *v9; // x0
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDFEE & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    byte_40FDFEE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
    sub_B170D4();
  v5 = transform;
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v9->static_fields;
  v12.fields.x = x + static_fields[6];
  v12.fields.y = y + static_fields[7];
  v12.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v5, v12, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F782B & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidBossComponent___c_TypeInfo, v1);
    byte_40F782B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TitleInfoEventRaidBossComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall TitleInfoEventRaidBossComponent___c___ctor(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___PlayHpCut_b__87_0(
        TitleInfoEventRaidBossComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventRaidBossComponent___c__DisplayClass95_0___ctor(
        TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventRaidBossComponent___c__DisplayClass95_0___GetAiModeName_b__0(
        TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  return this->fields.totalDamage >= hp;
}