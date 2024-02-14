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

  if ( (byte_421883D & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_21748/*"raid_boss_icon_"*/, v8);
    sub_B0D8A4(&StringLiteral_14504/*"TitleInfoEventRaidBossEffect_Dead"*/, v9);
    sub_B0D8A4(&StringLiteral_21749/*"raid_boss_icon_last_"*/, v10);
    byte_421883D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_21748/*"raid_boss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21748/*"raid_boss_icon_"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_21749/*"raid_boss_icon_last_"*/;
  v13->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_21749/*"raid_boss_icon_last_"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v13->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_14504/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v21->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14504/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->RAIDBOSS_CLEAR_EFFECT_PREFAB, v22, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4218837 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_10020/*"OnEndAnimation"*/, v4);
    byte_4218837 = 1;
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
    (System_String_o *)StringLiteral_10020/*"OnEndAnimation"*/,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0LL);
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  __int64 v15; // x9
  System_Collections_Generic_IEnumerable_TSource__o *damage; // x20
  System_Func_long__bool__o *v17; // x22
  struct UserEventRaidEntity_o *v18; // x8
  __int64 v19; // x8
  System_String_o **v20; // x8
  __int64 v22; // x0

  if ( (byte_4218839 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_long___, totalDamage);
    sub_B0D8A4(&Method_System_Func_long__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_long__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__, v7);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4218839 = 1;
  }
  v10 = (TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *)sub_B0D974(
                                                                     TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo,
                                                                     totalDamage,
                                                                     method);
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_13;
  v10->fields.totalDamage = totalDamage;
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_13;
  v15 = *(_QWORD *)&userEventRaidEntity[2].fields.eventId;
  if ( !v15 )
    goto LABEL_13;
  if ( !*(_QWORD *)(v15 + 24) )
  {
    v20 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v20;
  }
  damage = (System_Collections_Generic_IEnumerable_TSource__o *)userEventRaidEntity[2].fields.damage;
  v17 = (System_Func_long__bool__o *)sub_B0D974(System_Func_long__bool__TypeInfo, v12, v13);
  System_Func_long__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__,
    (const MethodInfo_2616128 *)Method_System_Func_long__bool___ctor__);
  v11 = System_Linq_Enumerable__Count_long_(
          damage,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1B482C4 *)Method_System_Linq_Enumerable_Count_long___);
  v18 = this->fields.userEventRaidEntity;
  if ( !v18 || (v19 = *(_QWORD *)&v18[2].fields.eventId) == 0 )
LABEL_13:
    sub_B0D97C(v11);
  if ( (unsigned int)v11 >= *(_DWORD *)(v19 + 24) )
  {
    v22 = sub_B0D9A8(v11);
    sub_B0D948(v22, 0LL);
  }
  v20 = (System_String_o **)(v19 + 8LL * (int)v11 + 32);
  return *v20;
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
  Il2CppObject *v9; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *v11; // x21
  struct UserEventRaidEntity_o *v12; // x8
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  UnityEngine_Object_o *Clip; // x21
  struct UserEventRaidEntity_o *v16; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  TitleInfoEventRaidBossComponent_c *v20; // x0
  int v22; // [xsp+4h] [xbp-3Ch] BYREF
  int monitor; // [xsp+8h] [xbp-38h] BYREF
  int userId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421883C & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, animation);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v7);
    sub_B0D8A4(&StringLiteral_23723/*"{0}_{1}_{2}"*/, v8);
    byte_421883C = 1;
  }
  v9 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v9 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  v11 = (Il2CppObject *)*((_QWORD *)v9[11].monitor + 2);
  userId = userEventRaidEntity->fields.userId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v12 = this->fields.userEventRaidEntity;
  if ( !v12 )
    goto LABEL_26;
  v13 = v9;
  monitor = (int)v12[1].monitor;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v9 = (Il2CppObject *)System_String__Format_43850968((System_String_o *)StringLiteral_23723/*"{0}_{1}_{2}"*/, v11, v13, v14, 0LL);
  if ( !animation )
    goto LABEL_26;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v9, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
  {
    v9 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v16 = this->fields.userEventRaidEntity;
    if ( v16 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v22 = v16->fields.userId;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v19 = System_String__Format_43845440(
              (System_String_o *)StringLiteral_23721/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v18,
              0LL);
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v19, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
      {
        v20 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v20 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return UnityEngine_Animation__GetClip(animation, v20->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0LL);
      }
      return (UnityEngine_AnimationClip_o *)Clip;
    }
LABEL_26:
    sub_B0D97C(v9);
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
  Il2CppObject *v10; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *v12; // x21
  struct UserEventRaidEntity_o *v13; // x8
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  struct UserEventRaidEntity_o *v17; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  TitleInfoEventRaidBossComponent_c *v21; // x0
  int v23; // [xsp+Ch] [xbp-44h] BYREF
  int monitor; // [xsp+18h] [xbp-38h] BYREF
  int userId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_421883B & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, mapAssetData);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v8);
    sub_B0D8A4(&StringLiteral_23723/*"{0}_{1}_{2}"*/, v9);
    byte_421883B = 1;
  }
  v10 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v10 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  v12 = (Il2CppObject *)*((_QWORD *)v10[11].monitor + 2);
  userId = userEventRaidEntity->fields.userId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v13 = this->fields.userEventRaidEntity;
  if ( !v13 )
    goto LABEL_26;
  v14 = v10;
  monitor = (int)v13[1].monitor;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v10 = (Il2CppObject *)System_String__Format_43850968((System_String_o *)StringLiteral_23723/*"{0}_{1}_{2}"*/, v12, v14, v15, 0LL);
  if ( !mapAssetData )
    goto LABEL_26;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             (System_String_o *)v10,
                                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    v10 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v17 = this->fields.userEventRaidEntity;
    if ( v17 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v23 = v17->fields.userId;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v20 = System_String__Format_43845440(
              (System_String_o *)StringLiteral_23721/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v19,
              0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 mapAssetData,
                                                                 v20,
                                                                 (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v21 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v21 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             mapAssetData,
                                             v21->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                             (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_26:
    sub_B0D97C(v10);
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
  int64_t result; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  bool v6; // w8
  struct UserEventRaidEntity_o *v7; // x8
  int64_t klass; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421882D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_TotalEventRaidMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_421882D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity || !result )
    goto LABEL_15;
  v6 = TotalEventRaidMaster__TryGetEntity(
         (TotalEventRaidMaster_o *)result,
         &entity,
         (int32_t)this->fields.eventRaidEntity,
         HIDWORD(userEventRaidEntity->fields.userId),
         0LL);
  result = 0LL;
  if ( !v6 )
    return result;
  v7 = this->fields.userEventRaidEntity;
  if ( !v7 || !entity )
LABEL_15:
    sub_B0D97C(result);
  klass = (int64_t)v7[1].klass;
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
  System_Text_StringBuilder_o *v19; // x20
  __int64 v20; // x0
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v25; // x19
  Il2CppObject *NumberFormat_32897236; // x1
  System_String_o *v27; // x0
  System_String_o *v28; // x19
  System_String_o *v29; // x19
  System_String_o *v30; // x19
  int64_t v31; // [xsp+0h] [xbp-30h] BYREF
  int64_t v32; // [xsp+8h] [xbp-28h] BYREF

  v32 = totalHp;
  if ( (byte_421883A & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, totalHp);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_5703/*"EVENT_RAID_REST_COUNT_AFTER"*/, v9);
    sub_B0D8A4(&StringLiteral_5704/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v10);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v11);
    sub_B0D8A4(&StringLiteral_5640/*"EVENT_DEFEAT_COUNT_TXT"*/, v12);
    sub_B0D8A4(&StringLiteral_13467/*"TITLE_INFO_RAID_TOTALHP"*/, v13);
    byte_421883A = 1;
  }
  v14 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  if ( v14 )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(v14, 0LL);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0LL) )
    {
      v25 = System_Int64__ToString((int64_t)&v32, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      NumberFormat_32897236 = (Il2CppObject *)LocalizationManager__GetNumberFormat_32897236(v25, 0LL);
      v27 = CountFormat;
      return System_String__Format(v27, NumberFormat_32897236, 0LL);
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
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
      v31 = totalDamage;
      NumberFormat_32897236 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
      v27 = v30;
    }
    else
    {
      v28 = System_Int64__ToString((int64_t)&v32, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = LocalizationManager__GetNumberFormat_32897236(v28, 0LL);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13467/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
      NumberFormat_32897236 = (Il2CppObject *)v29;
    }
    return System_String__Format(v27, NumberFormat_32897236, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
  v19 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v17, v18);
  System_Text_StringBuilder___ctor_42149572(v19, v16, 0LL);
  if ( !v19 )
    sub_B0D97C(v20);
  System_Text_StringBuilder__Append_42155400(v19, (System_String_o *)StringLiteral_80/*" "*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5703/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
  v31 = totalHp;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v31);
  v23 = System_String__Format(v21, v22, 0LL);
  System_Text_StringBuilder__Append_42155400(v19, v23, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v19->klass->vtable._3_ToString.method)(
                              v19,
                              v19->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
    sub_B0D97C(0LL);
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
  clsQuestCheck_o *userEventRaidEntity; // x0
  struct UserEventRaidEntity_o *v10; // x8
  int32_t eventRaidEntity; // w19
  int32_t userId_high; // w20

  if ( (byte_4218835 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&raidDeadQuestId);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_4218835 = 1;
  }
  userEventRaidEntity = (clsQuestCheck_o *)this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_24;
  if ( !EventRaidEntity__IsValidDefeatedTime((EventRaidEntity_o *)userEventRaidEntity, 0LL)
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
    userEventRaidEntity = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( userEventRaidEntity )
      return clsQuestCheck__IsQuestClear(userEventRaidEntity, raidDeadQuestId, 0, 0LL)
          || *(&this->fields.isLastBattleRelease + 5);
LABEL_24:
    sub_B0D97C(userEventRaidEntity);
  }
  userEventRaidEntity = (clsQuestCheck_o *)this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_24;
  userEventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated(
                                             (EventRaidEntity_o *)userEventRaidEntity,
                                             0LL);
  if ( ((unsigned __int8)userEventRaidEntity & 1) == 0 )
    return 0;
  v10 = this->fields.userEventRaidEntity;
  if ( !v10 )
    goto LABEL_24;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  userId_high = HIDWORD(v10->fields.userId);
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
    sub_B0D97C(this);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
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
  _BYTE *hpFrame; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t eventRaidEntity; // w20
  int32_t userId_high; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventRaidBossComponent_c *v18; // x8

  if ( (byte_4218838 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v9);
    sub_B0D8A4(&Method_UITweener_Begin_TweenAlpha___, v10);
    byte_4218838 = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    byte_4211AEB = 1;
  }
  hpFrame = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    hpFrame = TerminalPramsManager_TypeInfo;
  }
  if ( !*(_QWORD *)(*((_QWORD *)hpFrame + 23) + 416LL) )
  {
    if ( (hpFrame[307] & 4) != 0 && !*((_DWORD *)hpFrame + 56) )
      j_il2cpp_runtime_class_init_0(hpFrame);
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
  hpFrame = this->fields.hpFrame;
  LOBYTE(this->fields.HPfrom) = 1;
  if ( !hpFrame )
    goto LABEL_26;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hpFrame, 0LL);
  v18 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v18 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  hpFrame = UITweener__Begin_TweenWidth_(
              gameObject,
              v18->static_fields->ANIM_DURATION_SPLIT_ALPHA,
              (const MethodInfo_205679C *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpFrame )
LABEL_26:
    sub_B0D97C(hpFrame);
  *((_DWORD *)hpFrame + 6) = 1;
  *((_QWORD *)hpFrame + 15) = 1065353216LL;
}


void __fastcall TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  char *Child; // x0
  UnityEngine_GameObject_o *v7; // x20
  TitleInfoEventRaidBossComponent_c *v8; // x8
  char *v9; // x20
  float32x2_t *static_fields; // x8
  float v11; // s1
  int animEndCall; // w9
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4218832 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    sub_B0D8A4(&Method_UITweener_Begin_TweenPosition___, v3);
    sub_B0D8A4(&StringLiteral_10704/*"PlayHpNameAlpha"*/, v4);
    byte_4218832 = 1;
  }
  if ( *(&this->fields.isLastBattleRelease + 5) || LOBYTE(this->fields.hpBarSplitters) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Child = (char *)GameObjectExtensions__GetChild(gameObject, 0, 0LL);
    if ( !Child )
      goto LABEL_13;
    Child = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Child, 0LL);
    if ( !Child )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Child, 1, 0LL);
  }
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  Child = (char *)UITweener__Begin_TweenWidth_(
                    v7,
                    v8->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
                    (const MethodInfo_205679C *)Method_UITweener_Begin_TweenPosition___);
  if ( !Child )
LABEL_13:
    sub_B0D97C(Child);
  v9 = Child;
  static_fields = (float32x2_t *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v11 = *(float *)&this->fields.animEndCall + static_fields[4].n64_f32[0];
  *((float32x2_t *)Child + 15) = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *((float *)Child + 32) = v11;
  animEndCall = (int)this->fields.animEndCall;
  *(_QWORD *)(Child + 132) = *(_QWORD *)&this->fields.originPos.fields.z;
  *((_DWORD *)Child + 35) = animEndCall;
  *((_DWORD *)Child + 6) = 2;
  v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v9 + 9) = v13;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 72), v13, v14, v15, v16, v17, v18, v19);
  v20 = (System_Int32_array **)StringLiteral_10704/*"PlayHpNameAlpha"*/;
  *((_QWORD *)v9 + 10) = StringLiteral_10704/*"PlayHpNameAlpha"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 80), v20, v21, v22, v23, v24, v25, v26);
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
  UIWidget_o *Component_UIWidget; // x20
  TitleInfoEventRaidBossComponent_c *v12; // x8
  TitleInfoEventRaidBossComponent___c_c *v13; // x0
  float ANIM_DURATION_HP_CUT; // s8
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__87_0; // x21
  Il2CppObject *v17; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o *v25; // x22
  __int64 v26; // x0

  if ( (byte_4218833 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v3);
    sub_B0D8A4(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, v4);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, v6);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent___c_TypeInfo, v7);
    byte_4218833 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v12 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v12 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v13 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v12->static_fields->ANIM_DURATION_HP_CUT;
  if ( (BYTE3(TitleInfoEventRaidBossComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo);
    v13 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__87_0 = static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(_9__87_0, v17, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, 0LL);
    v18 = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    v18->__9__87_0 = _9__87_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !Component_UIWidget )
    sub_B0D97C(v26);
  EasingObject__Play((EasingObject_o *)Component_UIWidget, ANIM_DURATION_HP_CUT, _9__87_0, v25, 0.0, 0, 0LL);
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
  DataManager_o *Instance; // x0
  EventRaidMaster_o *v11; // x20
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t eventRaidEntity; // w1
  int32_t RaidGroupDeadQuestId; // w0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t v16; // w20
  __int64 v17; // x22
  const MethodInfo *v18; // x3
  int64_t datalist; // x2
  struct UserEventRaidEntity_o *v20; // x8
  UILabel_o *v21; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_GameObject_o *v26; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v27; // x20
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4218834 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, v8);
    sub_B0D8A4(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__, v9);
    byte_4218834 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.userEventRaidEntity )
    goto LABEL_44;
  v11 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(
                                (EventRaidEntity_o *)this->fields.userEventRaidEntity,
                                0LL);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_44;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                             v11,
                             eventRaidEntity,
                             userEventRaidEntity->fields.eventId,
                             0LL);
  }
  else
  {
    if ( !v11 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                             v11,
                             eventRaidEntity,
                             HIDWORD(userEventRaidEntity->fields.userId),
                             0LL);
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v16 = RaidGroupDeadQuestId;
  v17 = eventBossStatusUiEntity ? -(__int64)eventBossStatusUiEntity[1].klass : 0LL;
  Instance = (DataManager_o *)this->fields.userEventRaidEntity;
  if ( !Instance
    || ((Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0LL)) == 0LL
      ? (datalist = 0LL)
      : (datalist = (int64_t)Instance->fields.datalist),
        (v20 = this->fields.userEventRaidEntity) == 0LL
     || (v21 = *(UILabel_o **)&this->fields.eventId,
         Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                       this,
                                       ((__int64)v20[1].klass + v17 - datalist) & ~(((__int64)v20[1].klass
                                                                                   + v17
                                                                                   - datalist) >> 63),
                                       datalist,
                                       v18),
         !v21)
     || (UILabel__set_text(v21, (System_String_o *)Instance, 0LL),
         (Instance = (DataManager_o *)this->fields.userEventRaidEntity) == 0LL)) )
  {
LABEL_44:
    sub_B0D97C(Instance);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v16, IsJumbleSingleRaid, v23) )
  {
    klass = (UnityEngine_Object_o *)this[1].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v26 = 0LL;
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v27 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v26 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v27,
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v26, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v26, 0LL);
    }
    *(&this->fields.isLastBattleRelease + 2) = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_44;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v26,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v29, v30);
      System_Action___ctor(
        v31,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v31,
          0LL);
        v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
        System_Action___ctor(v34, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v34;
        sub_B0D840(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        return;
      }
      goto LABEL_44;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v29);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v24);
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
  void *v9; // x0
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  UISprite_o *v13; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x20

  if ( (byte_4218829 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, eventRaidEnt);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    byte_4218829 = 1;
  }
  if ( isLastBattle )
  {
    hpFrame = this->fields.hpFrame;
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    if ( !eventRaidEnt )
      goto LABEL_23;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v11 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
    v12 = System_String__Concat_43849904(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v11, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI(hpFrame, v12, 0LL) )
      goto LABEL_20;
  }
  v13 = this->fields.hpFrame;
  v9 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
  }
  if ( !eventRaidEnt )
    goto LABEL_23;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v15 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
  v16 = System_String__Concat_43849904(RAIDBOSS_ICON_SPNAME_PREFIX, v15, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v13, v16, 0LL) )
  {
LABEL_20:
    v9 = this->fields.hpFrame;
    if ( v9 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v9 + 840LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 848LL));
      return;
    }
LABEL_23:
    sub_B0D97C(v9);
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
  TitleInfoEventRaidBossComponent_c *v13; // x0
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v17; // x0

  if ( (byte_4218836 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_5359/*"DoClearCallback"*/, v6);
    byte_4218836 = 1;
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
      v13 = this[1].klass;
      if ( !v13 )
        goto LABEL_33;
      Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v13,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    v13 = (TitleInfoEventRaidBossComponent_c *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0LL, 0LL);
    length = 0.0;
    if ( ((unsigned __int8)v13 & 1) == 0 )
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
    sub_B0D97C(v13);
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5359/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  __int64 v15; // x20
  int64_t totalDamage; // x21
  struct UserEventRaidEntity_o *v17; // x8
  float v18; // s0
  float v19; // s0
  struct UserEventRaidEntity_o *v20; // x8
  float v21; // s0
  float v22; // s0
  struct UserEventRaidEntity_o *v23; // x8
  int64_t damage; // x11
  int v25; // w10
  __int64 v26; // x9
  int64_t v27; // x11
  __int64 v28; // x12
  __int64 klass; // d0
  int v30; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218830 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, onClearCallback);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4218830 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity || !Instance )
    goto LABEL_36;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    &entity,
    (int32_t)this->fields.eventRaidEntity,
    HIDWORD(userEventRaidEntity->fields.userId),
    0LL);
  this->fields.splitHpEffect = (struct UnityEngine_GameObject_o *)onClearCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.splitHpEffect,
    (System_Int32_array **)onClearCallback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v15 = eventBossStatusUiEntity ? (__int64)eventBossStatusUiEntity[1].klass : 0LL;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    v15 += totalDamage;
  }
  else
  {
    totalDamage = 0LL;
  }
  v17 = this->fields.userEventRaidEntity;
  if ( !v17 )
    goto LABEL_36;
  v18 = 1.0 - (double)totalDamage / (double)(__int64)v17[1].klass;
  v19 = UnityEngine_Mathf__Clamp01(v18, 0LL);
  v20 = this->fields.userEventRaidEntity;
  this->fields.HPsplitPoint = v19;
  if ( !v20 )
    goto LABEL_36;
  v21 = 1.0 - (double)v15 / (double)(__int64)v20[1].klass;
  v22 = UnityEngine_Mathf__Clamp01(v21, 0LL);
  v23 = this->fields.userEventRaidEntity;
  *(float *)&this->fields.HPsplitNo = v22;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v23 )
    goto LABEL_36;
  damage = v23[2].fields.damage;
  if ( !damage )
    goto LABEL_36;
  v25 = *(_DWORD *)(damage + 24);
  if ( v25 >= 1 )
  {
    v26 = 0LL;
    v27 = damage + 32;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v27 + 8 * v26);
      if ( v28 > totalDamage && v28 <= v15 )
        break;
      if ( (int)++v26 >= v25 )
        goto LABEL_23;
    }
    klass = (__int64)v23[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v26;
    *(float *)&klass = 1.0 - (double)v28 / (double)klass;
    LODWORD(this->fields.originPos.fields.x) = klass;
  }
LABEL_23:
  Instance = (DataManager_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.HPsplitPoint, 0LL);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhiteSp;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhiteSp;
  if ( !Instance )
    goto LABEL_36;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, this->fields.HPsplitPoint, 0LL);
  Instance = (DataManager_o *)this->fields.defeatCntBarSliderWhiteSp;
  if ( !Instance )
    goto LABEL_36;
  UIProgressBar__set_alpha((UIProgressBar_o *)Instance, 0.0, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  v30 = *((unsigned __int8 *)&this->fields.isLastBattleRelease + 5);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = localPosition;
  if ( v30 || LOBYTE(this->fields.hpBarSplitters) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Instance = (DataManager_o *)GameObjectExtensions__GetChild(gameObject, 0, 0LL);
    if ( Instance )
    {
      Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        return;
      }
    }
LABEL_36:
    sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct UserEventRaidEntity_o *v12; // x8
  int64_t damage; // x8
  int v14; // w20
  _BOOL4 v15; // w8
  _BOOL4 v16; // w9
  int v17; // w21
  int v18; // s3
  float v19; // s4
  float v20; // s5
  float v21; // s6
  char v22; // w25
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Component_o *v30; // x22
  __int64 v31; // x26
  unsigned int v32; // w28
  __int64 v33; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *defeatCntBarSplitterSp; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x24
  __int64 v49; // x0
  __int64 v50; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserEventRaidEntity_o *v52; // x8
  int64_t v53; // x9
  __int64 v54; // x10
  __int64 v55; // d9
  __int64 klass; // d10
  float v57; // s8
  float v58; // s0
  int v59; // s1
  int v60; // s0
  int v61; // s2
  const MethodInfo *v62; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct UserEventRaidEntity_o *v67; // x8
  __int64 v68; // x22
  const MethodInfo *v69; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *lastBattleSpr; // x21
  const MethodInfo *v72; // x2
  const MethodInfo *v73; // x3
  UILabel_o *v74; // x21
  const MethodInfo *v75; // x2
  UnityEngine_Object_o *v76; // x21
  const MethodInfo *v77; // x2
  struct UserEventRaidEntity_o *v78; // x8
  float v79; // s0
  struct UserEventRaidEntity_o *v80; // x8
  const MethodInfo *v81; // x2
  UnityEngine_Object_o *v82; // x20
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x2
  __int64 v85; // x0
  __int64 v86; // x0
  bool *p_isRaidClear; // [xsp+0h] [xbp-90h]
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421882C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&UISprite___TypeInfo, v7);
    byte_421882C = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_89;
  if ( !Instance )
    goto LABEL_89;
  TotalEventRaidMaster__TryGetEntity(
    (TotalEventRaidMaster_o *)Instance,
    (TotalEventRaidEntity_o **)&methoda.name,
    (int32_t)this->fields.eventRaidEntity,
    HIDWORD(userEventRaidEntity->fields.userId),
    0LL);
  TitleInfoEventRaidBossComponent__SetBossIcon(
    this,
    (EventRaidEntity_o *)this->fields.userEventRaidEntity,
    BYTE2(this->fields.hpBarSplitters),
    v10);
  v12 = this->fields.userEventRaidEntity;
  if ( !v12 )
    goto LABEL_89;
  damage = v12[2].fields.damage;
  if ( !damage )
    goto LABEL_89;
  v14 = *(_DWORD *)(damage + 24);
  v15 = *(&this->fields.isLastBattleRelease + 4);
  v16 = v14 > 0;
  v17 = v16 && v15;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, v16 && v15, v11);
  if ( v17 )
  {
    p_isRaidClear = &this->fields.isRaidClear;
    if ( *(_QWORD *)&this->fields.isRaidClear )
    {
      v22 = 1;
    }
    else
    {
      v23 = (System_Int32_array **)sub_B0D8BC(UISprite___TypeInfo, (unsigned int)v14);
      *(_QWORD *)&this->fields.isRaidClear = v23;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.isRaidClear, v23, v24, v25, v26, v27, v28, v29);
      v22 = 0;
    }
    Instance = (DataManager_o *)GameObjectExtensions__GetParent(
                                  (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                  0LL);
    v30 = (UnityEngine_Component_o *)Instance;
    v31 = 4LL;
    do
    {
      v32 = v31 - 4;
      if ( (v22 & 1) == 0 )
      {
        v33 = *(_QWORD *)&this->fields.isRaidClear;
        defeatCntBarSplitterSp = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.defeatCntBarSplitterSp;
        if ( (_DWORD)v31 == 4 )
        {
          if ( !defeatCntBarSplitterSp )
            goto LABEL_89;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v33 )
            goto LABEL_89;
          v41 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B0D964(Instance, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
            if ( !Instance )
              goto LABEL_91;
          }
          if ( !*(_DWORD *)(v33 + 24) )
            goto LABEL_90;
          *(_QWORD *)(v33 + 32) = v41;
          sub_B0D840((BattleServantConfConponent_o *)(v33 + 32), v41, v35, v36, v37, v38, v39, v40);
        }
        else
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        defeatCntBarSplitterSp,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_89;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v33 )
            goto LABEL_89;
          v48 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B0D964(Instance, *(_QWORD *)(*(_QWORD *)v33 + 64LL));
            if ( !Instance )
            {
LABEL_91:
              v86 = sub_B0D99C(Instance);
              sub_B0D948(v86, 0LL);
            }
          }
          if ( v32 >= *(_DWORD *)(v33 + 24) )
            goto LABEL_90;
          v49 = v33 + 8LL * (int)v32;
          *(_QWORD *)(v49 + 32) = v48;
          sub_B0D840((BattleServantConfConponent_o *)(v49 + 32), v48, v42, v43, v44, v45, v46, v47);
          v50 = *(_QWORD *)p_isRaidClear;
          if ( !*(_QWORD *)p_isRaidClear )
            goto LABEL_89;
          if ( v32 >= *(_DWORD *)(v50 + 24) )
            goto LABEL_90;
          Instance = *(DataManager_o **)(v50 + 8LL * (int)v32 + 32);
          if ( !Instance )
            goto LABEL_89;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v30, 0LL);
        }
      }
      v52 = this->fields.userEventRaidEntity;
      if ( !v52 )
        goto LABEL_89;
      v53 = v52[2].fields.damage;
      if ( !v53 )
        goto LABEL_89;
      if ( v32 >= *(_DWORD *)(v53 + 24) )
        goto LABEL_90;
      v54 = *(_QWORD *)&this->fields.isRaidClear;
      if ( !v54 )
        goto LABEL_89;
      if ( v32 >= *(_DWORD *)(v54 + 24) )
      {
LABEL_90:
        v85 = sub_B0D9A8(Instance);
        sub_B0D948(v85, 0LL);
      }
      Instance = *(DataManager_o **)(v54 + 8 * v31);
      if ( !Instance )
        goto LABEL_89;
      v55 = *(_QWORD *)(v53 + 8 * v31);
      klass = (__int64)v52[1].klass;
      v57 = *((float *)&this->fields.useBarSlider + 1);
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_89;
      v58 = (double)v55 / (double)klass;
      v89.fields.x = -(float)(v57 * v58);
      v89.fields.y = 0.0;
      v89.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v89, 0LL);
    }
    while ( (int)++v31 - 4 < v14 );
  }
  v59 = 1024495761;
  v60 = 1052819649;
  v61 = 1024495761;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v18 - 3), v19, v20, v21, &methoda);
  Instance = *(DataManager_o **)&this->fields.restTimeUpdateSec;
  g = *((float *)&methoda.methodPointer + 1);
  r = *(float *)&methoda.methodPointer;
  a = *((float *)&methoda.invoker_method + 1);
  b = *(float *)&methoda.invoker_method;
  if ( Instance )
  {
    *(_QWORD *)&v90.fields.r = methoda.methodPointer;
    *(_QWORD *)&v90.fields.b = methoda.invoker_method;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v90, 0LL);
    r = TextEffectColor.fields.r;
    g = TextEffectColor.fields.g;
    b = TextEffectColor.fields.b;
    a = TextEffectColor.fields.a;
  }
  v67 = this->fields.userEventRaidEntity;
  if ( !v67 )
    goto LABEL_89;
  v68 = (__int64)v67[1].klass;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v62);
  if ( *(&this->fields.isLastBattleRelease + 4) )
  {
    lastBattleSpr = (UILabel_o *)this->fields.lastBattleSpr;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v69);
    if ( !lastBattleSpr )
      goto LABEL_89;
    UILabel__set_text(lastBattleSpr, (System_String_o *)Instance, 0LL);
    v92.fields.r = r;
    v92.fields.g = g;
    v92.fields.b = b;
    v92.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, (UILabel_o *)this->fields.lastBattleSpr, v92, v72);
  }
  Instance = *(DataManager_o **)&this->fields.eventId;
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v74 = *(UILabel_o **)&this->fields.eventId;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                  this,
                                  v68 - RaidBossTotalDamage,
                                  RaidBossTotalDamage,
                                  v73);
    if ( !v74 )
      goto LABEL_89;
    UILabel__set_text(v74, (System_String_o *)Instance, 0LL);
    v93.fields.r = r;
    v93.fields.g = g;
    v93.fields.b = b;
    v93.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.eventId, v93, v75);
  }
  v76 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
  {
    Instance = *(DataManager_o **)&this->fields.overwritePosX;
    if ( !Instance )
      goto LABEL_89;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Instance,
      *(&this->fields.isLastBattleRelease + 5),
      0LL);
    if ( *(&this->fields.isLastBattleRelease + 5) )
    {
      v78 = this->fields.userEventRaidEntity;
      if ( !v78 )
        goto LABEL_89;
      Instance = *(DataManager_o **)&this->fields.overwritePosX;
      if ( !Instance )
        goto LABEL_89;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v78->fields.damage, 0LL);
    }
    v94.fields.r = r;
    v94.fields.g = g;
    v94.fields.b = b;
    v94.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.overwritePosX, v94, v77);
  }
  Instance = (DataManager_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_89;
  v79 = 1.0 - (double)RaidBossTotalDamage / (double)v68;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v79, 0LL);
  if ( *(&this->fields.isLastBattleRelease + 5) )
  {
    Instance = (DataManager_o *)this->fields.userEventRaidEntity;
    if ( !Instance )
      goto LABEL_89;
    Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_76;
  }
  if ( !*(&this->fields.isLastBattleRelease + 4) )
    goto LABEL_76;
  if ( !BYTE2(this->fields.hpBarSplitters) )
  {
    v80 = this->fields.userEventRaidEntity;
    if ( !v80 )
      goto LABEL_89;
    if ( (__int64)v80[1].klass > RaidBossTotalDamage )
    {
LABEL_76:
      Instance = (DataManager_o *)this->fields.bossName;
      if ( Instance )
      {
        Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          goto LABEL_86;
        }
      }
LABEL_89:
      sub_B0D97C(Instance);
    }
  }
  Instance = (DataManager_o *)this->fields.bossName;
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v95.fields.r = r;
  v95.fields.g = g;
  v95.fields.b = b;
  v95.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.eventId, v95, v81);
  v82 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
  {
    v96.fields.r = r;
    v96.fields.g = g;
    v96.fields.b = b;
    v96.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.overwritePosX, v96, v83);
  }
LABEL_86:
  Instance = (DataManager_o *)this->fields.defeatCntFrame;
  if ( !Instance )
    goto LABEL_89;
  v97.fields.r = r;
  v97.fields.g = g;
  v97.fields.b = b;
  v97.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v97, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v84);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *defeatCntBarSplitterSp; // x0
  __int64 v6; // x21
  __int64 v7; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_421882E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isFlag);
    byte_421882E = 1;
  }
  defeatCntBarSplitterSp = (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp;
  if ( !defeatCntBarSplitterSp
    || (defeatCntBarSplitterSp = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitterSp, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B0D97C(defeatCntBarSplitterSp);
  }
  UnityEngine_GameObject__SetActive(defeatCntBarSplitterSp, isFlag, 0LL);
  v6 = *(_QWORD *)&this->fields.isRaidClear;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( (int)v7 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v7; ++i )
      {
        if ( i >= (unsigned int)v7 )
        {
          v10 = sub_B0D9A8(defeatCntBarSplitterSp);
          sub_B0D948(v10, 0LL);
        }
        v9 = *(UnityEngine_Object_o **)(v6 + 32 + 8 * i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        defeatCntBarSplitterSp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
        if ( ((unsigned __int8)defeatCntBarSplitterSp & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_18;
          defeatCntBarSplitterSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
          if ( !defeatCntBarSplitterSp )
            goto LABEL_18;
          UnityEngine_GameObject__SetActive(defeatCntBarSplitterSp, isFlag, 0LL);
        }
        LODWORD(v7) = *(_DWORD *)(v6 + 24);
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

  if ( (byte_421882B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, sprite);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v11);
    sub_B0D8A4(&StringLiteral_23723/*"{0}_{1}_{2}"*/, v12);
    byte_421882B = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v20 = eventId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v19 = iconId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v15 = System_String__Format_43850968((System_String_o *)StringLiteral_23723/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v13, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v15, 0LL) )
  {
LABEL_12:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_13;
    v18 = eventId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v17 = System_String__Format_43845440((System_String_o *)StringLiteral_23721/*"{0}_{1}"*/, (Il2CppObject *)prefix, v16, 0LL);
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
    sub_B0D97C(v4);
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
    sub_B0D97C(v4);
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
  if ( (byte_421882A & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, sprite);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v8);
    byte_421882A = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v9 = System_Int32__ToString((int32_t)&v11, 0LL);
  v10 = System_String__Concat_43852188(prefix, (System_String_o *)StringLiteral_15952/*"_"*/, v9, 0LL);
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
  int64_t Instance; // x0
  DataManager_o *v34; // x23
  EventRaidMaster_o *v35; // x21
  EventRaidEntity_o *Entity; // x0
  struct UserEventRaidEntity_o **p_userEventRaidEntity; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndDay; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  bool isRaidDefeatCount; // w0
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  const MethodInfo *v60; // x5
  int32_t v61; // w23
  TitleInfoEventRaidBossComponent_o *v62; // x0
  const MethodInfo *v63; // x4
  TitleInfoEventRaidBossComponent_o *v64; // x0
  const MethodInfo *v65; // x4
  TitleInfoEventRaidBossComponent_o *v66; // x0
  const MethodInfo *v67; // x4
  float v68; // s0
  struct UILabel_o *totalHpLabel; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **restTimeLabel; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  char v83; // w1
  UISprite_o *defeatCntBg; // x23
  float v85; // s0
  struct UILabel_o *totalDefeatCntLabel; // x1
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **defeatCntBarSliderWhite; // x1
  int32_t *p_eventId; // x23
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  void *monitor; // x24
  UnityEngine_Component_o *v102; // x8
  int64_t v103; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float RAIDBOSS_DEFEAT_COUNT_POS_X; // s0
  UnityEngine_GameObject_o *v106; // x23
  TitleInfoEventRaidBossComponent_c *v107; // x0
  EventRaidEntity_o *v108; // x8
  int32_t eventRaidEntity; // w1
  int32_t RaidGroupDeadQuestId; // w0
  const MethodInfo *v111; // x1
  int32_t v112; // w20

  if ( (byte_4218828 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, terminalAtlas);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v17);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18);
    sub_B0D8A4(&NetworkManager_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v21);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v22);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v23);
    sub_B0D8A4(&StringLiteral_18606/*"event_raid_defeat_count_frame"*/, v24);
    sub_B0D8A4(&StringLiteral_18655/*"event_superboss_hp_white"*/, v25);
    sub_B0D8A4(&StringLiteral_18611/*"event_raid_lastbattle"*/, v26);
    sub_B0D8A4(&StringLiteral_18608/*"event_raid_hp_back"*/, v27);
    sub_B0D8A4(&StringLiteral_18607/*"event_raid_defeat_count_front"*/, v28);
    sub_B0D8A4(&StringLiteral_18609/*"event_raid_hp_frame"*/, v29);
    sub_B0D8A4(&StringLiteral_18615/*"event_raid_split_line"*/, v30);
    sub_B0D8A4(&StringLiteral_18605/*"event_raid_defeat_count_back"*/, v31);
    sub_B0D8A4(&StringLiteral_18610/*"event_raid_hp_front"*/, v32);
    byte_4218828 = 1;
  }
  LODWORD(this->fields.eventRaidEntity) = eventId;
  BYTE1(this->fields.HPfrom) = 0;
  LODWORD(this->fields.HPto) = warId;
  *((_WORD *)&this->fields.isLastBattleRelease + 1) = 256;
  *(&this->fields.isLastBattleRelease + 5) = isJumbleRaid;
  LOBYTE(this->fields.hpBarSplitters) = isSingleRaid;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v34 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v35 = (EventRaidMaster_o *)Instance;
  if ( (day & 0x80000000) != 0 )
  {
    if ( !Instance )
      goto LABEL_68;
    day = EventRaidMaster__GetCurrentDay((EventRaidMaster_o *)Instance, (int32_t)this->fields.eventRaidEntity, 0LL);
  }
  else if ( !Instance )
  {
    goto LABEL_68;
  }
  Entity = EventRaidMaster__GetEntity(v35, (int32_t)this->fields.eventRaidEntity, day, 0LL);
  p_userEventRaidEntity = &this->fields.userEventRaidEntity;
  this->fields.userEventRaidEntity = (struct UserEventRaidEntity_o *)Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.userEventRaidEntity,
    (System_Int32_array **)Entity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
  {
    BYTE1(this->fields.hpBarSplitters) = userEventRaidEntity[2].fields.userId > 0;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v34,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = (struct EventBossStatusUiEntity_o *)UserEventRaidMaster__getEntityFromEventIdAndDay(
                                                                      (UserEventRaidMaster_o *)Instance,
                                                                      (int32_t)this->fields.eventRaidEntity,
                                                                      day,
                                                                      0LL);
      this->fields.eventBossStatusUiEntity = EntityFromEventIdAndDay;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
        (System_Int32_array **)EntityFromEventIdAndDay,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            v34,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              (int32_t)this->fields.eventRaidEntity,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
          *(&this->fields.isLastBattleRelease + 4) = isRaidDefeatCount;
          LOBYTE(this->fields.hpBarParent) = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v34,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                 (EventBossStatusUiMaster_o *)Instance,
                                                                 (int32_t)this->fields.eventRaidEntity,
                                                                 day,
                                                                 0LL);
            *(_QWORD *)&this->fields.restTimeUpdateSec = EntityFromEventIdAndIndex;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.restTimeUpdateSec,
              EntityFromEventIdAndIndex,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
            Instance = *(_QWORD *)&this->fields.restTimeUpdateSec;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0LL);
              v61 = Instance;
              if ( *(_QWORD *)&this->fields.restTimeUpdateSec )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(
                             *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec,
                             0LL);
            }
            else
            {
              v61 = -1;
            }
            if ( *p_userEventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                (UISprite_o *)this->fields.bossName,
                (System_String_o *)StringLiteral_18611/*"event_raid_lastbattle"*/,
                (*p_userEventRaidEntity)->fields.userId,
                (int32_t)(*p_userEventRaidEntity)[1].monitor,
                v60);
              if ( *(&this->fields.isLastBattleRelease + 4) && !BYTE1(this->fields.hpBarSplitters) )
              {
                defeatCntBg = this->fields.defeatCntBg;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(defeatCntBg, (System_String_o *)StringLiteral_18606/*"event_raid_defeat_count_frame"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_18605/*"event_raid_defeat_count_back"*/, 0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSlider,
                  (System_String_o *)StringLiteral_18607/*"event_raid_defeat_count_front"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSplitter,
                  (System_String_o *)StringLiteral_18655/*"event_superboss_hp_white"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.modeName,
                  (System_String_o *)StringLiteral_18615/*"event_raid_split_line"*/,
                  0LL);
                Instance = (int64_t)this->fields.defeatCntBarSlider;
                if ( !Instance )
                  goto LABEL_68;
                v85 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                *((float *)&this->fields.useBarSlider + 1) = v85;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalDefeatCntLabel,
                  v87,
                  v88,
                  v89,
                  v90,
                  v91,
                  v92);
                defeatCntBarSliderWhite = (System_Int32_array **)this->fields.defeatCntBarSliderWhite;
                p_eventId = &this->fields.eventId;
                *(_QWORD *)&this->fields.eventId = defeatCntBarSliderWhite;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  defeatCntBarSliderWhite,
                  v95,
                  v96,
                  v97,
                  v98,
                  v99,
                  v100);
                Instance = (int64_t)this->fields.lastBattleSpr;
                if ( !Instance )
                  goto LABEL_68;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                Instance = (int64_t)this->fields.raidBossIconSp;
                if ( !Instance )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                if ( !*p_userEventRaidEntity )
                  goto LABEL_68;
                monitor = (*p_userEventRaidEntity)[2].monitor;
                if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                }
                Instance = NetworkManager__getTime(0LL);
                v102 = *(UnityEngine_Component_o **)p_eventId;
                if ( !*(_QWORD *)p_eventId )
                  goto LABEL_68;
                v103 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v102, 0LL);
                if ( (__int64)monitor > v103 || *(&this->fields.isLastBattleRelease + 5) )
                {
                  v83 = 1;
                  if ( !Instance )
                    goto LABEL_68;
                }
                else
                {
                  v83 = LOBYTE(this->fields.hpBarSplitters) != 0;
                  if ( !Instance )
                    goto LABEL_68;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v62,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_18609/*"event_raid_hp_frame"*/,
                  v61,
                  v63);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v64,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_18608/*"event_raid_hp_back"*/,
                  v61,
                  v65);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v66,
                  (UISprite_o *)this->fields.hpBarSlider,
                  (System_String_o *)StringLiteral_18610/*"event_raid_hp_front"*/,
                  v61,
                  v67);
                Instance = (int64_t)this->fields.hpBarSlider;
                if ( !Instance )
                  goto LABEL_68;
                v68 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                totalHpLabel = this->fields.totalHpLabel;
                *((float *)&this->fields.useBarSlider + 1) = v68;
                this->fields.useTotalLabel = totalHpLabel;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalHpLabel,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74,
                  v75);
                restTimeLabel = (System_Int32_array **)this->fields.restTimeLabel;
                *(_QWORD *)&this->fields.eventId = restTimeLabel;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  restTimeLabel,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82);
                Instance = (int64_t)this->fields.lastBattleSpr;
                if ( !Instance )
                  goto LABEL_68;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = (int64_t)this->fields.raidBossIconSp;
                if ( !Instance )
                  goto LABEL_68;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = (int64_t)this->fields.defeatCntBarParent;
                if ( !Instance )
                  goto LABEL_68;
                v83 = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v83, 0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              RAIDBOSS_DEFEAT_COUNT_POS_X = *(float *)&this->fields.useBarSlider;
              v106 = gameObject;
              if ( RAIDBOSS_DEFEAT_COUNT_POS_X == 0.0 )
              {
                v107 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v107 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                RAIDBOSS_DEFEAT_COUNT_POS_X = (float)v107->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v106, RAIDBOSS_DEFEAT_COUNT_POS_X, 0LL);
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
                if ( Instance )
                {
                  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = UnityEngine_Transform__get_localPosition(
                                                                                 (UnityEngine_Transform_o *)Instance,
                                                                                 0LL);
                  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                  }
                  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( Instance )
                  {
                    Instance = clsQuestCheck__IsEncountRaidBoss(
                                 (clsQuestCheck_o *)Instance,
                                 (int32_t)this->fields.eventRaidEntity,
                                 day,
                                 0LL);
                    v108 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
                    *(&this->fields.isLastBattleRelease + 2) = Instance & 1;
                    if ( v108 )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid(v108, 0LL);
                      eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_userEventRaidEntity )
                          goto LABEL_68;
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                                 v35,
                                                 eventRaidEntity,
                                                 (*p_userEventRaidEntity)->fields.eventId,
                                                 0LL);
                      }
                      else
                      {
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v35, eventRaidEntity, day, 0LL);
                      }
                      v112 = RaidGroupDeadQuestId;
                      if ( RaidGroupDeadQuestId < 1 )
                        goto LABEL_66;
                      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                      }
                      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                      if ( Instance )
                      {
                        BYTE2(this->fields.hpBarSplitters) = clsQuestCheck__IsQuestRelease(
                                                               (clsQuestCheck_o *)Instance,
                                                               v112,
                                                               -1,
                                                               0,
                                                               0LL);
LABEL_66:
                        TitleInfoEventRaidBossComponent__SetDisp(this, v111);
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
    sub_B0D97C(Instance);
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
  sub_B0D840(
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
  sub_B0D840(
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
  System_String_o *Time; // x0
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
  unsigned __int64 v25; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v26; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v27; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_421882F & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, isForce);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_13453/*"TIME_REST_RAID"*/, v8);
    byte_421882F = 1;
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
      Time = (System_String_o *)NetworkManager__getTime(0LL);
      userEventRaidEntity = this->fields.userEventRaidEntity;
      if ( !userEventRaidEntity )
        goto LABEL_24;
      v16 = userEventRaidEntity[2].monitor - (void *)Time;
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
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13453/*"TIME_REST_RAID"*/, 0LL);
      v27 = v19;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v27);
      v26 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
      v25 = v17;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25);
      Time = System_String__Format_43850968(v21, v22, v23, v24, 0LL);
      if ( !defeatCntFrame )
LABEL_24:
        sub_B0D97C(Time);
      UILabel__set_text(defeatCntFrame, Time, 0LL);
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
  UnityEngine_Transform_o *v4; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoEventRaidBossComponent_c *v8; // x0
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4218831 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidBossComponent_TypeInfo, method);
    byte_4218831 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B0D97C(gameObject);
  }
  v4 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v8->static_fields;
  v11.fields.x = x + static_fields[6];
  v11.fields.y = y + static_fields[7];
  v11.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v4, v11, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42125A2 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventRaidBossComponent___c_TypeInfo, v1);
    byte_42125A2 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TitleInfoEventRaidBossComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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