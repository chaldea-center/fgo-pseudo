void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  __int64 v5; // x1
  struct WarBoardEventBossUIComponent_StaticFields *v6; // x0
  __int64 v7; // x1

  if ( (byte_4184015 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardEventBossUIComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_15413/*"WarBoardEventBossEffect_Break{0}"*/, v2);
    sub_B2C35C(&StringLiteral_15414/*"WarBoardEventBossEffect_Dead{0}"*/, v3);
    byte_4184015 = 1;
  }
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  v5 = StringLiteral_15414/*"WarBoardEventBossEffect_Dead{0}"*/;
  static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15414/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_B2C2F8(static_fields, v5);
  v6 = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  v7 = StringLiteral_15413/*"WarBoardEventBossEffect_Break{0}"*/;
  v6->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15413/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_B2C2F8(&v6->BOSS_POINT_BREAK_EFFECT_PREFAB, v7);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_4184014 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIAtlas__TypeInfo, v3);
    byte_4184014 = 1;
  }
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v4;
  sub_B2C2F8(&this->fields.atlasList, v4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__Awake(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Color_o __fastcall WarBoardEventBossUIComponent__ConvertHexToColor(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *hexStrColor,
        const MethodInfo *method)
{
  int32_t v4; // w0
  float v5; // s4
  float v6; // s5
  float v7; // s6
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  __int64 v12; // [xsp+0h] [xbp-20h] BYREF
  __int64 v13; // [xsp+8h] [xbp-18h]
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184013 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, hexStrColor);
    byte_4184013 = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v4 = System_Convert__ToInt32_42143312(hexStrColor, 16, 0LL);
  v14.fields.a = (float)(unsigned __int8)v4;
  v14.fields.r = (float)BYTE2(v4) / 255.0;
  v14.fields.g = (float)BYTE1(v4) / 255.0;
  v14.fields.b = v14.fields.a / 255.0;
  v12 = 0LL;
  v13 = 0LL;
  UnityEngine_Color___ctor_40633184(v14, v5, v6, v7, (const MethodInfo *)&v12);
  v9 = *((float *)&v12 + 1);
  v8 = *(float *)&v12;
  v11 = *((float *)&v13 + 1);
  v10 = *(float *)&v13;
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v8;
  return result;
}


float __fastcall WarBoardEventBossUIComponent__ConvertHpToRate(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        int64_t maxHp,
        const MethodInfo *method)
{
  float v4; // s0

  v4 = (double)hp / (double)maxHp;
  return UnityEngine_Mathf__Clamp01(v4, 0LL);
}


System_String_o *__fastcall WarBoardEventBossUIComponent__CreateSaveDta(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Text_StringBuilder_o *v5; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v7; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v9; // x8
  struct WarBoardUserServantData_o *v10; // x8

  if ( (byte_4184012 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184012 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v5, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v5
    || (System_Text_StringBuilder__Append_42412040(v5, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_42408700(v5, (System_String_o *)StringLiteral_1225/*":"*/, 0LL),
        (v9 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_42412040(v5, v9->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_42408700(v5, (System_String_o *)StringLiteral_1225/*":"*/, 0LL),
        (v10 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_B2C434(appended, v7);
  }
  System_Text_StringBuilder__Append_42412040(v5, v10->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v5->klass->vtable._3_ToString.method)(
                              v5,
                              v5->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_418400A & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, name);
    byte_418400A = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_4184009 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_int____67381984, *(_QWORD *)&restBreakPoint);
    byte_4184009 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_172891C *)Method_BasicHelper_IndexValue_int____67381984);
  else
    return 0LL;
}


WarBoardUserServantData_o *__fastcall WarBoardEventBossUIComponent__GetStageBossData(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardUserServantData_o *result; // x0

  result = (WarBoardUserServantData_o *)this->fields.warBoardDataEnt;
  if ( result )
    return WarBoardDataEntity__GetStageBossData((WarBoardDataEntity_o *)result, stageBossIndex, method);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardEventBossUIComponent__GetStageBossName(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardEventBossUIComponent___c__DisplayClass37_0_o *v10; // x20
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_4184007 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&string_TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__, v8);
    sub_B2C35C(&WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo, v9);
    byte_4184007 = 1;
  }
  v10 = (WarBoardEventBossUIComponent___c__DisplayClass37_0_o *)sub_B2C42C(WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass37_0___ctor(v10, 0LL);
  if ( !v10
    || (v10->fields.stageBossIndex = stageBossIndex,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v13 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
  {
    sub_B2C434(Instance, v12);
  }
  v14 = *(_QWORD *)(v13 + 48);
  if ( v14
    && *(_QWORD *)(v14 + 24)
    && (v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v15,
          (Il2CppObject *)v10,
          Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__),
        (USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                            (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v14,
                                                                            (System_Func_T__bool__o *)v15,
                                                                            (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
    && (klass = (BattleServantData_o *)USFGOActorBattleActionEventConditional_OverwriteParamCondition[4].klass) != 0LL )
  {
    return BattleServantData__getServantShortName(klass, 0LL);
  }
  else
  {
    return string_TypeInfo->static_fields->Empty;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall WarBoardEventBossUIComponent__GetTextEffectColor(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x0
  int32_t v8; // w19
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *bossColor; // x20
  System_String_array *TextEffectColors; // x0
  WarBoardEventBossUIComponent_o *v11; // x0
  const MethodInfo *v12; // x2
  float v13; // s0
  float v14; // s1
  float v15; // s2
  float v16; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184008 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_string___, *(_QWORD *)&restBreakPoint);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1003/*"0x000000"*/, v6);
    byte_4184008 = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  v8 = restBreakPoint - 1;
  if ( warBoardStageBossEnt )
  {
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1003/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
  }
  v11 = (WarBoardEventBossUIComponent_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)TextEffectColors,
                                            v8,
                                            bossColor,
                                            (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_string___);
  *(UnityEngine_Color_o *)&v13 = WarBoardEventBossUIComponent__ConvertHexToColor(v11, (System_String_o *)v11, v12);
  result.fields.a = v16;
  result.fields.b = v15;
  result.fields.g = v14;
  result.fields.r = v13;
  return result;
}


void __fastcall WarBoardEventBossUIComponent__LoadAnimPrefab(
        WarBoardEventBossUIComponent_o *this,
        WarBoardStageBossEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardEventBossUIComponent_c *v6; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x2
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v12; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x2
  struct UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-28h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418400B & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, ent);
    sub_B2C35C(&WarBoardEventBossUIComponent_TypeInfo, v5);
    byte_418400B = 1;
  }
  if ( ent )
  {
    v6 = WarBoardEventBossUIComponent_TypeInfo;
    if ( (BYTE3(WarBoardEventBossUIComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v6 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v6->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId);
    v9 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v8, 0LL);
    GameObjectFromEventUIAssetData = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v9, v10);
    this->fields.deadAnimPrefab = GameObjectFromEventUIAssetData;
    sub_B2C2F8(&this->fields.deadAnimPrefab, GameObjectFromEventUIAssetData);
    v12 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v18 = v12;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
    v15 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v14, 0LL);
    v17 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v15, v16);
    this->fields.pointBreakAnimPrefab = v17;
    sub_B2C2F8(&this->fields.pointBreakAnimPrefab, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
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

  if ( (byte_418400C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23501/*"{0:D2}"*/, v9);
    sub_B2C35C(&StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v10);
    byte_418400C = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B2C434(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v21 = i;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v15 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23501/*"{0:D2}"*/, v14, 0LL);
      v20 = eventId;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v17 = System_String__Format_44301068((System_String_o *)StringLiteral_5380/*"DownloadEventUIAtlas{0}{1}"*/, v16, v15, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v17,
                                                                 v18);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)UnityEngine_Object__op_Equality(
                                                                         GameObjectFromEventUIAssetData,
                                                                         0LL,
                                                                         0LL);
      if ( ((unsigned __int8)atlasList & 1) != 0 )
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
      atlasList = this->fields.atlasList;
      if ( !atlasList )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)atlasList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
    }
  }
}


void __fastcall WarBoardEventBossUIComponent__OnClick(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WarBoardEventBossUIComponent__PlayDaedAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardEventBossUIComponent___c__DisplayClass52_0_o *v11; // x20
  UnityEngine_Component_o *bossIconSp; // x0
  __int64 v13; // x1
  struct UnityEngine_GameObject_o *deadAnimPrefab; // x22
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Action_o *v17; // x19
  System_Action_o *v18; // x19

  if ( (byte_418400E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAction);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__, v8);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__, v9);
    sub_B2C35C(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v10);
    byte_418400E = 1;
  }
  v11 = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)sub_B2C42C(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_14;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields, this);
  v11->fields.endAction = endAction;
  sub_B2C2F8(&v11->fields.endAction, endAction);
  deadAnimPrefab = this->fields.deadAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)deadAnimPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v15, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(v15, 0LL);
  if ( !v15 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v15,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0LL);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
        ActionExtensions__Call(v11->fields.endAction, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B2C434(bossIconSp, v13);
  }
  v17 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v17, 0LL);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].monitor = v18;
  sub_B2C2F8(&Component_srcLineSprite[1].monitor, v18);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardEventBossUIComponent___c__DisplayClass54_0_o *v11; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v18; // w1
  int64_t v19; // x8
  struct WarBoardUserServantData_o *v20; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  EasingObject_o *easingObj; // x20
  System_Action_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_4184010 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAction);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__, v8);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__, v9);
    sub_B2C35C(&WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo, v10);
    byte_4184010 = 1;
  }
  v11 = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)sub_B2C42C(WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass54_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_20;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields.__4__this, this);
  v11->fields.endAction = endAction;
  sub_B2C2F8(&v11->fields.endAction, endAction);
  if ( this->fields.isPointBreak )
  {
    oldBossInfo = this->fields.oldBossInfo;
    if ( !oldBossInfo )
      goto LABEL_20;
    p_defeatPoint = &oldBossInfo->fields.defeatPoint;
    goto LABEL_9;
  }
  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
  {
    p_defeatPoint = &bossPieceData->fields._breakPoint_k__BackingField;
LABEL_9:
    v18 = *p_defeatPoint;
    goto LABEL_10;
  }
  v18 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v18, v14);
  v11->fields.maxHp = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v19 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v19 = (int)MaxHpByBreakPoint;
  }
  v11->fields.totalHp = v19;
  v20 = this->fields.oldBossInfo;
  if ( !v20 )
    goto LABEL_20;
  if ( v19 == v20->fields.currentHp )
  {
    ActionExtensions__Call(v11->fields.endAction, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v11->fields.easingObj = (struct EasingObject_o *)Component_UIWidget;
  sub_B2C2F8(&v11->fields, Component_UIWidget);
  easingObj = v11->fields.easingObj;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__,
    0LL);
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__,
    0LL);
  if ( !easingObj )
LABEL_20:
    sub_B2C434(MaxHpByBreakPoint, v13);
  EasingObject__Play(easingObj, duration, v24, v25, 0.0, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardEventBossUIComponent___c__DisplayClass55_0_o *v11; // x19
  UIProgressBar_o *hpBarSlider; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v16; // w1
  float value; // s0
  WarBoardPieceData_o *v18; // x0
  double v19; // d0
  float v20; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *Component_UIWidget; // x0
  EasingObject_o *easingObj; // x20
  System_Action_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_4184011 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAction);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v7);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__, v8);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__, v9);
    sub_B2C35C(&WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo, v10);
    byte_4184011 = 1;
  }
  v11 = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)sub_B2C42C(WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass55_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields.__4__this, this);
  v11->fields.endAction = endAction;
  sub_B2C2F8(&v11->fields.endAction, endAction);
  bossPieceData = this->fields.bossPieceData;
  v16 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  v11->fields.maxHp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v16, v14);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_13;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v18 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v19 = v18 ? (double)WarBoardPieceData__get_CurrentHp(v18, 0LL) : 0.0;
  v20 = v19 / (double)v11->fields.maxHp;
  this->fields.HPto = UnityEngine_Mathf__Clamp01(v20, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         gameObject,
                         (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  v11->fields.easingObj = (struct EasingObject_o *)Component_UIWidget;
  sub_B2C2F8(&v11->fields, Component_UIWidget);
  easingObj = v11->fields.easingObj;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__,
    0LL);
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v11,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__,
    0LL);
  if ( !easingObj )
LABEL_13:
    sub_B2C434(hpBarSlider, v13);
  EasingObject__Play(easingObj, duration, v24, v25, 0.0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardEventBossUIComponent___c__DisplayClass53_0_o *v10; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v12; // x1
  System_Action_o **p_endAction; // x20
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  WarBoardEventBossUIComponent_BreakIcon_o *v16; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *pointBreakAnimPrefab; // x23
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x23
  CommonEffectActionComponent_o *Component_srcLineSprite; // x22
  const MethodInfo *v22; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v26; // x19
  int v27; // s0
  const MethodInfo *v31; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v33; // x9
  int32_t v34; // w2
  __int64 v35; // x0

  if ( (byte_418400F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAction);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__, v8);
    sub_B2C35C(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v9);
    byte_418400F = 1;
  }
  v10 = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)sub_B2C42C(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_25;
  v10->fields.__4__this = this;
  sub_B2C2F8(&v10->fields, this);
  v10->fields.endAction = endAction;
  p_endAction = &v10->fields.endAction;
  sub_B2C2F8(&v10->fields.endAction, endAction);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)UnityEngine_Mathf__Max_40694800(0, oldBossInfo->fields.defeatPoint - 1, 0LL);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_25;
  if ( (unsigned int)Sprite >= breakIconList->max_length )
  {
    v35 = sub_B2C460(Sprite);
    sub_B2C400(v35, 0LL);
  }
  v16 = breakIconList->m_Items[(int)Sprite];
  if ( !v16 )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)v16->fields.Sprite;
  if ( !Sprite )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = this->fields.pointBreakAnimPrefab;
  v19 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)pointBreakAnimPrefab,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_31331952(v20, v19, 0LL);
  GameObjectExtensions__ResetLocalPosition(v20, 0LL);
  if ( !v20 )
    goto LABEL_25;
  Component_srcLineSprite = (CommonEffectActionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v20,
                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)v10,
      Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_srcLineSprite )
    {
      CommonEffectActionComponent__SetEventAction(Component_srcLineSprite, 0, v26, 0LL);
      return;
    }
LABEL_25:
    sub_B2C434(Sprite, v12);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v27 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v22);
  if ( !totalHpLabel )
    goto LABEL_25;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v27, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_25;
  v33 = this->fields.bossPieceData;
  if ( v33 )
    v34 = v33->fields._breakPoint_k__BackingField;
  else
    v34 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v34, v31);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*p_endAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 v14; // x1
  __int64 bossIconSp; // x0
  const MethodInfo *v16; // x2
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  const MethodInfo *v18; // x2
  struct WarBoardStageBossEntity_o *v19; // x8
  _DWORD *v20; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v23; // x8
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  WarBoardUserServantData_o *v26; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v29; // x9
  struct System_Int32_array *breakHp; // x1
  const MethodInfo *v31; // x2
  struct WarBoardUserServantData_o *v32; // x23
  WarBoardUserServantData_o *v33; // x23
  struct WarBoardUserServantData_o **v34; // x22
  struct WarBoardUserServantData_o *v35; // x8
  struct WarBoardUserServantData_o *v36; // x9
  struct System_Int32_array *v37; // x1
  struct WarBoardPieceData_o *v38; // x9
  struct WarBoardUserServantData_o *v39; // x8
  struct WarBoardPieceData_o *v40; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  int defeatPoint; // w10
  struct WarBoardUserServantData_o *v43; // x8
  float v44; // s0
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v46; // x8
  double v47; // d8
  float v48; // s0
  float v49; // s0
  WarBoardPieceData_o *bossPieceData; // x0
  double v51; // d0
  float v52; // s0
  float v53; // s0
  const MethodInfo *v54; // x2
  struct WarBoardUserServantData_o *v55; // x8
  const MethodInfo *v56; // x3
  struct WarBoardUserServantData_o *v57; // x8
  struct WarBoardStageBossEntity_o *v58; // x8
  UISprite_o *v59; // x20
  int idx; // w22
  Il2CppObject *v61; // x21
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  const MethodInfo *v70; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v72; // x0
  System_String_o *v73; // x0
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x2
  struct WarBoardUserServantData_o *v77; // x8
  float v78; // s0
  float v79; // s1
  float v80; // s2
  float v81; // s3
  float v82; // s8
  float v83; // s9
  float v84; // s10
  float v85; // s11
  const MethodInfo *v86; // x2
  struct WarBoardStageBossEntity_o *v87; // x8
  UILabel_o *bossName; // x19
  __int64 v89; // x0
  int v90; // [xsp+0h] [xbp-60h] BYREF
  int v91; // [xsp+4h] [xbp-5Ch] BYREF
  int v92; // [xsp+8h] [xbp-58h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184005 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, warBoardDataEntity);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B2C35C(&WarBoardUserServantData_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_23229/*"war_board_boss_hp_frame"*/, v7);
    sub_B2C35C(&StringLiteral_23232/*"war_board_boss_hp_white"*/, v8);
    sub_B2C35C(&StringLiteral_23231/*"war_board_boss_hp_upper_{0}"*/, v9);
    sub_B2C35C(&StringLiteral_23233/*"war_board_boss_icon_{0}{1:D2}"*/, v10);
    sub_B2C35C(&StringLiteral_23228/*"war_board_boss_hp_back"*/, v11);
    sub_B2C35C(&StringLiteral_23230/*"war_board_boss_hp_lower_{0}"*/, v12);
    byte_4184005 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_B2C2F8(&this->fields.warBoardDataEnt, warBoardDataEntity);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_72;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0LL);
  bossIconSp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_72;
  if ( !bossIconSp )
    goto LABEL_72;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          v16);
  v19 = this->fields.warBoardStageBossEnt;
  if ( !v19 )
    goto LABEL_72;
  v20 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v19->fields.idx, v18);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_B2C2F8(&this->fields.currentBossInfo, StageBossData);
  if ( !this->fields.currentBossInfo )
  {
    bossIconSp = (__int64)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bossIconSp, 0LL);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
        return;
      }
    }
    goto LABEL_72;
  }
  bossIconSp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !bossIconSp )
    goto LABEL_72;
  v23 = this->fields.warBoardStageBossEnt;
  if ( !v23 )
    goto LABEL_72;
  bossIconSp = *(_QWORD *)(bossIconSp + 432);
  if ( !bossIconSp )
    goto LABEL_72;
  EventBossPiece = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v23->fields.idx, 0LL);
  this->fields.bossPieceData = EventBossPiece;
  p_bossPieceData = &this->fields.bossPieceData;
  sub_B2C2F8(&this->fields.bossPieceData, EventBossPiece);
  if ( !v20 || (int)v20[6] < 3 )
    goto LABEL_31;
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  if ( v20[8] == (*p_currentBossInfo)->fields.stageBossIdx )
  {
    v26 = (WarBoardUserServantData_o *)sub_B2C42C(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v26, 0LL);
    this->fields.oldBossInfo = v26;
    p_oldBossInfo = &this->fields.oldBossInfo;
    sub_B2C2F8(&this->fields.oldBossInfo, v26);
    currentBossInfo = this->fields.currentBossInfo;
    if ( !currentBossInfo )
      goto LABEL_72;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v29 = *p_oldBossInfo;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    breakHp = (*p_currentBossInfo)->fields.breakHp;
    v29->fields.breakHp = breakHp;
    sub_B2C2F8(&v29->fields.breakHp, breakHp);
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    if ( v20[6] <= 2u )
      goto LABEL_73;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.defeatPoint = v20[10];
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.hp = (*p_currentBossInfo)->fields.hp;
    if ( v20[6] <= 1u )
    {
LABEL_73:
      v89 = sub_B2C460(bossIconSp);
      sub_B2C400(v89, 0LL);
    }
    v32 = *p_oldBossInfo;
    if ( !v32 )
      goto LABEL_72;
    bossIconSp = (unsigned int)v20[9];
  }
  else
  {
LABEL_31:
    v33 = (WarBoardUserServantData_o *)sub_B2C42C(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v33, 0LL);
    this->fields.oldBossInfo = v33;
    v34 = &this->fields.oldBossInfo;
    sub_B2C2F8(&this->fields.oldBossInfo, v33);
    v35 = this->fields.currentBossInfo;
    if ( !v35 )
      goto LABEL_72;
    if ( !*v34 )
      goto LABEL_72;
    (*v34)->fields.stageBossIdx = v35->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v36 = *v34;
    if ( !*v34 )
      goto LABEL_72;
    v37 = (*p_currentBossInfo)->fields.breakHp;
    v36->fields.breakHp = v37;
    sub_B2C2F8(&v36->fields.breakHp, v37);
    if ( !*p_currentBossInfo || !*v34 )
      goto LABEL_72;
    (*v34)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    v38 = *p_bossPieceData;
    v39 = *v34;
    if ( *p_bossPieceData )
      LODWORD(v38) = v38->fields._breakPoint_k__BackingField;
    if ( !v39 )
      goto LABEL_72;
    v39->fields.defeatPoint = (int)v38;
    if ( !*p_currentBossInfo || !*v34 )
      goto LABEL_72;
    (*v34)->fields.hp = (*p_currentBossInfo)->fields.hp;
    bossIconSp = (__int64)*p_bossPieceData;
    v32 = *v34;
    if ( *p_bossPieceData )
      bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
    if ( !v32 )
      goto LABEL_72;
  }
  v32->fields.currentHp = bossIconSp;
  v40 = *p_bossPieceData;
  if ( *p_bossPieceData )
    LODWORD(v40) = v40->fields._breakPoint_k__BackingField;
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_72;
  defeatPoint = oldBossInfo->fields.defeatPoint;
  this->fields.isPointBreak = (int)v40 < defeatPoint;
  if ( (int)v40 < defeatPoint )
  {
    bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, oldBossInfo->fields.defeatPoint, v31);
    v43 = this->fields.oldBossInfo;
    if ( !v43 )
      goto LABEL_72;
    v44 = (double)v43->fields.currentHp / (double)bossIconSp;
    HPfrom = UnityEngine_Mathf__Clamp01(v44, 0LL);
    bossIconSp = (__int64)this->fields.hpBarSlider;
    this->fields.HPfrom = HPfrom;
    this->fields.HPto = 0.0;
    if ( !bossIconSp )
      goto LABEL_72;
    goto LABEL_62;
  }
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, (*p_currentBossInfo)->fields.defeatPoint, v31);
  v46 = this->fields.oldBossInfo;
  if ( !v46 )
    goto LABEL_72;
  v47 = (double)bossIconSp;
  v48 = (double)v46->fields.currentHp / (double)bossIconSp;
  v49 = UnityEngine_Mathf__Clamp01(v48, 0LL);
  bossPieceData = this->fields.bossPieceData;
  this->fields.HPfrom = v49;
  v51 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
  v52 = v51 / v47;
  v53 = UnityEngine_Mathf__Clamp01(v52, 0LL);
  bossIconSp = (__int64)this->fields.hpBarSlider;
  this->fields.HPto = v53;
  if ( !bossIconSp )
LABEL_72:
    sub_B2C434(bossIconSp, v14);
  HPfrom = this->fields.HPfrom;
LABEL_62:
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
  v55 = this->fields.oldBossInfo;
  if ( !v55 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetTotalHpText(this, v55->fields.currentHp, v54);
  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
  if ( !bossIconSp )
    goto LABEL_72;
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
  v57 = this->fields.oldBossInfo;
  if ( !v57 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, v57->fields.maxDefeatPoint, v57->fields.defeatPoint, v56);
  v58 = this->fields.warBoardStageBossEnt;
  if ( !v58 )
    goto LABEL_72;
  v59 = this->fields.bossIconSp;
  idx = v58->fields.idx;
  iconId = v58->fields.iconId;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v92 = idx;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  v63 = System_String__Format_44301068((System_String_o *)StringLiteral_23233/*"war_board_boss_icon_{0}{1:D2}"*/, v61, v62, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v59, v63, v64);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_23229/*"war_board_boss_hp_frame"*/,
    v65);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_23228/*"war_board_boss_hp_back"*/,
    v66);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v91 = idx;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
  v69 = System_String__Format((System_String_o *)StringLiteral_23230/*"war_board_boss_hp_lower_{0}"*/, v68, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v69, v70);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v90 = idx;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v90);
  v73 = System_String__Format((System_String_o *)StringLiteral_23231/*"war_board_boss_hp_upper_{0}"*/, v72, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v73, v74);
  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                 this,
                 this->fields.hpBarWhiteSprite,
                 (System_String_o *)StringLiteral_23232/*"war_board_boss_hp_white"*/,
                 v75);
  v77 = this->fields.oldBossInfo;
  if ( !v77 )
    goto LABEL_72;
  *(UnityEngine_Color_o *)&v78 = WarBoardEventBossUIComponent__GetTextEffectColor(this, v77->fields.defeatPoint, v76);
  bossIconSp = (__int64)this->fields.totalHpLabel;
  if ( !bossIconSp )
    goto LABEL_72;
  v82 = v78;
  v83 = v79;
  v84 = v80;
  v85 = v81;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v78, 0LL);
  bossIconSp = (__int64)this->fields.bossName;
  if ( !bossIconSp )
    goto LABEL_72;
  v94.fields.r = v82;
  v94.fields.g = v83;
  v94.fields.b = v84;
  v94.fields.a = v85;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, v94, 0LL);
  v87 = this->fields.warBoardStageBossEnt;
  if ( !v87 )
    goto LABEL_72;
  bossName = this->fields.bossName;
  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                          v87->fields.idx,
                          v86);
  if ( !bossName )
    goto LABEL_72;
  UILabel__set_text(bossName, (System_String_o *)bossIconSp, 0LL);
}


bool __fastcall WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
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

  if ( (byte_418400D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_418400D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    IsNullOrEmpty = this->fields.atlasList;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
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


void __fastcall WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *totalHpLabel; // x20
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4184006 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, hp);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3277/*"COMMON_NUM_FORMAT"*/, v6);
    byte_4184006 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_NUM_FORMAT"*/, 0LL);
  v12 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v12);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !totalHpLabel )
    sub_B2C434(v10, v11);
  UILabel__set_text(totalHpLabel, v10, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__Setup(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        WarBoardStageBossEntity_o *warBoardStageBossEnt,
        WarBoardDataEntity_o *warBoardDataEnt,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_B2C2F8(&this->fields.warBoardStageBossEnt, warBoardStageBossEnt);
  this->fields.assetData = assetData;
  sub_B2C2F8(&this->fields.assetData, assetData);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v11);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v12);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetupBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t maxCount,
        int32_t restCount,
        const MethodInfo *method)
{
  long double v4; // q0
  long double v5; // q8
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  int max_length; // w22
  WarBoardEventBossUIComponent_o *v9; // x19
  il2cpp_array_size_t v10; // w20
  WarBoardEventBossUIComponent_BreakIcon_o *v11; // x8
  int v13; // w23
  int32_t v14; // w25
  WarBoardEventBossUIComponent_BreakIcon_o *v15; // x24
  const MethodInfo *v16; // x3
  UISprite_o *Sprite; // x1
  System_String_o *DisabledSpriteName; // x2
  struct WarBoardEventBossUIComponent_BreakIcon_o *v19; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *v20; // x8
  WarBoardEventBossUIComponent_c *klass; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *breakIcon_11; // x8
  __int64 v23; // x0

  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_33;
  max_length = breakIconList->max_length;
  v9 = this;
  if ( restCount <= 9 )
  {
    if ( max_length < 1 )
    {
LABEL_29:
      breakIcon_11 = v9->fields.breakIcon_11;
      if ( breakIcon_11 )
      {
        this = (WarBoardEventBossUIComponent_o *)breakIcon_11->fields.Sprite;
        if ( this )
        {
          klass = this->klass;
          LODWORD(v4) = 0;
          goto LABEL_32;
        }
      }
LABEL_33:
      sub_B2C434(this, *(_QWORD *)&maxCount);
    }
    v13 = 1;
    LODWORD(v5) = 1.0;
    while ( 1 )
    {
      v14 = v13 - 1;
      if ( v13 - 1 >= breakIconList->max_length )
        goto LABEL_34;
      v15 = breakIconList->m_Items[v14];
      if ( !v15 )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)v15->fields.Sprite;
      if ( !this )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                 this,
                                                 this->klass[1]._1.declaringType,
                                                 0.0);
      if ( v14 < restCount )
        break;
      if ( v14 < maxCount )
      {
        Sprite = v15->fields.Sprite;
        DisabledSpriteName = v15->fields.DisabledSpriteName;
        goto LABEL_20;
      }
LABEL_22:
      if ( v13 >= max_length )
        goto LABEL_29;
      breakIconList = v9->fields.breakIconList;
      ++v13;
      if ( !breakIconList )
        goto LABEL_33;
    }
    Sprite = v15->fields.Sprite;
    DisabledSpriteName = v15->fields.EnabledSpriteName;
LABEL_20:
    WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(v9, Sprite, DisabledSpriteName, v16);
    this = (WarBoardEventBossUIComponent_o *)v15->fields.Sprite;
    if ( !this )
      goto LABEL_33;
    this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
                                               this,
                                               this->klass[1]._1.declaringType,
                                               v5);
    goto LABEL_22;
  }
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < breakIconList->max_length )
    {
      v11 = breakIconList->m_Items[v10];
      if ( v11 )
      {
        this = (WarBoardEventBossUIComponent_o *)v11->fields.Sprite;
        if ( this )
        {
          this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(WarBoardEventBossUIComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
                                                     this,
                                                     this->klass[1]._1.declaringType,
                                                     0.0);
          if ( (int)++v10 >= max_length )
            goto LABEL_25;
          breakIconList = v9->fields.breakIconList;
          if ( breakIconList )
            continue;
        }
      }
      goto LABEL_33;
    }
LABEL_34:
    v23 = sub_B2C460(this);
    sub_B2C400(v23, 0LL);
  }
LABEL_25:
  v19 = v9->fields.breakIcon_11;
  if ( !v19 )
    goto LABEL_33;
  this = (WarBoardEventBossUIComponent_o *)WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                                             v9,
                                             v19->fields.Sprite,
                                             v19->fields.EnabledSpriteName,
                                             method);
  v20 = v9->fields.breakIcon_11;
  if ( !v20 )
    goto LABEL_33;
  this = (WarBoardEventBossUIComponent_o *)v20->fields.Sprite;
  if ( !this )
    goto LABEL_33;
  klass = this->klass;
  LODWORD(v4) = 1.0;
LABEL_32:
  ((void (__fastcall *)(long double))klass[1]._1.castClass)(v4);
}


void __fastcall WarBoardEventBossUIComponent__UpdateOldBossData(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *currentBossInfo; // x9
  WarBoardPieceData_o *bossPieceData; // x0
  struct WarBoardUserServantData_o *v6; // x20
  struct WarBoardPieceData_o *v7; // x9
  struct WarBoardUserServantData_o *v8; // x8

  oldBossInfo = this->fields.oldBossInfo;
  if ( oldBossInfo )
  {
    currentBossInfo = this->fields.currentBossInfo;
    if ( currentBossInfo )
    {
      oldBossInfo->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
      bossPieceData = this->fields.bossPieceData;
      v6 = this->fields.oldBossInfo;
      if ( bossPieceData )
        bossPieceData = (WarBoardPieceData_o *)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
      if ( !v6 )
        goto LABEL_11;
      v6->fields.currentHp = (int)bossPieceData;
      v7 = this->fields.bossPieceData;
      v8 = this->fields.oldBossInfo;
      if ( v7 )
        LODWORD(v7) = v7->fields._breakPoint_k__BackingField;
      if ( !v8 )
LABEL_11:
        sub_B2C434(bossPieceData, method);
      v8->fields.defeatPoint = (int)v7;
    }
  }
}


int32_t __fastcall WarBoardEventBossUIComponent__get_CurrentBossHp(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *bossPieceData; // x0

  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
    LODWORD(bossPieceData) = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
  return (int)bossPieceData;
}


int32_t __fastcall WarBoardEventBossUIComponent__get_CurrentDefeatPoint(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *bossPieceData; // x8

  bossPieceData = this->fields.bossPieceData;
  if ( bossPieceData )
    return bossPieceData->fields._breakPoint_k__BackingField;
  else
    return 0;
}


int32_t __fastcall WarBoardEventBossUIComponent__get_StageBossIdx(
        WarBoardEventBossUIComponent_o *this,
        const MethodInfo *method)
{
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8

  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( warBoardStageBossEnt )
    return warBoardStageBossEnt->fields.idx;
  else
    return 0;
}


void __fastcall WarBoardEventBossUIComponent_BreakIcon___ctor(
        WarBoardEventBossUIComponent_BreakIcon_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass37_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardEventBossUIComponent___c__DisplayClass37_0___GetStageBossName_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass37_0_o *this,
        WarBoardPieceData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_StageBossIdx(n, 0LL) == this->fields.stageBossIndex;
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayDaedAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardEventBossUIComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)_4__this->fields.bossIconSp) == 0LL
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)UnityEngine_Component__get_gameObject(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass52_0___PlayDaedAnim_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent___c__DisplayClass53_0___PlayPointBreakAnim_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  struct WarBoardEventBossUIComponent_o *_4__this; // x21
  UILabel_o *totalHpLabel; // x20
  int32_t CurrentDefeatPoint; // w0
  int v6; // s0
  struct WarBoardEventBossUIComponent_o *v10; // x20
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  int32_t maxDefeatPoint; // w21
  int32_t v13; // w0
  struct WarBoardEventBossUIComponent_o *v14; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_7;
  totalHpLabel = _4__this->fields.totalHpLabel;
  CurrentDefeatPoint = WarBoardEventBossUIComponent__get_CurrentDefeatPoint(this->fields.__4__this, 0LL);
  *(UnityEngine_Color_o *)&v6 = WarBoardEventBossUIComponent__GetTextEffectColor(_4__this, CurrentDefeatPoint, 0LL);
  if ( !totalHpLabel
    || (UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v6, 0LL), (v10 = this->fields.__4__this) == 0LL)
    || (currentBossInfo = v10->fields.currentBossInfo) == 0LL
    || (maxDefeatPoint = currentBossInfo->fields.maxDefeatPoint,
        v13 = WarBoardEventBossUIComponent__get_CurrentDefeatPoint(this->fields.__4__this, 0LL),
        WarBoardEventBossUIComponent__SetupBreakPoint(v10, maxDefeatPoint, v13, 0LL),
        (v14 = this->fields.__4__this) == 0LL) )
  {
LABEL_7:
    sub_B2C434(this, method);
  }
  v14->fields.isPointBreak = 0;
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___PlayHpCut_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  struct WarBoardEventBossUIComponent_o *_4__this; // x9
  WarBoardEventBossUIComponent___c__DisplayClass54_0_o *v4; // x19
  float v5; // s0
  struct WarBoardEventBossUIComponent_o *v6; // x8
  float v7; // s8
  double v8; // d3
  double v9; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_9;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this
    || (v5 = UnityEngine_Mathf__Lerp(_4__this->fields.HPfrom, _4__this->fields.HPto, easingObj->fields.mStartTime, 0LL),
        (v6 = v4->fields.__4__this) == 0LL)
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)v6->fields.hpBarSlider) == 0LL
    || (v7 = v5,
        UIProgressBar__set_value((UIProgressBar_o *)this, v5, 0LL),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_B2C434(this, method);
  }
  v8 = v7 * (double)v4->fields.maxHp;
  v9 = -v8;
  if ( v8 != INFINITY )
    v9 = v7 * (double)v4->fields.maxHp;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, (__int64)v9, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___PlayHpCut_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, this->fields.totalHp, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___ctor(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___PlayHpRecover_b__0(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  struct WarBoardEventBossUIComponent_o *_4__this; // x9
  WarBoardEventBossUIComponent___c__DisplayClass55_0_o *v4; // x19
  float v5; // s0
  struct WarBoardEventBossUIComponent_o *v6; // x8
  float v7; // s8
  double v8; // d3
  double v9; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj )
    goto LABEL_9;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( !_4__this
    || (v5 = UnityEngine_Mathf__Lerp(_4__this->fields.HPfrom, _4__this->fields.HPto, easingObj->fields.mStartTime, 0LL),
        (v6 = v4->fields.__4__this) == 0LL)
    || (this = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)v6->fields.hpBarSlider) == 0LL
    || (v7 = v5,
        UIProgressBar__set_value((UIProgressBar_o *)this, v5, 0LL),
        (this = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_9:
    sub_B2C434(this, method);
  }
  v8 = v7 * (double)v4->fields.maxHp;
  v9 = -v8;
  if ( v8 != INFINITY )
    v9 = v7 * (double)v4->fields.maxHp;
  WarBoardEventBossUIComponent__SetTotalHpText((WarBoardEventBossUIComponent_o *)this, (__int64)v9, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___PlayHpRecover_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_o *_4__this; // x20
  int32_t CurrentBossHp; // w0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(this, method);
  CurrentBossHp = WarBoardEventBossUIComponent__get_CurrentBossHp(this->fields.__4__this, 0LL);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentBossHp, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}