void __fastcall WarBoardEventBossUIComponent___cctor(const MethodInfo *method)
{
  struct WarBoardEventBossUIComponent_StaticFields *static_fields; // x0
  struct WarBoardEventBossUIComponent_StaticFields *v2; // x0

  if ( (byte_42AC7DE & 1) == 0 )
  {
    sub_B52984(&WarBoardEventBossUIComponent_TypeInfo);
    sub_B52984(&StringLiteral_15518/*"WarBoardEventBossEffect_Break{0}"*/);
    sub_B52984(&StringLiteral_15519/*"WarBoardEventBossEffect_Dead{0}"*/);
    byte_42AC7DE = 1;
  }
  static_fields = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  static_fields->BOSS_CLEAR_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15519/*"WarBoardEventBossEffect_Dead{0}"*/;
  sub_B52920(static_fields);
  v2 = WarBoardEventBossUIComponent_TypeInfo->static_fields;
  v2->BOSS_POINT_BREAK_EFFECT_PREFAB = (struct System_String_o *)StringLiteral_15518/*"WarBoardEventBossEffect_Break{0}"*/;
  sub_B52920(&v2->BOSS_POINT_BREAK_EFFECT_PREFAB);
}


void __fastcall WarBoardEventBossUIComponent___ctor(WarBoardEventBossUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_42AC7DD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIAtlas__TypeInfo);
    byte_42AC7DD = 1;
  }
  *(_QWORD *)&this->fields.breakEffectStartWaitTime = 0x3E99999A3F800000LL;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIAtlas__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIAtlas___ctor__);
  this->fields.atlasList = (struct System_Collections_Generic_List_UIAtlas__o *)v3;
  sub_B52920(&this->fields.atlasList);
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

  if ( (byte_42AC7DC & 1) == 0 )
  {
    sub_B52984(&System_Convert_TypeInfo);
    byte_42AC7DC = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v4 = System_Convert__ToInt32_42701308(hexStrColor, 16, 0LL);
  v14.fields.a = (float)(unsigned __int8)v4;
  v14.fields.r = (float)BYTE2(v4) / 255.0;
  v14.fields.g = (float)BYTE1(v4) / 255.0;
  v14.fields.b = v14.fields.a / 255.0;
  v12 = 0LL;
  v13 = 0LL;
  UnityEngine_Color___ctor_41463668(v14, v5, v6, v7, (const MethodInfo *)&v12);
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
  System_Text_StringBuilder_o *v3; // x20
  System_Text_StringBuilder_o *appended; // x0
  __int64 v5; // x1
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardUserServantData_o *v7; // x8
  struct WarBoardUserServantData_o *v8; // x8

  if ( (byte_42AC7DB & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AC7DB = 1;
  }
  if ( !this->fields.oldBossInfo )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo
    || !v3
    || (System_Text_StringBuilder__Append_42997388(v3, oldBossInfo->fields.stageBossIdx, 0LL),
        appended = System_Text_StringBuilder__Append_42994048(v3, (System_String_o *)StringLiteral_1240/*":"*/, 0LL),
        (v7 = this->fields.oldBossInfo) == 0LL)
    || (System_Text_StringBuilder__Append_42997388(v3, v7->fields.currentHp, 0LL),
        appended = System_Text_StringBuilder__Append_42994048(v3, (System_String_o *)StringLiteral_1240/*":"*/, 0LL),
        (v8 = this->fields.oldBossInfo) == 0LL) )
  {
    sub_B52A5C(appended, v5);
  }
  System_Text_StringBuilder__Append_42997388(v3, v8->fields.defeatPoint, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                              v3,
                              v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


UnityEngine_GameObject_o *__fastcall WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
        WarBoardEventBossUIComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42AC7D3 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    byte_42AC7D3 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.assetData;
  if ( result )
    return (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         (AssetData_o *)result,
                                         name,
                                         (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  return result;
}


int64_t __fastcall WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(
        WarBoardEventBossUIComponent_o *this,
        int32_t restBreakPoint,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *currentBossInfo; // x8

  if ( (byte_42AC7D2 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_int____68584400);
    byte_42AC7D2 = 1;
  }
  currentBossInfo = this->fields.currentBossInfo;
  if ( currentBossInfo )
    return BasicHelper__IndexValue_int_(
             currentBossInfo->fields.breakHp,
             restBreakPoint,
             currentBossInfo->fields.hp,
             (const MethodInfo_1A43EDC *)Method_BasicHelper_IndexValue_int____68584400);
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
  WarBoardEventBossUIComponent___c__DisplayClass37_0_o *v4; // x20
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantData_o *klass; // x0

  if ( (byte_42AC7D0 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_WarBoardPieceData___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__);
    sub_B52984(&WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo);
    byte_42AC7D0 = 1;
  }
  v4 = (WarBoardEventBossUIComponent___c__DisplayClass37_0_o *)sub_B52A54(WarBoardEventBossUIComponent___c__DisplayClass37_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass37_0___ctor(v4, 0LL);
  if ( !v4
    || (v4->fields.stageBossIndex = stageBossIndex,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v7 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
  {
    sub_B52A5C(Instance, v6);
  }
  v8 = *(_QWORD *)(v7 + 48);
  if ( v8
    && *(_QWORD *)(v8 + 24)
    && (v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_WarBoardPieceData__bool__TypeInfo),
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v9,
          (Il2CppObject *)v4,
          Method_WarBoardEventBossUIComponent___c__DisplayClass37_0__GetStageBossName_b__0__,
          (const MethodInfo_2BC90BC *)Method_System_Func_WarBoardPieceData__bool___ctor__),
        (USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                            (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v8,
                                                                            (System_Func_T__bool__o *)v9,
                                                                            (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_WarBoardPieceData___)) != 0LL)
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
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x0
  int32_t v6; // w19
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *bossColor; // x20
  System_String_array *TextEffectColors; // x0
  WarBoardEventBossUIComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AC7D1 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_string___);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_1019/*"0x000000"*/);
    byte_42AC7D1 = 1;
  }
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  v6 = restBreakPoint - 1;
  if ( warBoardStageBossEnt )
  {
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)warBoardStageBossEnt->fields.bossColor;
    TextEffectColors = WarBoardStageBossEntity__GetTextEffectColors(warBoardStageBossEnt, 0LL);
  }
  else
  {
    bossColor = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1019/*"0x000000"*/;
    TextEffectColors = (System_String_array *)sub_B5299C(string___TypeInfo, 0LL);
  }
  v9 = (WarBoardEventBossUIComponent_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                           (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)TextEffectColors,
                                           v6,
                                           bossColor,
                                           (const MethodInfo_1A43FCC *)Method_BasicHelper_IndexValue_string___);
  *(UnityEngine_Color_o *)&v11 = WarBoardEventBossUIComponent__ConvertHexToColor(v9, (System_String_o *)v9, v10);
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v12;
  result.fields.r = v11;
  return result;
}


void __fastcall WarBoardEventBossUIComponent__LoadAnimPrefab(
        WarBoardEventBossUIComponent_o *this,
        WarBoardStageBossEntity_o *ent,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent_c *v5; // x0
  System_String_o *BOSS_CLEAR_EFFECT_PREFAB; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w9
  System_String_o *BOSS_POINT_BREAK_EFFECT_PREFAB; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  int32_t v15; // [xsp+8h] [xbp-28h] BYREF
  int32_t defeatEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AC7D4 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&WarBoardEventBossUIComponent_TypeInfo);
    byte_42AC7D4 = 1;
  }
  if ( ent )
  {
    v5 = WarBoardEventBossUIComponent_TypeInfo;
    if ( (BYTE3(WarBoardEventBossUIComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardEventBossUIComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardEventBossUIComponent_TypeInfo);
      v5 = WarBoardEventBossUIComponent_TypeInfo;
    }
    BOSS_CLEAR_EFFECT_PREFAB = v5->static_fields->BOSS_CLEAR_EFFECT_PREFAB;
    defeatEffectId = ent->fields.defeatEffectId;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &defeatEffectId);
    v8 = System_String__Format(BOSS_CLEAR_EFFECT_PREFAB, v7, 0LL);
    this->fields.deadAnimPrefab = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v8, v9);
    sub_B52920(&this->fields.deadAnimPrefab);
    v10 = ent->fields.defeatEffectId;
    BOSS_POINT_BREAK_EFFECT_PREFAB = WarBoardEventBossUIComponent_TypeInfo->static_fields->BOSS_POINT_BREAK_EFFECT_PREFAB;
    v15 = v10;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v13 = System_String__Format(BOSS_POINT_BREAK_EFFECT_PREFAB, v12, 0LL);
    this->fields.pointBreakAnimPrefab = WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(this, v13, v14);
    sub_B52920(&this->fields.pointBreakAnimPrefab);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__LoadLocalAtlas(
        WarBoardEventBossUIComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  int i; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *GameObjectFromEventUIAssetData; // x21
  int32_t v14; // [xsp+8h] [xbp-58h] BYREF
  int v15; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AC7D5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23694/*"{0:D2}"*/);
    sub_B52984(&StringLiteral_5421/*"DownloadEventUIAtlas{0}{1}"*/);
    byte_42AC7D5 = 1;
  }
  if ( this->fields.assetData )
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
LABEL_18:
      sub_B52A5C(atlasList, *(_QWORD *)&eventId);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)atlasList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIAtlas__Clear__);
    for ( i = 1; ; ++i )
    {
      v15 = i;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v9 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23694/*"{0:D2}"*/, v8, 0LL);
      v14 = eventId;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      v11 = System_String__Format_44563852((System_String_o *)StringLiteral_5421/*"DownloadEventUIAtlas{0}{1}"*/, v10, v9, 0LL);
      GameObjectFromEventUIAssetData = (UnityEngine_Object_o *)WarBoardEventBossUIComponent__GetGameObjectFromEventUIAssetData(
                                                                 this,
                                                                 v11,
                                                                 v12);
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
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIAtlas__Add__);
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
  WarBoardEventBossUIComponent___c__DisplayClass52_0_o *v5; // x20
  UnityEngine_Component_o *bossIconSp; // x0
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *deadAnimPrefab; // x22
  UnityEngine_GameObject_o *v9; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Action_o *v11; // x19
  System_Action_o *v12; // x19

  if ( (byte_42AC7D7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__);
    sub_B52984(&WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
    byte_42AC7D7 = 1;
  }
  v5 = (WarBoardEventBossUIComponent___c__DisplayClass52_0_o *)sub_B52A54(WarBoardEventBossUIComponent___c__DisplayClass52_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass52_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v5->fields.endAction = endAction;
  sub_B52920(&v5->fields.endAction);
  deadAnimPrefab = this->fields.deadAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)deadAnimPrefab,
                                     (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent(v9, (UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__ResetLocalPosition(v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v9,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
  {
    bossIconSp = (UnityEngine_Component_o *)this->fields.bossIconSp;
    if ( bossIconSp )
    {
      bossIconSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bossIconSp, 0LL);
      if ( bossIconSp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bossIconSp, 0, 0LL);
        ActionExtensions__Call(v5->fields.endAction, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B52A5C(bossIconSp, v7);
  }
  v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__0__,
    0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_14;
  CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_srcLineSprite, 0, v11, 0LL);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_WarBoardEventBossUIComponent___c__DisplayClass52_0__PlayDaedAnim_b__1__,
    0LL);
  Component_srcLineSprite[1].monitor = v12;
  sub_B52920(&Component_srcLineSprite[1].monitor);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpCut(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent___c__DisplayClass54_0_o *v7; // x19
  int64_t MaxHpByBreakPoint; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  int32_t *p_defeatPoint; // x8
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v14; // w1
  int64_t v15; // x8
  struct WarBoardUserServantData_o *v16; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *easingObj; // x20
  System_Action_o *v19; // x21
  System_Action_o *v20; // x22

  if ( (byte_42AC7D9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__);
    sub_B52984(&WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo);
    byte_42AC7D9 = 1;
  }
  v7 = (WarBoardEventBossUIComponent___c__DisplayClass54_0_o *)sub_B52A54(WarBoardEventBossUIComponent___c__DisplayClass54_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass54_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_20;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields.__4__this);
  v7->fields.endAction = endAction;
  sub_B52920(&v7->fields.endAction);
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
    v14 = *p_defeatPoint;
    goto LABEL_10;
  }
  v14 = 0;
LABEL_10:
  MaxHpByBreakPoint = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v14, v10);
  v7->fields.maxHp = MaxHpByBreakPoint;
  if ( this->fields.isPointBreak || (MaxHpByBreakPoint = (int64_t)this->fields.bossPieceData) == 0 )
  {
    v15 = 0LL;
  }
  else
  {
    MaxHpByBreakPoint = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)MaxHpByBreakPoint, 0LL);
    v15 = (int)MaxHpByBreakPoint;
  }
  v7->fields.totalHp = v15;
  v16 = this->fields.oldBossInfo;
  if ( !v16 )
    goto LABEL_20;
  if ( v15 == v16->fields.currentHp )
  {
    ActionExtensions__Call(v7->fields.endAction, 0LL);
    return;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.easingObj = (struct EasingObject_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                    gameObject,
                                                    (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B52920(&v7->fields);
  easingObj = v7->fields.easingObj;
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__0__,
    0LL);
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass54_0__PlayHpCut_b__1__,
    0LL);
  if ( !easingObj )
LABEL_20:
    sub_B52A5C(MaxHpByBreakPoint, v9);
  EasingObject__Play(easingObj, duration, v19, v20, 0.0, 0, 0LL);
}


void __fastcall WarBoardEventBossUIComponent__PlayHpRecover(
        WarBoardEventBossUIComponent_o *this,
        float duration,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent___c__DisplayClass55_0_o *v7; // x19
  UIProgressBar_o *hpBarSlider; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  int32_t v12; // w1
  float value; // s0
  WarBoardPieceData_o *v14; // x0
  double v15; // d0
  float v16; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  EasingObject_o *easingObj; // x20
  System_Action_o *v19; // x21
  System_Action_o *v20; // x22

  if ( (byte_42AC7DA & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__);
    sub_B52984(&WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo);
    byte_42AC7DA = 1;
  }
  v7 = (WarBoardEventBossUIComponent___c__DisplayClass55_0_o *)sub_B52A54(WarBoardEventBossUIComponent___c__DisplayClass55_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass55_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields.__4__this);
  v7->fields.endAction = endAction;
  sub_B52920(&v7->fields.endAction);
  bossPieceData = this->fields.bossPieceData;
  v12 = bossPieceData ? bossPieceData->fields._breakPoint_k__BackingField : 0;
  v7->fields.maxHp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, v12, v10);
  hpBarSlider = (UIProgressBar_o *)this->fields.hpBarSlider;
  if ( !hpBarSlider )
    goto LABEL_13;
  value = UIProgressBar__get_value(hpBarSlider, 0LL);
  v14 = this->fields.bossPieceData;
  this->fields.HPfrom = value;
  v15 = v14 ? (double)WarBoardPieceData__get_CurrentHp(v14, 0LL) : 0.0;
  v16 = v15 / (double)v7->fields.maxHp;
  this->fields.HPto = UnityEngine_Mathf__Clamp01(v16, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7->fields.easingObj = (struct EasingObject_o *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                    gameObject,
                                                    (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B52920(&v7->fields);
  easingObj = v7->fields.easingObj;
  v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__0__,
    0LL);
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v7,
    Method_WarBoardEventBossUIComponent___c__DisplayClass55_0__PlayHpRecover_b__1__,
    0LL);
  if ( !easingObj )
LABEL_13:
    sub_B52A5C(hpBarSlider, v9);
  EasingObject__Play(easingObj, duration, v19, v20, 0.0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__PlayPointBreakAnim(
        WarBoardEventBossUIComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  WarBoardEventBossUIComponent___c__DisplayClass53_0_o *v5; // x21
  UnityEngine_Component_o *Sprite; // x0
  __int64 v7; // x1
  System_Action_o **p_endAction; // x20
  struct WarBoardUserServantData_o *oldBossInfo; // x8
  struct WarBoardEventBossUIComponent_BreakIcon_array *breakIconList; // x8
  WarBoardEventBossUIComponent_BreakIcon_o *v11; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_GameObject_o *pointBreakAnimPrefab; // x23
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x23
  CommonEffectActionComponent_o *Component_srcLineSprite; // x22
  const MethodInfo *v17; // x2
  struct WarBoardPieceData_o *bossPieceData; // x8
  UILabel_o *totalHpLabel; // x21
  int32_t breakPoint_k__BackingField; // w1
  System_Action_o *v21; // x19
  int v22; // s0
  const MethodInfo *v26; // x3
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardPieceData_o *v28; // x9
  int32_t v29; // w2
  __int64 v30; // x0

  if ( (byte_42AC7D8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__);
    sub_B52984(&WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
    byte_42AC7D8 = 1;
  }
  v5 = (WarBoardEventBossUIComponent___c__DisplayClass53_0_o *)sub_B52A54(WarBoardEventBossUIComponent___c__DisplayClass53_0_TypeInfo);
  WarBoardEventBossUIComponent___c__DisplayClass53_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v5->fields.endAction = endAction;
  p_endAction = &v5->fields.endAction;
  sub_B52920(&v5->fields.endAction);
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)UnityEngine_Mathf__Max_41525284(0, oldBossInfo->fields.defeatPoint - 1, 0LL);
  breakIconList = this->fields.breakIconList;
  if ( !breakIconList )
    goto LABEL_25;
  if ( (unsigned int)Sprite >= breakIconList->max_length )
  {
    v30 = sub_B52A88(Sprite);
    sub_B52A28(v30, 0LL);
  }
  v11 = breakIconList->m_Items[(int)Sprite];
  if ( !v11 )
    goto LABEL_25;
  Sprite = (UnityEngine_Component_o *)v11->fields.Sprite;
  if ( !Sprite )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(Sprite, 0LL);
  pointBreakAnimPrefab = this->fields.pointBreakAnimPrefab;
  v14 = gameObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)pointBreakAnimPrefab,
                                      (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SafeSetParent_32091088(v15, v14, 0LL);
  GameObjectExtensions__ResetLocalPosition(v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  Component_srcLineSprite = (CommonEffectActionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v15,
                                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v21 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v5,
      Method_WarBoardEventBossUIComponent___c__DisplayClass53_0__PlayPointBreakAnim_b__0__,
      0LL);
    if ( Component_srcLineSprite )
    {
      CommonEffectActionComponent__SetEventAction(Component_srcLineSprite, 0, v21, 0LL);
      return;
    }
LABEL_25:
    sub_B52A5C(Sprite, v7);
  }
  bossPieceData = this->fields.bossPieceData;
  totalHpLabel = this->fields.totalHpLabel;
  if ( bossPieceData )
    breakPoint_k__BackingField = bossPieceData->fields._breakPoint_k__BackingField;
  else
    breakPoint_k__BackingField = 0;
  *(UnityEngine_Color_o *)&v22 = WarBoardEventBossUIComponent__GetTextEffectColor(this, breakPoint_k__BackingField, v17);
  if ( !totalHpLabel )
    goto LABEL_25;
  UILabel__set_effectColor(totalHpLabel, *(UnityEngine_Color_o *)&v22, 0LL);
  currentBossInfo = this->fields.currentBossInfo;
  if ( !currentBossInfo )
    goto LABEL_25;
  v28 = this->fields.bossPieceData;
  if ( v28 )
    v29 = v28->fields._breakPoint_k__BackingField;
  else
    v29 = 0;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, currentBossInfo->fields.maxDefeatPoint, v29, v26);
  this->fields.isPointBreak = 0;
  ActionExtensions__Call(*p_endAction, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardEventBossUIComponent__SetDisp(
        WarBoardEventBossUIComponent_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  WarBoardDataEntity_o **p_warBoardDataEnt; // x21
  __int64 v6; // x1
  __int64 bossIconSp; // x0
  const MethodInfo *v8; // x2
  struct WarBoardStageBossEntity_o *warBoardStageBossEnt; // x8
  const MethodInfo *v10; // x2
  struct WarBoardStageBossEntity_o *v11; // x8
  _DWORD *v12; // x22
  struct WarBoardUserServantData_o *StageBossData; // x1
  struct WarBoardUserServantData_o **p_currentBossInfo; // x20
  struct WarBoardStageBossEntity_o *v15; // x8
  struct WarBoardPieceData_o **p_bossPieceData; // x21
  WarBoardUserServantData_o *v17; // x24
  struct WarBoardUserServantData_o **p_oldBossInfo; // x23
  struct WarBoardUserServantData_o *currentBossInfo; // x8
  struct WarBoardUserServantData_o *v20; // x9
  const MethodInfo *v21; // x2
  struct WarBoardUserServantData_o *v22; // x23
  WarBoardUserServantData_o *v23; // x23
  struct WarBoardUserServantData_o **v24; // x22
  struct WarBoardUserServantData_o *v25; // x8
  struct WarBoardUserServantData_o *v26; // x9
  struct WarBoardPieceData_o *v27; // x9
  struct WarBoardUserServantData_o *v28; // x8
  struct WarBoardPieceData_o *v29; // x8
  struct WarBoardUserServantData_o *oldBossInfo; // x9
  int defeatPoint; // w10
  struct WarBoardUserServantData_o *v32; // x8
  float v33; // s0
  float HPfrom; // s0
  struct WarBoardUserServantData_o *v35; // x8
  double v36; // d8
  float v37; // s0
  float v38; // s0
  WarBoardPieceData_o *bossPieceData; // x0
  double v40; // d0
  float v41; // s0
  float v42; // s0
  const MethodInfo *v43; // x2
  struct WarBoardUserServantData_o *v44; // x8
  const MethodInfo *v45; // x3
  struct WarBoardUserServantData_o *v46; // x8
  struct WarBoardStageBossEntity_o *v47; // x8
  UISprite_o *v48; // x20
  int idx; // w22
  Il2CppObject *v50; // x21
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  UISprite_o *hpBarUnderSprite; // x20
  Il2CppObject *v57; // x0
  System_String_o *v58; // x0
  const MethodInfo *v59; // x3
  UISprite_o *hpBarUpperSprite; // x20
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x2
  struct WarBoardUserServantData_o *v66; // x8
  float v67; // s0
  float v68; // s1
  float v69; // s2
  float v70; // s3
  float v71; // s8
  float v72; // s9
  float v73; // s10
  float v74; // s11
  const MethodInfo *v75; // x2
  struct WarBoardStageBossEntity_o *v76; // x8
  UILabel_o *bossName; // x19
  __int64 v78; // x0
  int v79; // [xsp+0h] [xbp-60h] BYREF
  int v80; // [xsp+4h] [xbp-5Ch] BYREF
  int v81; // [xsp+8h] [xbp-58h] BYREF
  int32_t iconId; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AC7CE & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&WarBoardUserServantData_TypeInfo);
    sub_B52984(&StringLiteral_23422/*"war_board_boss_hp_frame"*/);
    sub_B52984(&StringLiteral_23425/*"war_board_boss_hp_white"*/);
    sub_B52984(&StringLiteral_23424/*"war_board_boss_hp_upper_{0}"*/);
    sub_B52984(&StringLiteral_23426/*"war_board_boss_icon_{0}{1:D2}"*/);
    sub_B52984(&StringLiteral_23421/*"war_board_boss_hp_back"*/);
    sub_B52984(&StringLiteral_23423/*"war_board_boss_hp_lower_{0}"*/);
    byte_42AC7CE = 1;
  }
  this->fields.warBoardDataEnt = warBoardDataEntity;
  p_warBoardDataEnt = &this->fields.warBoardDataEnt;
  sub_B52920(&this->fields.warBoardDataEnt);
  bossIconSp = (__int64)this->fields.bossIconSp;
  if ( !bossIconSp )
    goto LABEL_72;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bossIconSp, 1, 0LL);
  bossIconSp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  warBoardStageBossEnt = this->fields.warBoardStageBossEnt;
  if ( !warBoardStageBossEnt )
    goto LABEL_72;
  if ( !bossIconSp )
    goto LABEL_72;
  bossIconSp = (__int64)WarBoardManager__GetEventBossUILoadData(
                          (WarBoardManager_o *)bossIconSp,
                          warBoardStageBossEnt->fields.idx,
                          v8);
  v11 = this->fields.warBoardStageBossEnt;
  if ( !v11 )
    goto LABEL_72;
  v12 = (_DWORD *)bossIconSp;
  if ( *p_warBoardDataEnt )
    StageBossData = WarBoardDataEntity__GetStageBossData(*p_warBoardDataEnt, v11->fields.idx, v10);
  else
    StageBossData = 0LL;
  this->fields.currentBossInfo = StageBossData;
  p_currentBossInfo = &this->fields.currentBossInfo;
  sub_B52920(&this->fields.currentBossInfo);
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
  bossIconSp = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !bossIconSp )
    goto LABEL_72;
  v15 = this->fields.warBoardStageBossEnt;
  if ( !v15 )
    goto LABEL_72;
  bossIconSp = *(_QWORD *)(bossIconSp + 432);
  if ( !bossIconSp )
    goto LABEL_72;
  this->fields.bossPieceData = WarBoardData__GetEventBossPiece((WarBoardData_o *)bossIconSp, v15->fields.idx, 0LL);
  p_bossPieceData = &this->fields.bossPieceData;
  sub_B52920(&this->fields.bossPieceData);
  if ( !v12 || (int)v12[6] < 3 )
    goto LABEL_31;
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  if ( v12[8] == (*p_currentBossInfo)->fields.stageBossIdx )
  {
    v17 = (WarBoardUserServantData_o *)sub_B52A54(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v17, 0LL);
    this->fields.oldBossInfo = v17;
    p_oldBossInfo = &this->fields.oldBossInfo;
    sub_B52920(&this->fields.oldBossInfo);
    currentBossInfo = this->fields.currentBossInfo;
    if ( !currentBossInfo )
      goto LABEL_72;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.stageBossIdx = currentBossInfo->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v20 = *p_oldBossInfo;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    v20->fields.breakHp = (*p_currentBossInfo)->fields.breakHp;
    sub_B52920(&v20->fields.breakHp);
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    if ( v12[6] <= 2u )
      goto LABEL_73;
    if ( !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.defeatPoint = v12[10];
    if ( !*p_currentBossInfo || !*p_oldBossInfo )
      goto LABEL_72;
    (*p_oldBossInfo)->fields.hp = (*p_currentBossInfo)->fields.hp;
    if ( v12[6] <= 1u )
    {
LABEL_73:
      v78 = sub_B52A88(bossIconSp);
      sub_B52A28(v78, 0LL);
    }
    v22 = *p_oldBossInfo;
    if ( !v22 )
      goto LABEL_72;
    bossIconSp = (unsigned int)v12[9];
  }
  else
  {
LABEL_31:
    v23 = (WarBoardUserServantData_o *)sub_B52A54(WarBoardUserServantData_TypeInfo);
    WarBoardUserServantData___ctor(v23, 0LL);
    this->fields.oldBossInfo = v23;
    v24 = &this->fields.oldBossInfo;
    sub_B52920(&this->fields.oldBossInfo);
    v25 = this->fields.currentBossInfo;
    if ( !v25 )
      goto LABEL_72;
    if ( !*v24 )
      goto LABEL_72;
    (*v24)->fields.stageBossIdx = v25->fields.stageBossIdx;
    if ( !*p_currentBossInfo )
      goto LABEL_72;
    v26 = *v24;
    if ( !*v24 )
      goto LABEL_72;
    v26->fields.breakHp = (*p_currentBossInfo)->fields.breakHp;
    sub_B52920(&v26->fields.breakHp);
    if ( !*p_currentBossInfo || !*v24 )
      goto LABEL_72;
    (*v24)->fields.maxDefeatPoint = (*p_currentBossInfo)->fields.maxDefeatPoint;
    v27 = *p_bossPieceData;
    v28 = *v24;
    if ( *p_bossPieceData )
      LODWORD(v27) = v27->fields._breakPoint_k__BackingField;
    if ( !v28 )
      goto LABEL_72;
    v28->fields.defeatPoint = (int)v27;
    if ( !*p_currentBossInfo || !*v24 )
      goto LABEL_72;
    (*v24)->fields.hp = (*p_currentBossInfo)->fields.hp;
    bossIconSp = (__int64)*p_bossPieceData;
    v22 = *v24;
    if ( *p_bossPieceData )
      bossIconSp = WarBoardPieceData__get_CurrentHp((WarBoardPieceData_o *)bossIconSp, 0LL);
    if ( !v22 )
      goto LABEL_72;
  }
  v22->fields.currentHp = bossIconSp;
  v29 = *p_bossPieceData;
  if ( *p_bossPieceData )
    LODWORD(v29) = v29->fields._breakPoint_k__BackingField;
  oldBossInfo = this->fields.oldBossInfo;
  if ( !oldBossInfo )
    goto LABEL_72;
  defeatPoint = oldBossInfo->fields.defeatPoint;
  this->fields.isPointBreak = (int)v29 < defeatPoint;
  if ( (int)v29 < defeatPoint )
  {
    bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, oldBossInfo->fields.defeatPoint, v21);
    v32 = this->fields.oldBossInfo;
    if ( !v32 )
      goto LABEL_72;
    v33 = (double)v32->fields.currentHp / (double)bossIconSp;
    HPfrom = UnityEngine_Mathf__Clamp01(v33, 0LL);
    bossIconSp = (__int64)this->fields.hpBarSlider;
    this->fields.HPfrom = HPfrom;
    this->fields.HPto = 0.0;
    if ( !bossIconSp )
      goto LABEL_72;
    goto LABEL_62;
  }
  if ( !*p_currentBossInfo )
    goto LABEL_72;
  bossIconSp = WarBoardEventBossUIComponent__GetMaxHpByBreakPoint(this, (*p_currentBossInfo)->fields.defeatPoint, v21);
  v35 = this->fields.oldBossInfo;
  if ( !v35 )
    goto LABEL_72;
  v36 = (double)bossIconSp;
  v37 = (double)v35->fields.currentHp / (double)bossIconSp;
  v38 = UnityEngine_Mathf__Clamp01(v37, 0LL);
  bossPieceData = this->fields.bossPieceData;
  this->fields.HPfrom = v38;
  v40 = bossPieceData ? (double)WarBoardPieceData__get_CurrentHp(bossPieceData, 0LL) : 0.0;
  v41 = v40 / v36;
  v42 = UnityEngine_Mathf__Clamp01(v41, 0LL);
  bossIconSp = (__int64)this->fields.hpBarSlider;
  this->fields.HPto = v42;
  if ( !bossIconSp )
LABEL_72:
    sub_B52A5C(bossIconSp, v6);
  HPfrom = this->fields.HPfrom;
LABEL_62:
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, HPfrom, 0LL);
  v44 = this->fields.oldBossInfo;
  if ( !v44 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetTotalHpText(this, v44->fields.currentHp, v43);
  bossIconSp = (__int64)this->fields.hpBarSliderUnder;
  if ( !bossIconSp )
    goto LABEL_72;
  UIProgressBar__set_value((UIProgressBar_o *)bossIconSp, 0.0, 0LL);
  v46 = this->fields.oldBossInfo;
  if ( !v46 )
    goto LABEL_72;
  WarBoardEventBossUIComponent__SetupBreakPoint(this, v46->fields.maxDefeatPoint, v46->fields.defeatPoint, v45);
  v47 = this->fields.warBoardStageBossEnt;
  if ( !v47 )
    goto LABEL_72;
  v48 = this->fields.bossIconSp;
  idx = v47->fields.idx;
  iconId = v47->fields.iconId;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v81 = idx;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  v52 = System_String__Format_44563852((System_String_o *)StringLiteral_23426/*"war_board_boss_icon_{0}{1:D2}"*/, v50, v51, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, v48, v52, v53);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpFrame,
    (System_String_o *)StringLiteral_23422/*"war_board_boss_hp_frame"*/,
    v54);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
    this,
    this->fields.bossHpBg,
    (System_String_o *)StringLiteral_23421/*"war_board_boss_hp_back"*/,
    v55);
  hpBarUnderSprite = this->fields.hpBarUnderSprite;
  v80 = idx;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  v58 = System_String__Format((System_String_o *)StringLiteral_23423/*"war_board_boss_hp_lower_{0}"*/, v57, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUnderSprite, v58, v59);
  hpBarUpperSprite = this->fields.hpBarUpperSprite;
  v79 = idx;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  v62 = System_String__Format((System_String_o *)StringLiteral_23424/*"war_board_boss_hp_upper_{0}"*/, v61, 0LL);
  WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(this, hpBarUpperSprite, v62, v63);
  bossIconSp = WarBoardEventBossUIComponent__SetSpriteByLocalAtlas(
                 this,
                 this->fields.hpBarWhiteSprite,
                 (System_String_o *)StringLiteral_23425/*"war_board_boss_hp_white"*/,
                 v64);
  v66 = this->fields.oldBossInfo;
  if ( !v66 )
    goto LABEL_72;
  *(UnityEngine_Color_o *)&v67 = WarBoardEventBossUIComponent__GetTextEffectColor(this, v66->fields.defeatPoint, v65);
  bossIconSp = (__int64)this->fields.totalHpLabel;
  if ( !bossIconSp )
    goto LABEL_72;
  v71 = v67;
  v72 = v68;
  v73 = v69;
  v74 = v70;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, *(UnityEngine_Color_o *)&v67, 0LL);
  bossIconSp = (__int64)this->fields.bossName;
  if ( !bossIconSp )
    goto LABEL_72;
  v83.fields.r = v71;
  v83.fields.g = v72;
  v83.fields.b = v73;
  v83.fields.a = v74;
  UILabel__set_effectColor((UILabel_o *)bossIconSp, v83, 0LL);
  v76 = this->fields.warBoardStageBossEnt;
  if ( !v76 )
    goto LABEL_72;
  bossName = this->fields.bossName;
  bossIconSp = (__int64)WarBoardEventBossUIComponent__GetStageBossName(
                          (WarBoardEventBossUIComponent_o *)bossIconSp,
                          v76->fields.idx,
                          v75);
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42AC7D6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_42AC7D6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B52A5C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B52A5C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B52A5C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


void __fastcall WarBoardEventBossUIComponent__SetTotalHpText(
        WarBoardEventBossUIComponent_o *this,
        int64_t hp,
        const MethodInfo *method)
{
  UILabel_o *totalHpLabel; // x20
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AC7CF & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3310/*"COMMON_NUM_FORMAT"*/);
    byte_42AC7CF = 1;
  }
  totalHpLabel = this->fields.totalHpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3310/*"COMMON_NUM_FORMAT"*/, 0LL);
  v10 = hp;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v10);
  v8 = System_String__Format(v6, v7, 0LL);
  if ( !totalHpLabel )
    sub_B52A5C(v8, v9);
  UILabel__set_text(totalHpLabel, v8, 0LL);
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
  sub_B52920(&this->fields.warBoardStageBossEnt);
  this->fields.assetData = assetData;
  sub_B52920(&this->fields.assetData);
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
      sub_B52A5C(this, *(_QWORD *)&maxCount);
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
    v23 = sub_B52A88(this);
    sub_B52A28(v23, 0LL);
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
        sub_B52A5C(bossPieceData, method);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
  CurrentBossHp = WarBoardEventBossUIComponent__get_CurrentBossHp(this->fields.__4__this, 0LL);
  WarBoardEventBossUIComponent__SetTotalHpText(_4__this, CurrentBossHp, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}