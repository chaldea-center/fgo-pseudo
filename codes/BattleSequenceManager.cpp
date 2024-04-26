void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  if ( (byte_434ECE9 & 1) == 0 )
  {
    sub_B70694(&BattleSequenceManager_TypeInfo);
    byte_434ECE9 = 1;
  }
  BattleSequenceManager_TypeInfo->static_fields->defaultForceObi_16_9 = 1;
  BattleSequenceManager_TypeInfo->static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v9; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v10; // x20
  System_RuntimeFieldHandle_o v11; // 0:w1.4

  if ( (byte_434ECE8 & 1) == 0 )
  {
    sub_B70694(&BattlePerformance_BattleUIPanel___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_Object___ctor___69167832);
    sub_B70694(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_B70694(&System_Collections_Generic_List_Action__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_Object__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_B70694(&Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C);
    sub_B70694(&StringLiteral_9507/*"N_{0}{1}"*/);
    byte_434ECE8 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Array_o *)sub_B706AC(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v11.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v3, v11, 0LL);
  this->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v3;
  sub_B70630(&this->fields.FadeTargetPanelIndexs);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v4;
  sub_B70630(&this->fields.ReleaseSoundNames);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v5;
  sub_B70630(&this->fields.DelayInvokeMethodList);
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9507/*"N_{0}{1}"*/;
  sub_B70630(&this->fields.PosNodeFormatNP);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Object___ctor___69167832);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v6;
  sub_B70630(&this->fields.npEndDeleteObjects);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v7;
  sub_B70630(&this->fields.battleTargetList);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B70630(&this->fields.createdObjects);
  v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B70764(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v9,
    (const MethodInfo_2FAEE04 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_B70630(&this->fields.playAudioSyncGroupIndexDict);
  v10 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v10,
    (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v10;
  sub_B70630(&this->fields.playedAudioGroupIdHash);
  this->fields.nowTargetAlpha = 1.0;
  this->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)sub_B706AC(UnityEngine_GameObject___TypeInfo, 3LL);
  sub_B70630(&this->fields.saveWaitEnemy);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_434ECCC & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23571/*"wait"*/);
    byte_434ECCC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !actor )
      sub_B7076C(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_23849600(actor, (System_String_o *)StringLiteral_23571/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      clear = UnityEngine_Color__get_clear(0LL);
      BattleActorControl__ChangeShadowColor(actor, clear, 0.3, 0LL);
    }
    black = UnityEngine_Color__get_black(0LL);
    BattleActorControl__SetMaterialColor(actor, black, 0.0, 0LL);
  }
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_434ECE2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_string___);
    byte_434ECE2 = 1;
  }
  if ( System_String__Equals_44816924(bgmName, this->fields.BackupBgmName, 0LL) )
  {
    return 0;
  }
  else
  {
    intactBgmList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.intactBgmList;
    return !intactBgmList
        || !intactBgmList[1].monitor
        || !System_Linq_Enumerable__Contains_WarBoardPieceData_(
              intactBgmList,
              (WarBoardPieceData_o *)this->fields.BackupBgmName,
              (const MethodInfo_1CB5AC4 *)Method_System_Linq_Enumerable_Contains_string___);
  }
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure(
        BattleSequenceManager_o *this,
        WellFired_USFGOPlayCutInBase_o *baseCutInEvent,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  if ( !baseCutInEvent )
    sub_B7076C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_19583664(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_19583664(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass78_0_o *v7; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v11; // x21
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v15; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v19; // x24

  if ( (byte_434ECB4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass78_0__CreateCutInStandFigure_b__0__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass78_0_TypeInfo);
    byte_434ECB4 = 1;
  }
  v7 = (BattleSequenceManager___c__DisplayClass78_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass78_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass78_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
  v7->fields.__4__this = this;
  sub_B70630(&v7->fields);
  v7->fields.obj = obj;
  sub_B70630(&v7->fields.obj);
  v7->fields.onComplete = onComplete;
  sub_B70630(&v7->fields.onComplete);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_17;
  v11 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_17;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v11 )
    goto LABEL_17;
  this->fields.standFigure = StandFigureManager__CreateMeshLocal(v11, (UnityEngine_GameObject_o *)Instance, 0LL);
  p_standFigure = &this->fields.standFigure;
  sub_B70630(&this->fields.standFigure);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    Instance = (UnityEngine_Component_o *)*p_standFigure;
    if ( *p_standFigure )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      Instance = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(
                                              this->fields.loadStandFigureId,
                                              this->fields.loadStandFigureLimitCount,
                                              0LL);
      if ( gameObject )
      {
        UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
        Instance = (UnityEngine_Component_o *)*p_standFigure;
        if ( *p_standFigure )
        {
          UIStandFigureRender__SetDepth((UIStandFigureRender_o *)Instance, 0.0, 0LL);
          v15 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v19 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v19,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass78_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v15 )
            return UIStandFigureM__SetCharacter_40769980(
                     v15,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v19,
                     1,
                     0LL);
        }
      }
    }
LABEL_17:
    sub_B7076C(Instance, v9);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v5; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v7; // x2
  _BOOL4 v8; // w21
  _BOOL4 v9; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  System_String_o *v11; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v13; // x3
  BgmPlayArgsGroup_o *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  float v18; // s0
  double v19; // d0
  int32_t v20; // w21
  const MethodInfo_24389F0 *v21; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  System_Object_array *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  struct BattlePerformance_o *v26; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v28; // x8
  struct BattlePerformance_o *v29; // x8
  System_String_o *v30; // x19
  __int64 v31; // x2
  BattleSequenceManager_c *v32; // x0
  Il2CppObject *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  Il2CppObject *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x1
  System_Collections_Hashtable_o *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  int v45; // [xsp+Ch] [xbp-84h] BYREF
  System_Nullable_long__o startTime; // [xsp+10h] [xbp-80h] BYREF
  System_Nullable_float__o v47; // [xsp+20h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+28h] [xbp-68h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+48h] [xbp-48h] BYREF
  System_Nullable_float__o v50; // 0:x0.8
  System_Nullable_float__o v51; // 0:x1.8
  System_Nullable_float__o v52; // 0:x2.8
  System_Nullable_long__o v53; // 0:x0.16

  if ( (byte_434ECCD & 1) == 0 )
  {
    sub_B70694(&BattleSequenceManager_TypeInfo);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_System_Nullable_long___ctor__);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_10064/*"OnChangeBgmVolume"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_434ECCD = 1;
  }
  changeBgm = 0LL;
  memset(&v48, 0, sizeof(v48));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_94;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v5 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v5, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v8 = 0;
  }
  else
  {
    *p_BackupBgmName = v5;
    sub_B70630(&this->fields.BackupBgmName);
    v8 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v7) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_94;
    this->fields.BackupBgmName = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
                                   changeBgm,
                                   this->fields.performance,
                                   this->fields.BackupBgmName,
                                   0LL);
    sub_B70630(&this->fields.BackupBgmName);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_94;
    v9 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v8 = 1;
  }
  else
  {
    v9 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    this->fields.BackupBgmName = BattleActionData_AfterChangeField__GetPriorityBgmName(
                                   changeFieldAfter,
                                   this->fields.performance,
                                   this->fields.BackupBgmName,
                                   0LL);
    sub_B70630(&this->fields.BackupBgmName);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_94;
    v9 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
           (BattleActionData_AfterChangeField_o *)performance,
           0LL);
    v8 = 1;
  }
  v11 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_94:
    sub_B7076C(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v9 | System_String__op_Inequality(v11, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_B706AC(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_94;
    v23 = (System_Object_array *)performance;
    v24 = StringLiteral_19208/*"from"*/;
    if ( StringLiteral_19208/*"from"*/ )
    {
      v24 = sub_B70754(StringLiteral_19208/*"from"*/, v23->obj.klass->_1.element_class);
      if ( !v24 )
        goto LABEL_96;
      v25 = StringLiteral_19208/*"from"*/;
    }
    else
    {
      v25 = 0LL;
    }
    if ( !v23->max_length )
      goto LABEL_95;
    v23->m_Items[0] = (Il2CppObject *)v25;
    sub_B70630(v23->m_Items);
    v32 = BattleSequenceManager_TypeInfo;
    if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v32 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&startTime.fields.value = v32->static_fields->NoblePhantasmBgmVolumeRate;
    v24 = j_il2cpp_value_box_0(float_TypeInfo, &startTime, v31);
    v33 = (Il2CppObject *)v24;
    if ( !v24 || (v24 = sub_B70754(v24, v23->obj.klass->_1.element_class)) != 0 )
    {
      if ( v23->max_length <= 1 )
        goto LABEL_95;
      v23->m_Items[1] = v33;
      sub_B70630(&v23->m_Items[1]);
      v24 = StringLiteral_23091/*"to"*/;
      if ( StringLiteral_23091/*"to"*/ )
      {
        v24 = sub_B70754(StringLiteral_23091/*"to"*/, v23->obj.klass->_1.element_class);
        if ( !v24 )
          goto LABEL_96;
        v34 = StringLiteral_23091/*"to"*/;
      }
      else
      {
        v34 = 0LL;
      }
      if ( v23->max_length <= 2 )
        goto LABEL_95;
      v23->m_Items[2] = (Il2CppObject *)v34;
      sub_B70630(&v23->m_Items[2]);
      LODWORD(v47.fields.value) = 1;
      v24 = j_il2cpp_value_box_0(int_TypeInfo, &v47, v35);
      v36 = (Il2CppObject *)v24;
      if ( !v24 || (v24 = sub_B70754(v24, v23->obj.klass->_1.element_class)) != 0 )
      {
        if ( v23->max_length <= 3 )
          goto LABEL_95;
        v23->m_Items[3] = v36;
        sub_B70630(&v23->m_Items[3]);
        v24 = StringLiteral_23053/*"time"*/;
        if ( StringLiteral_23053/*"time"*/ )
        {
          v24 = sub_B70754(StringLiteral_23053/*"time"*/, v23->obj.klass->_1.element_class);
          if ( !v24 )
            goto LABEL_96;
          v37 = StringLiteral_23053/*"time"*/;
        }
        else
        {
          v37 = 0LL;
        }
        if ( v23->max_length <= 4 )
          goto LABEL_95;
        v23->m_Items[4] = (Il2CppObject *)v37;
        sub_B70630(&v23->m_Items[4]);
        v45 = 1056964608;
        v24 = j_il2cpp_value_box_0(float_TypeInfo, &v45, v38);
        v39 = (Il2CppObject *)v24;
        if ( !v24 || (v24 = sub_B70754(v24, v23->obj.klass->_1.element_class)) != 0 )
        {
          if ( v23->max_length <= 5 )
            goto LABEL_95;
          v23->m_Items[5] = v39;
          sub_B70630(&v23->m_Items[5]);
          v24 = StringLiteral_21614/*"onupdate"*/;
          if ( StringLiteral_21614/*"onupdate"*/ )
          {
            v24 = sub_B70754(StringLiteral_21614/*"onupdate"*/, v23->obj.klass->_1.element_class);
            if ( !v24 )
              goto LABEL_96;
            v40 = StringLiteral_21614/*"onupdate"*/;
          }
          else
          {
            v40 = 0LL;
          }
          if ( v23->max_length <= 6 )
            goto LABEL_95;
          v23->m_Items[6] = (Il2CppObject *)v40;
          sub_B70630(&v23->m_Items[6]);
          v24 = StringLiteral_10064/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10064/*"OnChangeBgmVolume"*/ )
          {
            v41 = 0LL;
LABEL_88:
            if ( v23->max_length > 7 )
            {
              v23->m_Items[7] = (Il2CppObject *)v41;
              sub_B70630(&v23->m_Items[7]);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v42 = iTween__Hash(v23, 0LL);
              iTween__ValueTo(gameObject, v42, 0LL);
              return;
            }
LABEL_95:
            v43 = sub_B70798(v24);
            sub_B70738(v43, 0LL);
          }
          v24 = sub_B70754(StringLiteral_10064/*"OnChangeBgmVolume"*/, v23->obj.klass->_1.element_class);
          if ( v24 )
          {
            v41 = StringLiteral_10064/*"OnChangeBgmVolume"*/;
            goto LABEL_88;
          }
        }
      }
    }
LABEL_96:
    v44 = sub_B7078C();
    sub_B70738(v44, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v8, this->fields.BackupBgmName, v13);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v14 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v48,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)performance,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          while ( 1 )
          {
            v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v48,
                    (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v15 )
              break;
            current = v48.fields.current;
            if ( !v48.fields.current )
              sub_B7076C(v15, v16);
            v18 = (float)(__int64)v48.fields.current[2].klass + -800.0;
            if ( v18 == INFINITY )
              v19 = -INFINITY;
            else
              v19 = v18;
            v20 = UnityEngine_Mathf__Max_41127884(0, (int)v19, 0LL);
            v47 = 0LL;
            v50 = (System_Nullable_float__o)&v47;
            System_Nullable_float____ctor(v50, 0.5, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&v53.fields.has_value = v20;
            startTime.fields.value = 0LL;
            *(_QWORD *)&startTime.fields.has_value = 0LL;
            v53.fields.value = (int64_t)&startTime;
            System_Nullable_long____ctor(v53, Method_System_Nullable_long___ctor__, v21);
            v52 = v47;
            v51 = 0LL;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v51, v52, startTime, 0LL);
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v48,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_24036516(v14, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_94;
  }
  if ( v8 )
  {
    v26 = this->fields.performance;
    if ( !v26 )
      goto LABEL_94;
    logic = (UnityEngine_Object_o *)v26->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v28 = this->fields.performance;
      if ( v28 )
      {
        performance = (__int64)v28->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v29 = this->fields.performance;
          if ( v29 )
          {
            performance = (__int64)v29->fields.logic;
            if ( performance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)performance, 0.5, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_94;
    }
  }
  v30 = *p_BackupBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v30, 0LL);
}


bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass141_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x20

  if ( (byte_434ECE4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_B70694(&Method_System_Func_BgmPlayArgs__bool___ctor__);
    sub_B70694(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass141_0__ExistBackupBgmPlayGroup_b__0__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass141_0_TypeInfo);
    byte_434ECE4 = 1;
  }
  v7 = (BattleSequenceManager___c__DisplayClass141_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass141_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass141_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  v7->fields.checkBgmName = checkBgmName;
  sub_B70630(&v7->fields);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                               backupBgmPlayArgsGroup,
                                                               0LL);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass141_0__ExistBackupBgmPlayGroup_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v11,
           (System_Func_TSource__bool__o *)v12,
           (const MethodInfo_1CAA848 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x19
  struct BattlePerformance_BattleUIPanel_array *FadeTargetPanelIndexs; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v14; // x8
  __int64 v15; // x0

  v6 = this;
  if ( (byte_434ECC4 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECC4 = 1;
  }
  FadeTargetPanelIndexs = v6->fields.FadeTargetPanelIndexs;
  v6->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_25;
  v8 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v15 = sub_B70798(this);
        sub_B70738(v15, 0LL);
      }
      this = (BattleSequenceManager_o *)v6->fields.performance;
      if ( !this )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        (BattlePerformance_o *)this,
                                        FadeTargetPanelIndexs->m_Items[v9 + 1],
                                        0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(Panel, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Panel )
          break;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Panel, 0LL);
        this = (BattleSequenceManager_o *)TweenAlpha__Begin(gameObject, time, targetAlpha, 0LL);
      }
      LODWORD(v8) = FadeTargetPanelIndexs->max_length;
      if ( (__int64)++v9 >= (int)v8 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B7076C(this, method);
  }
LABEL_15:
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_25;
  root_drop = (UnityEngine_Object_o *)performance->fields.root_drop;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(root_drop, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v6->fields.performance;
    if ( !v14 )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)v14->fields.root_drop;
    if ( !this )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, targetAlpha == 1.0, 0LL);
  }
}


UIStandFigureM_o *__fastcall BattleSequenceManager__FetchMeshPrefab(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  if ( this->fields.chrId == svtId
    && this->fields.actorLimitImgCount == limitImgCnt
    && this->fields.faceType == faceType
    || this->fields.loadStandFigureId == svtId
    && this->fields.loadStandFigureLimitCount == limitImgCnt
    && this->fields.faceType == faceType )
  {
    return this->fields.standFigure;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall BattleSequenceManager__FixSyncGroupRandomAudioPlayIndex(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *sequence,
        System_String_o *syncGroupName,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass75_0_o *v6; // x22
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  BattleSequenceManager___c_c *v10; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__75_0; // x23
  Il2CppObject *v13; // x24
  struct BattleSequenceManager___c_StaticFields *v14; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  BattleSequenceManager___c_c *v18; // x0
  struct BattleSequenceManager___c_StaticFields *v19; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__75_2; // x19
  Il2CppObject *v21; // x22
  struct BattleSequenceManager___c_StaticFields *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_434ECB3 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_B70694(&Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
    sub_B70694(&Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_B70694(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_B70694(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_B70694(&Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
    sub_B70694(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_B70694(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_B70694(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_0__);
    sub_B70694(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_2__);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass75_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
    sub_B70694(&BattleSequenceManager___c_TypeInfo);
    byte_434ECB3 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v6 = (BattleSequenceManager___c__DisplayClass75_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass75_0___ctor(v6, 0LL);
  if ( !v6 )
    goto LABEL_31;
  v6->fields.syncGroupName = syncGroupName;
  sub_B70630(&v6->fields);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_31;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                        sequence,
                                                        (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v9 )
    goto LABEL_31;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
    v7,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v10 = BattleSequenceManager___c_TypeInfo;
  if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v10 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__75_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__75_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__75_0,
      v13,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    v14 = BattleSequenceManager___c_TypeInfo->static_fields;
    v14->__9__75_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__75_0;
    sub_B70630(&v14->__9__75_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v9,
    (System_Comparison_T__o *)_9__75_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass75_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    (const MethodInfo_29AC578 *)Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v9,
          (System_Func_T__bool__o *)v15,
          (const MethodInfo_1BDCA88 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    v7 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                          sequence,
                                                          (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v16 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        v7,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v17 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                             sequence,
                                                             (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v16,
        v17,
        (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v18 = BattleSequenceManager___c_TypeInfo;
      if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v18 = BattleSequenceManager___c_TypeInfo;
      }
      v19 = v18->static_fields;
      _9__75_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v19->__9__75_2;
      if ( !_9__75_2 )
      {
        if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v19 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v21 = (Il2CppObject *)v19->__9;
        _9__75_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__75_2,
          v21,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_2__,
          (const MethodInfo_2B05B38 *)Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
        v22 = BattleSequenceManager___c_TypeInfo->static_fields;
        v22->__9__75_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__75_2;
        sub_B70630(&v22->__9__75_2);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
        (System_Comparison_T__o *)_9__75_2,
        (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v24,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v24.fields.current )
          sub_B7076C(0LL, v23);
      }
      while ( (((__int64 (*)(void))v24.fields.current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_31:
    sub_B7076C(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleSequenceManager__GetOverwritedCutInLimitCount(
        BattleSequenceManager_o *this,
        int32_t curLimCnt,
        int32_t svtId,
        int32_t defLimCnt,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  int32_t ServantId; // w0

  if ( (byte_434ECB7 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECB7 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit(Component_srcLineSprite, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_srcLineSprite, 0LL);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_srcLineSprite, 0LL);
      return curLimCnt;
    }
    goto LABEL_16;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B7076C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_srcLineSprite, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 *v8; // x8
  Il2CppObject *v9; // x22
  WebViewManager_o *Instance; // x21
  __int64 v11; // x2
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434ECD7 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_B70694(&StringLiteral_6085/*"Enemy"*/);
    sub_B70694(&StringLiteral_10845/*"Player"*/);
    byte_434ECD7 = 1;
  }
  v8 = &StringLiteral_6085/*"Enemy"*/;
  if ( !isEnemy )
    v8 = &StringLiteral_10845/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v16 = pos;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11);
  v13 = System_String__Format_44753704(format, v9, v12, 0LL);
  if ( !Instance )
    sub_B7076C(v13, v14);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v13, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass122_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_434ECD8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_B70694(&Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
    sub_B70694(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass122_0__GetTargetPosIndexTransform_b__0__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass122_0_TypeInfo);
    byte_434ECD8 = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass122_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass122_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass122_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.posIndex = posIndex;
  battleTargetList = this->fields.battleTargetList;
  v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass122_0__GetTargetPosIndexTransform_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)battleTargetList,
                                        (System_Predicate_T__o *)v9,
                                        (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0LL);
LABEL_9:
    sub_B7076C(v6, v7);
  }
  return result;
}


bool __fastcall BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  System_String_o *fixedVoice; // x1

  *fxdVoice = 0LL;
  sub_B70630(fxdVoice);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_B70630(fxdVoice);
  return 1;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_434ECE3 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECE3 = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0LL) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(actor, 0LL, 0LL) )
    return 0;
  v8 = this->fields.actor;
  if ( !v8 )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_18:
    sub_B7076C(v8, v7);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_srcLineSprite, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *webView; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  if ( (byte_434ECE5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_434ECE5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v2 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_21;
  webView = (UnityEngine_Object_o *)v2->fields.webView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(webView, 0LL, 0LL) )
    return 0;
  v2 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_21;
  v2 = (WebViewManager_o *)v2->fields.webView;
  if ( !v2 )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v2,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = (WebViewManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B7076C(v2, v3);
  return LOBYTE(Component_srcLineSprite[3].fields.mcTweenScaleP) == 0;
}


bool __fastcall BattleSequenceManager__IsReleaseSound(
        BattleSequenceManager_o *this,
        System_String_o *soundName,
        const MethodInfo *method)
{
  return !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, soundName, 0LL);
}


bool __fastcall BattleSequenceManager__IsSameBattleBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  return BasicHelper__EqualExceptNullOrEmpty(bgmName, this->fields.BackupBgmName, 0LL);
}


bool __fastcall BattleSequenceManager__IsTimeAccelerateNow(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( (byte_434ECE7 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECE7 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return !UnityEngine_Object__op_Equality(performance, 0LL, 0LL)
      && BattleSequenceManager__get_isAuthTDAccelerate(this, v4);
}


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *IsNullOrEmpty; // x0
  __int64 v8; // x1

  if ( (byte_434ECB5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_434ECB5 = 1;
  }
  IsNullOrEmpty = (struct System_Collections_Generic_List_string__o *)System_String__IsNullOrEmpty(bgmName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( callback )
    {
      System_Action__Invoke(callback, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(IsNullOrEmpty, v8);
  }
  IsNullOrEmpty = this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
    (EventMissionProgressRequest_Argument_ProgressData_o *)bgmName,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(bgmName, callback, 1, 0LL);
}


void __fastcall BattleSequenceManager__LoadEndStandFigure(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  UnityEngine_Object_o *standFigure; // x22
  __int64 v8; // x1
  UIStandFigureRender_o *v9; // x0

  if ( (byte_434ECB6 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECB6 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_B7076C(0LL, v8);
    UIStandFigureRender__SetActive(v9, 0, 0LL);
  }
  if ( onComplete )
    BattleSequenceManager_onGameObjectLoadComplete__Invoke(onComplete, obj, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__MultiTargetBossPositioning(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *CoreObj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *mcMyTrans; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  srcLineSprite_o *v14; // x21
  __int64 *v15; // x8
  struct BattlePerformance_o *v16; // x9
  System_String_o *v17; // x19
  BattleData_o *v18; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434ECD3 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_18597/*"en_Parts_Up01"*/);
    sub_B70694(&StringLiteral_18596/*"en_Parts_Under01"*/);
    byte_434ECD3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0LL, 0LL) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)mcMyTrans & 1) == 0 )
    {
      v8 = this->fields.performance;
      if ( !v8 )
        goto LABEL_61;
      data = (UnityEngine_Object_o *)v8->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)mcMyTrans & 1) == 0 )
      {
        v10 = this->fields.performance;
        if ( !v10 )
          goto LABEL_61;
        v11 = v10->fields.data;
        if ( !v11 )
          goto LABEL_61;
        if ( v11->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_61;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      CoreObj,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Component_srcLineSprite,
                                                    0LL,
                                                    0LL);
          if ( ((unsigned __int8)mcMyTrans & 1) == 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_61;
            mcMyTrans = (UnityEngine_GameObject_o *)Component_srcLineSprite[3].fields.mcMyTrans;
            if ( !mcMyTrans )
              goto LABEL_61;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)mcMyTrans, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                mcMyTrans = this->fields.SingleTarget;
                if ( !mcMyTrans )
                  goto LABEL_61;
                v14 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        mcMyTrans,
                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)v14,
                                                          0LL,
                                                          0LL);
                if ( ((unsigned __int8)mcMyTrans & 1) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_61;
                  if ( LOBYTE(v14[3].fields.mcTweenScaleP) )
                  {
                    mcMyTrans = (UnityEngine_GameObject_o *)v14[3].fields.mcMyTrans;
                    if ( !mcMyTrans )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)mcMyTrans, 0LL) )
                      goto LABEL_43;
                    mcMyTrans = (UnityEngine_GameObject_o *)v14[3].fields.mcMyTrans;
                    if ( !mcMyTrans )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)mcMyTrans, 0LL) )
                    {
LABEL_43:
                      mcMyTrans = (UnityEngine_GameObject_o *)v14[3].fields.mcMyTrans;
                      if ( !mcMyTrans )
                        goto LABEL_61;
                      mcMyTrans = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                                (BattleServantData_o *)mcMyTrans,
                                                                0LL);
                      if ( ((unsigned __int8)mcMyTrans & 1) != 0 )
                      {
                        v15 = &StringLiteral_18597/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        mcMyTrans = (UnityEngine_GameObject_o *)v14[3].fields.mcMyTrans;
                        if ( !mcMyTrans )
                          goto LABEL_61;
                        mcMyTrans = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                  (BattleServantData_o *)mcMyTrans,
                                                                  0LL);
                        if ( ((unsigned __int8)mcMyTrans & 1) == 0 )
                          return 0;
                        v15 = &StringLiteral_18596/*"en_Parts_Under01"*/;
                      }
                      v16 = this->fields.performance;
                      if ( !v16 )
                        goto LABEL_61;
                      v17 = (System_String_o *)*v15;
                      v18 = v16->fields.data;
                      mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL);
                      if ( !v18 )
                        goto LABEL_61;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v18,
                                                                    (UnityEngine_Transform_o *)mcMyTrans,
                                                                    v17,
                                                                    0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                  0LL);
                        if ( mcMyTrans )
                        {
                          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)mcMyTrans,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v23 = v20;
                            v24 = v21;
                            v25 = v22;
                            mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      TransformChild,
                                                                      0LL);
                            if ( mcMyTrans )
                            {
                              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)mcMyTrans, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              mcMyTrans = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                        0LL);
                              if ( mcMyTrans )
                              {
                                v31.fields.x = v23 - x;
                                v31.fields.y = v24 - y;
                                v31.fields.z = v25 - z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mcMyTrans, v31, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_61:
                        sub_B7076C(mcMyTrans, v7);
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
  }
  return 0;
}


void __fastcall BattleSequenceManager__OnBgChanged(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  BattleSequenceManager_o *v3; // x19
  System_Action_o *BgChangedCallback; // x0
  struct System_Action_o **p_BgChangedCallback; // x19

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0LL) )
    sub_B7076C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = &v3->fields.BgChangedCallback;
    System_Action__Invoke(BgChangedCallback, 0LL);
    *p_BgChangedCallback = 0LL;
    sub_B70630(p_BgChangedCallback);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v9; // x19
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  System_String_o *v25; // x20
  float v26; // s9
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0

  if ( (byte_434ECC8 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_434ECC8 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v6 )
      sub_B7076C(0LL, v7);
    klass = v6->klass;
    v9 = v6;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        ++v10;
        p_offset += 4;
        if ( v10 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v9,
            *(_QWORD *)(p_method + 8));
    if ( !v14 )
      sub_B7076C(0LL, v13);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
      {
        v16 = 0LL;
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v16;
          v17 += 4;
          if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
            goto LABEL_16;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_16:
        v18 = sub_B08590(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
      {
        v20 = 0LL;
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          ++v20;
          v21 += 4;
          if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
            goto LABEL_23;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_23:
        v22 = sub_B08590(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v24 )
        sub_B7076C(0LL, v23);
      v25 = *(System_String_o **)(v24 + 16);
      v26 = *(float *)(v24 + 24);
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v25, v26 * newValue, 0LL);
    }
    v27 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_34;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_34:
      v30 = sub_B08590(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *actorCamera; // x20
  srcLineSprite_o *v5; // x1
  const MethodInfo *v6; // x2
  __int64 transform; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  Il2CppObject *v15; // x20
  int v16; // w20
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v19; // x21
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v21; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v24; // x10
  unsigned __int64 v25; // x22
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v27; // x21
  struct System_Collections_Generic_List_bool__o *v28; // x27
  char *v29; // x8
  int v30; // w27
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v33; // x24
  __int64 v34; // x25
  unsigned __int64 v35; // x9
  unsigned __int64 v36; // x26
  UnityEngine_Object_o *v37; // x21
  struct BattlePerformance_o *v38; // x9
  struct UnityEngine_GameObject_array *v39; // x8
  unsigned int *v40; // x27
  __int64 v41; // x21
  struct BattlePerformance_o *v42; // x8
  struct UnityEngine_GameObject_array *v43; // x24
  __int64 v44; // x8
  unsigned __int64 v45; // x25
  UnityEngine_Object_o *v46; // x21
  struct System_Collections_Generic_List_bool__o *v47; // x28
  char *v48; // x8
  int v49; // w28
  UnityEngine_Object_o *v50; // x21
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v52; // x8
  struct BattlePerformance_o *v53; // x8
  struct UnityEngine_GameObject_array *v54; // x22
  __int64 v55; // x8
  unsigned __int64 v56; // x24
  UnityEngine_Object_o *v57; // x21
  BattleActorControl_o *v58; // x0
  const MethodInfo *v59; // x2
  struct BattlePerformance_o *v60; // x8
  struct UnityEngine_GameObject_array *v61; // x22
  __int64 v62; // x8
  unsigned __int64 v63; // x24
  UnityEngine_Object_o *v64; // x21
  BattleActorControl_o *v65; // x0
  const MethodInfo *v66; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v69; // x2
  UnityEngine_Camera_o *v70; // x21
  int32_t cullingMask; // w22
  char v72; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v74; // w22
  char v75; // w0
  struct BattlePerformance_o *v76; // x8
  UnityEngine_Object_o *v77; // x21
  bool v78; // w0
  struct BattlePerformance_o *v79; // x8
  BattlePerformance_o *v80; // x20
  int32_t v81; // w21
  int32_t CurrentGroundType; // w0
  __int64 v83; // x0
  __int64 v84; // x0
  struct UnityEngine_GameObject_o **v85; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+8h] [xbp-B8h] BYREF
  int v87[2]; // [xsp+20h] [xbp-A0h]
  int v88; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_434ECCA & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_USSequencer__Invoke__);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&CommonUI_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_B70694(&StringLiteral_9710/*"NoblePhantasm/CutIns"*/);
    sub_B70694(&StringLiteral_2833/*"Battle2D"*/);
    byte_434ECCA = 1;
  }
  entity = 0LL;
  memset(&v90, 0, sizeof(v90));
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  this->fields.IsPlaying = 0;
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v3);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0LL, 0LL) )
  {
    transform = (__int64)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_195;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_195;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v6);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v8);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v9);
  BattleSequenceManager__restoreBattleActorTransform(this, v10);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_195;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_21C049C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v11) )
    BattleSequenceManager__CrossFadeBgm(this, v12);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v12);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_195;
  transform = (__int64)performance->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__loadEffectStatus((BattleActionCamera_o *)transform, 0LL);
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v90 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v90,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v90.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)current, 0LL);
    }
  }
  v87[0] = 208;
  v88 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v90,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  v88 = 0;
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_Object__Clear__);
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v86,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v89 = v86;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v89,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v15 = v89.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)v15, 0LL);
    }
  }
  v87[0] = 284;
  v16 = ++v88;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v89,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v16 && v87[v16 - 1] == 284 )
    v88 = v16 - 1;
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v19 = (UnityEngine_Object_o *)*p_seqObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(v19, 0LL);
    *p_seqObject = 0LL;
    sub_B70630(&this->fields.seqObject);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_195;
  v21 = this->fields.performance;
  v85 = &this->fields.seqObject;
  if ( !v21 )
    goto LABEL_195;
  p_actorlist = v21->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_195;
  e_actorlist = v21->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_195;
  v24 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v24 )
  {
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v25 < max_length )
      {
        v27 = (UnityEngine_Object_o *)p_actorlist->m_Items[v25];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v28 = this->fields.ActorActiveList;
          if ( !v28 )
            goto LABEL_195;
          if ( v25 >= (unsigned int)v28->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( !v27 )
            goto LABEL_195;
          v29 = (char *)v28->fields._items + v25;
          v30 = (unsigned __int8)v29[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v27, v29[32] != 0, 0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v27,
                                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_195;
            transform = (__int64)Component_srcLineSprite[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v30 != 0, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v25 >= (int)max_length )
          goto LABEL_88;
      }
LABEL_196:
      v83 = sub_B70798(transform);
      sub_B70738(v83, 0LL);
    }
    LODWORD(v25) = 0;
LABEL_88:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_195;
    v33 = 4LL;
    v34 = 8LL;
    while ( 1 )
    {
      v35 = saveWaitEnemy->max_length;
      v36 = v33 - 4;
      if ( v33 - 4 >= (int)v35 )
        break;
      if ( v36 >= v35 )
        goto LABEL_196;
      v37 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v33);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v38 = this->fields.performance;
        if ( !v38 )
          goto LABEL_195;
        v39 = this->fields.saveWaitEnemy;
        if ( !v39 )
          goto LABEL_195;
        if ( v36 >= v39->max_length )
          goto LABEL_196;
        v40 = (unsigned int *)v38->fields.e_actorlist;
        if ( !v40 )
          goto LABEL_195;
        v41 = *((_QWORD *)&v39->obj.klass + v33);
        if ( v41 )
        {
          transform = sub_B70754(v41, *(_QWORD *)(*(_QWORD *)v40 + 64LL));
          if ( !transform )
          {
            v84 = sub_B7078C();
            sub_B70738(v84, 0LL);
          }
        }
        if ( v36 >= v40[6] )
          goto LABEL_196;
        *(_QWORD *)&v40[v34] = v41;
        sub_B70630(&v40[v34]);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v33;
      v34 += 2LL;
      if ( !saveWaitEnemy )
        goto LABEL_195;
    }
    v42 = this->fields.performance;
    if ( !v42 )
      goto LABEL_195;
    v43 = v42->fields.e_actorlist;
    if ( !v43 )
      goto LABEL_195;
    v44 = *(_QWORD *)&v43->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = 0LL;
      while ( v45 < (unsigned int)v44 )
      {
        v46 = (UnityEngine_Object_o *)v43->m_Items[v45];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v47 = this->fields.ActorActiveList;
          if ( !v47 )
            goto LABEL_195;
          if ( v47->fields._size <= (unsigned int)(v25 + v45) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          if ( !v46 )
            goto LABEL_195;
          v48 = (char *)v47->fields._items + (int)v25 + (int)v45;
          v49 = (unsigned __int8)v48[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, v48[32] != 0, 0LL);
          v50 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v46,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v50 )
              goto LABEL_195;
            transform = (__int64)v50[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v49 != 0, 0LL);
          }
        }
        LODWORD(v44) = v43->max_length;
        if ( (__int64)++v45 >= (int)v44 )
          goto LABEL_127;
      }
      goto LABEL_196;
    }
LABEL_127:
    v21 = this->fields.performance;
    if ( !v21 )
      goto LABEL_195;
  }
  data = (UnityEngine_Object_o *)v21->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v52 = this->fields.performance;
    if ( !v52 )
      goto LABEL_195;
    transform = (__int64)v52->fields.data;
    if ( !transform )
      goto LABEL_195;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0LL);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0LL);
  v53 = this->fields.performance;
  if ( !v53 )
    goto LABEL_195;
  v54 = v53->fields.p_actorlist;
  if ( !v54 )
    goto LABEL_195;
  v55 = *(_QWORD *)&v54->max_length;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    while ( v56 < (unsigned int)v55 )
    {
      v57 = (UnityEngine_Object_o *)v54->m_Items[v56];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v57 )
          goto LABEL_195;
        v58 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v57,
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v58, v59);
      }
      LODWORD(v55) = v54->max_length;
      if ( (__int64)++v56 >= (int)v55 )
        goto LABEL_149;
    }
    goto LABEL_196;
  }
LABEL_149:
  v60 = this->fields.performance;
  if ( !v60 )
    goto LABEL_195;
  v61 = v60->fields.e_actorlist;
  if ( !v61 )
    goto LABEL_195;
  v62 = *(_QWORD *)&v61->max_length;
  if ( (int)v62 >= 1 )
  {
    v63 = 0LL;
    while ( v63 < (unsigned int)v62 )
    {
      v64 = (UnityEngine_Object_o *)v61->m_Items[v63];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v64 )
          goto LABEL_195;
        v65 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v64,
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v65, v66);
      }
      LODWORD(v62) = v61->max_length;
      if ( (__int64)++v63 >= (int)v62 )
        goto LABEL_161;
    }
    goto LABEL_196;
  }
LABEL_161:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    transform = (__int64)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_195;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0LL);
    *p_standFigure = 0LL;
    sub_B70630(&this->fields.standFigure);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v69) )
    BattleSequenceManager__ReleaseCpk(this, (const MethodInfo *)v5);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v70 = this->fields.actorCamera;
  if ( !v70 )
    goto LABEL_195;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v72 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2833/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v70, (1 << v72) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_195;
  v74 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v75 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2833/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v74 & ~(1 << v75), 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v76 = this->fields.performance;
  if ( !v76 )
    goto LABEL_195;
  transform = (__int64)v76->fields.bgPerf;
  if ( !transform )
    goto LABEL_195;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( this->fields.OnCompleteActorCallback )
  {
    v77 = (UnityEngine_Object_o *)*v85;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v78 = UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
    v5 = 0LL;
    if ( v78 )
    {
      transform = (__int64)*v85;
      if ( !*v85 )
        goto LABEL_195;
      v5 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             (UnityEngine_GameObject_o *)transform,
             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    }
    transform = (__int64)this->fields.OnCompleteActorCallback;
    if ( transform )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)transform,
        (System_Uri_o *)v5,
        (const MethodInfo_264C15C *)Method_System_Action_USSequencer__Invoke__);
      goto LABEL_184;
    }
LABEL_195:
    sub_B7076C(transform, v5);
  }
LABEL_184:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9710/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_195;
  *(_BYTE *)(transform + 129) = 0;
  v79 = this->fields.performance;
  if ( !v79 )
    goto LABEL_195;
  transform = (__int64)v79->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v80 = this->fields.performance;
  if ( !v80 )
    goto LABEL_195;
  transform = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_195;
  v81 = transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v80, v81, CurrentGroundType, 0, 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__releaseChangeBgAssets((BattlePerformance_o *)transform, 0LL);
}


void __fastcall BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  BgmPlayArgsGroup_o *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v5; // x0
  __int64 v6; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v7; // x20
  Il2CppClass *klass; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v9; // x19
  unsigned __int64 v10; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  BattleSequenceManager___c__DisplayClass112_0_o *v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x23
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo_24389F0 *v27; // x3
  BgmPlayArgs_o *args; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  System_Nullable_long__o v35; // [xsp+8h] [xbp-68h] BYREF
  __int64 v36; // [xsp+18h] [xbp-58h]
  System_Nullable_float__o v37; // 0:x1.8
  System_Nullable_float__o v38; // 0:x2.8
  System_Nullable_long__o v39; // 0:x0.16

  if ( (byte_434ECCF & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_B70694(&Method_System_Func_BgmPlayArgs__bool___ctor__);
    sub_B70694(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Nullable_long___ctor__);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass112_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass112_0_TypeInfo);
    byte_434ECCF = 1;
  }
  HIDWORD(v36) = 0;
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v3 )
    {
      v4 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(v3, 0LL);
      v5 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                               v4,
                                                                                               (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(this->fields.backupBgmPlayArgsGroup, 0LL)) == 0LL) )
      {
        sub_B7076C(v5, v6);
      }
      klass = v5->obj.klass;
      v9 = v5;
      if ( *(_WORD *)&v5->obj.klass->_2.bitflags1 )
      {
        v10 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v10;
          p_offset += 4;
          if ( v10 >= *(unsigned __int16 *)&v5->obj.klass->_2.bitflags1 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_B08590(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v14 = (*(__int64 (__fastcall **)(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *, _QWORD))p_method)(
              v9,
              *(_QWORD *)(p_method + 8));
      if ( !v14 )
        sub_B7076C(0LL, v13);
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
        {
          v16 = 0LL;
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v16;
            v17 += 4;
            if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
              goto LABEL_21;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_21:
          v18 = sub_B08590(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = (BattleSequenceManager___c__DisplayClass112_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass112_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass112_0___ctor(v19, 0LL);
        v20 = *(_QWORD *)v14;
        if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
        {
          v21 = 0LL;
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v21;
            v22 += 4;
            if ( v21 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
              goto LABEL_28;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_28:
          v23 = sub_B08590(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
        if ( !v19 )
          sub_B7076C(v24, v24);
        v19->fields.args = (struct BgmPlayArgs_o *)v24;
        sub_B70630(&v19->fields);
        v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v25,
          (Il2CppObject *)v19,
          Method_BattleSequenceManager___c__DisplayClass112_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          (const MethodInfo_29AC578 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           v7,
                                                                           (System_Func_T__bool__o *)v25,
                                                                           (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          *(_QWORD *)&v39.fields.has_value = USFGOActorBattleActionEventConditional_OverwriteParamCondition[1].klass;
        else
          *(_QWORD *)&v39.fields.has_value = 0LL;
        args = v19->fields.args;
        v35.fields.value = 0LL;
        *(_QWORD *)&v35.fields.has_value = 0LL;
        v39.fields.value = (int64_t)&v35;
        System_Nullable_long____ctor(v39, Method_System_Nullable_long___ctor__, v27);
        if ( !args )
          sub_B7076C(v29, v30);
        v37 = 0LL;
        v38 = 0LL;
        BgmPlayArgs__Update(args, v37, v38, v35, 0LL);
      }
      v36 = 0x1000000A3LL;
      v31 = *(_QWORD *)v14;
      if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
            goto LABEL_41;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_41:
        v34 = sub_B08590(v14, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v14, *(_QWORD *)(v34 + 8));
      if ( (_DWORD)v36 == 163 )
        v36 = 163LL;
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_434ECCB & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECCB = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_B7076C(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x20
  System_String_o *v8; // x0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x20
  System_Action_o *v10; // x21
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434ECD0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleSequenceManager__ReleaseCpk_b__113_0__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_Action__Add__);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&StringLiteral_9712/*"NoblePhantasm_"*/);
    byte_434ECD0 = 1;
  }
  v11 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v11 = overwriteSvtVoiceId;
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_44758168((System_String_o *)StringLiteral_9712/*"NoblePhantasm_"*/, v8, 0LL);
  if ( !ReleaseSoundNames
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__),
        DelayInvokeMethodList = this->fields.DelayInvokeMethodList,
        v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__113_0__, 0LL),
        !DelayInvokeMethodList) )
  {
LABEL_9:
    sub_B7076C(Instance, v4);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DelayInvokeMethodList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Action__Add__);
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.fixedVoice = 0LL;
  sub_B70630(&this->fields.fixedVoice);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.intactBgmList = 0LL;
  sub_B70630(&this->fields.intactBgmList);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_434ECCE & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_434ECCE = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  this->fields.backupBgmPlayArgsGroup = BgmManager__ExportPlayArgsGroup(0LL);
  sub_B70630(&this->fields.backupBgmPlayArgsGroup);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v7; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v9; // x20
  System_String_o **v10; // x8
  __int64 v11; // x9
  __int64 v12; // x25
  System_String_o *v13; // x21
  unsigned __int64 v14; // x26
  unsigned int v15; // w8
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_Transform_o *v19; // x23
  int v20; // s0
  struct BattlePerformance_o *v23; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v27; // s9
  int v28; // s2
  unsigned int v29; // s0
  float v30; // s1
  struct BattlePerformance_o *v31; // x8
  struct BattleData_o *data; // x8
  __int64 v33; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434ECD4 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_B70694(&StringLiteral_9505/*"N_Enemy2"*/);
    sub_B70694(&StringLiteral_9506/*"N_Player2"*/);
    byte_434ECD4 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_61;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_srcLineSprite,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_srcLineSprite )
    goto LABEL_61;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_srcLineSprite,
                                         0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0LL) )
    return;
  v7 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_61;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        actor,
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_61;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[19].fields.m_CachedPtr) != 0) != (LOBYTE(Component_srcLineSprite[3].fields.mcTweenScaleP) != 0)
                           ? &StringLiteral_9505/*"N_Enemy2"*/
                           : &StringLiteral_9506/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_61;
  v11 = 328LL;
  if ( LOBYTE(actor[19].fields.m_CachedPtr) )
    v11 = 336LL;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_61:
    sub_B7076C(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0LL;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
      {
        v33 = sub_B70798(actor);
        sub_B70738(v33, 0LL);
      }
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v13,
                                              0LL);
        if ( !v16 )
          goto LABEL_61;
        v18 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !v18 )
          goto LABEL_61;
        v19 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(v18, 0LL);
        if ( !v19 )
          goto LABEL_61;
        UnityEngine_Transform__set_position(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = this->fields.performance;
        if ( !v23 )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)v23->fields.data;
        if ( !actor )
          goto LABEL_61;
        if ( BYTE6(actor[29].klass) && LOBYTE(v9[19].fields.m_CachedPtr) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_61;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0LL);
            if ( !actor )
              goto LABEL_61;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0LL);
            y = position.fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            v27 = (unsigned int)UnityEngine_Transform__get_position(v18, 0LL);
            *(UnityEngine_Vector3_o *)(&v28 - 2) = UnityEngine_Transform__get_position(v18, 0LL);
            if ( !transform )
              goto LABEL_61;
            v29 = v27;
            v30 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v28 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_61;
          UnityEngine_GameObject__SetActive(v16, 0, 0LL);
          v31 = this->fields.performance;
          if ( !v31 )
            goto LABEL_61;
          data = v31->fields.data;
          if ( !data )
            goto LABEL_61;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v9[19].fields.m_CachedPtr) )
            UnityEngine_GameObject__SetActive(v16, 1, 0LL);
        }
      }
      v15 = *(_DWORD *)(v12 + 24);
      ++v14;
    }
    while ( (__int64)v14 < (int)v15 );
  }
}


void __fastcall BattleSequenceManager__SetAfterChangeField(
        BattleSequenceManager_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_B7076C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_B70630(&this->fields.changeFieldAfter);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v6; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v8; // x8

  v4 = this;
  if ( (byte_434ECE0 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    this = (BattleSequenceManager_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_434ECE0 = 1;
  }
  battleTargetList = v4->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_20;
  v6 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v6 >= size )
      break;
    if ( size <= (unsigned int)v6 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v8 = battleTargetList->fields._items->m_Items[v6];
    if ( v8 )
    {
      this = (BattleSequenceManager_o *)v8->fields.targetActor;
      if ( this )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        else
          BattleActorControl__setAuraFlip((BattleActorControl_o *)this, (bool)this[1].fields.seqObject, 0LL);
        battleTargetList = v4->fields.battleTargetList;
        ++v6;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_20;
  }
  if ( isReset )
  {
    this = (BattleSequenceManager_o *)v4->fields.actor;
    if ( this )
    {
      this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)this,
                                          (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( this )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        return;
      }
    }
LABEL_20:
    sub_B7076C(this, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.fixedVoice = voiceId;
  sub_B70630(&this->fields.fixedVoice);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_434ECE1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_434ECE1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  this->fields.intactBgmList = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  sub_B70630(&this->fields.intactBgmList);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetMultiTargetBattleEnemy(
        BattleSequenceManager_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v11; // x19
  int v12; // s0

  v4 = this;
  if ( (byte_434ECD2 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECD2 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_25;
  data = performance->fields.data;
  if ( !data )
    goto LABEL_25;
  if ( !data->fields.isMultiTargetBattle )
    return;
  if ( !targetActor )
    goto LABEL_25;
  if ( !targetActor->fields.isEnemy )
    return;
  this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_25;
  this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUp((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
    if ( !this )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUnder((BattleServantData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
  }
  v7 = v4->fields.performance;
  if ( !v7 || (this = (BattleSequenceManager_o *)v7->fields.data) == 0LL )
LABEL_25:
    sub_B7076C(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v9 = v4->fields.performance;
    if ( v9 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v9->fields.root_field, 0LL);
        if ( PartsActor )
        {
          transform = UnityEngine_Component__get_transform(PartsActor, 0LL);
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)targetActor,
                                              0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            v11 = UnityEngine_Component__get_transform(PartsActor, 0LL);
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
            if ( v11 )
            {
              UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_25;
  }
}


void __fastcall BattleSequenceManager__SetPreLoadStandFigureData(
        BattleSequenceManager_o *this,
        int32_t svtId,
        int32_t limitImgCnt,
        int32_t faceType,
        const MethodInfo *method)
{
  this->fields.loadStandFigureId = svtId;
  this->fields.loadStandFigureLimitCount = limitImgCnt;
  this->fields.faceType = faceType;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        bool isStart,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v10; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v12; // x8
  struct BattleActorControl_o *targetActor; // x8

  if ( (byte_434ECB9 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_434ECB9 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               actor,
                                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          Component_srcLineSprite,
          (BattleFBXComponent_o *)Component_srcLineSprite,
          isStart,
          v7),
        (battleTargetList = this->fields.battleTargetList) == 0LL) )
  {
LABEL_12:
    sub_B7076C(actor, isStart);
  }
  v10 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v10 >= size )
      break;
    if ( size <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v12 = battleTargetList->fields._items->m_Items[v10];
    if ( v12 )
    {
      targetActor = v12->fields.targetActor;
      if ( targetActor )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          targetActor->fields.fbxcomponent,
          isStart,
          v8);
        battleTargetList = this->fields.battleTargetList;
        ++v10;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_12;
  }
}


void __fastcall BattleSequenceManager__SetTempShaderNoblePhantasmMode(
        BattleSequenceManager_o *this,
        BattleFBXComponent_o *fbx,
        bool isStart,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_434ECBA & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16450/*"_y0"*/);
    byte_434ECBA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v6 )
  {
    if ( !fbx )
      sub_B7076C(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16450/*"_y0"*/, 0LL);
      else
        BattleFBXComponent__RevertShaderFloatProperty(fbx, 0LL);
    }
  }
}


void __fastcall BattleSequenceManager__SetupDemoActor(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_array *playerList,
        UnityEngine_GameObject_array *enemyList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *seqObject; // x0
  WellFired_USSequencer_o *Component_srcLineSprite; // x20
  unsigned __int64 v9; // x27
  unsigned __int64 v10; // x26
  System_String_o *v11; // x0
  System_String_o *v12; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  unsigned __int64 max_length; // x8
  __int64 v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x21
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x8
  __int64 v23; // x0
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_434ECB8 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1865/*"Actors/Actor"*/);
    byte_434ECB8 = 1;
  }
  v24 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_29:
    sub_B7076C(seqObject, playerList);
  Component_srcLineSprite = (WellFired_USSequencer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0LL;
  do
  {
    v10 = v9 + 1;
    v24 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v24, 0LL);
    v12 = System_String__Concat_44758168((System_String_o *)StringLiteral_1865/*"Actors/Actor"*/, v11, 0LL);
    v14 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v12,
                                    Component_srcLineSprite,
                                    v12,
                                    v13);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_29;
      max_length = playerList->max_length;
      if ( (__int64)v9 < (int)max_length )
      {
        if ( v9 >= max_length )
        {
LABEL_30:
          v23 = sub_B70798(seqObject);
          sub_B70738(v23, 0LL);
        }
        seqObject = playerList->m_Items[v9];
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v14 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v14,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v9;
  }
  while ( v10 - 1 < 2 );
  v16 = 4LL;
  do
  {
    v24 = v16;
    v17 = System_Int32__ToString((int32_t)&v24, 0LL);
    v18 = System_String__Concat_44758168((System_String_o *)StringLiteral_1865/*"Actors/Actor"*/, v17, 0LL);
    v20 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v18,
                                    Component_srcLineSprite,
                                    v18,
                                    v19);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v21 = v16 - 4;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_29;
      v22 = enemyList->max_length;
      if ( (__int64)v21 < (int)v22 )
      {
        if ( v21 >= v22 )
          goto LABEL_30;
        seqObject = (UnityEngine_GameObject_o *)*((_QWORD *)&enemyList->obj.klass + v16);
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v20 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v20,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v16;
  }
  while ( v21 < 2 );
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass115_0_o *v3; // x22
  __int64 v4; // x1
  void *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v8; // x25
  void **p_targetList; // x21
  int v10; // w8
  void *v11; // x25
  unsigned int v12; // w20
  __int64 v13; // x8
  int v14; // w8
  void *v15; // x25
  unsigned int v16; // w20
  __int64 v17; // x8
  int v18; // w8
  void *v19; // x25
  unsigned int v20; // w20
  __int64 v21; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *moveToSubMemberList; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x25
  int mcTweenScaleP_low; // w20
  System_Collections_Generic_HashSet_int__o *v25; // x22
  int v26; // w27
  int i; // w28
  __int64 v28; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v32; // x1
  srcLineSprite_o *v33; // x0
  __int64 v34; // x1
  int32_t v35; // w21
  int v36; // w25
  int v37; // w8
  struct UnityEngine_GameObject_o *v38; // x21
  BattleActorControl_o *v39; // x23
  const MethodInfo *v40; // x2
  __int64 v41; // x1
  BattlePerformance_o *v42; // x0
  int32_t v43; // w20
  UnityEngine_Object_o *v44; // x21
  _BOOL8 v45; // x0
  __int64 v46; // x1
  BattleActorControl_o *v47; // x22
  BattleSequenceManager_BattleTarget_o *v48; // x21
  __int64 v49; // x1
  BattlePerformance_o *v50; // x0
  __int64 ServantPosIndex; // x0
  __int64 v52; // x1
  __int64 v53; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  int v55; // w25
  __int64 v56; // x0
  int v57; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v58; // [xsp+18h] [xbp-98h] BYREF
  int v59[3]; // [xsp+30h] [xbp-80h]
  int v60; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_434ECD1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    sub_B70694(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_B70694(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass115_0__SetupTargetInfo_b__0__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass115_0_TypeInfo);
    byte_434ECD1 = 1;
  }
  memset(&j, 0, sizeof(j));
  v60 = 0;
  v3 = (BattleSequenceManager___c__DisplayClass115_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass115_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass115_0___ctor(v3, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_B70630(&this->fields.SingleTarget);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_83;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_srcLineSprite )
    goto LABEL_83;
  monitor = (BattleActionData_o *)Component_srcLineSprite[3].monitor;
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  if ( !v3 )
    goto LABEL_83;
  v3->fields.targetList = v8;
  p_targetList = (void **)&v3->fields.targetList;
  sub_B70630(&v3->fields);
  if ( !monitor )
    goto LABEL_83;
  actor = BattleActionData__getDamageList(monitor, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v10 = *((_DWORD *)actor + 6);
  v11 = actor;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < v10 )
    {
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      if ( !v13 )
        goto LABEL_83;
      v4 = *(unsigned int *)(v13 + 28);
      if ( (_DWORD)v4 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v4,
                          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_20;
    }
LABEL_84:
    v56 = sub_B70798(actor);
    sub_B70738(v56, 0LL);
  }
LABEL_20:
  actor = BattleActionData__getBuffList(monitor, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v14 = *((_DWORD *)actor + 6);
  v15 = actor;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      v17 = *((_QWORD *)v15 + (int)v16 + 4);
      if ( !v17 )
        goto LABEL_83;
      v4 = *(unsigned int *)(v17 + 40);
      if ( (_DWORD)v4 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v4,
                          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        goto LABEL_29;
    }
    goto LABEL_84;
  }
LABEL_29:
  actor = BattleActionData__getHealList(monitor, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v18 = *((_DWORD *)actor + 6);
  v19 = actor;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      v21 = *((_QWORD *)v19 + (int)v20 + 4);
      if ( !v21 )
        goto LABEL_83;
      v4 = *(unsigned int *)(v21 + 28);
      if ( (_DWORD)v4 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v4,
                          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        goto LABEL_38;
    }
    goto LABEL_84;
  }
LABEL_38:
  moveToSubMemberList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)monitor->fields.moveToSubMemberList;
  if ( moveToSubMemberList )
  {
    v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v23,
      (Il2CppObject *)v3,
      Method_BattleSequenceManager___c__DisplayClass115_0__SetupTargetInfo_b__0__,
      (const MethodInfo_264C148 *)Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      moveToSubMemberList,
      (System_Action_T__o *)v23,
      (const MethodInfo_30263A0 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
  }
  mcTweenScaleP_low = LOBYTE(Component_srcLineSprite[3].fields.mcTweenScaleP);
  v25 = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v25,
    (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
  actor = *p_targetList;
  if ( !*p_targetList )
    goto LABEL_83;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v58,
    (System_Collections_Generic_HashSet_int__o *)actor,
    (const MethodInfo_2EAE97C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v57 = 0;
  j = v58;
  v26 = 0;
LABEL_42:
  for ( i = v26; ; ++i )
  {
    v26 = i;
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_221EAA4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      break;
    performance = this->fields.performance;
    if ( !performance )
      sub_B7076C(0LL, v28);
    current = (int32_t)j.fields._current;
    ServantGameObject = BattlePerformance__getServantGameObject(performance, (int32_t)j.fields._current, 0LL);
    if ( !ServantGameObject )
      sub_B7076C(0LL, v32);
    v33 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ServantGameObject,
            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !v33 )
      sub_B7076C(0LL, v34);
    if ( (mcTweenScaleP_low != 0) == (LOBYTE(v33[3].fields.mcTweenScaleP) != 0) )
    {
      ++v57;
      goto LABEL_42;
    }
    if ( !v25 )
      sub_B7076C(v33, v34);
    System_Collections_Generic_HashSet_int___Add(
      v25,
      current,
      (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v59[0] = 391;
  v60 = 1;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_221EAA0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v60 = 0;
  if ( v57 && i == 1 )
  {
    *p_targetList = v25;
    sub_B70630(p_targetList);
  }
  actor = *p_targetList;
  if ( !*p_targetList )
LABEL_83:
    sub_B7076C(actor, v4);
  if ( *((_DWORD *)actor + 8) == 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v58,
      (System_Collections_Generic_HashSet_int__o *)actor,
      (const MethodInfo_2EAE97C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v35 = -1;
    for ( j = v58;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_221EAA4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          v35 = (int32_t)j.fields._current )
    {
      ;
    }
    v59[0] = 486;
    v36 = ++v60;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &j,
      (const MethodInfo_221EAA0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v59[v36 - 1] == 486 )
      {
        --v36;
        v60 = v37;
      }
    }
    actor = this->fields.performance;
    if ( !actor )
      goto LABEL_83;
    actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v35, 0LL);
    if ( !actor )
      goto LABEL_83;
    v38 = (struct UnityEngine_GameObject_o *)actor;
    v39 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)actor,
                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this->fields.SingleTarget = v38;
    sub_B70630(&this->fields.SingleTarget);
    BattleSequenceManager__SetMultiTargetBattleEnemy(this, v39, v40);
    if ( !v25 )
      goto LABEL_83;
  }
  else
  {
    v36 = 0;
    if ( !v25 )
      goto LABEL_83;
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v58,
    v25,
    (const MethodInfo_2EAE97C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  j = v58;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_221EAA4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    v42 = this->fields.performance;
    if ( !v42 )
      sub_B7076C(0LL, v41);
    v43 = (int32_t)j.fields._current;
    v44 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(v42, (int32_t)j.fields._current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
    if ( !v45 )
    {
      if ( !v44 )
        sub_B7076C(v45, v46);
      v47 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v44,
                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      v48 = (BattleSequenceManager_BattleTarget_o *)sub_B70764(BattleSequenceManager_BattleTarget_TypeInfo);
      BattleSequenceManager_BattleTarget___ctor(v48, 0LL);
      v50 = this->fields.performance;
      if ( !v50 )
        sub_B7076C(0LL, v49);
      ServantPosIndex = BattlePerformance__getServantPosIndex(v50, v43, 0LL);
      if ( !v48 )
        sub_B7076C(ServantPosIndex, v52);
      BattleSequenceManager_BattleTarget__setup(v48, v47, ServantPosIndex, 0LL);
      battleTargetList = this->fields.battleTargetList;
      if ( !battleTargetList )
        sub_B7076C(0LL, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)battleTargetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    }
  }
  v59[v36] = 651;
  v55 = ++v60;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_221EAA0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v55 && v59[v55 - 1] == 651 )
    v60 = v55 - 1;
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B7076C(0LL, method);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v7; // x8

  v4 = this;
  if ( (byte_434ECC7 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECC7 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_12;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(infoComp, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v4->fields.performance;
    if ( v7 )
    {
      this = (BattleSequenceManager_o *)v7->fields.infoComp;
      if ( this )
      {
        BattleInformationComponent__SwitchPopupFullScreen((BattleInformationComponent_o *)this, isFullScreen, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B7076C(this, isFullScreen);
  }
}


void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v5; // x19
  BattleSequenceManager_o *v6; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v12; // x4
  struct BattlePerformance_o *v13; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *root_field; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *npEndDeleteObjects; // x22
  int v19; // w22
  UnityEngine_Transform_o *v20; // x0
  WellFired_USTimelineContainer_o *v21; // x0

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_434ECD6 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECD6 = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_40;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_40;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_40;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        v5,
                                                        (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
      Component_WebViewObject = (UnityEngine_Object_o *)v6->fields.defaultSyncSetting;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_40;
      if ( BattleSyncTransformComponent__get_IsNotExecSync(
             (BattleSyncTransformComponent_o *)Component_WebViewObject,
             0LL) )
      {
        return;
      }
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v9);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v13 = v6->fields.performance;
        if ( !v13 )
          goto LABEL_40;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        root_field = v13->fields.root_field;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v12);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            (BaseMonoBehaviour_o *)v13,
                                            dummyActorPrefab,
                                            root_field,
                                            TargetFieldPosNode,
                                            0LL);
        if ( !this )
          goto LABEL_40;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0LL);
        if ( !this )
          goto LABEL_40;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          npEndDeleteObjects,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Object__Add__);
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      v20 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_UIWidget_(
                                          v20,
                                          (const MethodInfo_1BDC668 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_40;
      v21 = (WellFired_USTimelineContainer_o *)BattleSyncTransformComponent__SetTarget(
                                                 (BattleSyncTransformComponent_o *)this,
                                                 (UnityEngine_Transform_o *)TargetPosIndexTransform,
                                                 (BattleSyncTransformComponent_o *)Component_WebViewObject,
                                                 0LL);
      if ( v19 )
      {
        tlcont = v21;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)tlcont,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Object__Add__);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_40:
      sub_B7076C(this, tlcont);
    }
  }
}


void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *klass; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  System_Collections_ICollection_o *Components_iTween; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v14; // x1
  void *v15; // x8
  unsigned __int64 v16; // x25
  NoblePhantasmTargetOverwriteTransform_o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_434ECE6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECE6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  battleTargetList = this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v18 )
        break;
      if ( !v22.fields.current )
        sub_B7076C(v18, v19);
      monitor = (UnityEngine_Object_o *)v22.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v7 )
      {
        if ( !monitor )
          sub_B7076C(v7, v8);
        klass = (UnityEngine_Object_o *)monitor[1].klass;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        {
          v11 = (UnityEngine_GameObject_o *)monitor[1].klass;
          if ( !v11 )
            sub_B7076C(0LL, v10);
          Components_iTween = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                    v11,
                                                                    (const MethodInfo_1D4B0D4 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_iTween, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_iTween )
              sub_B7076C(IsNullOrEmpty, v14);
            v15 = Components_iTween[1].monitor;
            if ( (int)v15 >= 1 )
            {
              v16 = 0LL;
              do
              {
                if ( v16 >= (unsigned int)v15 )
                {
                  v20 = sub_B70798(IsNullOrEmpty);
                  sub_B70738(v20, 0LL);
                }
                v17 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_iTween[2].klass + v16);
                if ( isOverwrite )
                {
                  if ( !v17 )
                    sub_B7076C(0LL, v14);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v17, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v17 )
                    sub_B7076C(0LL, v14);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v17, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v15) = Components_iTween[1].monitor;
                ++v16;
              }
              while ( (__int64)v16 < (int)v15 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  }
}


void __fastcall BattleSequenceManager__TdDelayEnd(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleSequenceManager__CrossFadeBgm(this, method);
  BattleSequenceManager__ReleaseCpk(this, v3);
}


bool __fastcall BattleSequenceManager__TryGetAfterChangeBgm(
        BattleSequenceManager_o *this,
        BattleActionData_TreasureDvcAfterChangeBgm_o **changeBgm,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_B7076C(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_B70630(changeBgm);
  return TdAfterChangeBgm_k__BackingField != 0LL;
}


void __fastcall BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  float delayInvokeTimer; // s8
  __int64 v4; // x1
  float v5; // s0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x0
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434ECB1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_434ECB1 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v5 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v5;
    if ( v5 <= 0.0 )
    {
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_13;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v7,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DelayInvokeMethodList,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v7,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v7.fields.current )
          System_Action__Invoke((System_Action_o *)v7.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v7,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
LABEL_13:
        sub_B7076C(DelayInvokeMethodList, v4);
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)DelayInvokeMethodList,
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_Action__Clear__);
    }
  }
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBG(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, int32_t, int32_t, Il2CppMethodPointer))changeFieldAfter->klass->vtable._4_SetTakeOverBG.method)(
      changeFieldAfter,
      id,
      type,
      changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.methodPtr);
}


void __fastcall BattleSequenceManager__UpdateAfterChangeFieldBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x0

  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
    ((void (__fastcall *)(struct BattleActionData_AfterChangeField_o *, System_String_o *, _QWORD, void *))changeFieldAfter->klass->vtable._5_SetTakeOverBgmName.method)(
      changeFieldAfter,
      bgmName,
      0LL,
      changeFieldAfter->klass[1]._1.image);
}


System_Collections_IEnumerator_o *__fastcall BattleSequenceManager__WaitEndSequence(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager__WaitEndSequence_d__106_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_434ECC9 & 1) == 0 )
  {
    sub_B70694(&BattleSequenceManager__WaitEndSequence_d__106_TypeInfo);
    byte_434ECC9 = 1;
  }
  v3 = (BattleSequenceManager__WaitEndSequence_d__106_o *)sub_B70764(BattleSequenceManager__WaitEndSequence_d__106_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__106___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v3->fields.__4__this = this;
  sub_B70630(&v3->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__113_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434ECEA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_434ECEA = 1;
  }
  memset(&v7, 0, sizeof(v7));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ReleaseSoundNames,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v7,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v7.fields.current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v7.fields.current, 0LL) )
    {
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B7076C(0LL, v6);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
LABEL_12:
    sub_B7076C(ReleaseSoundNames, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)ReleaseSoundNames,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattleSequenceManager__addServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_434ECBC & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_434ECBC = 1;
  }
  FlagRequestNumber = System_String__Concat_44758168((System_String_o *)StringLiteral_16127/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_18940528((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B7076C(FlagRequestNumber, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__changeBg(
        BattleSequenceManager_o *this,
        int32_t id,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v13; // s11
  float v14; // s12
  float v15; // s13
  BattlePerformance_o *performance; // x22
  System_Action_o *v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_434ECC5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattleSequenceManager_OnBgChanged__);
    byte_434ECC5 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_B70630(&this->fields.BgChangedCallback);
  performance = this->fields.performance;
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_B7076C(v21, v22);
  v23.fields.z = v13;
  v24.fields.x = x;
  v24.fields.y = y;
  v24.fields.z = z;
  v23.fields.x = v15;
  v23.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v23, v24, 1, parentCamera, v20, 0LL);
}


bool __fastcall BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_434ECBE & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_434ECBE = 1;
  }
  FlagRequestNumber = System_String__Concat_44758168((System_String_o *)StringLiteral_16127/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( !(_DWORD)FlagRequestNumber )
    return (char)FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance
    || (v12 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0LL) )
  {
LABEL_9:
    sub_B7076C(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_434ECDB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_434ECDB = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
         (System_Xml_XmlQualifiedName_o *)groupName,
         (const MethodInfo_2FAFC2C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               playAudioSyncGroupIndexDict,
               groupName,
               (const MethodInfo_2FAF8F4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_B7076C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_434ECDD & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_434ECDD = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  bool v5; // w8
  BattleActorControl_o *result; // x0
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_434ECAD & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECAD = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.actor;
    if ( !v7 )
      sub_B7076C(0LL, v4);
    return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v7,
                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  }
  return result;
}


bool __fastcall BattleSequenceManager__get_ExistChangeFieldAfter(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0LL;
}


bool __fastcall BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  UnityEngine_Object_o *v5; // x20
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_434ECB0 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_434ECB0 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v7);
  return BYTE1(Instance[1].fields.basePanel) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_434ECAE & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECAE = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0LL )
LABEL_16:
    sub_B7076C(v4, v5);
  return v10->fields.systemflg_acceleration > 1;
}


bool __fastcall BattleSequenceManager__get_IsDemoMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.DemoMode;
}


float __fastcall BattleSequenceManager__get_NowTargetAlpha(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.nowTargetAlpha;
}


BattlePerformance_o *__fastcall BattleSequenceManager__get_Performance(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.performance;
}


int32_t __fastcall BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool __fastcall BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  void *Component_srcLineSprite; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v11; // x20
  struct BattlePerformance_o *v13; // x8

  if ( (byte_434ECAF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ECAF = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_30;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (void *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    goto LABEL_25;
  Component_srcLineSprite = this->fields.actor;
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)Component_srcLineSprite,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_30;
  nowAction = v9->fields.nowAction;
  v11 = (BattleServantData_o *)*((_QWORD *)Component_srcLineSprite + 56);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v11 )
LABEL_30:
    sub_B7076C(Component_srcLineSprite, v5);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_srcLineSprite + 56), 0LL) )
    return 0;
  Component_srcLineSprite = (void *)BattleServantData__IsFixNpFastSpeed(v11, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    return 1;
LABEL_25:
  v13 = this->fields.performance;
  if ( !v13 )
    goto LABEL_30;
  Component_srcLineSprite = v13->fields.data;
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  if ( *((_BYTE *)Component_srcLineSprite + 635) )
    return 0;
  return BattleData__IsHighSpeedOption((BattleData_o *)Component_srcLineSprite, 0LL);
}


void __fastcall BattleSequenceManager__init(
        BattleSequenceManager_o *this,
        BattlePerformance_o *performance,
        UnityEngine_GameObject_o *actor,
        UnityEngine_GameObject_array *players,
        UnityEngine_GameObject_array *enemies,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *bg,
        const MethodInfo *method)
{
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v18; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v19; // x20

  if ( (byte_434ECC3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_434ECC3 = 1;
  }
  this->fields.performance = performance;
  sub_B70630(&this->fields.performance);
  this->fields.actor = actor;
  sub_B70630(&this->fields.actor);
  this->fields.playerActors = players;
  sub_B70630(&this->fields.playerActors);
  this->fields.enemyActors = enemies;
  sub_B70630(&this->fields.enemyActors);
  this->fields.actorCamera = camera;
  sub_B70630(&this->fields.actorCamera);
  if ( !performance
    || (this->fields.effectCamera = performance->fields.middleCamera,
        sub_B70630(&this->fields.effectCamera),
        this->fields.cutInCamera = performance->fields.cutIncamera,
        sub_B70630(&this->fields.cutInCamera),
        (actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera) == 0LL)
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
    sub_B7076C(actorCamera, v16);
  }
  this->fields.originalCameraRoot = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  sub_B70630(&this->fields.originalCameraRoot);
  this->fields.bgObject = bg;
  sub_B70630(&this->fields.bgObject);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v17);
  v18 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B70764(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v18,
    (const MethodInfo_2FAEE04 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v18;
  sub_B70630(&this->fields.playAudioSyncGroupIndexDict);
  v19 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v19,
    (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v19;
  sub_B70630(&this->fields.playedAudioGroupIdHash);
}


bool __fastcall BattleSequenceManager__isFixedWithNoVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_String_o *fixedVoice; // x8

  fixedVoice = this->fields.fixedVoice;
  return fixedVoice && fixedVoice->fields.m_stringLength == 0;
}


bool __fastcall BattleSequenceManager__isNotPlaySoundLimitCount(
        BattleSequenceManager_o *this,
        System_Int32_array *limitCounts,
        const MethodInfo *method)
{
  if ( (byte_434ECDE & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Contains_int___);
    byte_434ECDE = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_1CB57D0 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_434ECC0 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1861/*"Actor"*/);
    sub_B70694(&StringLiteral_16581/*"animCamLoc"*/);
    byte_434ECC0 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_1861/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16581/*"animCamLoc"*/, 0LL);
}


void __fastcall BattleSequenceManager__loadSequence(
        BattleSequenceManager_o *this,
        int32_t chrId,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t overwriteSvtVoiceId,
        int32_t treasureDeviceLv,
        int32_t npChargeStage,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass74_0_o *v17; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v19; // x1
  AssetLoader_LoadEndDataHandler_o *v20; // x19

  if ( (byte_434ECB2 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__0__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
    sub_B70694(&StringLiteral_9710/*"NoblePhantasm/CutIns"*/);
    byte_434ECB2 = 1;
  }
  v17 = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B70764(BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass74_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  v17->fields.__4__this = this;
  sub_B70630(&v17->fields);
  v17->fields.onComplete = onComplete;
  v17->fields.chrId = chrId;
  v17->fields.limitCount = limitCount;
  v17->fields.treasureDeviceId = treasureDeviceId;
  v17->fields.treasureDeviceLv = treasureDeviceLv;
  v17->fields.npChargeStage = npChargeStage;
  v17->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  sub_B70630(&v17->fields.onComplete);
  actor = this->fields.actor;
  this->fields.chrId = v17->fields.chrId;
  this->fields.limitCount = v17->fields.limitCount;
  this->fields.treasureDeviceId = v17->fields.treasureDeviceId;
  this->fields.overwriteSvtVoiceId = v17->fields.overwriteSvtVoiceId;
  if ( !actor
    || (v17->fields.battleActor = (struct BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   actor,
                                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        sub_B70630(&v17->fields.battleActor),
        (actor = (UnityEngine_GameObject_o *)v17->fields.battleActor) == 0LL)
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v17->fields.chrId,
        (actor = (UnityEngine_GameObject_o *)v17->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_B7076C(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9710/*"NoblePhantasm/CutIns"*/, v20, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__play(
        BattleSequenceManager_o *this,
        bool isOpponent,
        bool isDemoMode,
        System_Action_USSequencer__o *callback,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v7; // x19
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  UnityEngine_Object_o *seqObject; // x23
  int32_t NPSeqIdFromCachedAssetName; // w0
  int32_t chrId; // w24
  int32_t v13; // w23
  struct BattlePerformance_o *v14; // x8
  struct BattlePerformance_o *v15; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v18; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v20; // w24
  char v21; // w0
  System_Collections_Generic_List_bool__o *v22; // x24
  System_Collections_Generic_List_bool__o **p_ActorActiveList; // x23
  struct BattlePerformance_o *v24; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x21
  UnityEngine_Object_o *v28; // x24
  System_Collections_Generic_List_bool__o *v29; // x25
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v31; // x2
  struct BattlePerformance_o *v32; // x8
  struct UnityEngine_GameObject_array *v33; // x27
  __int64 v34; // x8
  unsigned __int64 v35; // x28
  UnityEngine_Object_o *v36; // x24
  BattleSequenceManager_o *v37; // x0
  const MethodInfo *v38; // x2
  unsigned int *v39; // x22
  unsigned int *v40; // x0
  struct BattlePerformance_o *v41; // x8
  struct UnityEngine_GameObject_array *v42; // x8
  __int64 v43; // x0
  const MethodInfo_30557B4 *v44; // x2
  bool v45; // w1
  System_Collections_Generic_List_bool__o *v46; // x25
  UnityEngine_GameObject_o *gameObject; // x21
  BattleSequenceManager_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  BattleSequenceManager_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  BattleSequenceManager_c *v54; // x0
  BattleSequenceManager_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  BattleSequenceManager_o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x1
  System_Collections_Hashtable_o *v61; // x0
  const MethodInfo *v62; // x2
  WellFired_USSequencer_o *v63; // x21
  struct UnityEngine_GameObject_array **p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v66; // x24
  System_Delegate_o *v67; // x0
  const MethodInfo *v68; // x2
  __int64 v69; // x0
  __int64 v70; // x0
  BattleSequenceManager_o *v71; // x0
  BattleActorControl_o *v72; // x1
  const MethodInfo *v73; // x2
  bool v74; // [xsp+Ch] [xbp-74h]
  System_Action_USSequencer__o *v75; // [xsp+10h] [xbp-70h]
  unsigned int **p_saveWaitEnemy; // [xsp+18h] [xbp-68h]
  int v77; // [xsp+24h] [xbp-5Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-58h] BYREF
  int v79; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_434ECC6 & 1) == 0 )
  {
    sub_B70694(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_B70694(&BattleSequenceManager_TypeInfo);
    sub_B70694(&CommonUI_TypeInfo);
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_bool__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_B70694(&System_Collections_Generic_List_bool__TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_B70694(&StringLiteral_13036/*"ShowNobleInfo"*/);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_10064/*"OnChangeBgmVolume"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_2833/*"Battle2D"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    this = (BattleSequenceManager_o *)sub_B70694(&iTween_TypeInfo);
    byte_434ECC6 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_128;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_128;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)sub_B706AC(
                                                                      UnityEngine_GameObject___TypeInfo,
                                                                      e_actorlist->max_length);
  p_saveWaitEnemy = (unsigned int **)&v7->fields.saveWaitEnemy;
  sub_B70630(&v7->fields.saveWaitEnemy);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NPSeqIdFromCachedAssetName = ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(0LL);
    chrId = v7->fields.chrId;
    v13 = NPSeqIdFromCachedAssetName;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, v13, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( **(_BYTE **)&this->fields.faceType )
      {
        if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_13036/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v14 = v7->fields.performance;
    if ( !v14 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v14->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v15 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v15 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v15->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_128;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v18 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2833/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v18), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_128;
    v20 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v21 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2833/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v21) | v20, 0LL);
    v22 = (System_Collections_Generic_List_bool__o *)sub_B70764(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v22,
      (const MethodInfo_3054A50 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v22;
    p_ActorActiveList = &v7->fields.ActorActiveList;
    sub_B70630(&v7->fields.ActorActiveList);
    v24 = v7->fields.performance;
    if ( !v24 )
      goto LABEL_128;
    p_actorlist = v24->fields.p_actorlist;
    v74 = isDemoMode;
    v75 = callback;
    if ( !p_actorlist )
      goto LABEL_128;
    v26 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( v27 < (unsigned int)v26 )
      {
        v28 = (UnityEngine_Object_o *)p_actorlist->m_Items[v27];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
        v29 = *p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v28, 0LL);
          if ( !v29 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            v29,
            (unsigned __int8)this & 1,
            (const MethodInfo_30557B4 *)Method_System_Collections_Generic_List_bool__Add__);
          Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)v28,
                                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            Component_srcLineSprite,
            (BattleActorControl_o *)Component_srcLineSprite,
            v31);
        }
        else
        {
          if ( !v29 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            *p_ActorActiveList,
            0,
            (const MethodInfo_30557B4 *)Method_System_Collections_Generic_List_bool__Add__);
        }
        LODWORD(v26) = p_actorlist->max_length;
        if ( (__int64)++v27 >= (int)v26 )
          goto LABEL_47;
      }
LABEL_129:
      v69 = sub_B70798(this);
      sub_B70738(v69, 0LL);
    }
LABEL_47:
    v32 = v7->fields.performance;
    if ( !v32 )
      goto LABEL_128;
    v33 = v32->fields.e_actorlist;
    if ( !v33 )
      goto LABEL_128;
    v34 = *(_QWORD *)&v33->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( v35 < (unsigned int)v34 )
      {
        v36 = (UnityEngine_Object_o *)v33->m_Items[v35];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v36 )
            goto LABEL_128;
          v37 = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)v36,
                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(v37, (BattleActorControl_o *)v37, v38);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v36,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_128;
          this = *(BattleSequenceManager_o **)&this[1].fields.IsPlaying;
          if ( !this )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v39 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_128;
            this = (BattleSequenceManager_o *)sub_B70754(v36, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
            if ( !this )
              goto LABEL_130;
            if ( v35 >= v39[6] )
              goto LABEL_129;
            v40 = &v39[2 * v35];
            *((_QWORD *)v40 + 4) = v36;
            sub_B70630(v40 + 8);
            v41 = v7->fields.performance;
            if ( !v41 )
              goto LABEL_128;
            v42 = v41->fields.e_actorlist;
            if ( !v42 )
              goto LABEL_128;
            if ( v35 >= v42->max_length )
              goto LABEL_129;
            v43 = (__int64)v42 + 8 * v35;
            *(_QWORD *)(v43 + 32) = 0LL;
            sub_B70630(v43 + 32);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v36, 0, 0LL);
            this = (BattleSequenceManager_o *)*p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_128;
            v44 = (const MethodInfo_30557B4 *)Method_System_Collections_Generic_List_bool__Add__;
            v45 = 1;
          }
          else
          {
            v46 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v36,
                                                0LL);
            if ( !v46 )
              goto LABEL_128;
            v44 = (const MethodInfo_30557B4 *)Method_System_Collections_Generic_List_bool__Add__;
            v45 = (unsigned __int8)this & 1;
            this = (BattleSequenceManager_o *)v46;
          }
        }
        else
        {
          this = (BattleSequenceManager_o *)*p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_128;
          v44 = (const MethodInfo_30557B4 *)Method_System_Collections_Generic_List_bool__Add__;
          v45 = 0;
        }
        System_Collections_Generic_List_bool___Add((System_Collections_Generic_List_bool__o *)this, v45, v44);
        LODWORD(v34) = v33->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_73;
      }
      goto LABEL_129;
    }
LABEL_73:
    if ( !v74 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_B706AC(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_128;
    v48 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19208/*"from"*/;
    if ( StringLiteral_19208/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_B70754(StringLiteral_19208/*"from"*/, v48->klass->_1.element_class);
      if ( !this )
        goto LABEL_130;
      v49 = StringLiteral_19208/*"from"*/;
    }
    else
    {
      v49 = 0LL;
    }
    if ( !LODWORD(v48->fields.sequenceManager) )
      goto LABEL_129;
    *(_QWORD *)&v48->fields.servantId = v49;
    sub_B70630(&v48->fields.servantId);
    v79 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v50);
    v51 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_B70754(this, v48->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v48->fields.sequenceManager) <= 1 )
        goto LABEL_129;
      *(_QWORD *)&v48->fields.testNpPer = v51;
      sub_B70630(&v48->fields.testNpPer);
      this = (BattleSequenceManager_o *)StringLiteral_23091/*"to"*/;
      if ( StringLiteral_23091/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_B70754(StringLiteral_23091/*"to"*/, v48->klass->_1.element_class);
        if ( !this )
          goto LABEL_130;
        v52 = StringLiteral_23091/*"to"*/;
      }
      else
      {
        v52 = 0LL;
      }
      if ( LODWORD(v48->fields.sequenceManager) <= 2 )
        goto LABEL_129;
      v48->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v52;
      sub_B70630(&v48->fields.FadeTargetPanelIndexs);
      v54 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v54 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v54->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate, v53);
      v55 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_B70754(this, v48->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v48->fields.sequenceManager) <= 3 )
          goto LABEL_129;
        *(_QWORD *)&v48->fields.IsPlaying = v55;
        sub_B70630(&v48->fields.IsPlaying);
        this = (BattleSequenceManager_o *)StringLiteral_23053/*"time"*/;
        if ( StringLiteral_23053/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_B70754(StringLiteral_23053/*"time"*/, v48->klass->_1.element_class);
          if ( !this )
            goto LABEL_130;
          v56 = StringLiteral_23053/*"time"*/;
        }
        else
        {
          v56 = 0LL;
        }
        if ( LODWORD(v48->fields.sequenceManager) <= 4 )
          goto LABEL_129;
        v48->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v56;
        sub_B70630(&v48->fields.ReleaseSoundNames);
        v77 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v77, v57);
        v58 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_B70754(this, v48->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v48->fields.sequenceManager) <= 5 )
            goto LABEL_129;
          v48->fields.performance = (struct BattlePerformance_o *)v58;
          sub_B70630(&v48->fields.performance);
          this = (BattleSequenceManager_o *)StringLiteral_21614/*"onupdate"*/;
          if ( StringLiteral_21614/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_B70754(StringLiteral_21614/*"onupdate"*/, v48->klass->_1.element_class);
            if ( !this )
              goto LABEL_130;
            v59 = StringLiteral_21614/*"onupdate"*/;
          }
          else
          {
            v59 = 0LL;
          }
          if ( LODWORD(v48->fields.sequenceManager) <= 6 )
            goto LABEL_129;
          v48->fields.seqObject = (struct UnityEngine_GameObject_o *)v59;
          sub_B70630(&v48->fields.seqObject);
          this = (BattleSequenceManager_o *)StringLiteral_10064/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10064/*"OnChangeBgmVolume"*/ )
          {
            v60 = 0LL;
LABEL_112:
            if ( LODWORD(v48->fields.sequenceManager) <= 7 )
              goto LABEL_129;
            v48->fields.actor = (struct UnityEngine_GameObject_o *)v60;
            sub_B70630(&v48->fields.actor);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v61 = iTween__Hash((System_Object_array *)v48, 0LL);
            iTween__ValueTo(gameObject, v61, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              v7->fields.BackupBgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              sub_B70630(&v7->fields.BackupBgmName);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v62);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v63 = (WellFired_USSequencer_o *)this;
                    p_playerActors = &this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v66 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_B70764(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v66,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v67 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v66, 0LL);
                    if ( v67
                      && (WellFired_USSequencer_PlaybackDelegate_c *)v67->klass != WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                    {
                      v71 = (BattleSequenceManager_o *)sub_B70A60(v67);
                      BattleSequenceManager__PrevPlayTargetActorProc(v71, v72, v73);
                    }
                    else
                    {
                      v63->fields.PlaybackFinished = (struct WellFired_USSequencer_PlaybackDelegate_o *)v67;
                      sub_B70630(p_playerActors);
                      v7->fields.OnCompleteActorCallback = v75;
                      sub_B70630(&v7->fields.OnCompleteActorCallback);
                      WellFired_USSequencer__Play(v63, 0LL);
                      if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CommonUI_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                      }
                      if ( CommonUI__GetForceObi_16_9(0LL) )
                        BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v68);
                    }
                    return;
                  }
                }
              }
            }
LABEL_128:
            sub_B7076C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_B70754(StringLiteral_10064/*"OnChangeBgmVolume"*/, v48->klass->_1.element_class);
          if ( this )
          {
            v60 = StringLiteral_10064/*"OnChangeBgmVolume"*/;
            goto LABEL_112;
          }
        }
      }
    }
LABEL_130:
    v70 = sub_B7078C();
    sub_B70738(v70, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct UnityEngine_Transform_o *mcMyTrans; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v9; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v11; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x4
  VoiceMaster_o *v14; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v17; // x4
  __int64 v18; // x8
  unsigned __int64 v19; // x22
  __int64 v20; // x0

  if ( (byte_434ECDF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Voice_TypeInfo);
    byte_434ECDF = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_35;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_srcLineSprite,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_35;
    if ( LOBYTE(Component_srcLineSprite[3].fields.mcTweenScaleP) )
      return;
    mcMyTrans = Component_srcLineSprite[3].fields.mcMyTrans;
    if ( !mcMyTrans )
      goto LABEL_35;
    if ( !*((_DWORD *)&mcMyTrans[12].fields + 1)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_srcLineSprite, 0LL) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v7 = this->fields.performance;
        if ( !v7 )
          goto LABEL_35;
        data = (UnityEngine_Object_o *)v7->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v9);
          if ( PlayedSoundList )
          {
            v11 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)actor,
                                                       (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v14 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Voice_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  }
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v14, chrId, FileName, v17);
                }
                v18 = *(_QWORD *)&v11->max_length;
                if ( (int)v18 >= 1 )
                {
                  v19 = 0LL;
                  do
                  {
                    if ( v19 >= (unsigned int)v18 )
                    {
                      v20 = sub_B70798(MasterData_WarQuestSelectionMaster);
                      sub_B70738(v20, 0LL);
                    }
                    BattleSequenceManager__addServantVoicePlayed(this, v14, this->fields.chrId, v11->m_Items[v19], v13);
                    LODWORD(v18) = v11->max_length;
                    ++v19;
                  }
                  while ( (__int64)v19 < (int)v18 );
                }
                return;
              }
LABEL_35:
              sub_B7076C(actor, method);
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleSequenceManager__removeServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2

  if ( (byte_434ECBD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_434ECBD = 1;
  }
  FlagRequestNumber = System_String__Concat_44758168((System_String_o *)StringLiteral_16127/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = (System_String_o *)VoiceMaster__getFlagRequestNumber(
                                           voiceMaster,
                                           chrId,
                                           FlagRequestNumber,
                                           0,
                                           0LL);
  if ( (_DWORD)FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B7076C(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_434ECDA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_434ECDA = 1;
  }
  memset(&v5, 0, sizeof(v5));
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7076C(0LL, v4);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v5.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
LABEL_11:
    sub_B7076C(battleTargetList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)battleTargetList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager__searchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        BattleBuffData_o *buffData,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  int32_t limitCount; // w22
  UnityEngine_Object_o *Manager__loadNoblePhantasmEffect; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x0
  UnityEngine_Object_o *v15; // x19
  bool v16; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_434ECC1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&StringLiteral_2824/*"Battle/Prefab/"*/);
    byte_434ECC1 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               seqIdFromMstTDSeqWeight,
                                                               0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Manager__loadNoblePhantasmEffect, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v12,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v13 = System_String__Concat_44758168((System_String_o *)StringLiteral_2824/*"Battle/Prefab/"*/, name, 0LL);
  v14 = UnityEngine_Resources__Load(v13, 0LL);
  if ( v14 )
  {
    if ( (UnityEngine_GameObject_c *)v14->klass == UnityEngine_GameObject_TypeInfo )
      v15 = v14;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  result = 0LL;
  if ( v16 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v15;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v12,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v22; // x1
  WellFired_USTimelineContainer_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x1
  int v26; // w8
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x19
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-50h]

  if ( (byte_434ECC2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_B70694(&StringLiteral_890/*"/"*/);
    byte_434ECC2 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_B7076C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_39;
    v18 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[v18 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v16 = (UnityEngine_Component_o *)sub_B70A60(v16);
LABEL_39:
      sub_B7076C(v16, v17);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      sub_B7076C(0LL, v20);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B7076C(0LL, v22);
    v24 = *(System_String_o **)&Component_srcLineSprite->fields.mtIsUpdate;
    v25 = System_String__Concat_44758168((System_String_o *)StringLiteral_890/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(v24, v25, 0LL) )
    {
      v26 = 93;
      goto LABEL_27;
    }
  }
  v23 = 0LL;
  v26 = 91;
LABEL_27:
  v34 = v26;
  v27 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v28 = *(_QWORD *)v27;
    v29 = v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_32;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_32:
      v32 = sub_B08590(v27, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  }
  if ( v34 == 91 )
    return 0LL;
  return v23;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_434ECDC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_434ECDC = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    playAudioSyncGroupIndexDict,
    (System_Xml_XmlQualifiedName_o *)groupName,
    value,
    (const MethodInfo_2FAF990 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_B7076C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)playAudioSyncGroupIndexDict,
    (WarBoardAIRoute_RouteData_o *)playSoundId,
    (const MethodInfo_2EB5A0C *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void __fastcall BattleSequenceManager__set_NowTargetAlpha(
        BattleSequenceManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__setup(
        BattleSequenceManager_o *this,
        System_Action_o *callback,
        bool isDemoMode,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 seqObject; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x19
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  WellFired_USTimelineContainer_o *v13; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  struct UnityEngine_GameObject_o *sequenceManager; // x23
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x23
  __int64 v17; // x27
  __int64 v18; // x23
  struct BattlePerformance_o *performance; // x8
  __int64 v20; // x27
  Il2CppObject *CutInPrefab; // x23
  float v22; // s8
  float y; // s9
  float z; // s10
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float w; // s7
  float v29; // s4
  float v30; // s5
  float v31; // s6
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  int v34; // w8
  __int64 v35; // x22
  int v36; // w19
  UnityEngine_Object_o *v37; // x27
  __int64 v38; // x8
  __int64 v39; // x26
  unsigned __int64 v40; // x25
  __int64 v41; // x28
  System_String_o *name; // x0
  __int64 v43; // x8
  int32_t v44; // w23
  System_String_o *v45; // x0
  __int64 v46; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x1
  System_String_o *v48; // x0
  __int64 v49; // x9
  __int64 v50; // x0
  int32_t treasureDeviceId; // w27
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *Manager__loadNoblePhantasmEffect; // x23
  __int64 v54; // x9
  __int64 v55; // x28
  UnityEngine_Transform_o *v56; // x23
  int v57; // s0
  System_String_o *v60; // x0
  __int64 v61; // x9
  System_String_o **v62; // x23
  __int64 v63; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x23
  BattleSequenceManager_o *v65; // x0
  const MethodInfo *v66; // x3
  WellFired_USTimelineContainer_o *v67; // x0
  Il2CppObject *current; // x23
  _BOOL8 v69; // x0
  __int64 v70; // x1
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v72; // x1
  void *v73; // x24
  int v74; // w8
  int i; // w23
  WellFired_USTimelineEvent_o *v76; // x0
  _QWORD *v77; // x25
  __int64 v78; // x8
  unsigned __int64 v79; // x28
  __int64 v80; // x26
  System_String_o *v81; // x0
  __int64 v82; // x9
  __int64 v83; // x0
  __int64 v84; // x1
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v86; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *v88; // x8
  unsigned __int64 v89; // x10
  System_Collections_IEnumerator_c **v90; // x11
  __int64 v91; // x0
  UnityEngine_Component_o *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v96; // x1
  srcLineSprite_o *v97; // x0
  __int64 v98; // x1
  srcLineSprite_o *v99; // x25
  System_String_o *v100; // x0
  __int64 v101; // x1
  System_String_o *v102; // x0
  __int64 v103; // x1
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v107; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v110; // x0
  __int64 v111; // x8
  __int64 v112; // x24
  unsigned __int64 v113; // x10
  int *v114; // x11
  __int64 v115; // x0
  __int64 v116; // x1
  System_Collections_IEnumerator_o *v117; // x23
  System_Collections_IEnumerator_c *v118; // x8
  unsigned __int64 v119; // x10
  int32_t *v120; // x11
  BattleSequenceManager_o *v121; // x24
  __int64 v122; // x0
  System_Collections_IEnumerator_c *v123; // x8
  unsigned __int64 v124; // x10
  System_Collections_IEnumerator_c **v125; // x11
  __int64 v126; // x0
  UnityEngine_Component_o *v127; // x0
  __int64 v128; // x1
  __int64 v129; // x9
  UnityEngine_GameObject_o *v130; // x0
  __int64 v131; // x1
  srcLineSprite_o *v132; // x0
  __int64 v133; // x1
  WellFired_USTimelineContainer_o *v134; // x24
  System_String_o *v135; // x0
  __int64 v136; // x1
  System_String_o *affectedObjectPath; // x0
  System_String_o *v138; // x25
  int v139; // w26
  System_String_o *v140; // x0
  __int64 v141; // x1
  System_String_o *v142; // x0
  char v143; // w27
  System_String_o *v144; // x0
  __int64 v145; // x1
  System_String_o *v146; // x0
  UnityEngine_Component_o *v147; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v149; // x0
  __int64 v150; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v152; // x1
  UnityEngine_Transform_o *v153; // x25
  System_String_o *v154; // x0
  System_String_o *v155; // x0
  UnityEngine_Transform_o *v156; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v158; // x1
  System_String_o *v159; // x0
  bool v160; // w0
  __int64 v161; // x1
  __int64 *v162; // x8
  System_String_o *v163; // x0
  bool v164; // w0
  System_String_o *v165; // x26
  UnityEngine_GameObject_o *v166; // x0
  System_String_o *v167; // x25
  UnityEngine_Transform_o *v168; // x0
  __int64 v169; // x1
  UnityEngine_Object_o *v170; // x27
  _BOOL8 v171; // x0
  __int64 v172; // x1
  __int64 v173; // x1
  System_Collections_IEnumerator_o *v174; // x27
  System_Collections_IEnumerator_c *v175; // x8
  unsigned __int64 v176; // x10
  int32_t *v177; // x11
  __int64 v178; // x0
  System_Collections_IEnumerator_c *v179; // x8
  unsigned __int64 v180; // x10
  System_Collections_IEnumerator_c **v181; // x11
  __int64 v182; // x0
  UnityEngine_Component_o *v183; // x0
  __int64 v184; // x1
  UnityEngine_Object_o *v185; // x28
  __int64 v186; // x9
  UnityEngine_Object_o *v187; // x0
  __int64 v188; // x1
  System_String_o *v189; // x0
  __int64 v190; // x1
  System_String_o *v191; // x0
  int v192; // w8
  System_String_o *v193; // x0
  _BOOL8 v194; // x0
  const MethodInfo *v195; // x2
  __int64 v196; // x1
  __int64 v197; // x1
  int32_t v198; // w26
  __int64 v199; // x0
  __int64 v200; // x27
  __int64 v201; // x8
  unsigned __int64 v202; // x10
  int *v203; // x11
  __int64 v204; // x0
  System_String_o *v205; // x27
  System_String_o *v206; // x0
  __int64 v207; // x1
  System_String_o *v208; // x27
  System_Char_array *v209; // x0
  System_String_array *v210; // x0
  __int64 v211; // x1
  __int64 v212; // x1
  System_String_o *v213; // x27
  UnityEngine_GameObject_o *v214; // x0
  __int64 v215; // x1
  UnityEngine_Transform_o *v216; // x26
  System_String_o *v217; // x0
  System_String_o *v218; // x0
  __int64 v219; // x1
  System_String_o *v220; // x0
  UnityEngine_Transform_o *v221; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v222; // x26
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v223; // x0
  _BOOL8 v224; // x0
  __int64 v225; // x1
  System_String_o *v226; // x0
  __int64 v227; // x1
  System_String_o *v228; // x1
  _BOOL8 v229; // x0
  __int64 v230; // x1
  BattleBuffData_o *v231; // x3
  const MethodInfo *v232; // x5
  __int64 v233; // x8
  int32_t v234; // w4
  __int64 v235; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v236; // x0
  __int64 v237; // x0
  __int64 v238; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v240; // x1
  UnityEngine_Transform_o *v241; // x0
  UnityEngine_Transform_o *v242; // x0
  __int64 v243; // x1
  float v244; // s8
  float v245; // s9
  float v246; // s10
  __int64 v247; // x1
  UnityEngine_Transform_o *v248; // x27
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v250; // x0
  UnityEngine_Transform_o *v251; // x0
  __int64 v252; // x1
  BattleSequenceManager_o *v253; // x0
  const MethodInfo *v254; // x4
  int32_t v255; // w25
  UnityEngine_Transform_o *v256; // x0
  __int64 v257; // x1
  UnityEngine_Transform_o *v258; // x0
  System_String_o *v259; // x0
  __int64 v260; // x1
  System_String_o *v261; // x0
  System_String_o *v262; // x0
  const MethodInfo *v263; // x3
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  WarBoardControlPlayTalkUiComponent_array *EventCount; // x0
  __int64 v267; // x1
  WarBoardControlPlayTalkUiComponent_array *v268; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v271; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v273; // x0
  __int64 v274; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v275; // x27
  System_String_o *v276; // x0
  __int64 v277; // x9
  _BOOL8 v278; // x0
  __int64 v279; // x1
  UnityEngine_Component_o *v280; // x0
  int32_t layer; // w25
  __int64 v282; // x8
  __int64 v283; // x23
  unsigned __int64 v284; // x10
  int *v285; // x11
  __int64 v286; // x0
  __int64 v287; // x1
  __int64 v288; // x8
  UnityEngine_Object_o *v289; // x21
  struct BattlePerformance_o *v290; // x8
  UnityEngine_Object_o *data; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t chrId; // w22
  VoiceMaster_o *v294; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v296; // x4
  int32_t v297; // w22
  System_String_o *v298; // x0
  const MethodInfo *v299; // x4
  __int64 v300; // x8
  int v301; // w20
  BalanceConfig_c *v302; // x0
  int32_t v303; // w20
  System_String_o *v304; // x0
  const MethodInfo *v305; // x4
  __int64 v306; // x0
  __int64 v307; // x0
  __int64 v308; // x0
  __int64 v309; // x0
  __int64 v310; // x0
  __int64 v311; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+0h] [xbp-140h]
  System_String_o *itema; // [xsp+0h] [xbp-140h]
  WellFired_USSequencer_o *seq; // [xsp+8h] [xbp-138h]
  char seqa; // [xsp+8h] [xbp-138h]
  __int64 v316; // [xsp+10h] [xbp-130h]
  int v317; // [xsp+10h] [xbp-130h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v319; // [xsp+20h] [xbp-120h]
  BattleSequenceManager_o *v320; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_T__o v321[2]; // [xsp+30h] [xbp-110h] BYREF
  int v322; // [xsp+68h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o m; // [xsp+70h] [xbp-D0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v325; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v326; // [xsp+B0h] [xbp-90h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v330; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_434ECBB & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_B70694(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&System_GC_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_USTimelineContainer__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
    sub_B70694(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_B70694(&NGUITools_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308752);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UnityEngine_Transform_TypeInfo);
    sub_B70694(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_B70694(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_B70694(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_B70694(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_B70694(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_B70694(&Voice_TypeInfo);
    sub_B70694(&StringLiteral_898/*"/Actor/chr/"*/);
    sub_B70694(&StringLiteral_2835/*"BattleBG"*/);
    sub_B70694(&StringLiteral_908/*"/BattleActors/"*/);
    sub_B70694(&StringLiteral_2837/*"BattleCamera"*/);
    sub_B70694(&StringLiteral_2839/*"BattleCutIn"*/);
    sub_B70694(&StringLiteral_14953/*"USFGOSetCameraEvent"*/);
    sub_B70694(&StringLiteral_1861/*"Actor"*/);
    sub_B70694(&StringLiteral_17134/*"body_level_"*/);
    sub_B70694(&StringLiteral_900/*"/Actor/chr/weapon_level_"*/);
    sub_B70694(&StringLiteral_899/*"/Actor/chr/body_level_"*/);
    sub_B70694(&StringLiteral_6430/*"FGOSequenceManager"*/);
    sub_B70694(&StringLiteral_902/*"/AllEffects/"*/);
    sub_B70694(&StringLiteral_17687/*"chr(Clone)"*/);
    sub_B70694(&StringLiteral_3557/*"Cameras/BattleCamera"*/);
    sub_B70694(&StringLiteral_14951/*"USFGOChangeBgEvent"*/);
    sub_B70694(&StringLiteral_920/*"/BattleCamera"*/);
    sub_B70694(&StringLiteral_923/*"/CutIns/"*/);
    sub_B70694(&StringLiteral_2833/*"Battle2D"*/);
    sub_B70694(&StringLiteral_922/*"/Cameras/BattleCamera"*/);
    sub_B70694(&StringLiteral_16581/*"animCamLoc"*/);
    sub_B70694(&StringLiteral_23643/*"weapon_level_"*/);
    sub_B70694(&StringLiteral_619/*"(Clone)"*/);
    sub_B70694(&StringLiteral_14950/*"USFGOAttachToParentEvent"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_897/*"/Actor/chr"*/);
    sub_B70694(&StringLiteral_14949/*"USFGOAnimationCameraEvent"*/);
    sub_B70694(&StringLiteral_978/*"0"*/);
    sub_B70694(&StringLiteral_14952/*"USFGOPlayCutInEvent"*/);
    byte_434ECBB = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v326, 0, sizeof(v326));
  memset(&v325, 0, sizeof(v325));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  v322 = 0;
  seqObject = (__int64)this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_437;
  Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)seqObject,
                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v10 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  Component_srcLineSprite,
                                  (WellFired_USSequencer_o *)Component_srcLineSprite,
                                  (System_String_o *)StringLiteral_1861/*"Actor"*/,
                                  v9);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( v11 )
  {
    seqObject = (__int64)this->fields.actor;
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v10 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v10,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  v13 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)v11,
          (WellFired_USSequencer_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_6430/*"FGOSequenceManager"*/,
          v12);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v319 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v319,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_437;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)v10;
  seq = (WellFired_USSequencer_o *)Component_srcLineSprite;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)seqObject,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v320 = this;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
  {
    sequenceManager = this->fields.sequenceManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)sequenceManager,
                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v13 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(v13, (UnityEngine_Transform_o *)seqObject, 0LL);
    createdObjects = this->fields.createdObjects;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v13, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !createdObjects )
      goto LABEL_437;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)createdObjects,
      (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v13, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_437;
    v17 = seqObject;
    *(_QWORD *)(seqObject + 24) = this->fields.actorCamera;
    v18 = seqObject + 24;
    sub_B70630(seqObject + 24);
    *(_QWORD *)(v18 + 8) = this->fields.effectCamera;
    sub_B70630(v18 + 8);
    *(_QWORD *)(v18 + 16) = this->fields.cutInCamera;
    sub_B70630(v18 + 16);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_437;
    *(_QWORD *)(v17 + 88) = performance->fields.fadeObject;
    v20 = v17 + 88;
    sub_B70630(v20);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v22 = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    identity = UnityEngine_Quaternion__get_identity(0LL);
    v25 = identity.fields.x;
    v26 = identity.fields.y;
    v27 = identity.fields.z;
    w = identity.fields.w;
    identity.fields.x = v22;
    identity.fields.y = y;
    identity.fields.z = z;
    identity.fields.w = v25;
    v29 = v26;
    v30 = v27;
    v31 = w;
    *(_QWORD *)(v20 - 24) = UnityEngine_Object__Instantiate_object_(
                              CutInPrefab,
                              *(UnityEngine_Vector3_o *)&identity.fields.x,
                              *(UnityEngine_Quaternion_o *)&identity.fields.w,
                              (const MethodInfo_1D589F0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308752);
    sub_B70630(v20 - 24);
    seqObject = *(_QWORD *)(v20 - 24);
    if ( !seqObject )
      goto LABEL_437;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v32);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v33);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                           (UnityEngine_Component_o *)v13,
                           1,
                           (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_437;
    v34 = *(_DWORD *)(seqObject + 24);
    v35 = seqObject;
    if ( v34 >= 1 )
    {
      v36 = 0;
      v37 = 0LL;
      v316 = seqObject;
      while ( 1 )
      {
        if ( v36 >= (unsigned int)v34 )
        {
LABEL_441:
          v308 = sub_B70798(seqObject);
          sub_B70738(v308, 0LL);
        }
        seqObject = *(_QWORD *)(v35 + 8LL * v36 + 32);
        if ( !seqObject )
          goto LABEL_437;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_437;
        v38 = *(_QWORD *)(seqObject + 24);
        v39 = seqObject;
        if ( (int)v38 >= 1 )
          break;
LABEL_95:
        v35 = v316;
        ++v36;
        v34 = *(_DWORD *)(v316 + 24);
        if ( v36 >= v34 )
          goto LABEL_96;
      }
      v40 = 0LL;
      while ( 1 )
      {
        if ( v40 >= (unsigned int)v38 )
          goto LABEL_441;
        v41 = *(_QWORD *)(v39 + 32 + 8 * v40);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v41 )
            goto LABEL_437;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14949/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !x )
                  goto LABEL_437;
                v43 = *(_QWORD *)&x[18].fields.m_CachedPtr;
                if ( !v43 )
                  goto LABEL_437;
                v44 = *(_DWORD *)(v43 + 720);
              }
              else
              {
                v44 = 0;
              }
              treasureDeviceId = this->fields.treasureDeviceId;
              limitCount = this->fields.limitCount;
              if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              }
              Manager__loadNoblePhantasmEffect = ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                   treasureDeviceId,
                                                   limitCount,
                                                   (System_String_o *)StringLiteral_16581/*"animCamLoc"*/,
                                                   v44,
                                                   0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this = v320;
              if ( !v320->fields.createdObjects )
LABEL_437:
                sub_B7076C(seqObject, callback);
              v37 = (UnityEngine_Object_o *)seqObject;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v320->fields.createdObjects,
                (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
            v54 = *(&WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v54
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v54 - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_442:
              v127 = (UnityEngine_Component_o *)sub_B70A60(v41);
LABEL_443:
              v92 = (UnityEngine_Component_o *)sub_B70A60(v127);
LABEL_444:
              v273 = (UnityEngine_Object_o *)sub_B70A60(v92);
LABEL_445:
              sub_B7076C(v273, v274);
            }
            *(_QWORD *)(v41 + 48) = v37;
            v55 = v41 + 48;
            sub_B70630(v55);
            *(_QWORD *)(v55 + 8) = this->fields.actorCamera;
            sub_B70630(v55 + 8);
            *(_BYTE *)(v55 + 36) = 0;
            if ( !v37 )
              goto LABEL_437;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v37, 0LL);
            if ( !this->fields.actor )
              goto LABEL_437;
            v56 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_437;
            *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Transform__get_position(
                                               (UnityEngine_Transform_o *)seqObject,
                                               0LL);
            if ( !v56 )
              goto LABEL_437;
            UnityEngine_Transform__set_position(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
          }
          else
          {
            v45 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
            seqObject = System_String__op_Equality(v45, (System_String_o *)StringLiteral_14952/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v319 )
                goto LABEL_437;
              v46 = *(&WellFired_USFGOPlayCutInEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) >= (unsigned int)v46 )
              {
                if ( *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v46 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo )
                  v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v41;
                else
                  v47 = 0LL;
              }
              else
              {
                v47 = 0LL;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v319,
                v47,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
              goto LABEL_94;
            }
            v48 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
            if ( System_String__op_Equality(v48, (System_String_o *)StringLiteral_14953/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v49 = *(&WellFired_USFGOSetCameraEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v49
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v49 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              *(_QWORD *)(v41 + 48) = this->fields.actorCamera;
              sub_B70630(v41 + 48);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_437;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_437;
              *(_QWORD *)(v41 + 56) = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              v50 = v41 + 56;
              goto LABEL_89;
            }
            v60 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v41, 0LL);
            seqObject = System_String__op_Equality(v60, (System_String_o *)StringLiteral_14951/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v61 = *(&WellFired_USFGOChangeBgEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 300LL) < (unsigned int)v61
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * v61 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v62 = (System_String_o **)(v41 + 56);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v41 + 56),
                     (System_String_o *)StringLiteral_978/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v62, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                *v62 = System_Int32__ToString((int32_t)&result[1], 0LL);
                sub_B70630(v41 + 56);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                *(_QWORD *)(v41 + 64) = System_Int32__ToString((int32_t)&result[1], 0LL);
                v63 = v41 + 64;
                sub_B70630(v63);
                v50 = v63 + 64;
                *(_QWORD *)(v63 + 64) = this->fields.changeFieldAfter;
LABEL_89:
                sub_B70630(v50);
              }
            }
          }
        }
LABEL_94:
        LODWORD(v38) = *(_DWORD *)(v39 + 24);
        if ( (__int64)++v40 >= (int)v38 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v64 )
    goto LABEL_437;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v64,
    item,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  v67 = BattleSequenceManager__searchTimeline(v65, seq, (System_String_o *)StringLiteral_3557/*"Cameras/BattleCamera"*/, v66);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v64,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v321,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v64,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v326 = v321[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v326,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v326.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v69 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v69 )
    {
      if ( !current )
        sub_B7076C(v69, v70);
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                  (UnityEngine_Component_o *)current,
                                                                  1,
                                                                  (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v73 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        sub_B7076C(0LL, v72);
      v74 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
      if ( v74 >= 1 )
      {
        for ( i = 0; i < v74; ++i )
        {
          if ( i >= (unsigned int)v74 )
          {
            v307 = sub_B70798(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
            sub_B70738(v307, 0LL);
          }
          v76 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v73 + i + 4);
          if ( !v76 )
            sub_B7076C(0LL, v72);
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = WellFired_USTimelineEvent__get_Events(v76, 0LL);
          v77 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
            sub_B7076C(0LL, v72);
          v78 = *((_QWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 3);
          if ( (int)v78 >= 1 )
          {
            v79 = 0LL;
            do
            {
              if ( v79 >= (unsigned int)v78 )
              {
                v306 = sub_B70798(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
                sub_B70738(v306, 0LL);
              }
              v80 = v77[v79 + 4];
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Object__op_Equality(
                                                                                  (UnityEngine_Object_o *)v80,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
              {
                if ( !v80 )
                  sub_B7076C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v72);
                v81 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v80, 0LL);
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                    v81,
                                                                                    (System_String_o *)StringLiteral_14950/*"USFGOAttachToParentEvent"*/,
                                                                                    0LL);
                if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
                {
                  v82 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v80 + 300LL) < (unsigned int)v82
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v80 + 200LL) + 8 * v82 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v83 = sub_B70A60(v80);
LABEL_435:
                    sub_B7076C(v83, v84);
                  }
                  v83 = System_String__op_Equality(
                          *(System_String_o **)(v80 + 72),
                          (System_String_o *)StringLiteral_2837/*"BattleCamera"*/,
                          0LL);
                  if ( (v83 & 1) != 0 )
                  {
                    actorCamera = (UnityEngine_Component_o *)v320->fields.actorCamera;
                    if ( !actorCamera )
                      sub_B7076C(0LL, v84);
                    *(_QWORD *)(v80 + 56) = UnityEngine_Component__get_transform(actorCamera, 0LL);
                    sub_B70630(v80 + 56);
                  }
                  else
                  {
                    if ( !v14 )
                      goto LABEL_435;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v14,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v80,
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              LODWORD(v78) = *((_DWORD *)v77 + 6);
              ++v79;
            }
            while ( (__int64)v79 < (int)v78 );
          }
          v74 = *((_DWORD *)v73 + 6);
        }
      }
    }
  }
  *((_DWORD *)&v321[1].fields.list + v322++) = 1008;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v326,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  if ( v322 && *((_DWORD *)&v321[0].fields.current + v322 + 1) == 1008 )
    --v322;
  seqObject = (__int64)seq;
  if ( !seq )
    goto LABEL_437;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v86);
  v317 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v107 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v107;
        p_offset += 4;
        if ( v107 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_157;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_157:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v88 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v89 = 0LL;
      v90 = (System_Collections_IEnumerator_c **)&v88->_1.interfaceOffsets->offset;
      while ( *(v90 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v89;
        v90 += 2;
        if ( v89 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_139;
      }
      v91 = (__int64)&v88->vtable[*(_DWORD *)v90 + 1].method;
    }
    else
    {
LABEL_139:
      v91 = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v92 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v91)(
                                       Enumerator,
                                       *(_QWORD *)(v91 + 8));
    if ( !v92 )
      sub_B7076C(0LL, v93);
    v94 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v92->klass->_2.bitflags2 + 1) < (unsigned int)v94
      || (UnityEngine_Transform_c *)v92->klass->_2.typeHierarchy[v94 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_444;
    }
    gameObject = UnityEngine_Component__get_gameObject(v92, 0LL);
    if ( !gameObject )
      sub_B7076C(0LL, v96);
    v97 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            gameObject,
            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v99 = v97;
    if ( !v97 )
      sub_B7076C(0LL, v98);
    v100 = *(System_String_o **)&v97->fields.mtIsUpdate;
    if ( !v100 )
      sub_B7076C(0LL, v98);
    if ( System_String__StartsWith(v100, (System_String_o *)StringLiteral_908/*"/BattleActors/"*/, 0LL)
      && *(_QWORD *)&v99->fields.mtIsUpdate )
    {
      v102 = *(System_String_o **)&v99->fields.mtIsUpdate;
      if ( !v102 )
        goto LABEL_466;
      if ( System_String__StartsWith(v102, (System_String_o *)StringLiteral_908/*"/BattleActors/"*/, 0LL) )
      {
        v104 = *(System_String_o **)&v99->fields.mtIsUpdate;
        if ( !v104 )
          sub_B7076C(0LL, v103);
        v105 = System_String__Substring_44821904(v104, v104->fields.m_stringLength - 1, 1, 0LL);
        result[0] = 1;
        v317 += System_Int32__TryParse(v105, result, 0LL);
      }
    }
  }
  *((_DWORD *)&v321[1].fields.list + v322++) = 1183;
  v110 = sub_B70754(Enumerator, System_IDisposable_TypeInfo);
  if ( v110 )
  {
    v111 = *(_QWORD *)v110;
    v112 = v110;
    if ( *(_WORD *)(*(_QWORD *)v110 + 298LL) )
    {
      v113 = 0LL;
      v114 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
      {
        ++v113;
        v114 += 4;
        if ( v113 >= *(unsigned __int16 *)(*(_QWORD *)v110 + 298LL) )
          goto LABEL_165;
      }
      v115 = v111 + 16LL * *v114 + 312;
    }
    else
    {
LABEL_165:
      v115 = sub_B08590(v110, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v115)(v112, *(_QWORD *)(v115 + 8));
  }
  if ( v322 && *((_DWORD *)&v321[0].fields.current + v322 + 1) == 1183 )
    --v322;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  v117 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v117 )
    sub_B7076C(0LL, v116);
  seqa = 0;
  while ( 1 )
  {
    v118 = v117->klass;
    if ( *(_WORD *)&v117->klass->_2.bitflags1 )
    {
      v119 = 0LL;
      v120 = &v118->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v120 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v119;
        v120 += 4;
        if ( v119 >= *(unsigned __int16 *)&v117->klass->_2.bitflags1 )
          goto LABEL_178;
      }
      v121 = v320;
      v122 = (__int64)&v118->vtable[*v120].method;
    }
    else
    {
LABEL_178:
      v121 = v320;
      v122 = sub_B08590(v117, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v122)(v117, *(_QWORD *)(v122 + 8)) & 1) == 0 )
      break;
    v123 = v117->klass;
    if ( *(_WORD *)&v117->klass->_2.bitflags1 )
    {
      v124 = 0LL;
      v125 = (System_Collections_IEnumerator_c **)&v123->_1.interfaceOffsets->offset;
      while ( *(v125 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v124;
        v125 += 2;
        if ( v124 >= *(unsigned __int16 *)&v117->klass->_2.bitflags1 )
          goto LABEL_185;
      }
      v126 = (__int64)&v123->vtable[*(_DWORD *)v125 + 1].method;
    }
    else
    {
LABEL_185:
      v126 = sub_B08590(v117, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v127 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v126)(
                                        v117,
                                        *(_QWORD *)(v126 + 8));
    if ( !v127 )
      sub_B7076C(0LL, v128);
    v129 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v127->klass->_2.bitflags2 + 1) < (unsigned int)v129
      || (UnityEngine_Transform_c *)v127->klass->_2.typeHierarchy[v129 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_443;
    }
    v130 = UnityEngine_Component__get_gameObject(v127, 0LL);
    if ( !v130 )
      goto LABEL_447;
    v132 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v130,
             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v134 = (WellFired_USTimelineContainer_o *)v132;
    if ( !v132 )
      sub_B7076C(0LL, v133);
    v135 = *(System_String_o **)&v132->fields.mtIsUpdate;
    if ( !v135 )
      sub_B7076C(0LL, v133);
    if ( System_String__StartsWith(v135, (System_String_o *)StringLiteral_902/*"/AllEffects/"*/, 0LL) )
    {
      affectedObjectPath = v134->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_B7076C(0LL, v136);
      v138 = System_String__Substring(affectedObjectPath, 12, 0LL);
      v139 = 1;
    }
    else
    {
      v139 = 0;
      v138 = 0LL;
    }
    v140 = v134->fields.affectedObjectPath;
    if ( !v140 )
      sub_B7076C(0LL, v136);
    if ( System_String__StartsWith(v140, (System_String_o *)StringLiteral_923/*"/CutIns/"*/, 0LL) )
    {
      v142 = v134->fields.affectedObjectPath;
      if ( !v142 )
        sub_B7076C(0LL, v141);
      v138 = System_String__Substring(v142, 8, 0LL);
      v143 = 1;
    }
    else
    {
      v143 = 0;
    }
    v144 = v134->fields.affectedObjectPath;
    if ( !v144 )
      sub_B7076C(0LL, v141);
    if ( System_String__StartsWith(v144, (System_String_o *)StringLiteral_920/*"/BattleCamera"*/, 0LL) )
      goto LABEL_206;
    v146 = v134->fields.affectedObjectPath;
    if ( !v146 )
      sub_B7076C(0LL, v145);
    if ( System_String__StartsWith(v146, (System_String_o *)StringLiteral_922/*"/Cameras/BattleCamera"*/, 0LL) )
    {
LABEL_206:
      v147 = (UnityEngine_Component_o *)v320->fields.actorCamera;
      if ( !v147 )
        sub_B7076C(0LL, v145);
      transform = UnityEngine_Component__get_transform(v147, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v134, transform, 0LL);
    }
    else
    {
      v149 = v134->fields.affectedObjectPath;
      if ( !v149 )
        sub_B7076C(0LL, v145);
      if ( System_String__StartsWith(v149, (System_String_o *)StringLiteral_897/*"/Actor/chr"*/, 0LL) )
      {
        actor = v320->fields.actor;
        if ( !actor )
          sub_B7076C(0LL, v150);
        v153 = UnityEngine_GameObject__get_transform(actor, 0LL);
        v154 = v134->fields.affectedObjectPath;
        if ( !v154 )
          sub_B7076C(0LL, v152);
        v155 = System_String__Replace_44765404(
                 v154,
                 (System_String_o *)StringLiteral_897/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_17687/*"chr(Clone)"*/,
                 0LL);
        if ( !v153 )
          sub_B7076C(v155, v155);
        v156 = UnityEngine_Transform__Find(v153, v155, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(v134, v156, 0LL);
        AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v134, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
        {
          v159 = v134->fields.affectedObjectPath;
          if ( !v159 )
            sub_B7076C(0LL, v158);
          v160 = System_String__StartsWith(v159, (System_String_o *)StringLiteral_899/*"/Actor/chr/body_level_"*/, 0LL);
          v162 = &StringLiteral_17134/*"body_level_"*/;
          if ( v160 )
            goto LABEL_221;
          v163 = v134->fields.affectedObjectPath;
          if ( !v163 )
            sub_B7076C(0LL, v161);
          v164 = System_String__StartsWith(v163, (System_String_o *)StringLiteral_900/*"/Actor/chr/weapon_level_"*/, 0LL);
          v162 = &StringLiteral_23643/*"weapon_level_"*/;
          if ( v164 )
          {
LABEL_221:
            v165 = (System_String_o *)*v162;
            if ( *v162 )
            {
              v166 = v320->fields.actor;
              if ( !v166 )
                sub_B7076C(0LL, v161);
              v167 = (System_String_o *)StringLiteral_1/*""*/;
              v168 = UnityEngine_GameObject__get_transform(v166, 0LL);
              if ( !v168 )
                sub_B7076C(0LL, v169);
              v170 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                               v168,
                                               (System_String_o *)StringLiteral_17687/*"chr(Clone)"*/,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v171 = UnityEngine_Object__op_Inequality(v170, 0LL, 0LL);
              if ( v171 )
              {
                if ( !v170 )
                  sub_B7076C(v171, v172);
                v174 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v170, 0LL);
                if ( !v174 )
                  sub_B7076C(0LL, v173);
                while ( 1 )
                {
                  v175 = v174->klass;
                  if ( *(_WORD *)&v174->klass->_2.bitflags1 )
                  {
                    v176 = 0LL;
                    v177 = &v175->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v177 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v176;
                      v177 += 4;
                      if ( v176 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
                        goto LABEL_234;
                    }
                    v178 = (__int64)&v175->vtable[*v177].method;
                  }
                  else
                  {
LABEL_234:
                    v178 = sub_B08590(v174, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v178)(
                          v174,
                          *(_QWORD *)(v178 + 8)) & 1) == 0 )
                    break;
                  v179 = v174->klass;
                  if ( *(_WORD *)&v174->klass->_2.bitflags1 )
                  {
                    v180 = 0LL;
                    v181 = (System_Collections_IEnumerator_c **)&v179->_1.interfaceOffsets->offset;
                    while ( *(v181 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v180;
                      v181 += 2;
                      if ( v180 >= *(unsigned __int16 *)&v174->klass->_2.bitflags1 )
                        goto LABEL_241;
                    }
                    v182 = (__int64)&v179->vtable[*(_DWORD *)v181 + 1].method;
                  }
                  else
                  {
LABEL_241:
                    v182 = sub_B08590(v174, System_Collections_IEnumerator_TypeInfo, 1LL);
                  }
                  v183 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v182)(
                                                      v174,
                                                      *(_QWORD *)(v182 + 8));
                  v185 = (UnityEngine_Object_o *)v183;
                  if ( !v183 )
                    sub_B7076C(0LL, v184);
                  v186 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v183->klass->_2.bitflags2 + 1) < (unsigned int)v186
                    || (UnityEngine_Transform_c *)v183->klass->_2.typeHierarchy[v186 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    v102 = (System_String_o *)sub_B70A60(v183);
LABEL_466:
                    sub_B7076C(v102, v101);
                  }
                  v187 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v183, 0LL);
                  if ( !v187 )
                    sub_B7076C(0LL, v188);
                  v189 = UnityEngine_Object__get_name(v187, 0LL);
                  if ( !v189 )
                    sub_B7076C(0LL, v190);
                  if ( System_String__StartsWith(v189, v165, 0LL) )
                  {
                    v191 = UnityEngine_Object__get_name(v185, 0LL);
                    *((_DWORD *)&v321[1].fields.list + v322) = 1651;
                    v192 = v322;
                    v167 = v191;
                    goto LABEL_259;
                  }
                }
                *((_DWORD *)&v321[1].fields.list + v322) = 1651;
                v192 = v322;
LABEL_259:
                v322 = v192 + 1;
                v199 = sub_B70754(v174, System_IDisposable_TypeInfo);
                v200 = v199;
                if ( v199 )
                {
                  v201 = *(_QWORD *)v199;
                  if ( *(_WORD *)(*(_QWORD *)v199 + 298LL) )
                  {
                    v202 = 0LL;
                    v203 = (int *)(*(_QWORD *)(v201 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v203 - 1) != System_IDisposable_TypeInfo )
                    {
                      ++v202;
                      v203 += 4;
                      if ( v202 >= *(unsigned __int16 *)(*(_QWORD *)v199 + 298LL) )
                        goto LABEL_264;
                    }
                    v204 = v201 + 16LL * *v203 + 312;
                  }
                  else
                  {
LABEL_264:
                    v204 = sub_B08590(v199, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v204)(v200, *(_QWORD *)(v204 + 8));
                }
                if ( v322 && *((_DWORD *)&v321[0].fields.current + v322 + 1) == 1651 )
                  --v322;
              }
              v205 = v134->fields.affectedObjectPath;
              v206 = System_String__Concat_44758168((System_String_o *)StringLiteral_898/*"/Actor/chr/"*/, v165, 0LL);
              if ( !v206 )
                sub_B7076C(0LL, v207);
              if ( !v205 )
                sub_B7076C(v206, v207);
              v208 = System_String__Substring(v205, v206->fields.m_stringLength, 0LL);
              v209 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
              if ( !v209 )
                sub_B7076C(0LL, 0LL);
              if ( !v209->max_length )
              {
                v309 = sub_B70798(v209);
                sub_B70738(v309, 0LL);
              }
              v209->m_Items[2] = 47;
              if ( !v208 )
                sub_B7076C(v209, v209);
              v210 = System_String__Split(v208, v209, 0LL);
              if ( !v210 )
                sub_B7076C(0LL, v211);
              if ( !v210->max_length )
              {
                v310 = sub_B70798(v210);
                sub_B70738(v310, 0LL);
              }
              v213 = System_String__Concat_44758168(v165, v210->m_Items[0], 0LL);
              v214 = v320->fields.actor;
              if ( !v214 )
                sub_B7076C(0LL, v212);
              v216 = UnityEngine_GameObject__get_transform(v214, 0LL);
              v217 = v134->fields.affectedObjectPath;
              if ( !v217 )
                sub_B7076C(0LL, v215);
              v218 = System_String__Replace_44765404(
                       v217,
                       (System_String_o *)StringLiteral_897/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_17687/*"chr(Clone)"*/,
                       0LL);
              if ( !v218 )
                sub_B7076C(0LL, v219);
              v220 = System_String__Replace_44765404(v218, v213, v167, 0LL);
              if ( !v216 )
                sub_B7076C(v220, v220);
              v221 = UnityEngine_Transform__Find(v216, v220, 0LL);
              WellFired_USTimelineContainer__set_AffectedObject(v134, v221, 0LL);
            }
          }
        }
      }
      else
      {
        v193 = v134->fields.affectedObjectPath;
        if ( !v193 )
          sub_B7076C(0LL, v150);
        v194 = System_String__StartsWith(v193, (System_String_o *)StringLiteral_908/*"/BattleActors/"*/, 0LL);
        if ( v194 )
          v138 = v134->fields.affectedObjectPath;
        if ( v138 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v194, v138, v195) )
            goto LABEL_336;
          if ( v139 )
          {
            v198 = System_String__IndexOf(v138, 0x2Fu, 0LL);
            if ( (v198 & 0x80000000) == 0 )
            {
              itema = System_String__Substring(v138, v198 + 1, 0LL);
              v138 = System_String__Substring_44821904(v138, 0, v198, 0LL);
              goto LABEL_285;
            }
            if ( (seqa & 1) != 0 )
            {
              itema = 0LL;
LABEL_285:
              v223 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v320->fields.createdObjects;
              if ( !v223 )
                sub_B7076C(0LL, v197);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                v321,
                v223,
                (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v325 = v321[0];
              while ( 1 )
              {
                v224 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v325,
                         (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v224 )
                  break;
                v222 = (EventMissionProgressRequest_Argument_ProgressData_o *)v325.fields.current;
                if ( !v325.fields.current )
                  sub_B7076C(v224, v225);
                v226 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v325.fields.current, 0LL);
                if ( !v226 )
                  sub_B7076C(0LL, v227);
                v228 = System_String__Replace_44765404(
                         v226,
                         (System_String_o *)StringLiteral_619/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v138, v228, 0LL) )
                  goto LABEL_293;
              }
              v222 = 0LL;
LABEL_293:
              *((_DWORD *)&v321[1].fields.list + v322++) = 1961;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v325,
                (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if ( v322 )
              {
                if ( *((_DWORD *)&v321[0].fields.current + v322 + 1) == 1961 )
                  --v322;
                seqa = 1;
              }
              else
              {
                seqa = 1;
              }
              goto LABEL_299;
            }
            itema = 0LL;
            v222 = 0LL;
            seqa = 0;
          }
          else
          {
            itema = 0LL;
            v222 = 0LL;
          }
LABEL_299:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v222, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v229 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( v229 )
            {
              if ( !x )
                sub_B7076C(v229, v230);
              v233 = *(_QWORD *)&x[18].fields.m_CachedPtr;
              if ( !v233 )
                sub_B7076C(v229, v230);
              v234 = *(_DWORD *)(v233 + 720);
            }
            else
            {
              v234 = 0;
            }
            v222 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSequenceManager__searchPrefab(
                                                                            v320,
                                                                            v320->fields.treasureDeviceId,
                                                                            v138,
                                                                            v231,
                                                                            v234,
                                                                            v232);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v222, 0LL, 0LL) )
            {
              v236 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v320->fields.createdObjects;
              if ( !v236 )
                sub_B7076C(0LL, v235);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v236,
                v222,
                (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
              if ( !v222 )
                sub_B7076C(v237, v238);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v222, 0, 0LL);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v222, 0LL, 0LL) )
            goto LABEL_336;
          IsNullOrEmpty = System_String__IsNullOrEmpty(itema, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v222 )
              sub_B7076C(IsNullOrEmpty, v240);
            v256 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v222, 0LL);
            if ( !v256 )
              sub_B7076C(0LL, v257);
            v258 = UnityEngine_Transform__Find(v256, itema, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v134, v258, 0LL);
            goto LABEL_336;
          }
          if ( !v222 )
            sub_B7076C(IsNullOrEmpty, v240);
          v241 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v222, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v134, v241, 0LL);
          if ( (v143 & 1) != 0 )
          {
            v242 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v222, 0LL);
            if ( !v242 )
              sub_B7076C(0LL, v243);
            localPosition = UnityEngine_Transform__get_localPosition(v242, 0LL);
            v244 = localPosition.fields.x;
            v245 = localPosition.fields.y;
            v246 = localPosition.fields.z;
            v248 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v222, 0LL);
            CutInRoot = v320->fields.CutInRoot;
            if ( !CutInRoot )
              sub_B7076C(0LL, v247);
            v250 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v248 )
              sub_B7076C(v250, v250);
            UnityEngine_Transform__set_parent(v248, v250, 0LL);
            v251 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v222, 0LL);
            if ( !v251 )
              sub_B7076C(0LL, v252);
            v330.fields.x = v244;
            v330.fields.y = v245;
            v330.fields.z = v246;
            UnityEngine_Transform__set_localPosition(v251, v330, 0LL);
            BattleSequenceManager__updateCutInEvents(
              v253,
              (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v319,
              v138,
              (UnityEngine_GameObject_o *)v222,
              v254);
            v255 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2839/*"BattleCutIn"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v222, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2835/*"BattleBG"*/, 0LL) )
              goto LABEL_336;
            v255 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2833/*"Battle2D"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v222, v255, 0LL);
LABEL_336:
          v259 = v134->fields.affectedObjectPath;
          if ( !v259 )
            sub_B7076C(0LL, v196);
          if ( System_String__StartsWith(v259, (System_String_o *)StringLiteral_908/*"/BattleActors/"*/, 0LL) )
          {
            v261 = v134->fields.affectedObjectPath;
            if ( !v261 )
              sub_B7076C(0LL, v260);
            v262 = System_String__Substring_44821904(v261, v261->fields.m_stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v262, &targetPosIndex, 0LL);
            v264 = --targetPosIndex;
            if ( v317 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v320, v134, v264, v263);
              BattleSequenceManager__SyncAttachedTargetPair(v320, v134, targetPosIndex, v265);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v320, v134, v264, v263);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                         (UnityEngine_Component_o *)v134,
                         1,
                         (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v268 = EventCount;
          if ( !EventCount )
            sub_B7076C(0LL, v267);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
              {
                v311 = sub_B70798(EventCount);
                sub_B70738(v311, 0LL);
              }
              v271 = (WellFired_USTimelineEvent_o *)v268->m_Items[j];
              if ( !v271 )
                sub_B7076C(EventCount, v267);
              for ( k = 0; ; ++k )
              {
                EventCount = (WarBoardControlPlayTalkUiComponent_array *)WellFired_USTimelineEvent__get_EventCount(
                                                                           v271,
                                                                           0LL);
                if ( k >= (int)EventCount )
                  break;
                v273 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v271, k, 0LL);
                v275 = (EventMissionProgressRequest_Argument_ProgressData_o *)v273;
                if ( !v273 )
                  goto LABEL_445;
                v276 = UnityEngine_Object__get_name(v273, 0LL);
                if ( System_String__op_Equality(v276, (System_String_o *)StringLiteral_14950/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v277 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v275->klass->_2.bitflags2 + 1) < (unsigned int)v277
                    || (WellFired_USFGOAttachToParentEvent_c *)v275->klass->_2.typeHierarchy[v277 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v130 = (UnityEngine_GameObject_o *)sub_B70A60(v275);
LABEL_447:
                    sub_B7076C(v130, v131);
                  }
                  v278 = System_String__op_Equality(
                           *(System_String_o **)&v275[1].fields.addCount,
                           (System_String_o *)StringLiteral_2837/*"BattleCamera"*/,
                           0LL);
                  if ( v278 )
                  {
                    v280 = (UnityEngine_Component_o *)v320->fields.actorCamera;
                    if ( !v280 )
                      sub_B7076C(0LL, v279);
                    *(_QWORD *)&v275[1].fields.missionTargetId = UnityEngine_Component__get_transform(v280, 0LL);
                    sub_B70630(&v275[1].fields);
                  }
                  else
                  {
                    if ( !v14 )
                      sub_B7076C(v278, v279);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v14,
                      v275,
                      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              max_length = v268->max_length;
            }
          }
        }
      }
    }
  }
  *((_DWORD *)&v321[1].fields.list + v322++) = 2515;
  seqObject = sub_B70754(v117, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v282 = *(_QWORD *)seqObject;
    v283 = seqObject;
    if ( *(_WORD *)(*(_QWORD *)seqObject + 298LL) )
    {
      v284 = 0LL;
      v285 = (int *)(*(_QWORD *)(v282 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v285 - 1) != System_IDisposable_TypeInfo )
      {
        ++v284;
        v285 += 4;
        if ( v284 >= *(unsigned __int16 *)(*(_QWORD *)seqObject + 298LL) )
          goto LABEL_378;
      }
      v286 = v282 + 16LL * *v285 + 312;
    }
    else
    {
LABEL_378:
      v286 = sub_B08590(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v286)(v283, *(_QWORD *)(v286 + 8));
  }
  if ( v322 && *((_DWORD *)&v321[0].fields.current + v322 + 1) == 2515 )
    --v322;
  if ( !v14 )
    goto LABEL_437;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v321,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v321[0];
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &m,
          (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields.current,
          v121->fields.performance,
          v121->fields.actor,
          v121->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields.current )
      sub_B7076C(0LL, v287);
  }
  *((_DWORD *)&v321[1].fields.list + v322++) = 2581;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &m,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( v322 && *((_DWORD *)&v321[0].fields.current + v322 + 1) == 2581 )
    --v322;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  seqObject = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !x )
      goto LABEL_437;
    if ( LOBYTE(x[19].fields.m_CachedPtr) )
      goto LABEL_428;
    v288 = *(_QWORD *)&x[18].fields.m_CachedPtr;
    if ( !v288 )
      goto LABEL_437;
    if ( !*(_DWORD *)(v288 + 308) && !BattleActorControl__isNoVoice((BattleActorControl_o *)x, 0LL) )
    {
      v289 = (UnityEngine_Object_o *)v121->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      seqObject = UnityEngine_Object__op_Inequality(v289, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v290 = v121->fields.performance;
        if ( !v290 )
          goto LABEL_437;
        data = (UnityEngine_Object_o *)v290->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)seqObject,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoiceMaster___);
            v121->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v121->fields.chrId;
            v294 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(v121, v294, chrId, FileName, v296) )
              v121->fields.isAlreadyRegistDefaultVoice = 1;
            v297 = v121->fields.chrId;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v298 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v121, v294, v297, v298, v299);
            v300 = *(_QWORD *)&x[18].fields.m_CachedPtr;
            if ( v300 )
            {
              v301 = *(_DWORD *)(v300 + 672);
              v302 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v302 = BalanceConfig_TypeInfo;
              }
              if ( v301 == v302->static_fields->TreasureDeviceIdMashu3 )
              {
                v303 = v121->fields.chrId;
                if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v304 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v121, v294, v303, v304, v305);
              }
              goto LABEL_428;
            }
          }
          goto LABEL_437;
        }
      }
    }
  }
LABEL_428:
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44134460(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x24
  int size; // w23
  unsigned int v9; // w22
  BattleSequenceManager_BattleTarget_o *v10; // x8
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v11; // x20

  v6 = this;
  if ( (byte_434ECD5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    this = (BattleSequenceManager_o *)sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_434ECD5 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = v6->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      if ( size < 1 )
      {
LABEL_14:
        if ( tlcont )
        {
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)tlcont,
                                              0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            return;
          }
        }
      }
      else
      {
        v9 = 0;
        while ( 1 )
        {
          if ( battleTargetList->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v10 = battleTargetList->fields._items->m_Items[v9];
          if ( !v10 )
            goto LABEL_25;
          if ( v10->fields._positionIndex_k__BackingField == targetIndex )
            break;
          if ( (int)++v9 >= size )
            goto LABEL_14;
          battleTargetList = v6->fields.battleTargetList;
          if ( !battleTargetList )
            goto LABEL_25;
        }
        v11 = v6->fields.battleTargetList;
        if ( v11 )
        {
          if ( v11->fields._size <= v9 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          this = (BattleSequenceManager_o *)v11->fields._items->m_Items[v9];
          if ( this )
          {
            this = (BattleSequenceManager_o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                (BattleSequenceManager_BattleTarget_o *)this,
                                                0LL);
            if ( this )
            {
              this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)this,
                                                  0LL);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B7076C(this, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x21
  int32_t size; // w8
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  v6 = this;
  if ( (byte_434ECD9 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    this = (BattleSequenceManager_o *)sub_B70694(&StringLiteral_14664/*"Tmp_Target"*/);
    byte_434ECD9 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = v6->fields.battleTargetList;
    if ( !battleTargetList )
      goto LABEL_17;
    size = battleTargetList->fields._size;
    if ( size > targetIndex )
    {
      if ( size <= (unsigned int)targetIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      this = (BattleSequenceManager_o *)battleTargetList->fields._items->m_Items[targetIndex];
      if ( this )
      {
        this = (BattleSequenceManager_o *)BattleSequenceManager_BattleTarget__saveTransform(
                                            (BattleSequenceManager_BattleTarget_o *)this,
                                            0LL);
        if ( this )
        {
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_B7076C(this, tlcont);
    }
    v9 = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v9, (System_String_o *)StringLiteral_14664/*"Tmp_Target"*/, 0LL);
    if ( !v9 )
      goto LABEL_17;
    this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
    if ( !tlcont )
      goto LABEL_17;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)this, 0LL);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)tlcont, 0LL);
    if ( !AffectedObject )
      goto LABEL_17;
    UnityEngine_Transform__SetParent(AffectedObject, (UnityEngine_Transform_o *)this, 0LL);
  }
}


bool __fastcall BattleSequenceManager__updateCutInEvents(
        BattleSequenceManager_o *this,
        System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs,
        System_String_o *cutInName,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x21
  char v11; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434ECBF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_B70694(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_434ECBF = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !evs )
    sub_B7076C(this, evs);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)evs,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v14,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    if ( !v8 )
      break;
    current = v14.fields.current;
    if ( !v14.fields.current )
      sub_B7076C(v8, v9);
    if ( System_String__op_Equality((System_String_o *)v14.fields.current[3].monitor, cutInName, 0LL) )
    {
      current[3].klass = (Il2CppClass *)obj;
      sub_B70630(&current[3]);
      v11 = 1;
      v12 = 5;
      goto LABEL_10;
    }
  }
  v11 = 0;
  v12 = 3;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return (v12 == 5) & v11;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  this->fields.originalScale = UnityEngine_Vector3__get_zero(0LL);
  this->fields.originalRotation = UnityEngine_Quaternion__get_identity(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActorControl_o *__fastcall BattleSequenceManager_BattleTarget__getBattleActor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields.targetActor;
}


int32_t __fastcall BattleSequenceManager_BattleTarget__get_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  return this->fields._positionIndex_k__BackingField;
}


void __fastcall BattleSequenceManager_BattleTarget__restoreTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o **p_targetActor; // x19
  UnityEngine_Component_o *transform; // x0

  p_targetActor = &this->fields.targetActor;
  if ( this->fields.isSave )
  {
    transform = (UnityEngine_Component_o *)*p_targetActor;
    if ( !*p_targetActor
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL
      || (UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)transform,
            this->fields.originalRotation,
            0LL),
          (transform = (UnityEngine_Component_o *)this->fields.targetActor) == 0LL)
      || (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL )
    {
      sub_B7076C(transform, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.originalScale, 0LL);
  }
  *p_targetActor = 0LL;
  sub_B70630(p_targetActor);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager_BattleTarget__saveTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
  this->fields.isSave = 1;
  if ( !targetActor )
    goto LABEL_7;
  targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL);
  if ( !targetActor
    || (localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalRotation = localRotation,
        !targetActor)
    || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)targetActor, 0LL),
        targetActor = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalScale = localScale,
        !targetActor) )
  {
LABEL_7:
    sub_B7076C(targetActor, method);
  }
  return UnityEngine_Component__get_gameObject(targetActor, 0LL);
}


void __fastcall BattleSequenceManager_BattleTarget__set_positionIndex(
        BattleSequenceManager_BattleTarget_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._positionIndex_k__BackingField = value;
}


void __fastcall BattleSequenceManager_BattleTarget__setup(
        BattleSequenceManager_BattleTarget_o *this,
        BattleActorControl_o *bac,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleActorControl_o **p_targetActor; // x20

  this->fields.targetActor = bac;
  p_targetActor = &this->fields.targetActor;
  sub_B70630(&this->fields.targetActor);
  *((_DWORD *)p_targetActor + 9) = index;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__106___ctor(
        BattleSequenceManager__WaitEndSequence_d__106_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__106__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__106_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager__WaitEndSequence_d__106_o *v2; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x21
  bool result; // w0

  v2 = this;
  if ( (byte_434ECF3 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__106_o *)sub_B70694(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_434ECF3 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B70764(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    v2->fields._wait_5__2 = v5;
    sub_B70630(&v2->fields._wait_5__2);
    if ( !_4__this )
LABEL_12:
      sub_B7076C(this, method);
  }
  if ( _4__this->fields.IsBgBusy )
  {
    v2->fields.__2__current = (Il2CppObject *)v2->fields._wait_5__2;
    sub_B70630(&v2->fields.__2__current);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__106__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__106_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__106__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__106_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleSequenceManager__WaitEndSequence_d__106_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__106__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__106_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__106__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__106_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F83E & 1) == 0 )
  {
    sub_B70694(&BattleSequenceManager___c_TypeInfo);
    byte_434F83E = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleSequenceManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__75_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float duration; // [xsp+Ch] [xbp-4h] BYREF

  duration = 0.0;
  if ( !x1 || (duration = x1->fields.duration, !x2) )
    sub_B7076C(this, x1);
  return System_Single__CompareTo_44744360(x2->fields.duration, v4, (const MethodInfo *)&duration);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__75_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float duration; // [xsp+Ch] [xbp-4h] BYREF

  duration = 0.0;
  if ( !x1 || (duration = x1->fields.duration, !x2) )
    sub_B7076C(this, x1);
  return System_Single__CompareTo_44744360(x2->fields.duration, v4, (const MethodInfo *)&duration);
}


void __fastcall BattleSequenceManager___c__DisplayClass112_0___ctor(
        BattleSequenceManager___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass112_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass112_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_B7076C(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass115_0___ctor(
        BattleSequenceManager___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass115_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass115_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass115_0_o *v4; // x20

  v4 = this;
  if ( (byte_434F83F & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass115_0_o *)sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_434F83F = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass115_0_o *)v4->fields.targetList) == 0LL )
    sub_B7076C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass122_0___ctor(
        BattleSequenceManager___c__DisplayClass122_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass122_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass122_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass141_0___ctor(
        BattleSequenceManager___c__DisplayClass141_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass141_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass141_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_0___ctor(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass74_0_o *v4; // x19
  struct BattleSequenceManager_o *_4__this; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v14; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  v4 = this;
  if ( (byte_434F840 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__1__);
    sub_B70694(&StringLiteral_13203/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B70694(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_434F840 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass74_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13203/*"StandardCutIn"*/,
                                                                  (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_B70630(
          (BattleServantConfConponent_o *)&_4__this->fields.CutInPrefab,
          (System_Int32_array **)this,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (this = (BattleSequenceManager___c__DisplayClass74_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B7076C(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v14 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_B70764(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v4->fields.__9__1,
      (System_Int32_array **)_9__1,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__LoadNoblePhantasm(
    v14,
    chrId,
    limitCount,
    treasureDeviceId,
    treasureDeviceLv,
    npChargeStage,
    _9__1,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *_4__this; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array ***v16; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleActorControl_o *v32; // x8
  struct BattleServantData_o *v33; // x8
  struct BattleSequenceManager_o *v34; // x8
  SoundManager_o *Instance; // x21
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  System_Action_o *v38; // x23
  struct BattleSequenceManager_o *v39; // x8
  struct BattleSequenceManager_o *v40; // x8
  _DWORD *v41; // x20
  int v42; // w8
  unsigned int v43; // w9
  __int64 v44; // x10
  struct BattleSequenceManager_o *v45; // x8
  __int64 v46; // x0
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434F841 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_B70694(&Method_System_Tuple_int__int__get_Item1__);
    sub_B70694(&Method_System_Tuple_int__int__get_Item2__);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__2__);
    sub_B70694(&BattleSequenceManager___c__DisplayClass74_1_TypeInfo);
    sub_B70694(&StringLiteral_9712/*"NoblePhantasm_"*/);
    byte_434F841 = 1;
  }
  overwriteSvtVoiceId = 0;
  v7 = sub_B70764(BattleSequenceManager___c__DisplayClass74_1_TypeInfo);
  BattleSequenceManager___c__DisplayClass74_1___ctor((BattleSequenceManager___c__DisplayClass74_1_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_31;
  *(_QWORD *)(v7 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 16) = obj;
  v16 = (System_Int32_array ***)(v7 + 16);
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)obj, v17, v18, v19, v20, v21, v22);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v29 = *v16;
  *((_QWORD *)_4__this + 10) = *v16;
  sub_B70630((BattleServantConfConponent_o *)((char *)_4__this + 80), v29, v23, v24, v25, v26, v27, v28);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_31;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_31;
  battleSvtData = battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_31;
  battleSvtData->fields.seqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item1 & ~(paramsFromMstTDSeqWeight->fields.m_Item1 >> 31);
  v32 = this->fields.battleActor;
  if ( !v32 )
    goto LABEL_31;
  v33 = v32->fields.battleSvtData;
  if ( !v33 )
    goto LABEL_31;
  v33->fields.groupSeqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item2 & ~(paramsFromMstTDSeqWeight->fields.m_Item2 >> 31);
  _4__this = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_31;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v34 = this->fields.__4__this;
    if ( !v34 )
      goto LABEL_31;
    overwriteSvtVoiceId = v34->fields.overwriteSvtVoiceId;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v36 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v37 = System_String__Concat_44758168((System_String_o *)StringLiteral_9712/*"NoblePhantasm_"*/, v36, 0LL);
  v38 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_31;
  SoundManager__LoadAudioAssetStorage(Instance, v37, v38, 1, 0LL);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_31;
  _4__this = v39->fields.seqObject;
  if ( !_4__this )
    goto LABEL_31;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_31;
  v41 = _4__this;
  v40->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v41 )
    goto LABEL_31;
  v42 = v41[6];
  if ( v42 < 1 )
    return;
  v43 = 0;
  while ( 1 )
  {
    if ( v43 >= v42 )
    {
      v46 = sub_B70798(_4__this);
      sub_B70738(v46, 0LL);
    }
    v44 = *(_QWORD *)&v41[2 * v43 + 8];
    if ( !v44 )
      goto LABEL_31;
    if ( !*(_DWORD *)(v44 + 56) && *(_BYTE *)(v44 + 61) )
      break;
    if ( (int)++v43 >= v42 )
      return;
  }
  v45 = this->fields.__4__this;
  if ( !v45 )
LABEL_31:
    sub_B7076C(_4__this, v9);
  v45->fields.isNoDamageMotionInDamageNoble = 1;
}


void __fastcall BattleSequenceManager___c__DisplayClass74_1___ctor(
        BattleSequenceManager___c__DisplayClass74_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass74_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _QWORD *monitor; // x8
  __int64 v4; // x8
  System_String_o *v5; // x20
  int CS___8__locals1; // w8
  BattleSequenceManager___c__DisplayClass74_1_o *v7; // x21
  unsigned int v8; // w23
  int v9; // w24
  UnityEngine_Behaviour_o *v10; // x22
  void *v11; // x8
  BattleSequenceManager_o *v12; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_434ECF1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_B70694(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_434ECF1 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_20;
  v4 = monitor[2];
  if ( !v4 )
    goto LABEL_20;
  this = *(BattleSequenceManager___c__DisplayClass74_1_o **)(v4 + 80);
  if ( !this )
    goto LABEL_20;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  CS___8__locals1 = (int)this->fields.CS___8__locals1;
  v7 = this;
  if ( CS___8__locals1 >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v8 >= CS___8__locals1 )
      {
        v14 = sub_B70798(this);
        sub_B70738(v14, 0LL);
      }
      v10 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v7->fields.__9__4 + (int)v8);
      if ( !v10 )
        break;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v10->klass[1]._2.typeHierarchy)(
                                                                v10,
                                                                v10->klass[1]._2.unity_user_data);
      if ( (v9 & (unsigned int)this & 1) != 0 )
      {
        v5 = (System_String_o *)v10[2].monitor;
        v9 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
      }
      CS___8__locals1 = (int)v7->fields.CS___8__locals1;
      if ( (int)++v8 >= CS___8__locals1 )
        goto LABEL_15;
    }
LABEL_20:
    sub_B7076C(this, method);
  }
LABEL_15:
  v11 = v2[1].monitor;
  if ( !v11 )
    goto LABEL_20;
  v12 = (BattleSequenceManager_o *)*((_QWORD *)v11 + 2);
  v13 = (System_Action_o *)v2[2].monitor;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v13, v2, Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__3__, 0LL);
    v2[2].monitor = v13;
    sub_B70630(&v2[2].monitor);
  }
  if ( !v12 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v12, v5, v13, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass74_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass74_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass74_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v5; // x8
  struct BattleSequenceManager_o *v6; // x8
  BattleSequenceManager___c__DisplayClass74_1_o *v7; // x20
  struct BattleSequenceManager___c__DisplayClass74_0_o *v8; // x8
  struct BattleSequenceManager_o *v9; // x8
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  struct BattleSequenceManager___c__DisplayClass74_0_o *v12; // x8
  struct BattleSequenceManager_o *v13; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x21
  struct BattleSequenceManager___c__DisplayClass74_0_o *v16; // x8
  struct BattleSequenceManager_o *v17; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v19; // x22
  struct BattleSequenceManager___c__DisplayClass74_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass74_0_o *v23; // x8
  struct BattleSequenceManager_o *v24; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v25; // x8
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int klass; // w21
  struct BattleSequenceManager___c__DisplayClass74_0_o *v29; // x8
  struct BattleSequenceManager_o *v30; // x20
  struct BattleSequenceManager___c__DisplayClass74_0_o *v31; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v34; // x1
  struct BattleSequenceManager___c__DisplayClass74_0_o *v35; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v36; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v37; // x8
  struct BattleSequenceManager_o *v38; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v39; // x8
  struct BattleSequenceManager_o *v40; // x8
  UnityEngine_Object_o *v41; // x20
  struct BattleSequenceManager___c__DisplayClass74_0_o *v42; // x8
  struct BattleSequenceManager_o *v43; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v44; // x8
  struct BattleSequenceManager_o *v45; // x8
  UIStandFigureM_o *v46; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  struct BattleSequenceManager___c__DisplayClass74_0_o *v51; // x8

  v2 = this;
  if ( (byte_434ECF2 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)sub_B70694(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__4__);
    byte_434ECF2 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_80;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_80;
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_80;
  v7 = this;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)v6->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_80;
  v9 = v8->fields.__4__this;
  if ( !v9 )
    goto LABEL_80;
  v10 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)v9->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v7,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(
                                                              ComponentInChildren_Dropdown_DropdownItem,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v31 = v2->fields.CS___8__locals1;
      if ( !v31 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)v31->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v31->fields.onComplete;
      obj = v2->fields.obj;
      v34 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_Dropdown_DropdownItem;
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_77;
      v35 = v2->fields.CS___8__locals1;
      if ( !v35 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)v35->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v35->fields.onComplete;
      obj = v2->fields.obj;
      v34 = (WellFired_USFGOPlayCutInBase_o *)v10;
    }
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v34,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    goto LABEL_77;
  }
  v12 = v2->fields.CS___8__locals1;
  if ( !v12 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_80;
  v13 = v12->fields.__4__this;
  if ( !v13 )
    goto LABEL_80;
  v13->fields.faceType = (int32_t)v7[1].monitor;
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_80;
  v15 = v14->fields.__4__this;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  v16 = v2->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_80;
  v17 = v16->fields.__4__this;
  if ( !v17 )
    goto LABEL_80;
  performance = v17->fields.performance;
  if ( !performance )
    goto LABEL_80;
  v19 = (StandFigureManager_o *)this;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)performance->fields.root_field;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !v19 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)StandFigureManager__CreateMeshLocal(
                                                            v19,
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !v15 )
    goto LABEL_80;
  v15->fields.standFigure = (struct UIStandFigureM_o *)this;
  sub_B70630(&v15->fields.standFigure);
  v20 = v2->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_80;
  v21 = v20->fields.__4__this;
  if ( !v21 )
    goto LABEL_80;
  standFigure = (UnityEngine_Object_o *)v21->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v23 = v2->fields.CS___8__locals1;
    if ( v23 )
    {
      v24 = v23->fields.__4__this;
      if ( v24 )
      {
        v24->fields.loadStandFigureId = (int32_t)v7[1].klass;
        v25 = v2->fields.CS___8__locals1;
        if ( v25 )
        {
          battleActor = v25->fields.battleActor;
          if ( battleActor )
          {
            battleSvtData = battleActor->fields.battleSvtData;
            if ( battleSvtData )
            {
              this = (BattleSequenceManager___c__DisplayClass74_1_o *)battleSvtData->fields.svtdata;
              if ( this )
              {
                klass = (int)v7[1].klass;
                this = (BattleSequenceManager___c__DisplayClass74_1_o *)ServantEntity__GetTrueSvtId(
                                                                          (ServantEntity_o *)this,
                                                                          0LL);
                if ( klass == (_DWORD)this
                  || (this = (BattleSequenceManager___c__DisplayClass74_1_o *)HIDWORD(v7[1].klass), (_DWORD)this == -1) )
                {
                  v36 = v2->fields.CS___8__locals1;
                  if ( !v36 )
                    goto LABEL_80;
                  this = (BattleSequenceManager___c__DisplayClass74_1_o *)v36->fields.battleActor;
                  if ( !this )
                    goto LABEL_80;
                  v30 = v36->fields.__4__this;
                  this = (BattleSequenceManager___c__DisplayClass74_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                            (BattleActorControl_o *)this,
                                                                            0LL);
                  if ( !v30 )
                    goto LABEL_80;
                }
                else
                {
                  v29 = v2->fields.CS___8__locals1;
                  if ( !v29 )
                    goto LABEL_80;
                  v30 = v29->fields.__4__this;
                  if ( !v30 )
                    goto LABEL_80;
                }
                v30->fields.loadStandFigureLimitCount = (int)this;
                v37 = v2->fields.CS___8__locals1;
                if ( v37 )
                {
                  v38 = v37->fields.__4__this;
                  if ( v38 )
                  {
                    this = (BattleSequenceManager___c__DisplayClass74_1_o *)v38->fields.standFigure;
                    if ( this )
                    {
                      this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                      v39 = v2->fields.CS___8__locals1;
                      if ( v39 )
                      {
                        v40 = v39->fields.__4__this;
                        if ( v40 )
                        {
                          v41 = (UnityEngine_Object_o *)this;
                          this = (BattleSequenceManager___c__DisplayClass74_1_o *)StandFigureManager__CreateStandFigureMName(
                                                                                    v40->fields.loadStandFigureId,
                                                                                    v40->fields.loadStandFigureLimitCount,
                                                                                    0LL);
                          if ( v41 )
                          {
                            UnityEngine_Object__set_name(v41, (System_String_o *)this, 0LL);
                            v42 = v2->fields.CS___8__locals1;
                            if ( v42 )
                            {
                              v43 = v42->fields.__4__this;
                              if ( v43 )
                              {
                                this = (BattleSequenceManager___c__DisplayClass74_1_o *)v43->fields.standFigure;
                                if ( this )
                                {
                                  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
                                  v44 = v2->fields.CS___8__locals1;
                                  if ( v44 )
                                  {
                                    v45 = v44->fields.__4__this;
                                    if ( v45 )
                                    {
                                      v46 = v45->fields.standFigure;
                                      loadStandFigureId = v45->fields.loadStandFigureId;
                                      loadStandFigureLimitCount = v45->fields.loadStandFigureLimitCount;
                                      faceType = v45->fields.faceType;
                                      _9__4 = v2->fields.__9__4;
                                      if ( !_9__4 )
                                      {
                                        _9__4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          _9__4,
                                          (Il2CppObject *)v2,
                                          Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__4__,
                                          0LL);
                                        v2->fields.__9__4 = _9__4;
                                        sub_B70630(&v2->fields.__9__4);
                                      }
                                      if ( v46 )
                                      {
                                        this = (BattleSequenceManager___c__DisplayClass74_1_o *)UIStandFigureM__SetCharacter_40769980(
                                                                                                  v46,
                                                                                                  loadStandFigureId,
                                                                                                  loadStandFigureLimitCount,
                                                                                                  faceType,
                                                                                                  _9__4,
                                                                                                  1,
                                                                                                  0LL);
                                        if ( ((unsigned __int8)this & 1) != 0 )
                                          return;
                                        goto LABEL_77;
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
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_80:
    sub_B7076C(this, method);
  }
LABEL_77:
  v51 = v2->fields.CS___8__locals1;
  if ( !v51 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)v51->fields.__4__this;
  if ( !this )
    goto LABEL_80;
  BattleSequenceManager__LoadEndStandFigure(
    (BattleSequenceManager_o *)this,
    v2->fields.obj,
    v51->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass74_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass74_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_B7076C(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass75_0___ctor(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass75_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass75_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_0___ctor(
        BattleSequenceManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  BattleSequenceManager__LoadEndStandFigure(_4__this, this->fields.obj, this->fields.onComplete, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager_onGameObjectLoadComplete___ctor(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall BattleSequenceManager_onGameObjectLoadComplete__BeginInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)obj;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  BattleSequenceManager_onGameObjectLoadComplete_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  UnityEngine_GameObject_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(UnityEngine_GameObject_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, UnityEngine_GameObject_o *, _QWORD); // x0
  BattleSequenceManager_onGameObjectLoadComplete_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(UnityEngine_GameObject_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  BattleSequenceManager_onGameObjectLoadComplete_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (BattleSequenceManager_onGameObjectLoadComplete_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(UnityEngine_GameObject_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, obj);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = obj->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B08590(obj, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))sub_B70744(v15, v28);
              (*v24)(obj, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = obj->klass;
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(obj, class_0, v9);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v14)(obj, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  obj,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(obj, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, obj, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))v21)(
                v29,
                obj,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))(*v29
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v28 + 72)
                                                                                    + 312))(
                v29,
                obj,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, __int64))v30)(v29, obj, v28);
    }
  }
}