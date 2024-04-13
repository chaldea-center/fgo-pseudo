void __fastcall TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
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
  struct TitleInfoEventRaidBossComponent_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TitleInfoEventRaidBossComponent_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  TitleInfoEventRaidBossComponent_c *v35; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v36; // x9

  if ( (byte_42ECC22 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21971/*"raid_boss_icon_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_14616/*"TitleInfoEventRaidBossEffect_Dead"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21972/*"raid_boss_icon_last_"*/, v14, v15, v16);
    byte_42ECC22 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_21971/*"raid_boss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21971/*"raid_boss_icon_"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_21972/*"raid_boss_icon_last_"*/;
  v19->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_21972/*"raid_boss_icon_last_"*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v19->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_14616/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v27->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14616/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->RAIDBOSS_CLEAR_EFFECT_PREFAB, v28, v29, v30, v31, v32, v33, v34);
  v35 = TitleInfoEventRaidBossComponent_TypeInfo;
  v36 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v36->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v36->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v35->static_fields->REST_TIME_UPDATE_INTERVAL_SEC = 1.0;
  v35->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X = 226;
  v35->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v35->static_fields->ANIM_DURATION_HP_CUT = 0.0;
  v35->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v35->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v35->static_fields->CLEAR_END_CALLBACK_DELAY = 0.5;
  v35->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID = 1.5;
  v35->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TitleInfoEventRaidBossComponent_c *v11; // x0
  float HPto; // w21
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  BalanceConfig_c *v14; // x0
  TitleInfoEventRaidBossComponent_c *v15; // x0

  if ( (byte_42ECC1C & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10102/*"OnEndAnimation"*/, v8, v9, v10);
    byte_42ECC1C = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  HPto = this->fields.HPto;
  CLEAR_END_CALLBACK_DELAY_NORMAL = v11->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( LODWORD(HPto) == v14->static_fields->FesWarId )
  {
    v15 = TitleInfoEventRaidBossComponent_TypeInfo;
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
      v15 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    CLEAR_END_CALLBACK_DELAY_NORMAL = v15->static_fields->CLEAR_END_CALLBACK_DELAY;
  }
  else if ( *(&this->fields.isLastBattleRelease + 5) )
  {
    v15 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_17:
      CLEAR_END_CALLBACK_DELAY_NORMAL = v15->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID;
      goto LABEL_22;
    }
LABEL_15:
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    goto LABEL_17;
  }
LABEL_22:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10102/*"OnEndAnimation"*/,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0LL);
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
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
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  __int64 v25; // x9
  System_Collections_Generic_IEnumerable_TSource__o *damage; // x20
  System_Func_long__bool__o *v27; // x22
  struct UserEventRaidEntity_o *v28; // x8
  __int64 v29; // x8
  System_String_o **v30; // x8
  __int64 v32; // x0

  if ( (byte_42ECC1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_long___, totalDamage, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_long__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_long__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__, v12, v13, v14);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42ECC1E = 1;
  }
  v21 = (TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *)sub_B5D694(TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo);
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  v21->fields.totalDamage = totalDamage;
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_13;
  v25 = *(_QWORD *)&userEventRaidEntity[2].fields.eventId;
  if ( !v25 )
    goto LABEL_13;
  if ( !*(_QWORD *)(v25 + 24) )
  {
    v30 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v30;
  }
  damage = (System_Collections_Generic_IEnumerable_TSource__o *)userEventRaidEntity[2].fields.damage;
  v27 = (System_Func_long__bool__o *)sub_B5D694(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v27,
    (Il2CppObject *)v21,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__,
    (const MethodInfo_2C2C440 *)Method_System_Func_long__bool___ctor__);
  v22 = System_Linq_Enumerable__Count_long_(
          damage,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1CA870C *)Method_System_Linq_Enumerable_Count_long___);
  v28 = this->fields.userEventRaidEntity;
  if ( !v28 || (v29 = *(_QWORD *)&v28[2].fields.eventId) == 0 )
LABEL_13:
    sub_B5D69C(v22, v23);
  if ( (unsigned int)v22 >= *(_DWORD *)(v29 + 24) )
  {
    v32 = sub_B5D6C8(v22);
    sub_B5D668(v32, 0LL);
  }
  v30 = (System_String_o **)(v29 + 8LL * (int)v22 + 32);
  return *v30;
}


UnityEngine_AnimationClip_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
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
  Il2CppObject *v18; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *v20; // x21
  struct UserEventRaidEntity_o *v21; // x8
  Il2CppObject *v22; // x22
  Il2CppObject *v23; // x0
  UnityEngine_Object_o *Clip; // x21
  struct UserEventRaidEntity_o *v25; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  TitleInfoEventRaidBossComponent_c *v29; // x0
  int v31; // [xsp+4h] [xbp-3Ch] BYREF
  int monitor; // [xsp+8h] [xbp-38h] BYREF
  int userId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ECC21 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)animation, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23957/*"{0}_{1}_{2}"*/, v15, v16, v17);
    byte_42ECC21 = 1;
  }
  v18 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v18 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  v20 = (Il2CppObject *)*((_QWORD *)v18[11].monitor + 2);
  userId = userEventRaidEntity->fields.userId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v21 = this->fields.userEventRaidEntity;
  if ( !v21 )
    goto LABEL_26;
  v22 = v18;
  monitor = (int)v21[1].monitor;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v18 = (Il2CppObject *)System_String__Format_44578852((System_String_o *)StringLiteral_23957/*"{0}_{1}_{2}"*/, v20, v22, v23, 0LL);
  if ( !animation )
    goto LABEL_26;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v18, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
  {
    v18 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v25 = this->fields.userEventRaidEntity;
    if ( v25 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v31 = v25->fields.userId;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v28 = System_String__Format_44573324(
              (System_String_o *)StringLiteral_23955/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v27,
              0LL);
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v28, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
      {
        v29 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v29 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return UnityEngine_Animation__GetClip(animation, v29->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0LL);
      }
      return (UnityEngine_AnimationClip_o *)Clip;
    }
LABEL_26:
    sub_B5D69C(v18, animation);
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  Il2CppObject *v21; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *v23; // x21
  struct UserEventRaidEntity_o *v24; // x8
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  struct UserEventRaidEntity_o *v28; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  TitleInfoEventRaidBossComponent_c *v32; // x0
  int v34; // [xsp+Ch] [xbp-44h] BYREF
  int monitor; // [xsp+18h] [xbp-38h] BYREF
  int userId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42ECC20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)mapAssetData, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23957/*"{0}_{1}_{2}"*/, v18, v19, v20);
    byte_42ECC20 = 1;
  }
  v21 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v21 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  v23 = (Il2CppObject *)*((_QWORD *)v21[11].monitor + 2);
  userId = userEventRaidEntity->fields.userId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v24 = this->fields.userEventRaidEntity;
  if ( !v24 )
    goto LABEL_26;
  v25 = v21;
  monitor = (int)v24[1].monitor;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v21 = (Il2CppObject *)System_String__Format_44578852((System_String_o *)StringLiteral_23957/*"{0}_{1}_{2}"*/, v23, v25, v26, 0LL);
  if ( !mapAssetData )
    goto LABEL_26;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             (System_String_o *)v21,
                                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    v21 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v28 = this->fields.userEventRaidEntity;
    if ( v28 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v34 = v28->fields.userId;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v31 = System_String__Format_44573324(
              (System_String_o *)StringLiteral_23955/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v30,
              0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 mapAssetData,
                                                                 v31,
                                                                 (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v32 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v32 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             mapAssetData,
                                             v32->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                             (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_26:
    sub_B5D69C(v21, mapAssetData);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t result; // x0
  __int64 v9; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  bool v11; // w8
  struct UserEventRaidEntity_o *v12; // x8
  int64_t klass; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ECC12 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_TotalEventRaidMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42ECC12 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity || !result )
    goto LABEL_15;
  v11 = TotalEventRaidMaster__TryGetEntity(
          (TotalEventRaidMaster_o *)result,
          &entity,
          (int32_t)this->fields.eventRaidEntity,
          HIDWORD(userEventRaidEntity->fields.userId),
          0LL);
  result = 0LL;
  if ( !v11 )
    return result;
  v12 = this->fields.userEventRaidEntity;
  if ( !v12 || !entity )
LABEL_15:
    sub_B5D69C(result, v9);
  klass = (int64_t)v12[1].klass;
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  EventBossStatusUiEntity_o *v28; // x0
  System_String_o *CountFormat; // x22
  System_String_o *v30; // x21
  System_Text_StringBuilder_o *v31; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x21
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v38; // x19
  Il2CppObject *NumberFormat_34103284; // x1
  System_String_o *v40; // x0
  System_String_o *v41; // x19
  System_String_o *v42; // x19
  System_String_o *v43; // x19
  int64_t v44; // [xsp+0h] [xbp-30h] BYREF
  int64_t v45; // [xsp+8h] [xbp-28h] BYREF

  v45 = totalHp;
  if ( (byte_42ECC1F & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, totalHp, totalDamage, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_5764/*"EVENT_RAID_REST_COUNT_AFTER"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_5765/*"EVENT_RAID_REST_COUNT_BEFORE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_5701/*"EVENT_DEFEAT_COUNT_TXT"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_13579/*"TITLE_INFO_RAID_TOTALHP"*/, v25, v26, v27);
    byte_42ECC1F = 1;
  }
  v28 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  if ( v28 )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(v28, 0LL);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0LL) )
    {
      v38 = System_Int64__ToString((int64_t)&v45, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      NumberFormat_34103284 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34103284(v38, 0LL);
      v40 = CountFormat;
      return System_String__Format(v40, NumberFormat_34103284, 0LL);
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
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5701/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
      v44 = totalDamage;
      NumberFormat_34103284 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44);
      v40 = v43;
    }
    else
    {
      v41 = System_Int64__ToString((int64_t)&v45, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v42 = LocalizationManager__GetNumberFormat_34103284(v41, 0LL);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13579/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
      NumberFormat_34103284 = (Il2CppObject *)v42;
    }
    return System_String__Format(v40, NumberFormat_34103284, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
  v31 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947916(v31, v30, 0LL);
  if ( !v31 )
    sub_B5D69C(v32, v33);
  System_Text_StringBuilder__Append_42953744(v31, (System_String_o *)StringLiteral_81/*" "*/, 0LL);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5764/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
  v44 = totalHp;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44);
  v36 = System_String__Format(v34, v35, 0LL);
  System_Text_StringBuilder__Append_42953744(v31, v36, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                              v31,
                              v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
    sub_B5D69C(0LL, method);
  return EventRaidEntity__IsJumbleSingleRaid(userEventRaidEntity, 0LL) && BYTE2(this->fields.hpBarSplitters) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t raidDeadQuestId,
        bool isJumbleSingleRaid,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  clsQuestCheck_o *userEventRaidEntity; // x0
  struct UserEventRaidEntity_o *v14; // x8
  int32_t eventRaidEntity; // w19
  int32_t userId_high; // w20

  if ( (byte_42ECC1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, raidDeadQuestId, isJumbleSingleRaid, method);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42ECC1A = 1;
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
    userEventRaidEntity = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( userEventRaidEntity )
      return clsQuestCheck__IsQuestClear(userEventRaidEntity, raidDeadQuestId, 0, 0LL)
          || *(&this->fields.isLastBattleRelease + 5);
LABEL_24:
    sub_B5D69C(userEventRaidEntity, *(_QWORD *)&raidDeadQuestId);
  }
  userEventRaidEntity = (clsQuestCheck_o *)this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_24;
  userEventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated(
                                             (EventRaidEntity_o *)userEventRaidEntity,
                                             0LL);
  if ( ((unsigned __int8)userEventRaidEntity & 1) == 0 )
    return 0;
  v14 = this->fields.userEventRaidEntity;
  if ( !v14 )
    goto LABEL_24;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  userId_high = HIDWORD(v14->fields.userId);
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
    sub_B5D69C(this, eventId);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Action_o *splitHpEffect; // x20
  __int64 v16; // x1
  int v17; // w2
  __int64 v18; // x3
  _BYTE *hpFrame; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t eventRaidEntity; // w20
  int32_t userId_high; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventRaidBossComponent_c *v24; // x8

  if ( (byte_42ECC1D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UITweener_Begin_TweenAlpha___, v12, v13, v14);
    byte_42ECC1D = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
    byte_42E5CEC = 1;
  }
  hpFrame = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    hpFrame = TerminalPramsManager_TypeInfo;
  }
  if ( !*(_QWORD *)(*((_QWORD *)hpFrame + 23) + 432LL) )
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
  v24 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v24 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  hpFrame = UITweener__Begin_TweenWidth_(
              gameObject,
              v24->static_fields->ANIM_DURATION_SPLIT_ALPHA,
              (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpFrame )
LABEL_26:
    sub_B5D69C(hpFrame, v16);
  *((_DWORD *)hpFrame + 6) = 1;
  *((_QWORD *)hpFrame + 15) = 1065353216LL;
}


void __fastcall TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  char *Child; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x20
  TitleInfoEventRaidBossComponent_c *v15; // x8
  char *v16; // x20
  float32x2_t *static_fields; // x8
  float v18; // s1
  int animEndCall; // w9
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42ECC17 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UITweener_Begin_TweenPosition___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_10805/*"PlayHpNameAlpha"*/, v8, v9, v10);
    byte_42ECC17 = 1;
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
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v15 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  Child = (char *)UITweener__Begin_TweenWidth_(
                    v14,
                    v15->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
                    (const MethodInfo_1E72118 *)Method_UITweener_Begin_TweenPosition___);
  if ( !Child )
LABEL_13:
    sub_B5D69C(Child, v13);
  v16 = Child;
  static_fields = (float32x2_t *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v18 = *(float *)&this->fields.animEndCall + static_fields[4].n64_f32[0];
  *((float32x2_t *)Child + 15) = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *((float *)Child + 32) = v18;
  animEndCall = (int)this->fields.animEndCall;
  *(_QWORD *)(Child + 132) = *(_QWORD *)&this->fields.originPos.fields.z;
  *((_DWORD *)Child + 35) = animEndCall;
  *((_DWORD *)Child + 6) = 2;
  v20 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v16 + 9) = v20;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 72), v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Int32_array **)StringLiteral_10805/*"PlayHpNameAlpha"*/;
  *((_QWORD *)v16 + 10) = StringLiteral_10805/*"PlayHpNameAlpha"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 80), v27, v28, v29, v30, v31, v32, v33);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpCut(
        TitleInfoEventRaidBossComponent_o *this,
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
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x20
  TitleInfoEventRaidBossComponent_c *v22; // x8
  TitleInfoEventRaidBossComponent___c_c *v23; // x0
  float ANIM_DURATION_HP_CUT; // s8
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__87_0; // x21
  Il2CppObject *v27; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1

  if ( (byte_42ECC18 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6, v7);
    sub_B5D5C4(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, v8, v9, v10);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, v14, v15, v16);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent___c_TypeInfo, v17, v18, v19);
    byte_42ECC18 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v22 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v22 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v23 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v22->static_fields->ANIM_DURATION_HP_CUT;
  if ( (BYTE3(TitleInfoEventRaidBossComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo);
    v23 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__87_0 = static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__87_0, v27, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, 0LL);
    v28 = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    v28->__9__87_0 = _9__87_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !Component_UIWidget )
    sub_B5D69C(v36, v37);
  EasingObject__Play((EasingObject_o *)Component_UIWidget, ANIM_DURATION_HP_CUT, _9__87_0, v35, 0.0, 0, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpDeletion(
        TitleInfoEventRaidBossComponent_o *this,
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
  DataManager_o *Instance; // x0
  __int64 eventRaidEntity_low; // x1
  EventRaidMaster_o *v28; // x20
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t RaidGroupDeadQuestId; // w0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t v32; // w20
  __int64 v33; // x22
  const MethodInfo *v34; // x3
  int64_t datalist; // x2
  struct UserEventRaidEntity_o *v36; // x8
  UILabel_o *v37; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_GameObject_o *v42; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v43; // x20
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v45; // x1
  System_Action_o *v46; // x21
  System_Action_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_42ECC19 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, v20, v21, v22);
    sub_B5D5C4(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__, v23, v24, v25);
    byte_42ECC19 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.userEventRaidEntity )
    goto LABEL_44;
  v28 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(
                                (EventRaidEntity_o *)this->fields.userEventRaidEntity,
                                0LL);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_44;
  eventRaidEntity_low = LODWORD(this->fields.eventRaidEntity);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v28 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                             v28,
                             eventRaidEntity_low,
                             userEventRaidEntity->fields.eventId,
                             0LL);
  }
  else
  {
    if ( !v28 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                             v28,
                             eventRaidEntity_low,
                             HIDWORD(userEventRaidEntity->fields.userId),
                             0LL);
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v32 = RaidGroupDeadQuestId;
  v33 = eventBossStatusUiEntity ? -(__int64)eventBossStatusUiEntity[1].klass : 0LL;
  Instance = (DataManager_o *)this->fields.userEventRaidEntity;
  if ( !Instance
    || ((Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0LL)) == 0LL
      ? (datalist = 0LL)
      : (datalist = (int64_t)Instance->fields.datalist),
        (v36 = this->fields.userEventRaidEntity) == 0LL
     || (v37 = *(UILabel_o **)&this->fields.eventId,
         Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                       this,
                                       ((__int64)v36[1].klass + v33 - datalist) & ~(((__int64)v36[1].klass
                                                                                   + v33
                                                                                   - datalist) >> 63),
                                       datalist,
                                       v34),
         !v37)
     || (UILabel__set_text(v37, (System_String_o *)Instance, 0LL),
         (Instance = (DataManager_o *)this->fields.userEventRaidEntity) == 0LL)) )
  {
LABEL_44:
    sub_B5D69C(Instance, eventRaidEntity_low);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v32, IsJumbleSingleRaid, v39) )
  {
    klass = (UnityEngine_Object_o *)this[1].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v42 = 0LL;
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v43 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v42 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v43,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v42, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v42, 0LL);
    }
    *(&this->fields.isLastBattleRelease + 2) = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_44;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v42,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v46 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v46,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v46,
          0LL);
        v47 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v47, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v47;
        sub_B5D560(
          (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
          (System_Int32_array **)v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        return;
      }
      goto LABEL_44;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v45);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v40);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UISprite_o *hpFrame; // x21
  void *v11; // x0
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v13; // x0
  System_String_o *v14; // x22
  UISprite_o *v15; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x20

  if ( (byte_42ECC0E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventRaidEnt, isLastBattle, method);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v7, v8, v9);
    byte_42ECC0E = 1;
  }
  if ( isLastBattle )
  {
    hpFrame = this->fields.hpFrame;
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    if ( !eventRaidEnt )
      goto LABEL_23;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v13 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
    v14 = System_String__Concat_44577788(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v13, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI(hpFrame, v14, 0LL) )
      goto LABEL_20;
  }
  v15 = this->fields.hpFrame;
  v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
  }
  if ( !eventRaidEnt )
    goto LABEL_23;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v17 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
  v18 = System_String__Concat_44577788(RAIDBOSS_ICON_SPNAME_PREFIX, v17, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v15, v18, 0LL) )
  {
LABEL_20:
    v11 = this->fields.hpFrame;
    if ( v11 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v11 + 840LL))(v11, *(_QWORD *)(*(_QWORD *)v11 + 848LL));
      return;
    }
LABEL_23:
    sub_B5D69C(v11, eventRaidEnt);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetClearAlpha(
        TitleInfoEventRaidBossComponent_o *this,
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
  TitleInfoEventRaidBossComponent_c *v17; // x0
  float HPto; // w20
  float CLEAR_CALLBACK_DELAY; // s8
  BalanceConfig_c *v20; // x0
  UnityEngine_Object_o *klass; // x20
  __int64 v22; // x1
  UnityEngine_Animation_o *Component_srcLineSprite; // x21
  TitleInfoEventRaidBossComponent_c *v24; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v28; // x0

  if ( (byte_42ECC1B & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5419/*"DoClearCallback"*/, v14, v15, v16);
    byte_42ECC1B = 1;
  }
  v17 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v17 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  HPto = this->fields.HPto;
  CLEAR_CALLBACK_DELAY = v17->static_fields->CLEAR_CALLBACK_DELAY;
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( LODWORD(HPto) != v20->static_fields->FesWarId && !*(&this->fields.isLastBattleRelease + 5) )
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
      v24 = this[1].klass;
      if ( !v24 )
        goto LABEL_33;
      Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v24,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
                                                    v25);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (TitleInfoEventRaidBossComponent_c *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0LL, 0LL);
    length = 0.0;
    if ( ((unsigned __int8)v24 & 1) == 0 )
      goto LABEL_28;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0LL);
LABEL_28:
      v28 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v28 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = UnityEngine_Mathf__Max(
                               0.0,
                               length - v28->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL,
                               0LL);
      goto LABEL_32;
    }
LABEL_33:
    sub_B5D69C(v24, v22);
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5419/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  __int64 v19; // x20
  int64_t totalDamage; // x21
  struct UserEventRaidEntity_o *v21; // x8
  float v22; // s0
  float v23; // s0
  struct UserEventRaidEntity_o *v24; // x8
  float v25; // s0
  float v26; // s0
  struct UserEventRaidEntity_o *v27; // x8
  int64_t damage; // x11
  int v29; // w10
  __int64 v30; // x9
  int64_t v31; // x11
  __int64 v32; // x12
  __int64 klass; // d0
  int v34; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECC15 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, (_DWORD)onClearCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42ECC15 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.splitHpEffect,
    (System_Int32_array **)onClearCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v19 = eventBossStatusUiEntity ? (__int64)eventBossStatusUiEntity[1].klass : 0LL;
  if ( entity )
  {
    totalDamage = entity->fields.totalDamage;
    v19 += totalDamage;
  }
  else
  {
    totalDamage = 0LL;
  }
  v21 = this->fields.userEventRaidEntity;
  if ( !v21 )
    goto LABEL_36;
  v22 = 1.0 - (double)totalDamage / (double)(__int64)v21[1].klass;
  v23 = UnityEngine_Mathf__Clamp01(v22, 0LL);
  v24 = this->fields.userEventRaidEntity;
  this->fields.HPsplitPoint = v23;
  if ( !v24 )
    goto LABEL_36;
  v25 = 1.0 - (double)v19 / (double)(__int64)v24[1].klass;
  v26 = UnityEngine_Mathf__Clamp01(v25, 0LL);
  v27 = this->fields.userEventRaidEntity;
  *(float *)&this->fields.HPsplitNo = v26;
  *(_QWORD *)&this->fields.originPos.fields.x = -1082130432LL;
  if ( !v27 )
    goto LABEL_36;
  damage = v27[2].fields.damage;
  if ( !damage )
    goto LABEL_36;
  v29 = *(_DWORD *)(damage + 24);
  if ( v29 >= 1 )
  {
    v30 = 0LL;
    v31 = damage + 32;
    while ( 1 )
    {
      v32 = *(_QWORD *)(v31 + 8 * v30);
      if ( v32 > totalDamage && v32 <= v19 )
        break;
      if ( (int)++v30 >= v29 )
        goto LABEL_23;
    }
    klass = (__int64)v27[1].klass;
    LODWORD(this->fields.originPos.fields.y) = v30;
    *(float *)&klass = 1.0 - (double)v32 / (double)klass;
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
  v34 = *((unsigned __int8 *)&this->fields.isLastBattleRelease + 5);
  *(UnityEngine_Vector3_o *)&this->fields.originPos.fields.z = localPosition;
  if ( v34 || LOBYTE(this->fields.hpBarSplitters) )
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
    sub_B5D69C(Instance, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetDisp(
        TitleInfoEventRaidBossComponent_o *this,
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
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  struct UserEventRaidEntity_o *v25; // x8
  int64_t damage; // x8
  int v27; // w20
  _BOOL4 v28; // w8
  _BOOL4 v29; // w9
  int v30; // w21
  int v31; // s3
  float v32; // s4
  float v33; // s5
  float v34; // s6
  char v35; // w25
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Component_o *v43; // x22
  __int64 v44; // x26
  unsigned int v45; // w28
  __int64 v46; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *defeatCntBarSplitterSp; // x24
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x24
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x24
  __int64 v62; // x0
  __int64 v63; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserEventRaidEntity_o *v65; // x8
  int64_t v66; // x9
  __int64 v67; // x10
  __int64 v68; // d9
  __int64 klass; // d10
  float v70; // s8
  float v71; // s0
  int v72; // s1
  int v73; // s0
  int v74; // s2
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct UserEventRaidEntity_o *v79; // x8
  __int64 v80; // x22
  const MethodInfo *v81; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *lastBattleSpr; // x21
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x3
  UILabel_o *v86; // x21
  const MethodInfo *v87; // x2
  UnityEngine_Object_o *v88; // x21
  const MethodInfo *v89; // x2
  struct UserEventRaidEntity_o *v90; // x8
  float v91; // s0
  struct UserEventRaidEntity_o *v92; // x8
  const MethodInfo *v93; // x2
  UnityEngine_Object_o *v94; // x20
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x2
  __int64 v97; // x0
  __int64 v98; // x0
  bool *p_isRaidClear; // [xsp+0h] [xbp-90h]
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42ECC11 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TotalEventRaidMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&UISprite___TypeInfo, v17, v18, v19);
    byte_42ECC11 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
    v23);
  v25 = this->fields.userEventRaidEntity;
  if ( !v25 )
    goto LABEL_89;
  damage = v25[2].fields.damage;
  if ( !damage )
    goto LABEL_89;
  v27 = *(_DWORD *)(damage + 24);
  v28 = *(&this->fields.isLastBattleRelease + 4);
  v29 = v27 > 0;
  v30 = v29 && v28;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, v29 && v28, v24);
  if ( v30 )
  {
    p_isRaidClear = &this->fields.isRaidClear;
    if ( *(_QWORD *)&this->fields.isRaidClear )
    {
      v35 = 1;
    }
    else
    {
      v36 = (System_Int32_array **)sub_B5D5DC(UISprite___TypeInfo, (unsigned int)v27);
      *(_QWORD *)&this->fields.isRaidClear = v36;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.isRaidClear, v36, v37, v38, v39, v40, v41, v42);
      v35 = 0;
    }
    Instance = (DataManager_o *)GameObjectExtensions__GetParent(
                                  (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                  0LL);
    v43 = (UnityEngine_Component_o *)Instance;
    v44 = 4LL;
    do
    {
      v45 = v44 - 4;
      if ( (v35 & 1) == 0 )
      {
        v46 = *(_QWORD *)&this->fields.isRaidClear;
        defeatCntBarSplitterSp = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.defeatCntBarSplitterSp;
        if ( (_DWORD)v44 == 4 )
        {
          if ( !defeatCntBarSplitterSp )
            goto LABEL_89;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v46 )
            goto LABEL_89;
          v54 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B5D684(Instance, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
            if ( !Instance )
              goto LABEL_91;
          }
          if ( !*(_DWORD *)(v46 + 24) )
            goto LABEL_90;
          *(_QWORD *)(v46 + 32) = v54;
          sub_B5D560((BattleServantConfConponent_o *)(v46 + 32), v54, v48, v49, v50, v51, v52, v53);
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
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_89;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v46 )
            goto LABEL_89;
          v61 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B5D684(Instance, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
            if ( !Instance )
            {
LABEL_91:
              v98 = sub_B5D6BC(Instance);
              sub_B5D668(v98, 0LL);
            }
          }
          if ( v45 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_90;
          v62 = v46 + 8LL * (int)v45;
          *(_QWORD *)(v62 + 32) = v61;
          sub_B5D560((BattleServantConfConponent_o *)(v62 + 32), v61, v55, v56, v57, v58, v59, v60);
          v63 = *(_QWORD *)p_isRaidClear;
          if ( !*(_QWORD *)p_isRaidClear )
            goto LABEL_89;
          if ( v45 >= *(_DWORD *)(v63 + 24) )
            goto LABEL_90;
          Instance = *(DataManager_o **)(v63 + 8LL * (int)v45 + 32);
          if ( !Instance )
            goto LABEL_89;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v43, 0LL);
        }
      }
      v65 = this->fields.userEventRaidEntity;
      if ( !v65 )
        goto LABEL_89;
      v66 = v65[2].fields.damage;
      if ( !v66 )
        goto LABEL_89;
      if ( v45 >= *(_DWORD *)(v66 + 24) )
        goto LABEL_90;
      v67 = *(_QWORD *)&this->fields.isRaidClear;
      if ( !v67 )
        goto LABEL_89;
      if ( v45 >= *(_DWORD *)(v67 + 24) )
      {
LABEL_90:
        v97 = sub_B5D6C8(Instance);
        sub_B5D668(v97, 0LL);
      }
      Instance = *(DataManager_o **)(v67 + 8 * v44);
      if ( !Instance )
        goto LABEL_89;
      v68 = *(_QWORD *)(v66 + 8 * v44);
      klass = (__int64)v65[1].klass;
      v70 = *((float *)&this->fields.useBarSlider + 1);
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_89;
      v71 = (double)v68 / (double)klass;
      v101.fields.x = -(float)(v70 * v71);
      v101.fields.y = 0.0;
      v101.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v101, 0LL);
    }
    while ( (int)++v44 - 4 < v27 );
  }
  v72 = 1024495761;
  v73 = 1052819649;
  v74 = 1024495761;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v31 - 3), v32, v33, v34, &methoda);
  Instance = *(DataManager_o **)&this->fields.restTimeUpdateSec;
  g = *((float *)&methoda.methodPointer + 1);
  r = *(float *)&methoda.methodPointer;
  a = *((float *)&methoda.invoker_method + 1);
  b = *(float *)&methoda.invoker_method;
  if ( Instance )
  {
    *(_QWORD *)&v102.fields.r = methoda.methodPointer;
    *(_QWORD *)&v102.fields.b = methoda.invoker_method;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v102, 0LL);
    r = TextEffectColor.fields.r;
    g = TextEffectColor.fields.g;
    b = TextEffectColor.fields.b;
    a = TextEffectColor.fields.a;
  }
  v79 = this->fields.userEventRaidEntity;
  if ( !v79 )
    goto LABEL_89;
  v80 = (__int64)v79[1].klass;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v21);
  if ( *(&this->fields.isLastBattleRelease + 4) )
  {
    lastBattleSpr = (UILabel_o *)this->fields.lastBattleSpr;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v81);
    if ( !lastBattleSpr )
      goto LABEL_89;
    UILabel__set_text(lastBattleSpr, (System_String_o *)Instance, 0LL);
    v104.fields.r = r;
    v104.fields.g = g;
    v104.fields.b = b;
    v104.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, (UILabel_o *)this->fields.lastBattleSpr, v104, v84);
  }
  Instance = *(DataManager_o **)&this->fields.eventId;
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v86 = *(UILabel_o **)&this->fields.eventId;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                  this,
                                  v80 - RaidBossTotalDamage,
                                  RaidBossTotalDamage,
                                  v85);
    if ( !v86 )
      goto LABEL_89;
    UILabel__set_text(v86, (System_String_o *)Instance, 0LL);
    v105.fields.r = r;
    v105.fields.g = g;
    v105.fields.b = b;
    v105.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.eventId, v105, v87);
  }
  v88 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
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
      v90 = this->fields.userEventRaidEntity;
      if ( !v90 )
        goto LABEL_89;
      Instance = *(DataManager_o **)&this->fields.overwritePosX;
      if ( !Instance )
        goto LABEL_89;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v90->fields.damage, 0LL);
    }
    v106.fields.r = r;
    v106.fields.g = g;
    v106.fields.b = b;
    v106.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.overwritePosX, v106, v89);
  }
  Instance = (DataManager_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_89;
  v91 = 1.0 - (double)RaidBossTotalDamage / (double)v80;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v91, 0LL);
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
    v92 = this->fields.userEventRaidEntity;
    if ( !v92 )
      goto LABEL_89;
    if ( (__int64)v92[1].klass > RaidBossTotalDamage )
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
      sub_B5D69C(Instance, v21);
    }
  }
  Instance = (DataManager_o *)this->fields.bossName;
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v107.fields.r = r;
  v107.fields.g = g;
  v107.fields.b = b;
  v107.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.eventId, v107, v93);
  v94 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
  {
    v108.fields.r = r;
    v108.fields.g = g;
    v108.fields.b = b;
    v108.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.overwritePosX, v108, v95);
  }
LABEL_86:
  Instance = (DataManager_o *)this->fields.defeatCntFrame;
  if ( !Instance )
    goto LABEL_89;
  v109.fields.r = r;
  v109.fields.g = g;
  v109.fields.b = b;
  v109.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v109, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v96);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetHpBarSplitters(
        TitleInfoEventRaidBossComponent_o *this,
        bool isFlag,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *defeatCntBarSplitterSp; // x0
  __int64 v7; // x21
  __int64 v8; // x8
  unsigned __int64 i; // x22
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x0

  if ( (byte_42ECC13 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isFlag, (_DWORD)method, v3);
    byte_42ECC13 = 1;
  }
  defeatCntBarSplitterSp = (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp;
  if ( !defeatCntBarSplitterSp
    || (defeatCntBarSplitterSp = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitterSp, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B5D69C(defeatCntBarSplitterSp, isFlag);
  }
  UnityEngine_GameObject__SetActive(defeatCntBarSplitterSp, isFlag, 0LL);
  v7 = *(_QWORD *)&this->fields.isRaidClear;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    if ( (int)v8 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v8; ++i )
      {
        if ( i >= (unsigned int)v8 )
        {
          v11 = sub_B5D6C8(defeatCntBarSplitterSp);
          sub_B5D668(v11, 0LL);
        }
        v10 = *(UnityEngine_Object_o **)(v7 + 32 + 8 * i);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        defeatCntBarSplitterSp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)defeatCntBarSplitterSp & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_18;
          defeatCntBarSplitterSp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
          if ( !defeatCntBarSplitterSp )
            goto LABEL_18;
          UnityEngine_GameObject__SetActive(defeatCntBarSplitterSp, isFlag, 0LL);
        }
        LODWORD(v8) = *(_DWORD *)(v7 + 24);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetLastBattleIcon(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t eventId,
        int32_t iconId,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  int32_t v24; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ECC10 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)sprite, (_DWORD)prefix, *(_QWORD *)&eventId);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23957/*"{0}_{1}_{2}"*/, v16, v17, v18);
    byte_42ECC10 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v26 = eventId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v25 = iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v21 = System_String__Format_44578852((System_String_o *)StringLiteral_23957/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v19, v20, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v21, 0LL) )
  {
LABEL_12:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_13;
    v24 = eventId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v23 = System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, (Il2CppObject *)prefix, v22, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( !AtlasManager__SetEventUI(sprite, v23, 0LL) )
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
    sub_B5D69C(v4, label);
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
    sub_B5D69C(v4, label);
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x0
  System_String_o *v12; // x21
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = gaugeId;
  if ( (byte_42ECC0F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)sprite, (_DWORD)prefix, *(_QWORD *)&gaugeId);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v8, v9, v10);
    byte_42ECC0F = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v11 = System_Int32__ToString((int32_t)&v13, 0LL);
  v12 = System_String__Concat_44580072(prefix, (System_String_o *)StringLiteral_16096/*"_"*/, v11, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
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
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int64_t Instance; // x0
  __int64 eventRaidEntity_low; // x1
  DataManager_o *v73; // x23
  EventRaidMaster_o *v74; // x21
  EventRaidEntity_o *Entity; // x0
  struct UserEventRaidEntity_o **p_userEventRaidEntity; // x22
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndDay; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  bool isRaidDefeatCount; // w0
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  const MethodInfo *v99; // x5
  int32_t v100; // w23
  TitleInfoEventRaidBossComponent_o *v101; // x0
  const MethodInfo *v102; // x4
  TitleInfoEventRaidBossComponent_o *v103; // x0
  const MethodInfo *v104; // x4
  TitleInfoEventRaidBossComponent_o *v105; // x0
  const MethodInfo *v106; // x4
  float v107; // s0
  struct UILabel_o *totalHpLabel; // x1
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **restTimeLabel; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  UISprite_o *defeatCntBg; // x23
  float v123; // s0
  struct UILabel_o *totalDefeatCntLabel; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **defeatCntBarSliderWhite; // x1
  int32_t *p_eventId; // x23
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  void *monitor; // x24
  UnityEngine_Component_o *v140; // x8
  int64_t v141; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float RAIDBOSS_DEFEAT_COUNT_POS_X; // s0
  UnityEngine_GameObject_o *v144; // x23
  TitleInfoEventRaidBossComponent_c *v145; // x0
  EventRaidEntity_o *v146; // x8
  int32_t RaidGroupDeadQuestId; // w0
  const MethodInfo *v148; // x1
  int32_t v149; // w20

  if ( (byte_42ECC0D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)terminalAtlas, eventId, *(_QWORD *)&warId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRaidMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_18779/*"event_raid_defeat_count_frame"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_18828/*"event_superboss_hp_white"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_18784/*"event_raid_lastbattle"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_18781/*"event_raid_hp_back"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_18780/*"event_raid_defeat_count_front"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_18782/*"event_raid_hp_frame"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_18788/*"event_raid_split_line"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_18778/*"event_raid_defeat_count_back"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_18783/*"event_raid_hp_front"*/, v68, v69, v70);
    byte_42ECC0D = 1;
  }
  LODWORD(this->fields.eventRaidEntity) = eventId;
  BYTE1(this->fields.HPfrom) = 0;
  LODWORD(this->fields.HPto) = warId;
  *((_WORD *)&this->fields.isLastBattleRelease + 1) = 256;
  *(&this->fields.isLastBattleRelease + 5) = isJumbleRaid;
  LOBYTE(this->fields.hpBarSplitters) = isSingleRaid;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v73 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v74 = (EventRaidMaster_o *)Instance;
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
  Entity = EventRaidMaster__GetEntity(v74, (int32_t)this->fields.eventRaidEntity, day, 0LL);
  p_userEventRaidEntity = &this->fields.userEventRaidEntity;
  this->fields.userEventRaidEntity = (struct UserEventRaidEntity_o *)Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.userEventRaidEntity,
    (System_Int32_array **)Entity,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
  {
    BYTE1(this->fields.hpBarSplitters) = userEventRaidEntity[2].fields.userId > 0;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v73,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = (struct EventBossStatusUiEntity_o *)UserEventRaidMaster__getEntityFromEventIdAndDay(
                                                                      (UserEventRaidMaster_o *)Instance,
                                                                      (int32_t)this->fields.eventRaidEntity,
                                                                      day,
                                                                      0LL);
      this->fields.eventBossStatusUiEntity = EntityFromEventIdAndDay;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
        (System_Int32_array **)EntityFromEventIdAndDay,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            v73,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              (int32_t)this->fields.eventRaidEntity,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
          *(&this->fields.isLastBattleRelease + 4) = isRaidDefeatCount;
          LOBYTE(this->fields.hpBarParent) = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v73,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                 (EventBossStatusUiMaster_o *)Instance,
                                                                 (int32_t)this->fields.eventRaidEntity,
                                                                 day,
                                                                 0LL);
            *(_QWORD *)&this->fields.restTimeUpdateSec = EntityFromEventIdAndIndex;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.restTimeUpdateSec,
              EntityFromEventIdAndIndex,
              v93,
              v94,
              v95,
              v96,
              v97,
              v98);
            Instance = *(_QWORD *)&this->fields.restTimeUpdateSec;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0LL);
              v100 = Instance;
              if ( *(_QWORD *)&this->fields.restTimeUpdateSec )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(
                             *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec,
                             0LL);
            }
            else
            {
              v100 = -1;
            }
            if ( *p_userEventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                (UISprite_o *)this->fields.bossName,
                (System_String_o *)StringLiteral_18784/*"event_raid_lastbattle"*/,
                (*p_userEventRaidEntity)->fields.userId,
                (int32_t)(*p_userEventRaidEntity)[1].monitor,
                v99);
              if ( *(&this->fields.isLastBattleRelease + 4) && !BYTE1(this->fields.hpBarSplitters) )
              {
                defeatCntBg = this->fields.defeatCntBg;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(defeatCntBg, (System_String_o *)StringLiteral_18779/*"event_raid_defeat_count_frame"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_18778/*"event_raid_defeat_count_back"*/, 0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSlider,
                  (System_String_o *)StringLiteral_18780/*"event_raid_defeat_count_front"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSplitter,
                  (System_String_o *)StringLiteral_18828/*"event_superboss_hp_white"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.modeName,
                  (System_String_o *)StringLiteral_18788/*"event_raid_split_line"*/,
                  0LL);
                Instance = (int64_t)this->fields.defeatCntBarSlider;
                if ( !Instance )
                  goto LABEL_68;
                v123 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                         Instance,
                         *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                *((float *)&this->fields.useBarSlider + 1) = v123;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalDefeatCntLabel,
                  v125,
                  v126,
                  v127,
                  v128,
                  v129,
                  v130);
                defeatCntBarSliderWhite = (System_Int32_array **)this->fields.defeatCntBarSliderWhite;
                p_eventId = &this->fields.eventId;
                *(_QWORD *)&this->fields.eventId = defeatCntBarSliderWhite;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  defeatCntBarSliderWhite,
                  v133,
                  v134,
                  v135,
                  v136,
                  v137,
                  v138);
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
                v140 = *(UnityEngine_Component_o **)p_eventId;
                if ( !*(_QWORD *)p_eventId )
                  goto LABEL_68;
                v141 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v140, 0LL);
                if ( (__int64)monitor > v141 || *(&this->fields.isLastBattleRelease + 5) )
                {
                  eventRaidEntity_low = 1LL;
                  if ( !Instance )
                    goto LABEL_68;
                }
                else
                {
                  eventRaidEntity_low = LOBYTE(this->fields.hpBarSplitters) != 0;
                  if ( !Instance )
                    goto LABEL_68;
                }
              }
              else
              {
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v101,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_18782/*"event_raid_hp_frame"*/,
                  v100,
                  v102);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v103,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_18781/*"event_raid_hp_back"*/,
                  v100,
                  v104);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v105,
                  (UISprite_o *)this->fields.hpBarSlider,
                  (System_String_o *)StringLiteral_18783/*"event_raid_hp_front"*/,
                  v100,
                  v106);
                Instance = (int64_t)this->fields.hpBarSlider;
                if ( !Instance )
                  goto LABEL_68;
                v107 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                         Instance,
                         *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                totalHpLabel = this->fields.totalHpLabel;
                *((float *)&this->fields.useBarSlider + 1) = v107;
                this->fields.useTotalLabel = totalHpLabel;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalHpLabel,
                  v109,
                  v110,
                  v111,
                  v112,
                  v113,
                  v114);
                restTimeLabel = (System_Int32_array **)this->fields.restTimeLabel;
                *(_QWORD *)&this->fields.eventId = restTimeLabel;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  restTimeLabel,
                  v116,
                  v117,
                  v118,
                  v119,
                  v120,
                  v121);
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
                LOBYTE(eventRaidEntity_low) = 1;
              }
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, eventRaidEntity_low, 0LL);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              RAIDBOSS_DEFEAT_COUNT_POS_X = *(float *)&this->fields.useBarSlider;
              v144 = gameObject;
              if ( RAIDBOSS_DEFEAT_COUNT_POS_X == 0.0 )
              {
                v145 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v145 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                RAIDBOSS_DEFEAT_COUNT_POS_X = (float)v145->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v144, RAIDBOSS_DEFEAT_COUNT_POS_X, 0LL);
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
                  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( Instance )
                  {
                    Instance = clsQuestCheck__IsEncountRaidBoss(
                                 (clsQuestCheck_o *)Instance,
                                 (int32_t)this->fields.eventRaidEntity,
                                 day,
                                 0LL);
                    v146 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
                    *(&this->fields.isLastBattleRelease + 2) = Instance & 1;
                    if ( v146 )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid(v146, 0LL);
                      eventRaidEntity_low = LODWORD(this->fields.eventRaidEntity);
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_userEventRaidEntity )
                          goto LABEL_68;
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                                 v74,
                                                 eventRaidEntity_low,
                                                 (*p_userEventRaidEntity)->fields.eventId,
                                                 0LL);
                      }
                      else
                      {
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v74, eventRaidEntity_low, day, 0LL);
                      }
                      v149 = RaidGroupDeadQuestId;
                      if ( RaidGroupDeadQuestId < 1 )
                        goto LABEL_66;
                      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                      }
                      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                      if ( Instance )
                      {
                        BYTE2(this->fields.hpBarSplitters) = clsQuestCheck__IsQuestRelease(
                                                               (clsQuestCheck_o *)Instance,
                                                               v149,
                                                               -1,
                                                               0,
                                                               0LL);
LABEL_66:
                        TitleInfoEventRaidBossComponent__SetDisp(this, v148);
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
    sub_B5D69C(Instance, eventRaidEntity_low);
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
  sub_B5D560(
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
  sub_B5D560(
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


void __fastcall TitleInfoEventRaidBossComponent__UpdateRestTime(
        TitleInfoEventRaidBossComponent_o *this,
        bool isForce,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  bool *p_isSingleRaid; // x20
  float realtimeSinceStartup; // s0
  float v20; // s9
  float v21; // s8
  TitleInfoEventRaidBossComponent_c *v22; // x0
  System_String_o *Time; // x0
  __int64 v24; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  unsigned __int64 v26; // x8
  unsigned __int64 v27; // x23
  unsigned __int64 v28; // x22
  unsigned __int64 v29; // x21
  UILabel_o *defeatCntFrame; // x19
  System_String_o *v31; // x20
  Il2CppObject *v32; // x21
  Il2CppObject *v33; // x22
  Il2CppObject *v34; // x0
  unsigned __int64 v35; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v36; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v37; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42ECC14 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, isForce, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13565/*"TIME_REST_RAID"*/, v15, v16, v17);
    byte_42ECC14 = 1;
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
      v26 = userEventRaidEntity[2].monitor - (void *)Time;
      if ( (__int64)v26 < 1 )
      {
        v29 = 0LL;
        v28 = 0LL;
        v27 = 0LL;
      }
      else
      {
        v27 = v26 % 0x3C;
        v28 = v26 / 0x3C % 0x3C;
        v29 = v26 / 0xE10;
      }
      defeatCntFrame = (UILabel_o *)this->fields.defeatCntFrame;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13565/*"TIME_REST_RAID"*/, 0LL);
      v37 = v29;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v37);
      v36 = v28;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v36);
      v35 = v27;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35);
      Time = System_String__Format_44578852(v31, v32, v33, v34, 0LL);
      if ( !defeatCntFrame )
LABEL_24:
        sub_B5D69C(Time, v24);
      UILabel__set_text(defeatCntFrame, Time, 0LL);
      return;
    }
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v20 = *(float *)&this->fields.isSingleRaid;
    v21 = realtimeSinceStartup;
    p_isSingleRaid = &this->fields.isSingleRaid;
    v22 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v22 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(v21 - v20) > v22->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
      goto LABEL_11;
  }
}


void __fastcall TitleInfoEventRaidBossComponent__setBeforeMovePos(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *v7; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoEventRaidBossComponent_c *v11; // x0
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECC16 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidBossComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECC16 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B5D69C(gameObject, v6);
  }
  v7 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v11 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  static_fields = (float *)v11->static_fields;
  v14.fields.x = x + static_fields[6];
  v14.fields.y = y + static_fields[7];
  v14.fields.z = z + static_fields[8];
  UnityEngine_Transform__set_localPosition(v7, v14, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E6241 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidBossComponent___c_TypeInfo, v1, v2, v3);
    byte_42E6241 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v4;
  sub_B5D560(static_fields);
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