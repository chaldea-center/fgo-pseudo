void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  struct WarBoardEventBossUIComponent_StaticFields *v11; // x0

  if ( (byte_42E51F8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardEventBossUIComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_15603/*"WarBoardEventBossEffect_Break{0}"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_15604/*"WarBoardEventBossEffect_Dead{0}"*/, v7, v8, v9);
    byte_42E51F8 = 1;
  }
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15604/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_B5D560(static_fields);
  v11 = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  v11->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15603/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_B5D560(&v11->BOSS_POINT_BREAK_EFFECT_PREFAB);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20

  if ( (byte_42E51F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIAtlas__TypeInfo, v5, v6, v7);
    byte_42E51F7 = 1;
  }
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v8;
  sub_B5D560(&this->fields.atlasList);
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
  __int64 v3; // x3
  int32_t v5; // w0
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  __int64 v13; // [xsp+0h] [xbp-20h] BYREF
  __int64 v14; // [xsp+8h] [xbp-18h]
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E51F6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)hexStrColor, (_DWORD)method, v3);
    byte_42E51F6 = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v5 = System_Convert__ToInt32_42797264(hexStrColor, 16, 0LL);
  v15.fields.a = (float)(unsigned __int8)v5;
  v15.fields.r = (float)BYTE2(v5) / 255.0;
  v15.fields.g = (float)BYTE1(v5) / 255.0;
  v15.fields.b = v15.fields.a / 255.0;
  v13 = 0LL;
  v14 = 0LL;
  UnityEngine_Color___ctor_41567816(v15, v6, v7, v8, (const MethodInfo *)&v13);
  v10 = *((float *)&v13 + 1);
  v9 = *(float *)&v13;
  v12 = *((float *)&v14 + 1);
  v11 = *(float *)&v14;
  result.fields.a = v12;
  result.fields.b = v11;
  result.fields.g = v10;
  result.fields.r = v9;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Text_StringBuilder_o *v11; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v13; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v15; // x8
  struct WarBoardUserServantData_o *v16; // x8

  if ( (byte_42E51F5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E51F5 = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v11 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v11, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v11
    || (System_Text_StringBuilder__Append_42957084(v11, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_42953744(v11, (System_String_o *)StringLiteral_1245/*":"*/, 0LL),
        (v15 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_42957084(v11, v15->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_42953744(v11, (System_String_o *)StringLiteral_1245/*":"*/, 0LL),
        (v16 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_B5D69C(appended, v13);
  }
  System_Text_StringBuilder__Append_42957084(v11, v16->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E51ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)name, (_DWORD)method, v3);
    byte_42E51ED = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  return result;
}


int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_42E51EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_int____68811968, restBreakPoint, (_DWORD)method, v3);
    byte_42E51EC = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_1AD8FA4 *)Method_BasicHelper_IndexValue_int____68811968);
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


System_String_o *__fastcall WarBoardEventBossUIComponent__GetStageBossName(
        WarBoardEventBossUIComponent_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
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
  WarBoardEventBossUIComponent___c__DisplayClass37_0_o *v23; // x20
  WebViewManager_o *Instance; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_42E51EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_WarBoardPieceData___, stageBossIndex, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&string_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__, v17, v18, v19);
    sub_B5D5C4(&WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo, v20, v21, v22);
    byte_42E51EA = 1;
  }
  v23 = (WarBoardEventBossUIComponent___c__DisplayClass37_0_o *)sub_B5D694(WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass37_0___ctor(v23, 0LL);
  if ( !v23
    || (v23->fields.stageBossIndex = stageBossIndex,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v26 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
  {
    sub_B5D69C(Instance, v25);
  }
  v27 = *(_QWORD *)(v26 + 48);
  if ( v27
    && *(_QWORD *)(v27 + 24)
    && (v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v28,
          (Il2CppObject *)v23,
          Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__),
        (USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                            (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v27,
                                                                            (System_Func_T__bool__o *)v28,
                                                                            (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x0
  int32_t v13; // w19
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *bossColor; // x20
  System_String_array *TextEffectColors; // x0
  WarBoardEventBossUIComponent_o *v16; // x0
  const MethodInfo *v17; // x2
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E51EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_string___, restBreakPoint, (_DWORD)method, v3);
    sub_B5D5C4(&string___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1023/*"0x000000"*/, v9, v10, v11);
    byte_42E51EB = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  v13 = restBreakPoint - 1;
  if ( warBoardStageBossEnt )
  {
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1023/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  }
  v16 = (WarBoardEventBossUIComponent_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)TextEffectColors,
                                            v13,
                                            bossColor,
                                            (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_string___);
  *(UnityEngine_Color_o *)&v18 = WarBoardEventBossUIComponent__ConvertHexToColor(v16, (System_String_o *)v16, v17);
  result.fields.a = v21;
  result.fields.b = v20;
  result.fields.g = v19;
  result.fields.r = v18;
  return result;
}


void __fastcall WarBoardEventBossUIComponent__LoadAnimPrefab(
        WarBoardEventBossUIComponent_o *this,
        WarBoardStageBossEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WarBoardEventBossUIComponent_c *v9; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  int32_t v19; // [xsp+8h] [xbp-28h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E51EE & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)ent, (_DWORD)method, v3);
    sub_B5D5C4(&WarBoardEventBossUIComponent_TypeInfo, v6, v7, v8);
    byte_42E51EE = 1;
  }
  if ( ent )
  {
    v9 = WarBoardEventBossUIComponent_TypeInfo;
    if ( (BYTE3(WarBoardEventBossUIComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v9 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v9->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId);
    v12 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v11, 0LL);
    this->fields.deadAnimPrefab = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v12, v13);
    sub_B5D560(&this->fields.deadAnimPrefab);
    v14 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v19 = v14;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v17 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v16, 0LL);
    this->fields.pointBreakAnimPrefab = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v17, v18);
    sub_B5D560(&this->fields.pointBreakAnimPrefab);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
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
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
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

  if ( (byte_42E51EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__Clear__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23812/*"{0:D2}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v21, v22, v23);
    byte_42E51EF = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B5D69C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v34 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23812/*"{0:D2}"*/, v27, 0LL);
      v33 = eventId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
      v30 = System_String__Format_44573324((System_String_o *)StringLiteral_5456/*"DownloadEventUIAtlas{0}{1}"*/, v29, v28, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v30,
                                                                 v31);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  WarBoardEventBossUIComponent___c__DisplayClass52_0_o *v24; // x20
  UnityEngine_Component_o *bossIconSp; // x0
  __int64 v26; // x1
  struct UnityEngine_GameObject_o *deadAnimPrefab; // x22
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Action_o *v30; // x19
  System_Action_o *v31; // x19

  if ( (byte_42E51F1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__, v15, v16, v17);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__, v18, v19, v20);
    sub_B5D5C4(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo, v21, v22, v23);
    byte_42E51F1 = 1;
  }
  v24 = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)sub_B5D694(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(v24, 0LL);
  if ( !v24 )
    goto LABEL_14;
  v24->fields.__4__this = this;
  sub_B5D560(&v24->fields);
  v24->fields.endAction = endAction;
  sub_B5D560(&v24->fields.endAction);
  deadAnimPrefab = this->fields.deadAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)deadAnimPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v28, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(v28, 0LL);
  if ( !v28 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v28,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0LL);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
        ActionExtensions__Call(v24->fields.endAction, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B5D69C(bossIconSp, v26);
  }
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v24,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v30, 0LL);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v24,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].monitor = v31;
  sub_B5D560(&Component_srcLineSprite[1].monitor);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  WarBoardEventBossUIComponent___c__DisplayClass54_0_o *v20; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v27; // w1
  int64_t v28; // x8
  struct WarBoardUserServantData_o *v29; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *easingObj; // x20
  System_Action_o *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_42E51F3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v4);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__, v14, v15, v16);
    sub_B5D5C4(&WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo, v17, v18, v19);
    byte_42E51F3 = 1;
  }
  v20 = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)sub_B5D694(WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass54_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_20;
  v20->fields.__4__this = this;
  sub_B5D560(&v20->fields.__4__this);
  v20->fields.endAction = endAction;
  sub_B5D560(&v20->fields.endAction);
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
    v27 = *p_defeatPoint;
    goto LABEL_10;
  }
  v27 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v27, v23);
  v20->fields.maxHp = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v28 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v28 = (int)MaxHpByBreakPoint;
  }
  v20->fields.totalHp = v28;
  v29 = this->fields.oldBossInfo;
  if ( !v29 )
    goto LABEL_20;
  if ( v28 == v29->fields.currentHp )
  {
    ActionExtensions__Call(v20->fields.endAction, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20->fields.easingObj = (struct EasingObject_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                     gameObject,
                                                     (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(&v20->fields);
  easingObj = v20->fields.easingObj;
  v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v20,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__,
    0LL);
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v20,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__,
    0LL);
  if ( !easingObj )
LABEL_20:
    sub_B5D69C(MaxHpByBreakPoint, v22);
  EasingObject__Play(easingObj, duration, v32, v33, 0.0, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v4; // x3
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
  WarBoardEventBossUIComponent___c__DisplayClass55_0_o *v20; // x19
  UIProgressBar_o *hpBarSlider; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v25; // w1
  float value; // s0
  WarBoardPieceData_o *v27; // x0
  double v28; // d0
  float v29; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *easingObj; // x20
  System_Action_o *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_42E51F4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v4);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__, v14, v15, v16);
    sub_B5D5C4(&WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo, v17, v18, v19);
    byte_42E51F4 = 1;
  }
  v20 = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)sub_B5D694(WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass55_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_13;
  v20->fields.__4__this = this;
  sub_B5D560(&v20->fields.__4__this);
  v20->fields.endAction = endAction;
  sub_B5D560(&v20->fields.endAction);
  bossPieceData = this->fields.bossPieceData;
  v25 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  v20->fields.maxHp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v25, v23);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_13;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v27 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v28 = v27 ? (double)WarBoardPieceData__get_CurrentHp(v27, 0LL) : 0.0;
  v29 = v28 / (double)v20->fields.maxHp;
  this->fields.HPto = UnityEngine_Mathf__Clamp01(v29, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20->fields.easingObj = (struct EasingObject_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                     gameObject,
                                                     (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(&v20->fields);
  easingObj = v20->fields.easingObj;
  v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v20,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__,
    0LL);
  v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v20,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__,
    0LL);
  if ( !easingObj )
LABEL_13:
    sub_B5D69C(hpBarSlider, v22);
  EasingObject__Play(easingObj, duration, v32, v33, 0.0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
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
  WarBoardEventBossUIComponent___c__DisplayClass53_0_o *v21; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v23; // x1
  System_Action_o **p_endAction; // x20
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  WarBoardEventBossUIComponent_BreakIcon_o *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *pointBreakAnimPrefab; // x23
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_GameObject_o *v31; // x23
  CommonEffectActionComponent_o *Component_srcLineSprite; // x22
  const MethodInfo *v33; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v37; // x19
  int v38; // s0
  const MethodInfo *v42; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v44; // x9
  int32_t v45; // w2
  __int64 v46; // x0

  if ( (byte_42E51F2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__, v15, v16, v17);
    sub_B5D5C4(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo, v18, v19, v20);
    byte_42E51F2 = 1;
  }
  v21 = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)sub_B5D694(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_25;
  v21->fields.__4__this = this;
  sub_B5D560(&v21->fields);
  v21->fields.endAction = endAction;
  p_endAction = &v21->fields.endAction;
  sub_B5D560(&v21->fields.endAction);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)UnityEngine_Mathf__Max_41629432(0, oldBossInfo->fields.defeatPoint - 1, 0LL);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_25;
  if ( (unsigned int)Sprite >= breakIconList->max_length )
  {
    v46 = sub_B5D6C8(Sprite);
    sub_B5D668(v46, 0LL);
  }
  v27 = breakIconList->m_Items[(int)Sprite];
  if ( !v27 )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)v27->fields.Sprite;
  if ( !Sprite )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = this->fields.pointBreakAnimPrefab;
  v30 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v31 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)pointBreakAnimPrefab,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_32436524(v31, v30, 0LL);
  GameObjectExtensions__ResetLocalPosition(v31, 0LL);
  if ( !v31 )
    goto LABEL_25;
  Component_srcLineSprite = (CommonEffectActionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v31,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v37 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v21,
      Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_srcLineSprite )
    {
      CommonEffectActionComponent__SetEventAction(Component_srcLineSprite, 0, v37, 0LL);
      return;
    }
LABEL_25:
    sub_B5D69C(Sprite, v23);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v38 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v33);
  if ( !totalHpLabel )
    goto LABEL_25;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v38, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_25;
  v44 = this->fields.bossPieceData;
  if ( v44 )
    v45 = v44->fields._breakPoint_k__BackingField;
  else
    v45 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v45, v42);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*p_endAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 v31; // x1
  __int64 bossIconSp; // x0
  const MethodInfo *v33; // x2
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  const MethodInfo *v35; // x2
  struct WarBoardStageBossEntity_o *v36; // x8
  _DWORD *v37; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v40; // x8
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  WarBoardUserServantData_o *v42; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v45; // x9
  const MethodInfo *v46; // x2
  struct WarBoardUserServantData_o *v47; // x23
  WarBoardUserServantData_o *v48; // x23
  struct WarBoardUserServantData_o **v49; // x22
  struct WarBoardUserServantData_o *v50; // x8
  struct WarBoardUserServantData_o *v51; // x9
  struct WarBoardPieceData_o *v52; // x9
  struct WarBoardUserServantData_o *v53; // x8
  struct WarBoardPieceData_o *v54; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  int defeatPoint; // w10
  struct WarBoardUserServantData_o *v57; // x8
  float v58; // s0
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v60; // x8
  double v61; // d8
  float v62; // s0
  float v63; // s0
  WarBoardPieceData_o *bossPieceData; // x0
  double v65; // d0
  float v66; // s0
  float v67; // s0
  const MethodInfo *v68; // x2
  struct WarBoardUserServantData_o *v69; // x8
  const MethodInfo *v70; // x3
  struct WarBoardUserServantData_o *v71; // x8
  struct WarBoardStageBossEntity_o *v72; // x8
  UISprite_o *v73; // x20
  int idx; // w22
  Il2CppObject *v75; // x21
  Il2CppObject *v76; // x0
  System_String_o *v77; // x0
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v82; // x0
  System_String_o *v83; // x0
  const MethodInfo *v84; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v86; // x0
  System_String_o *v87; // x0
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x3
  const MethodInfo *v90; // x2
  struct WarBoardUserServantData_o *v91; // x8
  float v92; // s0
  float v93; // s1
  float v94; // s2
  float v95; // s3
  float v96; // s8
  float v97; // s9
  float v98; // s10
  float v99; // s11
  const MethodInfo *v100; // x2
  struct WarBoardStageBossEntity_o *v101; // x8
  UILabel_o *bossName; // x19
  __int64 v103; // x0
  int v104; // [xsp+0h] [xbp-60h] BYREF
  int v105; // [xsp+4h] [xbp-5Ch] BYREF
  int v106; // [xsp+8h] [xbp-58h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E51E8 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)warBoardDataEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&WarBoardUserServantData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23539/*"war_board_boss_hp_frame"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23542/*"war_board_boss_hp_white"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23541/*"war_board_boss_hp_upper_{0}"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23543/*"war_board_boss_icon_{0}{1:D2}"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23538/*"war_board_boss_hp_back"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23540/*"war_board_boss_hp_lower_{0}"*/, v27, v28, v29);
    byte_42E51E8 = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_B5D560(&this->fields.warBoardDataEnt);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_72;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0LL);
  bossIconSp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_72;
  if ( !bossIconSp )
    goto LABEL_72;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          v33);
  v36 = this->fields.warBoardStageBossEnt;
  if ( !v36 )
    goto LABEL_72;
  v37 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v36->fields.idx, v35);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_B5D560(&this->fields.currentBossInfo);
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
  bossIconSp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !bossIconSp )
    goto LABEL_72;
  v40 = this->fields.warBoardStageBossEnt;
  if ( !v40 )
    goto LABEL_72;
  bossIconSp = *(_QWORD *)(bossIconSp + 432);
  if ( !bossIconSp )
    goto LABEL_72;
  this->fields.bossPieceData = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v40->fields.idx, 0LL);
  p_bossPieceData = &this->fields.bossPieceData;
  sub_B5D560(&this->fields.bossPieceData);
  if ( !v37 || (int)v37[6] < 3 )
    goto LABEL_31;
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  if ( v37[8] == (*p_currentBossInfo)->fields.stageBossIdx )
  {
    v42 = (WarBoardUserServantData_o *)sub_B5D694(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v42, 0LL);
    this->fields.oldBossInfo = v42;
    p_oldBossInfo = &this->fields.oldBossInfo;
    sub_B5D560(&this->fields.oldBossInfo);
    currentBossInfo = this->fields.currentBossInfo;
    if ( !currentBossInfo )
      goto LABEL_72;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v45 = *p_oldBossInfo;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    v45->fields.breakHp = (*p_currentBossInfo)->fields.breakHp;
    sub_B5D560(&v45->fields.breakHp);
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    if ( v37[6] <= 2u )
      goto LABEL_73;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.defeatPoint = v37[10];
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.hp = (*p_currentBossInfo)->fields.hp;
    if ( v37[6] <= 1u )
    {
LABEL_73:
      v103 = sub_B5D6C8(bossIconSp);
      sub_B5D668(v103, 0LL);
    }
    v47 = *p_oldBossInfo;
    if ( !v47 )
      goto LABEL_72;
    bossIconSp = (unsigned int)v37[9];
  }
  else
  {
LABEL_31:
    v48 = (WarBoardUserServantData_o *)sub_B5D694(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v48, 0LL);
    this->fields.oldBossInfo = v48;
    v49 = &this->fields.oldBossInfo;
    sub_B5D560(&this->fields.oldBossInfo);
    v50 = this->fields.currentBossInfo;
    if ( !v50 )
      goto LABEL_72;
    if ( !*v49 )
      goto LABEL_72;
    (*v49)->fields.stageBossIdx = v50->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v51 = *v49;
    if ( !*v49 )
      goto LABEL_72;
    v51->fields.breakHp = (*p_currentBossInfo)->fields.breakHp;
    sub_B5D560(&v51->fields.breakHp);
    if ( !*p_currentBossInfo || !*v49 )
      goto LABEL_72;
    (*v49)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    v52 = *p_bossPieceData;
    v53 = *v49;
    if ( *p_bossPieceData )
      LODWORD(v52) = v52->fields._breakPoint_k__BackingField;
    if ( !v53 )
      goto LABEL_72;
    v53->fields.defeatPoint = (int)v52;
    if ( !*p_currentBossInfo || !*v49 )
      goto LABEL_72;
    (*v49)->fields.hp = (*p_currentBossInfo)->fields.hp;
    bossIconSp = (__int64)*p_bossPieceData;
    v47 = *v49;
    if ( *p_bossPieceData )
      bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
    if ( !v47 )
      goto LABEL_72;
  }
  v47->fields.currentHp = bossIconSp;
  v54 = *p_bossPieceData;
  if ( *p_bossPieceData )
    LODWORD(v54) = v54->fields._breakPoint_k__BackingField;
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_72;
  defeatPoint = oldBossInfo->fields.defeatPoint;
  this->fields.isPointBreak = (int)v54 < defeatPoint;
  if ( (int)v54 < defeatPoint )
  {
    bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, oldBossInfo->fields.defeatPoint, v46);
    v57 = this->fields.oldBossInfo;
    if ( !v57 )
      goto LABEL_72;
    v58 = (double)v57->fields.currentHp / (double)bossIconSp;
    HPfrom = UnityEngine_Mathf__Clamp01(v58, 0LL);
    bossIconSp = (__int64)this->fields.hpBarSlider;
    this->fields.HPfrom = HPfrom;
    this->fields.HPto = 0.0;
    if ( !bossIconSp )
      goto LABEL_72;
    goto LABEL_62;
  }
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, (*p_currentBossInfo)->fields.defeatPoint, v46);
  v60 = this->fields.oldBossInfo;
  if ( !v60 )
    goto LABEL_72;
  v61 = (double)bossIconSp;
  v62 = (double)v60->fields.currentHp / (double)bossIconSp;
  v63 = UnityEngine_Mathf__Clamp01(v62, 0LL);
  bossPieceData = this->fields.bossPieceData;
  this->fields.HPfrom = v63;
  v65 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
  v66 = v65 / v61;
  v67 = UnityEngine_Mathf__Clamp01(v66, 0LL);
  bossIconSp = (__int64)this->fields.hpBarSlider;
  this->fields.HPto = v67;
  if ( !bossIconSp )
LABEL_72:
    sub_B5D69C(bossIconSp, v31);
  HPfrom = this->fields.HPfrom;
LABEL_62:
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
  v69 = this->fields.oldBossInfo;
  if ( !v69 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetTotalHpText(this, v69->fields.currentHp, v68);
  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
  if ( !bossIconSp )
    goto LABEL_72;
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
  v71 = this->fields.oldBossInfo;
  if ( !v71 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, v71->fields.maxDefeatPoint, v71->fields.defeatPoint, v70);
  v72 = this->fields.warBoardStageBossEnt;
  if ( !v72 )
    goto LABEL_72;
  v73 = this->fields.bossIconSp;
  idx = v72->fields.idx;
  iconId = v72->fields.iconId;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v106 = idx;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v77 = System_String__Format_44573324((System_String_o *)StringLiteral_23543/*"war_board_boss_icon_{0}{1:D2}"*/, v75, v76, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v73, v77, v78);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_23539/*"war_board_boss_hp_frame"*/,
    v79);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_23538/*"war_board_boss_hp_back"*/,
    v80);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v105 = idx;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
  v83 = System_String__Format((System_String_o *)StringLiteral_23540/*"war_board_boss_hp_lower_{0}"*/, v82, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v83, v84);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v104 = idx;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  v87 = System_String__Format((System_String_o *)StringLiteral_23541/*"war_board_boss_hp_upper_{0}"*/, v86, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v87, v88);
  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                 this,
                 this->fields.hpBarWhiteSprite,
                 (System_String_o *)StringLiteral_23542/*"war_board_boss_hp_white"*/,
                 v89);
  v91 = this->fields.oldBossInfo;
  if ( !v91 )
    goto LABEL_72;
  *(UnityEngine_Color_o *)&v92 = WarBoardEventBossUIComponent__GetTextEffectColor(this, v91->fields.defeatPoint, v90);
  bossIconSp = (__int64)this->fields.totalHpLabel;
  if ( !bossIconSp )
    goto LABEL_72;
  v96 = v92;
  v97 = v93;
  v98 = v94;
  v99 = v95;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v92, 0LL);
  bossIconSp = (__int64)this->fields.bossName;
  if ( !bossIconSp )
    goto LABEL_72;
  v108.fields.r = v96;
  v108.fields.g = v97;
  v108.fields.b = v98;
  v108.fields.a = v99;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, v108, 0LL);
  v101 = this->fields.warBoardStageBossEnt;
  if ( !v101 )
    goto LABEL_72;
  bossName = this->fields.bossName;
  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                          v101->fields.idx,
                          v100);
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
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

  if ( (byte_42E51F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, (_DWORD)sprite, (_DWORD)spriteName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v16, v17, v18);
    byte_42E51F0 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
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


void __fastcall WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
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
  UILabel_o *totalHpLabel; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E51E9 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, hp, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3343/*"COMMON_NUM_FORMAT"*/, v9, v10, v11);
    byte_42E51E9 = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"COMMON_NUM_FORMAT"*/, 0LL);
  v17 = hp;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  v15 = System_String__Format(v13, v14, 0LL);
  if ( !totalHpLabel )
    sub_B5D69C(v15, v16);
  UILabel__set_text(totalHpLabel, v15, 0LL);
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
  sub_B5D560(&this->fields.warBoardStageBossEnt);
  this->fields.assetData = assetData;
  sub_B5D560(&this->fields.assetData);
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
      sub_B5D69C(this, *(_QWORD *)&maxCount);
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
    v23 = sub_B5D6C8(this);
    sub_B5D668(v23, 0LL);
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
        sub_B5D69C(bossPieceData, method);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  CurrentBossHp = WarBoardEventBossUIComponent__get_CurrentBossHp(this->fields.__4__this, 0LL);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentBossHp, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}