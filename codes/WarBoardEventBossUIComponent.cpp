void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct WarBoardEventBossUIComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F63C2 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardEventBossUIComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_15351, v8);
    sub_B16FFC(&StringLiteral_15352, v9);
    byte_40F63C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardEventBossUIComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15352;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15352;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_15351;
  v12->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15351;
  sub_B16F98((BattleServantConfConponent_o *)&v12->BOSS_POINT_BREAK_EFFECT_PREFAB, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F63C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIAtlas__TypeInfo, v6);
    byte_40F63C1 = 1;
  }
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UIAtlas__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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

  if ( (byte_40F63C0 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, hexStrColor);
    byte_40F63C0 = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v4 = System_Convert__ToInt32_41757760(hexStrColor, 16, 0LL);
  v14.fields.a = (float)(unsigned __int8)v4;
  v14.fields.r = (float)BYTE2(v4) / 255.0;
  v14.fields.g = (float)BYTE1(v4) / 255.0;
  v14.fields.b = v14.fields.a / 255.0;
  v12 = 0LL;
  v13 = 0LL;
  UnityEngine_Color___ctor_40666012(v14, v5, v6, v7, (const MethodInfo *)&v12);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Text_StringBuilder_o *v8; // x20
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v10; // x8
  struct WarBoardUserServantData_o *v11; // x8

  if ( (byte_40F63BF & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1223, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40F63BF = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1;
  v8 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, method, v2, v3, v4);
  System_Text_StringBuilder___ctor(v8, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v8
    || (System_Text_StringBuilder__Append_41917580(v8, oldBossInfo->fields.stageBossIdx, 0LL),
        System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223, 0LL),
        (v10 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_41917580(v8, v10->fields.currentHp, 0LL),
        System_Text_StringBuilder__Append_41914240(v8, (System_String_o *)StringLiteral_1223, 0LL),
        (v11 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_B170D4();
  }
  System_Text_StringBuilder__Append_41917580(v8, v11->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F63B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, name);
    byte_40F63B7 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_40F63B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_int____66807072, *(_QWORD *)&restBreakPoint);
    byte_40F63B6 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_18B81B4 *)Method_BasicHelper_IndexValue_int____66807072);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardEventBossUIComponent___c__DisplayClass37_0_o *v12; // x20
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  _QWORD *monitor; // x8
  __int64 v19; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_40F63B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&string_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__, v10);
    sub_B16FFC(&WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo, v11);
    byte_40F63B4 = 1;
  }
  v12 = (WarBoardEventBossUIComponent___c__DisplayClass37_0_o *)sub_B170CC(
                                                                  WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo,
                                                                  *(_QWORD *)&stageBossIndex,
                                                                  method,
                                                                  v3,
                                                                  v4);
  WarBoardEventBossUIComponent___c__DisplayClass37_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.stageBossIndex = stageBossIndex,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[4].monitor) == 0LL )
  {
    sub_B170D4();
  }
  v19 = monitor[6];
  if ( v19
    && *(_QWORD *)(v19 + 24)
    && (v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                   v14,
                                                                                   v15,
                                                                                   v16,
                                                                                   v17),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v20,
          (Il2CppObject *)v12,
          Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__),
        (USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                            (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v19,
                                                                            (System_Func_T__bool__o *)v20,
                                                                            (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
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

  if ( (byte_40F63B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_string___, *(_QWORD *)&restBreakPoint);
    sub_B16FFC(&string___TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1001, v6);
    byte_40F63B5 = 1;
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
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1001;
    TextEffectColors = (System_String_array *)sub_B17014(string___TypeInfo, 0LL, method);
  }
  v11 = (WarBoardEventBossUIComponent_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)TextEffectColors,
                                            v8,
                                            bossColor,
                                            (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_string___);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t v18; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  const MethodInfo *v22; // x2
  struct UnityEngine_GameObject_o *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // [xsp+8h] [xbp-28h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F63B8 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, ent);
    sub_B16FFC(&WarBoardEventBossUIComponent_TypeInfo, v5);
    byte_40F63B8 = 1;
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.deadAnimPrefab,
      (System_Int32_array **)GameObjectFromEventUIAssetData,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v18 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v30 = v18;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v21 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v20, 0LL);
    v23 = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v21, v22);
    this->fields.pointBreakAnimPrefab = v23;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.pointBreakAnimPrefab,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
  struct System_Collections_Generic_List_UIAtlas__o *v14; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F63B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&eventId);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23407, v9);
    sub_B16FFC(&StringLiteral_5361, v10);
    byte_40F63B9 = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v22 = i;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v16 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23407, v15, 0LL);
      v21 = eventId;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_5361, v17, v16, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
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
      v14 = this->fields.atlasList;
      if ( !v14 )
        goto LABEL_18;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
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
  struct UnityEngine_GameObject_o *deadAnimPrefab; // x22
  UnityEngine_GameObject_o *v27; // x22
  srcLineSprite_o *Component_srcLineSprite; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_Component_o *bossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40F63BB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__, v10);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__, v11);
    sub_B16FFC(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v12);
    byte_40F63BB = 1;
  }
  v13 = sub_B170CC(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, endAction, method, v3, v4);
  WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(
    (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)endAction, v20, v21, v22, v23, v24, v25);
  deadAnimPrefab = this->fields.deadAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)deadAnimPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v27, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(v27, 0LL);
  if ( !v27 )
    goto LABEL_14;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v27,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      gameObject = UnityEngine_Component__get_gameObject(bossIconSp, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0LL);
        return;
      }
    }
LABEL_14:
    sub_B170D4();
  }
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v29, v30, v31, v32);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v13,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v35, 0LL);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v13,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__,
    0LL);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v40;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
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
  const MethodInfo *v26; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v30; // w1
  __int64 CurrentHp; // x8
  WarBoardPieceData_o *v32; // x0
  struct WarBoardUserServantData_o *v33; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EasingObject_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x22

  if ( (byte_40F63BD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__, v10);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__, v11);
    sub_B16FFC(&WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo, v12);
    byte_40F63BD = 1;
  }
  v13 = sub_B170CC(WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo, endAction, method, v4, v5);
  WarBoardEventBossUIComponent___c__DisplayClass54_0___ctor(
    (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_20;
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 48) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 48), (System_Int32_array **)endAction, v20, v21, v22, v23, v24, v25);
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
    v30 = *p_defeatPoint;
    goto LABEL_10;
  }
  v30 = 0;
LABEL_10:
  *(_QWORD *)(v13 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v30, v26);
  if ( this->fields.isPointBreak || (v32 = this->fields.bossPieceData) == 0LL )
    CurrentHp = 0LL;
  else
    CurrentHp = WarBoardPieceData__get_CurrentHp(v32, 0LL);
  *(_QWORD *)(v13 + 40) = CurrentHp;
  v33 = this->fields.oldBossInfo;
  if ( !v33 )
    goto LABEL_20;
  if ( CurrentHp == v33->fields.currentHp )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 48), 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), Component_UIWidget, v36, v37, v38, v39, v40, v41);
  v42 = *(EasingObject_o **)(v13 + 16);
  v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v13,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__,
    0LL);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v13,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__,
    0LL);
  if ( !v42 )
LABEL_20:
    sub_B170D4();
  EasingObject__Play(v42, duration, v47, v52, 0.0, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
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
  const MethodInfo *v26; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v28; // w1
  UIProgressBar_o *hpBarSlider; // x0
  float value; // s0
  WarBoardPieceData_o *v31; // x0
  double v32; // d0
  float v33; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  EasingObject_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Action_o *v52; // x22

  if ( (byte_40F63BE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v9);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__, v10);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__, v11);
    sub_B16FFC(&WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo, v12);
    byte_40F63BE = 1;
  }
  v13 = sub_B170CC(WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo, endAction, method, v4, v5);
  WarBoardEventBossUIComponent___c__DisplayClass55_0___ctor(
    (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)endAction, v20, v21, v22, v23, v24, v25);
  bossPieceData = this->fields.bossPieceData;
  v28 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  *(_QWORD *)(v13 + 32) = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v28, v26);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_13;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v31 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v32 = v31 ? (double)WarBoardPieceData__get_CurrentHp(v31, 0LL) : 0.0;
  v33 = v32 / (double)*(__int64 *)(v13 + 32);
  this->fields.HPto = UnityEngine_Mathf__Clamp01(v33, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), Component_UIWidget, v36, v37, v38, v39, v40, v41);
  v42 = *(EasingObject_o **)(v13 + 16);
  v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v13,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__,
    0LL);
  v52 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v48, v49, v50, v51);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v13,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__,
    0LL);
  if ( !v42 )
LABEL_13:
    sub_B170D4();
  EasingObject__Play(v42, duration, v47, v52, 0.0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_o **v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  WarBoardEventBossUIComponent_BreakIcon_o *v31; // x8
  UnityEngine_Component_o *Sprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *pointBreakAnimPrefab; // x23
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_GameObject_o *v36; // x23
  CommonEffectActionComponent_o *Component_srcLineSprite; // x22
  __int64 v38; // x1
  const MethodInfo *v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v45; // x19
  int v46; // s0
  const MethodInfo *v50; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v52; // x9
  int32_t v53; // w2

  if ( (byte_40F63BC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__, v10);
    sub_B16FFC(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v11);
    byte_40F63BC = 1;
  }
  v12 = sub_B170CC(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, endAction, method, v3, v4);
  WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(
    (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_25;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = endAction;
  v19 = (System_Action_o **)(v12 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)endAction, v20, v21, v22, v23, v24, v25);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_25;
  v27 = UnityEngine_Mathf__Max_40727628(0, oldBossInfo->fields.defeatPoint - 1, 0LL);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_25;
  if ( (unsigned int)v27 >= breakIconList->max_length )
  {
    sub_B17100(v27, v28, v29);
    sub_B170A0();
  }
  v31 = breakIconList->m_Items[(int)v27];
  if ( !v31 )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)v31->fields.Sprite;
  if ( !Sprite )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = this->fields.pointBreakAnimPrefab;
  v35 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v36 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)pointBreakAnimPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_27425996(v36, v35, 0LL);
  GameObjectExtensions__ResetLocalPosition(v36, 0LL);
  if ( !v36 )
    goto LABEL_25;
  Component_srcLineSprite = (CommonEffectActionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v36,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v38, v39, v40, v41);
    System_Action___ctor(
      v45,
      (Il2CppObject *)v12,
      Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_srcLineSprite )
    {
      CommonEffectActionComponent__SetEventAction(Component_srcLineSprite, 0, v45, 0LL);
      return;
    }
LABEL_25:
    sub_B170D4();
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v46 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v39);
  if ( !totalHpLabel )
    goto LABEL_25;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v46, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_25;
  v52 = this->fields.bossPieceData;
  if ( v52 )
    v53 = v52->fields._breakPoint_k__BackingField;
  else
    v53 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v53, v50);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  UnityEngine_Behaviour_o *bossIconSp; // x0
  WebViewManager_o *Instance; // x0
  const MethodInfo *v21; // x2
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  System_Int32_array *EventBossUILoadData; // x0
  MethodInfo *v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct WarBoardStageBossEntity_o *v30; // x8
  int *v31; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  WebViewManager_o *v34; // x0
  struct WarBoardStageBossEntity_o *v35; // x8
  WarBoardData_o *monitor; // x0
  struct WarBoardPieceData_o *EventBossPiece; // x0
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  WarBoardUserServantData_o *v49; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v64; // x9
  System_Int32_array **breakHp; // x1
  __int64 v66; // x0
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  struct WarBoardUserServantData_o *v69; // x23
  WarBoardPieceData_o *v70; // x0
  WarBoardUserServantData_o *v71; // x23
  struct WarBoardUserServantData_o **v72; // x22
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct WarBoardUserServantData_o *v85; // x8
  struct WarBoardUserServantData_o *v86; // x9
  System_Int32_array **v87; // x1
  struct WarBoardPieceData_o *v88; // x9
  struct WarBoardUserServantData_o *v89; // x8
  struct WarBoardPieceData_o *v90; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  int defeatPoint; // w10
  int64_t MaxHpByBreakPoint; // x0
  struct WarBoardUserServantData_o *v94; // x8
  float v95; // s0
  float HPfrom; // s0
  UIProgressBar_o *hpBarSlider; // x0
  UnityEngine_Component_o *v98; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v100; // x0
  struct WarBoardUserServantData_o *v101; // x8
  double v102; // d8
  float v103; // s0
  float v104; // s0
  WarBoardPieceData_o *bossPieceData; // x0
  double v106; // d0
  float v107; // s0
  float v108; // s0
  const MethodInfo *v109; // x2
  struct WarBoardUserServantData_o *v110; // x8
  UIProgressBar_o *hpBarSliderUnder; // x0
  const MethodInfo *v112; // x3
  struct WarBoardUserServantData_o *v113; // x8
  struct WarBoardStageBossEntity_o *v114; // x8
  UISprite_o *v115; // x20
  int idx; // w22
  Il2CppObject *v117; // x21
  Il2CppObject *v118; // x0
  System_String_o *v119; // x0
  const MethodInfo *v120; // x3
  const MethodInfo *v121; // x3
  const MethodInfo *v122; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v124; // x0
  System_String_o *v125; // x0
  const MethodInfo *v126; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v128; // x0
  System_String_o *v129; // x0
  const MethodInfo *v130; // x3
  const MethodInfo *v131; // x3
  const MethodInfo *v132; // x2
  struct WarBoardUserServantData_o *v133; // x8
  float v134; // s0
  float v135; // s1
  float v136; // s2
  float v137; // s3
  UILabel_o *totalHpLabel; // x0
  float v139; // s8
  float v140; // s9
  float v141; // s10
  float v142; // s11
  UILabel_o *bossName; // x0
  WarBoardEventBossUIComponent_o *v144; // x0
  const MethodInfo *v145; // x2
  struct WarBoardStageBossEntity_o *v146; // x8
  UILabel_o *v147; // x19
  System_String_o *StageBossName; // x0
  int v149; // [xsp+0h] [xbp-60h] BYREF
  int v150; // [xsp+4h] [xbp-5Ch] BYREF
  int v151; // [xsp+8h] [xbp-58h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F63B2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, warBoardDataEntity);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardUserServantData_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_23135, v12);
    sub_B16FFC(&StringLiteral_23138, v13);
    sub_B16FFC(&StringLiteral_23137, v14);
    sub_B16FFC(&StringLiteral_23139, v15);
    sub_B16FFC(&StringLiteral_23134, v16);
    sub_B16FFC(&StringLiteral_23136, v17);
    byte_40F63B2 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.warBoardDataEnt,
    (System_Int32_array **)warBoardDataEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  bossIconSp = (UnityEngine_Behaviour_o *)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_72;
  UnityEngine_Behaviour__set_enabled(bossIconSp, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_72;
  if ( !Instance )
    goto LABEL_72;
  EventBossUILoadData = WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)Instance,
                          warBoardStageBossEnt->fields.idx,
                          v21);
  v30 = this->fields.warBoardStageBossEnt;
  if ( !v30 )
    goto LABEL_72;
  v31 = (int *)EventBossUILoadData;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v30->fields.idx, v24);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentBossInfo,
    (System_Int32_array **)StageBossData,
    (System_String_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !this->fields.currentBossInfo )
  {
    v98 = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( v98 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v98, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
    }
    goto LABEL_72;
  }
  v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v34 )
    goto LABEL_72;
  v35 = this->fields.warBoardStageBossEnt;
  if ( !v35 )
    goto LABEL_72;
  monitor = (WarBoardData_o *)v34[4].monitor;
  if ( !monitor )
    goto LABEL_72;
  EventBossPiece = WarBoardData__GetEventBossPiece(monitor, v35->fields.idx, 0LL);
  this->fields.bossPieceData = EventBossPiece;
  p_bossPieceData = &this->fields.bossPieceData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bossPieceData,
    (System_Int32_array **)EventBossPiece,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( !v31 || v31[6] < 3 )
    goto LABEL_31;
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  if ( v31[8] == (*p_currentBossInfo)->fields.stageBossIdx )
  {
    v49 = (WarBoardUserServantData_o *)sub_B170CC(WarBoardUserServantData_TypeInfo, v45, v46, v47, v48);
    WarBoardUserServantData___ctor(v49, 0LL);
    this->fields.oldBossInfo = v49;
    p_oldBossInfo = &this->fields.oldBossInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.oldBossInfo,
      (System_Int32_array **)v49,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    currentBossInfo = this->fields.currentBossInfo;
    if ( !currentBossInfo )
      goto LABEL_72;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v64 = *p_oldBossInfo;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    breakHp = (System_Int32_array **)(*p_currentBossInfo)->fields.breakHp;
    v64->fields.breakHp = (struct System_Int32_array *)breakHp;
    sub_B16F98((BattleServantConfConponent_o *)&v64->fields.breakHp, breakHp, v57, v58, v59, v60, v61, v62);
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    if ( (unsigned int)v31[6] <= 2 )
      goto LABEL_73;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.defeatPoint = v31[10];
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.hp = (*p_currentBossInfo)->fields.hp;
    if ( (unsigned int)v31[6] <= 1 )
    {
LABEL_73:
      sub_B17100(v66, v67, v68);
      sub_B170A0();
    }
    v69 = *p_oldBossInfo;
    if ( !v69 )
      goto LABEL_72;
    LODWORD(v70) = v31[9];
  }
  else
  {
LABEL_31:
    v71 = (WarBoardUserServantData_o *)sub_B170CC(WarBoardUserServantData_TypeInfo, v45, v46, v47, v48);
    WarBoardUserServantData___ctor(v71, 0LL);
    this->fields.oldBossInfo = v71;
    v72 = &this->fields.oldBossInfo;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.oldBossInfo,
      (System_Int32_array **)v71,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    v85 = this->fields.currentBossInfo;
    if ( !v85 )
      goto LABEL_72;
    if ( !*v72 )
      goto LABEL_72;
    (*v72)->fields.stageBossIdx = v85->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v86 = *v72;
    if ( !*v72 )
      goto LABEL_72;
    v87 = (System_Int32_array **)(*p_currentBossInfo)->fields.breakHp;
    v86->fields.breakHp = (struct System_Int32_array *)v87;
    sub_B16F98((BattleServantConfConponent_o *)&v86->fields.breakHp, v87, v79, v80, v81, v82, v83, v84);
    if ( !*p_currentBossInfo || !*v72 )
      goto LABEL_72;
    (*v72)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    v88 = *p_bossPieceData;
    v89 = *v72;
    if ( *p_bossPieceData )
      LODWORD(v88) = v88->fields._breakPoint_k__BackingField;
    if ( !v89 )
      goto LABEL_72;
    v89->fields.defeatPoint = (int)v88;
    if ( !*p_currentBossInfo || !*v72 )
      goto LABEL_72;
    (*v72)->fields.hp = (*p_currentBossInfo)->fields.hp;
    v70 = *p_bossPieceData;
    v69 = *v72;
    if ( *p_bossPieceData )
      LODWORD(v70) = WarBoardPieceData__get_CurrentHp(v70, 0LL);
    if ( !v69 )
      goto LABEL_72;
  }
  v69->fields.currentHp = (int)v70;
  v90 = *p_bossPieceData;
  if ( *p_bossPieceData )
    LODWORD(v90) = v90->fields._breakPoint_k__BackingField;
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_72;
  defeatPoint = oldBossInfo->fields.defeatPoint;
  this->fields.isPointBreak = (int)v90 < defeatPoint;
  if ( (int)v90 < defeatPoint )
  {
    MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, oldBossInfo->fields.defeatPoint, v68);
    v94 = this->fields.oldBossInfo;
    if ( !v94 )
      goto LABEL_72;
    v95 = (double)v94->fields.currentHp / (double)MaxHpByBreakPoint;
    HPfrom = UnityEngine_Mathf__Clamp01(v95, 0LL);
    hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
    this->fields.HPfrom = HPfrom;
    this->fields.HPto = 0.0;
    if ( !hpBarSlider )
      goto LABEL_72;
    goto LABEL_62;
  }
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  v100 = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, (*p_currentBossInfo)->fields.defeatPoint, v68);
  v101 = this->fields.oldBossInfo;
  if ( !v101 )
    goto LABEL_72;
  v102 = (double)v100;
  v103 = (double)v101->fields.currentHp / (double)v100;
  v104 = UnityEngine_Mathf__Clamp01(v103, 0LL);
  bossPieceData = this->fields.bossPieceData;
  this->fields.HPfrom = v104;
  v106 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
  v107 = v106 / v102;
  v108 = UnityEngine_Mathf__Clamp01(v107, 0LL);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  this->fields.HPto = v108;
  if ( !hpBarSlider )
LABEL_72:
    sub_B170D4();
  HPfrom = this->fields.HPfrom;
LABEL_62:
  UIProgressBar__set_value(hpBarSlider, HPfrom, 0LL);
  v110 = this->fields.oldBossInfo;
  if ( !v110 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetTotalHpText(this, v110->fields.currentHp, v109);
  hpBarSliderUnder = (UIProgressBar_o *)this->fields.hpBarSliderUnder;
  if ( !hpBarSliderUnder )
    goto LABEL_72;
  UIProgressBar__set_value(hpBarSliderUnder, 0.0, 0LL);
  v113 = this->fields.oldBossInfo;
  if ( !v113 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, v113->fields.maxDefeatPoint, v113->fields.defeatPoint, v112);
  v114 = this->fields.warBoardStageBossEnt;
  if ( !v114 )
    goto LABEL_72;
  v115 = this->fields.bossIconSp;
  idx = v114->fields.idx;
  iconId = v114->fields.iconId;
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v151 = idx;
  v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v151);
  v119 = System_String__Format_43739268((System_String_o *)StringLiteral_23139, v117, v118, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v115, v119, v120);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_23135,
    v121);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_23134,
    v122);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v150 = idx;
  v124 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v150);
  v125 = System_String__Format((System_String_o *)StringLiteral_23136, v124, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v125, v126);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v149 = idx;
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149);
  v129 = System_String__Format((System_String_o *)StringLiteral_23137, v128, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v129, v130);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.hpBarWhiteSprite,
    (System_String_o *)StringLiteral_23138,
    v131);
  v133 = this->fields.oldBossInfo;
  if ( !v133 )
    goto LABEL_72;
  *(UnityEngine_Color_o *)&v134 = WarBoardEventBossUIComponent__GetTextEffectColor(this, v133->fields.defeatPoint, v132);
  totalHpLabel = this->fields.totalHpLabel;
  if ( !totalHpLabel )
    goto LABEL_72;
  v139 = v134;
  v140 = v135;
  v141 = v136;
  v142 = v137;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v134, 0LL);
  bossName = this->fields.bossName;
  if ( !bossName )
    goto LABEL_72;
  v153.fields.r = v139;
  v153.fields.g = v140;
  v153.fields.b = v141;
  v153.fields.a = v142;
  UILabel__set_effectColor(bossName, v153, 0LL);
  v146 = this->fields.warBoardStageBossEnt;
  if ( !v146 )
    goto LABEL_72;
  v147 = this->fields.bossName;
  StageBossName = WarBoardEventBossUIComponent__GetStageBossName(v144, v146->fields.idx, v145);
  if ( !v147 )
    goto LABEL_72;
  UILabel__set_text(v147, StageBossName, 0LL);
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
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F63BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40F63BA = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
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
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F63B3 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, hp);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3268, v6);
    byte_40F63B3 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3268, 0LL);
  v11 = hp;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v11);
  v10 = System_String__Format(v8, v9, 0LL);
  if ( !totalHpLabel )
    sub_B170D4();
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardStageBossEntity_o **p_warBoardStageBossEnt; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  this->fields.eventId = eventId;
  this->fields.warBoardStageBossEnt = warBoardStageBossEnt;
  p_warBoardStageBossEnt = &this->fields.warBoardStageBossEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.warBoardStageBossEnt,
    (System_Int32_array **)warBoardStageBossEnt,
    (System_String_array **)warBoardStageBossEnt,
    (System_String_array **)warBoardDataEnt,
    (System_Boolean_array **)assetData,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.assetData = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetData,
    (System_Int32_array **)assetData,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  WarBoardEventBossUIComponent__LoadLocalAtlas(this, eventId, v19);
  WarBoardEventBossUIComponent__LoadAnimPrefab(this, *p_warBoardStageBossEnt, v20);
  WarBoardEventBossUIComponent__SetDisp(this, warBoardDataEnt, v21);
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
  struct UISprite_o *v12; // x0
  int v14; // w23
  int32_t v15; // w25
  WarBoardEventBossUIComponent_BreakIcon_o *v16; // x24
  struct UISprite_o *v17; // x0
  const MethodInfo *v18; // x3
  UISprite_o *v19; // x1
  System_String_o *DisabledSpriteName; // x2
  struct UISprite_o *v21; // x0
  struct WarBoardEventBossUIComponent_BreakIcon_o *v22; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *v23; // x8
  struct UISprite_o *v24; // x0
  UISprite_c *klass; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_o *breakIcon_11; // x8
  struct UISprite_o *Sprite; // x0

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
        Sprite = breakIcon_11->fields.Sprite;
        if ( Sprite )
        {
          klass = Sprite->klass;
          LODWORD(v4) = 0;
          goto LABEL_32;
        }
      }
LABEL_33:
      sub_B170D4();
    }
    v14 = 1;
    LODWORD(v5) = 1.0;
    while ( 1 )
    {
      v15 = v14 - 1;
      if ( v14 - 1 >= breakIconList->max_length )
        goto LABEL_34;
      v16 = breakIconList->m_Items[v15];
      if ( !v16 )
        goto LABEL_33;
      v17 = v16->fields.Sprite;
      if ( !v17 )
        goto LABEL_33;
      this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v17->klass->vtable._8_set_alpha.method)(
                                                 v17,
                                                 v17->klass->vtable._9_CalculateFinalAlpha.methodPtr,
                                                 0.0);
      if ( v15 < restCount )
        break;
      if ( v15 < maxCount )
      {
        v19 = v16->fields.Sprite;
        DisabledSpriteName = v16->fields.DisabledSpriteName;
        goto LABEL_20;
      }
LABEL_22:
      if ( v14 >= max_length )
        goto LABEL_29;
      breakIconList = v9->fields.breakIconList;
      ++v14;
      if ( !breakIconList )
        goto LABEL_33;
    }
    v19 = v16->fields.Sprite;
    DisabledSpriteName = v16->fields.EnabledSpriteName;
LABEL_20:
    WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(v9, v19, DisabledSpriteName, v18);
    v21 = v16->fields.Sprite;
    if ( !v21 )
      goto LABEL_33;
    this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v21->klass->vtable._8_set_alpha.method)(
                                               v21,
                                               v21->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
        v12 = v11->fields.Sprite;
        if ( v12 )
        {
          this = (WarBoardEventBossUIComponent_o *)((__int64 (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v12->klass->vtable._8_set_alpha.method)(
                                                     v12,
                                                     v12->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
    sub_B17100(this, *(_QWORD *)&maxCount, *(_QWORD *)&restCount);
    sub_B170A0();
  }
LABEL_25:
  v22 = v9->fields.breakIcon_11;
  if ( !v22 )
    goto LABEL_33;
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(v9, v22->fields.Sprite, v22->fields.EnabledSpriteName, method);
  v23 = v9->fields.breakIcon_11;
  if ( !v23 )
    goto LABEL_33;
  v24 = v23->fields.Sprite;
  if ( !v24 )
    goto LABEL_33;
  klass = v24->klass;
  LODWORD(v4) = 1.0;
LABEL_32:
  ((void (__fastcall *)(long double))klass->vtable._8_set_alpha.method)(v4);
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
        LODWORD(bossPieceData) = WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL);
      if ( !v6 )
        goto LABEL_11;
      v6->fields.currentHp = (int)bossPieceData;
      v7 = this->fields.bossPieceData;
      v8 = this->fields.oldBossInfo;
      if ( v7 )
        LODWORD(v7) = v7->fields._breakPoint_k__BackingField;
      if ( !v8 )
LABEL_11:
        sub_B170D4();
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
    sub_B170D4();
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
  UnityEngine_Component_o *bossIconSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (bossIconSp = (UnityEngine_Component_o *)_4__this->fields.bossIconSp) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(bossIconSp, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
    sub_B170D4();
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
  float v5; // s0
  struct WarBoardEventBossUIComponent_o *v6; // x8
  UIProgressBar_o *hpBarSlider; // x0
  float v8; // s8
  WarBoardEventBossUIComponent_o *v9; // x0
  double v10; // d3
  double v11; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (_4__this = this->fields.__4__this) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(_4__this->fields.HPfrom, _4__this->fields.HPto, easingObj->fields.mStartTime, 0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (hpBarSlider = (UIProgressBar_o *)v6->fields.hpBarSlider) == 0LL
    || (v8 = v5, UIProgressBar__set_value(hpBarSlider, v5, 0LL), (v9 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = v8 * (double)this->fields.maxHp;
  v11 = -v10;
  if ( v10 != INFINITY )
    v11 = v8 * (double)this->fields.maxHp;
  WarBoardEventBossUIComponent__SetTotalHpText(v9, (__int64)v11, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass54_0___PlayHpCut_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  float v5; // s0
  struct WarBoardEventBossUIComponent_o *v6; // x8
  UIProgressBar_o *hpBarSlider; // x0
  float v8; // s8
  WarBoardEventBossUIComponent_o *v9; // x0
  double v10; // d3
  double v11; // d0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (_4__this = this->fields.__4__this) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(_4__this->fields.HPfrom, _4__this->fields.HPto, easingObj->fields.mStartTime, 0LL),
        (v6 = this->fields.__4__this) == 0LL)
    || (hpBarSlider = (UIProgressBar_o *)v6->fields.hpBarSlider) == 0LL
    || (v8 = v5, UIProgressBar__set_value(hpBarSlider, v5, 0LL), (v9 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = v8 * (double)this->fields.maxHp;
  v11 = -v10;
  if ( v10 != INFINITY )
    v11 = v8 * (double)this->fields.maxHp;
  WarBoardEventBossUIComponent__SetTotalHpText(v9, (__int64)v11, 0LL);
}


void __fastcall WarBoardEventBossUIComponent___c__DisplayClass55_0___PlayHpRecover_b__1(
        WarBoardEventBossUIComponent___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_o *_4__this; // x20
  int32_t CurrentBossHp; // w0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  CurrentBossHp = WarBoardEventBossUIComponent__get_CurrentBossHp(this->fields.__4__this, 0LL);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentBossHp, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}