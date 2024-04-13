void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E57F9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSequenceManager_TypeInfo, v1, v2, v3);
    byte_42E57F9 = 1;
  }
  BattleSequenceManager_TypeInfo->static_fields->defaultForceObi_16_9 = 1;
  BattleSequenceManager_TypeInfo->static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
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
  System_Array_o *v59; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v65; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v66; // x20
  System_RuntimeFieldHandle_o v67; // 0:w1.4

  if ( (byte_42E57F8 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformance_BattleUIPanel___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_HashSet_string__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Object___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_Action__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&System_Collections_Generic_List_Object__TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v50, v51, v52);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v53,
      v54,
      v55);
    sub_B5D5C4(&StringLiteral_9491/*"N_{0}{1}"*/, v56, v57, v58);
    byte_42E57F8 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v59 = (System_Array_o *)sub_B5D5DC(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v67.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v59, v67, 0LL);
  this->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v59;
  sub_B5D560(&this->fields.FadeTargetPanelIndexs);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v60;
  sub_B5D560(&this->fields.ReleaseSoundNames);
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v61;
  sub_B5D560(&this->fields.DelayInvokeMethodList);
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9491/*"N_{0}{1}"*/;
  sub_B5D560(&this->fields.PosNodeFormatNP);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v62;
  sub_B5D560(&this->fields.npEndDeleteObjects);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v63;
  sub_B5D560(&this->fields.battleTargetList);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v64;
  sub_B5D560(&this->fields.createdObjects);
  v65 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v65,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v65;
  sub_B5D560(&this->fields.playAudioSyncGroupIndexDict);
  v66 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v66,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v66;
  sub_B5D560(&this->fields.playedAudioGroupIdHash);
  this->fields.nowTargetAlpha = 1.0;
  this->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 3LL);
  sub_B5D560(&this->fields.saveWaitEnemy);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E57DC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)actor, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v6, v7, v8);
    byte_42E57DC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v9 )
  {
    if ( !actor )
      sub_B5D69C(v9, v10);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_24205092(actor, (System_String_o *)StringLiteral_23499/*"wait"*/, 0, 0LL);
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
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_42E57F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_string___, (_DWORD)bgmName, (_DWORD)method, v3);
    byte_42E57F2 = 1;
  }
  if ( System_String__Equals_44636544(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_1CA5180 *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_19408704(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_19408704(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
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
  BattleSequenceManager___c__DisplayClass77_0_o *v19; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v21; // x1
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v23; // x21
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v27; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v31; // x24

  if ( (byte_42E57C4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)onComplete, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__, v13, v14, v15);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo, v16, v17, v18);
    byte_42E57C4 = 1;
  }
  v19 = (BattleSequenceManager___c__DisplayClass77_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass77_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_17;
  v19->fields.__4__this = this;
  sub_B5D560(&v19->fields);
  v19->fields.obj = obj;
  sub_B5D560(&v19->fields.obj);
  v19->fields.onComplete = onComplete;
  sub_B5D560(&v19->fields.onComplete);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_17;
  v23 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_17;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v23 )
    goto LABEL_17;
  this->fields.standFigure = StandFigureManager__CreateMeshLocal(v23, (UnityEngine_GameObject_o *)Instance, 0LL);
  p_standFigure = &this->fields.standFigure;
  sub_B5D560(&this->fields.standFigure);
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
          v27 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v19,
            Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v27 )
            return UIStandFigureM__SetCharacter_40953484(
                     v27,
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
    sub_B5D69C(Instance, v21);
  }
  return 0;
}


void __fastcall BattleSequenceManager__CrossFadeBgm(BattleSequenceManager_o *this, const MethodInfo *method)
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
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o **p_BackupBgmName; // x20
  System_String_o *v64; // x21
  __int64 Instance; // x0
  __int64 v66; // x1
  System_String_o *BgmName; // x0
  const MethodInfo *v68; // x3
  BgmPlayArgsGroup_o *v69; // x19
  _BOOL8 v70; // x0
  __int64 v71; // x1
  Il2CppObject *current; // x20
  float v73; // s0
  double v74; // d0
  int32_t v75; // w21
  const MethodInfo_234BB7C *v76; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  System_Object_array *v78; // x20
  __int64 v79; // x0
  __int64 v80; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v83; // x8
  struct BattlePerformance_o *v84; // x8
  BattleSequenceManager_c *v85; // x0
  Il2CppObject *v86; // x21
  __int64 v87; // x1
  Il2CppObject *v88; // x21
  __int64 v89; // x1
  Il2CppObject *v90; // x21
  __int64 v91; // x1
  __int64 v92; // x1
  System_Collections_Hashtable_o *v93; // x0
  System_String_o *v94; // x19
  __int64 v95; // x0
  __int64 v96; // x0
  int v97; // [xsp+4h] [xbp-7Ch] BYREF
  System_Nullable_long__o v98; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v99; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v102; // 0:x1.8
  System_Nullable_float__o v103; // 0:x2.8
  System_Nullable_long__o v104; // 0:x0.16

  if ( (byte_42E57DD & 1) == 0 )
  {
    sub_B5D5C4(&BattleSequenceManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v26, v27, v28);
    sub_B5D5C4(&object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&float_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v38, v39, v40);
    sub_B5D5C4(&SoundManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_10047/*"OnChangeBgmVolume"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v56, v57, v58);
    sub_B5D5C4(&iTween_TypeInfo, v59, v60, v61);
    byte_42E57DD = 1;
  }
  memset(&v99, 0, sizeof(v99));
  changeFieldAfter = this->fields.changeFieldAfter;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( changeFieldAfter )
  {
    this->fields.BackupBgmName = BattleActionData_AfterChangeField__GetPriorityBgmName(
                                   changeFieldAfter,
                                   this->fields.performance,
                                   this->fields.BackupBgmName,
                                   0LL);
    sub_B5D560(&this->fields.BackupBgmName);
  }
  v64 = *p_BackupBgmName;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0LL);
  if ( !System_String__op_Inequality(v64, BgmName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Instance = sub_B5D5DC(object___TypeInfo, 8LL);
    if ( !Instance )
      goto LABEL_81;
    v78 = (System_Object_array *)Instance;
    v79 = StringLiteral_19153/*"from"*/;
    if ( StringLiteral_19153/*"from"*/ )
    {
      v79 = sub_B5D684(StringLiteral_19153/*"from"*/, v78->obj.klass->_1.element_class);
      if ( !v79 )
        goto LABEL_82;
      v80 = StringLiteral_19153/*"from"*/;
    }
    else
    {
      v80 = 0LL;
    }
    if ( !v78->max_length )
      goto LABEL_80;
    v78->m_Items[0] = (Il2CppObject *)v80;
    sub_B5D560(v78->m_Items);
    v85 = BattleSequenceManager_TypeInfo;
    if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v85 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v98.fields.value = v85->static_fields->NoblePhantasmBgmVolumeRate;
    v79 = j_il2cpp_value_box_0(float_TypeInfo, &v98);
    v86 = (Il2CppObject *)v79;
    if ( !v79 || (v79 = sub_B5D684(v79, v78->obj.klass->_1.element_class)) != 0 )
    {
      if ( v78->max_length <= 1 )
        goto LABEL_80;
      v78->m_Items[1] = v86;
      sub_B5D560(&v78->m_Items[1]);
      v79 = StringLiteral_23019/*"to"*/;
      if ( StringLiteral_23019/*"to"*/ )
      {
        v79 = sub_B5D684(StringLiteral_23019/*"to"*/, v78->obj.klass->_1.element_class);
        if ( !v79 )
          goto LABEL_82;
        v87 = StringLiteral_23019/*"to"*/;
      }
      else
      {
        v87 = 0LL;
      }
      if ( v78->max_length <= 2 )
        goto LABEL_80;
      v78->m_Items[2] = (Il2CppObject *)v87;
      sub_B5D560(&v78->m_Items[2]);
      LODWORD(fadeTime.fields.value) = 1;
      v79 = j_il2cpp_value_box_0(int_TypeInfo, &fadeTime);
      v88 = (Il2CppObject *)v79;
      if ( !v79 || (v79 = sub_B5D684(v79, v78->obj.klass->_1.element_class)) != 0 )
      {
        if ( v78->max_length <= 3 )
          goto LABEL_80;
        v78->m_Items[3] = v88;
        sub_B5D560(&v78->m_Items[3]);
        v79 = StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          v79 = sub_B5D684(StringLiteral_22982/*"time"*/, v78->obj.klass->_1.element_class);
          if ( !v79 )
            goto LABEL_82;
          v89 = StringLiteral_22982/*"time"*/;
        }
        else
        {
          v89 = 0LL;
        }
        if ( v78->max_length <= 4 )
          goto LABEL_80;
        v78->m_Items[4] = (Il2CppObject *)v89;
        sub_B5D560(&v78->m_Items[4]);
        v97 = 1056964608;
        v79 = j_il2cpp_value_box_0(float_TypeInfo, &v97);
        v90 = (Il2CppObject *)v79;
        if ( !v79 || (v79 = sub_B5D684(v79, v78->obj.klass->_1.element_class)) != 0 )
        {
          if ( v78->max_length <= 5 )
            goto LABEL_80;
          v78->m_Items[5] = v90;
          sub_B5D560(&v78->m_Items[5]);
          v79 = StringLiteral_21551/*"onupdate"*/;
          if ( StringLiteral_21551/*"onupdate"*/ )
          {
            v79 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v78->obj.klass->_1.element_class);
            if ( !v79 )
              goto LABEL_82;
            v91 = StringLiteral_21551/*"onupdate"*/;
          }
          else
          {
            v91 = 0LL;
          }
          if ( v78->max_length <= 6 )
            goto LABEL_80;
          v78->m_Items[6] = (Il2CppObject *)v91;
          sub_B5D560(&v78->m_Items[6]);
          v79 = StringLiteral_10047/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10047/*"OnChangeBgmVolume"*/ )
          {
            v92 = 0LL;
LABEL_70:
            if ( v78->max_length > 7 )
            {
              v78->m_Items[7] = (Il2CppObject *)v92;
              sub_B5D560(&v78->m_Items[7]);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v93 = iTween__Hash(v78, 0LL);
              iTween__ValueTo(gameObject, v93, 0LL);
              return;
            }
LABEL_80:
            v95 = sub_B5D6C8(v79);
            sub_B5D668(v95, 0LL);
          }
          v79 = sub_B5D684(StringLiteral_10047/*"OnChangeBgmVolume"*/, v78->obj.klass->_1.element_class);
          if ( v79 )
          {
            v92 = StringLiteral_10047/*"OnChangeBgmVolume"*/;
            goto LABEL_70;
          }
        }
      }
    }
LABEL_82:
    v96 = sub_B5D6BC();
    sub_B5D668(v96, 0LL);
  }
  Instance = BattleSequenceManager__ExistBackupBgmPlayGroup(
               this,
               this->fields.changeFieldAfter != 0LL,
               this->fields.BackupBgmName,
               v68);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( Instance )
    {
      Instance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)Instance, 0LL);
      if ( Instance )
      {
        v69 = (BgmPlayArgsGroup_o *)Instance;
        Instance = *(_QWORD *)(Instance + 16);
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v99,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          while ( 1 )
          {
            v70 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v99,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v70 )
              break;
            current = v99.fields.current;
            if ( !v99.fields.current )
              sub_B5D69C(v70, v71);
            v73 = (float)(__int64)v99.fields.current[2].klass + -800.0;
            if ( v73 == INFINITY )
              v74 = -INFINITY;
            else
              v74 = v73;
            v75 = UnityEngine_Mathf__Max_41629432(0, (int)v74, 0LL);
            fadeTime = 0LL;
            p_fadeTime = (System_Nullable_float__o)&fadeTime;
            System_Nullable_float____ctor(
              p_fadeTime,
              0.5,
              (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&v104.fields.has_value = v75;
            v98.fields.value = 0LL;
            *(_QWORD *)&v98.fields.has_value = 0LL;
            v104.fields.value = (int64_t)&v98;
            System_Nullable_long____ctor(v104, Method_System_Nullable_long___ctor__, v76);
            v103 = fadeTime;
            v102 = 0LL;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v102, v103, v98, 0LL);
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v99,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_23964048(v69, 0LL, 0LL);
          return;
        }
      }
    }
LABEL_81:
    sub_B5D69C(Instance, v66);
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
    Instance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v83 = this->fields.performance;
      if ( v83 )
      {
        Instance = (__int64)v83->fields.logic;
        if ( Instance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)Instance, 0LL, 0LL);
          v84 = this->fields.performance;
          if ( v84 )
          {
            Instance = (__int64)v84->fields.logic;
            if ( Instance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)Instance, 0.5, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_81;
    }
  }
  v94 = *p_BackupBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v94, 0LL);
}


bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BattleSequenceManager___c__DisplayClass140_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20

  if ( (byte_42E57F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm, (_DWORD)checkBgmName, method);
    sub_B5D5C4(&Method_System_Func_BgmPlayArgs__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_BgmPlayArgs__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__, v13, v14, v15);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass140_0_TypeInfo, v16, v17, v18);
    byte_42E57F4 = 1;
  }
  v19 = (BattleSequenceManager___c__DisplayClass140_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass140_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass140_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.checkBgmName = checkBgmName;
  sub_B5D560(&v19->fields);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                               backupBgmPlayArgsGroup,
                                                               0LL);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v19,
    Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v23,
           (System_Func_TSource__bool__o *)v24,
           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
}


void __fastcall BattleSequenceManager__FadeBattleUI(
        BattleSequenceManager_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  BattleSequenceManager_o *v8; // x19
  struct BattlePerformance_BattleUIPanel_array *FadeTargetPanelIndexs; // x21
  __int64 v10; // x8
  unsigned __int64 v11; // x22
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v16; // x8
  __int64 v17; // x0

  v8 = this;
  if ( (byte_42E57D4 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v4, v5);
    byte_42E57D4 = 1;
  }
  FadeTargetPanelIndexs = v8->fields.FadeTargetPanelIndexs;
  v8->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_25;
  v10 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      this = (BattleSequenceManager_o *)v8->fields.performance;
      if ( !this )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        (BattlePerformance_o *)this,
                                        FadeTargetPanelIndexs->m_Items[v11 + 1],
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
      LODWORD(v10) = FadeTargetPanelIndexs->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B5D69C(this, method);
  }
LABEL_15:
  performance = v8->fields.performance;
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
    v16 = v8->fields.performance;
    if ( !v16 )
      goto LABEL_25;
    this = (BattleSequenceManager_o *)v16->fields.root_drop;
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  BattleSequenceManager___c__DisplayClass74_0_o *v84; // x22
  System_Collections_Generic_IEnumerable_T__o *v85; // x0
  __int64 v86; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x21
  BattleSequenceManager___c_c *v88; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_0; // x23
  Il2CppObject *v91; // x24
  struct BattleSequenceManager___c_StaticFields *v92; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v93; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v94; // x21
  System_Collections_Generic_IEnumerable_T__o *v95; // x0
  BattleSequenceManager___c_c *v96; // x0
  struct BattleSequenceManager___c_StaticFields *v97; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_2; // x19
  Il2CppObject *v99; // x22
  struct BattleSequenceManager___c_StaticFields *v100; // x0
  __int64 v101; // x1
  System_Collections_Generic_List_Enumerator_T__o v102; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E57C3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___,
      (_DWORD)sequence,
      (_DWORD)syncGroupName,
      method);
    sub_B5D5C4(&Method_System_Comparison_USFGOPlayAudioEvent___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v36, v37, v38);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___,
      v39,
      v40,
      v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v45, v46, v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v60, v61, v62);
    sub_B5D5C4(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__, v69, v70, v71);
    sub_B5D5C4(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__, v72, v73, v74);
    sub_B5D5C4(
      &Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
      v75,
      v76,
      v77);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&BattleSequenceManager___c_TypeInfo, v81, v82, v83);
    byte_42E57C3 = 1;
  }
  memset(&v102, 0, sizeof(v102));
  v84 = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass74_0___ctor(v84, 0LL);
  if ( !v84 )
    goto LABEL_31;
  v84->fields.syncGroupName = syncGroupName;
  sub_B5D560(&v84->fields);
  v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v87,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_31;
  v85 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                         sequence,
                                                         (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v87 )
    goto LABEL_31;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v87,
    v85,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v88 = BattleSequenceManager___c_TypeInfo;
  if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v88 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v88->static_fields;
  _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v88->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v88);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v91 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__74_0,
      v91,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    v92 = BattleSequenceManager___c_TypeInfo->static_fields;
    v92->__9__74_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__74_0;
    sub_B5D560(&v92->__9__74_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v87,
    (System_Comparison_T__o *)_9__74_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v93 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v93,
    (Il2CppObject *)v84,
    Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v87,
          (System_Func_T__bool__o *)v93,
          (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v94 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v94,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    v85 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                           sequence,
                                                           (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v94 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v94,
        v85,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v95 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                             sequence,
                                                             (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v94,
        v95,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v96 = BattleSequenceManager___c_TypeInfo;
      if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v96 = BattleSequenceManager___c_TypeInfo;
      }
      v97 = v96->static_fields;
      _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v97->__9__74_2;
      if ( !_9__74_2 )
      {
        if ( (BYTE3(v96->vtable._0_Equals.methodPtr) & 4) != 0 && !v96->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v96);
          v97 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v99 = (Il2CppObject *)v97->__9;
        _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__74_2,
          v99,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
        v100 = BattleSequenceManager___c_TypeInfo->static_fields;
        v100->__9__74_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__74_2;
        sub_B5D560(&v100->__9__74_2);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v94,
        (System_Comparison_T__o *)_9__74_2,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v102,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v94,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v102,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v102.fields.current )
          sub_B5D69C(0LL, v101);
      }
      while ( (((__int64 (*)(void))v102.fields.current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v102,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_31:
    sub_B5D69C(v85, v86);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *actor; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  int32_t ServantId; // w0

  if ( (byte_42E57C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleActorControl___,
      curLimCnt,
      svtId,
      *(_QWORD *)&defLimCnt);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E57C7 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_B5D69C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_srcLineSprite, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetFieldPosNode(
        BattleSequenceManager_o *this,
        int32_t pos,
        System_String_o *format,
        bool isEnemy,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 *v17; // x8
  Il2CppObject *v18; // x22
  WebViewManager_o *Instance; // x21
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  __int64 v22; // x1
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E57E7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, pos, (_DWORD)format, isEnemy);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6072/*"Enemy"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10824/*"Player"*/, v14, v15, v16);
    byte_42E57E7 = 1;
  }
  v17 = &StringLiteral_6072/*"Enemy"*/;
  if ( !isEnemy )
    v17 = &StringLiteral_10824/*"Player"*/;
  v18 = (Il2CppObject *)*v17;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v24 = pos;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v21 = System_String__Format_44573324(format, v18, v20, 0LL);
  if ( !Instance )
    sub_B5D69C(v21, v22);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v21, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
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
  BattleSequenceManager___c__DisplayClass121_0_o *v18; // x21
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_42E57E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      posIndex,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__, v12, v13, v14);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass121_0_TypeInfo, v15, v16, v17);
    byte_42E57E8 = 1;
  }
  v18 = (BattleSequenceManager___c__DisplayClass121_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass121_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass121_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  v18->fields.posIndex = posIndex;
  battleTargetList = this->fields.battleTargetList;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)battleTargetList,
                                        (System_Predicate_T__o *)v22,
                                        (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v19 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v19 )
      return UnityEngine_GameObject__get_transform(v19, 0LL);
LABEL_9:
    sub_B5D69C(v19, v20);
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
  sub_B5D560(fxdVoice);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_B5D560(fxdVoice);
  return 1;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *actor; // x21
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42E57F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E57F3 = 1;
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
  v12 = this->fields.actor;
  if ( !v12 )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_18:
    sub_B5D69C(v12, v11);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_srcLineSprite, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
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
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *webView; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  if ( (byte_42E57F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7, v8, v9);
    byte_42E57F5 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v11 )
    goto LABEL_21;
  webView = (UnityEngine_Object_o *)v11->fields.webView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(webView, 0LL, 0LL) )
    return 0;
  v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v11 )
    goto LABEL_21;
  v11 = (WebViewManager_o *)v11->fields.webView;
  if ( !v11 )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v11,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (WebViewManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B5D69C(v11, v12);
  return LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) == 0;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v6; // x1

  if ( (byte_42E57F7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E57F7 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return !UnityEngine_Object__op_Equality(performance, 0LL, 0LL)
      && BattleSequenceManager__get_isAuthTDAccelerate(this, v6);
}


void __fastcall BattleSequenceManager__LoadBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_string__o *IsNullOrEmpty; // x0
  __int64 v11; // x1

  if ( (byte_42E57C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)bgmName, (_DWORD)callback, method);
    sub_B5D5C4(&SoundManager_TypeInfo, v7, v8, v9);
    byte_42E57C5 = 1;
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
    sub_B5D69C(IsNullOrEmpty, v11);
  }
  IsNullOrEmpty = this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
    (EventMissionProgressRequest_Argument_ProgressData_o *)bgmName,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
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

  if ( (byte_42E57C6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)obj, (_DWORD)onComplete, method);
    byte_42E57C6 = 1;
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
      sub_B5D69C(0LL, v8);
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
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *monitor; // x0
  __int64 v17; // x1
  struct BattlePerformance_o *v18; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v20; // x8
  struct BattleData_o *v21; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  srcLineSprite_o *v24; // x21
  __int64 *v25; // x8
  struct BattlePerformance_o *v26; // x9
  System_String_o *v27; // x19
  BattleData_o *v28; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s8
  float v34; // s9
  float v35; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E57E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)CoreObj, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_18547/*"en_Parts_Up01"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_18546/*"en_Parts_Under01"*/, v12, v13, v14);
    byte_42E57E3 = 1;
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
    monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)monitor & 1) == 0 )
    {
      v18 = this->fields.performance;
      if ( !v18 )
        goto LABEL_61;
      data = (UnityEngine_Object_o *)v18->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        v20 = this->fields.performance;
        if ( !v20 )
          goto LABEL_61;
        v21 = v20->fields.data;
        if ( !v21 )
          goto LABEL_61;
        if ( v21->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_61;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              CoreObj,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
          if ( ((unsigned __int8)monitor & 1) == 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_61;
            monitor = (UnityEngine_GameObject_o *)Component_srcLineSprite[18].monitor;
            if ( !monitor )
              goto LABEL_61;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)monitor, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                monitor = this->fields.SingleTarget;
                if ( !monitor )
                  goto LABEL_61;
                v24 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        monitor,
                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v24,
                                                        0LL,
                                                        0LL);
                if ( ((unsigned __int8)monitor & 1) == 0 )
                {
                  if ( !v24 )
                    goto LABEL_61;
                  if ( LOBYTE(v24[3].fields.mcTweenAlphaP) )
                  {
                    monitor = *(UnityEngine_GameObject_o **)&v24[3].fields.mtIsUpdate;
                    if ( !monitor )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)monitor, 0LL) )
                      goto LABEL_43;
                    monitor = *(UnityEngine_GameObject_o **)&v24[3].fields.mtIsUpdate;
                    if ( !monitor )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)monitor, 0LL) )
                    {
LABEL_43:
                      monitor = *(UnityEngine_GameObject_o **)&v24[3].fields.mtIsUpdate;
                      if ( !monitor )
                        goto LABEL_61;
                      monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                              (BattleServantData_o *)monitor,
                                                              0LL);
                      if ( ((unsigned __int8)monitor & 1) != 0 )
                      {
                        v25 = &StringLiteral_18547/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        monitor = *(UnityEngine_GameObject_o **)&v24[3].fields.mtIsUpdate;
                        if ( !monitor )
                          goto LABEL_61;
                        monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                (BattleServantData_o *)monitor,
                                                                0LL);
                        if ( ((unsigned __int8)monitor & 1) == 0 )
                          return 0;
                        v25 = &StringLiteral_18546/*"en_Parts_Under01"*/;
                      }
                      v26 = this->fields.performance;
                      if ( !v26 )
                        goto LABEL_61;
                      v27 = (System_String_o *)*v25;
                      v28 = v26->fields.data;
                      monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_srcLineSprite,
                                                              0LL);
                      if ( !v28 )
                        goto LABEL_61;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v28,
                                                                    (UnityEngine_Transform_o *)monitor,
                                                                    v27,
                                                                    0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                0LL);
                        if ( monitor )
                        {
                          *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)monitor,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v33 = v30;
                            v34 = v31;
                            v35 = v32;
                            monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    TransformChild,
                                                                    0LL);
                            if ( monitor )
                            {
                              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)monitor, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                      0LL);
                              if ( monitor )
                              {
                                v41.fields.x = v33 - x;
                                v41.fields.y = v34 - y;
                                v41.fields.z = v35 - z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)monitor, v41, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_61:
                        sub_B5D69C(monitor, v17);
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
    sub_B5D69C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = &v3->fields.BgChangedCallback;
    System_Action__Invoke(BgChangedCallback, 0LL);
    *p_BgChangedCallback = 0LL;
    sub_B5D560(p_BgChangedCallback);
  }
}


void __fastcall BattleSequenceManager__OnChangeBgmVolume(
        BattleSequenceManager_o *this,
        float newValue,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
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
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v24; // x19
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  __int64 v30; // x19
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x8
  System_String_o *v42; // x20
  float v43; // s9
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0

  if ( (byte_42E57D8 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v16, v17, v18);
    byte_42E57D8 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v20 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v20 )
      sub_B5D69C(0LL, v21);
    klass = v20->klass;
    v24 = v20;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(v20, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v22);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v24,
            *(_QWORD *)(p_method + 8));
    if ( !v30 )
      sub_B5D69C(0LL, v28);
    while ( 1 )
    {
      v31 = *(_QWORD *)v30;
      if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
            goto LABEL_16;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_16:
        v34 = sub_AF54C0(v30, System_Collections_IEnumerator_TypeInfo, 0LL, v29);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
        break;
      v36 = *(_QWORD *)v30;
      if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
      {
        v37 = 0LL;
        v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v38 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
            goto LABEL_23;
        }
        v39 = v36 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_23:
        v39 = sub_AF54C0(v30, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v35);
      }
      v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v30, *(_QWORD *)(v39 + 8));
      if ( !v41 )
        sub_B5D69C(0LL, v40);
      v42 = *(System_String_o **)(v41 + 16);
      v43 = *(float *)(v41 + 24);
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v42, v43 * newValue, 0LL);
    }
    v44 = *(_QWORD *)v30;
    if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
          goto LABEL_34;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_34:
      v47 = sub_AF54C0(v30, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v30, *(_QWORD *)(v47 + 8));
  }
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
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
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  const MethodInfo *v74; // x2
  UnityEngine_Object_o *actorCamera; // x20
  srcLineSprite_o *v76; // x1
  const MethodInfo *v77; // x2
  __int64 transform; // x0
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  Il2CppObject *v86; // x20
  int v87; // w20
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v90; // x21
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v92; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v95; // x10
  unsigned __int64 v96; // x22
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v98; // x21
  struct System_Collections_Generic_List_bool__o *v99; // x27
  char *v100; // x8
  int v101; // w27
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v104; // x24
  __int64 v105; // x25
  unsigned __int64 v106; // x9
  unsigned __int64 v107; // x26
  UnityEngine_Object_o *v108; // x21
  struct BattlePerformance_o *v109; // x9
  struct UnityEngine_GameObject_array *v110; // x8
  unsigned int *v111; // x27
  __int64 v112; // x21
  struct BattlePerformance_o *v113; // x8
  struct UnityEngine_GameObject_array *v114; // x24
  __int64 v115; // x8
  unsigned __int64 v116; // x25
  UnityEngine_Object_o *v117; // x21
  struct System_Collections_Generic_List_bool__o *v118; // x28
  char *v119; // x8
  int v120; // w28
  UnityEngine_Object_o *v121; // x21
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v123; // x8
  struct BattlePerformance_o *v124; // x8
  struct UnityEngine_GameObject_array *v125; // x22
  __int64 v126; // x8
  unsigned __int64 v127; // x24
  UnityEngine_Object_o *v128; // x21
  BattleActorControl_o *v129; // x0
  const MethodInfo *v130; // x2
  struct BattlePerformance_o *v131; // x8
  struct UnityEngine_GameObject_array *v132; // x22
  __int64 v133; // x8
  unsigned __int64 v134; // x24
  UnityEngine_Object_o *v135; // x21
  BattleActorControl_o *v136; // x0
  const MethodInfo *v137; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v140; // x2
  UnityEngine_Camera_o *v141; // x21
  int32_t cullingMask; // w22
  char v143; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v145; // w22
  char v146; // w0
  struct BattlePerformance_o *v147; // x8
  UnityEngine_Object_o *v148; // x21
  bool v149; // w0
  struct BattlePerformance_o *v150; // x8
  BattlePerformance_o *v151; // x20
  int32_t v152; // w21
  int32_t CurrentGroundType; // w0
  __int64 v154; // x0
  __int64 v155; // x0
  struct UnityEngine_GameObject_o **v156; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v157; // [xsp+8h] [xbp-B8h] BYREF
  int v158[2]; // [xsp+20h] [xbp-A0h]
  int v159; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v160; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v161; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42E57DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_USSequencer__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CommonUI_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11, v12, v13);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v35, v36, v37);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v38, v39, v40);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Object__Clear__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__get_Count__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__get_Item__, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_9694/*"NoblePhantasm/CutIns"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_2824/*"Battle2D"*/, v71, v72, v73);
    byte_42E57DA = 1;
  }
  entity = 0LL;
  memset(&v161, 0, sizeof(v161));
  memset(&v160, 0, sizeof(v160));
  v159 = 0;
  this->fields.IsPlaying = 0;
  if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v74);
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v77);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v79);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v80);
  BattleSequenceManager__restoreBattleActorTransform(this, v81);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_195;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_23FAE6C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v82) )
    BattleSequenceManager__CrossFadeBgm(this, v83);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v83);
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
    &v157,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v161 = v157;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v161,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v161.fields.current;
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
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
  }
  v158[0] = 208;
  v159 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v161,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  v159 = 0;
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_Object__Clear__);
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v157,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v160 = v157;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v160,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v86 = v160.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v86, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v86, 0LL);
    }
  }
  v158[0] = 284;
  v87 = ++v159;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v160,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v87 && v158[v87 - 1] == 284 )
    v159 = v87 - 1;
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v90 = (UnityEngine_Object_o *)*p_seqObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v90, 0LL);
    *p_seqObject = 0LL;
    sub_B5D560(&this->fields.seqObject);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_195;
  v92 = this->fields.performance;
  v156 = &this->fields.seqObject;
  if ( !v92 )
    goto LABEL_195;
  p_actorlist = v92->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_195;
  e_actorlist = v92->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_195;
  v95 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v95 )
  {
    if ( (int)v95 >= 1 )
    {
      v96 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v96 < max_length )
      {
        v98 = (UnityEngine_Object_o *)p_actorlist->m_Items[v96];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v98, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v99 = this->fields.ActorActiveList;
          if ( !v99 )
            goto LABEL_195;
          if ( v96 >= (unsigned int)v99->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v98 )
            goto LABEL_195;
          v100 = (char *)v99->fields._items + v96;
          v101 = (unsigned __int8)v100[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v98, v100[32] != 0, 0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v98,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v101 != 0, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v96 >= (int)max_length )
          goto LABEL_88;
      }
LABEL_196:
      v154 = sub_B5D6C8(transform);
      sub_B5D668(v154, 0LL);
    }
    LODWORD(v96) = 0;
LABEL_88:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_195;
    v104 = 4LL;
    v105 = 8LL;
    while ( 1 )
    {
      v106 = saveWaitEnemy->max_length;
      v107 = v104 - 4;
      if ( v104 - 4 >= (int)v106 )
        break;
      if ( v107 >= v106 )
        goto LABEL_196;
      v108 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v104);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v109 = this->fields.performance;
        if ( !v109 )
          goto LABEL_195;
        v110 = this->fields.saveWaitEnemy;
        if ( !v110 )
          goto LABEL_195;
        if ( v107 >= v110->max_length )
          goto LABEL_196;
        v111 = (unsigned int *)v109->fields.e_actorlist;
        if ( !v111 )
          goto LABEL_195;
        v112 = *((_QWORD *)&v110->obj.klass + v104);
        if ( v112 )
        {
          transform = sub_B5D684(v112, *(_QWORD *)(*(_QWORD *)v111 + 64LL));
          if ( !transform )
          {
            v155 = sub_B5D6BC();
            sub_B5D668(v155, 0LL);
          }
        }
        if ( v107 >= v111[6] )
          goto LABEL_196;
        *(_QWORD *)&v111[v105] = v112;
        sub_B5D560(&v111[v105]);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v104;
      v105 += 2LL;
      if ( !saveWaitEnemy )
        goto LABEL_195;
    }
    v113 = this->fields.performance;
    if ( !v113 )
      goto LABEL_195;
    v114 = v113->fields.e_actorlist;
    if ( !v114 )
      goto LABEL_195;
    v115 = *(_QWORD *)&v114->max_length;
    if ( (int)v115 >= 1 )
    {
      v116 = 0LL;
      while ( v116 < (unsigned int)v115 )
      {
        v117 = (UnityEngine_Object_o *)v114->m_Items[v116];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v117, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v118 = this->fields.ActorActiveList;
          if ( !v118 )
            goto LABEL_195;
          if ( v118->fields._size <= (unsigned int)(v96 + v116) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          if ( !v117 )
            goto LABEL_195;
          v119 = (char *)v118->fields._items + (int)v96 + (int)v116;
          v120 = (unsigned __int8)v119[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v117, v119[32] != 0, 0LL);
          v121 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)v117,
                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(v121, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v121 )
              goto LABEL_195;
            transform = (__int64)v121[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v120 != 0, 0LL);
          }
        }
        LODWORD(v115) = v114->max_length;
        if ( (__int64)++v116 >= (int)v115 )
          goto LABEL_127;
      }
      goto LABEL_196;
    }
LABEL_127:
    v92 = this->fields.performance;
    if ( !v92 )
      goto LABEL_195;
  }
  data = (UnityEngine_Object_o *)v92->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v123 = this->fields.performance;
    if ( !v123 )
      goto LABEL_195;
    transform = (__int64)v123->fields.data;
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
  v124 = this->fields.performance;
  if ( !v124 )
    goto LABEL_195;
  v125 = v124->fields.p_actorlist;
  if ( !v125 )
    goto LABEL_195;
  v126 = *(_QWORD *)&v125->max_length;
  if ( (int)v126 >= 1 )
  {
    v127 = 0LL;
    while ( v127 < (unsigned int)v126 )
    {
      v128 = (UnityEngine_Object_o *)v125->m_Items[v127];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v128, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v128 )
          goto LABEL_195;
        v129 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)v128,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v129, v130);
      }
      LODWORD(v126) = v125->max_length;
      if ( (__int64)++v127 >= (int)v126 )
        goto LABEL_149;
    }
    goto LABEL_196;
  }
LABEL_149:
  v131 = this->fields.performance;
  if ( !v131 )
    goto LABEL_195;
  v132 = v131->fields.e_actorlist;
  if ( !v132 )
    goto LABEL_195;
  v133 = *(_QWORD *)&v132->max_length;
  if ( (int)v133 >= 1 )
  {
    v134 = 0LL;
    while ( v134 < (unsigned int)v133 )
    {
      v135 = (UnityEngine_Object_o *)v132->m_Items[v134];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v135, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v135 )
          goto LABEL_195;
        v136 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         (UnityEngine_GameObject_o *)v135,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v136, v137);
      }
      LODWORD(v133) = v132->max_length;
      if ( (__int64)++v134 >= (int)v133 )
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
    sub_B5D560(&this->fields.standFigure);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v140) )
    BattleSequenceManager__ReleaseCpk(this, (const MethodInfo *)v76);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v141 = this->fields.actorCamera;
  if ( !v141 )
    goto LABEL_195;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v143 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2824/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v141, (1 << v143) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_195;
  v145 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v146 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2824/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v145 & ~(1 << v146), 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v147 = this->fields.performance;
  if ( !v147 )
    goto LABEL_195;
  transform = (__int64)v147->fields.bgPerf;
  if ( !transform )
    goto LABEL_195;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( this->fields.OnCompleteActorCallback )
  {
    v148 = (UnityEngine_Object_o *)*v156;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v149 = UnityEngine_Object__op_Inequality(v148, 0LL, 0LL);
    v76 = 0LL;
    if ( v149 )
    {
      transform = (__int64)*v156;
      if ( !*v156 )
        goto LABEL_195;
      v76 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    }
    transform = (__int64)this->fields.OnCompleteActorCallback;
    if ( transform )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)transform,
        (System_Uri_o *)v76,
        (const MethodInfo_258B334 *)Method_System_Action_USSequencer__Invoke__);
      goto LABEL_184;
    }
LABEL_195:
    sub_B5D69C(transform, v76);
  }
LABEL_184:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9694/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_195;
  *(_BYTE *)(transform + 129) = 0;
  v150 = this->fields.performance;
  if ( !v150 )
    goto LABEL_195;
  transform = (__int64)v150->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v151 = this->fields.performance;
  if ( !v151 )
    goto LABEL_195;
  transform = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_195;
  v152 = transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v151, v152, CurrentGroundType, 0, 0LL);
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
  BgmPlayArgsGroup_o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v40; // x0
  __int64 v41; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v42; // x20
  __int64 v43; // x3
  Il2CppClass *klass; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v45; // x19
  unsigned __int64 v46; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // x19
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  BattleSequenceManager___c__DisplayClass111_0_o *v57; // x21
  __int64 v58; // x3
  __int64 v59; // x8
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0
  __int64 v63; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v64; // x23
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo_234BB7C *v66; // x3
  BgmPlayArgs_o *args; // x21
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  System_Nullable_long__o v74; // [xsp+8h] [xbp-68h] BYREF
  __int64 v75; // [xsp+18h] [xbp-58h]
  System_Nullable_float__o v76; // 0:x1.8
  System_Nullable_float__o v77; // 0:x2.8
  System_Nullable_long__o v78; // 0:x0.16

  if ( (byte_42E57DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_BgmPlayArgs___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BgmPlayArgs__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BgmPlayArgs__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v29, v30, v31);
    sub_B5D5C4(
      &Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v32,
      v33,
      v34);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass111_0_TypeInfo, v35, v36, v37);
    byte_42E57DF = 1;
  }
  HIDWORD(v75) = 0;
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v38 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v38 )
    {
      v39 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(v38, 0LL);
      v40 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                                v39,
                                                                                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v42 = v40,
            (v40 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(this->fields.backupBgmPlayArgsGroup, 0LL)) == 0LL) )
      {
        sub_B5D69C(v40, v41);
      }
      klass = v40->obj.klass;
      v45 = v40;
      if ( *(_WORD *)&v40->obj.klass->_2.bitflags1 )
      {
        v46 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v46;
          p_offset += 4;
          if ( v46 >= *(unsigned __int16 *)&v40->obj.klass->_2.bitflags1 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_AF54C0(v40, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v43);
      }
      v51 = (*(__int64 (__fastcall **)(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *, _QWORD))p_method)(
              v45,
              *(_QWORD *)(p_method + 8));
      if ( !v51 )
        sub_B5D69C(0LL, v49);
      while ( 1 )
      {
        v52 = *(_QWORD *)v51;
        if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
        {
          v53 = 0LL;
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v53;
            v54 += 4;
            if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
              goto LABEL_21;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_21:
          v55 = sub_AF54C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
          break;
        v57 = (BattleSequenceManager___c__DisplayClass111_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass111_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass111_0___ctor(v57, 0LL);
        v59 = *(_QWORD *)v51;
        if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
        {
          v60 = 0LL;
          v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v61 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v60;
            v61 += 4;
            if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
              goto LABEL_28;
          }
          v62 = v59 + 16LL * *v61 + 312;
        }
        else
        {
LABEL_28:
          v62 = sub_AF54C0(v51, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v58);
        }
        v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v51, *(_QWORD *)(v62 + 8));
        if ( !v57 )
          sub_B5D69C(v63, v63);
        v57->fields.args = (struct BgmPlayArgs_o *)v63;
        sub_B5D560(&v57->fields);
        v64 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v64,
          (Il2CppObject *)v57,
          Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           v42,
                                                                           (System_Func_T__bool__o *)v64,
                                                                           (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          *(_QWORD *)&v78.fields.has_value = USFGOActorBattleActionEventConditional_OverwriteParamCondition[1].klass;
        else
          *(_QWORD *)&v78.fields.has_value = 0LL;
        args = v57->fields.args;
        v74.fields.value = 0LL;
        *(_QWORD *)&v74.fields.has_value = 0LL;
        v78.fields.value = (int64_t)&v74;
        System_Nullable_long____ctor(v78, Method_System_Nullable_long___ctor__, v66);
        if ( !args )
          sub_B5D69C(v68, v69);
        v76 = 0LL;
        v77 = 0LL;
        BgmPlayArgs__Update(args, v76, v77, v74, 0LL);
      }
      v75 = 0x1000000A3LL;
      v70 = *(_QWORD *)v51;
      if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
      {
        v71 = 0LL;
        v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
        {
          ++v71;
          v72 += 4;
          if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
            goto LABEL_41;
        }
        v73 = v70 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_41:
        v73 = sub_AF54C0(v51, System_IDisposable_TypeInfo, 0LL, v56);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v73)(v51, *(_QWORD *)(v73 + 8));
      if ( (_DWORD)v75 == 163 )
        v75 = 163LL;
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_42E57DB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)actor, (_DWORD)method, v3);
    byte_42E57DB = 1;
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
      sub_B5D69C(v5, v6);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
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
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x20
  System_String_o *v25; // x0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x20
  System_Action_o *v27; // x21
  int32_t v28; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E57E0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleSequenceManager__ReleaseCpk_b__112_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9696/*"NoblePhantasm_"*/, v17, v18, v19);
    byte_42E57E0 = 1;
  }
  v28 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v28 = overwriteSvtVoiceId;
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  v25 = System_Int32__ToString((int32_t)&v28, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_44577788(
                                            (System_String_o *)StringLiteral_9696/*"NoblePhantasm_"*/,
                                            v25,
                                            0LL);
  if ( !ReleaseSoundNames
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__),
        DelayInvokeMethodList = this->fields.DelayInvokeMethodList,
        v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v27, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__112_0__, 0LL),
        !DelayInvokeMethodList) )
  {
LABEL_9:
    sub_B5D69C(Instance, v21);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DelayInvokeMethodList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Action__Add__);
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.fixedVoice = 0LL;
  sub_B5D560(&this->fields.fixedVoice);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.intactBgmList = 0LL;
  sub_B5D560(&this->fields.intactBgmList);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E57DE & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E57DE = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  this->fields.backupBgmPlayArgsGroup = BgmManager__ExportPlayArgsGroup(0LL);
  sub_B5D560(&this->fields.backupBgmPlayArgsGroup);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
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
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *SingleTarget; // x20
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v21; // x20
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v23; // x20
  System_String_o **v24; // x8
  __int64 v25; // x9
  __int64 v26; // x25
  System_String_o *v27; // x21
  unsigned __int64 v28; // x26
  unsigned int v29; // w8
  UnityEngine_GameObject_o *v30; // x23
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Transform_o *v32; // x22
  UnityEngine_Transform_o *v33; // x23
  int v34; // s0
  struct BattlePerformance_o *v37; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v41; // s9
  int v42; // s2
  unsigned int v43; // s0
  float v44; // s1
  struct BattlePerformance_o *v45; // x8
  struct BattleData_o *data; // x8
  __int64 v47; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E57E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9489/*"N_Enemy2"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_9490/*"N_Player2"*/, v14, v15, v16);
    byte_42E57E4 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_61;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  v21 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_61;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        actor,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_61;
  performance = this->fields.performance;
  v23 = actor;
  v24 = (System_String_o **)((LOBYTE(actor[19].monitor) != 0) != (LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) != 0)
                           ? &StringLiteral_9489/*"N_Enemy2"*/
                           : &StringLiteral_9490/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_61;
  v25 = 296LL;
  if ( LOBYTE(actor[19].monitor) )
    v25 = 304LL;
  v26 = *(__int64 *)((char *)&performance->klass + v25);
  if ( !v26 )
LABEL_61:
    sub_B5D69C(actor, method);
  if ( (int)*(_QWORD *)(v26 + 24) >= 1 )
  {
    v27 = *v24;
    v28 = 0LL;
    v29 = *(_QWORD *)(v26 + 24);
    do
    {
      if ( v28 >= v29 )
      {
        v47 = sub_B5D6C8(actor);
        sub_B5D668(v47, 0LL);
      }
      v30 = *(UnityEngine_GameObject_o **)(v26 + 32 + 8 * v28);
      v31 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, v31, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v27,
                                              0LL);
        if ( !v30 )
          goto LABEL_61;
        v32 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
        if ( !v32 )
          goto LABEL_61;
        v33 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_position(v32, 0LL);
        if ( !v33 )
          goto LABEL_61;
        UnityEngine_Transform__set_position(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
        v37 = this->fields.performance;
        if ( !v37 )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)v37->fields.data;
        if ( !actor )
          goto LABEL_61;
        if ( BYTE6(actor[29].klass) && LOBYTE(v23[19].monitor) )
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
            v41 = (unsigned int)UnityEngine_Transform__get_position(v32, 0LL);
            *(UnityEngine_Vector3_o *)(&v42 - 2) = UnityEngine_Transform__get_position(v32, 0LL);
            if ( !transform )
              goto LABEL_61;
            v43 = v41;
            v44 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v42 - 2), 0LL);
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
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_61;
          UnityEngine_GameObject__SetActive(v30, 0, 0LL);
          v45 = this->fields.performance;
          if ( !v45 )
            goto LABEL_61;
          data = v45->fields.data;
          if ( !data )
            goto LABEL_61;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v23[19].monitor) )
            UnityEngine_GameObject__SetActive(v30, 1, 0LL);
        }
      }
      v29 = *(_DWORD *)(v26 + 24);
      ++v28;
    }
    while ( (__int64)v28 < (int)v29 );
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
    sub_B5D69C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_B5D560(&this->fields.changeFieldAfter);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleSequenceManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v13; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v15; // x8

  v5 = this;
  if ( (byte_42E57F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v6, v7, v8);
    this = (BattleSequenceManager_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__,
                                        v9,
                                        v10,
                                        v11);
    byte_42E57F0 = 1;
  }
  battleTargetList = v5->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_20;
  v13 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v13 >= size )
      break;
    if ( size <= (unsigned int)v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = battleTargetList->fields._items->m_Items[v13];
    if ( v15 )
    {
      this = (BattleSequenceManager_o *)v15->fields.targetActor;
      if ( this )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        else
          BattleActorControl__setAuraFlip((BattleActorControl_o *)this, (bool)this[1].fields.seqObject, 0LL);
        battleTargetList = v5->fields.battleTargetList;
        ++v13;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_20;
  }
  if ( isReset )
  {
    this = (BattleSequenceManager_o *)v5->fields.actor;
    if ( this )
    {
      this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)this,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( this )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        return;
      }
    }
LABEL_20:
    sub_B5D69C(this, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.fixedVoice = voiceId;
  sub_B5D560(&this->fields.fixedVoice);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E57F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, (_DWORD)bgmIds, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E57F1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  this->fields.intactBgmList = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  sub_B5D560(&this->fields.intactBgmList);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetMultiTargetBattleEnemy(
        BattleSequenceManager_o *this,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleSequenceManager_o *v5; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleData_o *data; // x8
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Component_o *PartsActor; // x21
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Transform_o *v12; // x19
  int v13; // s0

  v5 = this;
  if ( (byte_42E57E2 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)targetActor, (_DWORD)method, v3);
    byte_42E57E2 = 1;
  }
  performance = v5->fields.performance;
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
  v8 = v5->fields.performance;
  if ( !v8 || (this = (BattleSequenceManager_o *)v8->fields.data) == 0LL )
LABEL_25:
    sub_B5D69C(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL) )
  {
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetActor, 0LL);
    v10 = v5->fields.performance;
    if ( v10 )
    {
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v10->fields.root_field, 0LL);
        if ( PartsActor )
        {
          transform = UnityEngine_Component__get_transform(PartsActor, 0LL);
          this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)targetActor,
                                              0LL);
          if ( transform )
          {
            UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)this, 0LL);
            v12 = UnityEngine_Component__get_transform(PartsActor, 0LL);
            *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Vector3__get_zero(0LL);
            if ( v12 )
            {
              UnityEngine_Transform__set_localPosition(v12, *(UnityEngine_Vector3_o *)&v13, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *actor; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v17; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v19; // x8
  struct BattleActorControl_o *targetActor; // x8

  if ( (byte_42E57C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v9, v10, v11);
    byte_42E57C9 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               actor,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          Component_srcLineSprite,
          (BattleFBXComponent_o *)Component_srcLineSprite,
          isStart,
          v14),
        (battleTargetList = this->fields.battleTargetList) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(actor, isStart);
  }
  v17 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v17 >= size )
      break;
    if ( size <= (unsigned int)v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v19 = battleTargetList->fields._items->m_Items[v17];
    if ( v19 )
    {
      targetActor = v19->fields.targetActor;
      if ( targetActor )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          targetActor->fields.fbxcomponent,
          isStart,
          v15);
        battleTargetList = this->fields.battleTargetList;
        ++v17;
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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_42E57CA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)fbx, isStart, method);
    sub_B5D5C4(&StringLiteral_16406/*"_y0"*/, v6, v7, v8);
    byte_42E57CA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v9 )
  {
    if ( !fbx )
      sub_B5D69C(v9, v10);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16406/*"_y0"*/, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *seqObject; // x0
  WellFired_USSequencer_o *Component_srcLineSprite; // x20
  unsigned __int64 v15; // x27
  unsigned __int64 v16; // x26
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x22
  unsigned __int64 max_length; // x8
  __int64 v22; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  UnityEngine_Object_o *v26; // x21
  unsigned __int64 v27; // x25
  unsigned __int64 v28; // x8
  __int64 v29; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E57C8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_USSequencer___,
      (_DWORD)playerList,
      (_DWORD)enemyList,
      method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1860/*"Actors/Actor"*/, v10, v11, v12);
    byte_42E57C8 = 1;
  }
  v30 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_29:
    sub_B5D69C(seqObject, playerList);
  Component_srcLineSprite = (WellFired_USSequencer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v15 = 0LL;
  do
  {
    v16 = v15 + 1;
    v30 = v15 + 1;
    v17 = System_Int32__ToString((int32_t)&v30, 0LL);
    v18 = System_String__Concat_44577788((System_String_o *)StringLiteral_1860/*"Actors/Actor"*/, v17, 0LL);
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
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_29;
      max_length = playerList->max_length;
      if ( (__int64)v15 < (int)max_length )
      {
        if ( v15 >= max_length )
        {
LABEL_30:
          v29 = sub_B5D6C8(seqObject);
          sub_B5D668(v29, 0LL);
        }
        seqObject = playerList->m_Items[v15];
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
    ++v15;
  }
  while ( v16 - 1 < 2 );
  v22 = 4LL;
  do
  {
    v30 = v22;
    v23 = System_Int32__ToString((int32_t)&v30, 0LL);
    v24 = System_String__Concat_44577788((System_String_o *)StringLiteral_1860/*"Actors/Actor"*/, v23, 0LL);
    v26 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v24,
                                    Component_srcLineSprite,
                                    v24,
                                    v25);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v27 = v22 - 4;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_29;
      v28 = enemyList->max_length;
      if ( (__int64)v27 < (int)v28 )
      {
        if ( v27 >= v28 )
          goto LABEL_30;
        seqObject = (UnityEngine_GameObject_o *)*((_QWORD *)&enemyList->obj.klass + v22);
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v26 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v26,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v22;
  }
  while ( v27 < 2 );
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
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
  BattleSequenceManager___c__DisplayClass114_0_o *v53; // x22
  __int64 v54; // x1
  void *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  BattleActionData_o *klass; // x24
  System_Collections_Generic_HashSet_int__o *v58; // x25
  void **p_targetList; // x21
  int v60; // w8
  void *v61; // x25
  unsigned int v62; // w20
  __int64 v63; // x8
  int v64; // w8
  void *v65; // x25
  unsigned int v66; // w20
  __int64 v67; // x8
  int v68; // w8
  void *v69; // x25
  unsigned int v70; // w20
  __int64 v71; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *moveToSubMemberList; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v73; // x25
  int mcTweenAlphaP_low; // w20
  System_Collections_Generic_HashSet_int__o *v75; // x22
  int v76; // w27
  int i; // w28
  __int64 v78; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v82; // x1
  srcLineSprite_o *v83; // x0
  __int64 v84; // x1
  int32_t v85; // w21
  int v86; // w25
  int v87; // w8
  struct UnityEngine_GameObject_o *v88; // x21
  BattleActorControl_o *v89; // x23
  const MethodInfo *v90; // x2
  __int64 v91; // x1
  BattlePerformance_o *v92; // x0
  int32_t v93; // w20
  UnityEngine_Object_o *v94; // x21
  _BOOL8 v95; // x0
  __int64 v96; // x1
  BattleActorControl_o *v97; // x22
  BattleSequenceManager_BattleTarget_o *v98; // x21
  __int64 v99; // x1
  BattlePerformance_o *v100; // x0
  __int64 ServantPosIndex; // x0
  __int64 v102; // x1
  __int64 v103; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  int v105; // w25
  __int64 v106; // x0
  int v107; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v108; // [xsp+18h] [xbp-98h] BYREF
  int v109[3]; // [xsp+30h] [xbp-80h]
  int v110; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_42E57E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData_MoveToSubMember___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleSequenceManager_BattleTarget_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__, v47, v48, v49);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo, v50, v51, v52);
    byte_42E57E1 = 1;
  }
  memset(&j, 0, sizeof(j));
  v110 = 0;
  v53 = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass114_0___ctor(v53, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_B5D560(&this->fields.SingleTarget);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_83;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  klass = (BattleActionData_o *)Component_srcLineSprite[3].klass;
  v58 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v58,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( !v53 )
    goto LABEL_83;
  v53->fields.targetList = v58;
  p_targetList = (void **)&v53->fields.targetList;
  sub_B5D560(&v53->fields);
  if ( !klass )
    goto LABEL_83;
  actor = BattleActionData__getDamageList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v60 = *((_DWORD *)actor + 6);
  v61 = actor;
  if ( v60 >= 1 )
  {
    v62 = 0;
    while ( v62 < v60 )
    {
      v63 = *((_QWORD *)v61 + (int)v62 + 4);
      if ( !v63 )
        goto LABEL_83;
      v54 = *(unsigned int *)(v63 + 28);
      if ( (_DWORD)v54 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v54,
                          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v60 = *((_DWORD *)v61 + 6);
      if ( (int)++v62 >= v60 )
        goto LABEL_20;
    }
LABEL_84:
    v106 = sub_B5D6C8(actor);
    sub_B5D668(v106, 0LL);
  }
LABEL_20:
  actor = BattleActionData__getBuffList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v64 = *((_DWORD *)actor + 6);
  v65 = actor;
  if ( v64 >= 1 )
  {
    v66 = 0;
    while ( v66 < v64 )
    {
      v67 = *((_QWORD *)v65 + (int)v66 + 4);
      if ( !v67 )
        goto LABEL_83;
      v54 = *(unsigned int *)(v67 + 40);
      if ( (_DWORD)v54 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v54,
                          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v64 = *((_DWORD *)v65 + 6);
      if ( (int)++v66 >= v64 )
        goto LABEL_29;
    }
    goto LABEL_84;
  }
LABEL_29:
  actor = BattleActionData__getHealList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v68 = *((_DWORD *)actor + 6);
  v69 = actor;
  if ( v68 >= 1 )
  {
    v70 = 0;
    while ( v70 < v68 )
    {
      v71 = *((_QWORD *)v69 + (int)v70 + 4);
      if ( !v71 )
        goto LABEL_83;
      v54 = *(unsigned int *)(v71 + 28);
      if ( (_DWORD)v54 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v54,
                          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v68 = *((_DWORD *)v69 + 6);
      if ( (int)++v70 >= v68 )
        goto LABEL_38;
    }
    goto LABEL_84;
  }
LABEL_38:
  moveToSubMemberList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)klass->fields.moveToSubMemberList;
  if ( moveToSubMemberList )
  {
    v73 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v73,
      (Il2CppObject *)v53,
      Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      moveToSubMemberList,
      (System_Action_T__o *)v73,
      (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
  }
  mcTweenAlphaP_low = LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP);
  v75 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v75,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  actor = *p_targetList;
  if ( !*p_targetList )
    goto LABEL_83;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v108,
    (System_Collections_Generic_HashSet_int__o *)actor,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v107 = 0;
  j = v108;
  v76 = 0;
LABEL_42:
  for ( i = v76; ; ++i )
  {
    v76 = i;
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      break;
    performance = this->fields.performance;
    if ( !performance )
      sub_B5D69C(0LL, v78);
    current = (int32_t)j.fields._current;
    ServantGameObject = BattlePerformance__getServantGameObject(performance, (int32_t)j.fields._current, 0LL);
    if ( !ServantGameObject )
      sub_B5D69C(0LL, v82);
    v83 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ServantGameObject,
            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !v83 )
      sub_B5D69C(0LL, v84);
    if ( (mcTweenAlphaP_low != 0) == (LOBYTE(v83[3].fields.mcTweenAlphaP) != 0) )
    {
      ++v107;
      goto LABEL_42;
    }
    if ( !v75 )
      sub_B5D69C(v83, v84);
    System_Collections_Generic_HashSet_int___Add(
      v75,
      current,
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v109[0] = 391;
  v110 = 1;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v110 = 0;
  if ( v107 && i == 1 )
  {
    *p_targetList = v75;
    sub_B5D560(p_targetList);
  }
  actor = *p_targetList;
  if ( !*p_targetList )
LABEL_83:
    sub_B5D69C(actor, v54);
  if ( *((_DWORD *)actor + 8) == 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v108,
      (System_Collections_Generic_HashSet_int__o *)actor,
      (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v85 = -1;
    for ( j = v108;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          v85 = (int32_t)j.fields._current )
    {
      ;
    }
    v109[0] = 486;
    v86 = ++v110;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &j,
      (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    if ( v86 )
    {
      v87 = v86 - 1;
      if ( v109[v86 - 1] == 486 )
      {
        --v86;
        v110 = v87;
      }
    }
    actor = this->fields.performance;
    if ( !actor )
      goto LABEL_83;
    actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v85, 0LL);
    if ( !actor )
      goto LABEL_83;
    v88 = (struct UnityEngine_GameObject_o *)actor;
    v89 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)actor,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this->fields.SingleTarget = v88;
    sub_B5D560(&this->fields.SingleTarget);
    BattleSequenceManager__SetMultiTargetBattleEnemy(this, v89, v90);
    if ( !v75 )
      goto LABEL_83;
  }
  else
  {
    v86 = 0;
    if ( !v75 )
      goto LABEL_83;
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v108,
    v75,
    (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  j = v108;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    v92 = this->fields.performance;
    if ( !v92 )
      sub_B5D69C(0LL, v91);
    v93 = (int32_t)j.fields._current;
    v94 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(v92, (int32_t)j.fields._current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v95 = UnityEngine_Object__op_Equality(v94, 0LL, 0LL);
    if ( !v95 )
    {
      if ( !v94 )
        sub_B5D69C(v95, v96);
      v97 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v94,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      v98 = (BattleSequenceManager_BattleTarget_o *)sub_B5D694(BattleSequenceManager_BattleTarget_TypeInfo);
      BattleSequenceManager_BattleTarget___ctor(v98, 0LL);
      v100 = this->fields.performance;
      if ( !v100 )
        sub_B5D69C(0LL, v99);
      ServantPosIndex = BattlePerformance__getServantPosIndex(v100, v93, 0LL);
      if ( !v98 )
        sub_B5D69C(ServantPosIndex, v102);
      BattleSequenceManager_BattleTarget__setup(v98, v97, ServantPosIndex, 0LL);
      battleTargetList = this->fields.battleTargetList;
      if ( !battleTargetList )
        sub_B5D69C(0LL, v103);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)battleTargetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    }
  }
  v109[v86] = 651;
  v105 = ++v110;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v105 && v109[v105 - 1] == 651 )
    v110 = v105 - 1;
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B5D69C(0LL, method);
  BattlePerformance__showNobleInfo(performance, -1, 1, 100, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SwitchPopupFullScreen(
        BattleSequenceManager_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleSequenceManager_o *v5; // x20
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *infoComp; // x21
  struct BattlePerformance_o *v8; // x8

  v5 = this;
  if ( (byte_42E57D7 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, isFullScreen, (_DWORD)method, v3);
    byte_42E57D7 = 1;
  }
  performance = v5->fields.performance;
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
    v8 = v5->fields.performance;
    if ( v8 )
    {
      this = (BattleSequenceManager_o *)v8->fields.infoComp;
      if ( this )
      {
        BattleInformationComponent__SwitchPopupFullScreen((BattleInformationComponent_o *)this, isFullScreen, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(this, isFullScreen);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x21
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v21; // x4
  BaseMonoBehaviour_o *v22; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *monitor; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *npEndDeleteObjects; // x22
  int v28; // w22
  UnityEngine_Transform_o *v29; // x0
  WellFired_USTimelineContainer_o *v30; // x0

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_42E57E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___,
      (_DWORD)tlcont,
      targetPosIndex,
      method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Object__Add__, v10, v11, v12);
    this = (BattleSequenceManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E57E6 = 1;
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
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
                                                          v18);
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
        v22 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v22 )
          goto LABEL_40;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        monitor = (UnityEngine_Transform_o *)v22[11].monitor;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v21);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v22,
                                            dummyActorPrefab,
                                            monitor,
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Object__Add__);
        v28 = 0;
      }
      else
      {
        v28 = 1;
      }
      v29 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_UIWidget_(
                                          v29,
                                          (const MethodInfo_1AD6914 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_40;
      v30 = (WellFired_USTimelineContainer_o *)BattleSyncTransformComponent__SetTarget(
                                                 (BattleSyncTransformComponent_o *)this,
                                                 (UnityEngine_Transform_o *)TargetPosIndexTransform,
                                                 (BattleSyncTransformComponent_o *)Component_WebViewObject,
                                                 0LL);
      if ( v28 )
      {
        tlcont = v30;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)tlcont,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Object__Add__);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_40:
      sub_B5D69C(this, tlcont);
    }
  }
}


void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
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
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *klass; // x21
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x0
  System_Collections_ICollection_o *Components_iTween; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v30; // x1
  void *v31; // x8
  unsigned __int64 v32; // x25
  NoblePhantasmTargetOverwriteTransform_o *v33; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E57F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E57F6 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  battleTargetList = this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v38 = v37;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v34 )
        break;
      if ( !v38.fields.current )
        sub_B5D69C(v34, v35);
      monitor = (UnityEngine_Object_o *)v38.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v23 )
      {
        if ( !monitor )
          sub_B5D69C(v23, v24);
        klass = (UnityEngine_Object_o *)monitor[1].klass;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        {
          v27 = (UnityEngine_GameObject_o *)monitor[1].klass;
          if ( !v27 )
            sub_B5D69C(0LL, v26);
          Components_iTween = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                    v27,
                                                                    (const MethodInfo_1CC4648 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_iTween, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_iTween )
              sub_B5D69C(IsNullOrEmpty, v30);
            v31 = Components_iTween[1].monitor;
            if ( (int)v31 >= 1 )
            {
              v32 = 0LL;
              do
              {
                if ( v32 >= (unsigned int)v31 )
                {
                  v36 = sub_B5D6C8(IsNullOrEmpty);
                  sub_B5D668(v36, 0LL);
                }
                v33 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_iTween[2].klass + v32);
                if ( isOverwrite )
                {
                  if ( !v33 )
                    sub_B5D69C(0LL, v30);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v33, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v33 )
                    sub_B5D69C(0LL, v30);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v33, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v31) = Components_iTween[1].monitor;
                ++v32;
              }
              while ( (__int64)v32 < (int)v31 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
  float delayInvokeTimer; // s8
  __int64 v18; // x1
  float v19; // s0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E57C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v14, v15, v16);
    byte_42E57C1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v19 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v19;
    if ( v19 <= 0.0 )
    {
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_13;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v21,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DelayInvokeMethodList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v21,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v21.fields.current )
          System_Action__Invoke((System_Action_o *)v21.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v21,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
LABEL_13:
        sub_B5D69C(DelayInvokeMethodList, v18);
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)DelayInvokeMethodList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_Action__Clear__);
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
  int v2; // w2
  __int64 v3; // x3
  BattleSequenceManager__WaitEndSequence_d__105_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E57D9 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSequenceManager__WaitEndSequence_d__105_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E57D9 = 1;
  }
  v5 = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B5D694(BattleSequenceManager__WaitEndSequence_d__105_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__105___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.__4__this = this;
  sub_B5D560(&v5->fields.__4__this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__112_0(BattleSequenceManager_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E57FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v17, v18, v19);
    byte_42E57FA = 1;
  }
  memset(&v24, 0, sizeof(v24));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ReleaseSoundNames,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v24.fields.current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v24.fields.current, 0LL) )
    {
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B5D69C(0LL, v23);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
LABEL_12:
    sub_B5D69C(ReleaseSoundNames, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)ReleaseSoundNames,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
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

  if ( (byte_42E57CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, (_DWORD)voiceMaster, chrId, labelName);
    byte_42E57CC = 1;
  }
  FlagRequestNumber = System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_18901908((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B5D69C(FlagRequestNumber, v10);
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BattlePerformance_o *performance; // x22
  System_Action_o *v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_42E57D5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, id, tp, parentCamera);
    sub_B5D5C4(&Method_BattleSequenceManager_OnBgChanged__, v19, v20, v21);
    byte_42E57D5 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_B5D560(&this->fields.BgChangedCallback);
  performance = this->fields.performance;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_B5D69C(v24, v25);
  v26.fields.z = v13;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v26.fields.x = v15;
  v26.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v26, v27, 1, parentCamera, v23, 0LL);
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

  if ( (byte_42E57CE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, (_DWORD)voiceMaster, chrId, labelName);
    byte_42E57CE = 1;
  }
  FlagRequestNumber = System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, labelName, 0LL);
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
    sub_B5D69C(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_42E57EB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      (_DWORD)groupName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7, v8);
    byte_42E57EB = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
         (System_Xml_XmlQualifiedName_o *)groupName,
         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               playAudioSyncGroupIndexDict,
               groupName,
               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_B5D69C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E57ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, (_DWORD)method, v2, v3);
    byte_42E57ED = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *actor; // x20
  __int64 v9; // x1
  bool v10; // w8
  BattleActorControl_o *result; // x0
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_42E57BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E57BD = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  result = 0LL;
  if ( v10 )
  {
    v12 = this->fields.actor;
    if ( !v12 )
      sub_B5D69C(0LL, v9);
    return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v12,
                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x20
  UnityEngine_Object_o *v13; // x20
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1

  if ( (byte_42E57C0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8, v9, v10);
    byte_42E57C0 = 1;
  }
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3));
  v12 = **(_QWORD **)(v11 + 192);
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AF52C4(v12);
  v13 = **(UnityEngine_Object_o ***)(v12 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v15);
  return BYTE1(Instance[1].fields.basePanel) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v11; // x8
  struct BattleData_o *v12; // x8

  if ( (byte_42E57BE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E57BE = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v6 )
    return 0;
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v8->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v6 )
    return 0;
  v11 = this->fields.performance;
  if ( !v11 || (v12 = v11->fields.data) == 0LL )
LABEL_16:
    sub_B5D69C(v6, v7);
  return v12->fields.systemflg_acceleration > 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *performance; // x20
  void *Component_srcLineSprite; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v14; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v16; // x20
  struct BattlePerformance_o *v18; // x8

  if ( (byte_42E57BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E57BF = 1;
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
  v11 = this->fields.performance;
  if ( !v11 )
    goto LABEL_30;
  data = (UnityEngine_Object_o *)v11->fields.data;
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
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_srcLineSprite )
    goto LABEL_30;
  v14 = this->fields.performance;
  if ( !v14 )
    goto LABEL_30;
  nowAction = v14->fields.nowAction;
  v16 = (BattleServantData_o *)*((_QWORD *)Component_srcLineSprite + 55);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v16 )
LABEL_30:
    sub_B5D69C(Component_srcLineSprite, v10);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_srcLineSprite + 55), 0LL) )
    return 0;
  Component_srcLineSprite = (void *)BattleServantData__IsFixNpFastSpeed(v16, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    return 1;
LABEL_25:
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_30;
  Component_srcLineSprite = v18->fields.data;
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v27; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v28; // x20

  if ( (byte_42E57D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int___ctor__,
      (_DWORD)performance,
      (_DWORD)actor,
      players);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_HashSet_string__TypeInfo, v21, v22, v23);
    byte_42E57D3 = 1;
  }
  this->fields.performance = performance;
  sub_B5D560(&this->fields.performance);
  this->fields.actor = actor;
  sub_B5D560(&this->fields.actor);
  this->fields.playerActors = players;
  sub_B5D560(&this->fields.playerActors);
  this->fields.enemyActors = enemies;
  sub_B5D560(&this->fields.enemyActors);
  this->fields.actorCamera = camera;
  sub_B5D560(&this->fields.actorCamera);
  if ( !performance
    || (this->fields.effectCamera = performance->fields.middleCamera,
        sub_B5D560(&this->fields.effectCamera),
        this->fields.cutInCamera = performance->fields.cutIncamera,
        sub_B5D560(&this->fields.cutInCamera),
        (actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera) == 0LL)
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
    sub_B5D69C(actorCamera, v25);
  }
  this->fields.originalCameraRoot = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  sub_B5D560(&this->fields.originalCameraRoot);
  this->fields.bgObject = bg;
  sub_B5D560(&this->fields.bgObject);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v26);
  v27 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v27,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v27;
  sub_B5D560(&this->fields.playAudioSyncGroupIndexDict);
  v28 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v28,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v28;
  sub_B5D560(&this->fields.playedAudioGroupIdHash);
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
  __int64 v3; // x3

  if ( (byte_42E57EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, (_DWORD)limitCounts, (_DWORD)method, v3);
    byte_42E57EE = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E57D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1856/*"Actor"*/, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_16537/*"animCamLoc"*/, v5, v6, v7);
    byte_42E57D0 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_1856/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16537/*"animCamLoc"*/, 0LL);
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
  BattleSequenceManager___c__DisplayClass73_0_o *v32; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v34; // x1
  AssetLoader_LoadEndDataHandler_o *v35; // x19

  if ( (byte_42E57C2 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, chrId, treasureDeviceId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17, v18, v19);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__, v23, v24, v25);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass73_0_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9694/*"NoblePhantasm/CutIns"*/, v29, v30, v31);
    byte_42E57C2 = 1;
  }
  v32 = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B5D694(BattleSequenceManager___c__DisplayClass73_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass73_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_11;
  v32->fields.__4__this = this;
  sub_B5D560(&v32->fields);
  v32->fields.onComplete = onComplete;
  v32->fields.chrId = chrId;
  v32->fields.limitCount = limitCount;
  v32->fields.treasureDeviceId = treasureDeviceId;
  v32->fields.treasureDeviceLv = treasureDeviceLv;
  v32->fields.npChargeStage = npChargeStage;
  v32->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  sub_B5D560(&v32->fields.onComplete);
  actor = this->fields.actor;
  this->fields.chrId = v32->fields.chrId;
  this->fields.limitCount = v32->fields.limitCount;
  this->fields.treasureDeviceId = v32->fields.treasureDeviceId;
  this->fields.overwriteSvtVoiceId = v32->fields.overwriteSvtVoiceId;
  if ( !actor
    || (v32->fields.battleActor = (struct BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   actor,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___),
        sub_B5D560(&v32->fields.battleActor),
        (actor = (UnityEngine_GameObject_o *)v32->fields.battleActor) == 0LL)
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v32->fields.chrId,
        (actor = (UnityEngine_GameObject_o *)v32->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(actor, v34);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v32,
    Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9694/*"NoblePhantasm/CutIns"*/, v35, 1, 0LL);
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
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  int v29; // w1
  char v30; // w2
  __int64 v31; // x3
  int v32; // w1
  char v33; // w2
  __int64 v34; // x3
  int v35; // w1
  char v36; // w2
  __int64 v37; // x3
  int v38; // w1
  char v39; // w2
  __int64 v40; // x3
  int v41; // w1
  char v42; // w2
  __int64 v43; // x3
  int v44; // w1
  char v45; // w2
  __int64 v46; // x3
  int v47; // w1
  char v48; // w2
  __int64 v49; // x3
  int v50; // w1
  char v51; // w2
  __int64 v52; // x3
  int v53; // w1
  char v54; // w2
  __int64 v55; // x3
  int v56; // w1
  char v57; // w2
  __int64 v58; // x3
  int v59; // w1
  char v60; // w2
  __int64 v61; // x3
  int v62; // w1
  char v63; // w2
  __int64 v64; // x3
  int v65; // w1
  char v66; // w2
  __int64 v67; // x3
  int v68; // w1
  char v69; // w2
  __int64 v70; // x3
  int v71; // w1
  char v72; // w2
  __int64 v73; // x3
  int v74; // w1
  char v75; // w2
  __int64 v76; // x3
  int v77; // w1
  char v78; // w2
  __int64 v79; // x3
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  UnityEngine_Object_o *seqObject; // x23
  int32_t NPSeqIdFromCachedAssetName; // w0
  int32_t chrId; // w24
  int32_t v85; // w23
  struct BattlePerformance_o *v86; // x8
  struct BattlePerformance_o *v87; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v90; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v92; // w24
  char v93; // w0
  System_Collections_Generic_List_bool__o *v94; // x24
  System_Collections_Generic_List_bool__o **p_ActorActiveList; // x23
  struct BattlePerformance_o *v96; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v98; // x8
  unsigned __int64 v99; // x21
  UnityEngine_Object_o *v100; // x24
  System_Collections_Generic_List_bool__o *v101; // x25
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v103; // x2
  struct BattlePerformance_o *v104; // x8
  struct UnityEngine_GameObject_array *v105; // x27
  __int64 v106; // x8
  unsigned __int64 v107; // x28
  UnityEngine_Object_o *v108; // x24
  BattleSequenceManager_o *v109; // x0
  const MethodInfo *v110; // x2
  unsigned int *v111; // x22
  unsigned int *v112; // x0
  struct BattlePerformance_o *v113; // x8
  struct UnityEngine_GameObject_array *v114; // x8
  __int64 v115; // x0
  const MethodInfo_3015454 *v116; // x2
  bool v117; // w1
  System_Collections_Generic_List_bool__o *v118; // x25
  UnityEngine_GameObject_o *gameObject; // x21
  BattleSequenceManager_o *v120; // x22
  __int64 v121; // x1
  BattleSequenceManager_o *v122; // x23
  __int64 v123; // x1
  BattleSequenceManager_c *v124; // x0
  BattleSequenceManager_o *v125; // x23
  __int64 v126; // x1
  BattleSequenceManager_o *v127; // x23
  __int64 v128; // x1
  __int64 v129; // x1
  System_Collections_Hashtable_o *v130; // x0
  const MethodInfo *v131; // x2
  WellFired_USSequencer_o *v132; // x21
  struct UnityEngine_GameObject_array **p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v135; // x24
  System_Delegate_o *v136; // x0
  const MethodInfo *v137; // x2
  __int64 v138; // x0
  __int64 v139; // x0
  BattleSequenceManager_o *v140; // x0
  BattleActorControl_o *v141; // x1
  const MethodInfo *v142; // x2
  bool v143; // [xsp+Ch] [xbp-74h]
  System_Action_USSequencer__o *v144; // [xsp+10h] [xbp-70h]
  unsigned int **p_saveWaitEnemy; // [xsp+18h] [xbp-68h]
  int v146; // [xsp+24h] [xbp-5Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-58h] BYREF
  int v148; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_42E57D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent, isDemoMode, callback);
    sub_B5D5C4(&BattleSequenceManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CommonUI_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&FSUtility_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v23, v24, v25);
    sub_B5D5C4(&int_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_bool___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_bool__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&object___TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&float_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_13013/*"ShowNobleInfo"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_10047/*"OnChangeBgmVolume"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_2824/*"Battle2D"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v74, v75, v76);
    this = (BattleSequenceManager_o *)sub_B5D5C4(&iTween_TypeInfo, v77, v78, v79);
    byte_42E57D6 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_128;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_128;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                                      UnityEngine_GameObject___TypeInfo,
                                                                      e_actorlist->max_length);
  p_saveWaitEnemy = (unsigned int **)&v7->fields.saveWaitEnemy;
  sub_B5D560(&v7->fields.saveWaitEnemy);
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
    v85 = NPSeqIdFromCachedAssetName;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, v85, 0LL);
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
        (System_String_o *)StringLiteral_13013/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v86 = v7->fields.performance;
    if ( !v86 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v86->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v87 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v87 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v87->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_128;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v90 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2824/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v90), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_128;
    v92 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v93 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2824/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v93) | v92, 0LL);
    v94 = (System_Collections_Generic_List_bool__o *)sub_B5D694(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v94,
      (const MethodInfo_30146F0 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v94;
    p_ActorActiveList = &v7->fields.ActorActiveList;
    sub_B5D560(&v7->fields.ActorActiveList);
    v96 = v7->fields.performance;
    if ( !v96 )
      goto LABEL_128;
    p_actorlist = v96->fields.p_actorlist;
    v143 = isDemoMode;
    v144 = callback;
    if ( !p_actorlist )
      goto LABEL_128;
    v98 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v98 >= 1 )
    {
      v99 = 0LL;
      while ( v99 < (unsigned int)v98 )
      {
        v100 = (UnityEngine_Object_o *)p_actorlist->m_Items[v99];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v100, 0LL, 0LL);
        v101 = *p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v100 )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                              (UnityEngine_GameObject_o *)v100,
                                              0LL);
          if ( !v101 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            v101,
            (unsigned __int8)this & 1,
            (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
          Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)v100,
                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            Component_srcLineSprite,
            (BattleActorControl_o *)Component_srcLineSprite,
            v103);
        }
        else
        {
          if ( !v101 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            *p_ActorActiveList,
            0,
            (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__);
        }
        LODWORD(v98) = p_actorlist->max_length;
        if ( (__int64)++v99 >= (int)v98 )
          goto LABEL_47;
      }
LABEL_129:
      v138 = sub_B5D6C8(this);
      sub_B5D668(v138, 0LL);
    }
LABEL_47:
    v104 = v7->fields.performance;
    if ( !v104 )
      goto LABEL_128;
    v105 = v104->fields.e_actorlist;
    if ( !v105 )
      goto LABEL_128;
    v106 = *(_QWORD *)&v105->max_length;
    if ( (int)v106 >= 1 )
    {
      v107 = 0LL;
      while ( v107 < (unsigned int)v106 )
      {
        v108 = (UnityEngine_Object_o *)v105->m_Items[v107];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v108 )
            goto LABEL_128;
          v109 = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v108,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(v109, (BattleActorControl_o *)v109, v110);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v108,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_128;
          this = *(BattleSequenceManager_o **)&this[1].fields.IsPlaying;
          if ( !this )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v111 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_128;
            this = (BattleSequenceManager_o *)sub_B5D684(v108, *(_QWORD *)(*(_QWORD *)v111 + 64LL));
            if ( !this )
              goto LABEL_130;
            if ( v107 >= v111[6] )
              goto LABEL_129;
            v112 = &v111[2 * v107];
            *((_QWORD *)v112 + 4) = v108;
            sub_B5D560(v112 + 8);
            v113 = v7->fields.performance;
            if ( !v113 )
              goto LABEL_128;
            v114 = v113->fields.e_actorlist;
            if ( !v114 )
              goto LABEL_128;
            if ( v107 >= v114->max_length )
              goto LABEL_129;
            v115 = (__int64)v114 + 8 * v107;
            *(_QWORD *)(v115 + 32) = 0LL;
            sub_B5D560(v115 + 32);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v108, 0, 0LL);
            this = (BattleSequenceManager_o *)*p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_128;
            v116 = (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__;
            v117 = 1;
          }
          else
          {
            v118 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v108,
                                                0LL);
            if ( !v118 )
              goto LABEL_128;
            v116 = (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__;
            v117 = (unsigned __int8)this & 1;
            this = (BattleSequenceManager_o *)v118;
          }
        }
        else
        {
          this = (BattleSequenceManager_o *)*p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_128;
          v116 = (const MethodInfo_3015454 *)Method_System_Collections_Generic_List_bool__Add__;
          v117 = 0;
        }
        System_Collections_Generic_List_bool___Add((System_Collections_Generic_List_bool__o *)this, v117, v116);
        LODWORD(v106) = v105->max_length;
        if ( (__int64)++v107 >= (int)v106 )
          goto LABEL_73;
      }
      goto LABEL_129;
    }
LABEL_73:
    if ( !v143 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_B5D5DC(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_128;
    v120 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19153/*"from"*/;
    if ( StringLiteral_19153/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_B5D684(StringLiteral_19153/*"from"*/, v120->klass->_1.element_class);
      if ( !this )
        goto LABEL_130;
      v121 = StringLiteral_19153/*"from"*/;
    }
    else
    {
      v121 = 0LL;
    }
    if ( !LODWORD(v120->fields.sequenceManager) )
      goto LABEL_129;
    *(_QWORD *)&v120->fields.servantId = v121;
    sub_B5D560(&v120->fields.servantId);
    v148 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v148);
    v122 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_B5D684(this, v120->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v120->fields.sequenceManager) <= 1 )
        goto LABEL_129;
      *(_QWORD *)&v120->fields.testNpPer = v122;
      sub_B5D560(&v120->fields.testNpPer);
      this = (BattleSequenceManager_o *)StringLiteral_23019/*"to"*/;
      if ( StringLiteral_23019/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_B5D684(StringLiteral_23019/*"to"*/, v120->klass->_1.element_class);
        if ( !this )
          goto LABEL_130;
        v123 = StringLiteral_23019/*"to"*/;
      }
      else
      {
        v123 = 0LL;
      }
      if ( LODWORD(v120->fields.sequenceManager) <= 2 )
        goto LABEL_129;
      v120->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v123;
      sub_B5D560(&v120->fields.FadeTargetPanelIndexs);
      v124 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v124 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v124->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v125 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_B5D684(this, v120->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v120->fields.sequenceManager) <= 3 )
          goto LABEL_129;
        *(_QWORD *)&v120->fields.IsPlaying = v125;
        sub_B5D560(&v120->fields.IsPlaying);
        this = (BattleSequenceManager_o *)StringLiteral_22982/*"time"*/;
        if ( StringLiteral_22982/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_B5D684(StringLiteral_22982/*"time"*/, v120->klass->_1.element_class);
          if ( !this )
            goto LABEL_130;
          v126 = StringLiteral_22982/*"time"*/;
        }
        else
        {
          v126 = 0LL;
        }
        if ( LODWORD(v120->fields.sequenceManager) <= 4 )
          goto LABEL_129;
        v120->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v126;
        sub_B5D560(&v120->fields.ReleaseSoundNames);
        v146 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v146);
        v127 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_B5D684(this, v120->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v120->fields.sequenceManager) <= 5 )
            goto LABEL_129;
          v120->fields.performance = (struct BattlePerformance_o *)v127;
          sub_B5D560(&v120->fields.performance);
          this = (BattleSequenceManager_o *)StringLiteral_21551/*"onupdate"*/;
          if ( StringLiteral_21551/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_B5D684(StringLiteral_21551/*"onupdate"*/, v120->klass->_1.element_class);
            if ( !this )
              goto LABEL_130;
            v128 = StringLiteral_21551/*"onupdate"*/;
          }
          else
          {
            v128 = 0LL;
          }
          if ( LODWORD(v120->fields.sequenceManager) <= 6 )
            goto LABEL_129;
          v120->fields.seqObject = (struct UnityEngine_GameObject_o *)v128;
          sub_B5D560(&v120->fields.seqObject);
          this = (BattleSequenceManager_o *)StringLiteral_10047/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_10047/*"OnChangeBgmVolume"*/ )
          {
            v129 = 0LL;
LABEL_112:
            if ( LODWORD(v120->fields.sequenceManager) <= 7 )
              goto LABEL_129;
            v120->fields.actor = (struct UnityEngine_GameObject_o *)v129;
            sub_B5D560(&v120->fields.actor);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v130 = iTween__Hash((System_Object_array *)v120, 0LL);
            iTween__ValueTo(gameObject, v130, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              v7->fields.BackupBgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              sub_B5D560(&v7->fields.BackupBgmName);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v131);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v132 = (WellFired_USSequencer_o *)this;
                    p_playerActors = &this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v135 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_B5D694(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v135,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v136 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v135, 0LL);
                    if ( v136
                      && (WellFired_USSequencer_PlaybackDelegate_c *)v136->klass != WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                    {
                      v140 = (BattleSequenceManager_o *)sub_B5D990(v136);
                      BattleSequenceManager__PrevPlayTargetActorProc(v140, v141, v142);
                    }
                    else
                    {
                      v132->fields.PlaybackFinished = (struct WellFired_USSequencer_PlaybackDelegate_o *)v136;
                      sub_B5D560(p_playerActors);
                      v7->fields.OnCompleteActorCallback = v144;
                      sub_B5D560(&v7->fields.OnCompleteActorCallback);
                      WellFired_USSequencer__Play(v132, 0LL);
                      if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CommonUI_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                      }
                      if ( CommonUI__GetForceObi_16_9(0LL) )
                        BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v137);
                    }
                    return;
                  }
                }
              }
            }
LABEL_128:
            sub_B5D69C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_B5D684(StringLiteral_10047/*"OnChangeBgmVolume"*/, v120->klass->_1.element_class);
          if ( this )
          {
            v129 = StringLiteral_10047/*"OnChangeBgmVolume"*/;
            goto LABEL_112;
          }
        }
      }
    }
LABEL_130:
    v139 = sub_B5D6BC();
    sub_B5D668(v139, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
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
  UnityEngine_GameObject_o *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v19; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v21; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v23; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v25; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v27; // x4
  VoiceMaster_o *v28; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v31; // x4
  __int64 v32; // x8
  unsigned __int64 v33; // x22
  __int64 v34; // x0

  if ( (byte_42E57EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Voice_TypeInfo, v14, v15, v16);
    byte_42E57EF = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_35;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    if ( LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) )
      return;
    v19 = *(_QWORD *)&Component_srcLineSprite[3].fields.mtIsUpdate;
    if ( !v19 )
      goto LABEL_35;
    if ( !*(_DWORD *)(v19 + 308) && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_srcLineSprite, 0LL) )
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
        v21 = this->fields.performance;
        if ( !v21 )
          goto LABEL_35;
        data = (UnityEngine_Object_o *)v21->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v23);
          if ( PlayedSoundList )
          {
            v25 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)actor,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaster___);
                v28 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Voice_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  }
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v28, chrId, FileName, v31);
                }
                v32 = *(_QWORD *)&v25->max_length;
                if ( (int)v32 >= 1 )
                {
                  v33 = 0LL;
                  do
                  {
                    if ( v33 >= (unsigned int)v32 )
                    {
                      v34 = sub_B5D6C8(MasterData_WarQuestSelectionMaster);
                      sub_B5D668(v34, 0LL);
                    }
                    BattleSequenceManager__addServantVoicePlayed(this, v28, this->fields.chrId, v25->m_Items[v33], v27);
                    LODWORD(v32) = v25->max_length;
                    ++v33;
                  }
                  while ( (__int64)v33 < (int)v32 );
                }
                return;
              }
LABEL_35:
              sub_B5D69C(actor, method);
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

  if ( (byte_42E57CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, (_DWORD)voiceMaster, chrId, labelName);
    byte_42E57CD = 1;
  }
  FlagRequestNumber = System_String__Concat_44577788((System_String_o *)StringLiteral_16096/*"_"*/, labelName, 0LL);
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
    sub_B5D69C(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
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
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E57EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42E57EA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v18);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v19.fields.current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
LABEL_11:
    sub_B5D69C(battleTargetList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)battleTargetList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
}


UnityEngine_GameObject_o *__fastcall BattleSequenceManager__searchPrefab(
        BattleSequenceManager_o *this,
        int32_t tdId,
        System_String_o *name,
        BattleBuffData_o *buffData,
        int32_t seqIdFromMstTDSeqWeight,
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int32_t limitCount; // w22
  UnityEngine_Object_o *Manager__loadNoblePhantasmEffect; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v24; // x0
  System_String_o *v25; // x0
  UnityEngine_Object_o *v26; // x0
  UnityEngine_Object_o *v27; // x19
  bool v28; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_42E57D1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, tdId, (_DWORD)name, buffData);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_2816/*"Battle/Prefab/"*/, v19, v20, v21);
    byte_42E57D1 = 1;
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
    v24 = (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v24,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v25 = System_String__Concat_44577788((System_String_o *)StringLiteral_2816/*"Battle/Prefab/"*/, name, 0LL);
  v26 = UnityEngine_Resources__Load(v25, 0LL);
  if ( v26 )
  {
    if ( (UnityEngine_GameObject_c *)v26->klass == UnityEngine_GameObject_TypeInfo )
      v27 = v26;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  result = 0LL;
  if ( v28 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v24 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v27;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         v24,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


WellFired_USTimelineContainer_o *__fastcall BattleSequenceManager__searchTimeline(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        System_String_o *name,
        const MethodInfo *method)
{
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
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_IEnumerator_c *v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  UnityEngine_Component_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v36; // x1
  WellFired_USTimelineContainer_o *v37; // x21
  System_String_o *v38; // x22
  System_String_o *v39; // x1
  int v40; // w8
  __int64 v41; // x0
  __int64 v42; // x3
  __int64 v43; // x8
  __int64 v44; // x19
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  int v49; // [xsp+0h] [xbp-50h]

  if ( (byte_42E57D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, (_DWORD)seq, (_DWORD)name, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v12, v13, v14);
    this = (BattleSequenceManager_o *)sub_B5D5C4(&StringLiteral_885/*"/"*/, v15, v16, v17);
    byte_42E57D2 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_B5D69C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = (System_Collections_IEnumerator_c **)&v26->_1.interfaceOffsets->offset;
      while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        v28 += 2;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v29 = (__int64)&v26->vtable[*(_DWORD *)v28 + 1].method;
    }
    else
    {
LABEL_17:
      v29 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
    }
    v30 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v29)(
                                       Enumerator,
                                       *(_QWORD *)(v29 + 8));
    if ( !v30 )
      goto LABEL_39;
    v32 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (UnityEngine_Transform_c *)v30->klass->_2.typeHierarchy[v32 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v30 = (UnityEngine_Component_o *)sub_B5D990(v30);
LABEL_39:
      sub_B5D69C(v30, v31);
    }
    gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v34);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v37 = (WellFired_USTimelineContainer_o *)Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B5D69C(0LL, v36);
    v38 = *(System_String_o **)&Component_srcLineSprite->fields.mtIsUpdate;
    v39 = System_String__Concat_44577788((System_String_o *)StringLiteral_885/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(v38, v39, 0LL) )
    {
      v40 = 93;
      goto LABEL_27;
    }
  }
  v37 = 0LL;
  v40 = 91;
LABEL_27:
  v49 = v40;
  v41 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v41 )
  {
    v43 = *(_QWORD *)v41;
    v44 = v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_32;
      }
      v47 = v43 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_32:
      v47 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v42);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
  }
  if ( v49 == 91 )
    return 0LL;
  return v37;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_42E57EC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
      (_DWORD)groupName,
      value,
      playSoundId);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_string__Add__, v9, v10, v11);
    byte_42E57EC = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    playAudioSyncGroupIndexDict,
    (System_Xml_XmlQualifiedName_o *)groupName,
    value,
    (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_B5D69C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)playAudioSyncGroupIndexDict,
    (WarBoardAIRoute_RouteData_o *)playSoundId,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  int v67; // w1
  char v68; // w2
  __int64 v69; // x3
  int v70; // w1
  char v71; // w2
  __int64 v72; // x3
  int v73; // w1
  char v74; // w2
  __int64 v75; // x3
  int v76; // w1
  char v77; // w2
  __int64 v78; // x3
  int v79; // w1
  char v80; // w2
  __int64 v81; // x3
  int v82; // w1
  char v83; // w2
  __int64 v84; // x3
  int v85; // w1
  char v86; // w2
  __int64 v87; // x3
  int v88; // w1
  char v89; // w2
  __int64 v90; // x3
  int v91; // w1
  char v92; // w2
  __int64 v93; // x3
  int v94; // w1
  char v95; // w2
  __int64 v96; // x3
  int v97; // w1
  char v98; // w2
  __int64 v99; // x3
  int v100; // w1
  char v101; // w2
  __int64 v102; // x3
  int v103; // w1
  char v104; // w2
  __int64 v105; // x3
  int v106; // w1
  char v107; // w2
  __int64 v108; // x3
  int v109; // w1
  char v110; // w2
  __int64 v111; // x3
  int v112; // w1
  char v113; // w2
  __int64 v114; // x3
  int v115; // w1
  char v116; // w2
  __int64 v117; // x3
  int v118; // w1
  char v119; // w2
  __int64 v120; // x3
  int v121; // w1
  char v122; // w2
  __int64 v123; // x3
  int v124; // w1
  char v125; // w2
  __int64 v126; // x3
  int v127; // w1
  char v128; // w2
  __int64 v129; // x3
  int v130; // w1
  char v131; // w2
  __int64 v132; // x3
  int v133; // w1
  char v134; // w2
  __int64 v135; // x3
  int v136; // w1
  char v137; // w2
  __int64 v138; // x3
  int v139; // w1
  char v140; // w2
  __int64 v141; // x3
  int v142; // w1
  char v143; // w2
  __int64 v144; // x3
  int v145; // w1
  char v146; // w2
  __int64 v147; // x3
  int v148; // w1
  char v149; // w2
  __int64 v150; // x3
  int v151; // w1
  char v152; // w2
  __int64 v153; // x3
  int v154; // w1
  char v155; // w2
  __int64 v156; // x3
  int v157; // w1
  char v158; // w2
  __int64 v159; // x3
  int v160; // w1
  char v161; // w2
  __int64 v162; // x3
  int v163; // w1
  char v164; // w2
  __int64 v165; // x3
  int v166; // w1
  char v167; // w2
  __int64 v168; // x3
  int v169; // w1
  char v170; // w2
  __int64 v171; // x3
  int v172; // w1
  char v173; // w2
  __int64 v174; // x3
  int v175; // w1
  char v176; // w2
  __int64 v177; // x3
  int v178; // w1
  char v179; // w2
  __int64 v180; // x3
  int v181; // w1
  char v182; // w2
  __int64 v183; // x3
  int v184; // w1
  char v185; // w2
  __int64 v186; // x3
  int v187; // w1
  char v188; // w2
  __int64 v189; // x3
  int v190; // w1
  char v191; // w2
  __int64 v192; // x3
  int v193; // w1
  char v194; // w2
  __int64 v195; // x3
  int v196; // w1
  char v197; // w2
  __int64 v198; // x3
  int v199; // w1
  char v200; // w2
  __int64 v201; // x3
  int v202; // w1
  char v203; // w2
  __int64 v204; // x3
  int v205; // w1
  char v206; // w2
  __int64 v207; // x3
  int v208; // w1
  char v209; // w2
  __int64 v210; // x3
  int v211; // w1
  char v212; // w2
  __int64 v213; // x3
  int v214; // w1
  char v215; // w2
  __int64 v216; // x3
  int v217; // w1
  char v218; // w2
  __int64 v219; // x3
  int v220; // w1
  char v221; // w2
  __int64 v222; // x3
  int v223; // w1
  char v224; // w2
  __int64 v225; // x3
  __int64 seqObject; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x19
  const MethodInfo *v228; // x3
  UnityEngine_Object_o *v229; // x22
  _BOOL8 v230; // x0
  const MethodInfo *v231; // x3
  WellFired_USTimelineContainer_o *v232; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v233; // x21
  struct UnityEngine_GameObject_o *sequenceManager; // x23
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x23
  __int64 v236; // x27
  __int64 v237; // x23
  struct BattlePerformance_o *performance; // x8
  __int64 v239; // x27
  Il2CppObject *CutInPrefab; // x23
  float v241; // s8
  float y; // s9
  float z; // s10
  float v244; // s4
  float v245; // s5
  float v246; // s6
  float w; // s7
  float v248; // s4
  float v249; // s5
  float v250; // s6
  const MethodInfo *v251; // x1
  const MethodInfo *v252; // x2
  int v253; // w8
  __int64 v254; // x22
  int v255; // w19
  UnityEngine_Object_o *v256; // x27
  __int64 v257; // x8
  __int64 v258; // x26
  unsigned __int64 v259; // x25
  __int64 v260; // x28
  System_String_o *name; // x0
  _DWORD *monitor; // x8
  int32_t v263; // w23
  System_String_o *v264; // x0
  __int64 v265; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v266; // x1
  System_String_o *v267; // x0
  __int64 v268; // x9
  __int64 v269; // x0
  int32_t treasureDeviceId; // w27
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *Manager__loadNoblePhantasmEffect; // x23
  __int64 v273; // x9
  __int64 v274; // x28
  UnityEngine_Transform_o *v275; // x23
  int v276; // s0
  System_String_o *v279; // x0
  __int64 v280; // x9
  System_String_o **v281; // x23
  __int64 v282; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v283; // x23
  BattleSequenceManager_o *v284; // x0
  const MethodInfo *v285; // x3
  WellFired_USTimelineContainer_o *v286; // x0
  Il2CppObject *current; // x23
  _BOOL8 v288; // x0
  __int64 v289; // x1
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v291; // x1
  void *v292; // x24
  int v293; // w8
  int i; // w23
  WellFired_USTimelineEvent_o *v295; // x0
  _QWORD *v296; // x25
  __int64 v297; // x8
  unsigned __int64 v298; // x28
  __int64 v299; // x26
  System_String_o *v300; // x0
  __int64 v301; // x9
  __int64 v302; // x0
  __int64 v303; // x1
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v305; // x1
  __int64 v306; // x3
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *v308; // x8
  unsigned __int64 v309; // x10
  System_Collections_IEnumerator_c **v310; // x11
  __int64 v311; // x0
  UnityEngine_Component_o *v312; // x0
  __int64 v313; // x1
  __int64 v314; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v316; // x1
  srcLineSprite_o *v317; // x0
  __int64 v318; // x1
  srcLineSprite_o *v319; // x25
  System_String_o *v320; // x0
  __int64 v321; // x1
  System_String_o *v322; // x0
  __int64 v323; // x1
  System_String_o *v324; // x0
  System_String_o *v325; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v327; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v330; // x3
  __int64 v331; // x0
  __int64 v332; // x3
  __int64 v333; // x8
  __int64 v334; // x24
  unsigned __int64 v335; // x10
  int *v336; // x11
  __int64 v337; // x0
  __int64 v338; // x1
  __int64 v339; // x3
  System_Collections_IEnumerator_o *v340; // x23
  System_Collections_IEnumerator_c *v341; // x8
  unsigned __int64 v342; // x10
  int32_t *v343; // x11
  BattleSequenceManager_o *v344; // x24
  __int64 v345; // x0
  __int64 v346; // x3
  System_Collections_IEnumerator_c *v347; // x8
  unsigned __int64 v348; // x10
  System_Collections_IEnumerator_c **v349; // x11
  __int64 v350; // x0
  UnityEngine_Component_o *v351; // x0
  __int64 v352; // x1
  __int64 v353; // x9
  UnityEngine_GameObject_o *v354; // x0
  __int64 v355; // x1
  srcLineSprite_o *v356; // x0
  __int64 v357; // x1
  WellFired_USTimelineContainer_o *v358; // x24
  System_String_o *v359; // x0
  __int64 v360; // x1
  System_String_o *affectedObjectPath; // x0
  System_String_o *v362; // x25
  int v363; // w26
  System_String_o *v364; // x0
  __int64 v365; // x1
  System_String_o *v366; // x0
  char v367; // w27
  System_String_o *v368; // x0
  __int64 v369; // x1
  System_String_o *v370; // x0
  UnityEngine_Component_o *v371; // x0
  UnityEngine_Transform_o *transform; // x0
  System_String_o *v373; // x0
  __int64 v374; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v376; // x1
  UnityEngine_Transform_o *v377; // x25
  System_String_o *v378; // x0
  System_String_o *v379; // x0
  UnityEngine_Transform_o *v380; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v382; // x1
  System_String_o *v383; // x0
  bool v384; // w0
  __int64 v385; // x1
  __int64 *v386; // x8
  System_String_o *v387; // x0
  bool v388; // w0
  System_String_o *v389; // x26
  UnityEngine_GameObject_o *v390; // x0
  System_String_o *v391; // x25
  UnityEngine_Transform_o *v392; // x0
  __int64 v393; // x1
  UnityEngine_Object_o *v394; // x27
  _BOOL8 v395; // x0
  __int64 v396; // x1
  __int64 v397; // x1
  __int64 v398; // x3
  System_Collections_IEnumerator_o *v399; // x27
  System_Collections_IEnumerator_c *v400; // x8
  unsigned __int64 v401; // x10
  int32_t *v402; // x11
  __int64 v403; // x0
  __int64 v404; // x3
  System_Collections_IEnumerator_c *v405; // x8
  unsigned __int64 v406; // x10
  System_Collections_IEnumerator_c **v407; // x11
  __int64 v408; // x0
  UnityEngine_Component_o *v409; // x0
  __int64 v410; // x1
  UnityEngine_Object_o *v411; // x28
  __int64 v412; // x9
  UnityEngine_Object_o *v413; // x0
  __int64 v414; // x1
  System_String_o *v415; // x0
  __int64 v416; // x1
  System_String_o *v417; // x0
  int v418; // w8
  System_String_o *v419; // x0
  _BOOL8 v420; // x0
  const MethodInfo *v421; // x2
  __int64 v422; // x1
  __int64 v423; // x1
  int32_t v424; // w26
  __int64 v425; // x0
  __int64 v426; // x3
  __int64 v427; // x27
  __int64 v428; // x8
  unsigned __int64 v429; // x10
  int *v430; // x11
  __int64 v431; // x0
  System_String_o *v432; // x27
  System_String_o *v433; // x0
  __int64 v434; // x1
  System_String_o *v435; // x27
  System_Char_array *v436; // x0
  System_String_array *v437; // x0
  __int64 v438; // x1
  __int64 v439; // x1
  System_String_o *v440; // x27
  UnityEngine_GameObject_o *v441; // x0
  __int64 v442; // x1
  UnityEngine_Transform_o *v443; // x26
  System_String_o *v444; // x0
  System_String_o *v445; // x0
  __int64 v446; // x1
  System_String_o *v447; // x0
  UnityEngine_Transform_o *v448; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v449; // x26
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v450; // x0
  _BOOL8 v451; // x0
  __int64 v452; // x1
  System_String_o *v453; // x0
  __int64 v454; // x1
  System_String_o *v455; // x1
  _BOOL8 v456; // x0
  __int64 v457; // x1
  BattleBuffData_o *v458; // x3
  const MethodInfo *v459; // x5
  _DWORD *v460; // x8
  int32_t v461; // w4
  __int64 v462; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v463; // x0
  __int64 v464; // x0
  __int64 v465; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v467; // x1
  UnityEngine_Transform_o *v468; // x0
  UnityEngine_Transform_o *v469; // x0
  __int64 v470; // x1
  float v471; // s8
  float v472; // s9
  float v473; // s10
  __int64 v474; // x1
  UnityEngine_Transform_o *v475; // x27
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v477; // x0
  UnityEngine_Transform_o *v478; // x0
  __int64 v479; // x1
  BattleSequenceManager_o *v480; // x0
  const MethodInfo *v481; // x4
  int32_t v482; // w25
  UnityEngine_Transform_o *v483; // x0
  __int64 v484; // x1
  UnityEngine_Transform_o *v485; // x0
  System_String_o *v486; // x0
  __int64 v487; // x1
  System_String_o *v488; // x0
  System_String_o *v489; // x0
  const MethodInfo *v490; // x3
  int32_t v491; // w2
  const MethodInfo *v492; // x3
  WarBoardControlPlayTalkUiComponent_array *EventCount; // x0
  __int64 v494; // x1
  WarBoardControlPlayTalkUiComponent_array *v495; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v498; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v500; // x0
  __int64 v501; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v502; // x27
  System_String_o *v503; // x0
  __int64 v504; // x9
  _BOOL8 v505; // x0
  __int64 v506; // x1
  UnityEngine_Component_o *v507; // x0
  int32_t layer; // w25
  __int64 v509; // x3
  __int64 v510; // x8
  __int64 v511; // x23
  unsigned __int64 v512; // x10
  int *v513; // x11
  __int64 v514; // x0
  __int64 v515; // x1
  _DWORD *v516; // x8
  UnityEngine_Object_o *v517; // x21
  struct BattlePerformance_o *v518; // x8
  UnityEngine_Object_o *data; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t chrId; // w22
  VoiceMaster_o *v522; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v524; // x4
  int32_t v525; // w22
  System_String_o *v526; // x0
  const MethodInfo *v527; // x4
  _DWORD *v528; // x8
  int v529; // w20
  BalanceConfig_c *v530; // x0
  int32_t v531; // w20
  System_String_o *v532; // x0
  const MethodInfo *v533; // x4
  __int64 v534; // x0
  __int64 v535; // x0
  __int64 v536; // x0
  __int64 v537; // x0
  __int64 v538; // x0
  __int64 v539; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+0h] [xbp-140h]
  System_String_o *itema; // [xsp+0h] [xbp-140h]
  WellFired_USSequencer_o *seq; // [xsp+8h] [xbp-138h]
  char seqa; // [xsp+8h] [xbp-138h]
  __int64 v544; // [xsp+10h] [xbp-130h]
  int v545; // [xsp+10h] [xbp-130h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v547; // [xsp+20h] [xbp-120h]
  BattleSequenceManager_o *v548; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_T__o v549[2]; // [xsp+30h] [xbp-110h] BYREF
  int v550; // [xsp+68h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o m; // [xsp+70h] [xbp-D0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v553; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v554; // [xsp+B0h] [xbp-90h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v558; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_42E57CB & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)callback, isDemoMode, buffData);
    sub_B5D5C4(&char___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoiceMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v34, v35, v36);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__,
      v37,
      v38,
      v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v43, v44, v45);
    sub_B5D5C4(&System_GC_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v49, v50, v51);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v52, v53, v54);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v55, v56, v57);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v64, v65, v66);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v67, v68, v69);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v70, v71, v72);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v73, v74, v75);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v76, v77, v78);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v79, v80, v81);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v82, v83, v84);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v85, v86, v87);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v88, v89, v90);
    sub_B5D5C4(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v91, v92, v93);
    sub_B5D5C4(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v94, v95, v96);
    sub_B5D5C4(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v97, v98, v99);
    sub_B5D5C4(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v100, v101, v102);
    sub_B5D5C4(&NGUITools_TypeInfo, v103, v104, v105);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v106, v107, v108);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882840, v109, v110, v111);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v112, v113, v114);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v115, v116, v117);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v118, v119, v120);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v121, v122, v123);
    sub_B5D5C4(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v124, v125, v126);
    sub_B5D5C4(&WellFired_USFGOAttachToParentEvent_TypeInfo, v127, v128, v129);
    sub_B5D5C4(&WellFired_USFGOChangeBgEvent_TypeInfo, v130, v131, v132);
    sub_B5D5C4(&WellFired_USFGOPlayCutInEvent_TypeInfo, v133, v134, v135);
    sub_B5D5C4(&WellFired_USFGOSetCameraEvent_TypeInfo, v136, v137, v138);
    sub_B5D5C4(&Voice_TypeInfo, v139, v140, v141);
    sub_B5D5C4(&StringLiteral_893/*"/Actor/chr/"*/, v142, v143, v144);
    sub_B5D5C4(&StringLiteral_2826/*"BattleBG"*/, v145, v146, v147);
    sub_B5D5C4(&StringLiteral_903/*"/BattleActors/"*/, v148, v149, v150);
    sub_B5D5C4(&StringLiteral_2828/*"BattleCamera"*/, v151, v152, v153);
    sub_B5D5C4(&StringLiteral_2830/*"BattleCutIn"*/, v154, v155, v156);
    sub_B5D5C4(&StringLiteral_14925/*"USFGOSetCameraEvent"*/, v157, v158, v159);
    sub_B5D5C4(&StringLiteral_1856/*"Actor"*/, v160, v161, v162);
    sub_B5D5C4(&StringLiteral_17088/*"body_level_"*/, v163, v164, v165);
    sub_B5D5C4(&StringLiteral_895/*"/Actor/chr/weapon_level_"*/, v166, v167, v168);
    sub_B5D5C4(&StringLiteral_894/*"/Actor/chr/body_level_"*/, v169, v170, v171);
    sub_B5D5C4(&StringLiteral_6417/*"FGOSequenceManager"*/, v172, v173, v174);
    sub_B5D5C4(&StringLiteral_897/*"/AllEffects/"*/, v175, v176, v177);
    sub_B5D5C4(&StringLiteral_17640/*"chr(Clone)"*/, v178, v179, v180);
    sub_B5D5C4(&StringLiteral_3548/*"Cameras/BattleCamera"*/, v181, v182, v183);
    sub_B5D5C4(&StringLiteral_14923/*"USFGOChangeBgEvent"*/, v184, v185, v186);
    sub_B5D5C4(&StringLiteral_915/*"/BattleCamera"*/, v187, v188, v189);
    sub_B5D5C4(&StringLiteral_918/*"/CutIns/"*/, v190, v191, v192);
    sub_B5D5C4(&StringLiteral_2824/*"Battle2D"*/, v193, v194, v195);
    sub_B5D5C4(&StringLiteral_917/*"/Cameras/BattleCamera"*/, v196, v197, v198);
    sub_B5D5C4(&StringLiteral_16537/*"animCamLoc"*/, v199, v200, v201);
    sub_B5D5C4(&StringLiteral_23571/*"weapon_level_"*/, v202, v203, v204);
    sub_B5D5C4(&StringLiteral_615/*"(Clone)"*/, v205, v206, v207);
    sub_B5D5C4(&StringLiteral_14922/*"USFGOAttachToParentEvent"*/, v208, v209, v210);
    sub_B5D5C4(&StringLiteral_1/*""*/, v211, v212, v213);
    sub_B5D5C4(&StringLiteral_892/*"/Actor/chr"*/, v214, v215, v216);
    sub_B5D5C4(&StringLiteral_14921/*"USFGOAnimationCameraEvent"*/, v217, v218, v219);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v220, v221, v222);
    sub_B5D5C4(&StringLiteral_14924/*"USFGOPlayCutInEvent"*/, v223, v224, v225);
    byte_42E57CB = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v554, 0, sizeof(v554));
  memset(&v553, 0, sizeof(v553));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  v550 = 0;
  seqObject = (__int64)this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_437;
  Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)seqObject,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v229 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                   Component_srcLineSprite,
                                   (WellFired_USSequencer_o *)Component_srcLineSprite,
                                   (System_String_o *)StringLiteral_1856/*"Actor"*/,
                                   v228);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v230 = UnityEngine_Object__op_Inequality(v229, 0LL, 0LL);
  if ( v230 )
  {
    seqObject = (__int64)this->fields.actor;
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v229 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v229,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  v232 = BattleSequenceManager__searchTimeline(
           (BattleSequenceManager_o *)v230,
           (WellFired_USSequencer_o *)Component_srcLineSprite,
           (System_String_o *)StringLiteral_6417/*"FGOSequenceManager"*/,
           v231);
  v233 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v233,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v547 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v547,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_437;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)v229;
  seq = (WellFired_USSequencer_o *)Component_srcLineSprite;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)seqObject,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v548 = this;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v232, 0LL, 0LL) )
  {
    sequenceManager = this->fields.sequenceManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)sequenceManager,
                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v232 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(v232, (UnityEngine_Transform_o *)seqObject, 0LL);
    createdObjects = this->fields.createdObjects;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v232, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !createdObjects )
      goto LABEL_437;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)createdObjects,
      (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v232, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_437;
    v236 = seqObject;
    *(_QWORD *)(seqObject + 24) = this->fields.actorCamera;
    v237 = seqObject + 24;
    sub_B5D560(seqObject + 24);
    *(_QWORD *)(v237 + 8) = this->fields.effectCamera;
    sub_B5D560(v237 + 8);
    *(_QWORD *)(v237 + 16) = this->fields.cutInCamera;
    sub_B5D560(v237 + 16);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_437;
    *(_QWORD *)(v236 + 88) = performance->fields.fadeObject;
    v239 = v236 + 88;
    sub_B5D560(v239);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v241 = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    identity = UnityEngine_Quaternion__get_identity(0LL);
    v244 = identity.fields.x;
    v245 = identity.fields.y;
    v246 = identity.fields.z;
    w = identity.fields.w;
    identity.fields.x = v241;
    identity.fields.y = y;
    identity.fields.z = z;
    identity.fields.w = v244;
    v248 = v245;
    v249 = v246;
    v250 = w;
    *(_QWORD *)(v239 - 24) = UnityEngine_Object__Instantiate_object_(
                               CutInPrefab,
                               *(UnityEngine_Vector3_o *)&identity.fields.x,
                               *(UnityEngine_Quaternion_o *)&identity.fields.w,
                               (const MethodInfo_1E66564 *)Method_UnityEngine_Object_Instantiate_GameObject____68882840);
    sub_B5D560(v239 - 24);
    seqObject = *(_QWORD *)(v239 - 24);
    if ( !seqObject )
      goto LABEL_437;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v251);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v252);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                           (UnityEngine_Component_o *)v232,
                           1,
                           (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_437;
    v253 = *(_DWORD *)(seqObject + 24);
    v254 = seqObject;
    if ( v253 >= 1 )
    {
      v255 = 0;
      v256 = 0LL;
      v544 = seqObject;
      while ( 1 )
      {
        if ( v255 >= (unsigned int)v253 )
        {
LABEL_441:
          v536 = sub_B5D6C8(seqObject);
          sub_B5D668(v536, 0LL);
        }
        seqObject = *(_QWORD *)(v254 + 8LL * v255 + 32);
        if ( !seqObject )
          goto LABEL_437;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_437;
        v257 = *(_QWORD *)(seqObject + 24);
        v258 = seqObject;
        if ( (int)v257 >= 1 )
          break;
LABEL_95:
        v254 = v544;
        ++v255;
        v253 = *(_DWORD *)(v544 + 24);
        if ( v255 >= v253 )
          goto LABEL_96;
      }
      v259 = 0LL;
      while ( 1 )
      {
        if ( v259 >= (unsigned int)v257 )
          goto LABEL_441;
        v260 = *(_QWORD *)(v258 + 32 + 8 * v259);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v260, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v260 )
            goto LABEL_437;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v260, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14921/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v256, 0LL, 0LL) )
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
                monitor = x[18].monitor;
                if ( !monitor )
                  goto LABEL_437;
                v263 = monitor[180];
              }
              else
              {
                v263 = 0;
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
                                                   (System_String_o *)StringLiteral_16537/*"animCamLoc"*/,
                                                   v263,
                                                   0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this = v548;
              if ( !v548->fields.createdObjects )
LABEL_437:
                sub_B5D69C(seqObject, callback);
              v256 = (UnityEngine_Object_o *)seqObject;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v548->fields.createdObjects,
                (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
            v273 = *(&WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v260 + 300LL) < (unsigned int)v273
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v260 + 200LL) + 8 * v273 - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_442:
              v351 = (UnityEngine_Component_o *)sub_B5D990(v260);
LABEL_443:
              v312 = (UnityEngine_Component_o *)sub_B5D990(v351);
LABEL_444:
              v500 = (UnityEngine_Object_o *)sub_B5D990(v312);
LABEL_445:
              sub_B5D69C(v500, v501);
            }
            *(_QWORD *)(v260 + 48) = v256;
            v274 = v260 + 48;
            sub_B5D560(v274);
            *(_QWORD *)(v274 + 8) = this->fields.actorCamera;
            sub_B5D560(v274 + 8);
            *(_BYTE *)(v274 + 36) = 0;
            if ( !v256 )
              goto LABEL_437;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v256, 0LL);
            if ( !this->fields.actor )
              goto LABEL_437;
            v275 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_437;
            *(UnityEngine_Vector3_o *)&v276 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v275 )
              goto LABEL_437;
            UnityEngine_Transform__set_position(v275, *(UnityEngine_Vector3_o *)&v276, 0LL);
          }
          else
          {
            v264 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v260, 0LL);
            seqObject = System_String__op_Equality(v264, (System_String_o *)StringLiteral_14924/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v547 )
                goto LABEL_437;
              v265 = *(&WellFired_USFGOPlayCutInEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v260 + 300LL) >= (unsigned int)v265 )
              {
                if ( *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v260 + 200LL) + 8 * v265 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo )
                  v266 = (EventMissionProgressRequest_Argument_ProgressData_o *)v260;
                else
                  v266 = 0LL;
              }
              else
              {
                v266 = 0LL;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v547,
                v266,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
              goto LABEL_94;
            }
            v267 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v260, 0LL);
            if ( System_String__op_Equality(v267, (System_String_o *)StringLiteral_14925/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v268 = *(&WellFired_USFGOSetCameraEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v260 + 300LL) < (unsigned int)v268
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v260 + 200LL) + 8 * v268 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              *(_QWORD *)(v260 + 48) = this->fields.actorCamera;
              sub_B5D560(v260 + 48);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_437;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_437;
              *(_QWORD *)(v260 + 56) = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              v269 = v260 + 56;
              goto LABEL_89;
            }
            v279 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v260, 0LL);
            seqObject = System_String__op_Equality(v279, (System_String_o *)StringLiteral_14923/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v280 = *(&WellFired_USFGOChangeBgEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v260 + 300LL) < (unsigned int)v280
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v260 + 200LL) + 8 * v280 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v281 = (System_String_o **)(v260 + 56);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v260 + 56),
                     (System_String_o *)StringLiteral_973/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v281, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                *v281 = System_Int32__ToString((int32_t)&result[1], 0LL);
                sub_B5D560(v260 + 56);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                *(_QWORD *)(v260 + 64) = System_Int32__ToString((int32_t)&result[1], 0LL);
                v282 = v260 + 64;
                sub_B5D560(v282);
                v269 = v282 + 64;
                *(_QWORD *)(v282 + 64) = this->fields.changeFieldAfter;
LABEL_89:
                sub_B5D560(v269);
              }
            }
          }
        }
LABEL_94:
        LODWORD(v257) = *(_DWORD *)(v258 + 24);
        if ( (__int64)++v259 >= (int)v257 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  v283 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v283,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v283 )
    goto LABEL_437;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v283,
    item,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  v286 = BattleSequenceManager__searchTimeline(v284, seq, (System_String_o *)StringLiteral_3548/*"Cameras/BattleCamera"*/, v285);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v283,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v286,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v549,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v283,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v554 = v549[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v554,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v554.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v288 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v288 )
    {
      if ( !current )
        sub_B5D69C(v288, v289);
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                  (UnityEngine_Component_o *)current,
                                                                  1,
                                                                  (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v292 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        sub_B5D69C(0LL, v291);
      v293 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
      if ( v293 >= 1 )
      {
        for ( i = 0; i < v293; ++i )
        {
          if ( i >= (unsigned int)v293 )
          {
            v535 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
            sub_B5D668(v535, 0LL);
          }
          v295 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v292 + i + 4);
          if ( !v295 )
            sub_B5D69C(0LL, v291);
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = WellFired_USTimelineEvent__get_Events(v295, 0LL);
          v296 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
            sub_B5D69C(0LL, v291);
          v297 = *((_QWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 3);
          if ( (int)v297 >= 1 )
          {
            v298 = 0LL;
            do
            {
              if ( v298 >= (unsigned int)v297 )
              {
                v534 = sub_B5D6C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
                sub_B5D668(v534, 0LL);
              }
              v299 = v296[v298 + 4];
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Object__op_Equality(
                                                                                  (UnityEngine_Object_o *)v299,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
              {
                if ( !v299 )
                  sub_B5D69C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v291);
                v300 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v299, 0LL);
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                    v300,
                                                                                    (System_String_o *)StringLiteral_14922/*"USFGOAttachToParentEvent"*/,
                                                                                    0LL);
                if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
                {
                  v301 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v299 + 300LL) < (unsigned int)v301
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v299 + 200LL) + 8 * v301 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v302 = sub_B5D990(v299);
LABEL_435:
                    sub_B5D69C(v302, v303);
                  }
                  v302 = System_String__op_Equality(
                           *(System_String_o **)(v299 + 72),
                           (System_String_o *)StringLiteral_2828/*"BattleCamera"*/,
                           0LL);
                  if ( (v302 & 1) != 0 )
                  {
                    actorCamera = (UnityEngine_Component_o *)v548->fields.actorCamera;
                    if ( !actorCamera )
                      sub_B5D69C(0LL, v303);
                    *(_QWORD *)(v299 + 56) = UnityEngine_Component__get_transform(actorCamera, 0LL);
                    sub_B5D560(v299 + 56);
                  }
                  else
                  {
                    if ( !v233 )
                      goto LABEL_435;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v233,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v299,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              LODWORD(v297) = *((_DWORD *)v296 + 6);
              ++v298;
            }
            while ( (__int64)v298 < (int)v297 );
          }
          v293 = *((_DWORD *)v292 + 6);
        }
      }
    }
  }
  *((_DWORD *)&v549[1].fields.list + v550++) = 1008;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v554,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  if ( v550 && *((_DWORD *)&v549[0].fields.current + v550 + 1) == 1008 )
    --v550;
  seqObject = (__int64)seq;
  if ( !seq )
    goto LABEL_437;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v305);
  v545 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v327 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v327;
        p_offset += 4;
        if ( v327 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_157;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_157:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v306);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v308 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v309 = 0LL;
      v310 = (System_Collections_IEnumerator_c **)&v308->_1.interfaceOffsets->offset;
      while ( *(v310 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v309;
        v310 += 2;
        if ( v309 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_139;
      }
      v311 = (__int64)&v308->vtable[*(_DWORD *)v310 + 1].method;
    }
    else
    {
LABEL_139:
      v311 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v330);
    }
    v312 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v311)(
                                        Enumerator,
                                        *(_QWORD *)(v311 + 8));
    if ( !v312 )
      sub_B5D69C(0LL, v313);
    v314 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v312->klass->_2.bitflags2 + 1) < (unsigned int)v314
      || (UnityEngine_Transform_c *)v312->klass->_2.typeHierarchy[v314 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_444;
    }
    gameObject = UnityEngine_Component__get_gameObject(v312, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v316);
    v317 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             gameObject,
             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v319 = v317;
    if ( !v317 )
      sub_B5D69C(0LL, v318);
    v320 = *(System_String_o **)&v317->fields.mtIsUpdate;
    if ( !v320 )
      sub_B5D69C(0LL, v318);
    if ( System_String__StartsWith(v320, (System_String_o *)StringLiteral_903/*"/BattleActors/"*/, 0LL)
      && *(_QWORD *)&v319->fields.mtIsUpdate )
    {
      v322 = *(System_String_o **)&v319->fields.mtIsUpdate;
      if ( !v322 )
        goto LABEL_466;
      if ( System_String__StartsWith(v322, (System_String_o *)StringLiteral_903/*"/BattleActors/"*/, 0LL) )
      {
        v324 = *(System_String_o **)&v319->fields.mtIsUpdate;
        if ( !v324 )
          sub_B5D69C(0LL, v323);
        v325 = System_String__Substring_44641524(v324, v324->fields.m_stringLength - 1, 1, 0LL);
        result[0] = 1;
        v545 += System_Int32__TryParse(v325, result, 0LL);
      }
    }
  }
  *((_DWORD *)&v549[1].fields.list + v550++) = 1183;
  v331 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v331 )
  {
    v333 = *(_QWORD *)v331;
    v334 = v331;
    if ( *(_WORD *)(*(_QWORD *)v331 + 298LL) )
    {
      v335 = 0LL;
      v336 = (int *)(*(_QWORD *)(v333 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v336 - 1) != System_IDisposable_TypeInfo )
      {
        ++v335;
        v336 += 4;
        if ( v335 >= *(unsigned __int16 *)(*(_QWORD *)v331 + 298LL) )
          goto LABEL_165;
      }
      v337 = v333 + 16LL * *v336 + 312;
    }
    else
    {
LABEL_165:
      v337 = sub_AF54C0(v331, System_IDisposable_TypeInfo, 0LL, v332);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v337)(v334, *(_QWORD *)(v337 + 8));
  }
  if ( v550 && *((_DWORD *)&v549[0].fields.current + v550 + 1) == 1183 )
    --v550;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  v340 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v340 )
    sub_B5D69C(0LL, v338);
  seqa = 0;
  while ( 1 )
  {
    v341 = v340->klass;
    if ( *(_WORD *)&v340->klass->_2.bitflags1 )
    {
      v342 = 0LL;
      v343 = &v341->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v343 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v342;
        v343 += 4;
        if ( v342 >= *(unsigned __int16 *)&v340->klass->_2.bitflags1 )
          goto LABEL_178;
      }
      v344 = v548;
      v345 = (__int64)&v341->vtable[*v343].method;
    }
    else
    {
LABEL_178:
      v344 = v548;
      v345 = sub_AF54C0(v340, System_Collections_IEnumerator_TypeInfo, 0LL, v339);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v345)(v340, *(_QWORD *)(v345 + 8)) & 1) == 0 )
      break;
    v347 = v340->klass;
    if ( *(_WORD *)&v340->klass->_2.bitflags1 )
    {
      v348 = 0LL;
      v349 = (System_Collections_IEnumerator_c **)&v347->_1.interfaceOffsets->offset;
      while ( *(v349 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v348;
        v349 += 2;
        if ( v348 >= *(unsigned __int16 *)&v340->klass->_2.bitflags1 )
          goto LABEL_185;
      }
      v350 = (__int64)&v347->vtable[*(_DWORD *)v349 + 1].method;
    }
    else
    {
LABEL_185:
      v350 = sub_AF54C0(v340, System_Collections_IEnumerator_TypeInfo, 1LL, v346);
    }
    v351 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v350)(
                                        v340,
                                        *(_QWORD *)(v350 + 8));
    if ( !v351 )
      sub_B5D69C(0LL, v352);
    v353 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v351->klass->_2.bitflags2 + 1) < (unsigned int)v353
      || (UnityEngine_Transform_c *)v351->klass->_2.typeHierarchy[v353 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_443;
    }
    v354 = UnityEngine_Component__get_gameObject(v351, 0LL);
    if ( !v354 )
      goto LABEL_447;
    v356 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v354,
             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v358 = (WellFired_USTimelineContainer_o *)v356;
    if ( !v356 )
      sub_B5D69C(0LL, v357);
    v359 = *(System_String_o **)&v356->fields.mtIsUpdate;
    if ( !v359 )
      sub_B5D69C(0LL, v357);
    if ( System_String__StartsWith(v359, (System_String_o *)StringLiteral_897/*"/AllEffects/"*/, 0LL) )
    {
      affectedObjectPath = v358->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_B5D69C(0LL, v360);
      v362 = System_String__Substring(affectedObjectPath, 12, 0LL);
      v363 = 1;
    }
    else
    {
      v363 = 0;
      v362 = 0LL;
    }
    v364 = v358->fields.affectedObjectPath;
    if ( !v364 )
      sub_B5D69C(0LL, v360);
    if ( System_String__StartsWith(v364, (System_String_o *)StringLiteral_918/*"/CutIns/"*/, 0LL) )
    {
      v366 = v358->fields.affectedObjectPath;
      if ( !v366 )
        sub_B5D69C(0LL, v365);
      v362 = System_String__Substring(v366, 8, 0LL);
      v367 = 1;
    }
    else
    {
      v367 = 0;
    }
    v368 = v358->fields.affectedObjectPath;
    if ( !v368 )
      sub_B5D69C(0LL, v365);
    if ( System_String__StartsWith(v368, (System_String_o *)StringLiteral_915/*"/BattleCamera"*/, 0LL) )
      goto LABEL_206;
    v370 = v358->fields.affectedObjectPath;
    if ( !v370 )
      sub_B5D69C(0LL, v369);
    if ( System_String__StartsWith(v370, (System_String_o *)StringLiteral_917/*"/Cameras/BattleCamera"*/, 0LL) )
    {
LABEL_206:
      v371 = (UnityEngine_Component_o *)v548->fields.actorCamera;
      if ( !v371 )
        sub_B5D69C(0LL, v369);
      transform = UnityEngine_Component__get_transform(v371, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v358, transform, 0LL);
    }
    else
    {
      v373 = v358->fields.affectedObjectPath;
      if ( !v373 )
        sub_B5D69C(0LL, v369);
      if ( System_String__StartsWith(v373, (System_String_o *)StringLiteral_892/*"/Actor/chr"*/, 0LL) )
      {
        actor = v548->fields.actor;
        if ( !actor )
          sub_B5D69C(0LL, v374);
        v377 = UnityEngine_GameObject__get_transform(actor, 0LL);
        v378 = v358->fields.affectedObjectPath;
        if ( !v378 )
          sub_B5D69C(0LL, v376);
        v379 = System_String__Replace_44585024(
                 v378,
                 (System_String_o *)StringLiteral_892/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_17640/*"chr(Clone)"*/,
                 0LL);
        if ( !v377 )
          sub_B5D69C(v379, v379);
        v380 = UnityEngine_Transform__Find(v377, v379, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(v358, v380, 0LL);
        AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v358, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
        {
          v383 = v358->fields.affectedObjectPath;
          if ( !v383 )
            sub_B5D69C(0LL, v382);
          v384 = System_String__StartsWith(v383, (System_String_o *)StringLiteral_894/*"/Actor/chr/body_level_"*/, 0LL);
          v386 = &StringLiteral_17088/*"body_level_"*/;
          if ( v384 )
            goto LABEL_221;
          v387 = v358->fields.affectedObjectPath;
          if ( !v387 )
            sub_B5D69C(0LL, v385);
          v388 = System_String__StartsWith(v387, (System_String_o *)StringLiteral_895/*"/Actor/chr/weapon_level_"*/, 0LL);
          v386 = &StringLiteral_23571/*"weapon_level_"*/;
          if ( v388 )
          {
LABEL_221:
            v389 = (System_String_o *)*v386;
            if ( *v386 )
            {
              v390 = v548->fields.actor;
              if ( !v390 )
                sub_B5D69C(0LL, v385);
              v391 = (System_String_o *)StringLiteral_1/*""*/;
              v392 = UnityEngine_GameObject__get_transform(v390, 0LL);
              if ( !v392 )
                sub_B5D69C(0LL, v393);
              v394 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                               v392,
                                               (System_String_o *)StringLiteral_17640/*"chr(Clone)"*/,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v395 = UnityEngine_Object__op_Inequality(v394, 0LL, 0LL);
              if ( v395 )
              {
                if ( !v394 )
                  sub_B5D69C(v395, v396);
                v399 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v394, 0LL);
                if ( !v399 )
                  sub_B5D69C(0LL, v397);
                while ( 1 )
                {
                  v400 = v399->klass;
                  if ( *(_WORD *)&v399->klass->_2.bitflags1 )
                  {
                    v401 = 0LL;
                    v402 = &v400->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v402 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v401;
                      v402 += 4;
                      if ( v401 >= *(unsigned __int16 *)&v399->klass->_2.bitflags1 )
                        goto LABEL_234;
                    }
                    v403 = (__int64)&v400->vtable[*v402].method;
                  }
                  else
                  {
LABEL_234:
                    v403 = sub_AF54C0(v399, System_Collections_IEnumerator_TypeInfo, 0LL, v398);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v403)(
                          v399,
                          *(_QWORD *)(v403 + 8)) & 1) == 0 )
                    break;
                  v405 = v399->klass;
                  if ( *(_WORD *)&v399->klass->_2.bitflags1 )
                  {
                    v406 = 0LL;
                    v407 = (System_Collections_IEnumerator_c **)&v405->_1.interfaceOffsets->offset;
                    while ( *(v407 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v406;
                      v407 += 2;
                      if ( v406 >= *(unsigned __int16 *)&v399->klass->_2.bitflags1 )
                        goto LABEL_241;
                    }
                    v408 = (__int64)&v405->vtable[*(_DWORD *)v407 + 1].method;
                  }
                  else
                  {
LABEL_241:
                    v408 = sub_AF54C0(v399, System_Collections_IEnumerator_TypeInfo, 1LL, v404);
                  }
                  v409 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v408)(
                                                      v399,
                                                      *(_QWORD *)(v408 + 8));
                  v411 = (UnityEngine_Object_o *)v409;
                  if ( !v409 )
                    sub_B5D69C(0LL, v410);
                  v412 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v409->klass->_2.bitflags2 + 1) < (unsigned int)v412
                    || (UnityEngine_Transform_c *)v409->klass->_2.typeHierarchy[v412 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    v322 = (System_String_o *)sub_B5D990(v409);
LABEL_466:
                    sub_B5D69C(v322, v321);
                  }
                  v413 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v409, 0LL);
                  if ( !v413 )
                    sub_B5D69C(0LL, v414);
                  v415 = UnityEngine_Object__get_name(v413, 0LL);
                  if ( !v415 )
                    sub_B5D69C(0LL, v416);
                  if ( System_String__StartsWith(v415, v389, 0LL) )
                  {
                    v417 = UnityEngine_Object__get_name(v411, 0LL);
                    *((_DWORD *)&v549[1].fields.list + v550) = 1651;
                    v418 = v550;
                    v391 = v417;
                    goto LABEL_259;
                  }
                }
                *((_DWORD *)&v549[1].fields.list + v550) = 1651;
                v418 = v550;
LABEL_259:
                v550 = v418 + 1;
                v425 = sub_B5D684(v399, System_IDisposable_TypeInfo);
                v427 = v425;
                if ( v425 )
                {
                  v428 = *(_QWORD *)v425;
                  if ( *(_WORD *)(*(_QWORD *)v425 + 298LL) )
                  {
                    v429 = 0LL;
                    v430 = (int *)(*(_QWORD *)(v428 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v430 - 1) != System_IDisposable_TypeInfo )
                    {
                      ++v429;
                      v430 += 4;
                      if ( v429 >= *(unsigned __int16 *)(*(_QWORD *)v425 + 298LL) )
                        goto LABEL_264;
                    }
                    v431 = v428 + 16LL * *v430 + 312;
                  }
                  else
                  {
LABEL_264:
                    v431 = sub_AF54C0(v425, System_IDisposable_TypeInfo, 0LL, v426);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v431)(v427, *(_QWORD *)(v431 + 8));
                }
                if ( v550 && *((_DWORD *)&v549[0].fields.current + v550 + 1) == 1651 )
                  --v550;
              }
              v432 = v358->fields.affectedObjectPath;
              v433 = System_String__Concat_44577788((System_String_o *)StringLiteral_893/*"/Actor/chr/"*/, v389, 0LL);
              if ( !v433 )
                sub_B5D69C(0LL, v434);
              if ( !v432 )
                sub_B5D69C(v433, v434);
              v435 = System_String__Substring(v432, v433->fields.m_stringLength, 0LL);
              v436 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
              if ( !v436 )
                sub_B5D69C(0LL, 0LL);
              if ( !v436->max_length )
              {
                v537 = sub_B5D6C8(v436);
                sub_B5D668(v537, 0LL);
              }
              v436->m_Items[2] = 47;
              if ( !v435 )
                sub_B5D69C(v436, v436);
              v437 = System_String__Split(v435, v436, 0LL);
              if ( !v437 )
                sub_B5D69C(0LL, v438);
              if ( !v437->max_length )
              {
                v538 = sub_B5D6C8(v437);
                sub_B5D668(v538, 0LL);
              }
              v440 = System_String__Concat_44577788(v389, v437->m_Items[0], 0LL);
              v441 = v548->fields.actor;
              if ( !v441 )
                sub_B5D69C(0LL, v439);
              v443 = UnityEngine_GameObject__get_transform(v441, 0LL);
              v444 = v358->fields.affectedObjectPath;
              if ( !v444 )
                sub_B5D69C(0LL, v442);
              v445 = System_String__Replace_44585024(
                       v444,
                       (System_String_o *)StringLiteral_892/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_17640/*"chr(Clone)"*/,
                       0LL);
              if ( !v445 )
                sub_B5D69C(0LL, v446);
              v447 = System_String__Replace_44585024(v445, v440, v391, 0LL);
              if ( !v443 )
                sub_B5D69C(v447, v447);
              v448 = UnityEngine_Transform__Find(v443, v447, 0LL);
              WellFired_USTimelineContainer__set_AffectedObject(v358, v448, 0LL);
            }
          }
        }
      }
      else
      {
        v419 = v358->fields.affectedObjectPath;
        if ( !v419 )
          sub_B5D69C(0LL, v374);
        v420 = System_String__StartsWith(v419, (System_String_o *)StringLiteral_903/*"/BattleActors/"*/, 0LL);
        if ( v420 )
          v362 = v358->fields.affectedObjectPath;
        if ( v362 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v420, v362, v421) )
            goto LABEL_336;
          if ( v363 )
          {
            v424 = System_String__IndexOf(v362, 0x2Fu, 0LL);
            if ( (v424 & 0x80000000) == 0 )
            {
              itema = System_String__Substring(v362, v424 + 1, 0LL);
              v362 = System_String__Substring_44641524(v362, 0, v424, 0LL);
              goto LABEL_285;
            }
            if ( (seqa & 1) != 0 )
            {
              itema = 0LL;
LABEL_285:
              v450 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v548->fields.createdObjects;
              if ( !v450 )
                sub_B5D69C(0LL, v423);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                v549,
                v450,
                (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v553 = v549[0];
              while ( 1 )
              {
                v451 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v553,
                         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v451 )
                  break;
                v449 = (EventMissionProgressRequest_Argument_ProgressData_o *)v553.fields.current;
                if ( !v553.fields.current )
                  sub_B5D69C(v451, v452);
                v453 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v553.fields.current, 0LL);
                if ( !v453 )
                  sub_B5D69C(0LL, v454);
                v455 = System_String__Replace_44585024(
                         v453,
                         (System_String_o *)StringLiteral_615/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v362, v455, 0LL) )
                  goto LABEL_293;
              }
              v449 = 0LL;
LABEL_293:
              *((_DWORD *)&v549[1].fields.list + v550++) = 1961;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v553,
                (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if ( v550 )
              {
                if ( *((_DWORD *)&v549[0].fields.current + v550 + 1) == 1961 )
                  --v550;
                seqa = 1;
              }
              else
              {
                seqa = 1;
              }
              goto LABEL_299;
            }
            itema = 0LL;
            v449 = 0LL;
            seqa = 0;
          }
          else
          {
            itema = 0LL;
            v449 = 0LL;
          }
LABEL_299:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v449, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v456 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( v456 )
            {
              if ( !x )
                sub_B5D69C(v456, v457);
              v460 = x[18].monitor;
              if ( !v460 )
                sub_B5D69C(v456, v457);
              v461 = v460[180];
            }
            else
            {
              v461 = 0;
            }
            v449 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSequenceManager__searchPrefab(
                                                                            v548,
                                                                            v548->fields.treasureDeviceId,
                                                                            v362,
                                                                            v458,
                                                                            v461,
                                                                            v459);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v449, 0LL, 0LL) )
            {
              v463 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v548->fields.createdObjects;
              if ( !v463 )
                sub_B5D69C(0LL, v462);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v463,
                v449,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
              if ( !v449 )
                sub_B5D69C(v464, v465);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v449, 0, 0LL);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v449, 0LL, 0LL) )
            goto LABEL_336;
          IsNullOrEmpty = System_String__IsNullOrEmpty(itema, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v449 )
              sub_B5D69C(IsNullOrEmpty, v467);
            v483 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v449, 0LL);
            if ( !v483 )
              sub_B5D69C(0LL, v484);
            v485 = UnityEngine_Transform__Find(v483, itema, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v358, v485, 0LL);
            goto LABEL_336;
          }
          if ( !v449 )
            sub_B5D69C(IsNullOrEmpty, v467);
          v468 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v449, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v358, v468, 0LL);
          if ( (v367 & 1) != 0 )
          {
            v469 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v449, 0LL);
            if ( !v469 )
              sub_B5D69C(0LL, v470);
            localPosition = UnityEngine_Transform__get_localPosition(v469, 0LL);
            v471 = localPosition.fields.x;
            v472 = localPosition.fields.y;
            v473 = localPosition.fields.z;
            v475 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v449, 0LL);
            CutInRoot = v548->fields.CutInRoot;
            if ( !CutInRoot )
              sub_B5D69C(0LL, v474);
            v477 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v475 )
              sub_B5D69C(v477, v477);
            UnityEngine_Transform__set_parent(v475, v477, 0LL);
            v478 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v449, 0LL);
            if ( !v478 )
              sub_B5D69C(0LL, v479);
            v558.fields.x = v471;
            v558.fields.y = v472;
            v558.fields.z = v473;
            UnityEngine_Transform__set_localPosition(v478, v558, 0LL);
            BattleSequenceManager__updateCutInEvents(
              v480,
              (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v547,
              v362,
              (UnityEngine_GameObject_o *)v449,
              v481);
            v482 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2830/*"BattleCutIn"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v449, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2826/*"BattleBG"*/, 0LL) )
              goto LABEL_336;
            v482 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2824/*"Battle2D"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v449, v482, 0LL);
LABEL_336:
          v486 = v358->fields.affectedObjectPath;
          if ( !v486 )
            sub_B5D69C(0LL, v422);
          if ( System_String__StartsWith(v486, (System_String_o *)StringLiteral_903/*"/BattleActors/"*/, 0LL) )
          {
            v488 = v358->fields.affectedObjectPath;
            if ( !v488 )
              sub_B5D69C(0LL, v487);
            v489 = System_String__Substring_44641524(v488, v488->fields.m_stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v489, &targetPosIndex, 0LL);
            v491 = --targetPosIndex;
            if ( v545 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v548, v358, v491, v490);
              BattleSequenceManager__SyncAttachedTargetPair(v548, v358, targetPosIndex, v492);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v548, v358, v491, v490);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                         (UnityEngine_Component_o *)v358,
                         1,
                         (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v495 = EventCount;
          if ( !EventCount )
            sub_B5D69C(0LL, v494);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
              {
                v539 = sub_B5D6C8(EventCount);
                sub_B5D668(v539, 0LL);
              }
              v498 = (WellFired_USTimelineEvent_o *)v495->m_Items[j];
              if ( !v498 )
                sub_B5D69C(EventCount, v494);
              for ( k = 0; ; ++k )
              {
                EventCount = (WarBoardControlPlayTalkUiComponent_array *)WellFired_USTimelineEvent__get_EventCount(
                                                                           v498,
                                                                           0LL);
                if ( k >= (int)EventCount )
                  break;
                v500 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v498, k, 0LL);
                v502 = (EventMissionProgressRequest_Argument_ProgressData_o *)v500;
                if ( !v500 )
                  goto LABEL_445;
                v503 = UnityEngine_Object__get_name(v500, 0LL);
                if ( System_String__op_Equality(v503, (System_String_o *)StringLiteral_14922/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v504 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v502->klass->_2.bitflags2 + 1) < (unsigned int)v504
                    || (WellFired_USFGOAttachToParentEvent_c *)v502->klass->_2.typeHierarchy[v504 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v354 = (UnityEngine_GameObject_o *)sub_B5D990(v502);
LABEL_447:
                    sub_B5D69C(v354, v355);
                  }
                  v505 = System_String__op_Equality(
                           *(System_String_o **)&v502[1].fields.addCount,
                           (System_String_o *)StringLiteral_2828/*"BattleCamera"*/,
                           0LL);
                  if ( v505 )
                  {
                    v507 = (UnityEngine_Component_o *)v548->fields.actorCamera;
                    if ( !v507 )
                      sub_B5D69C(0LL, v506);
                    *(_QWORD *)&v502[1].fields.missionTargetId = UnityEngine_Component__get_transform(v507, 0LL);
                    sub_B5D560(&v502[1].fields);
                  }
                  else
                  {
                    if ( !v233 )
                      sub_B5D69C(v505, v506);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v233,
                      v502,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              max_length = v495->max_length;
            }
          }
        }
      }
    }
  }
  *((_DWORD *)&v549[1].fields.list + v550++) = 2515;
  seqObject = sub_B5D684(v340, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v510 = *(_QWORD *)seqObject;
    v511 = seqObject;
    if ( *(_WORD *)(*(_QWORD *)seqObject + 298LL) )
    {
      v512 = 0LL;
      v513 = (int *)(*(_QWORD *)(v510 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v513 - 1) != System_IDisposable_TypeInfo )
      {
        ++v512;
        v513 += 4;
        if ( v512 >= *(unsigned __int16 *)(*(_QWORD *)seqObject + 298LL) )
          goto LABEL_378;
      }
      v514 = v510 + 16LL * *v513 + 312;
    }
    else
    {
LABEL_378:
      v514 = sub_AF54C0(seqObject, System_IDisposable_TypeInfo, 0LL, v509);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v514)(v511, *(_QWORD *)(v514 + 8));
  }
  if ( v550 && *((_DWORD *)&v549[0].fields.current + v550 + 1) == 2515 )
    --v550;
  if ( !v233 )
    goto LABEL_437;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v549,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v233,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v549[0];
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &m,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields.current,
          v344->fields.performance,
          v344->fields.actor,
          v344->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields.current )
      sub_B5D69C(0LL, v515);
  }
  *((_DWORD *)&v549[1].fields.list + v550++) = 2581;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &m,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( v550 && *((_DWORD *)&v549[0].fields.current + v550 + 1) == 2581 )
    --v550;
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
    if ( LOBYTE(x[19].monitor) )
      goto LABEL_428;
    v516 = x[18].monitor;
    if ( !v516 )
      goto LABEL_437;
    if ( !v516[77] && !BattleActorControl__isNoVoice((BattleActorControl_o *)x, 0LL) )
    {
      v517 = (UnityEngine_Object_o *)v344->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      seqObject = UnityEngine_Object__op_Inequality(v517, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v518 = v344->fields.performance;
        if ( !v518 )
          goto LABEL_437;
        data = (UnityEngine_Object_o *)v518->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)seqObject,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoiceMaster___);
            v344->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v344->fields.chrId;
            v522 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(v344, v522, chrId, FileName, v524) )
              v344->fields.isAlreadyRegistDefaultVoice = 1;
            v525 = v344->fields.chrId;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v526 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v344, v522, v525, v526, v527);
            v528 = x[18].monitor;
            if ( v528 )
            {
              v529 = v528[168];
              v530 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v530 = BalanceConfig_TypeInfo;
              }
              if ( v529 == v530->static_fields->TreasureDeviceIdMashu3 )
              {
                v531 = v344->fields.chrId;
                if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v532 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v344, v522, v531, v532, v533);
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
  System_GC__Collect_43893280(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x24
  int size; // w23
  unsigned int v12; // w22
  BattleSequenceManager_BattleTarget_o *v13; // x8
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v14; // x20

  v6 = this;
  if ( (byte_42E57E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__,
      (_DWORD)tlcont,
      targetIndex,
      method);
    this = (BattleSequenceManager_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__,
                                        v7,
                                        v8,
                                        v9);
    byte_42E57E5 = 1;
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
        v12 = 0;
        while ( 1 )
        {
          if ( battleTargetList->fields._size <= v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v13 = battleTargetList->fields._items->m_Items[v12];
          if ( !v13 )
            goto LABEL_25;
          if ( v13->fields._positionIndex_k__BackingField == targetIndex )
            break;
          if ( (int)++v12 >= size )
            goto LABEL_14;
          battleTargetList = v6->fields.battleTargetList;
          if ( !battleTargetList )
            goto LABEL_25;
        }
        v14 = v6->fields.battleTargetList;
        if ( v14 )
        {
          if ( v14->fields._size <= v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          this = (BattleSequenceManager_o *)v14->fields._items->m_Items[v12];
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
    sub_B5D69C(this, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x21
  int32_t size; // w8
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  v6 = this;
  if ( (byte_42E57E9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, (_DWORD)tlcont, targetIndex, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v10, v11, v12);
    this = (BattleSequenceManager_o *)sub_B5D5C4(&StringLiteral_14636/*"Tmp_Target"*/, v13, v14, v15);
    byte_42E57E9 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
      sub_B5D69C(this, tlcont);
    }
    v18 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v18, (System_String_o *)StringLiteral_14636/*"Tmp_Target"*/, 0LL);
    if ( !v18 )
      goto LABEL_17;
    this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  char v20; // w19
  int v21; // w20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E57CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__,
      (_DWORD)evs,
      (_DWORD)cutInName,
      obj);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v11, v12, v13);
    this = (BattleSequenceManager_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v14,
                                        v15,
                                        v16);
    byte_42E57CF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !evs )
    sub_B5D69C(this, evs);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)evs,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    if ( !v17 )
      break;
    current = v23.fields.current;
    if ( !v23.fields.current )
      sub_B5D69C(v17, v18);
    if ( System_String__op_Equality((System_String_o *)v23.fields.current[3].monitor, cutInName, 0LL) )
    {
      current[3].klass = (Il2CppClass *)obj;
      sub_B5D560(&current[3]);
      v20 = 1;
      v21 = 5;
      goto LABEL_10;
    }
  }
  v20 = 0;
  v21 = 3;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return (v21 == 5) & v20;
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
      sub_B5D69C(transform, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.originalScale, 0LL);
  }
  *p_targetActor = 0LL;
  sub_B5D560(p_targetActor);
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
    sub_B5D69C(targetActor, method);
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
  sub_B5D560(&this->fields.targetActor);
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
  int v2; // w2
  __int64 v3; // x3
  BattleSequenceManager__WaitEndSequence_d__105_o *v4; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v7; // x21
  bool result; // w0

  v4 = this;
  if ( (byte_42E60E2 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B5D5C4(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                (_DWORD)method,
                                                                v2,
                                                                v3);
    byte_42E60E2 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_B5D560(&v4->fields._wait_5__2);
    if ( !_4__this )
LABEL_12:
      sub_B5D69C(this, method);
  }
  if ( _4__this->fields.IsBgBusy )
  {
    v4->fields.__2__current = (Il2CppObject *)v4->fields._wait_5__2;
    sub_B5D560(&v4->fields.__2__current);
    result = 1;
    v4->fields.__1__state = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleSequenceManager__WaitEndSequence_d__105_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E60DC & 1) == 0 )
  {
    sub_B5D5C4(&BattleSequenceManager___c_TypeInfo, v1, v2, v3);
    byte_42E60DC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSequenceManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x1);
  return System_Single__CompareTo_44563980(x2->fields.duration, v4, (const MethodInfo *)&duration);
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
    sub_B5D69C(this, x1);
  return System_Single__CompareTo_44563980(x2->fields.duration, v4, (const MethodInfo *)&duration);
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
    sub_B5D69C(this, x);
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
  __int64 v3; // x3
  BattleSequenceManager___c__DisplayClass114_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E60DD & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B5D5C4(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               (_DWORD)x,
                                                               (_DWORD)method,
                                                               v3);
    byte_42E60DD = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass114_0_o *)v5->fields.targetList) == 0LL )
    sub_B5D69C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  BattleSequenceManager___c__DisplayClass73_0_o *v5; // x19
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
  struct BattleSequenceManager_o *_4__this; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v21; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24

  v5 = this;
  if ( (byte_42E60DE & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_13180/*"StandardCutIn"*/, v12, v13, v14);
    this = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B5D5C4(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v15,
                                                              v16,
                                                              v17);
    byte_42E60DE = 1;
  }
  if ( !data
    || (_4__this = v5->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13180/*"StandardCutIn"*/,
                                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_B5D560(&_4__this->fields.CutInPrefab),
        (this = (BattleSequenceManager___c__DisplayClass73_0_o *)v5->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v5->fields.__9__1;
  v21 = gameObject;
  chrId = v5->fields.chrId;
  limitCount = v5->fields.limitCount;
  treasureDeviceId = v5->fields.treasureDeviceId;
  treasureDeviceLv = v5->fields.treasureDeviceLv;
  npChargeStage = v5->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_B5D694(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v5,
      Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__,
      0LL);
    v5->fields.__9__1 = _9__1;
    sub_B5D560(&v5->fields.__9__1);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__LoadNoblePhantasm(
    v21,
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
  Il2CppObject *v28; // x20
  ServantAssetLoadManager_o *_4__this; // x0
  __int64 v30; // x1
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleActorControl_o *v33; // x8
  struct BattleServantData_o *v34; // x8
  struct BattleSequenceManager_o *v35; // x8
  SoundManager_o *Instance; // x19
  System_String_o *v37; // x0
  System_String_o *v38; // x21
  System_Action_o *v39; // x22
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E60DF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)paramsFromMstTDSeqWeight, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Tuple_int__int__get_Item1__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Tuple_int__int__get_Item2__, v16, v17, v18);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, v19, v20, v21);
    sub_B5D5C4(&BattleSequenceManager___c__DisplayClass73_1_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_9696/*"NoblePhantasm_"*/, v25, v26, v27);
    byte_42E60DF = 1;
  }
  overwriteSvtVoiceId = 0;
  v28 = (Il2CppObject *)sub_B5D694(BattleSequenceManager___c__DisplayClass73_1_TypeInfo);
  System_Object___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_16;
  v28[1].monitor = this;
  sub_B5D560(&v28[1].monitor);
  v28[1].klass = (Il2CppClass *)obj;
  sub_B5D560(&v28[1]);
  _4__this = (ServantAssetLoadManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  _4__this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v28[1].klass;
  sub_B5D560(&_4__this->fields.LastActorVoice);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_16;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_16;
  battleSvtData = battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_16;
  battleSvtData->fields.seqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item1 & ~(paramsFromMstTDSeqWeight->fields.m_Item1 >> 31);
  v33 = this->fields.battleActor;
  if ( !v33 )
    goto LABEL_16;
  v34 = v33->fields.battleSvtData;
  if ( !v34 )
    goto LABEL_16;
  v34->fields.groupSeqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item2 & ~(paramsFromMstTDSeqWeight->fields.m_Item2 >> 31);
  _4__this = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (ServantAssetLoadManager_o *)ServantAssetLoadManager__getVoiceId(
                                            _4__this,
                                            this->fields.chrId,
                                            this->fields.limitCount,
                                            0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v35 = this->fields.__4__this;
    if ( !v35 )
      goto LABEL_16;
    overwriteSvtVoiceId = v35->fields.overwriteSvtVoiceId;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v37 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v38 = System_String__Concat_44577788((System_String_o *)StringLiteral_9696/*"NoblePhantasm_"*/, v37, 0LL);
  v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v39, v28, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, 0LL);
  if ( !Instance )
LABEL_16:
    sub_B5D69C(_4__this, v30);
  SoundManager__LoadAudioAssetStorage(Instance, v38, v39, 1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _QWORD *monitor; // x8
  __int64 v15; // x8
  System_String_o *v16; // x20
  int CS___8__locals1; // w8
  BattleSequenceManager___c__DisplayClass73_1_o *v18; // x21
  unsigned int v19; // w23
  int v20; // w24
  UnityEngine_Behaviour_o *v21; // x22
  void *v22; // x8
  BattleSequenceManager_o *v23; // x21
  System_Action_o *v24; // x22
  __int64 v25; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E60E0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v5, v6, v7);
    sub_B5D5C4(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, v8, v9, v10);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E60E0 = 1;
  }
  monitor = v4[1].monitor;
  if ( !monitor )
    goto LABEL_20;
  v15 = monitor[2];
  if ( !v15 )
    goto LABEL_20;
  this = *(BattleSequenceManager___c__DisplayClass73_1_o **)(v15 + 80);
  if ( !this )
    goto LABEL_20;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  CS___8__locals1 = (int)this->fields.CS___8__locals1;
  v18 = this;
  if ( CS___8__locals1 >= 1 )
  {
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      if ( v19 >= CS___8__locals1 )
      {
        v25 = sub_B5D6C8(this);
        sub_B5D668(v25, 0LL);
      }
      v21 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v18->fields.__9__4 + (int)v19);
      if ( !v21 )
        break;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v21->klass[1]._2.typeHierarchy)(
                                                                v21,
                                                                v21->klass[1]._2.unity_user_data);
      if ( (v20 & (unsigned int)this & 1) != 0 )
      {
        v16 = (System_String_o *)v21[2].monitor;
        v20 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v21, 0, 0LL);
      }
      CS___8__locals1 = (int)v18->fields.CS___8__locals1;
      if ( (int)++v19 >= CS___8__locals1 )
        goto LABEL_15;
    }
LABEL_20:
    sub_B5D69C(this, method);
  }
LABEL_15:
  v22 = v4[1].monitor;
  if ( !v22 )
    goto LABEL_20;
  v23 = (BattleSequenceManager_o *)*((_QWORD *)v22 + 2);
  v24 = (System_Action_o *)v4[2].monitor;
  if ( !v24 )
  {
    v24 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v24, v4, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, 0LL);
    v4[2].monitor = v24;
    sub_B5D560(&v4[2].monitor);
  }
  if ( !v23 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v23, v16, v24, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleSequenceManager___c__DisplayClass73_1_o *v4; // x19
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
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v25; // x8
  struct BattleSequenceManager_o *v26; // x8
  BattleSequenceManager___c__DisplayClass73_1_o *v27; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v28; // x8
  struct BattleSequenceManager_o *v29; // x8
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v32; // x8
  struct BattleSequenceManager_o *v33; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v34; // x8
  struct BattleSequenceManager_o *v35; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v36; // x8
  struct BattleSequenceManager_o *v37; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v39; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v40; // x8
  struct BattleSequenceManager_o *v41; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v43; // x8
  struct BattleSequenceManager_o *v44; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v45; // x8
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int klass; // w21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v49; // x8
  struct BattleSequenceManager_o *v50; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v51; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v54; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *v55; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v56; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v57; // x8
  struct BattleSequenceManager_o *v58; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v59; // x8
  struct BattleSequenceManager_o *v60; // x8
  UnityEngine_Object_o *v61; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v62; // x8
  struct BattleSequenceManager_o *v63; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v64; // x8
  struct BattleSequenceManager_o *v65; // x8
  UIStandFigureM_o *v66; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  struct BattleSequenceManager___c__DisplayClass73_0_o *v71; // x8

  v4 = this;
  if ( (byte_42E60E1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v17, v18, v19);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B5D5C4(
                                                              &Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                                              v20,
                                                              v21,
                                                              v22);
    byte_42E60E1 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_80;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v25 = v4->fields.CS___8__locals1;
  if ( !v25 )
    goto LABEL_80;
  v26 = v25->fields.__4__this;
  if ( !v26 )
    goto LABEL_80;
  v27 = this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v26->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v28 = v4->fields.CS___8__locals1;
  if ( !v28 )
    goto LABEL_80;
  v29 = v28->fields.__4__this;
  if ( !v29 )
    goto LABEL_80;
  v30 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v29->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v27,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(
                                                              ComponentInChildren_Dropdown_DropdownItem,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v51 = v4->fields.CS___8__locals1;
      if ( !v51 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)v51->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v51->fields.onComplete;
      obj = v4->fields.obj;
      v54 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_Dropdown_DropdownItem;
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_77;
      v55 = v4->fields.CS___8__locals1;
      if ( !v55 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)v55->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v55->fields.onComplete;
      obj = v4->fields.obj;
      v54 = (WellFired_USFGOPlayCutInBase_o *)v30;
    }
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v54,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    goto LABEL_77;
  }
  v32 = v4->fields.CS___8__locals1;
  if ( !v32 )
    goto LABEL_80;
  if ( !v27 )
    goto LABEL_80;
  v33 = v32->fields.__4__this;
  if ( !v33 )
    goto LABEL_80;
  v33->fields.faceType = (int32_t)v27[1].monitor;
  v34 = v4->fields.CS___8__locals1;
  if ( !v34 )
    goto LABEL_80;
  v35 = v34->fields.__4__this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  v36 = v4->fields.CS___8__locals1;
  if ( !v36 )
    goto LABEL_80;
  v37 = v36->fields.__4__this;
  if ( !v37 )
    goto LABEL_80;
  performance = v37->fields.performance;
  if ( !performance )
    goto LABEL_80;
  v39 = (StandFigureManager_o *)this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)performance->fields.root_field;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !v39 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)StandFigureManager__CreateMeshLocal(
                                                            v39,
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !v35 )
    goto LABEL_80;
  v35->fields.standFigure = (struct UIStandFigureM_o *)this;
  sub_B5D560(&v35->fields.standFigure);
  v40 = v4->fields.CS___8__locals1;
  if ( !v40 )
    goto LABEL_80;
  v41 = v40->fields.__4__this;
  if ( !v41 )
    goto LABEL_80;
  standFigure = (UnityEngine_Object_o *)v41->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v43 = v4->fields.CS___8__locals1;
    if ( v43 )
    {
      v44 = v43->fields.__4__this;
      if ( v44 )
      {
        v44->fields.loadStandFigureId = (int32_t)v27[1].klass;
        v45 = v4->fields.CS___8__locals1;
        if ( v45 )
        {
          battleActor = v45->fields.battleActor;
          if ( battleActor )
          {
            battleSvtData = battleActor->fields.battleSvtData;
            if ( battleSvtData )
            {
              this = (BattleSequenceManager___c__DisplayClass73_1_o *)battleSvtData->fields.svtdata;
              if ( this )
              {
                klass = (int)v27[1].klass;
                this = (BattleSequenceManager___c__DisplayClass73_1_o *)ServantEntity__GetTrueSvtId(
                                                                          (ServantEntity_o *)this,
                                                                          0LL);
                if ( klass == (_DWORD)this
                  || (this = (BattleSequenceManager___c__DisplayClass73_1_o *)HIDWORD(v27[1].klass), (_DWORD)this == -1) )
                {
                  v56 = v4->fields.CS___8__locals1;
                  if ( !v56 )
                    goto LABEL_80;
                  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v56->fields.battleActor;
                  if ( !this )
                    goto LABEL_80;
                  v50 = v56->fields.__4__this;
                  this = (BattleSequenceManager___c__DisplayClass73_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                            (BattleActorControl_o *)this,
                                                                            0LL);
                  if ( !v50 )
                    goto LABEL_80;
                }
                else
                {
                  v49 = v4->fields.CS___8__locals1;
                  if ( !v49 )
                    goto LABEL_80;
                  v50 = v49->fields.__4__this;
                  if ( !v50 )
                    goto LABEL_80;
                }
                v50->fields.loadStandFigureLimitCount = (int)this;
                v57 = v4->fields.CS___8__locals1;
                if ( v57 )
                {
                  v58 = v57->fields.__4__this;
                  if ( v58 )
                  {
                    this = (BattleSequenceManager___c__DisplayClass73_1_o *)v58->fields.standFigure;
                    if ( this )
                    {
                      this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                      v59 = v4->fields.CS___8__locals1;
                      if ( v59 )
                      {
                        v60 = v59->fields.__4__this;
                        if ( v60 )
                        {
                          v61 = (UnityEngine_Object_o *)this;
                          this = (BattleSequenceManager___c__DisplayClass73_1_o *)StandFigureManager__CreateStandFigureMName(
                                                                                    v60->fields.loadStandFigureId,
                                                                                    v60->fields.loadStandFigureLimitCount,
                                                                                    0LL);
                          if ( v61 )
                          {
                            UnityEngine_Object__set_name(v61, (System_String_o *)this, 0LL);
                            v62 = v4->fields.CS___8__locals1;
                            if ( v62 )
                            {
                              v63 = v62->fields.__4__this;
                              if ( v63 )
                              {
                                this = (BattleSequenceManager___c__DisplayClass73_1_o *)v63->fields.standFigure;
                                if ( this )
                                {
                                  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
                                  v64 = v4->fields.CS___8__locals1;
                                  if ( v64 )
                                  {
                                    v65 = v64->fields.__4__this;
                                    if ( v65 )
                                    {
                                      v66 = v65->fields.standFigure;
                                      loadStandFigureId = v65->fields.loadStandFigureId;
                                      loadStandFigureLimitCount = v65->fields.loadStandFigureLimitCount;
                                      faceType = v65->fields.faceType;
                                      _9__4 = v4->fields.__9__4;
                                      if ( !_9__4 )
                                      {
                                        _9__4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          _9__4,
                                          (Il2CppObject *)v4,
                                          Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                          0LL);
                                        v4->fields.__9__4 = _9__4;
                                        sub_B5D560(&v4->fields.__9__4);
                                      }
                                      if ( v66 )
                                      {
                                        this = (BattleSequenceManager___c__DisplayClass73_1_o *)UIStandFigureM__SetCharacter_40953484(
                                                                                                  v66,
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
    sub_B5D69C(this, method);
  }
LABEL_77:
  v71 = v4->fields.CS___8__locals1;
  if ( !v71 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v71->fields.__4__this;
  if ( !this )
    goto LABEL_80;
  BattleSequenceManager__LoadEndStandFigure(
    (BattleSequenceManager_o *)this,
    v4->fields.obj,
    v71->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  UnityEngine_GameObject_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(UnityEngine_GameObject_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, UnityEngine_GameObject_o *, _QWORD); // x0
  BattleSequenceManager_onGameObjectLoadComplete_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(UnityEngine_GameObject_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  UnityEngine_GameObject_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  BattleSequenceManager_onGameObjectLoadComplete_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(UnityEngine_GameObject_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, obj, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = obj->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(obj, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(obj, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = obj->klass;
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(obj, class_0, v9, v11);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v15)(obj, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  obj,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(obj, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, obj, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))v23)(
                v31,
                obj,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))(*v31
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v30 + 72)
                                                                                    + 312))(
                v31,
                obj,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, __int64))v32)(v31, obj, v30);
    }
  }
}