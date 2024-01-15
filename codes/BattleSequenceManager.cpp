void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F758D & 1) == 0 )
  {
    sub_B16FFC(&BattleSequenceManager_TypeInfo, v1);
    byte_40F758D = 1;
  }
  BattleSequenceManager_TypeInfo->static_fields->defaultForceObi_16_9 = 1;
  BattleSequenceManager_TypeInfo->static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Array_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v58; // x20
  __int64 v59; // x2
  struct UnityEngine_GameObject_array *v60; // x0
  System_RuntimeFieldHandle_o v61; // 0:w1.4

  if ( (byte_40F758C & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_HashSet_string__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Object___ctor___66739992, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_Action__TypeInfo, v14);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_Object__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v19);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v20);
    sub_B16FFC(&StringLiteral_9365/*"N_{0}{1}"*/, v21);
    byte_40F758C = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v22 = (System_Array_o *)sub_B17014(BattlePerformance_BattleUIPanel___TypeInfo, 4LL, v2);
  v61.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v22, v61, 0LL);
  this->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v22;
  sub_B16F98(&this->fields.FadeTargetPanelIndexs, v22);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v27;
  sub_B16F98(&this->fields.ReleaseSoundNames, v27);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Action__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v32;
  sub_B16F98(&this->fields.DelayInvokeMethodList, v32);
  v33 = StringLiteral_9365/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9365/*"N_{0}{1}"*/;
  sub_B16F98(&this->fields.PosNodeFormatNP, v33);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Object__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Object___ctor___66739992);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v38;
  sub_B16F98(&this->fields.npEndDeleteObjects, v38);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo,
                                                                                                  v39,
                                                                                                  v40,
                                                                                                  v41,
                                                                                                  v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v43;
  sub_B16F98(&this->fields.battleTargetList, v43);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v48;
  sub_B16F98(&this->fields.createdObjects, v48);
  v53 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v49,
                                                                            v50,
                                                                            v51,
                                                                            v52);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v53,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v53;
  sub_B16F98(&this->fields.playAudioSyncGroupIndexDict, v53);
  v58 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_string__TypeInfo,
                                                                             v54,
                                                                             v55,
                                                                             v56,
                                                                             v57);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v58,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v58;
  sub_B16F98(&this->fields.playedAudioGroupIdHash, v58);
  this->fields.nowTargetAlpha = 1.0;
  v60 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 3LL, v59);
  this->fields.saveWaitEnemy = v60;
  sub_B16F98(&this->fields.saveWaitEnemy, v60);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F7571 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, actor);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v5);
    byte_40F7571 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL) )
  {
    if ( !actor )
      sub_B170D4();
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_32029680(actor, (System_String_o *)StringLiteral_23096/*"wait"*/, 0, 0LL);
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

  if ( (byte_40F7587 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_40F7587 = 1;
  }
  if ( System_String__Equals_43802488(bgmName, this->fields.BackupBgmName, 0LL) )
  {
    return 0;
  }
  else
  {
    intactBgmList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.intactBgmList;
    return !intactBgmList
        || !intactBgmList[1].monitor
        || !System_Linq_Enumerable__Contains_string_(
              intactBgmList,
              this->fields.BackupBgmName,
              (const MethodInfo_18D1D34 *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_B170D4();
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_20009328(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_20009328(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleSequenceManager___c__DisplayClass77_0_o *v12; // x20
  WebViewManager_o *Instance; // x0
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v15; // x21
  UnityEngine_Component_o *root_field; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIStandFigureM_o *MeshLocal; // x0
  UnityEngine_Component_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *v21; // x22
  System_String_o *StandFigureMName; // x0
  UIStandFigureM_o *v23; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_o *v31; // x24

  if ( (byte_40F7559 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v9);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__, v10);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo, v11);
    byte_40F7559 = 1;
  }
  v12 = (BattleSequenceManager___c__DisplayClass77_0_o *)sub_B170CC(
                                                           BattleSequenceManager___c__DisplayClass77_0_TypeInfo,
                                                           obj,
                                                           onComplete,
                                                           method,
                                                           v4);
  BattleSequenceManager___c__DisplayClass77_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_17;
  v12->fields.__4__this = this;
  sub_B16F98(&v12->fields, this);
  v12->fields.obj = obj;
  sub_B16F98(&v12->fields.obj, obj);
  v12->fields.onComplete = onComplete;
  sub_B16F98(&v12->fields.onComplete, onComplete);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_17;
  v15 = (StandFigureManager_o *)Instance;
  root_field = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !root_field )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(root_field, 0LL);
  if ( !v15 )
    goto LABEL_17;
  MeshLocal = StandFigureManager__CreateMeshLocal(v15, gameObject, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = (UnityEngine_Component_o **)&this->fields.standFigure;
  sub_B16F98(&this->fields.standFigure, MeshLocal);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    if ( *p_standFigure )
    {
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_standFigure, 0LL);
      StandFigureMName = StandFigureManager__CreateStandFigureMName(
                           this->fields.loadStandFigureId,
                           this->fields.loadStandFigureLimitCount,
                           0LL);
      if ( v21 )
      {
        UnityEngine_Object__set_name(v21, StandFigureMName, 0LL);
        if ( *p_standFigure )
        {
          UIStandFigureRender__SetDepth((UIStandFigureRender_o *)*p_standFigure, 0.0, 0LL);
          v23 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v12,
            Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v23 )
            return UIStandFigureM__SetCharacter_40866952(
                     v23,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v31,
                     1,
                     0LL);
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o **p_BackupBgmName; // x20
  struct System_String_o *v24; // x0
  System_String_o *v25; // x21
  BgmManager_o *Instance; // x0
  System_String_o *BgmName; // x0
  const MethodInfo *v28; // x3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  BgmPlayArgsGroup_o *v30; // x0
  BgmPlayArgsGroup_o *v31; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *AllArgsList_k__BackingField; // x0
  Il2CppObject *current; // x20
  float v34; // s0
  double v35; // d0
  int32_t v36; // w21
  const MethodInfo_2969008 *v37; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v39; // x2
  __int64 v40; // x0
  __int64 v41; // x2
  System_Object_array *v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v47; // x8
  BattleLogic_o *v48; // x0
  struct BattlePerformance_o *v49; // x8
  BattleLogic_o *v50; // x0
  BattleSequenceManager_c *v51; // x0
  Il2CppObject *v52; // x21
  Il2CppObject *v53; // x21
  Il2CppObject *v54; // x21
  System_Collections_Hashtable_o *v55; // x0
  System_String_o *v56; // x19
  int v57; // [xsp+4h] [xbp-7Ch] BYREF
  System_Nullable_long__o v58; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v62; // 0:x1.8
  System_Nullable_float__o v63; // 0:x2.8
  System_Nullable_long__o v64; // 0:x0.16

  if ( (byte_40F7572 & 1) == 0 )
  {
    sub_B16FFC(&BattleSequenceManager_TypeInfo, method);
    sub_B16FFC(&BgmManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v9);
    sub_B16FFC(&Method_System_Nullable_long___ctor__, v10);
    sub_B16FFC(&object___TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&float_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v16);
    sub_B16FFC(&StringLiteral_9909/*"OnChangeBgmVolume"*/, v17);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v18);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v19);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v20);
    sub_B16FFC(&iTween_TypeInfo, v21);
    byte_40F7572 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  changeFieldAfter = this->fields.changeFieldAfter;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( changeFieldAfter )
  {
    v24 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v24;
    sub_B16F98(&this->fields.BackupBgmName, v24);
  }
  v25 = *p_BackupBgmName;
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  BgmName = BgmManager__get_BgmName(Instance, 0LL);
  if ( !System_String__op_Inequality(v25, BgmName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v40 = sub_B17014(object___TypeInfo, 8LL, v39);
    if ( !v40 )
      goto LABEL_81;
    v42 = (System_Object_array *)v40;
    v43 = StringLiteral_18842/*"from"*/;
    if ( StringLiteral_18842/*"from"*/ )
    {
      v43 = sub_B170BC(StringLiteral_18842/*"from"*/, v42->obj.klass->_1.element_class);
      if ( !v43 )
        goto LABEL_82;
      v44 = StringLiteral_18842/*"from"*/;
    }
    else
    {
      v44 = 0LL;
    }
    if ( !v42->max_length )
      goto LABEL_80;
    v42->m_Items[0] = (Il2CppObject *)v44;
    sub_B16F98(v42->m_Items, v44);
    v51 = BattleSequenceManager_TypeInfo;
    if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v51 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v58.fields.value = v51->static_fields->NoblePhantasmBgmVolumeRate;
    v43 = j_il2cpp_value_box_0(float_TypeInfo, &v58);
    v52 = (Il2CppObject *)v43;
    if ( !v43 || (v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class)) != 0 )
    {
      if ( v42->max_length <= 1 )
        goto LABEL_80;
      v42->m_Items[1] = v52;
      sub_B16F98(&v42->m_Items[1], v52);
      v43 = StringLiteral_22621/*"to"*/;
      if ( StringLiteral_22621/*"to"*/ )
      {
        v43 = sub_B170BC(StringLiteral_22621/*"to"*/, v42->obj.klass->_1.element_class);
        if ( !v43 )
          goto LABEL_82;
        v44 = StringLiteral_22621/*"to"*/;
      }
      else
      {
        v44 = 0LL;
      }
      if ( v42->max_length <= 2 )
        goto LABEL_80;
      v42->m_Items[2] = (Il2CppObject *)v44;
      sub_B16F98(&v42->m_Items[2], v44);
      LODWORD(fadeTime.fields.value) = 1;
      v43 = j_il2cpp_value_box_0(int_TypeInfo, &fadeTime);
      v53 = (Il2CppObject *)v43;
      if ( !v43 || (v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class)) != 0 )
      {
        if ( v42->max_length <= 3 )
          goto LABEL_80;
        v42->m_Items[3] = v53;
        sub_B16F98(&v42->m_Items[3], v53);
        v43 = StringLiteral_22584/*"time"*/;
        if ( StringLiteral_22584/*"time"*/ )
        {
          v43 = sub_B170BC(StringLiteral_22584/*"time"*/, v42->obj.klass->_1.element_class);
          if ( !v43 )
            goto LABEL_82;
          v44 = StringLiteral_22584/*"time"*/;
        }
        else
        {
          v44 = 0LL;
        }
        if ( v42->max_length <= 4 )
          goto LABEL_80;
        v42->m_Items[4] = (Il2CppObject *)v44;
        sub_B16F98(&v42->m_Items[4], v44);
        v57 = 1056964608;
        v43 = j_il2cpp_value_box_0(float_TypeInfo, &v57);
        v54 = (Il2CppObject *)v43;
        if ( !v43 || (v43 = sub_B170BC(v43, v42->obj.klass->_1.element_class)) != 0 )
        {
          if ( v42->max_length <= 5 )
            goto LABEL_80;
          v42->m_Items[5] = v54;
          sub_B16F98(&v42->m_Items[5], v54);
          v43 = StringLiteral_21182/*"onupdate"*/;
          if ( StringLiteral_21182/*"onupdate"*/ )
          {
            v43 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v42->obj.klass->_1.element_class);
            if ( !v43 )
              goto LABEL_82;
            v44 = StringLiteral_21182/*"onupdate"*/;
          }
          else
          {
            v44 = 0LL;
          }
          if ( v42->max_length <= 6 )
            goto LABEL_80;
          v42->m_Items[6] = (Il2CppObject *)v44;
          sub_B16F98(&v42->m_Items[6], v44);
          v43 = StringLiteral_9909/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9909/*"OnChangeBgmVolume"*/ )
          {
            v44 = 0LL;
LABEL_70:
            if ( v42->max_length > 7 )
            {
              v42->m_Items[7] = (Il2CppObject *)v44;
              sub_B16F98(&v42->m_Items[7], v44);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v55 = iTween__Hash(v42, 0LL);
              iTween__ValueTo(gameObject, v55, 0LL);
              return;
            }
LABEL_80:
            sub_B17100(v43, v44, v41);
            sub_B170A0();
          }
          v43 = sub_B170BC(StringLiteral_9909/*"OnChangeBgmVolume"*/, v42->obj.klass->_1.element_class);
          if ( v43 )
          {
            v44 = StringLiteral_9909/*"OnChangeBgmVolume"*/;
            goto LABEL_70;
          }
        }
      }
    }
LABEL_82:
    sub_B170F4();
    sub_B170A0();
  }
  if ( BattleSequenceManager__ExistBackupBgmPlayGroup(
         this,
         this->fields.changeFieldAfter != 0LL,
         this->fields.BackupBgmName,
         v28) )
  {
    backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
    if ( backupBgmPlayArgsGroup )
    {
      v30 = BgmPlayArgsGroup__NullExcludedClone(backupBgmPlayArgsGroup, 0LL);
      if ( v30 )
      {
        v31 = v30;
        AllArgsList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v30->fields._AllArgsList_k__BackingField;
        if ( AllArgsList_k__BackingField )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v59,
            AllArgsList_k__BackingField,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v59,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__) )
          {
            current = v59.fields.current;
            if ( !v59.fields.current )
              sub_B170D4();
            v34 = (float)(__int64)v59.fields.current[2].klass + -800.0;
            if ( v34 == INFINITY )
              v35 = -INFINITY;
            else
              v35 = v34;
            v36 = UnityEngine_Mathf__Max_40727628(0, (int)v35, 0LL);
            fadeTime = 0LL;
            p_fadeTime = (System_Nullable_float__o)&fadeTime;
            System_Nullable_float____ctor(
              p_fadeTime,
              0.5,
              (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&v64.fields.has_value = v36;
            v58.fields.value = 0LL;
            *(_QWORD *)&v58.fields.has_value = 0LL;
            v64.fields.value = (int64_t)&v58;
            System_Nullable_long____ctor(v64, Method_System_Nullable_long___ctor__, v37);
            v63 = fadeTime;
            v62 = 0LL;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v62, v63, v58, 0LL);
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v59,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_23393932(v31, 0LL, 0LL);
          return;
        }
      }
    }
LABEL_81:
    sub_B170D4();
  }
  if ( this->fields.changeFieldAfter )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_81;
    logic = (UnityEngine_Object_o *)performance->fields.logic;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      v47 = this->fields.performance;
      if ( v47 )
      {
        v48 = v47->fields.logic;
        if ( v48 )
        {
          BattleLogic__loadBgmName(v48, 0LL, 0LL);
          v49 = this->fields.performance;
          if ( v49 )
          {
            v50 = v49->fields.logic;
            if ( v50 )
            {
              BattleLogic__PlayCurrentBgm(v50, 0.5, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_81;
    }
  }
  v56 = *p_BackupBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v56, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleSequenceManager___c__DisplayClass140_0_o *v12; // x22
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20

  if ( (byte_40F7589 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_B16FFC(&Method_System_Func_BgmPlayArgs__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BgmPlayArgs__bool__TypeInfo, v9);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__, v10);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass140_0_TypeInfo, v11);
    byte_40F7589 = 1;
  }
  v12 = (BattleSequenceManager___c__DisplayClass140_0_o *)sub_B170CC(
                                                            BattleSequenceManager___c__DisplayClass140_0_TypeInfo,
                                                            isCheckExistBgm,
                                                            checkBgmName,
                                                            method,
                                                            v4);
  BattleSequenceManager___c__DisplayClass140_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.checkBgmName = checkBgmName;
  sub_B16F98(&v12->fields, checkBgmName);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                               backupBgmPlayArgsGroup,
                                                               0LL);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BgmPlayArgs__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v14,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  __int64 v4; // x2
  BattleSequenceManager_o *v7; // x19
  struct BattlePerformance_BattleUIPanel_array *FadeTargetPanelIndexs; // x21
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  BattlePerformance_o *performance; // x0
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *v14; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v16; // x8
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0

  v7 = this;
  if ( (byte_40F7569 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7569 = 1;
  }
  FadeTargetPanelIndexs = v7->fields.FadeTargetPanelIndexs;
  v7->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_25;
  v9 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
      {
        sub_B17100(this, method, v4);
        sub_B170A0();
      }
      performance = v7->fields.performance;
      if ( !performance )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        performance,
                                        FadeTargetPanelIndexs->m_Items[v10 + 1],
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
      LODWORD(v9) = FadeTargetPanelIndexs->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  v14 = v7->fields.performance;
  if ( !v14 )
    goto LABEL_25;
  root_drop = (UnityEngine_Object_o *)v14->fields.root_drop;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(root_drop, 0LL, 0LL) )
  {
    v16 = v7->fields.performance;
    if ( !v16 )
      goto LABEL_25;
    v17 = (UnityEngine_Component_o *)v16->fields.root_drop;
    if ( !v17 )
      goto LABEL_25;
    v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !v18 )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(v18, targetAlpha == 1.0, 0LL);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  BattleSequenceManager___c__DisplayClass74_0_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  BattleSequenceManager___c_c *v44; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_0; // x23
  Il2CppObject *v47; // x24
  struct BattleSequenceManager___c_StaticFields *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x21
  System_Collections_Generic_IEnumerable_T__o *v59; // x0
  System_Collections_Generic_IEnumerable_T__o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  BattleSequenceManager___c_c *v65; // x0
  struct BattleSequenceManager___c_StaticFields *v66; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_2; // x19
  Il2CppObject *v68; // x22
  struct BattleSequenceManager___c_StaticFields *v69; // x0
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F7558 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_B16FFC(&Method_System_Comparison_USFGOPlayAudioEvent___ctor__, v7);
    sub_B16FFC(&Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__, v8);
    sub_B16FFC(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v9);
    sub_B16FFC(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v13);
    sub_B16FFC(&Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__, v14);
    sub_B16FFC(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v26);
    sub_B16FFC(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v27);
    sub_B16FFC(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__, v28);
    sub_B16FFC(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__, v29);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v30);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo, v31);
    sub_B16FFC(&BattleSequenceManager___c_TypeInfo, v32);
    byte_40F7558 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v33 = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B170CC(
                                                           BattleSequenceManager___c__DisplayClass74_0_TypeInfo,
                                                           sequence,
                                                           syncGroupName,
                                                           method,
                                                           v4);
  BattleSequenceManager___c__DisplayClass74_0___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_31;
  v33->fields.syncGroupName = syncGroupName;
  sub_B16F98(&v33->fields, syncGroupName);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_31;
  v39 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                         sequence,
                                                         (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v38 )
    goto LABEL_31;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
    v39,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v44 = BattleSequenceManager___c_TypeInfo;
  if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v44 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                                                           v40,
                                                                           v41,
                                                                           v42,
                                                                           v43);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__74_0,
      v47,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    v48 = BattleSequenceManager___c_TypeInfo->static_fields;
    v48->__9__74_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__74_0;
    sub_B16F98(&v48->__9__74_0, _9__74_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v38,
    (System_Comparison_T__o *)_9__74_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo,
                                                                             v49,
                                                                             v50,
                                                                             v51,
                                                                             v52);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)v33,
    Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v38,
          (System_Func_T__bool__o *)v53,
          (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo,
                                                                                                    v54,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v58,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    v59 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                           sequence,
                                                           (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v58 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
        v59,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v60 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                             sequence,
                                                             (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
        v60,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v65 = BattleSequenceManager___c_TypeInfo;
      if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v65 = BattleSequenceManager___c_TypeInfo;
      }
      v66 = v65->static_fields;
      _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v66->__9__74_2;
      if ( !_9__74_2 )
      {
        if ( (BYTE3(v65->vtable._0_Equals.methodPtr) & 4) != 0 && !v65->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v65);
          v66 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v68 = (Il2CppObject *)v66->__9;
        _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                               System_Comparison_USFGOPlayAudioEvent__TypeInfo,
                                                                               v61,
                                                                               v62,
                                                                               v63,
                                                                               v64);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__74_2,
          v68,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
        v69 = BattleSequenceManager___c_TypeInfo->static_fields;
        v69->__9__74_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__74_2;
        sub_B16F98(&v69->__9__74_2, _9__74_2);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v58,
        (System_Comparison_T__o *)_9__74_2,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v70,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v58,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v70,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v70.fields.current )
          sub_B170D4();
      }
      while ( (((__int64 (*)(void))v70.fields.current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v70,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_31:
    sub_B170D4();
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
  __int64 v9; // x1
  UnityEngine_GameObject_o *actor; // x0
  BattleActorControl_o *Component_srcLineSprite; // x22
  int32_t ServantId; // w0

  if ( (byte_40F755C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F755C = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_16;
  Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_srcLineSprite, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      ServantId = BattleActorControl__getServantId(Component_srcLineSprite, 0LL);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex(Component_srcLineSprite, 0LL);
      return curLimCnt;
    }
    goto LABEL_16;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_srcLineSprite )
LABEL_16:
    sub_B170D4();
  return BattleActorControl__get_LimitImageIndex(Component_srcLineSprite, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x22
  WebViewManager_o *Instance; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F757C & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&pos);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_5975/*"Enemy"*/, v9);
    sub_B16FFC(&StringLiteral_10664/*"Player"*/, v10);
    byte_40F757C = 1;
  }
  v11 = &StringLiteral_5975/*"Enemy"*/;
  if ( !isEnemy )
    v11 = &StringLiteral_10664/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v17 = pos;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v15 = System_String__Format_43739268(format, v12, v14, 0LL);
  if ( !Instance )
    sub_B170D4();
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleSequenceManager___c__DisplayClass121_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20
  UnityEngine_Transform_o *result; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40F757D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__, *(_QWORD *)&posIndex);
    sub_B16FFC(&Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__, v7);
    sub_B16FFC(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v8);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__, v9);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass121_0_TypeInfo, v10);
    byte_40F757D = 1;
  }
  v11 = (BattleSequenceManager___c__DisplayClass121_0_o *)sub_B170CC(
                                                            BattleSequenceManager___c__DisplayClass121_0_TypeInfo,
                                                            *(_QWORD *)&posIndex,
                                                            method,
                                                            v3,
                                                            v4);
  BattleSequenceManager___c__DisplayClass121_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  v11->fields.posIndex = posIndex;
  battleTargetList = this->fields.battleTargetList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)battleTargetList,
                                        (System_Predicate_T__o *)v17,
                                        (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v19 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v19 )
      return UnityEngine_GameObject__get_transform(v19, 0LL);
LABEL_9:
    sub_B170D4();
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
  sub_B16F98(fxdVoice, 0LL);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_B16F98(fxdVoice, fixedVoice);
  return 1;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *actor; // x21
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_40F7588 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7588 = 1;
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
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_18:
    sub_B170D4();
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_srcLineSprite, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v5; // x0
  UnityEngine_Object_o *webView; // x19
  WebViewManager_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  srcLineSprite_o *Component_srcLineSprite; // x19

  if ( (byte_40F758A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_40F758A = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_21;
  webView = (UnityEngine_Object_o *)v5->fields.webView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(webView, 0LL, 0LL) )
    return 0;
  v7 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v7 )
    goto LABEL_21;
  v8 = (UnityEngine_GameObject_o *)v7->fields.webView;
  if ( !v8 )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v8,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B170D4();
  return !Component_srcLineSprite[3].fields.mtIsUpdate;
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


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0

  if ( (byte_40F755A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    byte_40F755A = 1;
  }
  if ( System_String__IsNullOrEmpty(bgmName, 0LL) )
  {
    if ( callback )
    {
      System_Action__Invoke(callback, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
    (EventMissionProgressRequest_Argument_ProgressData_o *)bgmName,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
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
  UIStandFigureRender_o *v8; // x0

  if ( (byte_40F755B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, obj);
    byte_40F755B = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v8 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v8 )
      sub_B170D4();
    UIStandFigureRender__SetActive(v8, 0, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *performance; // x21
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v11; // x8
  struct BattleData_o *v12; // x8
  UnityEngine_Component_o *Component_srcLineSprite; // x20
  BattleServantData_o *monitor; // x0
  UnityEngine_Object_o *SingleTarget; // x21
  UnityEngine_GameObject_o *v16; // x0
  srcLineSprite_o *v17; // x21
  BattleServantData_o *v18; // x0
  BattleServantData_o *v19; // x0
  BattleServantData_o *v20; // x0
  __int64 *v21; // x8
  BattleServantData_o *v22; // x0
  struct BattlePerformance_o *v23; // x9
  System_String_o *v24; // x19
  BattleData_o *v25; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *TransformChild; // x19
  UnityEngine_Transform_o *v28; // x0
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  float v34; // s10
  UnityEngine_Transform_o *v35; // x0
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7578 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_18250/*"en_Parts_Up01"*/, v6);
    sub_B16FFC(&StringLiteral_18249/*"en_Parts_Under01"*/, v7);
    byte_40F7578 = 1;
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
    if ( !UnityEngine_Object__op_Equality(performance, 0LL, 0LL) )
    {
      v9 = this->fields.performance;
      if ( !v9 )
        goto LABEL_61;
      data = (UnityEngine_Object_o *)v9->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
      {
        v11 = this->fields.performance;
        if ( !v11 )
          goto LABEL_61;
        v12 = v11->fields.data;
        if ( !v12 )
          goto LABEL_61;
        if ( v12->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_61;
          Component_srcLineSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 CoreObj,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_61;
            monitor = (BattleServantData_o *)Component_srcLineSprite[17].monitor;
            if ( !monitor )
              goto LABEL_61;
            if ( BattleServantData__isMultiTargetCore(monitor, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                v16 = this->fields.SingleTarget;
                if ( !v16 )
                  goto LABEL_61;
                v17 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        v16,
                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
                {
                  if ( !v17 )
                    goto LABEL_61;
                  if ( v17[3].fields.mtIsUpdate )
                  {
                    v18 = (BattleServantData_o *)v17[3].monitor;
                    if ( !v18 )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUp(v18, 0LL) )
                      goto LABEL_43;
                    v19 = (BattleServantData_o *)v17[3].monitor;
                    if ( !v19 )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUnder(v19, 0LL) )
                    {
LABEL_43:
                      v20 = (BattleServantData_o *)v17[3].monitor;
                      if ( !v20 )
                        goto LABEL_61;
                      if ( BattleServantData__isMultiTargetUp(v20, 0LL) )
                      {
                        v21 = &StringLiteral_18250/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        v22 = (BattleServantData_o *)v17[3].monitor;
                        if ( !v22 )
                          goto LABEL_61;
                        if ( !BattleServantData__isMultiTargetUnder(v22, 0LL) )
                          return 0;
                        v21 = &StringLiteral_18249/*"en_Parts_Under01"*/;
                      }
                      v23 = this->fields.performance;
                      if ( !v23 )
                        goto LABEL_61;
                      v24 = (System_String_o *)*v21;
                      v25 = v23->fields.data;
                      transform = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
                      if ( !v25 )
                        goto LABEL_61;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v25,
                                                                    transform,
                                                                    v24,
                                                                    0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        v28 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
                        if ( v28 )
                        {
                          *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_position(v28, 0LL);
                          if ( TransformChild )
                          {
                            v32 = v29;
                            v33 = v30;
                            v34 = v31;
                            v35 = UnityEngine_Component__get_transform(TransformChild, 0LL);
                            if ( v35 )
                            {
                              position = UnityEngine_Transform__get_position(v35, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              v39 = UnityEngine_Component__get_transform(Component_srcLineSprite, 0LL);
                              if ( v39 )
                              {
                                v42.fields.x = v32 - x;
                                v42.fields.y = v33 - y;
                                v42.fields.z = v34 - z;
                                UnityEngine_Transform__set_localPosition(v39, v42, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_61:
                        sub_B170D4();
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
  BattlePerformanceBg_o *bgPerf; // x0
  System_Action_o *BgChangedCallback; // x0
  struct System_Action_o **p_BgChangedCallback; // x19

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (bgPerf = performance->fields.bgPerf) == 0LL )
    sub_B170D4();
  BattlePerformanceBg__setCutNodeNoble(bgPerf, 1, 0LL);
  BgChangedCallback = this->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = &this->fields.BgChangedCallback;
    System_Action__Invoke(BgChangedCallback, 0LL);
    *p_BgChangedCallback = 0LL;
    sub_B16F98(p_BgChangedCallback, 0LL);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v10; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v12; // x19
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x19
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  System_String_o *v26; // x20
  float v27; // s9
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0

  if ( (byte_40F756D & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_40F756D = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_B170D4();
    klass = v10->klass;
    v12 = v10;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8));
    if ( !v16 )
      sub_B170D4();
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
      {
        v18 = 0LL;
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v18;
          v19 += 4;
          if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
            goto LABEL_16;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_16:
        v20 = sub_AAFEF8(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
        break;
      v21 = *(_QWORD *)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
      {
        v22 = 0LL;
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
            goto LABEL_23;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_23:
        v24 = sub_AAFEF8(v16, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
      if ( !v25 )
        sub_B170D4();
      v26 = *(System_String_o **)(v25 + 16);
      v27 = *(float *)(v25 + 24);
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v26, v27 * newValue, 0LL);
    }
    v28 = *(_QWORD *)v16;
    if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
          goto LABEL_34;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_34:
      v31 = sub_AAFEF8(v16, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
  }
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v28; // x2
  UnityEngine_Component_o *v29; // x0
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x1
  struct BattlePerformance_o *performance; // x8
  BattleActionCamera_o *actioncamera; // x0
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *v41; // x0
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x0
  Il2CppObject *v43; // x20
  int v44; // w20
  struct System_Collections_Generic_List_GameObject__o *v45; // x0
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v48; // x21
  BattlePerformance_o *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v54; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v57; // x10
  unsigned __int64 v58; // x22
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v60; // x21
  struct System_Collections_Generic_List_bool__o *v61; // x27
  char *v62; // x8
  int v63; // w27
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  BattleFBXComponent_o *monitor; // x0
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v67; // x24
  __int64 v68; // x25
  unsigned __int64 v69; // x9
  unsigned __int64 v70; // x26
  UnityEngine_Object_o *v71; // x21
  struct BattlePerformance_o *v72; // x9
  struct UnityEngine_GameObject_array *v73; // x8
  unsigned int *v74; // x27
  __int64 v75; // x21
  struct BattlePerformance_o *v76; // x8
  struct UnityEngine_GameObject_array *v77; // x24
  __int64 v78; // x8
  unsigned __int64 v79; // x25
  UnityEngine_Object_o *v80; // x21
  struct System_Collections_Generic_List_bool__o *v81; // x28
  char *v82; // x8
  int v83; // w28
  UnityEngine_Object_o *v84; // x21
  BattleFBXComponent_o *v85; // x0
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v87; // x8
  BattleData_o *v88; // x0
  BattlePerformance_o *v89; // x0
  BattlePerformance_o *v90; // x0
  struct BattlePerformance_o *v91; // x8
  struct UnityEngine_GameObject_array *v92; // x22
  __int64 v93; // x8
  unsigned __int64 v94; // x24
  UnityEngine_Object_o *v95; // x21
  BattleActorControl_o *v96; // x0
  const MethodInfo *v97; // x2
  struct BattlePerformance_o *v98; // x8
  struct UnityEngine_GameObject_array *v99; // x22
  __int64 v100; // x8
  unsigned __int64 v101; // x24
  UnityEngine_Object_o *v102; // x21
  BattleActorControl_o *v103; // x0
  const MethodInfo *v104; // x2
  UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v107; // x2
  const MethodInfo *v108; // x1
  BattlePerformance_o *v109; // x0
  UnityEngine_Camera_o *v110; // x21
  int32_t cullingMask; // w22
  char v112; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v114; // w22
  char v115; // w0
  BattlePerformance_o *v116; // x0
  struct BattlePerformance_o *v117; // x8
  BattlePerformanceBg_o *bgPerf; // x0
  UnityEngine_GameObject_o *v119; // x21
  bool v120; // w0
  System_Uri_o *v121; // x1
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x0
  WebViewManager_o *Instance; // x0
  struct BattlePerformance_o *v124; // x8
  BattleActionCamera_o *v125; // x0
  BattlePerformance_o *v126; // x20
  int32_t CurrentGroundNo; // w0
  int32_t v128; // w21
  int32_t CurrentGroundType; // w0
  BattlePerformance_o *v130; // x0
  BattlePerformance_o *v131; // x0
  UnityEngine_GameObject_o **v132; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v133; // [xsp+8h] [xbp-B8h] BYREF
  int v134[2]; // [xsp+20h] [xbp-A0h]
  int v135; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v137; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40F756F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_USSequencer__Invoke__, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&CommonUI_TypeInfo, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Object__Clear__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__get_Count__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__get_Item__, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_9566/*"NoblePhantasm/CutIns"*/, v24);
    sub_B16FFC(&StringLiteral_2757/*"Battle2D"*/, v25);
    byte_40F756F = 1;
  }
  entity = 0LL;
  memset(&v137, 0, sizeof(v137));
  memset(&v136, 0, sizeof(v136));
  v135 = 0;
  this->fields.IsPlaying = 0;
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v26);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0LL, 0LL) )
  {
    v29 = (UnityEngine_Component_o *)this->fields.actorCamera;
    if ( !v29 )
      goto LABEL_195;
    transform = UnityEngine_Component__get_transform(v29, 0LL);
    if ( !transform )
      goto LABEL_195;
    UnityEngine_Transform__set_parent(transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v28);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v31);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v32);
  BattleSequenceManager__restoreBattleActorTransform(this, v33);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_195;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_266F3E4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v35) )
    BattleSequenceManager__CrossFadeBgm(this, v36);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v36);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_195;
  actioncamera = performance->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_195;
  BattleActionCamera__loadEffectStatus(actioncamera, 0LL);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v133,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)npEndDeleteObjects,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v137 = v133;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v137,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v137.fields.current;
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
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
  }
  v134[0] = 208;
  v135 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v137,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  v135 = 0;
  v41 = this->fields.npEndDeleteObjects;
  if ( !v41 )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v41,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_Object__Clear__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v133,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)createdObjects,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v136 = v133;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v136,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v43 = v136.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v43, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v43, 0LL);
    }
  }
  v134[0] = 284;
  v44 = ++v135;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v136,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v44 && v134[v44 - 1] == 284 )
    v135 = v44 - 1;
  v45 = this->fields.createdObjects;
  if ( !v45 )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v45,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v48 = (UnityEngine_Object_o *)*p_seqObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v48, 0LL);
    *p_seqObject = 0LL;
    sub_B16F98(&this->fields.seqObject, 0LL);
  }
  v49 = this->fields.performance;
  if ( !v49 )
    goto LABEL_195;
  BattlePerformance__FlipAll(v49, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_195;
  v54 = this->fields.performance;
  v132 = &this->fields.seqObject;
  if ( !v54 )
    goto LABEL_195;
  p_actorlist = v54->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_195;
  e_actorlist = v54->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_195;
  v57 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v57 )
  {
    if ( (int)v57 >= 1 )
    {
      v58 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v58 < max_length )
      {
        v60 = (UnityEngine_Object_o *)p_actorlist->m_Items[v58];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v50 = UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
        if ( (v50 & 1) != 0 )
        {
          v61 = this->fields.ActorActiveList;
          if ( !v61 )
            goto LABEL_195;
          if ( v58 >= (unsigned int)v61->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v60 )
            goto LABEL_195;
          v62 = (char *)v61->fields._items + v58;
          v63 = (unsigned __int8)v62[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v60, v62[32] != 0, 0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v60,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v50 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
          if ( (v50 & 1) != 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_195;
            monitor = (BattleFBXComponent_o *)Component_srcLineSprite[1].monitor;
            if ( !monitor )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect(monitor, v63 != 0, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v58 >= (int)max_length )
          goto LABEL_88;
      }
LABEL_196:
      sub_B17100(v50, v51, v52);
      sub_B170A0();
    }
    LODWORD(v58) = 0;
LABEL_88:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_195;
    v67 = 4LL;
    v68 = 8LL;
    while ( 1 )
    {
      v69 = saveWaitEnemy->max_length;
      v70 = v67 - 4;
      if ( v67 - 4 >= (int)v69 )
        break;
      if ( v70 >= v69 )
        goto LABEL_196;
      v71 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v67);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v50 = UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
      if ( (v50 & 1) != 0 )
      {
        v72 = this->fields.performance;
        if ( !v72 )
          goto LABEL_195;
        v73 = this->fields.saveWaitEnemy;
        if ( !v73 )
          goto LABEL_195;
        if ( v70 >= v73->max_length )
          goto LABEL_196;
        v74 = (unsigned int *)v72->fields.e_actorlist;
        if ( !v74 )
          goto LABEL_195;
        v75 = *((_QWORD *)&v73->obj.klass + v67);
        if ( v75 )
        {
          v50 = sub_B170BC(v75, *(_QWORD *)(*(_QWORD *)v74 + 64LL));
          if ( !v50 )
          {
            sub_B170F4();
            sub_B170A0();
          }
        }
        if ( v70 >= v74[6] )
          goto LABEL_196;
        *(_QWORD *)&v74[v68] = v75;
        sub_B16F98(&v74[v68], v75);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v67;
      v68 += 2LL;
      if ( !saveWaitEnemy )
        goto LABEL_195;
    }
    v76 = this->fields.performance;
    if ( !v76 )
      goto LABEL_195;
    v77 = v76->fields.e_actorlist;
    if ( !v77 )
      goto LABEL_195;
    v78 = *(_QWORD *)&v77->max_length;
    if ( (int)v78 >= 1 )
    {
      v79 = 0LL;
      while ( v79 < (unsigned int)v78 )
      {
        v80 = (UnityEngine_Object_o *)v77->m_Items[v79];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v50 = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
        if ( (v50 & 1) != 0 )
        {
          v81 = this->fields.ActorActiveList;
          if ( !v81 )
            goto LABEL_195;
          if ( v81->fields._size <= (unsigned int)(v58 + v79) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v80 )
            goto LABEL_195;
          v82 = (char *)v81->fields._items + (int)v58 + (int)v79;
          v83 = (unsigned __int8)v82[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v80, v82[32] != 0, 0LL);
          v84 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v80,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v50 = UnityEngine_Object__op_Inequality(v84, 0LL, 0LL);
          if ( (v50 & 1) != 0 )
          {
            if ( !v84 )
              goto LABEL_195;
            v85 = (BattleFBXComponent_o *)v84[1].monitor;
            if ( !v85 )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect(v85, v83 != 0, 0LL);
          }
        }
        LODWORD(v78) = v77->max_length;
        if ( (__int64)++v79 >= (int)v78 )
          goto LABEL_127;
      }
      goto LABEL_196;
    }
LABEL_127:
    v54 = this->fields.performance;
    if ( !v54 )
      goto LABEL_195;
  }
  data = (UnityEngine_Object_o *)v54->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
  {
    v87 = this->fields.performance;
    if ( !v87 )
      goto LABEL_195;
    v88 = v87->fields.data;
    if ( !v88 )
      goto LABEL_195;
    BattleData__PartsIntoTheBody(v88, 0LL);
  }
  v89 = this->fields.performance;
  if ( !v89 )
    goto LABEL_195;
  BattlePerformance__InitActorPosition(v89, 0LL);
  v90 = this->fields.performance;
  if ( !v90 )
    goto LABEL_195;
  BattlePerformance__resetOriginalPos(v90, 0LL);
  v91 = this->fields.performance;
  if ( !v91 )
    goto LABEL_195;
  v92 = v91->fields.p_actorlist;
  if ( !v92 )
    goto LABEL_195;
  v93 = *(_QWORD *)&v92->max_length;
  if ( (int)v93 >= 1 )
  {
    v94 = 0LL;
    while ( v94 < (unsigned int)v93 )
    {
      v95 = (UnityEngine_Object_o *)v92->m_Items[v94];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v50 = UnityEngine_Object__op_Inequality(v95, 0LL, 0LL);
      if ( (v50 & 1) != 0 )
      {
        if ( !v95 )
          goto LABEL_195;
        v96 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v95,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v96, v97);
      }
      LODWORD(v93) = v92->max_length;
      if ( (__int64)++v94 >= (int)v93 )
        goto LABEL_149;
    }
    goto LABEL_196;
  }
LABEL_149:
  v98 = this->fields.performance;
  if ( !v98 )
    goto LABEL_195;
  v99 = v98->fields.e_actorlist;
  if ( !v99 )
    goto LABEL_195;
  v100 = *(_QWORD *)&v99->max_length;
  if ( (int)v100 >= 1 )
  {
    v101 = 0LL;
    while ( v101 < (unsigned int)v100 )
    {
      v102 = (UnityEngine_Object_o *)v99->m_Items[v101];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v50 = UnityEngine_Object__op_Inequality(v102, 0LL, 0LL);
      if ( (v50 & 1) != 0 )
      {
        if ( !v102 )
          goto LABEL_195;
        v103 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)v102,
                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v103, v104);
      }
      LODWORD(v100) = v99->max_length;
      if ( (__int64)++v101 >= (int)v100 )
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
    if ( !*p_standFigure )
      goto LABEL_195;
    UIStandFigureM__Dispose(*p_standFigure, 0LL);
    *p_standFigure = 0LL;
    sub_B16F98(&this->fields.standFigure, 0LL);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v107) )
    BattleSequenceManager__ReleaseCpk(this, v108);
  v109 = this->fields.performance;
  if ( !v109 )
    goto LABEL_195;
  BattlePerformance__InitAmbientLight(v109, 0LL);
  v110 = this->fields.actorCamera;
  if ( !v110 )
    goto LABEL_195;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v112 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2757/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v110, (1 << v112) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_195;
  v114 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v115 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2757/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v114 & ~(1 << v115), 0LL);
  v116 = this->fields.performance;
  if ( !v116 )
    goto LABEL_195;
  BattlePerformance__UpdateAllShadow(v116, 0LL);
  v117 = this->fields.performance;
  if ( !v117 )
    goto LABEL_195;
  bgPerf = v117->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_195;
  BattlePerformanceBg__setCutNodeNoble(bgPerf, 0, 0LL);
  if ( this->fields.OnCompleteActorCallback )
  {
    v119 = *v132;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v120 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v119, 0LL, 0LL);
    v121 = 0LL;
    if ( v120 )
    {
      if ( !*v132 )
        goto LABEL_195;
      v121 = (System_Uri_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               *v132,
                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    }
    OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
    if ( OnCompleteActorCallback )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)OnCompleteActorCallback,
        v121,
        (const MethodInfo_24B7324 *)Method_System_Action_USSequencer__Invoke__);
      goto LABEL_184;
    }
LABEL_195:
    sub_B170D4();
  }
LABEL_184:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9566/*"NoblePhantasm/CutIns"*/, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_195;
  BYTE1(Instance[1].fields.basePanel) = 0;
  v124 = this->fields.performance;
  if ( !v124 )
    goto LABEL_195;
  v125 = v124->fields.actioncamera;
  if ( !v125 )
    goto LABEL_195;
  BattleActionCamera__setNormalMode(v125, 0LL);
  v126 = this->fields.performance;
  if ( !v126 )
    goto LABEL_195;
  CurrentGroundNo = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_195;
  v128 = CurrentGroundNo;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v126, v128, CurrentGroundType, 0, 0LL);
  v130 = this->fields.performance;
  if ( !v130 )
    goto LABEL_195;
  BattlePerformance__ResetCameraClippingRange(v130, 1, 0LL);
  v131 = this->fields.performance;
  if ( !v131 )
    goto LABEL_195;
  BattlePerformance__releaseChangeBgAssets(v131, 0LL);
}


void __fastcall BattleSequenceManager__OverwriteStartTimeToSavedBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BgmPlayArgsGroup_o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v16; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v17; // x20
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v18; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v20; // x19
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x19
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  BattleSequenceManager___c__DisplayClass111_0_o *v33; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x23
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo_2969008 *v45; // x3
  BgmPlayArgs_o *args; // x21
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  System_Nullable_long__o v51; // [xsp+8h] [xbp-68h] BYREF
  __int64 v52; // [xsp+18h] [xbp-58h]
  System_Nullable_float__o v53; // 0:x1.8
  System_Nullable_float__o v54; // 0:x2.8
  System_Nullable_long__o v55; // 0:x0.16

  if ( (byte_40F7574 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_B16FFC(&BgmManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_B16FFC(&Method_System_Func_BgmPlayArgs__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BgmPlayArgs__bool__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Nullable_long___ctor__, v11);
    sub_B16FFC(
      &Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v12);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass111_0_TypeInfo, v13);
    byte_40F7574 = 1;
  }
  HIDWORD(v52) = 0;
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v14 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v14 )
    {
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(v14, 0LL);
      v16 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
              v15,
              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v17 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)v16,
            (v18 = BgmPlayArgsGroup__AllArgsListNullExcluded(this->fields.backupBgmPlayArgsGroup, 0LL)) == 0LL) )
      {
        sub_B170D4();
      }
      klass = v18->klass;
      v20 = v18;
      if ( *(_WORD *)&v18->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v21;
          p_offset += 4;
          if ( v21 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_AAFEF8(v18, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
              v20,
              *(_QWORD *)(p_method + 8));
      if ( !v24 )
        sub_B170D4();
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v26 = 0LL;
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v26;
            v27 += 4;
            if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_21;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_21:
          v28 = sub_AAFEF8(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v33 = (BattleSequenceManager___c__DisplayClass111_0_o *)sub_B170CC(
                                                                  BattleSequenceManager___c__DisplayClass111_0_TypeInfo,
                                                                  v29,
                                                                  v30,
                                                                  v31,
                                                                  v32);
        BattleSequenceManager___c__DisplayClass111_0___ctor(v33, 0LL);
        v34 = *(_QWORD *)v24;
        if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
        {
          v35 = 0LL;
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v35;
            v36 += 4;
            if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
              goto LABEL_28;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_28:
          v37 = sub_AAFEF8(v24, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v24, *(_QWORD *)(v37 + 8));
        if ( !v33 )
          sub_B170D4();
        v33->fields.args = (struct BgmPlayArgs_o *)v38;
        sub_B16F98(&v33->fields, v38);
        v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_BgmPlayArgs__bool__TypeInfo,
                                                                                   v39,
                                                                                   v40,
                                                                                   v41,
                                                                                   v42);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v43,
          (Il2CppObject *)v33,
          Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           v17,
                                                                           (System_Func_T__bool__o *)v43,
                                                                           (const MethodInfo_18B650C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          *(_QWORD *)&v55.fields.has_value = USFGOActorBattleActionEventConditional_OverwriteParamCondition[1].klass;
        else
          *(_QWORD *)&v55.fields.has_value = 0LL;
        args = v33->fields.args;
        v51.fields.value = 0LL;
        *(_QWORD *)&v51.fields.has_value = 0LL;
        v55.fields.value = (int64_t)&v51;
        System_Nullable_long____ctor(v55, Method_System_Nullable_long___ctor__, v45);
        if ( !args )
          sub_B170D4();
        v53 = 0LL;
        v54 = 0LL;
        BgmPlayArgs__Update(args, v53, v54, v51, 0LL);
      }
      v52 = 0x1000000A3LL;
      v47 = *(_QWORD *)v24;
      if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
            goto LABEL_41;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_41:
        v50 = sub_AAFEF8(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v24, *(_QWORD *)(v50 + 8));
      if ( (_DWORD)v52 == 163 )
        v52 = 163LL;
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( (byte_40F7570 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, actor);
    byte_40F7570 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL) )
  {
    if ( !actor )
      sub_B170D4();
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantAssetLoadManager_o *Instance; // x0
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x21
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7575 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleSequenceManager__ReleaseCpk_b__112_0__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action__Add__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_9568/*"NoblePhantasm_"*/, v7);
    byte_40F7575 = 1;
  }
  v20 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v20 = overwriteSvtVoiceId;
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  v12 = System_Int32__ToString((int32_t)&v20, 0LL);
  v13 = System_String__Concat_43743732((System_String_o *)StringLiteral_9568/*"NoblePhantasm_"*/, v12, 0LL);
  if ( !ReleaseSoundNames
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__),
        DelayInvokeMethodList = this->fields.DelayInvokeMethodList,
        v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__112_0__, 0LL),
        !DelayInvokeMethodList) )
  {
LABEL_9:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DelayInvokeMethodList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Action__Add__);
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.fixedVoice = 0LL;
  sub_B16F98(&this->fields.fixedVoice, 0LL);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.intactBgmList = 0LL;
  sub_B16F98(&this->fields.intactBgmList, 0LL);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0

  if ( (byte_40F7573 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F7573 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_B16F98(&this->fields.backupBgmPlayArgsGroup, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  BattleData_o *data; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattlePerformance_o *performance; // x10
  BattleData_o *v17; // x20
  System_String_o **v18; // x8
  __int64 v19; // x9
  __int64 v20; // x25
  System_String_o *v21; // x21
  unsigned __int64 v22; // x26
  unsigned int v23; // w8
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_Object_o *v25; // x22
  WebViewManager_o *Instance; // x0
  UnityEngine_Transform_o *CharacterPosition; // x0
  UnityEngine_Transform_o *v28; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v30; // x23
  int v31; // s0
  struct BattlePerformance_o *v34; // x8
  UnityEngine_Object_o *PartsActor; // x23
  UnityEngine_Transform_o *v36; // x0
  float y; // s8
  UnityEngine_Transform_o *v38; // x23
  unsigned int v39; // s9
  int v40; // s2
  unsigned int v41; // s0
  float v42; // s1
  struct BattlePerformance_o *v43; // x8
  struct BattleData_o *v44; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7579 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_9363/*"N_Enemy2"*/, v5);
    sub_B16FFC(&StringLiteral_9364/*"N_Player2"*/, v6);
    byte_40F7579 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_61;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
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
  v11 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    return;
  v12 = this->fields.SingleTarget;
  if ( !v12 )
    goto LABEL_61;
  data = (BattleData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v12,
                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !data )
    goto LABEL_61;
  performance = this->fields.performance;
  v17 = data;
  v18 = (System_String_o **)((LOBYTE(data->fields.selectcommandlist) != 0) != Component_srcLineSprite[3].fields.mtIsUpdate
                           ? &StringLiteral_9363/*"N_Enemy2"*/
                           : &StringLiteral_9364/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_61;
  v19 = 296LL;
  if ( LOBYTE(data->fields.selectcommandlist) )
    v19 = 304LL;
  v20 = *(__int64 *)((char *)&performance->klass + v19);
  if ( !v20 )
LABEL_61:
    sub_B170D4();
  if ( (int)*(_QWORD *)(v20 + 24) >= 1 )
  {
    v21 = *v18;
    v22 = 0LL;
    v23 = *(_QWORD *)(v20 + 24);
    do
    {
      if ( v22 >= v23 )
      {
        sub_B17100(data, v14, v15);
        sub_B170A0();
      }
      v24 = *(UnityEngine_GameObject_o **)(v20 + 32 + 8 * v22);
      v25 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v24, v25, 0LL) )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !Instance )
          goto LABEL_61;
        CharacterPosition = FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v21, 0LL);
        if ( !v24 )
          goto LABEL_61;
        v28 = CharacterPosition;
        transform = UnityEngine_GameObject__get_transform(v24, 0LL);
        if ( !v28 )
          goto LABEL_61;
        v30 = transform;
        *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_position(v28, 0LL);
        if ( !v30 )
          goto LABEL_61;
        UnityEngine_Transform__set_position(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
        v34 = this->fields.performance;
        if ( !v34 )
          goto LABEL_61;
        data = v34->fields.data;
        if ( !data )
          goto LABEL_61;
        if ( data->fields.isMultiTargetBattle && LOBYTE(v17->fields.selectcommandlist) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 1, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
          if ( ((unsigned __int8)data & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_61;
            v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            if ( !v36 )
              goto LABEL_61;
            position = UnityEngine_Transform__get_position(v36, 0LL);
            y = position.fields.y;
            v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            v39 = (unsigned int)UnityEngine_Transform__get_position(v28, 0LL);
            *(UnityEngine_Vector3_o *)(&v40 - 2) = UnityEngine_Transform__get_position(v28, 0LL);
            if ( !v38 )
              goto LABEL_61;
            v41 = v39;
            v42 = y;
            UnityEngine_Transform__set_position(v38, *(UnityEngine_Vector3_o *)(&v40 - 2), 0LL);
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
        data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_61;
          UnityEngine_GameObject__SetActive(v24, 0, 0LL);
          v43 = this->fields.performance;
          if ( !v43 )
            goto LABEL_61;
          v44 = v43->fields.data;
          if ( !v44 )
            goto LABEL_61;
          if ( v44->fields.isMultiTargetBattle && LOBYTE(v17->fields.selectcommandlist) )
            UnityEngine_GameObject__SetActive(v24, 1, 0LL);
        }
      }
      v23 = *(_DWORD *)(v20 + 24);
      ++v22;
    }
    while ( (__int64)v22 < (int)v23 );
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
    sub_B170D4();
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_B16F98(&this->fields.changeFieldAfter, actionData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v8; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v10; // x8
  BattleActorControl_o *targetActor; // x0
  UnityEngine_GameObject_o *actor; // x0
  BattleActorControl_o *Component_srcLineSprite; // x0

  if ( (byte_40F7585 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_40F7585 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_20;
  v8 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = battleTargetList->fields._items->m_Items[v8];
    if ( v10 )
    {
      targetActor = v10->fields.targetActor;
      if ( targetActor )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip(targetActor, 0LL);
        else
          BattleActorControl__setAuraFlip(targetActor, targetActor->fields.isEnemy, 0LL);
        battleTargetList = this->fields.battleTargetList;
        ++v8;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_20;
  }
  if ( isReset )
  {
    actor = this->fields.actor;
    if ( actor )
    {
      Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          actor,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( Component_srcLineSprite )
      {
        BattleActorControl__resetAuraFlip(Component_srcLineSprite, 0LL);
        return;
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.fixedVoice = voiceId;
  sub_B16F98(&this->fields.fixedVoice, voiceId);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  BgmMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_String_array *BgmNameListWithIds; // x0

  if ( (byte_40F7586 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F7586 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds(MasterData_WarQuestSelectionMaster, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_B16F98(&this->fields.intactBgmList, BgmNameListWithIds);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetMultiTargetBattleEnemy(
        BattleSequenceManager_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  struct BattleData_o *data; // x8
  BattleServantData_o *battleSvtData; // x0
  BattleServantData_o *v8; // x0
  struct BattlePerformance_o *v9; // x8
  BattleData_o *v10; // x0
  UnityEngine_Component_o *PartsActor; // x21
  UnityEngine_Transform_o *transform; // x0
  struct BattlePerformance_o *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Transform_o *v16; // x19
  int v17; // s0

  if ( (byte_40F7577 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, targetActor);
    byte_40F7577 = 1;
  }
  performance = this->fields.performance;
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
  battleSvtData = targetActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_25;
  if ( !BattleServantData__isMultiTargetUp(battleSvtData, 0LL) )
  {
    v8 = targetActor->fields.battleSvtData;
    if ( !v8 )
      goto LABEL_25;
    if ( !BattleServantData__isMultiTargetUnder(v8, 0LL) )
      return;
  }
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0LL )
LABEL_25:
    sub_B170D4();
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor(v10, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v13 = this->fields.performance;
    if ( v13 )
    {
      if ( transform )
      {
        UnityEngine_Transform__set_parent(transform, v13->fields.root_field, 0LL);
        if ( PartsActor )
        {
          v14 = UnityEngine_Component__get_transform(PartsActor, 0LL);
          v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
          if ( v14 )
          {
            UnityEngine_Transform__set_parent(v14, v15, 0LL);
            v16 = UnityEngine_Component__get_transform(PartsActor, 0LL);
            *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
            if ( v16 )
            {
              UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v9; // x3
  BattleSequenceManager_o *v10; // x0
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v13; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v15; // x8
  struct BattleActorControl_o *targetActor; // x8

  if ( (byte_40F755E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_40F755E = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               actor,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          Component_srcLineSprite,
          (BattleFBXComponent_o *)Component_srcLineSprite,
          isStart,
          v9),
        (battleTargetList = this->fields.battleTargetList) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  v13 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v13 >= size )
      break;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v15 = battleTargetList->fields._items->m_Items[v13];
    if ( v15 )
    {
      targetActor = v15->fields.targetActor;
      if ( targetActor )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(v10, targetActor->fields.fbxcomponent, isStart, v11);
        battleTargetList = this->fields.battleTargetList;
        ++v13;
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
  __int64 v6; // x1

  if ( (byte_40F755F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, fbx);
    sub_B16FFC(&StringLiteral_16147/*"_y0"*/, v6);
    byte_40F755F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL) )
  {
    if ( !fbx )
      sub_B170D4();
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16147/*"_y0"*/, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *seqObject; // x0
  WellFired_USSequencer_o *Component_srcLineSprite; // x20
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x26
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x22
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  unsigned __int64 max_length; // x8
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *v27; // x21
  unsigned __int64 v28; // x25
  unsigned __int64 v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  int v32; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F755D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1828/*"Actors/Actor"*/, v8);
    byte_40F755D = 1;
  }
  v32 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_29:
    sub_B170D4();
  Component_srcLineSprite = (WellFired_USSequencer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v32 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v32, 0LL);
    v14 = System_String__Concat_43743732((System_String_o *)StringLiteral_1828/*"Actors/Actor"*/, v13, 0LL);
    v16 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v14,
                                    Component_srcLineSprite,
                                    v14,
                                    v15);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( v17 )
    {
      if ( !playerList )
        goto LABEL_29;
      max_length = playerList->max_length;
      if ( (__int64)v11 < (int)max_length )
      {
        if ( v11 >= max_length )
        {
LABEL_30:
          sub_B17100(v17, v18, v19);
          sub_B170A0();
        }
        v21 = playerList->m_Items[v11];
        if ( !v21 )
          goto LABEL_29;
        transform = UnityEngine_GameObject__get_transform(v21, 0LL);
        if ( !v16 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v16, transform, 0LL);
      }
    }
    ++v11;
  }
  while ( v12 - 1 < 2 );
  v23 = 4LL;
  do
  {
    v32 = v23;
    v24 = System_Int32__ToString((int32_t)&v32, 0LL);
    v25 = System_String__Concat_43743732((System_String_o *)StringLiteral_1828/*"Actors/Actor"*/, v24, 0LL);
    v27 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v25,
                                    Component_srcLineSprite,
                                    v25,
                                    v26);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28 = v23 - 4;
    v17 = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
    if ( v17 )
    {
      if ( !enemyList )
        goto LABEL_29;
      v29 = enemyList->max_length;
      if ( (__int64)v28 < (int)v29 )
      {
        if ( v28 >= v29 )
          goto LABEL_30;
        v30 = (UnityEngine_GameObject_o *)*((_QWORD *)&enemyList->obj.klass + v23);
        if ( !v30 )
          goto LABEL_29;
        v31 = UnityEngine_GameObject__get_transform(v30, 0LL);
        if ( !v27 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v27, v31, 0LL);
      }
    }
    ++v23;
  }
  while ( v28 < 2 );
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleSequenceManager___c__DisplayClass114_0_o *v22; // x22
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  BattleActionData_o *msSpriteName; // x24
  System_Collections_Generic_HashSet_int__o *v30; // x25
  System_Collections_Generic_HashSet_int__o **p_targetList; // x21
  void *DamageList; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  int v35; // w8
  void *v36; // x25
  unsigned int v37; // w20
  __int64 v38; // x8
  int v39; // w8
  void *v40; // x25
  unsigned int v41; // w20
  __int64 v42; // x8
  __int64 v43; // x3
  __int64 v44; // x4
  int v45; // w8
  void *v46; // x25
  unsigned int v47; // w20
  __int64 v48; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *moveToSubMemberList; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v50; // x25
  _BOOL4 mtIsUpdate; // w20
  System_Collections_Generic_HashSet_int__o *v52; // x22
  int v53; // w27
  int i; // w28
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  srcLineSprite_o *v58; // x0
  System_Collections_Generic_HashSet_int__o *v59; // x0
  int32_t v60; // w21
  int v61; // w25
  int v62; // w8
  BattlePerformance_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  struct UnityEngine_GameObject_o *v65; // x21
  BattleActorControl_o *v66; // x23
  const MethodInfo *v67; // x2
  BattlePerformance_o *v68; // x0
  int32_t v69; // w20
  UnityEngine_GameObject_o *v70; // x21
  BattleActorControl_o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  BattleSequenceManager_BattleTarget_o *v76; // x21
  BattlePerformance_o *v77; // x0
  int32_t ServantPosIndex; // w0
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  int v80; // w25
  int v81; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v82; // [xsp+18h] [xbp-98h] BYREF
  int v83[3]; // [xsp+30h] [xbp-80h]
  int v84; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40F7576 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleActionData_MoveToSubMember___ctor__, method);
    sub_B16FFC(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, v6);
    sub_B16FFC(&BattleSequenceManager_BattleTarget_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v15);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__, v20);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo, v21);
    byte_40F7576 = 1;
  }
  memset(&j, 0, sizeof(j));
  v84 = 0;
  v22 = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B170CC(
                                                            BattleSequenceManager___c__DisplayClass114_0_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3,
                                                            v4);
  BattleSequenceManager___c__DisplayClass114_0___ctor(v22, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_B16F98(&this->fields.SingleTarget, 0LL);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_83;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    return;
  if ( !Component_srcLineSprite )
    goto LABEL_83;
  msSpriteName = (BattleActionData_o *)Component_srcLineSprite[2].fields.msSpriteName;
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !v22 )
    goto LABEL_83;
  v22->fields.targetList = v30;
  p_targetList = &v22->fields.targetList;
  sub_B16F98(&v22->fields, v30);
  if ( !msSpriteName )
    goto LABEL_83;
  DamageList = BattleActionData__getDamageList(msSpriteName, -1, 0LL);
  if ( !DamageList )
    goto LABEL_83;
  v35 = *((_DWORD *)DamageList + 6);
  v36 = DamageList;
  if ( v35 >= 1 )
  {
    v37 = 0;
    while ( v37 < v35 )
    {
      v38 = *((_QWORD *)v36 + (int)v37 + 4);
      if ( !v38 )
        goto LABEL_83;
      v33 = *(unsigned int *)(v38 + 28);
      if ( (_DWORD)v33 )
      {
        if ( !*p_targetList )
          goto LABEL_83;
        DamageList = (void *)System_Collections_Generic_HashSet_int___Add(
                               *p_targetList,
                               v33,
                               (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v35 = *((_DWORD *)v36 + 6);
      if ( (int)++v37 >= v35 )
        goto LABEL_20;
    }
LABEL_84:
    sub_B17100(DamageList, v33, v34);
    sub_B170A0();
  }
LABEL_20:
  DamageList = BattleActionData__getBuffList(msSpriteName, -1, 0LL);
  if ( !DamageList )
    goto LABEL_83;
  v39 = *((_DWORD *)DamageList + 6);
  v40 = DamageList;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( v41 < v39 )
    {
      v42 = *((_QWORD *)v40 + (int)v41 + 4);
      if ( !v42 )
        goto LABEL_83;
      v33 = *(unsigned int *)(v42 + 40);
      if ( (_DWORD)v33 )
      {
        if ( !*p_targetList )
          goto LABEL_83;
        DamageList = (void *)System_Collections_Generic_HashSet_int___Add(
                               *p_targetList,
                               v33,
                               (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v39 = *((_DWORD *)v40 + 6);
      if ( (int)++v41 >= v39 )
        goto LABEL_29;
    }
    goto LABEL_84;
  }
LABEL_29:
  DamageList = BattleActionData__getHealList(msSpriteName, -1, 0LL);
  if ( !DamageList )
    goto LABEL_83;
  v45 = *((_DWORD *)DamageList + 6);
  v46 = DamageList;
  if ( v45 >= 1 )
  {
    v47 = 0;
    while ( v47 < v45 )
    {
      v48 = *((_QWORD *)v46 + (int)v47 + 4);
      if ( !v48 )
        goto LABEL_83;
      v33 = *(unsigned int *)(v48 + 28);
      if ( (_DWORD)v33 )
      {
        if ( !*p_targetList )
          goto LABEL_83;
        DamageList = (void *)System_Collections_Generic_HashSet_int___Add(
                               *p_targetList,
                               v33,
                               (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v45 = *((_DWORD *)v46 + 6);
      if ( (int)++v47 >= v45 )
        goto LABEL_38;
    }
    goto LABEL_84;
  }
LABEL_38:
  moveToSubMemberList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)msSpriteName->fields.moveToSubMemberList;
  if ( moveToSubMemberList )
  {
    v50 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_BattleActionData_MoveToSubMember__TypeInfo,
                                                                                 v33,
                                                                                 v34,
                                                                                 v43,
                                                                                 v44);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v50,
      (Il2CppObject *)v22,
      Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      moveToSubMemberList,
      (System_Action_T__o *)v50,
      (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
  }
  mtIsUpdate = Component_srcLineSprite[3].fields.mtIsUpdate;
  v52 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v33,
                                                       v34,
                                                       v43,
                                                       v44);
  System_Collections_Generic_HashSet_int____ctor(
    v52,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( !*p_targetList )
    goto LABEL_83;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v82,
    *p_targetList,
    (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v81 = 0;
  j = v82;
  v53 = 0;
LABEL_42:
  for ( i = v53; ; ++i )
  {
    v53 = i;
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      break;
    performance = this->fields.performance;
    if ( !performance )
      sub_B170D4();
    current = (int32_t)j.fields._current;
    ServantGameObject = BattlePerformance__getServantGameObject(performance, (int32_t)j.fields._current, 0LL);
    if ( !ServantGameObject )
      sub_B170D4();
    v58 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ServantGameObject,
            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !v58 )
      sub_B170D4();
    if ( mtIsUpdate == v58[3].fields.mtIsUpdate )
    {
      ++v81;
      goto LABEL_42;
    }
    if ( !v52 )
      sub_B170D4();
    System_Collections_Generic_HashSet_int___Add(
      v52,
      current,
      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v83[0] = 391;
  v84 = 1;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v84 = 0;
  if ( v81 && i == 1 )
  {
    *p_targetList = v52;
    sub_B16F98(p_targetList, v52);
  }
  v59 = *p_targetList;
  if ( !*p_targetList )
LABEL_83:
    sub_B170D4();
  if ( v59->fields._count == 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v82,
      v59,
      (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v60 = -1;
    for ( j = v82;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          v60 = (int32_t)j.fields._current )
    {
      ;
    }
    v83[0] = 486;
    v61 = ++v84;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &j,
      (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    if ( v61 )
    {
      v62 = v61 - 1;
      if ( v83[v61 - 1] == 486 )
      {
        --v61;
        v84 = v62;
      }
    }
    v63 = this->fields.performance;
    if ( !v63 )
      goto LABEL_83;
    v64 = BattlePerformance__getServantGameObject(v63, v60, 0LL);
    if ( !v64 )
      goto LABEL_83;
    v65 = v64;
    v66 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v64,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this->fields.SingleTarget = v65;
    sub_B16F98(&this->fields.SingleTarget, v65);
    BattleSequenceManager__SetMultiTargetBattleEnemy(this, v66, v67);
    if ( !v52 )
      goto LABEL_83;
  }
  else
  {
    v61 = 0;
    if ( !v52 )
      goto LABEL_83;
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v82,
    v52,
    (const MethodInfo_21D8A88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  j = v82;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_207182C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    v68 = this->fields.performance;
    if ( !v68 )
      sub_B170D4();
    v69 = (int32_t)j.fields._current;
    v70 = BattlePerformance__getServantGameObject(v68, (int32_t)j.fields._current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v70, 0LL, 0LL) )
    {
      if ( !v70 )
        sub_B170D4();
      v71 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v70,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      v76 = (BattleSequenceManager_BattleTarget_o *)sub_B170CC(
                                                      BattleSequenceManager_BattleTarget_TypeInfo,
                                                      v72,
                                                      v73,
                                                      v74,
                                                      v75);
      BattleSequenceManager_BattleTarget___ctor(v76, 0LL);
      v77 = this->fields.performance;
      if ( !v77 )
        sub_B170D4();
      ServantPosIndex = BattlePerformance__getServantPosIndex(v77, v69, 0LL);
      if ( !v76 )
        sub_B170D4();
      BattleSequenceManager_BattleTarget__setup(v76, v71, ServantPosIndex, 0LL);
      battleTargetList = this->fields.battleTargetList;
      if ( !battleTargetList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)battleTargetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    }
  }
  v83[v61] = 651;
  v80 = ++v84;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_2071828 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v80 && v83[v80 - 1] == 651 )
    v84 = v80 - 1;
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B170D4();
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v7; // x8
  BattleInformationComponent_o *v8; // x0

  if ( (byte_40F756C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_40F756C = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_12;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(infoComp, 0LL, 0LL) )
  {
    v7 = this->fields.performance;
    if ( v7 )
    {
      v8 = v7->fields.infoComp;
      if ( v8 )
      {
        BattleInformationComponent__SwitchPopupFullScreen(v8, isFullScreen, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x21
  const MethodInfo *v13; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x4
  BaseMonoBehaviour_o *v18; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *monitor; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_Transform_o *transform; // x0
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x22
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int v27; // w22
  UnityEngine_Transform_o *v28; // x0
  UIWidget_o *v29; // x0
  BattleSyncTransformComponent_o *v30; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x1
  struct System_Collections_Generic_List_Object__o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0

  if ( (byte_40F757B & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___, tlcont);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Object__Add__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F757B = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_40;
    data = performance->fields.data;
    if ( !data )
      goto LABEL_40;
    if ( BattleData__get_IsEnemyPosCountNormal(data, 0LL) )
      return;
    if ( !tlcont )
      goto LABEL_40;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)tlcont,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
      Component_WebViewObject = (UnityEngine_Object_o *)this->fields.defaultSyncSetting;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL) )
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
                                                          this,
                                                          targetPosIndex + 3,
                                                          v13);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( v16 )
      {
        v18 = (BaseMonoBehaviour_o *)this->fields.performance;
        if ( !v18 )
          goto LABEL_40;
        dummyActorPrefab = this->fields.dummyActorPrefab;
        monitor = (UnityEngine_Transform_o *)v18[11].monitor;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               (BattleSequenceManager_o *)v16,
                               targetPosIndex + 1,
                               this->fields.PosNodeFormatNP,
                               1,
                               v17);
        Object = BaseMonoBehaviour__createObject(v18, dummyActorPrefab, monitor, TargetFieldPosNode, 0LL);
        if ( !Object )
          goto LABEL_40;
        transform = UnityEngine_GameObject__get_transform(Object, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(tlcont, transform, 0LL);
        npEndDeleteObjects = this->fields.npEndDeleteObjects;
        v25 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
        if ( !v25 )
          goto LABEL_40;
        gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)npEndDeleteObjects,
          (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Object__Add__);
        v27 = 0;
      }
      else
      {
        v27 = 1;
      }
      v28 = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
      v29 = BasicHelper__AddNotExistComponent_UIWidget_(
              v28,
              (const MethodInfo_18B5BA8 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !v29 )
        goto LABEL_40;
      v30 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)v29,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_WebViewObject,
              0LL);
      if ( v27 )
      {
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v30;
        v32 = this->fields.npEndDeleteObjects;
        if ( !v32 )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32,
          v31,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Object__Add__);
      }
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tlcont, 0LL);
      if ( v33 )
      {
        UnityEngine_GameObject__SetActive(v33, 1, 0LL);
        return;
      }
LABEL_40:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  BattleActorControl_o *monitor; // x20
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_GameObject_o *v13; // x0
  System_Collections_ICollection_o *Components_iTween; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  void *v18; // x8
  unsigned __int64 v19; // x25
  NoblePhantasmTargetOverwriteTransform_o *v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F758B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F758B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  battleTargetList = this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v22 = v21;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
    {
      if ( !v22.fields.current )
        sub_B170D4();
      monitor = (BattleActorControl_o *)v22.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)monitor, 0LL, 0LL) )
      {
        if ( !monitor )
          sub_B170D4();
        actorObject = (UnityEngine_Object_o *)monitor->fields.actorObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
        {
          v13 = monitor->fields.actorObject;
          if ( !v13 )
            sub_B170D4();
          Components_iTween = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                    v13,
                                                                    (const MethodInfo_19D178C *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_iTween, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_iTween )
              sub_B170D4();
            v18 = Components_iTween[1].monitor;
            if ( (int)v18 >= 1 )
            {
              v19 = 0LL;
              do
              {
                if ( v19 >= (unsigned int)v18 )
                {
                  sub_B17100(IsNullOrEmpty, v16, v17);
                  sub_B170A0();
                }
                v20 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_iTween[2].klass + v19);
                if ( isOverwrite )
                {
                  if ( !v20 )
                    sub_B170D4();
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v20, monitor, 0LL);
                }
                else
                {
                  if ( !v20 )
                    sub_B170D4();
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v20, monitor, 0LL);
                }
                LODWORD(v18) = Components_iTween[1].monitor;
                ++v19;
              }
              while ( (__int64)v19 < (int)v18 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  }
}


void __fastcall BattleSequenceManager__TdDelayEnd(BattleSequenceManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattleSequenceManager__CrossFadeBgm(this, method);
  BattleSequenceManager__ReleaseCpk(this, v3);
}


void __fastcall BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  float delayInvokeTimer; // s8
  float v8; // s0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v10; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7556 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_40F7556 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v8 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v8;
    if ( v8 <= 0.0 )
    {
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_13;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v11,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DelayInvokeMethodList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v11,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v11.fields.current )
          System_Action__Invoke((System_Action_o *)v11.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v11,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v10 = this->fields.DelayInvokeMethodList;
      if ( !v10 )
LABEL_13:
        sub_B170D4();
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_Action__Clear__);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleSequenceManager__WaitEndSequence_d__105_o *v6; // x20

  if ( (byte_40F756E & 1) == 0 )
  {
    sub_B16FFC(&BattleSequenceManager__WaitEndSequence_d__105_TypeInfo, method);
    byte_40F756E = 1;
  }
  v6 = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B170CC(
                                                            BattleSequenceManager__WaitEndSequence_d__105_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3,
                                                            v4);
  BattleSequenceManager__WaitEndSequence_d__105___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.__4__this = this;
  sub_B16F98(&v6->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__112_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  struct System_Collections_Generic_List_string__o *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F758E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_40F758E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ReleaseSoundNames,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v12.fields.current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v12.fields.current, 0LL) )
    {
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.ReleaseSoundNames;
  if ( !v11 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattleSequenceManager__addServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  int32_t FlagRequestNumber; // w0
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2
  BattleData_o *data; // x0

  if ( (byte_40F7561 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15842/*"_"*/, voiceMaster);
    byte_40F7561 = 1;
  }
  v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_15842/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, v9, 0, 0LL);
  if ( FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = FlagRequestNumber;
      data = performance->fields.data;
      if ( data )
      {
        BattleData__AddServantVoicePlayed_18712544(data, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
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
  __int64 v19; // x1
  BattlePerformance_o *performance; // x22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x24
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_40F756A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_40F756A = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_B16F98(&this->fields.BgChangedCallback, callback);
  performance = this->fields.performance;
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_B170D4();
  v26.fields.z = v13;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v26.fields.x = v15;
  v26.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v26, v27, 1, parentCamera, v25, 0LL);
}


bool __fastcall BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  int32_t FlagRequestNumber; // w0
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2
  BattleData_o *data; // x0

  if ( (byte_40F7563 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15842/*"_"*/, voiceMaster);
    byte_40F7563 = 1;
  }
  v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_15842/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, v9, 0, 0LL);
  if ( !FlagRequestNumber )
    return FlagRequestNumber;
  performance = this->fields.performance;
  if ( !performance || (v12 = FlagRequestNumber, (data = performance->fields.data) == 0LL) )
LABEL_9:
    sub_B170D4();
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed(data, chrId, v12, 0LL);
  return FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0
  System_Collections_Generic_Dictionary_string__int__o *v7; // x0

  if ( (byte_40F7580 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_40F7580 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
         (System_Xml_XmlQualifiedName_o *)groupName,
         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v7 = this->fields.playAudioSyncGroupIndexDict;
    if ( v7 )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               v7,
               groupName,
               (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_B170D4();
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F7582 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_40F7582 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  bool v5; // w8
  BattleActorControl_o *result; // x0
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_40F7552 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7552 = 1;
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
      sub_B170D4();
    return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v7,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x20
  UnityEngine_Object_o *v7; // x20
  WebViewManager_o *Instance; // x0

  if ( (byte_40F7555 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    byte_40F7555 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AAFCFC(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return BYTE1(Instance[1].fields.basePanel) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v4; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v7; // x8
  struct BattleData_o *v8; // x8

  if ( (byte_40F7553 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7553 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(performance, 0LL, 0LL) )
    return 0;
  v4 = this->fields.performance;
  if ( !v4 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v4->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 || (v8 = v7->fields.data) == 0LL )
LABEL_16:
    sub_B170D4();
  return v8->fields.systemflg_acceleration > 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *actor; // x20
  UnityEngine_GameObject_o *v6; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  srcLineSprite_o *v8; // x20
  BattleServantData_o *monitor; // x0
  struct BattlePerformance_o *performance; // x8
  BattleServantData_o *v11; // x0
  BattleServantData_o *v12; // x0
  BattleServantData_o *v13; // x0
  UnityEngine_Object_o *v15; // x20
  struct BattlePerformance_o *v16; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v18; // x8
  struct BattleData_o *v19; // x8

  if ( (byte_40F7554 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&OptionManager_TypeInfo, v4);
    byte_40F7554 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
  {
    v6 = this->fields.actor;
    if ( !v6 )
      goto LABEL_36;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v6,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !Component_srcLineSprite )
      goto LABEL_36;
    v8 = Component_srcLineSprite;
    monitor = (BattleServantData_o *)Component_srcLineSprite[3].monitor;
    if ( !monitor )
      goto LABEL_36;
    if ( BattleServantData__IsOnlyFirstForcedOneSpeed(monitor, 0LL) )
      return 0;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( !OptionManager__GetTDPlaySpeed(0LL) )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_36;
      v11 = (BattleServantData_o *)v8[3].monitor;
      if ( !v11 )
        goto LABEL_36;
      if ( BattleServantData__CheckFirstNpPlay(v11, performance->fields.data, 0LL) )
        return 0;
    }
    v12 = (BattleServantData_o *)v8[3].monitor;
    if ( !v12 )
      goto LABEL_36;
    if ( BattleServantData__IsNpEffectSpeedFix(v12, 0LL) )
    {
      v13 = (BattleServantData_o *)v8[3].monitor;
      if ( v13 )
        return BattleServantData__IsNpDoubleSpeed(v13, 0LL);
LABEL_36:
      sub_B170D4();
    }
  }
  v15 = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v15, 0LL, 0LL) )
    return 0;
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_36;
  data = (UnityEngine_Object_o *)v16->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_36;
  v19 = v18->fields.data;
  if ( !v19 )
    goto LABEL_36;
  if ( v19->fields.systemflg_TdConstantvelocity )
    return 0;
  return v19->fields.systemflg_acceleration > 1;
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  UnityEngine_Component_o *actorCamera; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *parent; // x0
  const MethodInfo *v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v33; // x20

  if ( (byte_40F7568 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_40F7568 = 1;
  }
  this->fields.performance = performance;
  sub_B16F98(&this->fields.performance, performance);
  this->fields.actor = actor;
  sub_B16F98(&this->fields.actor, actor);
  this->fields.playerActors = players;
  sub_B16F98(&this->fields.playerActors, players);
  this->fields.enemyActors = enemies;
  sub_B16F98(&this->fields.enemyActors, enemies);
  this->fields.actorCamera = camera;
  sub_B16F98(&this->fields.actorCamera, camera);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_B16F98(&this->fields.effectCamera, middleCamera);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_B16F98(&this->fields.cutInCamera, cutIncamera);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera || (transform = UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
LABEL_7:
    sub_B170D4();
  parent = UnityEngine_Transform__get_parent(transform, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_B16F98(&this->fields.originalCameraRoot, parent);
  this->fields.bgObject = bg;
  sub_B16F98(&this->fields.bgObject, bg);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v23);
  v28 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v24,
                                                                            v25,
                                                                            v26,
                                                                            v27);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v28,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v28;
  sub_B16F98(&this->fields.playAudioSyncGroupIndexDict, v28);
  v33 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_string__TypeInfo,
                                                                             v29,
                                                                             v30,
                                                                             v31,
                                                                             v32);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v33,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v33;
  sub_B16F98(&this->fields.playedAudioGroupIdHash, v33);
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
  if ( (byte_40F7583 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_40F7583 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_40F7565 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1824/*"Actor"*/, name);
    sub_B16FFC(&StringLiteral_16275/*"animCamLoc"*/, v4);
    byte_40F7565 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_1824/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16275/*"animCamLoc"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  BattleSequenceManager___c__DisplayClass73_0_o *v22; // x20
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  BattleActorControl_o *battleActor; // x0
  BattleActorControl_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  AssetLoader_LoadEndDataHandler_o *v31; // x19

  if ( (byte_40F7557 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__, v19);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass73_0_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_9566/*"NoblePhantasm/CutIns"*/, v21);
    byte_40F7557 = 1;
  }
  v22 = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B170CC(
                                                           BattleSequenceManager___c__DisplayClass73_0_TypeInfo,
                                                           *(_QWORD *)&chrId,
                                                           *(_QWORD *)&treasureDeviceId,
                                                           *(_QWORD *)&limitCount,
                                                           *(_QWORD *)&overwriteSvtVoiceId);
  BattleSequenceManager___c__DisplayClass73_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_11;
  v22->fields.__4__this = this;
  sub_B16F98(&v22->fields, this);
  v22->fields.onComplete = onComplete;
  v22->fields.chrId = chrId;
  v22->fields.limitCount = limitCount;
  v22->fields.treasureDeviceId = treasureDeviceId;
  v22->fields.treasureDeviceLv = treasureDeviceLv;
  v22->fields.npChargeStage = npChargeStage;
  v22->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  sub_B16F98(&v22->fields.onComplete, onComplete);
  actor = this->fields.actor;
  this->fields.chrId = v22->fields.chrId;
  this->fields.limitCount = v22->fields.limitCount;
  this->fields.treasureDeviceId = v22->fields.treasureDeviceId;
  this->fields.overwriteSvtVoiceId = v22->fields.overwriteSvtVoiceId;
  if ( !actor )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  v22->fields.battleActor = (struct BattleActorControl_o *)Component_srcLineSprite;
  sub_B16F98(&v22->fields.battleActor, Component_srcLineSprite);
  battleActor = v22->fields.battleActor;
  if ( !battleActor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex(battleActor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v22->fields.chrId,
        (v26 = v22->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex(v26, 0LL);
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29, v30);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9566/*"NoblePhantasm/CutIns"*/, v31, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__play(
        BattleSequenceManager_o *this,
        bool isOpponent,
        bool isDemoMode,
        System_Action_USSequencer__o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  struct UnityEngine_GameObject_array *v34; // x0
  UnityEngine_Object_o *seqObject; // x23
  int32_t NPSeqIdFromCachedAssetName; // w0
  int32_t chrId; // w24
  int32_t v38; // w23
  BattleSequenceManager_c *v39; // x0
  struct BattlePerformance_o *v40; // x8
  BattleActionCamera_o *actioncamera; // x0
  struct BattlePerformance_o *v42; // x8
  BattleActionCamera_o *v43; // x0
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v46; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v48; // w24
  char v49; // w0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Collections_Generic_List_bool__o *v54; // x24
  System_Collections_Generic_List_bool__o **p_ActorActiveList; // x23
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  __int64 v58; // x2
  struct BattlePerformance_o *v59; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v61; // x8
  unsigned __int64 v62; // x21
  UnityEngine_Object_o *v63; // x24
  bool v64; // w0
  System_Collections_Generic_List_bool__o *v65; // x25
  bool activeSelf; // w0
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v68; // x2
  struct BattlePerformance_o *v69; // x8
  struct UnityEngine_GameObject_array *v70; // x27
  __int64 v71; // x8
  unsigned __int64 v72; // x28
  UnityEngine_GameObject_o *v73; // x24
  BattleSequenceManager_o *v74; // x0
  const MethodInfo *v75; // x2
  srcLineSprite_o *v76; // x0
  BattleServantData_o *monitor; // x0
  unsigned int *v78; // x22
  unsigned int *v79; // x0
  struct BattlePerformance_o *v80; // x8
  struct UnityEngine_GameObject_array *v81; // x8
  Il2CppClass **v82; // x0
  System_Collections_Generic_List_bool__o *v83; // x0
  const MethodInfo_2EAFADC *v84; // x2
  bool v85; // w1
  System_Collections_Generic_List_bool__o *v86; // x25
  bool v87; // w0
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v89; // x2
  __int64 v90; // x0
  System_Object_array *v91; // x22
  Il2CppObject *v92; // x23
  BattleSequenceManager_c *v93; // x0
  Il2CppObject *v94; // x23
  Il2CppObject *v95; // x23
  System_Collections_Hashtable_o *v96; // x0
  BgmManager_o *Instance; // x0
  struct System_String_o *BgmName; // x0
  const MethodInfo *v99; // x2
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x0
  srcLineSprite_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  WellFired_USSequencer_o *v107; // x21
  struct UIAtlas_o **p_mcAtlasP; // x22
  System_Delegate_o *mcAtlasP; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v110; // x24
  System_Delegate_o *v111; // x0
  const MethodInfo *v112; // x2
  BattleSequenceManager_o *v113; // x0
  BattleActorControl_o *v114; // x1
  const MethodInfo *v115; // x2
  bool v116; // [xsp+Ch] [xbp-74h]
  struct System_Action_USSequencer__o *v117; // [xsp+10h] [xbp-70h]
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // [xsp+18h] [xbp-68h]
  int v119; // [xsp+24h] [xbp-5Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-58h] BYREF
  int v121; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_40F756B & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_B16FFC(&BattleSequenceManager_TypeInfo, v8);
    sub_B16FFC(&CommonUI_TypeInfo, v9);
    sub_B16FFC(&FSUtility_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_B16FFC(&object___TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v21);
    sub_B16FFC(&float_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v23);
    sub_B16FFC(&StringLiteral_12801/*"ShowNobleInfo"*/, v24);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v25);
    sub_B16FFC(&StringLiteral_9909/*"OnChangeBgmVolume"*/, v26);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v27);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v28);
    sub_B16FFC(&StringLiteral_2757/*"Battle2D"*/, v29);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v30);
    sub_B16FFC(&iTween_TypeInfo, v31);
    byte_40F756B = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_128;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_128;
  v34 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 e_actorlist->max_length,
                                                 isDemoMode);
  this->fields.saveWaitEnemy = v34;
  p_saveWaitEnemy = &this->fields.saveWaitEnemy;
  sub_B16F98(&this->fields.saveWaitEnemy, v34);
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
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
    chrId = this->fields.chrId;
    v38 = NPSeqIdFromCachedAssetName;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    if ( !FSUtility__IsFullScreenNP(chrId, v38, 0LL) )
    {
      v39 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v39 = BattleSequenceManager_TypeInfo;
      }
      if ( v39->static_fields->defaultForceObi_16_9 )
      {
        if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_12801/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v40 = this->fields.performance;
    if ( !v40 )
      goto LABEL_128;
    actioncamera = v40->fields.actioncamera;
    if ( !actioncamera )
      goto LABEL_128;
    BattleActionCamera__setSpecialMode(actioncamera, 0LL);
    v42 = this->fields.performance;
    this->fields.DemoMode = isDemoMode;
    if ( !v42 )
      goto LABEL_128;
    v43 = v42->fields.actioncamera;
    if ( !v43 )
      goto LABEL_128;
    BattleActionCamera__saveEffectStatus(v43, 0LL);
    actorCamera = this->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_128;
    cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
    v46 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2757/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v46), 0LL);
    effectCamera = this->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_128;
    v48 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
    v49 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2757/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v49) | v48, 0LL);
    v54 = (System_Collections_Generic_List_bool__o *)sub_B170CC(
                                                       System_Collections_Generic_List_bool__TypeInfo,
                                                       v50,
                                                       v51,
                                                       v52,
                                                       v53);
    System_Collections_Generic_List_bool____ctor(
      v54,
      (const MethodInfo_2EAED78 *)Method_System_Collections_Generic_List_bool___ctor__);
    this->fields.ActorActiveList = v54;
    p_ActorActiveList = &this->fields.ActorActiveList;
    sub_B16F98(&this->fields.ActorActiveList, v54);
    v59 = this->fields.performance;
    if ( !v59 )
      goto LABEL_128;
    p_actorlist = v59->fields.p_actorlist;
    v116 = isDemoMode;
    v117 = callback;
    if ( !p_actorlist )
      goto LABEL_128;
    v61 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v61 >= 1 )
    {
      v62 = 0LL;
      while ( v62 < (unsigned int)v61 )
      {
        v63 = (UnityEngine_Object_o *)p_actorlist->m_Items[v62];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v64 = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
        v65 = *p_ActorActiveList;
        if ( v64 )
        {
          if ( !v63 )
            goto LABEL_128;
          activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v63, 0LL);
          if ( !v65 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            v65,
            activeSelf,
            (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
          Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)v63,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            Component_srcLineSprite,
            (BattleActorControl_o *)Component_srcLineSprite,
            v68);
        }
        else
        {
          if ( !v65 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            *p_ActorActiveList,
            0,
            (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__);
        }
        LODWORD(v61) = p_actorlist->max_length;
        if ( (__int64)++v62 >= (int)v61 )
          goto LABEL_47;
      }
LABEL_129:
      sub_B17100(v56, v57, v58);
      sub_B170A0();
    }
LABEL_47:
    v69 = this->fields.performance;
    if ( !v69 )
      goto LABEL_128;
    v70 = v69->fields.e_actorlist;
    if ( !v70 )
      goto LABEL_128;
    v71 = *(_QWORD *)&v70->max_length;
    if ( (int)v71 >= 1 )
    {
      v72 = 0LL;
      while ( v72 < (unsigned int)v71 )
      {
        v73 = v70->m_Items[v72];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v73, 0LL, 0LL) )
        {
          if ( !v73 )
            goto LABEL_128;
          v74 = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v73,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(v74, (BattleActorControl_o *)v74, v75);
          v76 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                  v73,
                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !v76 )
            goto LABEL_128;
          monitor = (BattleServantData_o *)v76[3].monitor;
          if ( !monitor )
            goto LABEL_128;
          if ( BattleServantData__isDeadWaitNotAlive(monitor, 0LL) )
          {
            v78 = (unsigned int *)*p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_128;
            v56 = sub_B170BC(v73, *(_QWORD *)(*(_QWORD *)v78 + 64LL));
            if ( !v56 )
              goto LABEL_130;
            if ( v72 >= v78[6] )
              goto LABEL_129;
            v79 = &v78[2 * v72];
            *((_QWORD *)v79 + 4) = v73;
            sub_B16F98(v79 + 8, v73);
            v80 = this->fields.performance;
            if ( !v80 )
              goto LABEL_128;
            v81 = v80->fields.e_actorlist;
            if ( !v81 )
              goto LABEL_128;
            if ( v72 >= v81->max_length )
              goto LABEL_129;
            v82 = &v81->obj.klass + v72;
            v82[4] = 0LL;
            sub_B16F98(v82 + 4, 0LL);
            UnityEngine_GameObject__SetActive(v73, 0, 0LL);
            v83 = *p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_128;
            v84 = (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__;
            v85 = 1;
          }
          else
          {
            v86 = *p_ActorActiveList;
            v87 = UnityEngine_GameObject__get_activeSelf(v73, 0LL);
            if ( !v86 )
              goto LABEL_128;
            v84 = (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__;
            v85 = v87;
            v83 = v86;
          }
        }
        else
        {
          v83 = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_128;
          v84 = (const MethodInfo_2EAFADC *)Method_System_Collections_Generic_List_bool__Add__;
          v85 = 0;
        }
        System_Collections_Generic_List_bool___Add(v83, v85, v84);
        LODWORD(v71) = v70->max_length;
        if ( (__int64)++v72 >= (int)v71 )
          goto LABEL_73;
      }
      goto LABEL_129;
    }
LABEL_73:
    if ( !v116 )
      BattleSequenceManager__SearchTargetAndModifyPositions(this, v57);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(this, v57);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v90 = sub_B17014(object___TypeInfo, 8LL, v89);
    if ( !v90 )
      goto LABEL_128;
    v91 = (System_Object_array *)v90;
    v56 = StringLiteral_18842/*"from"*/;
    if ( StringLiteral_18842/*"from"*/ )
    {
      v56 = sub_B170BC(StringLiteral_18842/*"from"*/, v91->obj.klass->_1.element_class);
      if ( !v56 )
        goto LABEL_130;
      v57 = (const MethodInfo *)StringLiteral_18842/*"from"*/;
    }
    else
    {
      v57 = 0LL;
    }
    if ( !v91->max_length )
      goto LABEL_129;
    v91->m_Items[0] = (Il2CppObject *)v57;
    sub_B16F98(v91->m_Items, v57);
    v121 = 1;
    v56 = j_il2cpp_value_box_0(int_TypeInfo, &v121);
    v92 = (Il2CppObject *)v56;
    if ( !v56 || (v56 = sub_B170BC(v56, v91->obj.klass->_1.element_class)) != 0 )
    {
      if ( v91->max_length <= 1 )
        goto LABEL_129;
      v91->m_Items[1] = v92;
      sub_B16F98(&v91->m_Items[1], v92);
      v56 = StringLiteral_22621/*"to"*/;
      if ( StringLiteral_22621/*"to"*/ )
      {
        v56 = sub_B170BC(StringLiteral_22621/*"to"*/, v91->obj.klass->_1.element_class);
        if ( !v56 )
          goto LABEL_130;
        v57 = (const MethodInfo *)StringLiteral_22621/*"to"*/;
      }
      else
      {
        v57 = 0LL;
      }
      if ( v91->max_length <= 2 )
        goto LABEL_129;
      v91->m_Items[2] = (Il2CppObject *)v57;
      sub_B16F98(&v91->m_Items[2], v57);
      v93 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v93 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v93->static_fields->NoblePhantasmBgmVolumeRate;
      v56 = j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v94 = (Il2CppObject *)v56;
      if ( !v56 || (v56 = sub_B170BC(v56, v91->obj.klass->_1.element_class)) != 0 )
      {
        if ( v91->max_length <= 3 )
          goto LABEL_129;
        v91->m_Items[3] = v94;
        sub_B16F98(&v91->m_Items[3], v94);
        v56 = StringLiteral_22584/*"time"*/;
        if ( StringLiteral_22584/*"time"*/ )
        {
          v56 = sub_B170BC(StringLiteral_22584/*"time"*/, v91->obj.klass->_1.element_class);
          if ( !v56 )
            goto LABEL_130;
          v57 = (const MethodInfo *)StringLiteral_22584/*"time"*/;
        }
        else
        {
          v57 = 0LL;
        }
        if ( v91->max_length <= 4 )
          goto LABEL_129;
        v91->m_Items[4] = (Il2CppObject *)v57;
        sub_B16F98(&v91->m_Items[4], v57);
        v119 = 1050253722;
        v56 = j_il2cpp_value_box_0(float_TypeInfo, &v119);
        v95 = (Il2CppObject *)v56;
        if ( !v56 || (v56 = sub_B170BC(v56, v91->obj.klass->_1.element_class)) != 0 )
        {
          if ( v91->max_length <= 5 )
            goto LABEL_129;
          v91->m_Items[5] = v95;
          sub_B16F98(&v91->m_Items[5], v95);
          v56 = StringLiteral_21182/*"onupdate"*/;
          if ( StringLiteral_21182/*"onupdate"*/ )
          {
            v56 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v91->obj.klass->_1.element_class);
            if ( !v56 )
              goto LABEL_130;
            v57 = (const MethodInfo *)StringLiteral_21182/*"onupdate"*/;
          }
          else
          {
            v57 = 0LL;
          }
          if ( v91->max_length <= 6 )
            goto LABEL_129;
          v91->m_Items[6] = (Il2CppObject *)v57;
          sub_B16F98(&v91->m_Items[6], v57);
          v56 = StringLiteral_9909/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9909/*"OnChangeBgmVolume"*/ )
          {
            v57 = 0LL;
LABEL_112:
            if ( v91->max_length <= 7 )
              goto LABEL_129;
            v91->m_Items[7] = (Il2CppObject *)v57;
            sub_B16F98(&v91->m_Items[7], v57);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v96 = iTween__Hash(v91, 0LL);
            iTween__ValueTo(gameObject, v96, 0LL);
            Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( Instance )
            {
              BgmName = BgmManager__get_BgmName(Instance, 0LL);
              this->fields.BackupBgmName = BgmName;
              sub_B16F98(&this->fields.BackupBgmName, BgmName);
              BattleSequenceManager__TargetTransformOverwriteOrReset(this, 1, v99);
              v100 = this->fields.seqObject;
              if ( v100 )
              {
                UnityEngine_GameObject__SetActive(v100, 1, 0LL);
                v101 = this->fields.seqObject;
                if ( v101 )
                {
                  v102 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v101,
                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( v102 )
                  {
                    v107 = (WellFired_USSequencer_o *)v102;
                    p_mcAtlasP = &v102->fields.mcAtlasP;
                    mcAtlasP = (System_Delegate_o *)v102->fields.mcAtlasP;
                    v110 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_B170CC(
                                                                         WellFired_USSequencer_PlaybackDelegate_TypeInfo,
                                                                         v103,
                                                                         v104,
                                                                         v105,
                                                                         v106);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v110,
                      (Il2CppObject *)this,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v111 = System_Delegate__Combine(mcAtlasP, (System_Delegate_o *)v110, 0LL);
                    if ( v111
                      && (WellFired_USSequencer_PlaybackDelegate_c *)v111->klass != WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                    {
                      v113 = (BattleSequenceManager_o *)sub_B173C8(v111);
                      BattleSequenceManager__PrevPlayTargetActorProc(v113, v114, v115);
                    }
                    else
                    {
                      v107->fields.PlaybackFinished = (struct WellFired_USSequencer_PlaybackDelegate_o *)v111;
                      sub_B16F98(p_mcAtlasP, v111);
                      this->fields.OnCompleteActorCallback = v117;
                      sub_B16F98(&this->fields.OnCompleteActorCallback, v117);
                      WellFired_USSequencer__Play(v107, 0LL);
                      if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CommonUI_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                      }
                      if ( CommonUI__GetForceObi_16_9(0LL) )
                        BattleSequenceManager__SwitchPopupFullScreen(this, 0, v112);
                    }
                    return;
                  }
                }
              }
            }
LABEL_128:
            sub_B170D4();
          }
          v56 = sub_B170BC(StringLiteral_9909/*"OnChangeBgmVolume"*/, v91->obj.klass->_1.element_class);
          if ( v56 )
          {
            v57 = (const MethodInfo *)StringLiteral_9909/*"OnChangeBgmVolume"*/;
            goto LABEL_112;
          }
        }
      }
    }
LABEL_130:
    sub_B170F4();
    sub_B170A0();
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  BattleActorControl_o *Component_srcLineSprite; // x20
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v13; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v15; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x4
  VoiceMaster_o *v21; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v24; // x4
  __int64 v25; // x8
  unsigned __int64 v26; // x22

  if ( (byte_40F7584 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&Voice_TypeInfo, v6);
    byte_40F7584 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_35;
  Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_35;
    if ( Component_srcLineSprite->fields.isEnemy )
      return;
    battleSvtData = Component_srcLineSprite->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_35;
    if ( !battleSvtData->fields.followerType && !BattleActorControl__isNoVoice(Component_srcLineSprite, 0LL) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v11 = this->fields.performance;
        if ( !v11 )
          goto LABEL_35;
        data = (UnityEngine_Object_o *)v11->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v13);
          if ( PlayedSoundList )
          {
            v15 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v21 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Voice_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  }
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v21, chrId, FileName, v24);
                }
                v25 = *(_QWORD *)&v15->max_length;
                if ( (int)v25 >= 1 )
                {
                  v26 = 0LL;
                  do
                  {
                    if ( v26 >= (unsigned int)v25 )
                    {
                      sub_B17100(MasterData_WarQuestSelectionMaster, v18, v19);
                      sub_B170A0();
                    }
                    BattleSequenceManager__addServantVoicePlayed(this, v21, this->fields.chrId, v15->m_Items[v26], v20);
                    LODWORD(v25) = v15->max_length;
                    ++v26;
                  }
                  while ( (__int64)v26 < (int)v25 );
                }
                return;
              }
LABEL_35:
              sub_B170D4();
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
  System_String_o *v9; // x0
  int32_t FlagRequestNumber; // w0
  struct BattlePerformance_o *performance; // x8
  int32_t v12; // w2
  BattleData_o *data; // x0

  if ( (byte_40F7562 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15842/*"_"*/, voiceMaster);
    byte_40F7562 = 1;
  }
  v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_15842/*"_"*/, labelName, 0LL);
  if ( !voiceMaster )
    goto LABEL_9;
  FlagRequestNumber = VoiceMaster__getFlagRequestNumber(voiceMaster, chrId, v9, 0, 0LL);
  if ( FlagRequestNumber )
  {
    performance = this->fields.performance;
    if ( performance )
    {
      v12 = FlagRequestNumber;
      data = performance->fields.data;
      if ( data )
      {
        BattleData__removeServantVoicePlayed(data, chrId, v12, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v8; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F757F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_40F757F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v9.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v8 = this->fields.battleTargetList;
  if ( !v8 )
LABEL_11:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleSequenceManager__searchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        BattleBuffData_o *buffData,
        int32_t seqIdFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t limitCount; // w22
  UnityEngine_Object_o *Manager__loadNoblePhantasmEffect; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *v18; // x0
  UnityEngine_Object_o *v19; // x19
  bool v20; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_40F7566 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2750/*"Battle/Prefab/"*/, v13);
    byte_40F7566 = 1;
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
    v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v16,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v17 = System_String__Concat_43743732((System_String_o *)StringLiteral_2750/*"Battle/Prefab/"*/, name, 0LL);
  v18 = UnityEngine_Resources__Load(v17, 0LL);
  if ( v18 )
  {
    if ( (UnityEngine_GameObject_c *)v18->klass == UnityEngine_GameObject_TypeInfo )
      v19 = v18;
    else
      v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
  result = 0LL;
  if ( v20 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v19;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v16,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  unsigned __int64 v17; // x10
  System_Collections_IEnumerator_c **v18; // x11
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  WellFired_USTimelineContainer_o *v24; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x1
  int v27; // w8
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  int v35; // [xsp+0h] [xbp-50h]

  if ( (byte_40F7567 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v9);
    byte_40F7567 = 1;
  }
  if ( !seq || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
    sub_B170D4();
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        v18 += 2;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[v21 - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_B173C8(v20);
LABEL_39:
      sub_B170D4();
    }
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      sub_B170D4();
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v24 = (WellFired_USTimelineContainer_o *)Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B170D4();
    v25 = *(System_String_o **)&Component_srcLineSprite->fields.mtIsUpdate;
    v26 = System_String__Concat_43743732((System_String_o *)StringLiteral_871/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(v25, v26, 0LL) )
    {
      v27 = 93;
      goto LABEL_27;
    }
  }
  v24 = 0LL;
  v27 = 91;
LABEL_27:
  v35 = v27;
  v28 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_32;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_AAFEF8(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  if ( v35 == 91 )
    return 0LL;
  return v24;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0
  struct System_Collections_Generic_HashSet_string__o *playedAudioGroupIdHash; // x0

  if ( (byte_40F7581 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_40F7581 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
    (System_Xml_XmlQualifiedName_o *)groupName,
    value,
    (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playedAudioGroupIdHash = this->fields.playedAudioGroupIdHash;
  if ( !playedAudioGroupIdHash )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)playedAudioGroupIdHash,
    (WarBoardAIRoute_RouteData_o *)playSoundId,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  UnityEngine_GameObject_o *seqObject; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x19
  const MethodInfo *v82; // x3
  UnityEngine_Object_o *v83; // x22
  _BOOL8 v84; // x0
  const MethodInfo *v85; // x3
  UnityEngine_GameObject_o *actor; // x0
  UnityEngine_Transform_o *transform; // x0
  WellFired_USTimelineContainer_o *v88; // x26
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x21
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  UnityEngine_GameObject_o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  struct UnityEngine_GameObject_o *sequenceManager; // x23
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_Transform_o *v105; // x0
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x23
  UnityEngine_Component_o *AffectedObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v109; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  struct UnityEngine_Camera_o *actorCamera; // x1
  WebViewObject_o *v112; // x27
  struct System_Action_string__o **p_onJS; // x23
  struct UnityEngine_Camera_o *effectCamera; // x1
  struct UnityEngine_Camera_o *cutInCamera; // x1
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  int32_t *p_mMarginBottom; // x27
  Il2CppObject *CutInPrefab; // x23
  float v120; // s8
  float y; // s9
  float z; // s10
  float v123; // s4
  float v124; // s5
  float v125; // s6
  float w; // s7
  float v127; // s4
  float v128; // s5
  float v129; // s6
  Il2CppObject *v130; // x0
  UnityEngine_GameObject_o *v131; // x0
  const MethodInfo *v132; // x1
  const MethodInfo *v133; // x2
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  int v135; // w8
  int *v136; // x22
  int v137; // w19
  UnityEngine_Object_o *v138; // x27
  WellFired_USTimelineEvent_o *v139; // x0
  __int64 v140; // x8
  _QWORD *v141; // x26
  unsigned __int64 v142; // x25
  __int64 v143; // x28
  System_String_o *name; // x0
  _DWORD *monitor; // x8
  int32_t v146; // w23
  System_String_o *v147; // x0
  __int64 v148; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v149; // x1
  System_String_o *v150; // x0
  __int64 v151; // x9
  struct UnityEngine_Camera_o *v152; // x1
  UnityEngine_Component_o *v153; // x0
  UnityEngine_Transform_o *v154; // x0
  UnityEngine_Transform_o *parent; // x0
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  __int64 v157; // x0
  int32_t treasureDeviceId; // w27
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *Manager__loadNoblePhantasmEffect; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *v161; // x0
  __int64 v162; // x9
  __int64 v163; // x28
  struct UnityEngine_Camera_o *v164; // x1
  UnityEngine_Transform_o *v165; // x0
  UnityEngine_Transform_o *v166; // x23
  UnityEngine_Transform_o *v167; // x0
  int v168; // s0
  System_String_o *v171; // x0
  __int64 v172; // x9
  System_String_o **v173; // x23
  BattlePerformance_o *v174; // x0
  System_String_o *v175; // x0
  BattlePerformance_o *v176; // x0
  System_String_o *v177; // x0
  __int64 v178; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v179; // x23
  BattleSequenceManager_o *v180; // x0
  const MethodInfo *v181; // x3
  WellFired_USTimelineContainer_o *v182; // x0
  Il2CppObject *current; // x23
  void *Events; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  void *v187; // x24
  int v188; // w8
  int i; // w23
  WellFired_USTimelineEvent_o *v190; // x0
  _QWORD *v191; // x25
  __int64 v192; // x8
  unsigned __int64 v193; // x28
  __int64 v194; // x26
  System_String_o *v195; // x0
  __int64 v196; // x9
  UnityEngine_Component_o *v197; // x0
  UnityEngine_Transform_o *v198; // x0
  UnityEngine_Transform_o *v199; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *v201; // x8
  unsigned __int64 v202; // x10
  System_Collections_IEnumerator_c **v203; // x11
  __int64 v204; // x0
  UnityEngine_Component_o *v205; // x0
  __int64 v206; // x9
  UnityEngine_GameObject_o *v207; // x0
  srcLineSprite_o *v208; // x0
  srcLineSprite_o *v209; // x25
  System_String_o *v210; // x0
  System_String_o *v211; // x0
  System_String_o *v212; // x0
  System_String_o *v213; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v215; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v218; // x0
  __int64 v219; // x8
  __int64 v220; // x24
  unsigned __int64 v221; // x10
  int *v222; // x11
  __int64 v223; // x0
  UnityEngine_Transform_o *v224; // x0
  System_Collections_IEnumerator_o *v225; // x23
  System_Collections_IEnumerator_c *v226; // x8
  unsigned __int64 v227; // x10
  int32_t *v228; // x11
  BattleSequenceManager_o *v229; // x24
  __int64 v230; // x0
  System_Collections_IEnumerator_c *v231; // x8
  unsigned __int64 v232; // x10
  System_Collections_IEnumerator_c **v233; // x11
  __int64 v234; // x0
  UnityEngine_Component_o *v235; // x0
  __int64 v236; // x9
  UnityEngine_GameObject_o *v237; // x0
  srcLineSprite_o *v238; // x0
  WellFired_USTimelineContainer_o *v239; // x24
  System_String_o *v240; // x0
  System_String_o *affectedObjectPath; // x0
  System_String_o *v242; // x25
  int v243; // w26
  System_String_o *v244; // x0
  System_String_o *v245; // x0
  char v246; // w27
  System_String_o *v247; // x0
  System_String_o *v248; // x0
  UnityEngine_Component_o *v249; // x0
  UnityEngine_Transform_o *v250; // x0
  System_String_o *v251; // x0
  UnityEngine_GameObject_o *v252; // x0
  UnityEngine_Transform_o *v253; // x25
  System_String_o *v254; // x0
  System_String_o *v255; // x1
  UnityEngine_Transform_o *v256; // x0
  UnityEngine_Object_o *v257; // x25
  System_String_o *v258; // x0
  bool v259; // w0
  __int64 *v260; // x8
  System_String_o *v261; // x0
  bool v262; // w0
  System_String_o *v263; // x26
  UnityEngine_GameObject_o *v264; // x0
  System_String_o *v265; // x25
  UnityEngine_Transform_o *v266; // x0
  UnityEngine_Transform_o *v267; // x27
  System_Collections_IEnumerator_o *v268; // x27
  System_Collections_IEnumerator_c *v269; // x8
  unsigned __int64 v270; // x10
  int32_t *v271; // x11
  __int64 v272; // x0
  System_Collections_IEnumerator_c *v273; // x8
  unsigned __int64 v274; // x10
  System_Collections_IEnumerator_c **v275; // x11
  __int64 v276; // x0
  UnityEngine_Component_o *v277; // x0
  UnityEngine_Object_o *v278; // x28
  __int64 v279; // x9
  UnityEngine_Object_o *v280; // x0
  System_String_o *v281; // x0
  System_String_o *v282; // x0
  int v283; // w8
  System_String_o *v284; // x0
  _BOOL8 v285; // x0
  const MethodInfo *v286; // x2
  int32_t v287; // w26
  __int64 v288; // x0
  __int64 v289; // x27
  __int64 v290; // x8
  unsigned __int64 v291; // x10
  int *v292; // x11
  __int64 v293; // x0
  System_String_o *v294; // x27
  System_String_o *v295; // x0
  System_String_o *v296; // x27
  __int64 v297; // x2
  System_Char_array *v298; // x0
  __int64 v299; // x2
  System_String_array *v300; // x0
  __int64 v301; // x1
  __int64 v302; // x2
  System_String_o *v303; // x27
  UnityEngine_GameObject_o *v304; // x0
  UnityEngine_Transform_o *v305; // x26
  System_String_o *v306; // x0
  System_String_o *v307; // x0
  System_String_o *v308; // x1
  UnityEngine_Transform_o *v309; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v310; // x26
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v311; // x0
  System_String_o *v312; // x0
  System_String_o *v313; // x1
  BattleBuffData_o *v314; // x3
  const MethodInfo *v315; // x5
  _DWORD *v316; // x8
  int32_t v317; // w4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v318; // x0
  UnityEngine_Transform_o *v319; // x0
  UnityEngine_Transform_o *v320; // x0
  float v321; // s8
  float v322; // s9
  float v323; // s10
  UnityEngine_Transform_o *v324; // x27
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v326; // x1
  UnityEngine_Transform_o *v327; // x0
  BattleSequenceManager_o *v328; // x0
  const MethodInfo *v329; // x4
  int32_t v330; // w25
  UnityEngine_Transform_o *v331; // x0
  UnityEngine_Transform_o *v332; // x0
  System_String_o *v333; // x0
  System_String_o *v334; // x0
  System_String_o *v335; // x0
  const MethodInfo *v336; // x3
  int32_t v337; // w2
  const MethodInfo *v338; // x3
  WarBoardControlPlayTalkUiComponent_array *EventCount; // x0
  __int64 v340; // x1
  __int64 v341; // x2
  WarBoardControlPlayTalkUiComponent_array *v342; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v345; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v347; // x0
  UnityEngine_Object_o *v348; // x27
  System_String_o *v349; // x0
  __int64 v350; // x9
  UnityEngine_Component_o *v351; // x0
  UnityEngine_Transform_o *v352; // x0
  int32_t layer; // w25
  __int64 v354; // x0
  __int64 v355; // x8
  __int64 v356; // x23
  unsigned __int64 v357; // x10
  int *v358; // x11
  __int64 v359; // x0
  _DWORD *v360; // x8
  UnityEngine_Object_o *v361; // x21
  struct BattlePerformance_o *v362; // x8
  UnityEngine_Object_o *data; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t chrId; // w22
  VoiceMaster_o *v367; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v369; // x4
  int32_t v370; // w22
  System_String_o *v371; // x0
  const MethodInfo *v372; // x4
  _DWORD *v373; // x8
  int v374; // w20
  BalanceConfig_c *v375; // x0
  int32_t v376; // w20
  System_String_o *v377; // x0
  const MethodInfo *v378; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+0h] [xbp-140h]
  System_String_o *itema; // [xsp+0h] [xbp-140h]
  WellFired_USSequencer_o *seq; // [xsp+8h] [xbp-138h]
  char seqa; // [xsp+8h] [xbp-138h]
  int *v383; // [xsp+10h] [xbp-130h]
  int v384; // [xsp+10h] [xbp-130h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v386; // [xsp+20h] [xbp-120h]
  BattleSequenceManager_o *v387; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_T__o v388[2]; // [xsp+30h] [xbp-110h] BYREF
  int v389; // [xsp+68h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o m; // [xsp+70h] [xbp-D0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v392; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v393; // [xsp+B0h] [xbp-90h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v397; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_40F7560 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, callback);
    sub_B16FFC(&char___TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v8);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoiceMaster___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v19);
    sub_B16FFC(&System_GC_TypeInfo, v20);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v21);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v22);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v23);
    sub_B16FFC(&System_IDisposable_TypeInfo, v24);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v35);
    sub_B16FFC(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v36);
    sub_B16FFC(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v37);
    sub_B16FFC(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v38);
    sub_B16FFC(&NGUITools_TypeInfo, v39);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v40);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874920, v41);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v42);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v43);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v45);
    sub_B16FFC(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v46);
    sub_B16FFC(&WellFired_USFGOAttachToParentEvent_TypeInfo, v47);
    sub_B16FFC(&WellFired_USFGOChangeBgEvent_TypeInfo, v48);
    sub_B16FFC(&WellFired_USFGOPlayCutInEvent_TypeInfo, v49);
    sub_B16FFC(&WellFired_USFGOSetCameraEvent_TypeInfo, v50);
    sub_B16FFC(&Voice_TypeInfo, v51);
    sub_B16FFC(&StringLiteral_879/*"/Actor/chr/"*/, v52);
    sub_B16FFC(&StringLiteral_2759/*"BattleBG"*/, v53);
    sub_B16FFC(&StringLiteral_886/*"/BattleActors/"*/, v54);
    sub_B16FFC(&StringLiteral_2761/*"BattleCamera"*/, v55);
    sub_B16FFC(&StringLiteral_2763/*"BattleCutIn"*/, v56);
    sub_B16FFC(&StringLiteral_14707/*"USFGOSetCameraEvent"*/, v57);
    sub_B16FFC(&StringLiteral_1824/*"Actor"*/, v58);
    sub_B16FFC(&StringLiteral_16815/*"body_level_"*/, v59);
    sub_B16FFC(&StringLiteral_881/*"/Actor/chr/weapon_level_"*/, v60);
    sub_B16FFC(&StringLiteral_880/*"/Actor/chr/body_level_"*/, v61);
    sub_B16FFC(&StringLiteral_6320/*"FGOSequenceManager"*/, v62);
    sub_B16FFC(&StringLiteral_883/*"/AllEffects/"*/, v63);
    sub_B16FFC(&StringLiteral_17355/*"chr(Clone)"*/, v64);
    sub_B16FFC(&StringLiteral_3468/*"Cameras/BattleCamera"*/, v65);
    sub_B16FFC(&StringLiteral_14705/*"USFGOChangeBgEvent"*/, v66);
    sub_B16FFC(&StringLiteral_898/*"/BattleCamera"*/, v67);
    sub_B16FFC(&StringLiteral_901/*"/CutIns/"*/, v68);
    sub_B16FFC(&StringLiteral_2757/*"Battle2D"*/, v69);
    sub_B16FFC(&StringLiteral_900/*"/Cameras/BattleCamera"*/, v70);
    sub_B16FFC(&StringLiteral_16275/*"animCamLoc"*/, v71);
    sub_B16FFC(&StringLiteral_23166/*"weapon_level_"*/, v72);
    sub_B16FFC(&StringLiteral_608/*"(Clone)"*/, v73);
    sub_B16FFC(&StringLiteral_14704/*"USFGOAttachToParentEvent"*/, v74);
    sub_B16FFC(&StringLiteral_1/*""*/, v75);
    sub_B16FFC(&StringLiteral_878/*"/Actor/chr"*/, v76);
    sub_B16FFC(&StringLiteral_14703/*"USFGOAnimationCameraEvent"*/, v77);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v78);
    sub_B16FFC(&StringLiteral_14706/*"USFGOPlayCutInEvent"*/, v79);
    byte_40F7560 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v393, 0, sizeof(v393));
  memset(&v392, 0, sizeof(v392));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  v389 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_437;
  Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v83 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  Component_srcLineSprite,
                                  (WellFired_USSequencer_o *)Component_srcLineSprite,
                                  (System_String_o *)StringLiteral_1824/*"Actor"*/,
                                  v82);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v84 = UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
  if ( v84 )
  {
    actor = this->fields.actor;
    if ( !actor )
      goto LABEL_437;
    transform = UnityEngine_GameObject__get_transform(actor, 0LL);
    if ( !v83 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v83, transform, 0LL);
  }
  v88 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)v84,
          (WellFired_USSequencer_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_6320/*"FGOSequenceManager"*/,
          v85);
  v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo,
                                                                                                  v89,
                                                                                                  v90,
                                                                                                  v91,
                                                                                                  v92);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v93,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v386 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo,
                                                                                                   v94,
                                                                                                   v95,
                                                                                                   v96,
                                                                                                   v97);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v386,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  v98 = this->fields.actor;
  if ( !v98 )
    goto LABEL_437;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)v83;
  seq = (WellFired_USSequencer_o *)Component_srcLineSprite;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v98,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v387 = this;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v88, 0LL, 0LL) )
  {
    sequenceManager = this->fields.sequenceManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v104 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)sequenceManager,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v104 )
      goto LABEL_437;
    v105 = UnityEngine_GameObject__get_transform(v104, 0LL);
    if ( !v88 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(v88, v105, 0LL);
    createdObjects = this->fields.createdObjects;
    AffectedObject = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(v88, 0LL);
    if ( !AffectedObject )
      goto LABEL_437;
    gameObject = UnityEngine_Component__get_gameObject(AffectedObject, 0LL);
    if ( !createdObjects )
      goto LABEL_437;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)createdObjects,
      (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    v109 = (UnityEngine_Component_o *)WellFired_USTimelineContainer__get_AffectedObject(v88, 0LL);
    if ( !v109 )
      goto LABEL_437;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v109,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !Component_WebViewObject )
      goto LABEL_437;
    actorCamera = this->fields.actorCamera;
    v112 = Component_WebViewObject;
    Component_WebViewObject->fields.onJS = (struct System_Action_string__o *)actorCamera;
    p_onJS = &Component_WebViewObject->fields.onJS;
    sub_B16F98(&Component_WebViewObject->fields.onJS, actorCamera);
    effectCamera = this->fields.effectCamera;
    p_onJS[1] = (struct System_Action_string__o *)effectCamera;
    sub_B16F98(p_onJS + 1, effectCamera);
    cutInCamera = this->fields.cutInCamera;
    p_onJS[2] = (struct System_Action_string__o *)cutInCamera;
    sub_B16F98(p_onJS + 2, cutInCamera);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_437;
    fadeObject = performance->fields.fadeObject;
    *(_QWORD *)&v112->fields.mMarginBottom = fadeObject;
    p_mMarginBottom = &v112->fields.mMarginBottom;
    sub_B16F98(p_mMarginBottom, fadeObject);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v120 = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    identity = UnityEngine_Quaternion__get_identity(0LL);
    v123 = identity.fields.x;
    v124 = identity.fields.y;
    v125 = identity.fields.z;
    w = identity.fields.w;
    identity.fields.x = v120;
    identity.fields.y = y;
    identity.fields.z = z;
    identity.fields.w = v123;
    v127 = v124;
    v128 = v125;
    v129 = w;
    v130 = UnityEngine_Object__Instantiate_object_(
             CutInPrefab,
             *(UnityEngine_Vector3_o *)&identity.fields.x,
             *(UnityEngine_Quaternion_o *)&identity.fields.w,
             (const MethodInfo_19DE498 *)Method_UnityEngine_Object_Instantiate_GameObject____66874920);
    *((_QWORD *)p_mMarginBottom - 3) = v130;
    sub_B16F98(p_mMarginBottom - 6, v130);
    v131 = (UnityEngine_GameObject_o *)*((_QWORD *)p_mMarginBottom - 3);
    if ( !v131 )
      goto LABEL_437;
    UnityEngine_GameObject__SetActive(v131, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v132);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v133);
    }
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                (UnityEngine_Component_o *)v88,
                                                                1,
                                                                (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
      goto LABEL_437;
    v135 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
    v136 = (int *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    if ( v135 >= 1 )
    {
      v137 = 0;
      v138 = 0LL;
      v383 = (int *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      while ( 1 )
      {
        if ( v137 >= (unsigned int)v135 )
        {
LABEL_441:
          sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v99, v100);
          sub_B170A0();
        }
        v139 = *(WellFired_USTimelineEvent_o **)&v136[2 * v137 + 8];
        if ( !v139 )
          goto LABEL_437;
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = WellFired_USTimelineEvent__get_Events(v139, 0LL);
        if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
          goto LABEL_437;
        v140 = *((_QWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 3);
        v141 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
        if ( (int)v140 >= 1 )
          break;
LABEL_95:
        v136 = v383;
        ++v137;
        v135 = v383[6];
        if ( v137 >= v135 )
          goto LABEL_96;
      }
      v142 = 0LL;
      while ( 1 )
      {
        if ( v142 >= (unsigned int)v140 )
          goto LABEL_441;
        v143 = v141[v142 + 4];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Object__op_Equality(
                                                                            (UnityEngine_Object_o *)v143,
                                                                            0LL,
                                                                            0LL);
        if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
        {
          if ( !v143 )
            goto LABEL_437;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v143, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14703/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v138, 0LL, 0LL) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(x, 0LL, 0LL) )
              {
                if ( !x )
                  goto LABEL_437;
                monitor = x[17].monitor;
                if ( !monitor )
                  goto LABEL_437;
                v146 = monitor[174];
              }
              else
              {
                v146 = 0;
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
                                                   (System_String_o *)StringLiteral_16275/*"animCamLoc"*/,
                                                   v146,
                                                   0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v161 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                       (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect,
                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this = v387;
              if ( !v387->fields.createdObjects )
LABEL_437:
                sub_B170D4();
              v138 = (UnityEngine_Object_o *)v161;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v387->fields.createdObjects,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v161,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
            v162 = *(&WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v143 + 300LL) < (unsigned int)v162
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v143 + 200LL) + 8 * v162 - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_442:
              v235 = (UnityEngine_Component_o *)sub_B173C8(v143);
LABEL_443:
              v205 = (UnityEngine_Component_o *)sub_B173C8(v235);
LABEL_444:
              sub_B173C8(v205);
LABEL_445:
              sub_B170D4();
            }
            *(_QWORD *)(v143 + 48) = v138;
            v163 = v143 + 48;
            sub_B16F98(v163, v138);
            v164 = this->fields.actorCamera;
            *(_QWORD *)(v163 + 8) = v164;
            sub_B16F98(v163 + 8, v164);
            *(_BYTE *)(v163 + 36) = 0;
            if ( !v138 )
              goto LABEL_437;
            v165 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v138, 0LL);
            if ( !this->fields.actor )
              goto LABEL_437;
            v166 = v165;
            v167 = UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !v167 )
              goto LABEL_437;
            *(UnityEngine_Vector3_o *)&v168 = UnityEngine_Transform__get_position(v167, 0LL);
            if ( !v166 )
              goto LABEL_437;
            UnityEngine_Transform__set_position(v166, *(UnityEngine_Vector3_o *)&v168, 0LL);
          }
          else
          {
            v147 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v143, 0LL);
            if ( System_String__op_Equality(v147, (System_String_o *)StringLiteral_14706/*"USFGOPlayCutInEvent"*/, 0LL) )
            {
              if ( !v386 )
                goto LABEL_437;
              v148 = *(&WellFired_USFGOPlayCutInEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v143 + 300LL) >= (unsigned int)v148 )
              {
                if ( *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v143 + 200LL) + 8 * v148 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo )
                  v149 = (EventMissionProgressRequest_Argument_ProgressData_o *)v143;
                else
                  v149 = 0LL;
              }
              else
              {
                v149 = 0LL;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v386,
                v149,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
              goto LABEL_94;
            }
            v150 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v143, 0LL);
            if ( System_String__op_Equality(v150, (System_String_o *)StringLiteral_14707/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v151 = *(&WellFired_USFGOSetCameraEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v143 + 300LL) < (unsigned int)v151
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v143 + 200LL) + 8 * v151 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v152 = this->fields.actorCamera;
              *(_QWORD *)(v143 + 48) = v152;
              sub_B16F98(v143 + 48, v152);
              v153 = (UnityEngine_Component_o *)this->fields.actorCamera;
              if ( !v153 )
                goto LABEL_437;
              v154 = UnityEngine_Component__get_transform(v153, 0LL);
              if ( !v154 )
                goto LABEL_437;
              parent = UnityEngine_Transform__get_parent(v154, 0LL);
              *(_QWORD *)(v143 + 56) = parent;
              changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)parent;
              v157 = v143 + 56;
              goto LABEL_89;
            }
            v171 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v143, 0LL);
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                v171,
                                                                                (System_String_o *)StringLiteral_14705/*"USFGOChangeBgEvent"*/,
                                                                                0LL);
            if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
            {
              v172 = *(&WellFired_USFGOChangeBgEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v143 + 300LL) < (unsigned int)v172
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v143 + 200LL) + 8 * v172 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v173 = (System_String_o **)(v143 + 56);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v143 + 56),
                     (System_String_o *)StringLiteral_951/*"0"*/,
                     0LL)
                || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                        *v173,
                                                                                        (System_String_o *)StringLiteral_1/*""*/,
                                                                                        0LL),
                    ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0) )
              {
                v174 = this->fields.performance;
                if ( !v174 )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundNo(v174, 0LL);
                v175 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v173 = v175;
                sub_B16F98(v143 + 56, v175);
                v176 = this->fields.performance;
                if ( !v176 )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundType(v176, 0LL);
                v177 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v143 + 64) = v177;
                v178 = v143 + 64;
                sub_B16F98(v178, v177);
                changeFieldAfter = this->fields.changeFieldAfter;
                v157 = v178 + 64;
                *(_QWORD *)(v178 + 64) = changeFieldAfter;
LABEL_89:
                sub_B16F98(v157, changeFieldAfter);
              }
            }
          }
        }
LABEL_94:
        LODWORD(v140) = *((_DWORD *)v141 + 6);
        if ( (__int64)++v142 >= (int)v140 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  v179 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_USTimelineContainer__TypeInfo,
                                                                                                   v99,
                                                                                                   v100,
                                                                                                   v101,
                                                                                                   v102);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v179,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v179 )
    goto LABEL_437;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v179,
    item,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  v182 = BattleSequenceManager__searchTimeline(v180, seq, (System_String_o *)StringLiteral_3468/*"Cameras/BattleCamera"*/, v181);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v179,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v182,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v388,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v179,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v393 = v388[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v393,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v393.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Events = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                 (UnityEngine_Component_o *)current,
                 1,
                 (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v187 = Events;
      if ( !Events )
        sub_B170D4();
      v188 = *((_DWORD *)Events + 6);
      if ( v188 >= 1 )
      {
        for ( i = 0; i < v188; ++i )
        {
          if ( i >= (unsigned int)v188 )
          {
            sub_B17100(Events, v185, v186);
            sub_B170A0();
          }
          v190 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v187 + i + 4);
          if ( !v190 )
            sub_B170D4();
          Events = WellFired_USTimelineEvent__get_Events(v190, 0LL);
          v191 = Events;
          if ( !Events )
            sub_B170D4();
          v192 = *((_QWORD *)Events + 3);
          if ( (int)v192 >= 1 )
          {
            v193 = 0LL;
            do
            {
              if ( v193 >= (unsigned int)v192 )
              {
                sub_B17100(Events, v185, v186);
                sub_B170A0();
              }
              v194 = v191[v193 + 4];
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              Events = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v194, 0LL, 0LL);
              if ( ((unsigned __int8)Events & 1) == 0 )
              {
                if ( !v194 )
                  sub_B170D4();
                v195 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v194, 0LL);
                Events = (void *)System_String__op_Equality(v195, (System_String_o *)StringLiteral_14704/*"USFGOAttachToParentEvent"*/, 0LL);
                if ( ((unsigned __int8)Events & 1) != 0 )
                {
                  v196 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v194 + 300LL) < (unsigned int)v196
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v194 + 200LL) + 8 * v196 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_B173C8(v194);
LABEL_435:
                    sub_B170D4();
                  }
                  if ( System_String__op_Equality(
                         *(System_String_o **)(v194 + 72),
                         (System_String_o *)StringLiteral_2761/*"BattleCamera"*/,
                         0LL) )
                  {
                    v197 = (UnityEngine_Component_o *)v387->fields.actorCamera;
                    if ( !v197 )
                      sub_B170D4();
                    v198 = UnityEngine_Component__get_transform(v197, 0LL);
                    *(_QWORD *)(v194 + 56) = v198;
                    sub_B16F98(v194 + 56, v198);
                  }
                  else
                  {
                    if ( !v93 )
                      goto LABEL_435;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v93,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v194,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              LODWORD(v192) = *((_DWORD *)v191 + 6);
              ++v193;
            }
            while ( (__int64)v193 < (int)v192 );
          }
          v188 = *((_DWORD *)v187 + 6);
        }
      }
    }
  }
  *((_DWORD *)&v388[1].fields.list + v389++) = 1008;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v393,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  if ( v389 && *((_DWORD *)&v388[0].fields.current + v389 + 1) == 1008 )
    --v389;
  if ( !seq )
    goto LABEL_437;
  v199 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !v199 )
    goto LABEL_437;
  Enumerator = UnityEngine_Transform__GetEnumerator(v199, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  v384 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v215 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v215;
        p_offset += 4;
        if ( v215 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_157;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_157:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v201 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v202 = 0LL;
      v203 = (System_Collections_IEnumerator_c **)&v201->_1.interfaceOffsets->offset;
      while ( *(v203 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v202;
        v203 += 2;
        if ( v202 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_139;
      }
      v204 = (__int64)&v201->vtable[*(_DWORD *)v203 + 1].method;
    }
    else
    {
LABEL_139:
      v204 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v205 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v204)(
                                        Enumerator,
                                        *(_QWORD *)(v204 + 8));
    if ( !v205 )
      sub_B170D4();
    v206 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v205->klass->_2.bitflags2 + 1) < (unsigned int)v206
      || (UnityEngine_Transform_c *)v205->klass->_2.typeHierarchy[v206 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_444;
    }
    v207 = UnityEngine_Component__get_gameObject(v205, 0LL);
    if ( !v207 )
      sub_B170D4();
    v208 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v207,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v209 = v208;
    if ( !v208 )
      sub_B170D4();
    v210 = *(System_String_o **)&v208->fields.mtIsUpdate;
    if ( !v210 )
      sub_B170D4();
    if ( System_String__StartsWith(v210, (System_String_o *)StringLiteral_886/*"/BattleActors/"*/, 0LL)
      && *(_QWORD *)&v209->fields.mtIsUpdate )
    {
      v211 = *(System_String_o **)&v209->fields.mtIsUpdate;
      if ( !v211 )
        goto LABEL_466;
      if ( System_String__StartsWith(v211, (System_String_o *)StringLiteral_886/*"/BattleActors/"*/, 0LL) )
      {
        v212 = *(System_String_o **)&v209->fields.mtIsUpdate;
        if ( !v212 )
          sub_B170D4();
        v213 = System_String__Substring_43807468(v212, v212->fields.m_stringLength - 1, 1, 0LL);
        result[0] = 1;
        v384 += System_Int32__TryParse(v213, result, 0LL);
      }
    }
  }
  *((_DWORD *)&v388[1].fields.list + v389++) = 1183;
  v218 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
  if ( v218 )
  {
    v219 = *(_QWORD *)v218;
    v220 = v218;
    if ( *(_WORD *)(*(_QWORD *)v218 + 298LL) )
    {
      v221 = 0LL;
      v222 = (int *)(*(_QWORD *)(v219 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v222 - 1) != System_IDisposable_TypeInfo )
      {
        ++v221;
        v222 += 4;
        if ( v221 >= *(unsigned __int16 *)(*(_QWORD *)v218 + 298LL) )
          goto LABEL_165;
      }
      v223 = v219 + 16LL * *v222 + 312;
    }
    else
    {
LABEL_165:
      v223 = sub_AAFEF8(v218, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v223)(v220, *(_QWORD *)(v223 + 8));
  }
  if ( v389 && *((_DWORD *)&v388[0].fields.current + v389 + 1) == 1183 )
    --v389;
  v224 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !v224 )
    goto LABEL_437;
  v225 = UnityEngine_Transform__GetEnumerator(v224, 0LL);
  if ( !v225 )
    sub_B170D4();
  seqa = 0;
  while ( 1 )
  {
    v226 = v225->klass;
    if ( *(_WORD *)&v225->klass->_2.bitflags1 )
    {
      v227 = 0LL;
      v228 = &v226->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v228 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v227;
        v228 += 4;
        if ( v227 >= *(unsigned __int16 *)&v225->klass->_2.bitflags1 )
          goto LABEL_178;
      }
      v229 = v387;
      v230 = (__int64)&v226->vtable[*v228].method;
    }
    else
    {
LABEL_178:
      v229 = v387;
      v230 = sub_AAFEF8(v225, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v230)(v225, *(_QWORD *)(v230 + 8)) & 1) == 0 )
      break;
    v231 = v225->klass;
    if ( *(_WORD *)&v225->klass->_2.bitflags1 )
    {
      v232 = 0LL;
      v233 = (System_Collections_IEnumerator_c **)&v231->_1.interfaceOffsets->offset;
      while ( *(v233 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v232;
        v233 += 2;
        if ( v232 >= *(unsigned __int16 *)&v225->klass->_2.bitflags1 )
          goto LABEL_185;
      }
      v234 = (__int64)&v231->vtable[*(_DWORD *)v233 + 1].method;
    }
    else
    {
LABEL_185:
      v234 = sub_AAFEF8(v225, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v235 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v234)(
                                        v225,
                                        *(_QWORD *)(v234 + 8));
    if ( !v235 )
      sub_B170D4();
    v236 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v235->klass->_2.bitflags2 + 1) < (unsigned int)v236
      || (UnityEngine_Transform_c *)v235->klass->_2.typeHierarchy[v236 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_443;
    }
    v237 = UnityEngine_Component__get_gameObject(v235, 0LL);
    if ( !v237 )
      goto LABEL_447;
    v238 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v237,
             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v239 = (WellFired_USTimelineContainer_o *)v238;
    if ( !v238 )
      sub_B170D4();
    v240 = *(System_String_o **)&v238->fields.mtIsUpdate;
    if ( !v240 )
      sub_B170D4();
    if ( System_String__StartsWith(v240, (System_String_o *)StringLiteral_883/*"/AllEffects/"*/, 0LL) )
    {
      affectedObjectPath = v239->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_B170D4();
      v242 = System_String__Substring(affectedObjectPath, 12, 0LL);
      v243 = 1;
    }
    else
    {
      v243 = 0;
      v242 = 0LL;
    }
    v244 = v239->fields.affectedObjectPath;
    if ( !v244 )
      sub_B170D4();
    if ( System_String__StartsWith(v244, (System_String_o *)StringLiteral_901/*"/CutIns/"*/, 0LL) )
    {
      v245 = v239->fields.affectedObjectPath;
      if ( !v245 )
        sub_B170D4();
      v242 = System_String__Substring(v245, 8, 0LL);
      v246 = 1;
    }
    else
    {
      v246 = 0;
    }
    v247 = v239->fields.affectedObjectPath;
    if ( !v247 )
      sub_B170D4();
    if ( System_String__StartsWith(v247, (System_String_o *)StringLiteral_898/*"/BattleCamera"*/, 0LL) )
      goto LABEL_206;
    v248 = v239->fields.affectedObjectPath;
    if ( !v248 )
      sub_B170D4();
    if ( System_String__StartsWith(v248, (System_String_o *)StringLiteral_900/*"/Cameras/BattleCamera"*/, 0LL) )
    {
LABEL_206:
      v249 = (UnityEngine_Component_o *)v387->fields.actorCamera;
      if ( !v249 )
        sub_B170D4();
      v250 = UnityEngine_Component__get_transform(v249, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v239, v250, 0LL);
    }
    else
    {
      v251 = v239->fields.affectedObjectPath;
      if ( !v251 )
        sub_B170D4();
      if ( System_String__StartsWith(v251, (System_String_o *)StringLiteral_878/*"/Actor/chr"*/, 0LL) )
      {
        v252 = v387->fields.actor;
        if ( !v252 )
          sub_B170D4();
        v253 = UnityEngine_GameObject__get_transform(v252, 0LL);
        v254 = v239->fields.affectedObjectPath;
        if ( !v254 )
          sub_B170D4();
        v255 = System_String__Replace_43750968(
                 v254,
                 (System_String_o *)StringLiteral_878/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_17355/*"chr(Clone)"*/,
                 0LL);
        if ( !v253 )
          sub_B170D4();
        v256 = UnityEngine_Transform__Find(v253, v255, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(v239, v256, 0LL);
        v257 = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v239, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v257, 0LL, 0LL) )
        {
          v258 = v239->fields.affectedObjectPath;
          if ( !v258 )
            sub_B170D4();
          v259 = System_String__StartsWith(v258, (System_String_o *)StringLiteral_880/*"/Actor/chr/body_level_"*/, 0LL);
          v260 = &StringLiteral_16815/*"body_level_"*/;
          if ( v259 )
            goto LABEL_221;
          v261 = v239->fields.affectedObjectPath;
          if ( !v261 )
            sub_B170D4();
          v262 = System_String__StartsWith(v261, (System_String_o *)StringLiteral_881/*"/Actor/chr/weapon_level_"*/, 0LL);
          v260 = &StringLiteral_23166/*"weapon_level_"*/;
          if ( v262 )
          {
LABEL_221:
            v263 = (System_String_o *)*v260;
            if ( *v260 )
            {
              v264 = v387->fields.actor;
              if ( !v264 )
                sub_B170D4();
              v265 = (System_String_o *)StringLiteral_1/*""*/;
              v266 = UnityEngine_GameObject__get_transform(v264, 0LL);
              if ( !v266 )
                sub_B170D4();
              v267 = UnityEngine_Transform__Find(v266, (System_String_o *)StringLiteral_17355/*"chr(Clone)"*/, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v267, 0LL, 0LL) )
              {
                if ( !v267 )
                  sub_B170D4();
                v268 = UnityEngine_Transform__GetEnumerator(v267, 0LL);
                if ( !v268 )
                  sub_B170D4();
                while ( 1 )
                {
                  v269 = v268->klass;
                  if ( *(_WORD *)&v268->klass->_2.bitflags1 )
                  {
                    v270 = 0LL;
                    v271 = &v269->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v271 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v270;
                      v271 += 4;
                      if ( v270 >= *(unsigned __int16 *)&v268->klass->_2.bitflags1 )
                        goto LABEL_234;
                    }
                    v272 = (__int64)&v269->vtable[*v271].method;
                  }
                  else
                  {
LABEL_234:
                    v272 = sub_AAFEF8(v268, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v272)(
                          v268,
                          *(_QWORD *)(v272 + 8)) & 1) == 0 )
                    break;
                  v273 = v268->klass;
                  if ( *(_WORD *)&v268->klass->_2.bitflags1 )
                  {
                    v274 = 0LL;
                    v275 = (System_Collections_IEnumerator_c **)&v273->_1.interfaceOffsets->offset;
                    while ( *(v275 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v274;
                      v275 += 2;
                      if ( v274 >= *(unsigned __int16 *)&v268->klass->_2.bitflags1 )
                        goto LABEL_241;
                    }
                    v276 = (__int64)&v273->vtable[*(_DWORD *)v275 + 1].method;
                  }
                  else
                  {
LABEL_241:
                    v276 = sub_AAFEF8(v268, System_Collections_IEnumerator_TypeInfo, 1LL);
                  }
                  v277 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v276)(
                                                      v268,
                                                      *(_QWORD *)(v276 + 8));
                  v278 = (UnityEngine_Object_o *)v277;
                  if ( !v277 )
                    sub_B170D4();
                  v279 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v277->klass->_2.bitflags2 + 1) < (unsigned int)v279
                    || (UnityEngine_Transform_c *)v277->klass->_2.typeHierarchy[v279 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    sub_B173C8(v277);
LABEL_466:
                    sub_B170D4();
                  }
                  v280 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v277, 0LL);
                  if ( !v280 )
                    sub_B170D4();
                  v281 = UnityEngine_Object__get_name(v280, 0LL);
                  if ( !v281 )
                    sub_B170D4();
                  if ( System_String__StartsWith(v281, v263, 0LL) )
                  {
                    v282 = UnityEngine_Object__get_name(v278, 0LL);
                    *((_DWORD *)&v388[1].fields.list + v389) = 1651;
                    v283 = v389;
                    v265 = v282;
                    goto LABEL_259;
                  }
                }
                *((_DWORD *)&v388[1].fields.list + v389) = 1651;
                v283 = v389;
LABEL_259:
                v389 = v283 + 1;
                v288 = sub_B170BC(v268, System_IDisposable_TypeInfo);
                v289 = v288;
                if ( v288 )
                {
                  v290 = *(_QWORD *)v288;
                  if ( *(_WORD *)(*(_QWORD *)v288 + 298LL) )
                  {
                    v291 = 0LL;
                    v292 = (int *)(*(_QWORD *)(v290 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v292 - 1) != System_IDisposable_TypeInfo )
                    {
                      ++v291;
                      v292 += 4;
                      if ( v291 >= *(unsigned __int16 *)(*(_QWORD *)v288 + 298LL) )
                        goto LABEL_264;
                    }
                    v293 = v290 + 16LL * *v292 + 312;
                  }
                  else
                  {
LABEL_264:
                    v293 = sub_AAFEF8(v288, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v293)(v289, *(_QWORD *)(v293 + 8));
                }
                if ( v389 && *((_DWORD *)&v388[0].fields.current + v389 + 1) == 1651 )
                  --v389;
              }
              v294 = v239->fields.affectedObjectPath;
              v295 = System_String__Concat_43743732((System_String_o *)StringLiteral_879/*"/Actor/chr/"*/, v263, 0LL);
              if ( !v295 )
                sub_B170D4();
              if ( !v294 )
                sub_B170D4();
              v296 = System_String__Substring(v294, v295->fields.m_stringLength, 0LL);
              v298 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v297);
              if ( !v298 )
                sub_B170D4();
              if ( !v298->max_length )
              {
                sub_B17100(v298, v298, v299);
                sub_B170A0();
              }
              v298->m_Items[2] = 47;
              if ( !v296 )
                sub_B170D4();
              v300 = System_String__Split(v296, v298, 0LL);
              if ( !v300 )
                sub_B170D4();
              if ( !v300->max_length )
              {
                sub_B17100(v300, v301, v302);
                sub_B170A0();
              }
              v303 = System_String__Concat_43743732(v263, v300->m_Items[0], 0LL);
              v304 = v387->fields.actor;
              if ( !v304 )
                sub_B170D4();
              v305 = UnityEngine_GameObject__get_transform(v304, 0LL);
              v306 = v239->fields.affectedObjectPath;
              if ( !v306 )
                sub_B170D4();
              v307 = System_String__Replace_43750968(
                       v306,
                       (System_String_o *)StringLiteral_878/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_17355/*"chr(Clone)"*/,
                       0LL);
              if ( !v307 )
                sub_B170D4();
              v308 = System_String__Replace_43750968(v307, v303, v265, 0LL);
              if ( !v305 )
                sub_B170D4();
              v309 = UnityEngine_Transform__Find(v305, v308, 0LL);
              WellFired_USTimelineContainer__set_AffectedObject(v239, v309, 0LL);
            }
          }
        }
      }
      else
      {
        v284 = v239->fields.affectedObjectPath;
        if ( !v284 )
          sub_B170D4();
        v285 = System_String__StartsWith(v284, (System_String_o *)StringLiteral_886/*"/BattleActors/"*/, 0LL);
        if ( v285 )
          v242 = v239->fields.affectedObjectPath;
        if ( v242 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v285, v242, v286) )
            goto LABEL_336;
          if ( v243 )
          {
            v287 = System_String__IndexOf(v242, 0x2Fu, 0LL);
            if ( (v287 & 0x80000000) == 0 )
            {
              itema = System_String__Substring(v242, v287 + 1, 0LL);
              v242 = System_String__Substring_43807468(v242, 0, v287, 0LL);
              goto LABEL_285;
            }
            if ( (seqa & 1) != 0 )
            {
              itema = 0LL;
LABEL_285:
              v311 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v387->fields.createdObjects;
              if ( !v311 )
                sub_B170D4();
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                v388,
                v311,
                (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v392 = v388[0];
              while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                        &v392,
                        (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
              {
                v310 = (EventMissionProgressRequest_Argument_ProgressData_o *)v392.fields.current;
                if ( !v392.fields.current )
                  sub_B170D4();
                v312 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v392.fields.current, 0LL);
                if ( !v312 )
                  sub_B170D4();
                v313 = System_String__Replace_43750968(
                         v312,
                         (System_String_o *)StringLiteral_608/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v242, v313, 0LL) )
                  goto LABEL_293;
              }
              v310 = 0LL;
LABEL_293:
              *((_DWORD *)&v388[1].fields.list + v389++) = 1961;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v392,
                (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if ( v389 )
              {
                if ( *((_DWORD *)&v388[0].fields.current + v389 + 1) == 1961 )
                  --v389;
                seqa = 1;
              }
              else
              {
                seqa = 1;
              }
              goto LABEL_299;
            }
            itema = 0LL;
            v310 = 0LL;
            seqa = 0;
          }
          else
          {
            itema = 0LL;
            v310 = 0LL;
          }
LABEL_299:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v310, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(x, 0LL, 0LL) )
            {
              if ( !x )
                sub_B170D4();
              v316 = x[17].monitor;
              if ( !v316 )
                sub_B170D4();
              v317 = v316[174];
            }
            else
            {
              v317 = 0;
            }
            v310 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSequenceManager__searchPrefab(
                                                                            v387,
                                                                            v387->fields.treasureDeviceId,
                                                                            v242,
                                                                            v314,
                                                                            v317,
                                                                            v315);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v310, 0LL, 0LL) )
            {
              v318 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v387->fields.createdObjects;
              if ( !v318 )
                sub_B170D4();
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v318,
                v310,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
              if ( !v310 )
                sub_B170D4();
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v310, 0, 0LL);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v310, 0LL, 0LL) )
            goto LABEL_336;
          if ( !System_String__IsNullOrEmpty(itema, 0LL) )
          {
            if ( !v310 )
              sub_B170D4();
            v331 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v310, 0LL);
            if ( !v331 )
              sub_B170D4();
            v332 = UnityEngine_Transform__Find(v331, itema, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v239, v332, 0LL);
            goto LABEL_336;
          }
          if ( !v310 )
            sub_B170D4();
          v319 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v310, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v239, v319, 0LL);
          if ( (v246 & 1) != 0 )
          {
            v320 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v310, 0LL);
            if ( !v320 )
              sub_B170D4();
            localPosition = UnityEngine_Transform__get_localPosition(v320, 0LL);
            v321 = localPosition.fields.x;
            v322 = localPosition.fields.y;
            v323 = localPosition.fields.z;
            v324 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v310, 0LL);
            CutInRoot = v387->fields.CutInRoot;
            if ( !CutInRoot )
              sub_B170D4();
            v326 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v324 )
              sub_B170D4();
            UnityEngine_Transform__set_parent(v324, v326, 0LL);
            v327 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v310, 0LL);
            if ( !v327 )
              sub_B170D4();
            v397.fields.x = v321;
            v397.fields.y = v322;
            v397.fields.z = v323;
            UnityEngine_Transform__set_localPosition(v327, v397, 0LL);
            BattleSequenceManager__updateCutInEvents(
              v328,
              (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v386,
              v242,
              (UnityEngine_GameObject_o *)v310,
              v329);
            v330 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2763/*"BattleCutIn"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v310, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2759/*"BattleBG"*/, 0LL) )
              goto LABEL_336;
            v330 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2757/*"Battle2D"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v310, v330, 0LL);
LABEL_336:
          v333 = v239->fields.affectedObjectPath;
          if ( !v333 )
            sub_B170D4();
          if ( System_String__StartsWith(v333, (System_String_o *)StringLiteral_886/*"/BattleActors/"*/, 0LL) )
          {
            v334 = v239->fields.affectedObjectPath;
            if ( !v334 )
              sub_B170D4();
            v335 = System_String__Substring_43807468(v334, v334->fields.m_stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v335, &targetPosIndex, 0LL);
            v337 = --targetPosIndex;
            if ( v384 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v387, v239, v337, v336);
              BattleSequenceManager__SyncAttachedTargetPair(v387, v239, targetPosIndex, v338);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v387, v239, v337, v336);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                         (UnityEngine_Component_o *)v239,
                         1,
                         (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v342 = EventCount;
          if ( !EventCount )
            sub_B170D4();
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
              {
                sub_B17100(EventCount, v340, v341);
                sub_B170A0();
              }
              v345 = (WellFired_USTimelineEvent_o *)v342->m_Items[j];
              if ( !v345 )
                sub_B170D4();
              for ( k = 0; ; ++k )
              {
                EventCount = (WarBoardControlPlayTalkUiComponent_array *)WellFired_USTimelineEvent__get_EventCount(
                                                                           v345,
                                                                           0LL);
                if ( k >= (int)EventCount )
                  break;
                v347 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v345, k, 0LL);
                v348 = v347;
                if ( !v347 )
                  goto LABEL_445;
                v349 = UnityEngine_Object__get_name(v347, 0LL);
                if ( System_String__op_Equality(v349, (System_String_o *)StringLiteral_14704/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v350 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v348->klass->_2.bitflags2 + 1) < (unsigned int)v350
                    || (WellFired_USFGOAttachToParentEvent_c *)v348->klass->_2.typeHierarchy[v350 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_B173C8(v348);
LABEL_447:
                    sub_B170D4();
                  }
                  if ( System_String__op_Equality(
                         (System_String_o *)v348[3].klass,
                         (System_String_o *)StringLiteral_2761/*"BattleCamera"*/,
                         0LL) )
                  {
                    v351 = (UnityEngine_Component_o *)v387->fields.actorCamera;
                    if ( !v351 )
                      sub_B170D4();
                    v352 = UnityEngine_Component__get_transform(v351, 0LL);
                    v348[2].monitor = v352;
                    sub_B16F98(&v348[2].monitor, v352);
                  }
                  else
                  {
                    if ( !v93 )
                      sub_B170D4();
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v93,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v348,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              max_length = v342->max_length;
            }
          }
        }
      }
    }
  }
  *((_DWORD *)&v388[1].fields.list + v389++) = 2515;
  v354 = sub_B170BC(v225, System_IDisposable_TypeInfo);
  if ( v354 )
  {
    v355 = *(_QWORD *)v354;
    v356 = v354;
    if ( *(_WORD *)(*(_QWORD *)v354 + 298LL) )
    {
      v357 = 0LL;
      v358 = (int *)(*(_QWORD *)(v355 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v358 - 1) != System_IDisposable_TypeInfo )
      {
        ++v357;
        v358 += 4;
        if ( v357 >= *(unsigned __int16 *)(*(_QWORD *)v354 + 298LL) )
          goto LABEL_378;
      }
      v359 = v355 + 16LL * *v358 + 312;
    }
    else
    {
LABEL_378:
      v359 = sub_AAFEF8(v354, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v359)(v356, *(_QWORD *)(v359 + 8));
  }
  if ( v389 && *((_DWORD *)&v388[0].fields.current + v389 + 1) == 2515 )
    --v389;
  if ( !v93 )
    goto LABEL_437;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v388,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v93,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v388[0];
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &m,
          (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields.current,
          v229->fields.performance,
          v229->fields.actor,
          v229->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields.current )
      sub_B170D4();
  }
  *((_DWORD *)&v388[1].fields.list + v389++) = 2581;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &m,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( v389 && *((_DWORD *)&v388[0].fields.current + v389 + 1) == 2581 )
    --v389;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(x, 0LL, 0LL) )
  {
    if ( !x )
      goto LABEL_437;
    if ( LOBYTE(x[18].monitor) )
      goto LABEL_428;
    v360 = x[17].monitor;
    if ( !v360 )
      goto LABEL_437;
    if ( !v360[75] && !BattleActorControl__isNoVoice((BattleActorControl_o *)x, 0LL) )
    {
      v361 = (UnityEngine_Object_o *)v229->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v361, 0LL, 0LL) )
      {
        v362 = v229->fields.performance;
        if ( !v362 )
          goto LABEL_437;
        data = (UnityEngine_Object_o *)v362->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoiceMaster___);
            v229->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v229->fields.chrId;
            v367 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(v229, v367, chrId, FileName, v369) )
              v229->fields.isAlreadyRegistDefaultVoice = 1;
            v370 = v229->fields.chrId;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v371 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v229, v367, v370, v371, v372);
            v373 = x[17].monitor;
            if ( v373 )
            {
              v374 = v373[162];
              v375 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v375 = BalanceConfig_TypeInfo;
              }
              if ( v374 == v375->static_fields->TreasureDeviceIdMashu3 )
              {
                v376 = v229->fields.chrId;
                if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v377 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v229, v367, v376, v377, v378);
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
  System_GC__Collect_42843716(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x24
  int size; // w23
  unsigned int v10; // w22
  BattleSequenceManager_BattleTarget_o *v11; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v13; // x20
  BattleSequenceManager_BattleTarget_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_40F757A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7);
    byte_40F757A = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      if ( size < 1 )
      {
LABEL_14:
        if ( tlcont )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tlcont, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            return;
          }
        }
      }
      else
      {
        v10 = 0;
        while ( 1 )
        {
          if ( battleTargetList->fields._size <= v10 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v11 = battleTargetList->fields._items->m_Items[v10];
          if ( !v11 )
            goto LABEL_25;
          if ( v11->fields._positionIndex_k__BackingField == targetIndex )
            break;
          if ( (int)++v10 >= size )
            goto LABEL_14;
          battleTargetList = this->fields.battleTargetList;
          if ( !battleTargetList )
            goto LABEL_25;
        }
        v13 = this->fields.battleTargetList;
        if ( v13 )
        {
          if ( v13->fields._size <= v10 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v14 = v13->fields._items->m_Items[v10];
          if ( v14 )
          {
            v15 = BattleSequenceManager_BattleTarget__saveTransform(v14, 0LL);
            if ( v15 )
            {
              transform = UnityEngine_GameObject__get_transform(v15, 0LL);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(tlcont, transform, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x21
  int32_t size; // w8
  BattleSequenceManager_BattleTarget_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Transform_o *AffectedObject; // x20
  UnityEngine_Transform_o *v19; // x0

  if ( (byte_40F757E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v9);
    sub_B16FFC(&StringLiteral_14419/*"Tmp_Target"*/, v10);
    byte_40F757E = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = this->fields.battleTargetList;
    if ( !battleTargetList )
      goto LABEL_17;
    size = battleTargetList->fields._size;
    if ( size > targetIndex )
    {
      if ( size <= (unsigned int)targetIndex )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = battleTargetList->fields._items->m_Items[targetIndex];
      if ( v13 )
      {
        v14 = BattleSequenceManager_BattleTarget__saveTransform(v13, 0LL);
        if ( v14 )
        {
          transform = UnityEngine_GameObject__get_transform(v14, 0LL);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, transform, 0LL);
            return;
          }
        }
      }
LABEL_17:
      sub_B170D4();
    }
    v16 = (UnityEngine_GameObject_o *)sub_B170CC(
                                        UnityEngine_GameObject_TypeInfo,
                                        tlcont,
                                        *(_QWORD *)&targetIndex,
                                        method,
                                        v4);
    UnityEngine_GameObject___ctor(v16, (System_String_o *)StringLiteral_14419/*"Tmp_Target"*/, 0LL);
    if ( !v16 )
      goto LABEL_17;
    v17 = UnityEngine_GameObject__get_transform(v16, 0LL);
    if ( !tlcont )
      goto LABEL_17;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, v17, 0LL);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)tlcont, 0LL);
    if ( !AffectedObject )
      goto LABEL_17;
    UnityEngine_Transform__SetParent(AffectedObject, v19, 0LL);
  }
}


bool __fastcall BattleSequenceManager__updateCutInEvents(
        BattleSequenceManager_o *this,
        System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs,
        System_String_o *cutInName,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *current; // x21
  char v12; // w19
  int v13; // w20
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7564 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__, v10);
    byte_40F7564 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !evs )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)evs,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B170D4();
    if ( System_String__op_Equality((System_String_o *)v15.fields.current[3].monitor, cutInName, 0LL) )
    {
      current[3].klass = (Il2CppClass *)obj;
      sub_B16F98(&current[3], obj);
      v12 = 1;
      v13 = 5;
      goto LABEL_10;
    }
  }
  v12 = 0;
  v13 = 3;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return (v13 == 5) & v12;
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
  UnityEngine_Component_o **p_targetActor; // x19
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Transform_o *v6; // x0

  p_targetActor = (UnityEngine_Component_o **)&this->fields.targetActor;
  if ( this->fields.isSave )
  {
    if ( !*p_targetActor
      || (transform = UnityEngine_Component__get_transform(*p_targetActor, 0LL)) == 0LL
      || (UnityEngine_Transform__set_localRotation(transform, this->fields.originalRotation, 0LL),
          (targetActor = (UnityEngine_Component_o *)this->fields.targetActor) == 0LL)
      || (v6 = UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_Transform__set_localScale(v6, this->fields.originalScale, 0LL);
  }
  *p_targetActor = 0LL;
  sub_B16F98(p_targetActor, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager_BattleTarget__saveTransform(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *targetActor; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Transform_o *v6; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
  this->fields.isSave = 1;
  if ( !targetActor )
    goto LABEL_7;
  transform = UnityEngine_Component__get_transform(targetActor, 0LL);
  if ( !transform
    || (localRotation = UnityEngine_Transform__get_localRotation(transform, 0LL),
        v5 = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalRotation = localRotation,
        !v5)
    || (v6 = UnityEngine_Component__get_transform(v5, 0LL)) == 0LL
    || (localScale = UnityEngine_Transform__get_localScale(v6, 0LL),
        v7 = (UnityEngine_Component_o *)this->fields.targetActor,
        this->fields.originalScale = localScale,
        !v7) )
  {
LABEL_7:
    sub_B170D4();
  }
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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
  sub_B16F98(&this->fields.targetActor, bac);
  *((_DWORD *)p_targetActor + 9) = index;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__105___ctor(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__105__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _1__state; // w8
  struct BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v8; // x21
  Il2CppObject *wait_5__2; // x1
  bool result; // w0

  if ( (byte_40F71C0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, method);
    byte_40F71C0 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
    this->fields._wait_5__2 = v8;
    sub_B16F98(&this->fields._wait_5__2, v8);
    if ( !_4__this )
LABEL_12:
      sub_B170D4();
  }
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
    this->fields.__2__current = wait_5__2;
    sub_B16F98(&this->fields.__2__current, wait_5__2);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__105__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__105__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleSequenceManager__WaitEndSequence_d__105_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__105__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__105__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__105_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0

  if ( (byte_40F71BA & 1) == 0 )
  {
    sub_B16FFC(&BattleSequenceManager___c_TypeInfo, v1);
    byte_40F71BA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleSequenceManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSequenceManager___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__74_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float duration; // [xsp+Ch] [xbp-4h] BYREF

  duration = 0.0;
  if ( !x1 || (duration = x1->fields.duration, !x2) )
    sub_B170D4();
  return System_Single__CompareTo_43729924(x2->fields.duration, v4, (const MethodInfo *)&duration);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__74_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float duration; // [xsp+Ch] [xbp-4h] BYREF

  duration = 0.0;
  if ( !x1 || (duration = x1->fields.duration, !x2) )
    sub_B170D4();
  return System_Single__CompareTo_43729924(x2->fields.duration, v4, (const MethodInfo *)&duration);
}


void __fastcall BattleSequenceManager___c__DisplayClass111_0___ctor(
        BattleSequenceManager___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass111_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass111_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_B170D4();
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass114_0___ctor(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass114_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass114_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *targetList; // x0

  if ( (byte_40F71BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, x);
    byte_40F71BB = 1;
  }
  if ( !x || (targetList = this->fields.targetList) == 0LL )
    sub_B170D4();
  System_Collections_Generic_HashSet_int___Add(
    targetList,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass121_0___ctor(
        BattleSequenceManager___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass121_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass121_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass140_0___ctor(
        BattleSequenceManager___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass140_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass140_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_0___ctor(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager_o *_4__this; // x21
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v18; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24

  if ( (byte_40F71BC & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__, v6);
    sub_B16FFC(&StringLiteral_12968/*"StandardCutIn"*/, v7);
    sub_B16FFC(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo, v8);
    byte_40F71BC = 1;
  }
  if ( !data
    || (_4__this = this->fields.__4__this,
        Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           data,
                                           (System_String_o *)StringLiteral_12968/*"StandardCutIn"*/,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting,
        sub_B16F98(&_4__this->fields.CutInPrefab, Object_WarBoardWaitTimeSetting),
        (v11 = (UnityEngine_Component_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(v11, 0LL);
  _9__1 = this->fields.__9__1;
  v18 = gameObject;
  chrId = this->fields.chrId;
  limitCount = this->fields.limitCount;
  treasureDeviceId = this->fields.treasureDeviceId;
  treasureDeviceLv = this->fields.treasureDeviceLv;
  npChargeStage = this->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_B170CC(
                                                                    ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v13,
                                                                    v14,
                                                                    v15,
                                                                    v16);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(&this->fields.__9__1, _9__1);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__LoadNoblePhantasm(
    v18,
    chrId,
    limitCount,
    treasureDeviceId,
    treasureDeviceLv,
    npChargeStage,
    _9__1,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x23
  struct BattleSequenceManager_o *_4__this; // x0
  struct UnityEngine_GameObject_o *klass; // x1
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleActorControl_o *v21; // x8
  struct BattleServantData_o *v22; // x8
  ServantAssetLoadManager_o *Instance; // x0
  struct BattleSequenceManager_o *v24; // x8
  SoundManager_o *v25; // x19
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Action_o *v32; // x22
  int32_t VoiceId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F71BD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v9);
    sub_B16FFC(&Method_System_Tuple_int__int__get_Item1__, v10);
    sub_B16FFC(&Method_System_Tuple_int__int__get_Item2__, v11);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, v12);
    sub_B16FFC(&BattleSequenceManager___c__DisplayClass73_1_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_9568/*"NoblePhantasm_"*/, v14);
    byte_40F71BD = 1;
  }
  VoiceId = 0;
  v15 = (Il2CppObject *)sub_B170CC(
                          BattleSequenceManager___c__DisplayClass73_1_TypeInfo,
                          obj,
                          paramsFromMstTDSeqWeight,
                          method,
                          v4);
  System_Object___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_16;
  v15[1].monitor = this;
  sub_B16F98(&v15[1].monitor, this);
  v15[1].klass = (Il2CppClass *)obj;
  v16 = v15 + 1;
  sub_B16F98(&v15[1], obj);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  klass = (struct UnityEngine_GameObject_o *)v16->klass;
  _4__this->fields.seqObject = (struct UnityEngine_GameObject_o *)v16->klass;
  sub_B16F98(&_4__this->fields.seqObject, klass);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_16;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_16;
  battleSvtData = battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_16;
  battleSvtData->fields.seqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item1 & ~(paramsFromMstTDSeqWeight->fields.m_Item1 >> 31);
  v21 = this->fields.battleActor;
  if ( !v21 )
    goto LABEL_16;
  v22 = v21->fields.battleSvtData;
  if ( !v22 )
    goto LABEL_16;
  v22->fields.groupSeqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item2 & ~(paramsFromMstTDSeqWeight->fields.m_Item2 >> 31);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  if ( this->fields.overwriteSvtVoiceId )
  {
    v24 = this->fields.__4__this;
    if ( !v24 )
      goto LABEL_16;
    VoiceId = v24->fields.overwriteSvtVoiceId;
  }
  v25 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v26 = System_Int32__ToString((int32_t)&VoiceId, 0LL);
  v27 = System_String__Concat_43743732((System_String_o *)StringLiteral_9568/*"NoblePhantasm_"*/, v26, 0LL);
  v32 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v28, v29, v30, v31);
  System_Action___ctor(v32, v15, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, 0LL);
  if ( !v25 )
LABEL_16:
    sub_B170D4();
  SoundManager__LoadAudioAssetStorage(v25, v27, v32, 1, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___ctor(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  UnityEngine_GameObject_o *seqObject; // x0
  System_String_o *monitor; // x20
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct BattleSequenceManager___c__DisplayClass73_0_o *v16; // x8
  BattleSequenceManager_o *v17; // x21
  System_Action_o *_9__3; // x22

  if ( (byte_40F71BE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayBgmEvent___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F71BE = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_17;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  seqObject = _4__this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_17;
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        seqObject,
                                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayBgmEvent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_17;
    monitor = (System_String_o *)ComponentInChildren_Dropdown_DropdownItem[2].monitor;
  }
  v16 = this->fields.CS___8__locals1;
  if ( !v16 )
    goto LABEL_17;
  v17 = v16->fields.__4__this;
  _9__3 = this->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(&this->fields.__9__3, _9__3);
  }
  if ( !v17 )
LABEL_17:
    sub_B170D4();
  BattleSequenceManager__LoadBgm(v17, monitor, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  UnityEngine_GameObject_o *seqObject; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v13; // x8
  struct BattleSequenceManager_o *v14; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v17; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x8
  UnityEngine_Object_o *v20; // x21
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Object_o *v22; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v23; // x8
  struct BattleSequenceManager_o *v24; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v25; // x8
  struct BattleSequenceManager_o *v26; // x21
  WebViewManager_o *Instance; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v28; // x8
  struct BattleSequenceManager_o *v29; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v31; // x22
  UnityEngine_Component_o *root_field; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureM_o *MeshLocal; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v35; // x8
  struct BattleSequenceManager_o *v36; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v38; // x8
  struct BattleSequenceManager_o *v39; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v40; // x8
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  ServantEntity_o *svtdata; // x0
  int m_Toggle; // w21
  int32_t LimitImageIndex; // w0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v46; // x8
  struct BattleSequenceManager_o *v47; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v48; // x8
  BattleSequenceManager_o *v49; // x0
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v52; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *v53; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v54; // x8
  BattleActorControl_o *v55; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v56; // x8
  struct BattleSequenceManager_o *v57; // x8
  UnityEngine_Component_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v60; // x8
  struct BattleSequenceManager_o *v61; // x8
  UnityEngine_Object_o *v62; // x20
  System_String_o *StandFigureMName; // x0
  struct BattleSequenceManager___c__DisplayClass73_0_o *v64; // x8
  struct BattleSequenceManager_o *v65; // x8
  UIStandFigureRender_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  struct BattleSequenceManager___c__DisplayClass73_0_o *v71; // x8
  struct BattleSequenceManager_o *v72; // x8
  UIStandFigureM_o *v73; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  struct BattleSequenceManager___c__DisplayClass73_0_o *v78; // x8
  BattleSequenceManager_o *v79; // x0

  if ( (byte_40F71BF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    sub_B16FFC(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__, v8);
    byte_40F71BF = 1;
  }
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_80;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_80;
  seqObject = _4__this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_80;
  ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                seqObject,
                                                (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v13 = this->fields.CS___8__locals1;
  if ( !v13 )
    goto LABEL_80;
  v14 = v13->fields.__4__this;
  if ( !v14 )
    goto LABEL_80;
  v15 = ComponentInChildren_Dropdown_DropdownItem;
  v16 = v14->fields.seqObject;
  if ( !v16 )
    goto LABEL_80;
  v17 = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
          v16,
          (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v18 = this->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_80;
  v19 = v18->fields.__4__this;
  if ( !v19 )
    goto LABEL_80;
  v20 = (UnityEngine_Object_o *)v17;
  v21 = v19->fields.seqObject;
  if ( !v21 )
    goto LABEL_80;
  v22 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                  v21,
                                  (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      v48 = this->fields.CS___8__locals1;
      if ( !v48 )
        goto LABEL_80;
      v49 = v48->fields.__4__this;
      if ( !v49 )
        goto LABEL_80;
      onComplete = v48->fields.onComplete;
      obj = this->fields.obj;
      v52 = (WellFired_USFGOPlayCutInBase_o *)v22;
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
        goto LABEL_77;
      v53 = this->fields.CS___8__locals1;
      if ( !v53 )
        goto LABEL_80;
      v49 = v53->fields.__4__this;
      if ( !v49 )
        goto LABEL_80;
      onComplete = v53->fields.onComplete;
      obj = this->fields.obj;
      v52 = (WellFired_USFGOPlayCutInBase_o *)v20;
    }
    if ( BattleSequenceManager__CreateCutInStandFigure(v49, v52, obj, onComplete, 0LL) )
      return;
    goto LABEL_77;
  }
  v23 = this->fields.CS___8__locals1;
  if ( !v23 )
    goto LABEL_80;
  if ( !v15 )
    goto LABEL_80;
  v24 = v23->fields.__4__this;
  if ( !v24 )
    goto LABEL_80;
  v24->fields.faceType = (int32_t)v15[1].klass;
  v25 = this->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_80;
  v26 = v25->fields.__4__this;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  v28 = this->fields.CS___8__locals1;
  if ( !v28 )
    goto LABEL_80;
  v29 = v28->fields.__4__this;
  if ( !v29 )
    goto LABEL_80;
  performance = v29->fields.performance;
  if ( !performance )
    goto LABEL_80;
  v31 = (StandFigureManager_o *)Instance;
  root_field = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !root_field )
    goto LABEL_80;
  gameObject = UnityEngine_Component__get_gameObject(root_field, 0LL);
  if ( !v31 )
    goto LABEL_80;
  MeshLocal = StandFigureManager__CreateMeshLocal(v31, gameObject, 0LL);
  if ( !v26 )
    goto LABEL_80;
  v26->fields.standFigure = MeshLocal;
  sub_B16F98(&v26->fields.standFigure, MeshLocal);
  v35 = this->fields.CS___8__locals1;
  if ( !v35 )
    goto LABEL_80;
  v36 = v35->fields.__4__this;
  if ( !v36 )
    goto LABEL_80;
  standFigure = (UnityEngine_Object_o *)v36->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v38 = this->fields.CS___8__locals1;
    if ( v38 )
    {
      v39 = v38->fields.__4__this;
      if ( v39 )
      {
        v39->fields.loadStandFigureId = (int32_t)v15->fields.m_Toggle;
        v40 = this->fields.CS___8__locals1;
        if ( v40 )
        {
          battleActor = v40->fields.battleActor;
          if ( battleActor )
          {
            battleSvtData = battleActor->fields.battleSvtData;
            if ( battleSvtData )
            {
              svtdata = battleSvtData->fields.svtdata;
              if ( svtdata )
              {
                m_Toggle = (int)v15->fields.m_Toggle;
                if ( m_Toggle == ServantEntity__GetTrueSvtId(svtdata, 0LL)
                  || (LimitImageIndex = HIDWORD(v15->fields.m_Toggle), LimitImageIndex == -1) )
                {
                  v54 = this->fields.CS___8__locals1;
                  if ( !v54 )
                    goto LABEL_80;
                  v55 = v54->fields.battleActor;
                  if ( !v55 )
                    goto LABEL_80;
                  v47 = v54->fields.__4__this;
                  LimitImageIndex = BattleActorControl__get_LimitImageIndex(v55, 0LL);
                  if ( !v47 )
                    goto LABEL_80;
                }
                else
                {
                  v46 = this->fields.CS___8__locals1;
                  if ( !v46 )
                    goto LABEL_80;
                  v47 = v46->fields.__4__this;
                  if ( !v47 )
                    goto LABEL_80;
                }
                v47->fields.loadStandFigureLimitCount = LimitImageIndex;
                v56 = this->fields.CS___8__locals1;
                if ( v56 )
                {
                  v57 = v56->fields.__4__this;
                  if ( v57 )
                  {
                    v58 = (UnityEngine_Component_o *)v57->fields.standFigure;
                    if ( v58 )
                    {
                      v59 = UnityEngine_Component__get_gameObject(v58, 0LL);
                      v60 = this->fields.CS___8__locals1;
                      if ( v60 )
                      {
                        v61 = v60->fields.__4__this;
                        if ( v61 )
                        {
                          v62 = (UnityEngine_Object_o *)v59;
                          StandFigureMName = StandFigureManager__CreateStandFigureMName(
                                               v61->fields.loadStandFigureId,
                                               v61->fields.loadStandFigureLimitCount,
                                               0LL);
                          if ( v62 )
                          {
                            UnityEngine_Object__set_name(v62, StandFigureMName, 0LL);
                            v64 = this->fields.CS___8__locals1;
                            if ( v64 )
                            {
                              v65 = v64->fields.__4__this;
                              if ( v65 )
                              {
                                v66 = (UIStandFigureRender_o *)v65->fields.standFigure;
                                if ( v66 )
                                {
                                  UIStandFigureRender__SetDepth(v66, 0.0, 0LL);
                                  v71 = this->fields.CS___8__locals1;
                                  if ( v71 )
                                  {
                                    v72 = v71->fields.__4__this;
                                    if ( v72 )
                                    {
                                      v73 = v72->fields.standFigure;
                                      loadStandFigureId = v72->fields.loadStandFigureId;
                                      loadStandFigureLimitCount = v72->fields.loadStandFigureLimitCount;
                                      faceType = v72->fields.faceType;
                                      _9__4 = this->fields.__9__4;
                                      if ( !_9__4 )
                                      {
                                        _9__4 = (System_Action_o *)sub_B170CC(
                                                                     System_Action_TypeInfo,
                                                                     v67,
                                                                     v68,
                                                                     v69,
                                                                     v70);
                                        System_Action___ctor(
                                          _9__4,
                                          (Il2CppObject *)this,
                                          Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                          0LL);
                                        this->fields.__9__4 = _9__4;
                                        sub_B16F98(&this->fields.__9__4, _9__4);
                                      }
                                      if ( v73 )
                                      {
                                        if ( UIStandFigureM__SetCharacter_40866952(
                                               v73,
                                               loadStandFigureId,
                                               loadStandFigureLimitCount,
                                               faceType,
                                               _9__4,
                                               1,
                                               0LL) )
                                        {
                                          return;
                                        }
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
    sub_B170D4();
  }
LABEL_77:
  v78 = this->fields.CS___8__locals1;
  if ( !v78 )
    goto LABEL_80;
  v79 = v78->fields.__4__this;
  if ( !v79 )
    goto LABEL_80;
  BattleSequenceManager__LoadEndStandFigure(v79, this->fields.obj, v78->fields.onComplete, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_B170D4();
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_0___ctor(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass74_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass77_0___ctor(
        BattleSequenceManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass77_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  sub_B16F98(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, obj, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  v23 = sub_AAFEF8(obj, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))sub_B170AC(v15, v28);
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
                  v14 = sub_AAFEF8(obj, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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