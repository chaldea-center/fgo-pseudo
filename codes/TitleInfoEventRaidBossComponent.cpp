void __fastcall TitleInfoEventRaidBossComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventRaidBossComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoEventRaidBossComponent_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  TitleInfoEventRaidBossComponent_c *v25; // x8
  struct TitleInfoEventRaidBossComponent_StaticFields *v26; // x9

  if ( (byte_42B4454 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_21858/*"raid_boss_icon_"*/);
    sub_B52984(&StringLiteral_14557/*"TitleInfoEventRaidBossEffect_Dead"*/);
    sub_B52984(&StringLiteral_21859/*"raid_boss_icon_last_"*/);
    byte_42B4454 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_21858/*"raid_boss_icon_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21858/*"raid_boss_icon_"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21859/*"raid_boss_icon_last_"*/;
  v9->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = (struct System_String_o *)StringLiteral_21859/*"raid_boss_icon_last_"*/;
  sub_B52920(
    (BattleServantConfConponent_o *)&v9->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_14557/*"TitleInfoEventRaidBossEffect_Dead"*/;
  v17->RAIDBOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_14557/*"TitleInfoEventRaidBossEffect_Dead"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->RAIDBOSS_CLEAR_EFFECT_PREFAB, v18, v19, v20, v21, v22, v23, v24);
  v25 = TitleInfoEventRaidBossComponent_TypeInfo;
  v26 = TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  *(_QWORD *)&v26->RAIDBOSS_ANIM_ROOT_POS.fields.x = 0x429C000000000000LL;
  v26->RAIDBOSS_ANIM_ROOT_POS.fields.z = 0.0;
  v25->static_fields->REST_TIME_UPDATE_INTERVAL_SEC = 1.0;
  v25->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X = 226;
  v25->static_fields->ANIM_DURATION_FRAME_IN_BOSS = 0.3;
  v25->static_fields->ANIM_DURATION_HP_CUT = 0.0;
  v25->static_fields->ANIM_DURATION_SPLIT_ALPHA = 0.5;
  v25->static_fields->CLEAR_CALLBACK_DELAY = 1.8;
  v25->static_fields->CLEAR_END_CALLBACK_DELAY = 0.5;
  v25->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID = 1.5;
  v25->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL = 1.0;
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
  TitleInfoEventRaidBossComponent_c *v3; // x0
  float HPto; // w21
  float CLEAR_END_CALLBACK_DELAY_NORMAL; // s8
  BalanceConfig_c *v6; // x0
  TitleInfoEventRaidBossComponent_c *v7; // x0

  if ( (byte_42B444E & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_10060/*"OnEndAnimation"*/);
    byte_42B444E = 1;
  }
  TitleInfoEventRaidBossComponent__OnStartFadeOutAnimation(this, method);
  v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  HPto = this->fields.HPto;
  CLEAR_END_CALLBACK_DELAY_NORMAL = v3->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( LODWORD(HPto) == v6->static_fields->FesWarId )
  {
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
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
      v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    CLEAR_END_CALLBACK_DELAY_NORMAL = v7->static_fields->CLEAR_END_CALLBACK_DELAY;
  }
  else if ( *(&this->fields.isLastBattleRelease + 5) )
  {
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_17:
      CLEAR_END_CALLBACK_DELAY_NORMAL = v7->static_fields->CLEAR_END_CALLBACK_DELAY_JUMBLE_RAID;
      goto LABEL_22;
    }
LABEL_15:
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    goto LABEL_17;
  }
LABEL_22:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10060/*"OnEndAnimation"*/,
    CLEAR_END_CALLBACK_DELAY_NORMAL,
    0LL);
}


System_String_o *__fastcall TitleInfoEventRaidBossComponent__GetAiModeName(
        TitleInfoEventRaidBossComponent_o *this,
        int64_t totalDamage,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  __int64 v9; // x9
  System_Collections_Generic_IEnumerable_TSource__o *damage; // x20
  System_Func_long__bool__o *v11; // x22
  struct UserEventRaidEntity_o *v12; // x8
  __int64 v13; // x8
  System_String_o **v14; // x8
  __int64 v16; // x0

  if ( (byte_42B4450 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_long___);
    sub_B52984(&Method_System_Func_long__bool___ctor__);
    sub_B52984(&System_Func_long__bool__TypeInfo);
    sub_B52984(&Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__);
    sub_B52984(&TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B4450 = 1;
  }
  v5 = (TitleInfoEventRaidBossComponent___c__DisplayClass95_0_o *)sub_B52A54(TitleInfoEventRaidBossComponent___c__DisplayClass95_0_TypeInfo);
  TitleInfoEventRaidBossComponent___c__DisplayClass95_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  v5->fields.totalDamage = totalDamage;
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_13;
  v9 = *(_QWORD *)&userEventRaidEntity[2].fields.eventId;
  if ( !v9 )
    goto LABEL_13;
  if ( !*(_QWORD *)(v9 + 24) )
  {
    v14 = (System_String_o **)&StringLiteral_1/*""*/;
    return *v14;
  }
  damage = (System_Collections_Generic_IEnumerable_TSource__o *)userEventRaidEntity[2].fields.damage;
  v11 = (System_Func_long__bool__o *)sub_B52A54(System_Func_long__bool__TypeInfo);
  System_Func_long__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_TitleInfoEventRaidBossComponent___c__DisplayClass95_0__GetAiModeName_b__0__,
    (const MethodInfo_2BC682C *)Method_System_Func_long__bool___ctor__);
  v6 = System_Linq_Enumerable__Count_long_(
         damage,
         (System_Func_TSource__bool__o *)v11,
         (const MethodInfo_1B5F834 *)Method_System_Linq_Enumerable_Count_long___);
  v12 = this->fields.userEventRaidEntity;
  if ( !v12 || (v13 = *(_QWORD *)&v12[2].fields.eventId) == 0 )
LABEL_13:
    sub_B52A5C(v6, v7);
  if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 24) )
  {
    v16 = sub_B52A88(v6);
    sub_B52A28(v16, 0LL);
  }
  v14 = (System_String_o **)(v13 + 8LL * (int)v6 + 32);
  return *v14;
}


UnityEngine_AnimationClip_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossAnimClip(
        TitleInfoEventRaidBossComponent_o *this,
        UnityEngine_Animation_o *animation,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *v7; // x21
  struct UserEventRaidEntity_o *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  UnityEngine_Object_o *Clip; // x21
  struct UserEventRaidEntity_o *v12; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  TitleInfoEventRaidBossComponent_c *v16; // x0
  int v18; // [xsp+4h] [xbp-3Ch] BYREF
  int monitor; // [xsp+8h] [xbp-38h] BYREF
  int userId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B4453 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_23837/*"{0}_{1}"*/);
    sub_B52984(&StringLiteral_23839/*"{0}_{1}_{2}"*/);
    byte_42B4453 = 1;
  }
  v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  v7 = (Il2CppObject *)*((_QWORD *)v5[11].monitor + 2);
  userId = userEventRaidEntity->fields.userId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v8 = this->fields.userEventRaidEntity;
  if ( !v8 )
    goto LABEL_26;
  v9 = v5;
  monitor = (int)v8[1].monitor;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v5 = (Il2CppObject *)System_String__Format_44569380((System_String_o *)StringLiteral_23839/*"{0}_{1}_{2}"*/, v7, v9, v10, 0LL);
  if ( !animation )
    goto LABEL_26;
  Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, (System_String_o *)v5, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
  {
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v12 = this->fields.userEventRaidEntity;
    if ( v12 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v18 = v12->fields.userId;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      v15 = System_String__Format_44563852(
              (System_String_o *)StringLiteral_23837/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v14,
              0LL);
      Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(animation, v15, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Clip, 0LL, 0LL) )
      {
        v16 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v16 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return UnityEngine_Animation__GetClip(animation, v16->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB, 0LL);
      }
      return (UnityEngine_AnimationClip_o *)Clip;
    }
LABEL_26:
    sub_B52A5C(v5, animation);
  }
  return (UnityEngine_AnimationClip_o *)Clip;
}


UnityEngine_GameObject_o *__fastcall TitleInfoEventRaidBossComponent__GetClearBossEffect(
        TitleInfoEventRaidBossComponent_o *this,
        AssetData_o *mapAssetData,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  Il2CppObject *v7; // x21
  struct UserEventRaidEntity_o *v8; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  struct UserEventRaidEntity_o *v12; // x8
  Il2CppObject *RAIDBOSS_CLEAR_EFFECT_PREFAB; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  TitleInfoEventRaidBossComponent_c *v16; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  int monitor; // [xsp+18h] [xbp-38h] BYREF
  int userId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B4452 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_23837/*"{0}_{1}"*/);
    sub_B52984(&StringLiteral_23839/*"{0}_{1}_{2}"*/);
    byte_42B4452 = 1;
  }
  v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
  }
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_26;
  v7 = (Il2CppObject *)*((_QWORD *)v5[11].monitor + 2);
  userId = userEventRaidEntity->fields.userId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &userId);
  v8 = this->fields.userEventRaidEntity;
  if ( !v8 )
    goto LABEL_26;
  v9 = v5;
  monitor = (int)v8[1].monitor;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor);
  v5 = (Il2CppObject *)System_String__Format_44569380((System_String_o *)StringLiteral_23839/*"{0}_{1}_{2}"*/, v7, v9, v10, 0LL);
  if ( !mapAssetData )
    goto LABEL_26;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             mapAssetData,
                                                             (System_String_o *)v5,
                                                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    v5 = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    v12 = this->fields.userEventRaidEntity;
    if ( v12 )
    {
      RAIDBOSS_CLEAR_EFFECT_PREFAB = (Il2CppObject *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB;
      v18 = v12->fields.userId;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      v15 = System_String__Format_44563852(
              (System_String_o *)StringLiteral_23837/*"{0}_{1}"*/,
              RAIDBOSS_CLEAR_EFFECT_PREFAB,
              v14,
              0LL);
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 mapAssetData,
                                                                 v15,
                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
      {
        v16 = TitleInfoEventRaidBossComponent_TypeInfo;
        if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
          v16 = TitleInfoEventRaidBossComponent_TypeInfo;
        }
        return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             mapAssetData,
                                             v16->static_fields->RAIDBOSS_CLEAR_EFFECT_PREFAB,
                                             (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_26:
    sub_B52A5C(v5, mapAssetData);
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
  int64_t result; // x0
  __int64 v4; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  bool v6; // w8
  struct UserEventRaidEntity_o *v7; // x8
  int64_t klass; // x8
  TotalEventRaidEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B4444 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_TotalEventRaidMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B4444 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_TotalEventRaidMaster___);
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
    sub_B52A5C(result, v4);
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
  EventBossStatusUiEntity_o *v7; // x0
  System_String_o *CountFormat; // x22
  System_String_o *v9; // x21
  System_Text_StringBuilder_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v17; // x19
  Il2CppObject *NumberFormat_34073440; // x1
  System_String_o *v19; // x0
  System_String_o *v20; // x19
  System_String_o *v21; // x19
  System_String_o *v22; // x19
  int64_t v23; // [xsp+0h] [xbp-30h] BYREF
  int64_t v24; // [xsp+8h] [xbp-28h] BYREF

  v24 = totalHp;
  if ( (byte_42B4451 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_5729/*"EVENT_RAID_REST_COUNT_AFTER"*/);
    sub_B52984(&StringLiteral_5730/*"EVENT_RAID_REST_COUNT_BEFORE"*/);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_5666/*"EVENT_DEFEAT_COUNT_TXT"*/);
    sub_B52984(&StringLiteral_13520/*"TITLE_INFO_RAID_TOTALHP"*/);
    byte_42B4451 = 1;
  }
  v7 = *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec;
  if ( v7 )
  {
    CountFormat = EventBossStatusUiEntity__GetCountFormat(v7, 0LL);
    if ( !System_String__IsNullOrEmpty(CountFormat, 0LL) )
    {
      v17 = System_Int64__ToString((int64_t)&v24, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      NumberFormat_34073440 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34073440(v17, 0LL);
      v19 = CountFormat;
      return System_String__Format(v19, NumberFormat_34073440, 0LL);
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
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_DEFEAT_COUNT_TXT"*/, 0LL);
      v23 = totalDamage;
      NumberFormat_34073440 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
      v19 = v22;
    }
    else
    {
      v20 = System_Int64__ToString((int64_t)&v24, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__GetNumberFormat_34073440(v20, 0LL);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13520/*"TITLE_INFO_RAID_TOTALHP"*/, 0LL);
      NumberFormat_34073440 = (Il2CppObject *)v21;
    }
    return System_String__Format(v19, NumberFormat_34073440, 0LL);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"EVENT_RAID_REST_COUNT_BEFORE"*/, 0LL);
  v10 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42988220(v10, v9, 0LL);
  if ( !v10 )
    sub_B52A5C(v11, v12);
  System_Text_StringBuilder__Append_42994048(v10, (System_String_o *)StringLiteral_81/*" "*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5729/*"EVENT_RAID_REST_COUNT_AFTER"*/, 0LL);
  v23 = totalHp;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
  v15 = System_String__Format(v13, v14, 0LL);
  System_Text_StringBuilder__Append_42994048(v10, v15, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
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
    sub_B52A5C(0LL, method);
  return EventRaidEntity__IsJumbleSingleRaid(userEventRaidEntity, 0LL) && BYTE2(this->fields.hpBarSplitters) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventRaidBossComponent__IsPlayClearAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        int32_t raidDeadQuestId,
        bool isJumbleSingleRaid,
        const MethodInfo *method)
{
  clsQuestCheck_o *userEventRaidEntity; // x0
  struct UserEventRaidEntity_o *v8; // x8
  int32_t eventRaidEntity; // w19
  int32_t userId_high; // w20

  if ( (byte_42B444C & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B444C = 1;
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
    userEventRaidEntity = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( userEventRaidEntity )
      return clsQuestCheck__IsQuestClear(userEventRaidEntity, raidDeadQuestId, 0, 0LL)
          || *(&this->fields.isLastBattleRelease + 5);
LABEL_24:
    sub_B52A5C(userEventRaidEntity, *(_QWORD *)&raidDeadQuestId);
  }
  userEventRaidEntity = (clsQuestCheck_o *)this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_24;
  userEventRaidEntity = (clsQuestCheck_o *)EventRaidEntity__IsJustDefeated(
                                             (EventRaidEntity_o *)userEventRaidEntity,
                                             0LL);
  if ( ((unsigned __int8)userEventRaidEntity & 1) == 0 )
    return 0;
  v8 = this->fields.userEventRaidEntity;
  if ( !v8 )
    goto LABEL_24;
  eventRaidEntity = (int32_t)this->fields.eventRaidEntity;
  userId_high = HIDWORD(v8->fields.userId);
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
    sub_B52A5C(this, eventId);
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.onClearCall, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_Action_o *splitHpEffect; // x20
  __int64 v10; // x1
  _BYTE *hpFrame; // x0
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t eventRaidEntity; // w20
  int32_t userId_high; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  TitleInfoEventRaidBossComponent_c *v16; // x8

  if ( (byte_42B444F & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenAlpha___);
    byte_42B444F = 1;
  }
  splitHpEffect = (System_Action_o *)this->fields.splitHpEffect;
  this->fields.splitHpEffect = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.splitHpEffect, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(splitHpEffect, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD1B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD1B5 = 1;
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
  v16 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v16 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  hpFrame = UITweener__Begin_TweenWidth_(
              gameObject,
              v16->static_fields->ANIM_DURATION_SPLIT_ALPHA,
              (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenAlpha___);
  if ( !hpFrame )
LABEL_26:
    sub_B52A5C(hpFrame, v10);
  *((_DWORD *)hpFrame + 6) = 1;
  *((_QWORD *)hpFrame + 15) = 1065353216LL;
}


void __fastcall TitleInfoEventRaidBossComponent__PlayFrameInBoss(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  char *Child; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x20
  TitleInfoEventRaidBossComponent_c *v7; // x8
  char *v8; // x20
  float32x2_t *static_fields; // x8
  float v10; // s1
  int animEndCall; // w9
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42B4449 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&Method_UITweener_Begin_TweenPosition___);
    sub_B52984(&StringLiteral_10759/*"PlayHpNameAlpha"*/);
    byte_42B4449 = 1;
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
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v7 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  Child = (char *)UITweener__Begin_TweenWidth_(
                    v6,
                    v7->static_fields->ANIM_DURATION_FRAME_IN_BOSS,
                    (const MethodInfo_1F7CFF8 *)Method_UITweener_Begin_TweenPosition___);
  if ( !Child )
LABEL_13:
    sub_B52A5C(Child, v5);
  v8 = Child;
  static_fields = (float32x2_t *)TitleInfoEventRaidBossComponent_TypeInfo->static_fields;
  v10 = *(float *)&this->fields.animEndCall + static_fields[4].n64_f32[0];
  *((float32x2_t *)Child + 15) = vadd_f32(*(float32x2_t *)&this->fields.originPos.fields.z, static_fields[3]);
  *((float *)Child + 32) = v10;
  animEndCall = (int)this->fields.animEndCall;
  *(_QWORD *)(Child + 132) = *(_QWORD *)&this->fields.originPos.fields.z;
  *((_DWORD *)Child + 35) = animEndCall;
  *((_DWORD *)Child + 6) = 2;
  v12 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *((_QWORD *)v8 + 9) = v12;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 72), v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_10759/*"PlayHpNameAlpha"*/;
  *((_QWORD *)v8 + 10) = StringLiteral_10759/*"PlayHpNameAlpha"*/;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 80), v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpCut(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x20
  TitleInfoEventRaidBossComponent_c *v5; // x8
  TitleInfoEventRaidBossComponent___c_c *v6; // x0
  float ANIM_DURATION_HP_CUT; // s8
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__87_0; // x21
  Il2CppObject *v10; // x22
  struct TitleInfoEventRaidBossComponent___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42B444A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B52984(&Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__);
    sub_B52984(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_42B444A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v5 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  v6 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  ANIM_DURATION_HP_CUT = v5->static_fields->ANIM_DURATION_HP_CUT;
  if ( (BYTE3(TitleInfoEventRaidBossComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent___c_TypeInfo);
    v6 = TitleInfoEventRaidBossComponent___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__87_0 = static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(_9__87_0, v10, Method_TitleInfoEventRaidBossComponent___c__PlayHpCut_b__87_0__, 0LL);
    v11 = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
    v11->__9__87_0 = _9__87_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v11->__9__87_0,
      (System_Int32_array **)_9__87_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_PlayHpDeletion__, 0LL);
  if ( !Component_UIWidget )
    sub_B52A5C(v19, v20);
  EasingObject__Play((EasingObject_o *)Component_UIWidget, ANIM_DURATION_HP_CUT, _9__87_0, v18, 0.0, 0, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__PlayHpDeletion(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 eventRaidEntity_low; // x1
  EventRaidMaster_o *v5; // x20
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  int32_t RaidGroupDeadQuestId; // w0
  struct EventBossStatusUiEntity_o *eventBossStatusUiEntity; // x8
  int32_t v9; // w20
  __int64 v10; // x22
  const MethodInfo *v11; // x3
  int64_t datalist; // x2
  struct UserEventRaidEntity_o *v13; // x8
  UILabel_o *v14; // x21
  bool IsJumbleSingleRaid; // w0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *klass; // x20
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v20; // x20
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v22; // x1
  System_Action_o *v23; // x21
  System_Action_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42B444B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_TitleInfoEventRaidBossComponent_OnEndAnimation__);
    sub_B52984(&Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__);
    byte_42B444B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this->fields.userEventRaidEntity )
    goto LABEL_44;
  v5 = (EventRaidMaster_o *)Instance;
  Instance = (DataManager_o *)EventRaidEntity__IsJumbleSingleRaid(
                                (EventRaidEntity_o *)this->fields.userEventRaidEntity,
                                0LL);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( !userEventRaidEntity )
    goto LABEL_44;
  eventRaidEntity_low = LODWORD(this->fields.eventRaidEntity);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                             v5,
                             eventRaidEntity_low,
                             userEventRaidEntity->fields.eventId,
                             0LL);
  }
  else
  {
    if ( !v5 )
      goto LABEL_44;
    RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                             v5,
                             eventRaidEntity_low,
                             HIDWORD(userEventRaidEntity->fields.userId),
                             0LL);
  }
  eventBossStatusUiEntity = this->fields.eventBossStatusUiEntity;
  v9 = RaidGroupDeadQuestId;
  v10 = eventBossStatusUiEntity ? -(__int64)eventBossStatusUiEntity[1].klass : 0LL;
  Instance = (DataManager_o *)this->fields.userEventRaidEntity;
  if ( !Instance
    || ((Instance = (DataManager_o *)EventRaidEntity__getTotalEventRaidEntity((EventRaidEntity_o *)Instance, 0LL)) == 0LL
      ? (datalist = 0LL)
      : (datalist = (int64_t)Instance->fields.datalist),
        (v13 = this->fields.userEventRaidEntity) == 0LL
     || (v14 = *(UILabel_o **)&this->fields.eventId,
         Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                       this,
                                       ((__int64)v13[1].klass + v10 - datalist) & ~(((__int64)v13[1].klass
                                                                                   + v10
                                                                                   - datalist) >> 63),
                                       datalist,
                                       v11),
         !v14)
     || (UILabel__set_text(v14, (System_String_o *)Instance, 0LL),
         (Instance = (DataManager_o *)this->fields.userEventRaidEntity) == 0LL)) )
  {
LABEL_44:
    sub_B52A5C(Instance, eventRaidEntity_low);
  }
  IsJumbleSingleRaid = EventRaidEntity__IsJumbleSingleRaid((EventRaidEntity_o *)Instance, 0LL);
  if ( TitleInfoEventRaidBossComponent__IsPlayClearAnimation(this, v9, IsJumbleSingleRaid, v16) )
  {
    klass = (UnityEngine_Object_o *)this[1].klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v19 = 0LL;
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v20 = (UnityEngine_UI_Dropdown_DropdownItem_o *)this[1].klass;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v19 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          v20,
                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent(v19, (UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__ResetLocalPosition(v19, 0LL);
    }
    *(&this->fields.isLastBattleRelease + 2) = 0;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
    Component_srcLineSprite = 0LL;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_44;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v19,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)this,
        Method_TitleInfoEventRaidBossComponent_OnStartFadeOutAnimation__,
        0LL);
      if ( Component_srcLineSprite )
      {
        CommonEffectActionComponent__SetEventAction(
          (CommonEffectActionComponent_o *)Component_srcLineSprite,
          0,
          v23,
          0LL);
        v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v24, (Il2CppObject *)this, Method_TitleInfoEventRaidBossComponent_OnEndAnimation__, 0LL);
        *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v24;
        sub_B52920(
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
      goto LABEL_44;
    }
    TitleInfoEventRaidBossComponent__SetClearAlpha(this, v22);
  }
  else
  {
    TitleInfoEventRaidBossComponent__OnEndAnimation(this, v17);
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
  UISprite_o *hpFrame; // x21
  void *v8; // x0
  System_String_o *RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX; // x22
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  UISprite_o *v12; // x21
  System_String_o *RAIDBOSS_ICON_SPNAME_PREFIX; // x22
  System_String_o *v14; // x0
  System_String_o *v15; // x20

  if ( (byte_42B4440 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_42B4440 = 1;
  }
  if ( isLastBattle )
  {
    hpFrame = this->fields.hpFrame;
    v8 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    }
    if ( !eventRaidEnt )
      goto LABEL_23;
    RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX;
    v10 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
    v11 = System_String__Concat_44568316(RAIDBOSS_ICON_LASTBATTLE_SPNAME_PREFIX, v10, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEventUI(hpFrame, v11, 0LL) )
      goto LABEL_20;
  }
  v12 = this->fields.hpFrame;
  v8 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
  }
  if ( !eventRaidEnt )
    goto LABEL_23;
  RAIDBOSS_ICON_SPNAME_PREFIX = TitleInfoEventRaidBossComponent_TypeInfo->static_fields->RAIDBOSS_ICON_SPNAME_PREFIX;
  v14 = System_Int32__ToString((int)eventRaidEnt + 48, 0LL);
  v15 = System_String__Concat_44568316(RAIDBOSS_ICON_SPNAME_PREFIX, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( AtlasManager__SetEventUI(v12, v15, 0LL) )
  {
LABEL_20:
    v8 = this->fields.hpFrame;
    if ( v8 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v8 + 840LL))(v8, *(_QWORD *)(*(_QWORD *)v8 + 848LL));
      return;
    }
LABEL_23:
    sub_B52A5C(v8, eventRaidEnt);
  }
}


void __fastcall TitleInfoEventRaidBossComponent__SetClearAlpha(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventRaidBossComponent_c *v3; // x0
  float HPto; // w20
  float CLEAR_CALLBACK_DELAY; // s8
  BalanceConfig_c *v6; // x0
  UnityEngine_Object_o *klass; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Component_srcLineSprite; // x21
  TitleInfoEventRaidBossComponent_c *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *ClearBossAnimClip; // x20
  float length; // s8
  TitleInfoEventRaidBossComponent_c *v14; // x0

  if ( (byte_42B444D & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_5384/*"DoClearCallback"*/);
    byte_42B444D = 1;
  }
  v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
    v3 = TitleInfoEventRaidBossComponent_TypeInfo;
  }
  HPto = this->fields.HPto;
  CLEAR_CALLBACK_DELAY = v3->static_fields->CLEAR_CALLBACK_DELAY;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( LODWORD(HPto) != v6->static_fields->FesWarId && !*(&this->fields.isLastBattleRelease + 5) )
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
      v10 = this[1].klass;
      if ( !v10 )
        goto LABEL_33;
      Component_srcLineSprite = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)v10,
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
                                                    v11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = (TitleInfoEventRaidBossComponent_c *)UnityEngine_Object__op_Inequality(ClearBossAnimClip, 0LL, 0LL);
    length = 0.0;
    if ( ((unsigned __int8)v10 & 1) == 0 )
      goto LABEL_28;
    if ( ClearBossAnimClip )
    {
      length = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)ClearBossAnimClip, 0LL);
LABEL_28:
      v14 = TitleInfoEventRaidBossComponent_TypeInfo;
      if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
        v14 = TitleInfoEventRaidBossComponent_TypeInfo;
      }
      CLEAR_CALLBACK_DELAY = UnityEngine_Mathf__Max(
                               0.0,
                               length - v14->static_fields->CLEAR_END_CALLBACK_DELAY_NORMAL,
                               0LL);
      goto LABEL_32;
    }
LABEL_33:
    sub_B52A5C(v10, v8);
  }
LABEL_32:
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_5384/*"DoClearCallback"*/,
    CLEAR_CALLBACK_DELAY,
    0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetDamageAnimation(
        TitleInfoEventRaidBossComponent_o *this,
        System_Action_o *onClearCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
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

  if ( (byte_42B4447 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B4447 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
  sub_B52920(
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
    sub_B52A5C(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidBossComponent__SetDisp(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  struct UserEventRaidEntity_o *v8; // x8
  int64_t damage; // x8
  int v10; // w20
  _BOOL4 v11; // w8
  _BOOL4 v12; // w9
  int v13; // w21
  int v14; // s3
  float v15; // s4
  float v16; // s5
  float v17; // s6
  char v18; // w25
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Component_o *v26; // x22
  __int64 v27; // x26
  unsigned int v28; // w28
  __int64 v29; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *defeatCntBarSplitterSp; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x24
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x24
  __int64 v45; // x0
  __int64 v46; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UserEventRaidEntity_o *v48; // x8
  int64_t v49; // x9
  __int64 v50; // x10
  __int64 v51; // d9
  __int64 klass; // d10
  float v53; // s8
  float v54; // s0
  int v55; // s1
  int v56; // s0
  int v57; // s2
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  struct UserEventRaidEntity_o *v62; // x8
  __int64 v63; // x22
  const MethodInfo *v64; // x2
  __int64 RaidBossTotalDamage; // x20
  UILabel_o *lastBattleSpr; // x21
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x3
  UILabel_o *v69; // x21
  const MethodInfo *v70; // x2
  UnityEngine_Object_o *v71; // x21
  const MethodInfo *v72; // x2
  struct UserEventRaidEntity_o *v73; // x8
  float v74; // s0
  struct UserEventRaidEntity_o *v75; // x8
  const MethodInfo *v76; // x2
  UnityEngine_Object_o *v77; // x20
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x2
  __int64 v80; // x0
  __int64 v81; // x0
  bool *p_isRaidClear; // [xsp+0h] [xbp-90h]
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B4443 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TotalEventRaidMaster___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UISprite___TypeInfo);
    byte_42B4443 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TotalEventRaidMaster___);
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
    v6);
  v8 = this->fields.userEventRaidEntity;
  if ( !v8 )
    goto LABEL_89;
  damage = v8[2].fields.damage;
  if ( !damage )
    goto LABEL_89;
  v10 = *(_DWORD *)(damage + 24);
  v11 = *(&this->fields.isLastBattleRelease + 4);
  v12 = v10 > 0;
  v13 = v12 && v11;
  TitleInfoEventRaidBossComponent__SetHpBarSplitters(this, v12 && v11, v7);
  if ( v13 )
  {
    p_isRaidClear = &this->fields.isRaidClear;
    if ( *(_QWORD *)&this->fields.isRaidClear )
    {
      v18 = 1;
    }
    else
    {
      v19 = (System_Int32_array **)sub_B5299C(UISprite___TypeInfo, (unsigned int)v10);
      *(_QWORD *)&this->fields.isRaidClear = v19;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.isRaidClear, v19, v20, v21, v22, v23, v24, v25);
      v18 = 0;
    }
    Instance = (DataManager_o *)GameObjectExtensions__GetParent(
                                  (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                  0LL);
    v26 = (UnityEngine_Component_o *)Instance;
    v27 = 4LL;
    do
    {
      v28 = v27 - 4;
      if ( (v18 & 1) == 0 )
      {
        v29 = *(_QWORD *)&this->fields.isRaidClear;
        defeatCntBarSplitterSp = (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.defeatCntBarSplitterSp;
        if ( (_DWORD)v27 == 4 )
        {
          if ( !defeatCntBarSplitterSp )
            goto LABEL_89;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v29 )
            goto LABEL_89;
          v37 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B52A44(Instance, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
            if ( !Instance )
              goto LABEL_91;
          }
          if ( !*(_DWORD *)(v29 + 24) )
            goto LABEL_90;
          *(_QWORD *)(v29 + 32) = v37;
          sub_B52920((BattleServantConfConponent_o *)(v29 + 32), v37, v31, v32, v33, v34, v35, v36);
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
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !Instance )
            goto LABEL_89;
          Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( !v29 )
            goto LABEL_89;
          v44 = (System_Int32_array **)Instance;
          if ( Instance )
          {
            Instance = (DataManager_o *)sub_B52A44(Instance, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
            if ( !Instance )
            {
LABEL_91:
              v81 = sub_B52A7C(Instance);
              sub_B52A28(v81, 0LL);
            }
          }
          if ( v28 >= *(_DWORD *)(v29 + 24) )
            goto LABEL_90;
          v45 = v29 + 8LL * (int)v28;
          *(_QWORD *)(v45 + 32) = v44;
          sub_B52920((BattleServantConfConponent_o *)(v45 + 32), v44, v38, v39, v40, v41, v42, v43);
          v46 = *(_QWORD *)p_isRaidClear;
          if ( !*(_QWORD *)p_isRaidClear )
            goto LABEL_89;
          if ( v28 >= *(_DWORD *)(v46 + 24) )
            goto LABEL_90;
          Instance = *(DataManager_o **)(v46 + 8LL * (int)v28 + 32);
          if ( !Instance )
            goto LABEL_89;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          GameObjectExtensions__SafeSetParent(gameObject, v26, 0LL);
        }
      }
      v48 = this->fields.userEventRaidEntity;
      if ( !v48 )
        goto LABEL_89;
      v49 = v48[2].fields.damage;
      if ( !v49 )
        goto LABEL_89;
      if ( v28 >= *(_DWORD *)(v49 + 24) )
        goto LABEL_90;
      v50 = *(_QWORD *)&this->fields.isRaidClear;
      if ( !v50 )
        goto LABEL_89;
      if ( v28 >= *(_DWORD *)(v50 + 24) )
      {
LABEL_90:
        v80 = sub_B52A88(Instance);
        sub_B52A28(v80, 0LL);
      }
      Instance = *(DataManager_o **)(v50 + 8 * v27);
      if ( !Instance )
        goto LABEL_89;
      v51 = *(_QWORD *)(v49 + 8 * v27);
      klass = (__int64)v48[1].klass;
      v53 = *((float *)&this->fields.useBarSlider + 1);
      Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_89;
      v54 = (double)v51 / (double)klass;
      v84.fields.x = -(float)(v53 * v54);
      v84.fields.y = 0.0;
      v84.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v84, 0LL);
    }
    while ( (int)++v27 - 4 < v10 );
  }
  v55 = 1024495761;
  v56 = 1052819649;
  v57 = 1024495761;
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v14 - 3), v15, v16, v17, &methoda);
  Instance = *(DataManager_o **)&this->fields.restTimeUpdateSec;
  g = *((float *)&methoda.methodPointer + 1);
  r = *(float *)&methoda.methodPointer;
  a = *((float *)&methoda.invoker_method + 1);
  b = *(float *)&methoda.invoker_method;
  if ( Instance )
  {
    *(_QWORD *)&v85.fields.r = methoda.methodPointer;
    *(_QWORD *)&v85.fields.b = methoda.invoker_method;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor((EventBossStatusUiEntity_o *)Instance, v85, 0LL);
    r = TextEffectColor.fields.r;
    g = TextEffectColor.fields.g;
    b = TextEffectColor.fields.b;
    a = TextEffectColor.fields.a;
  }
  v62 = this->fields.userEventRaidEntity;
  if ( !v62 )
    goto LABEL_89;
  v63 = (__int64)v62[1].klass;
  RaidBossTotalDamage = TitleInfoEventRaidBossComponent__GetRaidBossTotalDamage(this, v4);
  if ( *(&this->fields.isLastBattleRelease + 4) )
  {
    lastBattleSpr = (UILabel_o *)this->fields.lastBattleSpr;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetAiModeName(this, RaidBossTotalDamage, v64);
    if ( !lastBattleSpr )
      goto LABEL_89;
    UILabel__set_text(lastBattleSpr, (System_String_o *)Instance, 0LL);
    v87.fields.r = r;
    v87.fields.g = g;
    v87.fields.b = b;
    v87.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, (UILabel_o *)this->fields.lastBattleSpr, v87, v67);
  }
  Instance = *(DataManager_o **)&this->fields.eventId;
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
  {
    v69 = *(UILabel_o **)&this->fields.eventId;
    Instance = (DataManager_o *)TitleInfoEventRaidBossComponent__GetRestCountText(
                                  this,
                                  v63 - RaidBossTotalDamage,
                                  RaidBossTotalDamage,
                                  v68);
    if ( !v69 )
      goto LABEL_89;
    UILabel__set_text(v69, (System_String_o *)Instance, 0LL);
    v88.fields.r = r;
    v88.fields.g = g;
    v88.fields.b = b;
    v88.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.eventId, v88, v70);
  }
  v71 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
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
      v73 = this->fields.userEventRaidEntity;
      if ( !v73 )
        goto LABEL_89;
      Instance = *(DataManager_o **)&this->fields.overwritePosX;
      if ( !Instance )
        goto LABEL_89;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v73->fields.damage, 0LL);
    }
    v89.fields.r = r;
    v89.fields.g = g;
    v89.fields.b = b;
    v89.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineBattleColor(this, *(UILabel_o **)&this->fields.overwritePosX, v89, v72);
  }
  Instance = (DataManager_o *)this->fields.useTotalLabel;
  if ( !Instance )
    goto LABEL_89;
  v74 = 1.0 - (double)RaidBossTotalDamage / (double)v63;
  UIProgressBar__set_value((UIProgressBar_o *)Instance, v74, 0LL);
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
    v75 = this->fields.userEventRaidEntity;
    if ( !v75 )
      goto LABEL_89;
    if ( (__int64)v75[1].klass > RaidBossTotalDamage )
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
      sub_B52A5C(Instance, v4);
    }
  }
  Instance = (DataManager_o *)this->fields.bossName;
  if ( !Instance )
    goto LABEL_89;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  v90.fields.r = r;
  v90.fields.g = g;
  v90.fields.b = b;
  v90.fields.a = a;
  TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.eventId, v90, v76);
  v77 = *(UnityEngine_Object_o **)&this->fields.overwritePosX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
  {
    v91.fields.r = r;
    v91.fields.g = g;
    v91.fields.b = b;
    v91.fields.a = a;
    TitleInfoEventRaidBossComponent__SetOutlineLastColor(this, *(UILabel_o **)&this->fields.overwritePosX, v91, v78);
  }
LABEL_86:
  Instance = (DataManager_o *)this->fields.defeatCntFrame;
  if ( !Instance )
    goto LABEL_89;
  v92.fields.r = r;
  v92.fields.g = g;
  v92.fields.b = b;
  v92.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)Instance, v92, 0LL);
  TitleInfoEventRaidBossComponent__UpdateRestTime(this, 1, v79);
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

  if ( (byte_42B4445 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B4445 = 1;
  }
  defeatCntBarSplitterSp = (UnityEngine_GameObject_o *)this->fields.defeatCntBarSplitterSp;
  if ( !defeatCntBarSplitterSp
    || (defeatCntBarSplitterSp = UnityEngine_GameObject__get_gameObject(defeatCntBarSplitterSp, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(defeatCntBarSplitterSp, isFlag);
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
          v10 = sub_B52A88(defeatCntBarSplitterSp);
          sub_B52A28(v10, 0LL);
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
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x0
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x21
  int32_t v15; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B4442 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_23837/*"{0}_{1}"*/);
    sub_B52984(&StringLiteral_23839/*"{0}_{1}_{2}"*/);
    byte_42B4442 = 1;
  }
  if ( (iconId & 0x80000000) != 0 )
    goto LABEL_12;
  v17 = eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v16 = iconId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v12 = System_String__Format_44569380((System_String_o *)StringLiteral_23839/*"{0}_{1}_{2}"*/, (Il2CppObject *)prefix, v10, v11, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v12, 0LL) )
  {
LABEL_12:
    if ( (eventId & 0x80000000) != 0 )
      goto LABEL_13;
    v15 = eventId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v14 = System_String__Format_44563852((System_String_o *)StringLiteral_23837/*"{0}_{1}"*/, (Il2CppObject *)prefix, v13, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( !AtlasManager__SetEventUI(sprite, v14, 0LL) )
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
    sub_B52A5C(v4, label);
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
    sub_B52A5C(v4, label);
  UILabel__set_effectColor(label, defaultColor, 0LL);
}


void __fastcall TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
        TitleInfoEventRaidBossComponent_o *this,
        UISprite_o *sprite,
        System_String_o *prefix,
        int32_t gaugeId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x21
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = gaugeId;
  if ( (byte_42B4441 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42B4441 = 1;
  }
  if ( (gaugeId & 0x80000000) != 0 )
    goto LABEL_8;
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  v9 = System_String__Concat_44570600(prefix, (System_String_o *)StringLiteral_16011/*"_"*/, v8, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(sprite, v9, 0LL) )
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
  int64_t Instance; // x0
  __int64 eventRaidEntity_low; // x1
  DataManager_o *v16; // x23
  EventRaidMaster_o *v17; // x21
  EventRaidEntity_o *Entity; // x0
  struct UserEventRaidEntity_o **p_userEventRaidEntity; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  struct EventBossStatusUiEntity_o *EntityFromEventIdAndDay; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  bool isRaidDefeatCount; // w0
  System_Int32_array **EntityFromEventIdAndIndex; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x5
  int32_t v43; // w23
  TitleInfoEventRaidBossComponent_o *v44; // x0
  const MethodInfo *v45; // x4
  TitleInfoEventRaidBossComponent_o *v46; // x0
  const MethodInfo *v47; // x4
  TitleInfoEventRaidBossComponent_o *v48; // x0
  const MethodInfo *v49; // x4
  float v50; // s0
  struct UILabel_o *totalHpLabel; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **restTimeLabel; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UISprite_o *defeatCntBg; // x23
  float v66; // s0
  struct UILabel_o *totalDefeatCntLabel; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **defeatCntBarSliderWhite; // x1
  int32_t *p_eventId; // x23
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  void *monitor; // x24
  UnityEngine_Component_o *v83; // x8
  int64_t v84; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float RAIDBOSS_DEFEAT_COUNT_POS_X; // s0
  UnityEngine_GameObject_o *v87; // x23
  TitleInfoEventRaidBossComponent_c *v88; // x0
  EventRaidEntity_o *v89; // x8
  int32_t RaidGroupDeadQuestId; // w0
  const MethodInfo *v91; // x1
  int32_t v92; // w20

  if ( (byte_42B443F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventRaidMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_18684/*"event_raid_defeat_count_frame"*/);
    sub_B52984(&StringLiteral_18733/*"event_superboss_hp_white"*/);
    sub_B52984(&StringLiteral_18689/*"event_raid_lastbattle"*/);
    sub_B52984(&StringLiteral_18686/*"event_raid_hp_back"*/);
    sub_B52984(&StringLiteral_18685/*"event_raid_defeat_count_front"*/);
    sub_B52984(&StringLiteral_18687/*"event_raid_hp_frame"*/);
    sub_B52984(&StringLiteral_18693/*"event_raid_split_line"*/);
    sub_B52984(&StringLiteral_18683/*"event_raid_defeat_count_back"*/);
    sub_B52984(&StringLiteral_18688/*"event_raid_hp_front"*/);
    byte_42B443F = 1;
  }
  LODWORD(this->fields.eventRaidEntity) = eventId;
  BYTE1(this->fields.HPfrom) = 0;
  LODWORD(this->fields.HPto) = warId;
  *((_WORD *)&this->fields.isLastBattleRelease + 1) = 256;
  *(&this->fields.isLastBattleRelease + 5) = isJumbleRaid;
  LOBYTE(this->fields.hpBarSplitters) = isSingleRaid;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  v16 = (DataManager_o *)Instance;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v17 = (EventRaidMaster_o *)Instance;
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
  Entity = EventRaidMaster__GetEntity(v17, (int32_t)this->fields.eventRaidEntity, day, 0LL);
  p_userEventRaidEntity = &this->fields.userEventRaidEntity;
  this->fields.userEventRaidEntity = (struct UserEventRaidEntity_o *)Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.userEventRaidEntity,
    (System_Int32_array **)Entity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  userEventRaidEntity = this->fields.userEventRaidEntity;
  if ( userEventRaidEntity )
  {
    BYTE1(this->fields.hpBarSplitters) = userEventRaidEntity[2].fields.userId > 0;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          v16,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventRaidMaster___);
    if ( Instance )
    {
      EntityFromEventIdAndDay = (struct EventBossStatusUiEntity_o *)UserEventRaidMaster__getEntityFromEventIdAndDay(
                                                                      (UserEventRaidMaster_o *)Instance,
                                                                      (int32_t)this->fields.eventRaidEntity,
                                                                      day,
                                                                      0LL);
      this->fields.eventBossStatusUiEntity = EntityFromEventIdAndDay;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.eventBossStatusUiEntity,
        (System_Int32_array **)EntityFromEventIdAndDay,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            v16,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( Instance )
      {
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              (int32_t)this->fields.eventRaidEntity,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( Instance )
        {
          isRaidDefeatCount = EventDetailEntity__isRaidDefeatCount((EventDetailEntity_o *)Instance, 0LL);
          *(&this->fields.isLastBattleRelease + 4) = isRaidDefeatCount;
          LOBYTE(this->fields.hpBarParent) = isRaidDefeatCount;
          Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v16,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
          if ( Instance )
          {
            EntityFromEventIdAndIndex = (System_Int32_array **)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                 (EventBossStatusUiMaster_o *)Instance,
                                                                 (int32_t)this->fields.eventRaidEntity,
                                                                 day,
                                                                 0LL);
            *(_QWORD *)&this->fields.restTimeUpdateSec = EntityFromEventIdAndIndex;
            sub_B52920(
              (BattleServantConfConponent_o *)&this->fields.restTimeUpdateSec,
              EntityFromEventIdAndIndex,
              v36,
              v37,
              v38,
              v39,
              v40,
              v41);
            Instance = *(_QWORD *)&this->fields.restTimeUpdateSec;
            if ( Instance )
            {
              Instance = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Instance, 0LL);
              v43 = Instance;
              if ( *(_QWORD *)&this->fields.restTimeUpdateSec )
                Instance = EventBossStatusUiEntity__GetLastBattleIconId(
                             *(EventBossStatusUiEntity_o **)&this->fields.restTimeUpdateSec,
                             0LL);
            }
            else
            {
              v43 = -1;
            }
            if ( *p_userEventRaidEntity )
            {
              TitleInfoEventRaidBossComponent__SetLastBattleIcon(
                (TitleInfoEventRaidBossComponent_o *)Instance,
                (UISprite_o *)this->fields.bossName,
                (System_String_o *)StringLiteral_18689/*"event_raid_lastbattle"*/,
                (*p_userEventRaidEntity)->fields.userId,
                (int32_t)(*p_userEventRaidEntity)[1].monitor,
                v42);
              if ( *(&this->fields.isLastBattleRelease + 4) && !BYTE1(this->fields.hpBarSplitters) )
              {
                defeatCntBg = this->fields.defeatCntBg;
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetEventUI(defeatCntBg, (System_String_o *)StringLiteral_18684/*"event_raid_defeat_count_frame"*/, 0LL);
                AtlasManager__SetEventUI(this->fields.defeatCntBar, (System_String_o *)StringLiteral_18683/*"event_raid_defeat_count_back"*/, 0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSlider,
                  (System_String_o *)StringLiteral_18685/*"event_raid_defeat_count_front"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.defeatCntBarSplitter,
                  (System_String_o *)StringLiteral_18733/*"event_superboss_hp_white"*/,
                  0LL);
                AtlasManager__SetEventUI(
                  (UISprite_o *)this->fields.modeName,
                  (System_String_o *)StringLiteral_18693/*"event_raid_split_line"*/,
                  0LL);
                Instance = (int64_t)this->fields.defeatCntBarSlider;
                if ( !Instance )
                  goto LABEL_68;
                v66 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                totalDefeatCntLabel = this->fields.totalDefeatCntLabel;
                *((float *)&this->fields.useBarSlider + 1) = v66;
                this->fields.useTotalLabel = totalDefeatCntLabel;
                sub_B52920(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalDefeatCntLabel,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73);
                defeatCntBarSliderWhite = (System_Int32_array **)this->fields.defeatCntBarSliderWhite;
                p_eventId = &this->fields.eventId;
                *(_QWORD *)&this->fields.eventId = defeatCntBarSliderWhite;
                sub_B52920(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  defeatCntBarSliderWhite,
                  v76,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81);
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
                v83 = *(UnityEngine_Component_o **)p_eventId;
                if ( !*(_QWORD *)p_eventId )
                  goto LABEL_68;
                v84 = Instance;
                Instance = (int64_t)UnityEngine_Component__get_gameObject(v83, 0LL);
                if ( (__int64)monitor > v84 || *(&this->fields.isLastBattleRelease + 5) )
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
                  v44,
                  this->fields.hpBg,
                  (System_String_o *)StringLiteral_18687/*"event_raid_hp_frame"*/,
                  v43,
                  v45);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v46,
                  this->fields.hpBar,
                  (System_String_o *)StringLiteral_18686/*"event_raid_hp_back"*/,
                  v43,
                  v47);
                TitleInfoEventRaidBossComponent__SetSpriteFromEventUI(
                  v48,
                  (UISprite_o *)this->fields.hpBarSlider,
                  (System_String_o *)StringLiteral_18688/*"event_raid_hp_front"*/,
                  v43,
                  v49);
                Instance = (int64_t)this->fields.hpBarSlider;
                if ( !Instance )
                  goto LABEL_68;
                v50 = (*(float (__fastcall **)(int64_t, _QWORD))(*(_QWORD *)Instance + 664LL))(
                        Instance,
                        *(_QWORD *)(*(_QWORD *)Instance + 672LL));
                totalHpLabel = this->fields.totalHpLabel;
                *((float *)&this->fields.useBarSlider + 1) = v50;
                this->fields.useTotalLabel = totalHpLabel;
                sub_B52920(
                  (BattleServantConfConponent_o *)&this->fields.useTotalLabel,
                  (System_Int32_array **)totalHpLabel,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56,
                  v57);
                restTimeLabel = (System_Int32_array **)this->fields.restTimeLabel;
                *(_QWORD *)&this->fields.eventId = restTimeLabel;
                sub_B52920(
                  (BattleServantConfConponent_o *)&this->fields.eventId,
                  restTimeLabel,
                  v59,
                  v60,
                  v61,
                  v62,
                  v63,
                  v64);
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
              v87 = gameObject;
              if ( RAIDBOSS_DEFEAT_COUNT_POS_X == 0.0 )
              {
                v88 = TitleInfoEventRaidBossComponent_TypeInfo;
                if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
                  v88 = TitleInfoEventRaidBossComponent_TypeInfo;
                }
                RAIDBOSS_DEFEAT_COUNT_POS_X = (float)v88->static_fields->RAIDBOSS_DEFEAT_COUNT_POS_X;
              }
              GameObjectExtensions__SetLocalPositionX(v87, RAIDBOSS_DEFEAT_COUNT_POS_X, 0LL);
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
                  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                  if ( Instance )
                  {
                    Instance = clsQuestCheck__IsEncountRaidBoss(
                                 (clsQuestCheck_o *)Instance,
                                 (int32_t)this->fields.eventRaidEntity,
                                 day,
                                 0LL);
                    v89 = (EventRaidEntity_o *)this->fields.userEventRaidEntity;
                    *(&this->fields.isLastBattleRelease + 2) = Instance & 1;
                    if ( v89 )
                    {
                      Instance = EventRaidEntity__IsJumbleSingleRaid(v89, 0LL);
                      eventRaidEntity_low = LODWORD(this->fields.eventRaidEntity);
                      if ( (Instance & 1) != 0 )
                      {
                        if ( !*p_userEventRaidEntity )
                          goto LABEL_68;
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                                 v17,
                                                 eventRaidEntity_low,
                                                 (*p_userEventRaidEntity)->fields.eventId,
                                                 0LL);
                      }
                      else
                      {
                        RaidGroupDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v17, eventRaidEntity_low, day, 0LL);
                      }
                      v92 = RaidGroupDeadQuestId;
                      if ( RaidGroupDeadQuestId < 1 )
                        goto LABEL_66;
                      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
                      }
                      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
                      if ( Instance )
                      {
                        BYTE2(this->fields.hpBarSplitters) = clsQuestCheck__IsQuestRelease(
                                                               (clsQuestCheck_o *)Instance,
                                                               v92,
                                                               -1,
                                                               0,
                                                               0LL);
LABEL_66:
                        TitleInfoEventRaidBossComponent__SetDisp(this, v91);
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
    sub_B52A5C(Instance, eventRaidEntity_low);
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
  sub_B52920(
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
  sub_B52920(
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
  bool *p_isSingleRaid; // x20
  float realtimeSinceStartup; // s0
  float v7; // s9
  float v8; // s8
  TitleInfoEventRaidBossComponent_c *v9; // x0
  System_String_o *Time; // x0
  __int64 v11; // x1
  struct UserEventRaidEntity_o *userEventRaidEntity; // x8
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x23
  unsigned __int64 v15; // x22
  unsigned __int64 v16; // x21
  UILabel_o *defeatCntFrame; // x19
  System_String_o *v18; // x20
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x22
  Il2CppObject *v21; // x0
  unsigned __int64 v22; // [xsp+8h] [xbp-58h] BYREF
  unsigned __int64 v23; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42B4446 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_B52984(&StringLiteral_13506/*"TIME_REST_RAID"*/);
    byte_42B4446 = 1;
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
      v13 = userEventRaidEntity[2].monitor - (void *)Time;
      if ( (__int64)v13 < 1 )
      {
        v16 = 0LL;
        v15 = 0LL;
        v14 = 0LL;
      }
      else
      {
        v14 = v13 % 0x3C;
        v15 = v13 / 0x3C % 0x3C;
        v16 = v13 / 0xE10;
      }
      defeatCntFrame = (UILabel_o *)this->fields.defeatCntFrame;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_13506/*"TIME_REST_RAID"*/, 0LL);
      v24 = v16;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
      v23 = v15;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23);
      v22 = v14;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22);
      Time = System_String__Format_44569380(v18, v19, v20, v21, 0LL);
      if ( !defeatCntFrame )
LABEL_24:
        sub_B52A5C(Time, v11);
      UILabel__set_text(defeatCntFrame, Time, 0LL);
      return;
    }
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    v7 = *(float *)&this->fields.isSingleRaid;
    v8 = realtimeSinceStartup;
    p_isSingleRaid = &this->fields.isSingleRaid;
    v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidBossComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidBossComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidBossComponent_TypeInfo);
      v9 = TitleInfoEventRaidBossComponent_TypeInfo;
    }
    if ( (float)(v8 - v7) > v9->static_fields->REST_TIME_UPDATE_INTERVAL_SEC )
      goto LABEL_11;
  }
}


void __fastcall TitleInfoEventRaidBossComponent__setBeforeMovePos(
        TitleInfoEventRaidBossComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x19
  float x; // s8
  float y; // s9
  float z; // s10
  TitleInfoEventRaidBossComponent_c *v9; // x0
  float *static_fields; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B4448 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_42B4448 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL )
  {
    sub_B52A5C(gameObject, v4);
  }
  v5 = (UnityEngine_Transform_o *)gameObject;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
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
  Il2CppObject *v1; // x19
  struct TitleInfoEventRaidBossComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD9DF & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventRaidBossComponent___c_TypeInfo);
    byte_42AD9DF = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TitleInfoEventRaidBossComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TitleInfoEventRaidBossComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventRaidBossComponent___c_o *)v1;
  sub_B52920(static_fields);
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