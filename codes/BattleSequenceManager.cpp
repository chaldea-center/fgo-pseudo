void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4211DA7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSequenceManager_TypeInfo, v1);
    byte_4211DA7 = 1;
  }
  BattleSequenceManager_TypeInfo->static_fields->defaultForceObi_16_9 = 1;
  BattleSequenceManager_TypeInfo->static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
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
  System_Array_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v43; // x20
  struct UnityEngine_GameObject_array *v44; // x0
  System_RuntimeFieldHandle_o v45; // 0:w1.4

  if ( (byte_4211DA6 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_string___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_HashSet_string__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Object___ctor___67887792, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Action___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_Action__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_Object__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v18);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v19);
    sub_B0D8A4(&StringLiteral_9418/*"N_{0}{1}"*/, v20);
    byte_4211DA6 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v21 = (System_Array_o *)sub_B0D8BC(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v45.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v21, v45, 0LL);
  this->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v21;
  sub_B0D840(&this->fields.FadeTargetPanelIndexs, v21);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B0D840(&this->fields.ReleaseSoundNames, v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Action__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v27;
  sub_B0D840(&this->fields.DelayInvokeMethodList, v27);
  v28 = StringLiteral_9418/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9418/*"N_{0}{1}"*/;
  sub_B0D840(&this->fields.PosNodeFormatNP, v28);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Object__TypeInfo,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Object___ctor___67887792);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v31;
  sub_B0D840(&this->fields.npEndDeleteObjects, v31);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v34;
  sub_B0D840(&this->fields.battleTargetList, v34);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v37;
  sub_B0D840(&this->fields.createdObjects, v37);
  v40 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v38,
                                                                            v39);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v40,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v40;
  sub_B0D840(&this->fields.playAudioSyncGroupIndexDict, v40);
  v43 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_string__TypeInfo,
                                                                             v41,
                                                                             v42);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v43,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v43;
  sub_B0D840(&this->fields.playedAudioGroupIdHash, v43);
  this->fields.nowTargetAlpha = 1.0;
  v44 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 3LL);
  this->fields.saveWaitEnemy = v44;
  sub_B0D840(&this->fields.saveWaitEnemy, v44);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4211D8A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, actor);
    sub_B0D8A4(&StringLiteral_23268/*"wait"*/, v5);
    byte_4211D8A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !actor )
      sub_B0D97C(v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_31613668(actor, (System_String_o *)StringLiteral_23268/*"wait"*/, 0, 0LL);
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

  if ( (byte_4211DA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_4211DA0 = 1;
  }
  if ( System_String__Equals_43908660(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_1B454DC *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_B0D97C(this);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_19476596(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_19476596(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleSequenceManager___c__DisplayClass77_0_o *v11; // x20
  UnityEngine_Component_o *Instance; // x0
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v14; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v19; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x24

  if ( (byte_4211D72 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__, v9);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo, v10);
    byte_4211D72 = 1;
  }
  v11 = (BattleSequenceManager___c__DisplayClass77_0_o *)sub_B0D974(
                                                           BattleSequenceManager___c__DisplayClass77_0_TypeInfo,
                                                           obj,
                                                           onComplete);
  BattleSequenceManager___c__DisplayClass77_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  v11->fields.__4__this = this;
  sub_B0D840(&v11->fields, this);
  v11->fields.obj = obj;
  sub_B0D840(&v11->fields.obj, obj);
  v11->fields.onComplete = onComplete;
  sub_B0D840(&v11->fields.onComplete, onComplete);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_17;
  v14 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_17;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v14 )
    goto LABEL_17;
  MeshLocal = StandFigureManager__CreateMeshLocal(v14, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_B0D840(&this->fields.standFigure, MeshLocal);
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
          v19 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v25 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
          System_Action___ctor(
            v25,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v19 )
            return UIStandFigureM__SetCharacter_40533468(
                     v19,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v25,
                     1,
                     0LL);
        }
      }
    }
LABEL_17:
    sub_B0D97C(Instance);
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
  __int64 Instance; // x0
  System_String_o *BgmName; // x0
  const MethodInfo *v28; // x3
  BgmPlayArgsGroup_o *v29; // x19
  _BOOL8 v30; // x0
  Il2CppObject *current; // x20
  float v32; // s0
  double v33; // d0
  int32_t v34; // w21
  const MethodInfo_2980204 *v35; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  System_Object_array *v37; // x20
  __int64 v38; // x0
  __int64 v39; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v42; // x8
  struct BattlePerformance_o *v43; // x8
  BattleSequenceManager_c *v44; // x0
  Il2CppObject *v45; // x21
  __int64 v46; // x1
  Il2CppObject *v47; // x21
  __int64 v48; // x1
  Il2CppObject *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x1
  System_Collections_Hashtable_o *v52; // x0
  System_String_o *v53; // x19
  __int64 v54; // x0
  __int64 v55; // x0
  int v56; // [xsp+4h] [xbp-7Ch] BYREF
  System_Nullable_long__o v57; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v61; // 0:x1.8
  System_Nullable_float__o v62; // 0:x2.8
  System_Nullable_long__o v63; // 0:x0.16

  if ( (byte_4211D8B & 1) == 0 )
  {
    sub_B0D8A4(&BattleSequenceManager_TypeInfo, method);
    sub_B0D8A4(&BgmManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v9);
    sub_B0D8A4(&Method_System_Nullable_long___ctor__, v10);
    sub_B0D8A4(&object___TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&float_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_B0D8A4(&SoundManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v16);
    sub_B0D8A4(&StringLiteral_9965/*"OnChangeBgmVolume"*/, v17);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v18);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v19);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v20);
    sub_B0D8A4(&iTween_TypeInfo, v21);
    byte_4211D8B = 1;
  }
  memset(&v58, 0, sizeof(v58));
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
    sub_B0D840(&this->fields.BackupBgmName, v24);
  }
  v25 = *p_BackupBgmName;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0LL);
  if ( !System_String__op_Inequality(v25, BgmName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Instance = sub_B0D8BC(object___TypeInfo, 8LL);
    if ( !Instance )
      goto LABEL_81;
    v37 = (System_Object_array *)Instance;
    v38 = StringLiteral_18972/*"from"*/;
    if ( StringLiteral_18972/*"from"*/ )
    {
      v38 = sub_B0D964(StringLiteral_18972/*"from"*/, v37->obj.klass->_1.element_class);
      if ( !v38 )
        goto LABEL_82;
      v39 = StringLiteral_18972/*"from"*/;
    }
    else
    {
      v39 = 0LL;
    }
    if ( !v37->max_length )
      goto LABEL_80;
    v37->m_Items[0] = (Il2CppObject *)v39;
    sub_B0D840(v37->m_Items, v39);
    v44 = BattleSequenceManager_TypeInfo;
    if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v44 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v57.fields.value = v44->static_fields->NoblePhantasmBgmVolumeRate;
    v38 = j_il2cpp_value_box_0(float_TypeInfo, &v57);
    v45 = (Il2CppObject *)v38;
    if ( !v38 || (v38 = sub_B0D964(v38, v37->obj.klass->_1.element_class)) != 0 )
    {
      if ( v37->max_length <= 1 )
        goto LABEL_80;
      v37->m_Items[1] = v45;
      sub_B0D840(&v37->m_Items[1], v45);
      v38 = StringLiteral_22790/*"to"*/;
      if ( StringLiteral_22790/*"to"*/ )
      {
        v38 = sub_B0D964(StringLiteral_22790/*"to"*/, v37->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_82;
        v46 = StringLiteral_22790/*"to"*/;
      }
      else
      {
        v46 = 0LL;
      }
      if ( v37->max_length <= 2 )
        goto LABEL_80;
      v37->m_Items[2] = (Il2CppObject *)v46;
      sub_B0D840(&v37->m_Items[2], v46);
      LODWORD(fadeTime.fields.value) = 1;
      v38 = j_il2cpp_value_box_0(int_TypeInfo, &fadeTime);
      v47 = (Il2CppObject *)v38;
      if ( !v38 || (v38 = sub_B0D964(v38, v37->obj.klass->_1.element_class)) != 0 )
      {
        if ( v37->max_length <= 3 )
          goto LABEL_80;
        v37->m_Items[3] = v47;
        sub_B0D840(&v37->m_Items[3], v47);
        v38 = StringLiteral_22753/*"time"*/;
        if ( StringLiteral_22753/*"time"*/ )
        {
          v38 = sub_B0D964(StringLiteral_22753/*"time"*/, v37->obj.klass->_1.element_class);
          if ( !v38 )
            goto LABEL_82;
          v48 = StringLiteral_22753/*"time"*/;
        }
        else
        {
          v48 = 0LL;
        }
        if ( v37->max_length <= 4 )
          goto LABEL_80;
        v37->m_Items[4] = (Il2CppObject *)v48;
        sub_B0D840(&v37->m_Items[4], v48);
        v56 = 1056964608;
        v38 = j_il2cpp_value_box_0(float_TypeInfo, &v56);
        v49 = (Il2CppObject *)v38;
        if ( !v38 || (v38 = sub_B0D964(v38, v37->obj.klass->_1.element_class)) != 0 )
        {
          if ( v37->max_length <= 5 )
            goto LABEL_80;
          v37->m_Items[5] = v49;
          sub_B0D840(&v37->m_Items[5], v49);
          v38 = StringLiteral_21341/*"onupdate"*/;
          if ( StringLiteral_21341/*"onupdate"*/ )
          {
            v38 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v37->obj.klass->_1.element_class);
            if ( !v38 )
              goto LABEL_82;
            v50 = StringLiteral_21341/*"onupdate"*/;
          }
          else
          {
            v50 = 0LL;
          }
          if ( v37->max_length <= 6 )
            goto LABEL_80;
          v37->m_Items[6] = (Il2CppObject *)v50;
          sub_B0D840(&v37->m_Items[6], v50);
          v38 = StringLiteral_9965/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9965/*"OnChangeBgmVolume"*/ )
          {
            v51 = 0LL;
LABEL_70:
            if ( v37->max_length > 7 )
            {
              v37->m_Items[7] = (Il2CppObject *)v51;
              sub_B0D840(&v37->m_Items[7], v51);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v52 = iTween__Hash(v37, 0LL);
              iTween__ValueTo(gameObject, v52, 0LL);
              return;
            }
LABEL_80:
            v54 = sub_B0D9A8(v38);
            sub_B0D948(v54, 0LL);
          }
          v38 = sub_B0D964(StringLiteral_9965/*"OnChangeBgmVolume"*/, v37->obj.klass->_1.element_class);
          if ( v38 )
          {
            v51 = StringLiteral_9965/*"OnChangeBgmVolume"*/;
            goto LABEL_70;
          }
        }
      }
    }
LABEL_82:
    v55 = sub_B0D99C();
    sub_B0D948(v55, 0LL);
  }
  Instance = BattleSequenceManager__ExistBackupBgmPlayGroup(
               this,
               this->fields.changeFieldAfter != 0LL,
               this->fields.BackupBgmName,
               v28);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( Instance )
    {
      Instance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)Instance, 0LL);
      if ( Instance )
      {
        v29 = (BgmPlayArgsGroup_o *)Instance;
        Instance = *(_QWORD *)(Instance + 16);
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v58,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          while ( 1 )
          {
            v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v58,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v30 )
              break;
            current = v58.fields.current;
            if ( !v58.fields.current )
              sub_B0D97C(v30);
            v32 = (float)(__int64)v58.fields.current[2].klass + -800.0;
            if ( v32 == INFINITY )
              v33 = -INFINITY;
            else
              v33 = v32;
            v34 = UnityEngine_Mathf__Max_40819140(0, (int)v33, 0LL);
            fadeTime = 0LL;
            p_fadeTime = (System_Nullable_float__o)&fadeTime;
            System_Nullable_float____ctor(
              p_fadeTime,
              0.5,
              (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&v63.fields.has_value = v34;
            v57.fields.value = 0LL;
            *(_QWORD *)&v57.fields.has_value = 0LL;
            v63.fields.value = (int64_t)&v57;
            System_Nullable_long____ctor(v63, Method_System_Nullable_long___ctor__, v35);
            v62 = fadeTime;
            v61 = 0LL;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v61, v62, v57, 0LL);
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v58,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_23846644(v29, 0LL, 0LL);
          return;
        }
      }
    }
LABEL_81:
    sub_B0D97C(Instance);
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
      v42 = this->fields.performance;
      if ( v42 )
      {
        Instance = (__int64)v42->fields.logic;
        if ( Instance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)Instance, 0LL, 0LL);
          v43 = this->fields.performance;
          if ( v43 )
          {
            Instance = (__int64)v43->fields.logic;
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
  v53 = *p_BackupBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v53, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleSequenceManager___c__DisplayClass140_0_o *v11; // x22
  __int64 v12; // x0
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_4211DA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_B0D8A4(&Method_System_Func_BgmPlayArgs__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_BgmPlayArgs__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__, v9);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass140_0_TypeInfo, v10);
    byte_4211DA2 = 1;
  }
  v11 = (BattleSequenceManager___c__DisplayClass140_0_o *)sub_B0D974(
                                                            BattleSequenceManager___c__DisplayClass140_0_TypeInfo,
                                                            isCheckExistBgm,
                                                            checkBgmName);
  BattleSequenceManager___c__DisplayClass140_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.checkBgmName = checkBgmName;
  sub_B0D840(&v11->fields, checkBgmName);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                               backupBgmPlayArgsGroup,
                                                               0LL);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BgmPlayArgs__bool__TypeInfo,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v14,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_171B1E8 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  if ( (byte_4211D82 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211D82 = 1;
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
        v15 = sub_B0D9A8(this);
        sub_B0D948(v15, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  BattleSequenceManager___c__DisplayClass74_0_o *v32; // x22
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  BattleSequenceManager___c_c *v39; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_0; // x23
  Il2CppObject *v42; // x24
  struct BattleSequenceManager___c_StaticFields *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x21
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  BattleSequenceManager___c_c *v53; // x0
  struct BattleSequenceManager___c_StaticFields *v54; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_2; // x19
  Il2CppObject *v56; // x22
  struct BattleSequenceManager___c_StaticFields *v57; // x0
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4211D71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_B0D8A4(&Method_System_Comparison_USFGOPlayAudioEvent___ctor__, v6);
    sub_B0D8A4(&Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__, v7);
    sub_B0D8A4(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v8);
    sub_B0D8A4(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v12);
    sub_B0D8A4(&Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v15);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v16);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v25);
    sub_B0D8A4(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v26);
    sub_B0D8A4(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__, v27);
    sub_B0D8A4(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__, v28);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v29);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo, v30);
    sub_B0D8A4(&BattleSequenceManager___c_TypeInfo, v31);
    byte_4211D71 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v32 = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B0D974(
                                                           BattleSequenceManager___c__DisplayClass74_0_TypeInfo,
                                                           sequence,
                                                           syncGroupName);
  BattleSequenceManager___c__DisplayClass74_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_31;
  v32->fields.syncGroupName = syncGroupName;
  sub_B0D840(&v32->fields, syncGroupName);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_31;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                         sequence,
                                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v36 )
    goto LABEL_31;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v36,
    v33,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v39 = BattleSequenceManager___c_TypeInfo;
  if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v39 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                                                           v37,
                                                                           v38);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__74_0,
      v42,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    v43 = BattleSequenceManager___c_TypeInfo->static_fields;
    v43->__9__74_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__74_0;
    sub_B0D840(&v43->__9__74_0, _9__74_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v36,
    (System_Comparison_T__o *)_9__74_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v46 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo,
                                                                             v44,
                                                                             v45);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v46,
    (Il2CppObject *)v32,
    Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v36,
          (System_Func_T__bool__o *)v46,
          (const MethodInfo_1707138 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo,
                                                                                                    v47,
                                                                                                    v48);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v49,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    v33 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                           sequence,
                                                           (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v49 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v49,
        v33,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v50 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                             sequence,
                                                             (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v49,
        v50,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v53 = BattleSequenceManager___c_TypeInfo;
      if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v53 = BattleSequenceManager___c_TypeInfo;
      }
      v54 = v53->static_fields;
      _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v54->__9__74_2;
      if ( !_9__74_2 )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v54 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v56 = (Il2CppObject *)v54->__9;
        _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                               System_Comparison_USFGOPlayAudioEvent__TypeInfo,
                                                                               v51,
                                                                               v52);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__74_2,
          v56,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
        v57 = BattleSequenceManager___c_TypeInfo->static_fields;
        v57->__9__74_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__74_2;
        sub_B0D840(&v57->__9__74_2, _9__74_2);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v49,
        (System_Comparison_T__o *)_9__74_2,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v58,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v49,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v58,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v58.fields.current )
          sub_B0D97C(0LL);
      }
      while ( (((__int64 (*)(void))v58.fields.current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v58,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_31:
    sub_B0D97C(v33);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  int32_t ServantId; // w0

  if ( (byte_4211D75 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4211D75 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_B0D97C(actor);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  Il2CppObject *v12; // x22
  WebViewManager_o *Instance; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4211D95 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&pos);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_B0D8A4(&StringLiteral_6010/*"Enemy"*/, v9);
    sub_B0D8A4(&StringLiteral_10723/*"Player"*/, v10);
    byte_4211D95 = 1;
  }
  v11 = &StringLiteral_6010/*"Enemy"*/;
  if ( !isEnemy )
    v11 = &StringLiteral_10723/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v17 = pos;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v15 = System_String__Format_43845440(format, v12, v14, 0LL);
  if ( !Instance )
    sub_B0D97C(v15);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleSequenceManager___c__DisplayClass121_0_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4211D96 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__, *(_QWORD *)&posIndex);
    sub_B0D8A4(&Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__, v5);
    sub_B0D8A4(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__, v7);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass121_0_TypeInfo, v8);
    byte_4211D96 = 1;
  }
  v9 = (BattleSequenceManager___c__DisplayClass121_0_o *)sub_B0D974(
                                                           BattleSequenceManager___c__DisplayClass121_0_TypeInfo,
                                                           *(_QWORD *)&posIndex,
                                                           method);
  BattleSequenceManager___c__DisplayClass121_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.posIndex = posIndex;
  battleTargetList = this->fields.battleTargetList;
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo,
                                                                   v11,
                                                                   v12);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)battleTargetList,
                                        (System_Predicate_T__o *)v14,
                                        (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v10 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v10 )
      return UnityEngine_GameObject__get_transform(v10, 0LL);
LABEL_9:
    sub_B0D97C(v10);
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
  sub_B0D840(fxdVoice, 0LL);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_B0D840(fxdVoice, fixedVoice);
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

  if ( (byte_4211DA1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211DA1 = 1;
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
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_B0D97C(v8);
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
  srcLineSprite_o *Component_srcLineSprite; // x19

  if ( (byte_4211DA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_4211DA3 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_21;
  v5 = (WebViewManager_o *)v5->fields.webView;
  if ( !v5 )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v5,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (WebViewManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_21:
    sub_B0D97C(v5);
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
  UnityEngine_Object_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4211DA5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211DA5 = 1;
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *IsNullOrEmpty; // x0

  if ( (byte_4211D73 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    byte_4211D73 = 1;
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
    sub_B0D97C(IsNullOrEmpty);
  }
  IsNullOrEmpty = this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
    (EventMissionProgressRequest_Argument_ProgressData_o *)bgmName,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
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

  if ( (byte_4211D74 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, obj);
    byte_4211D74 = 1;
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
      sub_B0D97C(0LL);
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
  UnityEngine_GameObject_o *monitor; // x0
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v12; // x8
  struct BattleData_o *v13; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  srcLineSprite_o *v16; // x21
  __int64 *v17; // x8
  struct BattlePerformance_o *v18; // x9
  System_String_o *v19; // x19
  BattleData_o *v20; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211D91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_18376/*"en_Parts_Up01"*/, v6);
    sub_B0D8A4(&StringLiteral_18375/*"en_Parts_Under01"*/, v7);
    byte_4211D91 = 1;
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
      v10 = this->fields.performance;
      if ( !v10 )
        goto LABEL_61;
      data = (UnityEngine_Object_o *)v10->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)monitor & 1) == 0 )
      {
        v12 = this->fields.performance;
        if ( !v12 )
          goto LABEL_61;
        v13 = v12->fields.data;
        if ( !v13 )
          goto LABEL_61;
        if ( v13->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_61;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              CoreObj,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                v16 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        monitor,
                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                monitor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                        (UnityEngine_Object_o *)v16,
                                                        0LL,
                                                        0LL);
                if ( ((unsigned __int8)monitor & 1) == 0 )
                {
                  if ( !v16 )
                    goto LABEL_61;
                  if ( LOBYTE(v16[3].fields.mcTweenAlphaP) )
                  {
                    monitor = *(UnityEngine_GameObject_o **)&v16[3].fields.mtIsUpdate;
                    if ( !monitor )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)monitor, 0LL) )
                      goto LABEL_43;
                    monitor = *(UnityEngine_GameObject_o **)&v16[3].fields.mtIsUpdate;
                    if ( !monitor )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)monitor, 0LL) )
                    {
LABEL_43:
                      monitor = *(UnityEngine_GameObject_o **)&v16[3].fields.mtIsUpdate;
                      if ( !monitor )
                        goto LABEL_61;
                      monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                              (BattleServantData_o *)monitor,
                                                              0LL);
                      if ( ((unsigned __int8)monitor & 1) != 0 )
                      {
                        v17 = &StringLiteral_18376/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        monitor = *(UnityEngine_GameObject_o **)&v16[3].fields.mtIsUpdate;
                        if ( !monitor )
                          goto LABEL_61;
                        monitor = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                (BattleServantData_o *)monitor,
                                                                0LL);
                        if ( ((unsigned __int8)monitor & 1) == 0 )
                          return 0;
                        v17 = &StringLiteral_18375/*"en_Parts_Under01"*/;
                      }
                      v18 = this->fields.performance;
                      if ( !v18 )
                        goto LABEL_61;
                      v19 = (System_String_o *)*v17;
                      v20 = v18->fields.data;
                      monitor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_srcLineSprite,
                                                              0LL);
                      if ( !v20 )
                        goto LABEL_61;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v20,
                                                                    (UnityEngine_Transform_o *)monitor,
                                                                    v19,
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
                          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)monitor,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v25 = v22;
                            v26 = v23;
                            v27 = v24;
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
                                v33.fields.x = v25 - x;
                                v33.fields.y = v26 - y;
                                v33.fields.z = v27 - z;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)monitor, v33, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_61:
                        sub_B0D97C(monitor);
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
    sub_B0D97C(this);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = &v3->fields.BgChangedCallback;
    System_Action__Invoke(BgChangedCallback, 0LL);
    *p_BgChangedCallback = 0LL;
    sub_B0D840(p_BgChangedCallback, 0LL);
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

  if ( (byte_4211D86 & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4211D86 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_B0D97C(0LL);
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
      p_method = sub_AA67A0(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8));
    if ( !v16 )
      sub_B0D97C(0LL);
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
        v20 = sub_AA67A0(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v24 = sub_AA67A0(v16, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
      if ( !v25 )
        sub_B0D97C(0LL);
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
      v31 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  __int64 transform; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  Il2CppObject *v37; // x20
  int v38; // w20
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v41; // x21
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v43; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v46; // x10
  unsigned __int64 v47; // x22
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v49; // x21
  struct System_Collections_Generic_List_bool__o *v50; // x27
  char *v51; // x8
  int v52; // w27
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v55; // x24
  __int64 v56; // x25
  unsigned __int64 v57; // x9
  unsigned __int64 v58; // x26
  UnityEngine_Object_o *v59; // x21
  struct BattlePerformance_o *v60; // x9
  struct UnityEngine_GameObject_array *v61; // x8
  unsigned int *v62; // x27
  __int64 v63; // x21
  struct BattlePerformance_o *v64; // x8
  struct UnityEngine_GameObject_array *v65; // x24
  __int64 v66; // x8
  unsigned __int64 v67; // x25
  UnityEngine_Object_o *v68; // x21
  struct System_Collections_Generic_List_bool__o *v69; // x28
  char *v70; // x8
  int v71; // w28
  UnityEngine_Object_o *v72; // x21
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v74; // x8
  struct BattlePerformance_o *v75; // x8
  struct UnityEngine_GameObject_array *v76; // x22
  __int64 v77; // x8
  unsigned __int64 v78; // x24
  UnityEngine_Object_o *v79; // x21
  BattleActorControl_o *v80; // x0
  const MethodInfo *v81; // x2
  struct BattlePerformance_o *v82; // x8
  struct UnityEngine_GameObject_array *v83; // x22
  __int64 v84; // x8
  unsigned __int64 v85; // x24
  UnityEngine_Object_o *v86; // x21
  BattleActorControl_o *v87; // x0
  const MethodInfo *v88; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v91; // x2
  const MethodInfo *v92; // x1
  UnityEngine_Camera_o *v93; // x21
  int32_t cullingMask; // w22
  char v95; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v97; // w22
  char v98; // w0
  struct BattlePerformance_o *v99; // x8
  UnityEngine_Object_o *v100; // x21
  bool v101; // w0
  System_Uri_o *v102; // x1
  struct BattlePerformance_o *v103; // x8
  BattlePerformance_o *v104; // x20
  int32_t v105; // w21
  int32_t CurrentGroundType; // w0
  __int64 v107; // x0
  __int64 v108; // x0
  struct UnityEngine_GameObject_o **v109; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+8h] [xbp-B8h] BYREF
  int v111[2]; // [xsp+20h] [xbp-A0h]
  int v112; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v114; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4211D88 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_USSequencer__Invoke__, method);
    sub_B0D8A4(&AssetManager_TypeInfo, v3);
    sub_B0D8A4(&CommonUI_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Object__Clear__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__get_Item__, v21);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v23);
    sub_B0D8A4(&StringLiteral_9620/*"NoblePhantasm/CutIns"*/, v24);
    sub_B0D8A4(&StringLiteral_2780/*"Battle2D"*/, v25);
    byte_4211D88 = 1;
  }
  entity = 0LL;
  memset(&v114, 0, sizeof(v114));
  memset(&v113, 0, sizeof(v113));
  v112 = 0;
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
    transform = (__int64)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_195;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_195;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v28);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v30);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v31);
  BattleSequenceManager__restoreBattleActorTransform(this, v32);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_195;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_2669C30 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v33) )
    BattleSequenceManager__CrossFadeBgm(this, v34);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v34);
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
    &v110,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v114 = v110;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v114,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v114.fields.current;
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
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)current, 0LL);
    }
  }
  v111[0] = 208;
  v112 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v114,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  v112 = 0;
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_Object__Clear__);
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v110,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v113 = v110;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v113,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v37 = v113.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)v37, 0LL);
    }
  }
  v111[0] = 284;
  v38 = ++v112;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v113,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v38 && v111[v38 - 1] == 284 )
    v112 = v38 - 1;
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v41 = (UnityEngine_Object_o *)*p_seqObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v41, 0LL);
    *p_seqObject = 0LL;
    sub_B0D840(&this->fields.seqObject, 0LL);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_195;
  v43 = this->fields.performance;
  v109 = &this->fields.seqObject;
  if ( !v43 )
    goto LABEL_195;
  p_actorlist = v43->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_195;
  e_actorlist = v43->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_195;
  v46 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v46 )
  {
    if ( (int)v46 >= 1 )
    {
      v47 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v47 < max_length )
      {
        v49 = (UnityEngine_Object_o *)p_actorlist->m_Items[v47];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v50 = this->fields.ActorActiveList;
          if ( !v50 )
            goto LABEL_195;
          if ( v47 >= (unsigned int)v50->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v49 )
            goto LABEL_195;
          v51 = (char *)v50->fields._items + v47;
          v52 = (unsigned __int8)v51[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v49, v51[32] != 0, 0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v49,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v52 != 0, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v47 >= (int)max_length )
          goto LABEL_88;
      }
LABEL_196:
      v107 = sub_B0D9A8(transform);
      sub_B0D948(v107, 0LL);
    }
    LODWORD(v47) = 0;
LABEL_88:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_195;
    v55 = 4LL;
    v56 = 8LL;
    while ( 1 )
    {
      v57 = saveWaitEnemy->max_length;
      v58 = v55 - 4;
      if ( v55 - 4 >= (int)v57 )
        break;
      if ( v58 >= v57 )
        goto LABEL_196;
      v59 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v55);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v60 = this->fields.performance;
        if ( !v60 )
          goto LABEL_195;
        v61 = this->fields.saveWaitEnemy;
        if ( !v61 )
          goto LABEL_195;
        if ( v58 >= v61->max_length )
          goto LABEL_196;
        v62 = (unsigned int *)v60->fields.e_actorlist;
        if ( !v62 )
          goto LABEL_195;
        v63 = *((_QWORD *)&v61->obj.klass + v55);
        if ( v63 )
        {
          transform = sub_B0D964(v63, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
          if ( !transform )
          {
            v108 = sub_B0D99C();
            sub_B0D948(v108, 0LL);
          }
        }
        if ( v58 >= v62[6] )
          goto LABEL_196;
        *(_QWORD *)&v62[v56] = v63;
        sub_B0D840(&v62[v56], v63);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v55;
      v56 += 2LL;
      if ( !saveWaitEnemy )
        goto LABEL_195;
    }
    v64 = this->fields.performance;
    if ( !v64 )
      goto LABEL_195;
    v65 = v64->fields.e_actorlist;
    if ( !v65 )
      goto LABEL_195;
    v66 = *(_QWORD *)&v65->max_length;
    if ( (int)v66 >= 1 )
    {
      v67 = 0LL;
      while ( v67 < (unsigned int)v66 )
      {
        v68 = (UnityEngine_Object_o *)v65->m_Items[v67];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v68, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v69 = this->fields.ActorActiveList;
          if ( !v69 )
            goto LABEL_195;
          if ( v69->fields._size <= (unsigned int)(v47 + v67) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          if ( !v68 )
            goto LABEL_195;
          v70 = (char *)v69->fields._items + (int)v47 + (int)v67;
          v71 = (unsigned __int8)v70[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v68, v70[32] != 0, 0LL);
          v72 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v68,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v72 )
              goto LABEL_195;
            transform = (__int64)v72[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v71 != 0, 0LL);
          }
        }
        LODWORD(v66) = v65->max_length;
        if ( (__int64)++v67 >= (int)v66 )
          goto LABEL_127;
      }
      goto LABEL_196;
    }
LABEL_127:
    v43 = this->fields.performance;
    if ( !v43 )
      goto LABEL_195;
  }
  data = (UnityEngine_Object_o *)v43->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v74 = this->fields.performance;
    if ( !v74 )
      goto LABEL_195;
    transform = (__int64)v74->fields.data;
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
  v75 = this->fields.performance;
  if ( !v75 )
    goto LABEL_195;
  v76 = v75->fields.p_actorlist;
  if ( !v76 )
    goto LABEL_195;
  v77 = *(_QWORD *)&v76->max_length;
  if ( (int)v77 >= 1 )
  {
    v78 = 0LL;
    while ( v78 < (unsigned int)v77 )
    {
      v79 = (UnityEngine_Object_o *)v76->m_Items[v78];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v79, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v79 )
          goto LABEL_195;
        v80 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v79,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v80, v81);
      }
      LODWORD(v77) = v76->max_length;
      if ( (__int64)++v78 >= (int)v77 )
        goto LABEL_149;
    }
    goto LABEL_196;
  }
LABEL_149:
  v82 = this->fields.performance;
  if ( !v82 )
    goto LABEL_195;
  v83 = v82->fields.e_actorlist;
  if ( !v83 )
    goto LABEL_195;
  v84 = *(_QWORD *)&v83->max_length;
  if ( (int)v84 >= 1 )
  {
    v85 = 0LL;
    while ( v85 < (unsigned int)v84 )
    {
      v86 = (UnityEngine_Object_o *)v83->m_Items[v85];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v86, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v86 )
          goto LABEL_195;
        v87 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v86,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v87, v88);
      }
      LODWORD(v84) = v83->max_length;
      if ( (__int64)++v85 >= (int)v84 )
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
    sub_B0D840(&this->fields.standFigure, 0LL);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v91) )
    BattleSequenceManager__ReleaseCpk(this, v92);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v93 = this->fields.actorCamera;
  if ( !v93 )
    goto LABEL_195;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v95 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2780/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v93, (1 << v95) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_195;
  v97 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v98 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2780/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v97 & ~(1 << v98), 0LL);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v99 = this->fields.performance;
  if ( !v99 )
    goto LABEL_195;
  transform = (__int64)v99->fields.bgPerf;
  if ( !transform )
    goto LABEL_195;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( this->fields.OnCompleteActorCallback )
  {
    v100 = (UnityEngine_Object_o *)*v109;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v101 = UnityEngine_Object__op_Inequality(v100, 0LL, 0LL);
    v102 = 0LL;
    if ( v101 )
    {
      transform = (__int64)*v109;
      if ( !*v109 )
        goto LABEL_195;
      v102 = (System_Uri_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)transform,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    }
    transform = (__int64)this->fields.OnCompleteActorCallback;
    if ( transform )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)transform,
        v102,
        (const MethodInfo_246EA50 *)Method_System_Action_USSequencer__Invoke__);
      goto LABEL_184;
    }
LABEL_195:
    sub_B0D97C(transform);
  }
LABEL_184:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9620/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_195;
  *(_BYTE *)(transform + 129) = 0;
  v103 = this->fields.performance;
  if ( !v103 )
    goto LABEL_195;
  transform = (__int64)v103->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v104 = this->fields.performance;
  if ( !v104 )
    goto LABEL_195;
  transform = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_195;
  v105 = transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v104, v105, CurrentGroundType, 0, 0LL);
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
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v16; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v17; // x20
  Il2CppClass *klass; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v19; // x19
  unsigned __int64 v20; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x19
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  BattleSequenceManager___c__DisplayClass111_0_o *v30; // x21
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x23
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo_2980204 *v40; // x3
  BgmPlayArgs_o *args; // x21
  __int64 v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  System_Nullable_long__o v47; // [xsp+8h] [xbp-68h] BYREF
  __int64 v48; // [xsp+18h] [xbp-58h]
  System_Nullable_float__o v49; // 0:x1.8
  System_Nullable_float__o v50; // 0:x2.8
  System_Nullable_long__o v51; // 0:x0.16

  if ( (byte_4211D8D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_B0D8A4(&BgmManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_B0D8A4(&Method_System_Func_BgmPlayArgs__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BgmPlayArgs__bool__TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Nullable_long___ctor__, v11);
    sub_B0D8A4(
      &Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v12);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass111_0_TypeInfo, v13);
    byte_4211D8D = 1;
  }
  HIDWORD(v48) = 0;
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v14 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v14 )
    {
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(v14, 0LL);
      v16 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                                v15,
                                                                                                (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v17 = v16,
            (v16 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(this->fields.backupBgmPlayArgsGroup, 0LL)) == 0LL) )
      {
        sub_B0D97C(v16);
      }
      klass = v16->obj.klass;
      v19 = v16;
      if ( *(_WORD *)&v16->obj.klass->_2.bitflags1 )
      {
        v20 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v20;
          p_offset += 4;
          if ( v20 >= *(unsigned __int16 *)&v16->obj.klass->_2.bitflags1 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_AA67A0(v16, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v23 = (*(__int64 (__fastcall **)(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *, _QWORD))p_method)(
              v19,
              *(_QWORD *)(p_method + 8));
      if ( !v23 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v24 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v25 = 0LL;
          v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v25;
            v26 += 4;
            if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_21;
          }
          v27 = v24 + 16LL * *v26 + 312;
        }
        else
        {
LABEL_21:
          v27 = sub_AA67A0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
          break;
        v30 = (BattleSequenceManager___c__DisplayClass111_0_o *)sub_B0D974(
                                                                  BattleSequenceManager___c__DisplayClass111_0_TypeInfo,
                                                                  v28,
                                                                  v29);
        BattleSequenceManager___c__DisplayClass111_0___ctor(v30, 0LL);
        v31 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
        {
          v32 = 0LL;
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v32;
            v33 += 4;
            if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
              goto LABEL_28;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_28:
          v34 = sub_AA67A0(v23, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v23, *(_QWORD *)(v34 + 8));
        if ( !v30 )
          sub_B0D97C(v35);
        v30->fields.args = (struct BgmPlayArgs_o *)v35;
        sub_B0D840(&v30->fields, v35);
        v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_BgmPlayArgs__bool__TypeInfo,
                                                                                   v36,
                                                                                   v37);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v38,
          (Il2CppObject *)v30,
          Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          (const MethodInfo_26189B8 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           v17,
                                                                           (System_Func_T__bool__o *)v38,
                                                                           (const MethodInfo_170767C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          *(_QWORD *)&v51.fields.has_value = USFGOActorBattleActionEventConditional_OverwriteParamCondition[1].klass;
        else
          *(_QWORD *)&v51.fields.has_value = 0LL;
        args = v30->fields.args;
        v47.fields.value = 0LL;
        *(_QWORD *)&v47.fields.has_value = 0LL;
        v51.fields.value = (int64_t)&v47;
        System_Nullable_long____ctor(v51, Method_System_Nullable_long___ctor__, v40);
        if ( !args )
          sub_B0D97C(v42);
        v49 = 0LL;
        v50 = 0LL;
        BgmPlayArgs__Update(args, v49, v50, v47, 0LL);
      }
      v48 = 0x1000000A3LL;
      v43 = *(_QWORD *)v23;
      if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
      {
        v44 = 0LL;
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
            goto LABEL_41;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_41:
        v46 = sub_AA67A0(v23, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v23, *(_QWORD *)(v46 + 8));
      if ( (_DWORD)v48 == 163 )
        v48 = 163LL;
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_4211D89 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, actor);
    byte_4211D89 = 1;
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
      sub_B0D97C(v4);
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
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4211D8E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleSequenceManager__ReleaseCpk_b__112_0__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Action__Add__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_9622/*"NoblePhantasm_"*/, v7);
    byte_4211D8E = 1;
  }
  v17 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v17 = overwriteSvtVoiceId;
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  v12 = System_Int32__ToString((int32_t)&v17, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_43849904(
                                            (System_String_o *)StringLiteral_9622/*"NoblePhantasm_"*/,
                                            v12,
                                            0LL);
  if ( !ReleaseSoundNames
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__),
        DelayInvokeMethodList = this->fields.DelayInvokeMethodList,
        v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15),
        System_Action___ctor(v16, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__112_0__, 0LL),
        !DelayInvokeMethodList) )
  {
LABEL_9:
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DelayInvokeMethodList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Action__Add__);
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.fixedVoice = 0LL;
  sub_B0D840(&this->fields.fixedVoice, 0LL);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.intactBgmList = 0LL;
  sub_B0D840(&this->fields.intactBgmList, 0LL);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0

  if ( (byte_4211D8C & 1) == 0 )
  {
    sub_B0D8A4(&BgmManager_TypeInfo, method);
    byte_4211D8C = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_B0D840(&this->fields.backupBgmPlayArgsGroup, v3);
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
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v13; // x20
  System_String_o **v14; // x8
  __int64 v15; // x9
  __int64 v16; // x25
  System_String_o *v17; // x21
  unsigned __int64 v18; // x26
  unsigned int v19; // w8
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Transform_o *v22; // x22
  UnityEngine_Transform_o *v23; // x23
  int v24; // s0
  struct BattlePerformance_o *v27; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v31; // s9
  int v32; // s2
  unsigned int v33; // s0
  float v34; // s1
  struct BattlePerformance_o *v35; // x8
  struct BattleData_o *data; // x8
  __int64 v37; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4211D92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_9416/*"N_Enemy2"*/, v5);
    sub_B0D8A4(&StringLiteral_9417/*"N_Player2"*/, v6);
    byte_4211D92 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_61;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  v11 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_61;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        actor,
                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_61;
  performance = this->fields.performance;
  v13 = actor;
  v14 = (System_String_o **)((LOBYTE(actor[19].monitor) != 0) != (LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP) != 0)
                           ? &StringLiteral_9416/*"N_Enemy2"*/
                           : &StringLiteral_9417/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_61;
  v15 = 296LL;
  if ( LOBYTE(actor[19].monitor) )
    v15 = 304LL;
  v16 = *(__int64 *)((char *)&performance->klass + v15);
  if ( !v16 )
LABEL_61:
    sub_B0D97C(actor);
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v17 = *v14;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 24);
    do
    {
      if ( v18 >= v19 )
      {
        v37 = sub_B0D9A8(actor);
        sub_B0D948(v37, 0LL);
      }
      v20 = *(UnityEngine_GameObject_o **)(v16 + 32 + 8 * v18);
      v21 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, v21, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v17,
                                              0LL);
        if ( !v20 )
          goto LABEL_61;
        v22 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
        if ( !v22 )
          goto LABEL_61;
        v23 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position(v22, 0LL);
        if ( !v23 )
          goto LABEL_61;
        UnityEngine_Transform__set_position(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
        v27 = this->fields.performance;
        if ( !v27 )
          goto LABEL_61;
        actor = (UnityEngine_GameObject_o *)v27->fields.data;
        if ( !actor )
          goto LABEL_61;
        if ( BYTE6(actor[29].klass) && LOBYTE(v13[19].monitor) )
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
            v31 = (unsigned int)UnityEngine_Transform__get_position(v22, 0LL);
            *(UnityEngine_Vector3_o *)(&v32 - 2) = UnityEngine_Transform__get_position(v22, 0LL);
            if ( !transform )
              goto LABEL_61;
            v33 = v31;
            v34 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v32 - 2), 0LL);
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
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_61;
          UnityEngine_GameObject__SetActive(v20, 0, 0LL);
          v35 = this->fields.performance;
          if ( !v35 )
            goto LABEL_61;
          data = v35->fields.data;
          if ( !data )
            goto LABEL_61;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v13[19].monitor) )
            UnityEngine_GameObject__SetActive(v20, 1, 0LL);
        }
      }
      v19 = *(_DWORD *)(v16 + 24);
      ++v18;
    }
    while ( (__int64)v18 < (int)v19 );
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
    sub_B0D97C(0LL);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_B0D840(&this->fields.changeFieldAfter, actionData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v8; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v10; // x8

  v4 = this;
  if ( (byte_4211D9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    this = (BattleSequenceManager_o *)sub_B0D8A4(
                                        &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__,
                                        v6);
    byte_4211D9E = 1;
  }
  battleTargetList = v4->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_20;
  v8 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v10 = battleTargetList->fields._items->m_Items[v8];
    if ( v10 )
    {
      this = (BattleSequenceManager_o *)v10->fields.targetActor;
      if ( this )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        else
          BattleActorControl__setAuraFlip((BattleActorControl_o *)this, (bool)this[1].fields.seqObject, 0LL);
        battleTargetList = v4->fields.battleTargetList;
        ++v8;
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
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( this )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        return;
      }
    }
LABEL_20:
    sub_B0D97C(this);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.fixedVoice = voiceId;
  sub_B0D840(&this->fields.fixedVoice, voiceId);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  struct System_String_array *BgmNameListWithIds; // x0

  if ( (byte_4211D9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4211D9F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_B0D840(&this->fields.intactBgmList, BgmNameListWithIds);
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
  if ( (byte_4211D90 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4211D90 = 1;
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *actor; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x22
  __int64 v12; // x21
  int size; // w8
  BattleSequenceManager_BattleTarget_o *v14; // x8
  struct BattleActorControl_o *targetActor; // x8

  if ( (byte_4211D77 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4211D77 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               actor,
                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          Component_srcLineSprite,
          (BattleFBXComponent_o *)Component_srcLineSprite,
          isStart,
          v9),
        (battleTargetList = this->fields.battleTargetList) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(actor);
  }
  v12 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v12 >= size )
      break;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v14 = battleTargetList->fields._items->m_Items[v12];
    if ( v14 )
    {
      targetActor = v14->fields.targetActor;
      if ( targetActor )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          targetActor->fields.fbxcomponent,
          isStart,
          v10);
        battleTargetList = this->fields.battleTargetList;
        ++v12;
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
  _BOOL8 v7; // x0

  if ( (byte_4211D78 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, fbx);
    sub_B0D8A4(&StringLiteral_16260/*"_y0"*/, v6);
    byte_4211D78 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v7 )
  {
    if ( !fbx )
      sub_B0D97C(v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16260/*"_y0"*/, 0LL);
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
  unsigned __int64 max_length; // x8
  __int64 v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x21
  unsigned __int64 v23; // x25
  unsigned __int64 v24; // x8
  __int64 v25; // x0
  int v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4211D76 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1842/*"Actors/Actor"*/, v8);
    byte_4211D76 = 1;
  }
  v26 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_29:
    sub_B0D97C(seqObject);
  Component_srcLineSprite = (WellFired_USSequencer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v26 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v26, 0LL);
    v14 = System_String__Concat_43849904((System_String_o *)StringLiteral_1842/*"Actors/Actor"*/, v13, 0LL);
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
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_29;
      max_length = playerList->max_length;
      if ( (__int64)v11 < (int)max_length )
      {
        if ( v11 >= max_length )
        {
LABEL_30:
          v25 = sub_B0D9A8(seqObject);
          sub_B0D948(v25, 0LL);
        }
        seqObject = playerList->m_Items[v11];
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v16 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v16,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v11;
  }
  while ( v12 - 1 < 2 );
  v18 = 4LL;
  do
  {
    v26 = v18;
    v19 = System_Int32__ToString((int32_t)&v26, 0LL);
    v20 = System_String__Concat_43849904((System_String_o *)StringLiteral_1842/*"Actors/Actor"*/, v19, 0LL);
    v22 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    (BattleSequenceManager_o *)v20,
                                    Component_srcLineSprite,
                                    v20,
                                    v21);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = v18 - 4;
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_29;
      v24 = enemyList->max_length;
      if ( (__int64)v23 < (int)v24 )
      {
        if ( v23 >= v24 )
          goto LABEL_30;
        seqObject = (UnityEngine_GameObject_o *)*((_QWORD *)&enemyList->obj.klass + v18);
        if ( !seqObject )
          goto LABEL_29;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v22 )
          goto LABEL_29;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v22,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v18;
  }
  while ( v23 < 2 );
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
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
  BattleSequenceManager___c__DisplayClass114_0_o *v20; // x22
  void *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  BattleActionData_o *klass; // x24
  System_Collections_Generic_HashSet_int__o *v26; // x25
  void **p_targetList; // x21
  int v28; // w8
  void *v29; // x25
  unsigned int v30; // w20
  __int64 v31; // x8
  int32_t v32; // w1
  int v33; // w8
  void *v34; // x25
  unsigned int v35; // w20
  __int64 v36; // x8
  int32_t v37; // w1
  __int64 v38; // x1
  __int64 v39; // x2
  int v40; // w8
  void *v41; // x25
  unsigned int v42; // w20
  __int64 v43; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *moveToSubMemberList; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v45; // x25
  int mcTweenAlphaP_low; // w20
  System_Collections_Generic_HashSet_int__o *v47; // x22
  int v48; // w27
  int i; // w28
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  srcLineSprite_o *v53; // x0
  int32_t v54; // w21
  int v55; // w25
  int v56; // w8
  struct UnityEngine_GameObject_o *v57; // x21
  BattleActorControl_o *v58; // x23
  const MethodInfo *v59; // x2
  BattlePerformance_o *v60; // x0
  int32_t v61; // w20
  UnityEngine_Object_o *v62; // x21
  _BOOL8 v63; // x0
  BattleActorControl_o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  BattleSequenceManager_BattleTarget_o *v67; // x21
  BattlePerformance_o *v68; // x0
  __int64 ServantPosIndex; // x0
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  int v71; // w25
  __int64 v72; // x0
  int v73; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v74; // [xsp+18h] [xbp-98h] BYREF
  int v75[3]; // [xsp+30h] [xbp-80h]
  int v76; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4211D8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleActionData_MoveToSubMember___ctor__, method);
    sub_B0D8A4(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, v4);
    sub_B0D8A4(&BattleSequenceManager_BattleTarget_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__get_Count__, v13);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__, v18);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo, v19);
    byte_4211D8F = 1;
  }
  memset(&j, 0, sizeof(j));
  v76 = 0;
  v20 = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B0D974(
                                                            BattleSequenceManager___c__DisplayClass114_0_TypeInfo,
                                                            method,
                                                            v2);
  BattleSequenceManager___c__DisplayClass114_0___ctor(v20, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_B0D840(&this->fields.SingleTarget, 0LL);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_83;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  v26 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_HashSet_int____ctor(
    v26,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( !v20 )
    goto LABEL_83;
  v20->fields.targetList = v26;
  p_targetList = (void **)&v20->fields.targetList;
  sub_B0D840(&v20->fields, v26);
  if ( !klass )
    goto LABEL_83;
  actor = BattleActionData__getDamageList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v28 = *((_DWORD *)actor + 6);
  v29 = actor;
  if ( v28 >= 1 )
  {
    v30 = 0;
    while ( v30 < v28 )
    {
      v31 = *((_QWORD *)v29 + (int)v30 + 4);
      if ( !v31 )
        goto LABEL_83;
      v32 = *(_DWORD *)(v31 + 28);
      if ( v32 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v32,
                          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v28 = *((_DWORD *)v29 + 6);
      if ( (int)++v30 >= v28 )
        goto LABEL_20;
    }
LABEL_84:
    v72 = sub_B0D9A8(actor);
    sub_B0D948(v72, 0LL);
  }
LABEL_20:
  actor = BattleActionData__getBuffList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v33 = *((_DWORD *)actor + 6);
  v34 = actor;
  if ( v33 >= 1 )
  {
    v35 = 0;
    while ( v35 < v33 )
    {
      v36 = *((_QWORD *)v34 + (int)v35 + 4);
      if ( !v36 )
        goto LABEL_83;
      v37 = *(_DWORD *)(v36 + 40);
      if ( v37 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v37,
                          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v33 = *((_DWORD *)v34 + 6);
      if ( (int)++v35 >= v33 )
        goto LABEL_29;
    }
    goto LABEL_84;
  }
LABEL_29:
  actor = BattleActionData__getHealList(klass, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v40 = *((_DWORD *)actor + 6);
  v41 = actor;
  if ( v40 >= 1 )
  {
    v42 = 0;
    while ( v42 < v40 )
    {
      v43 = *((_QWORD *)v41 + (int)v42 + 4);
      if ( !v43 )
        goto LABEL_83;
      v38 = *(unsigned int *)(v43 + 28);
      if ( (_DWORD)v38 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v38,
                          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v40 = *((_DWORD *)v41 + 6);
      if ( (int)++v42 >= v40 )
        goto LABEL_38;
    }
    goto LABEL_84;
  }
LABEL_38:
  moveToSubMemberList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)klass->fields.moveToSubMemberList;
  if ( moveToSubMemberList )
  {
    v45 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_BattleActionData_MoveToSubMember__TypeInfo,
                                                                                 v38,
                                                                                 v39);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v45,
      (Il2CppObject *)v20,
      Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      moveToSubMemberList,
      (System_Action_T__o *)v45,
      (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
  }
  mcTweenAlphaP_low = LOBYTE(Component_srcLineSprite[3].fields.mcTweenAlphaP);
  v47 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v38,
                                                       v39);
  System_Collections_Generic_HashSet_int____ctor(
    v47,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  actor = *p_targetList;
  if ( !*p_targetList )
    goto LABEL_83;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v74,
    (System_Collections_Generic_HashSet_int__o *)actor,
    (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v73 = 0;
  j = v74;
  v48 = 0;
LABEL_42:
  for ( i = v48; ; ++i )
  {
    v48 = i;
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      break;
    performance = this->fields.performance;
    if ( !performance )
      sub_B0D97C(0LL);
    current = (int32_t)j.fields._current;
    ServantGameObject = BattlePerformance__getServantGameObject(performance, (int32_t)j.fields._current, 0LL);
    if ( !ServantGameObject )
      sub_B0D97C(0LL);
    v53 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ServantGameObject,
            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !v53 )
      sub_B0D97C(0LL);
    if ( (mcTweenAlphaP_low != 0) == (LOBYTE(v53[3].fields.mcTweenAlphaP) != 0) )
    {
      ++v73;
      goto LABEL_42;
    }
    if ( !v47 )
      sub_B0D97C(v53);
    System_Collections_Generic_HashSet_int___Add(
      v47,
      current,
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v75[0] = 391;
  v76 = 1;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v76 = 0;
  if ( v73 && i == 1 )
  {
    *p_targetList = v47;
    sub_B0D840(p_targetList, v47);
  }
  actor = *p_targetList;
  if ( !*p_targetList )
LABEL_83:
    sub_B0D97C(actor);
  if ( *((_DWORD *)actor + 8) == 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v74,
      (System_Collections_Generic_HashSet_int__o *)actor,
      (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v54 = -1;
    for ( j = v74;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          v54 = (int32_t)j.fields._current )
    {
      ;
    }
    v75[0] = 486;
    v55 = ++v76;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &j,
      (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v75[v55 - 1] == 486 )
      {
        --v55;
        v76 = v56;
      }
    }
    actor = this->fields.performance;
    if ( !actor )
      goto LABEL_83;
    actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v54, 0LL);
    if ( !actor )
      goto LABEL_83;
    v57 = (struct UnityEngine_GameObject_o *)actor;
    v58 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)actor,
                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this->fields.SingleTarget = v57;
    sub_B0D840(&this->fields.SingleTarget, v57);
    BattleSequenceManager__SetMultiTargetBattleEnemy(this, v58, v59);
    if ( !v47 )
      goto LABEL_83;
  }
  else
  {
    v55 = 0;
    if ( !v47 )
      goto LABEL_83;
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v74,
    v47,
    (const MethodInfo_2C75B04 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  j = v74;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_210FD28 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    v60 = this->fields.performance;
    if ( !v60 )
      sub_B0D97C(0LL);
    v61 = (int32_t)j.fields._current;
    v62 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(v60, (int32_t)j.fields._current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v63 = UnityEngine_Object__op_Equality(v62, 0LL, 0LL);
    if ( !v63 )
    {
      if ( !v62 )
        sub_B0D97C(v63);
      v64 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v62,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      v67 = (BattleSequenceManager_BattleTarget_o *)sub_B0D974(BattleSequenceManager_BattleTarget_TypeInfo, v65, v66);
      BattleSequenceManager_BattleTarget___ctor(v67, 0LL);
      v68 = this->fields.performance;
      if ( !v68 )
        sub_B0D97C(0LL);
      ServantPosIndex = BattlePerformance__getServantPosIndex(v68, v61, 0LL);
      if ( !v67 )
        sub_B0D97C(ServantPosIndex);
      BattleSequenceManager_BattleTarget__setup(v67, v64, ServantPosIndex, 0LL);
      battleTargetList = this->fields.battleTargetList;
      if ( !battleTargetList )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)battleTargetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    }
  }
  v75[v55] = 651;
  v71 = ++v76;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_210FD24 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v71 && v75[v71 - 1] == 651 )
    v76 = v71 - 1;
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B0D97C(0LL);
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
  if ( (byte_4211D85 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_4211D85 = 1;
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
    sub_B0D97C(this);
  }
}


void __fastcall BattleSequenceManager__SyncAttachedTargetPair(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetPosIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x21
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v15; // x4
  BaseMonoBehaviour_o *v16; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *monitor; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *npEndDeleteObjects; // x22
  int v22; // w22
  UnityEngine_Transform_o *v23; // x0
  BattleSyncTransformComponent_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x1

  v6 = this;
  if ( (byte_4211D94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___, tlcont);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4211D94 = 1;
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
    if ( !tlcont )
      goto LABEL_40;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)tlcont,
                                                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
                                                          v12);
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
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v16 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v16 )
          goto LABEL_40;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        monitor = (UnityEngine_Transform_o *)v16[11].monitor;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v15);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v16,
                                            dummyActorPrefab,
                                            monitor,
                                            TargetFieldPosNode,
                                            0LL);
        if ( !this )
          goto LABEL_40;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(tlcont, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
        if ( !this )
          goto LABEL_40;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          npEndDeleteObjects,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Object__Add__);
        v22 = 0;
      }
      else
      {
        v22 = 1;
      }
      v23 = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_UIWidget_(
                                          v23,
                                          (const MethodInfo_1706D18 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_40;
      v24 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_WebViewObject,
              0LL);
      if ( v22 )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)v24;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          v25,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Object__Add__);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tlcont, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_40:
      sub_B0D97C(this);
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
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v12; // x0
  UnityEngine_Object_o *klass; // x21
  UnityEngine_GameObject_o *v14; // x0
  System_Collections_ICollection_o *Components_iTween; // x21
  _BOOL8 IsNullOrEmpty; // x0
  void *v17; // x8
  unsigned __int64 v18; // x25
  NoblePhantasmTargetOverwriteTransform_o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4211DA4 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4211DA4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  battleTargetList = this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v20 )
        break;
      if ( !v23.fields.current )
        sub_B0D97C(v20);
      monitor = (UnityEngine_Object_o *)v23.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v12 )
      {
        if ( !monitor )
          sub_B0D97C(v12);
        klass = (UnityEngine_Object_o *)monitor[1].klass;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        {
          v14 = (UnityEngine_GameObject_o *)monitor[1].klass;
          if ( !v14 )
            sub_B0D97C(0LL);
          Components_iTween = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                    v14,
                                                                    (const MethodInfo_1B62E54 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_iTween, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_iTween )
              sub_B0D97C(IsNullOrEmpty);
            v17 = Components_iTween[1].monitor;
            if ( (int)v17 >= 1 )
            {
              v18 = 0LL;
              do
              {
                if ( v18 >= (unsigned int)v17 )
                {
                  v21 = sub_B0D9A8(IsNullOrEmpty);
                  sub_B0D948(v21, 0LL);
                }
                v19 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_iTween[2].klass + v18);
                if ( isOverwrite )
                {
                  if ( !v19 )
                    sub_B0D97C(0LL);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v19, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v19 )
                    sub_B0D97C(0LL);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v19, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v17) = Components_iTween[1].monitor;
                ++v18;
              }
              while ( (__int64)v18 < (int)v17 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211D6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_4211D6F = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
        &v10,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DelayInvokeMethodList,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v10,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields.current )
          System_Action__Invoke((System_Action_o *)v10.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v10,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
LABEL_13:
        sub_B0D97C(DelayInvokeMethodList);
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)DelayInvokeMethodList,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_Action__Clear__);
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
  BattleSequenceManager__WaitEndSequence_d__105_o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4211D87 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSequenceManager__WaitEndSequence_d__105_TypeInfo, method);
    byte_4211D87 = 1;
  }
  v4 = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B0D974(
                                                            BattleSequenceManager__WaitEndSequence_d__105_TypeInfo,
                                                            method,
                                                            v2);
  BattleSequenceManager__WaitEndSequence_d__105___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.__4__this = this;
  sub_B0D840(&v4->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v4;
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
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211DA8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4211DA8 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ReleaseSoundNames,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields.current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v11.fields.current, 0LL) )
    {
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
LABEL_12:
    sub_B0D97C(ReleaseSoundNames);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)ReleaseSoundNames,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattleSequenceManager__addServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  struct BattlePerformance_o *performance; // x8
  int32_t v11; // w2

  if ( (byte_4211D7A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, voiceMaster);
    byte_4211D7A = 1;
  }
  FlagRequestNumber = System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, labelName, 0LL);
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
      v11 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__AddServantVoicePlayed_18494184((BattleData_o *)FlagRequestNumber, chrId, v11, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(FlagRequestNumber);
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
  System_Action_o *v23; // x24
  __int64 v24; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_4211D83 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_4211D83 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_B0D840(&this->fields.BgChangedCallback, callback);
  performance = this->fields.performance;
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_B0D97C(v24);
  v25.fields.z = v13;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v25.fields.x = v15;
  v25.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v25, v26, 1, parentCamera, v23, 0LL);
}


bool __fastcall BattleSequenceManager__checkServantVoicePlayed(
        BattleSequenceManager_o *this,
        VoiceMaster_o *voiceMaster,
        int32_t chrId,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_String_o *FlagRequestNumber; // x0
  struct BattlePerformance_o *performance; // x8
  int32_t v11; // w2

  if ( (byte_4211D7C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, voiceMaster);
    byte_4211D7C = 1;
  }
  FlagRequestNumber = System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, labelName, 0LL);
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
    || (v11 = (int)FlagRequestNumber, (FlagRequestNumber = (System_String_o *)performance->fields.data) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(FlagRequestNumber);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v11, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4211D99 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_4211D99 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
         (System_Xml_XmlQualifiedName_o *)groupName,
         (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               playAudioSyncGroupIndexDict,
               groupName,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_B0D97C(playAudioSyncGroupIndexDict);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211D9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_4211D9B = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
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

  if ( (byte_4211D6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4211D6B = 1;
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
      sub_B0D97C(0LL);
    return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v7,
                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_4211D6E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    byte_4211D6E = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AA65A4(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return BYTE1(Instance[1].fields.basePanel) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  struct BattlePerformance_o *v5; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v8; // x8
  struct BattleData_o *v9; // x8

  if ( (byte_4211D6C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211D6C = 1;
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
  v5 = this->fields.performance;
  if ( !v5 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v5->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v8 = this->fields.performance;
  if ( !v8 || (v9 = v8->fields.data) == 0LL )
LABEL_16:
    sub_B0D97C(v4);
  return v9->fields.systemflg_acceleration > 1;
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
  UnityEngine_Object_o *performance; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  UnityEngine_GameObject_o *v10; // x20
  struct BattlePerformance_o *v11; // x8
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *v14; // x8
  struct BattleActionData_o *nowAction; // x9

  if ( (byte_4211D6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&OptionManager_TypeInfo, v4);
    byte_4211D6D = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_40;
  data = (UnityEngine_Object_o *)v7->fields.data;
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
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    Component_srcLineSprite = this->fields.actor;
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            Component_srcLineSprite,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    v10 = Component_srcLineSprite;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)Component_srcLineSprite[18].monitor;
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    if ( BattleServantData__IsOnlyFirstForcedOneSpeed((BattleServantData_o *)Component_srcLineSprite, 0LL) )
      return 0;
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)OptionManager__GetTDPlaySpeed(0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) == 0 )
    {
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_40;
      Component_srcLineSprite = (UnityEngine_GameObject_o *)v10[18].monitor;
      if ( !Component_srcLineSprite )
        goto LABEL_40;
      if ( BattleServantData__CheckFirstNpPlay((BattleServantData_o *)Component_srcLineSprite, v11->fields.data, 0LL) )
        return 0;
    }
    Component_srcLineSprite = (UnityEngine_GameObject_o *)v10[18].monitor;
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)BattleServantData__IsNpEffectSpeedFix(
                                                            (BattleServantData_o *)Component_srcLineSprite,
                                                            0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      Component_srcLineSprite = (UnityEngine_GameObject_o *)v10[18].monitor;
      if ( Component_srcLineSprite )
        return BattleServantData__IsNpDoubleSpeed((BattleServantData_o *)Component_srcLineSprite, 0LL);
LABEL_40:
      sub_B0D97C(Component_srcLineSprite);
    }
    v13 = this->fields.performance;
    if ( !v13 )
      goto LABEL_40;
    nowAction = v13->fields.nowAction;
    if ( nowAction )
    {
      if ( nowAction->fields.isForcedSpeedOne )
        return 0;
    }
  }
  else
  {
    v13 = this->fields.performance;
    if ( !v13 )
      goto LABEL_40;
  }
  v14 = v13->fields.data;
  if ( !v14 )
    goto LABEL_40;
  if ( v14->fields.systemflg_TdConstantvelocity )
    return 0;
  return v14->fields.systemflg_acceleration > 1;
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
  UnityEngine_Component_o *actorCamera; // x0
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  struct UnityEngine_Transform_o *parent; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v28; // x20

  if ( (byte_4211D81 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_4211D81 = 1;
  }
  this->fields.performance = performance;
  sub_B0D840(&this->fields.performance, performance);
  this->fields.actor = actor;
  sub_B0D840(&this->fields.actor, actor);
  this->fields.playerActors = players;
  sub_B0D840(&this->fields.playerActors, players);
  this->fields.enemyActors = enemies;
  sub_B0D840(&this->fields.enemyActors, enemies);
  this->fields.actorCamera = camera;
  sub_B0D840(&this->fields.actorCamera, camera);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_B0D840(&this->fields.effectCamera, middleCamera);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_B0D840(&this->fields.cutInCamera, cutIncamera);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_B0D97C(actorCamera);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_B0D840(&this->fields.originalCameraRoot, parent);
  this->fields.bgObject = bg;
  sub_B0D840(&this->fields.bgObject, bg);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v22);
  v25 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                            System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                            v23,
                                                                            v24);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v25,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v25;
  sub_B0D840(&this->fields.playAudioSyncGroupIndexDict, v25);
  v28 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_string__TypeInfo,
                                                                             v26,
                                                                             v27);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v28,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v28;
  sub_B0D840(&this->fields.playedAudioGroupIdHash, v28);
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
  if ( (byte_4211D9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_4211D9C = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4211D7E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1838/*"Actor"*/, name);
    sub_B0D8A4(&StringLiteral_16388/*"animCamLoc"*/, v4);
    byte_4211D7E = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_1838/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16388/*"animCamLoc"*/, 0LL);
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
  __int64 v25; // x1
  __int64 v26; // x2
  AssetLoader_LoadEndDataHandler_o *v27; // x19

  if ( (byte_4211D70 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__, v19);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass73_0_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_9620/*"NoblePhantasm/CutIns"*/, v21);
    byte_4211D70 = 1;
  }
  v22 = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B0D974(
                                                           BattleSequenceManager___c__DisplayClass73_0_TypeInfo,
                                                           *(_QWORD *)&chrId,
                                                           *(_QWORD *)&treasureDeviceId);
  BattleSequenceManager___c__DisplayClass73_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_11;
  v22->fields.__4__this = this;
  sub_B0D840(&v22->fields, this);
  v22->fields.onComplete = onComplete;
  v22->fields.chrId = chrId;
  v22->fields.limitCount = limitCount;
  v22->fields.treasureDeviceId = treasureDeviceId;
  v22->fields.treasureDeviceLv = treasureDeviceLv;
  v22->fields.npChargeStage = npChargeStage;
  v22->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  sub_B0D840(&v22->fields.onComplete, onComplete);
  actor = this->fields.actor;
  this->fields.chrId = v22->fields.chrId;
  this->fields.limitCount = v22->fields.limitCount;
  this->fields.treasureDeviceId = v22->fields.treasureDeviceId;
  this->fields.overwriteSvtVoiceId = v22->fields.overwriteSvtVoiceId;
  if ( !actor )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  v22->fields.battleActor = (struct BattleActorControl_o *)Component_srcLineSprite;
  sub_B0D840(&v22->fields.battleActor, Component_srcLineSprite);
  actor = (UnityEngine_GameObject_o *)v22->fields.battleActor;
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v22->fields.chrId,
        (actor = (UnityEngine_GameObject_o *)v22->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(actor);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9620/*"NoblePhantasm/CutIns"*/, v27, 1, 0LL);
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
  __int64 v34; // x0
  UnityEngine_Object_o *seqObject; // x23
  int32_t NPSeqIdFromCachedAssetName; // w0
  int32_t chrId; // w24
  int32_t v38; // w23
  struct BattlePerformance_o *v39; // x8
  struct BattlePerformance_o *v40; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v43; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v45; // w24
  char v46; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_bool__o *v49; // x24
  System_Collections_Generic_List_bool__o **p_ActorActiveList; // x23
  const MethodInfo *v51; // x1
  struct BattlePerformance_o *v52; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v54; // x8
  unsigned __int64 v55; // x21
  UnityEngine_Object_o *v56; // x24
  System_Collections_Generic_List_bool__o *v57; // x25
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v59; // x2
  struct BattlePerformance_o *v60; // x8
  struct UnityEngine_GameObject_array *v61; // x27
  __int64 v62; // x8
  unsigned __int64 v63; // x28
  UnityEngine_Object_o *v64; // x24
  BattleSequenceManager_o *v65; // x0
  const MethodInfo *v66; // x2
  unsigned int *v67; // x22
  unsigned int *v68; // x0
  struct BattlePerformance_o *v69; // x8
  struct UnityEngine_GameObject_array *v70; // x8
  __int64 v71; // x0
  const MethodInfo_2F393C0 *v72; // x2
  bool v73; // w1
  System_Collections_Generic_List_bool__o *v74; // x25
  UnityEngine_GameObject_o *gameObject; // x21
  BattleSequenceManager_o *v76; // x22
  __int64 v77; // x1
  BattleSequenceManager_o *v78; // x23
  __int64 v79; // x1
  BattleSequenceManager_c *v80; // x0
  BattleSequenceManager_o *v81; // x23
  __int64 v82; // x1
  BattleSequenceManager_o *v83; // x23
  __int64 v84; // x1
  __int64 v85; // x1
  System_Collections_Hashtable_o *v86; // x0
  System_String_o *BgmName; // x0
  const MethodInfo *v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  WellFired_USSequencer_o *v91; // x21
  struct UnityEngine_GameObject_array **p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v94; // x24
  System_Delegate_o *v95; // x0
  const MethodInfo *v96; // x2
  __int64 v97; // x0
  __int64 v98; // x0
  BattleSequenceManager_o *v99; // x0
  BattleActorControl_o *v100; // x1
  const MethodInfo *v101; // x2
  bool v102; // [xsp+Ch] [xbp-74h]
  System_Action_USSequencer__o *v103; // [xsp+10h] [xbp-70h]
  unsigned int **p_saveWaitEnemy; // [xsp+18h] [xbp-68h]
  int v105; // [xsp+24h] [xbp-5Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-58h] BYREF
  int v107; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_4211D84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_B0D8A4(&BattleSequenceManager_TypeInfo, v8);
    sub_B0D8A4(&CommonUI_TypeInfo, v9);
    sub_B0D8A4(&FSUtility_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_B0D8A4(&object___TypeInfo, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v21);
    sub_B0D8A4(&float_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v23);
    sub_B0D8A4(&StringLiteral_12901/*"ShowNobleInfo"*/, v24);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v25);
    sub_B0D8A4(&StringLiteral_9965/*"OnChangeBgmVolume"*/, v26);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v27);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v28);
    sub_B0D8A4(&StringLiteral_2780/*"Battle2D"*/, v29);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v30);
    this = (BattleSequenceManager_o *)sub_B0D8A4(&iTween_TypeInfo, v31);
    byte_4211D84 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_128;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_128;
  v34 = sub_B0D8BC(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v34;
  p_saveWaitEnemy = (unsigned int **)&v7->fields.saveWaitEnemy;
  sub_B0D840(&v7->fields.saveWaitEnemy, v34);
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
    v38 = NPSeqIdFromCachedAssetName;
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, v38, 0LL);
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
        (System_String_o *)StringLiteral_12901/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v39 = v7->fields.performance;
    if ( !v39 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v39->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v40 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v40 )
      goto LABEL_128;
    this = (BattleSequenceManager_o *)v40->fields.actioncamera;
    if ( !this )
      goto LABEL_128;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_128;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v43 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2780/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v43), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_128;
    v45 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v46 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2780/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v46) | v45, 0LL);
    v49 = (System_Collections_Generic_List_bool__o *)sub_B0D974(
                                                       System_Collections_Generic_List_bool__TypeInfo,
                                                       v47,
                                                       v48);
    System_Collections_Generic_List_bool____ctor(
      v49,
      (const MethodInfo_2F3865C *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v49;
    p_ActorActiveList = &v7->fields.ActorActiveList;
    sub_B0D840(&v7->fields.ActorActiveList, v49);
    v52 = v7->fields.performance;
    if ( !v52 )
      goto LABEL_128;
    p_actorlist = v52->fields.p_actorlist;
    v102 = isDemoMode;
    v103 = callback;
    if ( !p_actorlist )
      goto LABEL_128;
    v54 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v54 >= 1 )
    {
      v55 = 0LL;
      while ( v55 < (unsigned int)v54 )
      {
        v56 = (UnityEngine_Object_o *)p_actorlist->m_Items[v55];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
        v57 = *p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v56 )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v56, 0LL);
          if ( !v57 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            v57,
            (unsigned __int8)this & 1,
            (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__);
          Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)v56,
                                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            Component_srcLineSprite,
            (BattleActorControl_o *)Component_srcLineSprite,
            v59);
        }
        else
        {
          if ( !v57 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            *p_ActorActiveList,
            0,
            (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__);
        }
        LODWORD(v54) = p_actorlist->max_length;
        if ( (__int64)++v55 >= (int)v54 )
          goto LABEL_47;
      }
LABEL_129:
      v97 = sub_B0D9A8(this);
      sub_B0D948(v97, 0LL);
    }
LABEL_47:
    v60 = v7->fields.performance;
    if ( !v60 )
      goto LABEL_128;
    v61 = v60->fields.e_actorlist;
    if ( !v61 )
      goto LABEL_128;
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
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_128;
          v65 = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)v64,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(v65, (BattleActorControl_o *)v65, v66);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v64,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_128;
          this = *(BattleSequenceManager_o **)&this[1].fields.IsPlaying;
          if ( !this )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v67 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_128;
            this = (BattleSequenceManager_o *)sub_B0D964(v64, *(_QWORD *)(*(_QWORD *)v67 + 64LL));
            if ( !this )
              goto LABEL_130;
            if ( v63 >= v67[6] )
              goto LABEL_129;
            v68 = &v67[2 * v63];
            *((_QWORD *)v68 + 4) = v64;
            sub_B0D840(v68 + 8, v64);
            v69 = v7->fields.performance;
            if ( !v69 )
              goto LABEL_128;
            v70 = v69->fields.e_actorlist;
            if ( !v70 )
              goto LABEL_128;
            if ( v63 >= v70->max_length )
              goto LABEL_129;
            v71 = (__int64)v70 + 8 * v63;
            *(_QWORD *)(v71 + 32) = 0LL;
            sub_B0D840(v71 + 32, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v64, 0, 0LL);
            this = (BattleSequenceManager_o *)*p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_128;
            v72 = (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__;
            v73 = 1;
          }
          else
          {
            v74 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v64,
                                                0LL);
            if ( !v74 )
              goto LABEL_128;
            v72 = (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__;
            v73 = (unsigned __int8)this & 1;
            this = (BattleSequenceManager_o *)v74;
          }
        }
        else
        {
          this = (BattleSequenceManager_o *)*p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_128;
          v72 = (const MethodInfo_2F393C0 *)Method_System_Collections_Generic_List_bool__Add__;
          v73 = 0;
        }
        System_Collections_Generic_List_bool___Add((System_Collections_Generic_List_bool__o *)this, v73, v72);
        LODWORD(v62) = v61->max_length;
        if ( (__int64)++v63 >= (int)v62 )
          goto LABEL_73;
      }
      goto LABEL_129;
    }
LABEL_73:
    if ( !v102 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, v51);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, v51);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_B0D8BC(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_128;
    v76 = this;
    this = (BattleSequenceManager_o *)StringLiteral_18972/*"from"*/;
    if ( StringLiteral_18972/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_B0D964(StringLiteral_18972/*"from"*/, v76->klass->_1.element_class);
      if ( !this )
        goto LABEL_130;
      v77 = StringLiteral_18972/*"from"*/;
    }
    else
    {
      v77 = 0LL;
    }
    if ( !LODWORD(v76->fields.sequenceManager) )
      goto LABEL_129;
    *(_QWORD *)&v76->fields.servantId = v77;
    sub_B0D840(&v76->fields.servantId, v77);
    v107 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
    v78 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_B0D964(this, v76->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v76->fields.sequenceManager) <= 1 )
        goto LABEL_129;
      *(_QWORD *)&v76->fields.testNpPer = v78;
      sub_B0D840(&v76->fields.testNpPer, v78);
      this = (BattleSequenceManager_o *)StringLiteral_22790/*"to"*/;
      if ( StringLiteral_22790/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_B0D964(StringLiteral_22790/*"to"*/, v76->klass->_1.element_class);
        if ( !this )
          goto LABEL_130;
        v79 = StringLiteral_22790/*"to"*/;
      }
      else
      {
        v79 = 0LL;
      }
      if ( LODWORD(v76->fields.sequenceManager) <= 2 )
        goto LABEL_129;
      v76->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v79;
      sub_B0D840(&v76->fields.FadeTargetPanelIndexs, v79);
      v80 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v80 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v80->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v81 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_B0D964(this, v76->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v76->fields.sequenceManager) <= 3 )
          goto LABEL_129;
        *(_QWORD *)&v76->fields.IsPlaying = v81;
        sub_B0D840(&v76->fields.IsPlaying, v81);
        this = (BattleSequenceManager_o *)StringLiteral_22753/*"time"*/;
        if ( StringLiteral_22753/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_B0D964(StringLiteral_22753/*"time"*/, v76->klass->_1.element_class);
          if ( !this )
            goto LABEL_130;
          v82 = StringLiteral_22753/*"time"*/;
        }
        else
        {
          v82 = 0LL;
        }
        if ( LODWORD(v76->fields.sequenceManager) <= 4 )
          goto LABEL_129;
        v76->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v82;
        sub_B0D840(&v76->fields.ReleaseSoundNames, v82);
        v105 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v105);
        v83 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_B0D964(this, v76->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v76->fields.sequenceManager) <= 5 )
            goto LABEL_129;
          v76->fields.performance = (struct BattlePerformance_o *)v83;
          sub_B0D840(&v76->fields.performance, v83);
          this = (BattleSequenceManager_o *)StringLiteral_21341/*"onupdate"*/;
          if ( StringLiteral_21341/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_B0D964(StringLiteral_21341/*"onupdate"*/, v76->klass->_1.element_class);
            if ( !this )
              goto LABEL_130;
            v84 = StringLiteral_21341/*"onupdate"*/;
          }
          else
          {
            v84 = 0LL;
          }
          if ( LODWORD(v76->fields.sequenceManager) <= 6 )
            goto LABEL_129;
          v76->fields.seqObject = (struct UnityEngine_GameObject_o *)v84;
          sub_B0D840(&v76->fields.seqObject, v84);
          this = (BattleSequenceManager_o *)StringLiteral_9965/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9965/*"OnChangeBgmVolume"*/ )
          {
            v85 = 0LL;
LABEL_112:
            if ( LODWORD(v76->fields.sequenceManager) <= 7 )
              goto LABEL_129;
            v76->fields.actor = (struct UnityEngine_GameObject_o *)v85;
            sub_B0D840(&v76->fields.actor, v85);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v86 = iTween__Hash((System_Object_array *)v76, 0LL);
            iTween__ValueTo(gameObject, v86, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_B0D840(&v7->fields.BackupBgmName, BgmName);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v88);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v91 = (WellFired_USSequencer_o *)this;
                    p_playerActors = &this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v94 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_B0D974(
                                                                        WellFired_USSequencer_PlaybackDelegate_TypeInfo,
                                                                        v89,
                                                                        v90);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v94,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v95 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v94, 0LL);
                    if ( v95
                      && (WellFired_USSequencer_PlaybackDelegate_c *)v95->klass != WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                    {
                      v99 = (BattleSequenceManager_o *)sub_B0DC70(v95);
                      BattleSequenceManager__PrevPlayTargetActorProc(v99, v100, v101);
                    }
                    else
                    {
                      v91->fields.PlaybackFinished = (struct WellFired_USSequencer_PlaybackDelegate_o *)v95;
                      sub_B0D840(p_playerActors, v95);
                      v7->fields.OnCompleteActorCallback = v103;
                      sub_B0D840(&v7->fields.OnCompleteActorCallback, v103);
                      WellFired_USSequencer__Play(v91, 0LL);
                      if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CommonUI_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                      }
                      if ( CommonUI__GetForceObi_16_9(0LL) )
                        BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v96);
                    }
                    return;
                  }
                }
              }
            }
LABEL_128:
            sub_B0D97C(this);
          }
          this = (BattleSequenceManager_o *)sub_B0D964(StringLiteral_9965/*"OnChangeBgmVolume"*/, v76->klass->_1.element_class);
          if ( this )
          {
            v85 = StringLiteral_9965/*"OnChangeBgmVolume"*/;
            goto LABEL_112;
          }
        }
      }
    }
LABEL_130:
    v98 = sub_B0D99C();
    sub_B0D948(v98, 0LL);
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
  srcLineSprite_o *Component_srcLineSprite; // x20
  __int64 v9; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v13; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v15; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v17; // x4
  VoiceMaster_o *v18; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v21; // x4
  __int64 v22; // x8
  unsigned __int64 v23; // x22
  __int64 v24; // x0

  if ( (byte_4211D9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&Voice_TypeInfo, v6);
    byte_4211D9D = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_35;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    v9 = *(_QWORD *)&Component_srcLineSprite[3].fields.mtIsUpdate;
    if ( !v9 )
      goto LABEL_35;
    if ( !*(_DWORD *)(v9 + 308) && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_srcLineSprite, 0LL) )
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)actor,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v18 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !Voice_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  }
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v18, chrId, FileName, v21);
                }
                v22 = *(_QWORD *)&v15->max_length;
                if ( (int)v22 >= 1 )
                {
                  v23 = 0LL;
                  do
                  {
                    if ( v23 >= (unsigned int)v22 )
                    {
                      v24 = sub_B0D9A8(MasterData_WarQuestSelectionMaster);
                      sub_B0D948(v24, 0LL);
                    }
                    BattleSequenceManager__addServantVoicePlayed(this, v18, this->fields.chrId, v15->m_Items[v23], v17);
                    LODWORD(v22) = v15->max_length;
                    ++v23;
                  }
                  while ( (__int64)v23 < (int)v22 );
                }
                return;
              }
LABEL_35:
              sub_B0D97C(actor);
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
  struct BattlePerformance_o *performance; // x8
  int32_t v11; // w2

  if ( (byte_4211D7B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, voiceMaster);
    byte_4211D7B = 1;
  }
  FlagRequestNumber = System_String__Concat_43849904((System_String_o *)StringLiteral_15952/*"_"*/, labelName, 0LL);
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
      v11 = (int)FlagRequestNumber;
      FlagRequestNumber = (System_String_o *)performance->fields.data;
      if ( FlagRequestNumber )
      {
        BattleData__removeServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v11, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B0D97C(FlagRequestNumber);
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211D98 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_4211D98 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v8.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
LABEL_11:
    sub_B0D97C(battleTargetList);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)battleTargetList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
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

  if ( (byte_4211D7F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_2773/*"Battle/Prefab/"*/, v13);
    byte_4211D7F = 1;
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
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v17 = System_String__Concat_43849904((System_String_o *)StringLiteral_2773/*"Battle/Prefab/"*/, name, 0LL);
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
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 v20; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
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

  if ( (byte_4211D80 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_B0D8A4(&StringLiteral_879/*"/"*/, v9);
    byte_4211D80 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_39;
    v20 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[v20 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v19 = (UnityEngine_Component_o *)sub_B0DC70(v19);
LABEL_39:
      sub_B0D97C(v19);
    }
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B0D97C(0LL);
    v24 = *(System_String_o **)&Component_srcLineSprite->fields.mtIsUpdate;
    v25 = System_String__Concat_43849904((System_String_o *)StringLiteral_879/*"/"*/, name, 0LL);
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
  v27 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
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
      v32 = sub_AA67A0(v27, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4211D9A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_4211D9A = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    playAudioSyncGroupIndexDict,
    (System_Xml_XmlQualifiedName_o *)groupName,
    value,
    (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_B0D97C(playAudioSyncGroupIndexDict);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)playAudioSyncGroupIndexDict,
    (WarBoardAIRoute_RouteData_o *)playSoundId,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 seqObject; // x0
  BattleSequenceManager_o *Component_srcLineSprite; // x19
  const MethodInfo *v82; // x3
  UnityEngine_Object_o *v83; // x22
  _BOOL8 v84; // x0
  const MethodInfo *v85; // x3
  WellFired_USTimelineContainer_o *v86; // x26
  __int64 v87; // x1
  __int64 v88; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v89; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  struct UnityEngine_GameObject_o *sequenceManager; // x23
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x23
  struct UnityEngine_Camera_o *actorCamera; // x1
  __int64 v97; // x27
  __int64 v98; // x23
  struct UnityEngine_Camera_o *effectCamera; // x1
  struct UnityEngine_Camera_o *cutInCamera; // x1
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  __int64 v103; // x27
  Il2CppObject *CutInPrefab; // x23
  float v105; // s8
  float y; // s9
  float z; // s10
  float v108; // s4
  float v109; // s5
  float v110; // s6
  float w; // s7
  float v112; // s4
  float v113; // s5
  float v114; // s6
  Il2CppObject *v115; // x0
  const MethodInfo *v116; // x1
  const MethodInfo *v117; // x2
  int v118; // w8
  __int64 v119; // x22
  int v120; // w19
  UnityEngine_Object_o *v121; // x27
  __int64 v122; // x8
  __int64 v123; // x26
  unsigned __int64 v124; // x25
  __int64 v125; // x28
  System_String_o *name; // x0
  _DWORD *monitor; // x8
  int32_t v128; // w23
  System_String_o *v129; // x0
  __int64 v130; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v131; // x1
  System_String_o *v132; // x0
  __int64 v133; // x9
  struct UnityEngine_Camera_o *v134; // x1
  UnityEngine_Transform_o *parent; // x0
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  __int64 v137; // x0
  int32_t treasureDeviceId; // w27
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *Manager__loadNoblePhantasmEffect; // x23
  __int64 v141; // x9
  __int64 v142; // x28
  struct UnityEngine_Camera_o *v143; // x1
  UnityEngine_Transform_o *v144; // x23
  int v145; // s0
  System_String_o *v148; // x0
  __int64 v149; // x9
  System_String_o **v150; // x23
  System_String_o *v151; // x0
  System_String_o *v152; // x0
  __int64 v153; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v154; // x23
  BattleSequenceManager_o *v155; // x0
  const MethodInfo *v156; // x3
  WellFired_USTimelineContainer_o *v157; // x0
  Il2CppObject *current; // x23
  _BOOL8 v159; // x0
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  void *v161; // x24
  int v162; // w8
  int i; // w23
  WellFired_USTimelineEvent_o *v164; // x0
  _QWORD *v165; // x25
  __int64 v166; // x8
  unsigned __int64 v167; // x28
  __int64 v168; // x26
  System_String_o *v169; // x0
  __int64 v170; // x9
  __int64 v171; // x0
  UnityEngine_Component_o *v172; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *v175; // x8
  unsigned __int64 v176; // x10
  System_Collections_IEnumerator_c **v177; // x11
  __int64 v178; // x0
  UnityEngine_Component_o *v179; // x0
  __int64 v180; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *v182; // x0
  srcLineSprite_o *v183; // x25
  System_String_o *v184; // x0
  System_String_o *v185; // x0
  System_String_o *v186; // x0
  System_String_o *v187; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v189; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v192; // x0
  __int64 v193; // x8
  __int64 v194; // x24
  unsigned __int64 v195; // x10
  int *v196; // x11
  __int64 v197; // x0
  System_Collections_IEnumerator_o *v198; // x23
  System_Collections_IEnumerator_c *v199; // x8
  unsigned __int64 v200; // x10
  int32_t *v201; // x11
  BattleSequenceManager_o *v202; // x24
  __int64 v203; // x0
  System_Collections_IEnumerator_c *v204; // x8
  unsigned __int64 v205; // x10
  System_Collections_IEnumerator_c **v206; // x11
  __int64 v207; // x0
  UnityEngine_Component_o *v208; // x0
  __int64 v209; // x9
  UnityEngine_GameObject_o *v210; // x0
  srcLineSprite_o *v211; // x0
  WellFired_USTimelineContainer_o *v212; // x24
  System_String_o *v213; // x0
  System_String_o *affectedObjectPath; // x0
  System_String_o *v215; // x25
  int v216; // w26
  System_String_o *v217; // x0
  System_String_o *v218; // x0
  char v219; // w27
  System_String_o *v220; // x0
  System_String_o *v221; // x0
  UnityEngine_Component_o *v222; // x0
  UnityEngine_Transform_o *v223; // x0
  System_String_o *v224; // x0
  UnityEngine_GameObject_o *actor; // x0
  UnityEngine_Transform_o *v226; // x25
  System_String_o *v227; // x0
  System_String_o *v228; // x0
  UnityEngine_Transform_o *v229; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  System_String_o *v231; // x0
  bool v232; // w0
  __int64 *v233; // x8
  System_String_o *v234; // x0
  bool v235; // w0
  System_String_o *v236; // x26
  UnityEngine_GameObject_o *v237; // x0
  System_String_o *v238; // x25
  UnityEngine_Transform_o *v239; // x0
  UnityEngine_Object_o *v240; // x27
  _BOOL8 v241; // x0
  System_Collections_IEnumerator_o *v242; // x27
  System_Collections_IEnumerator_c *v243; // x8
  unsigned __int64 v244; // x10
  int32_t *v245; // x11
  __int64 v246; // x0
  System_Collections_IEnumerator_c *v247; // x8
  unsigned __int64 v248; // x10
  System_Collections_IEnumerator_c **v249; // x11
  __int64 v250; // x0
  UnityEngine_Component_o *v251; // x0
  UnityEngine_Object_o *v252; // x28
  __int64 v253; // x9
  UnityEngine_Object_o *v254; // x0
  System_String_o *v255; // x0
  System_String_o *v256; // x0
  int v257; // w8
  System_String_o *v258; // x0
  _BOOL8 v259; // x0
  const MethodInfo *v260; // x2
  int32_t v261; // w26
  __int64 v262; // x0
  __int64 v263; // x27
  __int64 v264; // x8
  unsigned __int64 v265; // x10
  int *v266; // x11
  __int64 v267; // x0
  System_String_o *v268; // x27
  System_String_o *v269; // x0
  System_String_o *v270; // x27
  System_Char_array *v271; // x0
  System_String_array *v272; // x0
  System_String_o *v273; // x27
  UnityEngine_GameObject_o *v274; // x0
  UnityEngine_Transform_o *v275; // x26
  System_String_o *v276; // x0
  System_String_o *v277; // x0
  System_String_o *v278; // x0
  UnityEngine_Transform_o *v279; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v280; // x26
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v281; // x0
  _BOOL8 v282; // x0
  System_String_o *v283; // x0
  System_String_o *v284; // x1
  _BOOL8 v285; // x0
  BattleBuffData_o *v286; // x3
  const MethodInfo *v287; // x5
  _DWORD *v288; // x8
  int32_t v289; // w4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v290; // x0
  __int64 v291; // x0
  _BOOL8 IsNullOrEmpty; // x0
  UnityEngine_Transform_o *v293; // x0
  UnityEngine_Transform_o *v294; // x0
  float v295; // s8
  float v296; // s9
  float v297; // s10
  UnityEngine_Transform_o *v298; // x27
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v300; // x0
  UnityEngine_Transform_o *v301; // x0
  BattleSequenceManager_o *v302; // x0
  const MethodInfo *v303; // x4
  int32_t v304; // w25
  UnityEngine_Transform_o *v305; // x0
  UnityEngine_Transform_o *v306; // x0
  System_String_o *v307; // x0
  System_String_o *v308; // x0
  System_String_o *v309; // x0
  const MethodInfo *v310; // x3
  int32_t v311; // w2
  const MethodInfo *v312; // x3
  WarBoardControlPlayTalkUiComponent_array *EventCount; // x0
  WarBoardControlPlayTalkUiComponent_array *v314; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v317; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v319; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v320; // x27
  System_String_o *v321; // x0
  __int64 v322; // x9
  _BOOL8 v323; // x0
  UnityEngine_Component_o *v324; // x0
  UnityEngine_Transform_o *v325; // x0
  int32_t layer; // w25
  __int64 v327; // x8
  __int64 v328; // x23
  unsigned __int64 v329; // x10
  int *v330; // x11
  __int64 v331; // x0
  _DWORD *v332; // x8
  UnityEngine_Object_o *v333; // x21
  struct BattlePerformance_o *v334; // x8
  UnityEngine_Object_o *data; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t chrId; // w22
  VoiceMaster_o *v338; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v340; // x4
  int32_t v341; // w22
  System_String_o *v342; // x0
  const MethodInfo *v343; // x4
  _DWORD *v344; // x8
  int v345; // w20
  BalanceConfig_c *v346; // x0
  int32_t v347; // w20
  System_String_o *v348; // x0
  const MethodInfo *v349; // x4
  __int64 v350; // x0
  __int64 v351; // x0
  __int64 v352; // x0
  __int64 v353; // x0
  __int64 v354; // x0
  __int64 v355; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+0h] [xbp-140h]
  System_String_o *itema; // [xsp+0h] [xbp-140h]
  WellFired_USSequencer_o *seq; // [xsp+8h] [xbp-138h]
  char seqa; // [xsp+8h] [xbp-138h]
  __int64 v360; // [xsp+10h] [xbp-130h]
  int v361; // [xsp+10h] [xbp-130h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v363; // [xsp+20h] [xbp-120h]
  BattleSequenceManager_o *v364; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_T__o v365[2]; // [xsp+30h] [xbp-110h] BYREF
  int v366; // [xsp+68h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o m; // [xsp+70h] [xbp-D0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v369; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v370; // [xsp+B0h] [xbp-90h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v374; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4211D79 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, callback);
    sub_B0D8A4(&char___TypeInfo, v7);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v8);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoiceMaster___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v19);
    sub_B0D8A4(&System_GC_TypeInfo, v20);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v21);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v22);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v23);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v24);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v35);
    sub_B0D8A4(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v36);
    sub_B0D8A4(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v37);
    sub_B0D8A4(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v38);
    sub_B0D8A4(&NGUITools_TypeInfo, v39);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v40);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025368, v41);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v42);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v43);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v45);
    sub_B0D8A4(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v46);
    sub_B0D8A4(&WellFired_USFGOAttachToParentEvent_TypeInfo, v47);
    sub_B0D8A4(&WellFired_USFGOChangeBgEvent_TypeInfo, v48);
    sub_B0D8A4(&WellFired_USFGOPlayCutInEvent_TypeInfo, v49);
    sub_B0D8A4(&WellFired_USFGOSetCameraEvent_TypeInfo, v50);
    sub_B0D8A4(&Voice_TypeInfo, v51);
    sub_B0D8A4(&StringLiteral_887/*"/Actor/chr/"*/, v52);
    sub_B0D8A4(&StringLiteral_2782/*"BattleBG"*/, v53);
    sub_B0D8A4(&StringLiteral_894/*"/BattleActors/"*/, v54);
    sub_B0D8A4(&StringLiteral_2784/*"BattleCamera"*/, v55);
    sub_B0D8A4(&StringLiteral_2786/*"BattleCutIn"*/, v56);
    sub_B0D8A4(&StringLiteral_14813/*"USFGOSetCameraEvent"*/, v57);
    sub_B0D8A4(&StringLiteral_1838/*"Actor"*/, v58);
    sub_B0D8A4(&StringLiteral_16931/*"body_level_"*/, v59);
    sub_B0D8A4(&StringLiteral_889/*"/Actor/chr/weapon_level_"*/, v60);
    sub_B0D8A4(&StringLiteral_888/*"/Actor/chr/body_level_"*/, v61);
    sub_B0D8A4(&StringLiteral_6355/*"FGOSequenceManager"*/, v62);
    sub_B0D8A4(&StringLiteral_891/*"/AllEffects/"*/, v63);
    sub_B0D8A4(&StringLiteral_17477/*"chr(Clone)"*/, v64);
    sub_B0D8A4(&StringLiteral_3495/*"Cameras/BattleCamera"*/, v65);
    sub_B0D8A4(&StringLiteral_14811/*"USFGOChangeBgEvent"*/, v66);
    sub_B0D8A4(&StringLiteral_906/*"/BattleCamera"*/, v67);
    sub_B0D8A4(&StringLiteral_909/*"/CutIns/"*/, v68);
    sub_B0D8A4(&StringLiteral_2780/*"Battle2D"*/, v69);
    sub_B0D8A4(&StringLiteral_908/*"/Cameras/BattleCamera"*/, v70);
    sub_B0D8A4(&StringLiteral_16388/*"animCamLoc"*/, v71);
    sub_B0D8A4(&StringLiteral_23338/*"weapon_level_"*/, v72);
    sub_B0D8A4(&StringLiteral_614/*"(Clone)"*/, v73);
    sub_B0D8A4(&StringLiteral_14810/*"USFGOAttachToParentEvent"*/, v74);
    sub_B0D8A4(&StringLiteral_1/*""*/, v75);
    sub_B0D8A4(&StringLiteral_886/*"/Actor/chr"*/, v76);
    sub_B0D8A4(&StringLiteral_14809/*"USFGOAnimationCameraEvent"*/, v77);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v78);
    sub_B0D8A4(&StringLiteral_14812/*"USFGOPlayCutInEvent"*/, v79);
    byte_4211D79 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v370, 0, sizeof(v370));
  memset(&v369, 0, sizeof(v369));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  v366 = 0;
  seqObject = (__int64)this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_437;
  Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)seqObject,
                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v83 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  Component_srcLineSprite,
                                  (WellFired_USSequencer_o *)Component_srcLineSprite,
                                  (System_String_o *)StringLiteral_1838/*"Actor"*/,
                                  v82);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v84 = UnityEngine_Object__op_Inequality(v83, 0LL, 0LL);
  if ( v84 )
  {
    seqObject = (__int64)this->fields.actor;
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v83 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v83,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  v86 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)v84,
          (WellFired_USSequencer_o *)Component_srcLineSprite,
          (System_String_o *)StringLiteral_6355/*"FGOSequenceManager"*/,
          v85);
  v89 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo,
                                                                                                  v87,
                                                                                                  v88);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v89,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v363 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo,
                                                                                                   v90,
                                                                                                   v91);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v363,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_437;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)v83;
  seq = (WellFired_USSequencer_o *)Component_srcLineSprite;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)seqObject,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v364 = this;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v86, 0LL, 0LL) )
  {
    sequenceManager = this->fields.sequenceManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)sequenceManager,
                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v86 )
      goto LABEL_437;
    WellFired_USTimelineContainer__set_AffectedObject(v86, (UnityEngine_Transform_o *)seqObject, 0LL);
    createdObjects = this->fields.createdObjects;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v86, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !createdObjects )
      goto LABEL_437;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)createdObjects,
      (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v86, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_437;
    actorCamera = this->fields.actorCamera;
    v97 = seqObject;
    *(_QWORD *)(seqObject + 24) = actorCamera;
    v98 = seqObject + 24;
    sub_B0D840(seqObject + 24, actorCamera);
    effectCamera = this->fields.effectCamera;
    *(_QWORD *)(v98 + 8) = effectCamera;
    sub_B0D840(v98 + 8, effectCamera);
    cutInCamera = this->fields.cutInCamera;
    *(_QWORD *)(v98 + 16) = cutInCamera;
    sub_B0D840(v98 + 16, cutInCamera);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_437;
    fadeObject = performance->fields.fadeObject;
    *(_QWORD *)(v97 + 88) = fadeObject;
    v103 = v97 + 88;
    sub_B0D840(v103, fadeObject);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v105 = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    identity = UnityEngine_Quaternion__get_identity(0LL);
    v108 = identity.fields.x;
    v109 = identity.fields.y;
    v110 = identity.fields.z;
    w = identity.fields.w;
    identity.fields.x = v105;
    identity.fields.y = y;
    identity.fields.z = z;
    identity.fields.w = v108;
    v112 = v109;
    v113 = v110;
    v114 = w;
    v115 = UnityEngine_Object__Instantiate_object_(
             CutInPrefab,
             *(UnityEngine_Vector3_o *)&identity.fields.x,
             *(UnityEngine_Quaternion_o *)&identity.fields.w,
             (const MethodInfo_204AC10 *)Method_UnityEngine_Object_Instantiate_GameObject____68025368);
    *(_QWORD *)(v103 - 24) = v115;
    sub_B0D840(v103 - 24, v115);
    seqObject = *(_QWORD *)(v103 - 24);
    if ( !seqObject )
      goto LABEL_437;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v116);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v117);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                           (UnityEngine_Component_o *)v86,
                           1,
                           (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_437;
    v118 = *(_DWORD *)(seqObject + 24);
    v119 = seqObject;
    if ( v118 >= 1 )
    {
      v120 = 0;
      v121 = 0LL;
      v360 = seqObject;
      while ( 1 )
      {
        if ( v120 >= (unsigned int)v118 )
        {
LABEL_441:
          v352 = sub_B0D9A8(seqObject);
          sub_B0D948(v352, 0LL);
        }
        seqObject = *(_QWORD *)(v119 + 8LL * v120 + 32);
        if ( !seqObject )
          goto LABEL_437;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_437;
        v122 = *(_QWORD *)(seqObject + 24);
        v123 = seqObject;
        if ( (int)v122 >= 1 )
          break;
LABEL_95:
        v119 = v360;
        ++v120;
        v118 = *(_DWORD *)(v360 + 24);
        if ( v120 >= v118 )
          goto LABEL_96;
      }
      v124 = 0LL;
      while ( 1 )
      {
        if ( v124 >= (unsigned int)v122 )
          goto LABEL_441;
        v125 = *(_QWORD *)(v123 + 32 + 8 * v124);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v125, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v125 )
            goto LABEL_437;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v125, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14809/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v121, 0LL, 0LL) )
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
                v128 = monitor[180];
              }
              else
              {
                v128 = 0;
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
                                                   (System_String_o *)StringLiteral_16388/*"animCamLoc"*/,
                                                   v128,
                                                   0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this = v364;
              if ( !v364->fields.createdObjects )
LABEL_437:
                sub_B0D97C(seqObject);
              v121 = (UnityEngine_Object_o *)seqObject;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v364->fields.createdObjects,
                (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
            v141 = *(&WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v125 + 300LL) < (unsigned int)v141
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v125 + 200LL) + 8 * v141 - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_442:
              v208 = (UnityEngine_Component_o *)sub_B0DC70(v125);
LABEL_443:
              v179 = (UnityEngine_Component_o *)sub_B0DC70(v208);
LABEL_444:
              v319 = (UnityEngine_Object_o *)sub_B0DC70(v179);
LABEL_445:
              sub_B0D97C(v319);
            }
            *(_QWORD *)(v125 + 48) = v121;
            v142 = v125 + 48;
            sub_B0D840(v142, v121);
            v143 = this->fields.actorCamera;
            *(_QWORD *)(v142 + 8) = v143;
            sub_B0D840(v142 + 8, v143);
            *(_BYTE *)(v142 + 36) = 0;
            if ( !v121 )
              goto LABEL_437;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v121, 0LL);
            if ( !this->fields.actor )
              goto LABEL_437;
            v144 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_437;
            *(UnityEngine_Vector3_o *)&v145 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v144 )
              goto LABEL_437;
            UnityEngine_Transform__set_position(v144, *(UnityEngine_Vector3_o *)&v145, 0LL);
          }
          else
          {
            v129 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v125, 0LL);
            seqObject = System_String__op_Equality(v129, (System_String_o *)StringLiteral_14812/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v363 )
                goto LABEL_437;
              v130 = *(&WellFired_USFGOPlayCutInEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v125 + 300LL) >= (unsigned int)v130 )
              {
                if ( *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v125 + 200LL) + 8 * v130 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo )
                  v131 = (EventMissionProgressRequest_Argument_ProgressData_o *)v125;
                else
                  v131 = 0LL;
              }
              else
              {
                v131 = 0LL;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v363,
                v131,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
              goto LABEL_94;
            }
            v132 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v125, 0LL);
            if ( System_String__op_Equality(v132, (System_String_o *)StringLiteral_14813/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v133 = *(&WellFired_USFGOSetCameraEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v125 + 300LL) < (unsigned int)v133
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v125 + 200LL) + 8 * v133 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v134 = this->fields.actorCamera;
              *(_QWORD *)(v125 + 48) = v134;
              sub_B0D840(v125 + 48, v134);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_437;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_437;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v125 + 56) = parent;
              changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)parent;
              v137 = v125 + 56;
              goto LABEL_89;
            }
            v148 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v125, 0LL);
            seqObject = System_String__op_Equality(v148, (System_String_o *)StringLiteral_14811/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v149 = *(&WellFired_USFGOChangeBgEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v125 + 300LL) < (unsigned int)v149
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v125 + 200LL) + 8 * v149 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v150 = (System_String_o **)(v125 + 56);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v125 + 56),
                     (System_String_o *)StringLiteral_960/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v150, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v151 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v150 = v151;
                sub_B0D840(v125 + 56, v151);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v152 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v125 + 64) = v152;
                v153 = v125 + 64;
                sub_B0D840(v153, v152);
                changeFieldAfter = this->fields.changeFieldAfter;
                v137 = v153 + 64;
                *(_QWORD *)(v153 + 64) = changeFieldAfter;
LABEL_89:
                sub_B0D840(v137, changeFieldAfter);
              }
            }
          }
        }
LABEL_94:
        LODWORD(v122) = *(_DWORD *)(v123 + 24);
        if ( (__int64)++v124 >= (int)v122 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  v154 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_USTimelineContainer__TypeInfo,
                                                                                                   v92,
                                                                                                   v93);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v154,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v154 )
    goto LABEL_437;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v154,
    item,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  v157 = BattleSequenceManager__searchTimeline(v155, seq, (System_String_o *)StringLiteral_3495/*"Cameras/BattleCamera"*/, v156);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v154,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v157,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v365,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v154,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v370 = v365[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v370,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v370.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v159 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v159 )
    {
      if ( !current )
        sub_B0D97C(v159);
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                  (UnityEngine_Component_o *)current,
                                                                  1,
                                                                  (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v161 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        sub_B0D97C(0LL);
      v162 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
      if ( v162 >= 1 )
      {
        for ( i = 0; i < v162; ++i )
        {
          if ( i >= (unsigned int)v162 )
          {
            v351 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
            sub_B0D948(v351, 0LL);
          }
          v164 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v161 + i + 4);
          if ( !v164 )
            sub_B0D97C(0LL);
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = WellFired_USTimelineEvent__get_Events(v164, 0LL);
          v165 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
            sub_B0D97C(0LL);
          v166 = *((_QWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 3);
          if ( (int)v166 >= 1 )
          {
            v167 = 0LL;
            do
            {
              if ( v167 >= (unsigned int)v166 )
              {
                v350 = sub_B0D9A8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
                sub_B0D948(v350, 0LL);
              }
              v168 = v165[v167 + 4];
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Object__op_Equality(
                                                                                  (UnityEngine_Object_o *)v168,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
              {
                if ( !v168 )
                  sub_B0D97C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
                v169 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v168, 0LL);
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                    v169,
                                                                                    (System_String_o *)StringLiteral_14810/*"USFGOAttachToParentEvent"*/,
                                                                                    0LL);
                if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
                {
                  v170 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v168 + 300LL) < (unsigned int)v170
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v168 + 200LL) + 8 * v170 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v171 = sub_B0DC70(v168);
LABEL_435:
                    sub_B0D97C(v171);
                  }
                  v171 = System_String__op_Equality(
                           *(System_String_o **)(v168 + 72),
                           (System_String_o *)StringLiteral_2784/*"BattleCamera"*/,
                           0LL);
                  if ( (v171 & 1) != 0 )
                  {
                    v172 = (UnityEngine_Component_o *)v364->fields.actorCamera;
                    if ( !v172 )
                      sub_B0D97C(0LL);
                    transform = UnityEngine_Component__get_transform(v172, 0LL);
                    *(_QWORD *)(v168 + 56) = transform;
                    sub_B0D840(v168 + 56, transform);
                  }
                  else
                  {
                    if ( !v89 )
                      goto LABEL_435;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v89,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v168,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              LODWORD(v166) = *((_DWORD *)v165 + 6);
              ++v167;
            }
            while ( (__int64)v167 < (int)v166 );
          }
          v162 = *((_DWORD *)v161 + 6);
        }
      }
    }
  }
  *((_DWORD *)&v365[1].fields.list + v366++) = 1008;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v370,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  if ( v366 && *((_DWORD *)&v365[0].fields.current + v366 + 1) == 1008 )
    --v366;
  seqObject = (__int64)seq;
  if ( !seq )
    goto LABEL_437;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  v361 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v189 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v189;
        p_offset += 4;
        if ( v189 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_157;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_157:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v175 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v176 = 0LL;
      v177 = (System_Collections_IEnumerator_c **)&v175->_1.interfaceOffsets->offset;
      while ( *(v177 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v176;
        v177 += 2;
        if ( v176 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_139;
      }
      v178 = (__int64)&v175->vtable[*(_DWORD *)v177 + 1].method;
    }
    else
    {
LABEL_139:
      v178 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v179 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v178)(
                                        Enumerator,
                                        *(_QWORD *)(v178 + 8));
    if ( !v179 )
      sub_B0D97C(0LL);
    v180 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v179->klass->_2.bitflags2 + 1) < (unsigned int)v180
      || (UnityEngine_Transform_c *)v179->klass->_2.typeHierarchy[v180 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_444;
    }
    gameObject = UnityEngine_Component__get_gameObject(v179, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    v182 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             gameObject,
             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v183 = v182;
    if ( !v182 )
      sub_B0D97C(0LL);
    v184 = *(System_String_o **)&v182->fields.mtIsUpdate;
    if ( !v184 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v184, (System_String_o *)StringLiteral_894/*"/BattleActors/"*/, 0LL)
      && *(_QWORD *)&v183->fields.mtIsUpdate )
    {
      v185 = *(System_String_o **)&v183->fields.mtIsUpdate;
      if ( !v185 )
        goto LABEL_466;
      if ( System_String__StartsWith(v185, (System_String_o *)StringLiteral_894/*"/BattleActors/"*/, 0LL) )
      {
        v186 = *(System_String_o **)&v183->fields.mtIsUpdate;
        if ( !v186 )
          sub_B0D97C(0LL);
        v187 = System_String__Substring_43913640(v186, v186->fields.m_stringLength - 1, 1, 0LL);
        result[0] = 1;
        v361 += System_Int32__TryParse(v187, result, 0LL);
      }
    }
  }
  *((_DWORD *)&v365[1].fields.list + v366++) = 1183;
  v192 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v192 )
  {
    v193 = *(_QWORD *)v192;
    v194 = v192;
    if ( *(_WORD *)(*(_QWORD *)v192 + 298LL) )
    {
      v195 = 0LL;
      v196 = (int *)(*(_QWORD *)(v193 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v196 - 1) != System_IDisposable_TypeInfo )
      {
        ++v195;
        v196 += 4;
        if ( v195 >= *(unsigned __int16 *)(*(_QWORD *)v192 + 298LL) )
          goto LABEL_165;
      }
      v197 = v193 + 16LL * *v196 + 312;
    }
    else
    {
LABEL_165:
      v197 = sub_AA67A0(v192, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v197)(v194, *(_QWORD *)(v197 + 8));
  }
  if ( v366 && *((_DWORD *)&v365[0].fields.current + v366 + 1) == 1183 )
    --v366;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  v198 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v198 )
    sub_B0D97C(0LL);
  seqa = 0;
  while ( 1 )
  {
    v199 = v198->klass;
    if ( *(_WORD *)&v198->klass->_2.bitflags1 )
    {
      v200 = 0LL;
      v201 = &v199->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v201 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v200;
        v201 += 4;
        if ( v200 >= *(unsigned __int16 *)&v198->klass->_2.bitflags1 )
          goto LABEL_178;
      }
      v202 = v364;
      v203 = (__int64)&v199->vtable[*v201].method;
    }
    else
    {
LABEL_178:
      v202 = v364;
      v203 = sub_AA67A0(v198, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v203)(v198, *(_QWORD *)(v203 + 8)) & 1) == 0 )
      break;
    v204 = v198->klass;
    if ( *(_WORD *)&v198->klass->_2.bitflags1 )
    {
      v205 = 0LL;
      v206 = (System_Collections_IEnumerator_c **)&v204->_1.interfaceOffsets->offset;
      while ( *(v206 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v205;
        v206 += 2;
        if ( v205 >= *(unsigned __int16 *)&v198->klass->_2.bitflags1 )
          goto LABEL_185;
      }
      v207 = (__int64)&v204->vtable[*(_DWORD *)v206 + 1].method;
    }
    else
    {
LABEL_185:
      v207 = sub_AA67A0(v198, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v208 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v207)(
                                        v198,
                                        *(_QWORD *)(v207 + 8));
    if ( !v208 )
      sub_B0D97C(0LL);
    v209 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v208->klass->_2.bitflags2 + 1) < (unsigned int)v209
      || (UnityEngine_Transform_c *)v208->klass->_2.typeHierarchy[v209 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_443;
    }
    v210 = UnityEngine_Component__get_gameObject(v208, 0LL);
    if ( !v210 )
      goto LABEL_447;
    v211 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v210,
             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v212 = (WellFired_USTimelineContainer_o *)v211;
    if ( !v211 )
      sub_B0D97C(0LL);
    v213 = *(System_String_o **)&v211->fields.mtIsUpdate;
    if ( !v213 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v213, (System_String_o *)StringLiteral_891/*"/AllEffects/"*/, 0LL) )
    {
      affectedObjectPath = v212->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_B0D97C(0LL);
      v215 = System_String__Substring(affectedObjectPath, 12, 0LL);
      v216 = 1;
    }
    else
    {
      v216 = 0;
      v215 = 0LL;
    }
    v217 = v212->fields.affectedObjectPath;
    if ( !v217 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v217, (System_String_o *)StringLiteral_909/*"/CutIns/"*/, 0LL) )
    {
      v218 = v212->fields.affectedObjectPath;
      if ( !v218 )
        sub_B0D97C(0LL);
      v215 = System_String__Substring(v218, 8, 0LL);
      v219 = 1;
    }
    else
    {
      v219 = 0;
    }
    v220 = v212->fields.affectedObjectPath;
    if ( !v220 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v220, (System_String_o *)StringLiteral_906/*"/BattleCamera"*/, 0LL) )
      goto LABEL_206;
    v221 = v212->fields.affectedObjectPath;
    if ( !v221 )
      sub_B0D97C(0LL);
    if ( System_String__StartsWith(v221, (System_String_o *)StringLiteral_908/*"/Cameras/BattleCamera"*/, 0LL) )
    {
LABEL_206:
      v222 = (UnityEngine_Component_o *)v364->fields.actorCamera;
      if ( !v222 )
        sub_B0D97C(0LL);
      v223 = UnityEngine_Component__get_transform(v222, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v212, v223, 0LL);
    }
    else
    {
      v224 = v212->fields.affectedObjectPath;
      if ( !v224 )
        sub_B0D97C(0LL);
      if ( System_String__StartsWith(v224, (System_String_o *)StringLiteral_886/*"/Actor/chr"*/, 0LL) )
      {
        actor = v364->fields.actor;
        if ( !actor )
          sub_B0D97C(0LL);
        v226 = UnityEngine_GameObject__get_transform(actor, 0LL);
        v227 = v212->fields.affectedObjectPath;
        if ( !v227 )
          sub_B0D97C(0LL);
        v228 = System_String__Replace_43857140(
                 v227,
                 (System_String_o *)StringLiteral_886/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_17477/*"chr(Clone)"*/,
                 0LL);
        if ( !v226 )
          sub_B0D97C(v228);
        v229 = UnityEngine_Transform__Find(v226, v228, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(v212, v229, 0LL);
        AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v212, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
        {
          v231 = v212->fields.affectedObjectPath;
          if ( !v231 )
            sub_B0D97C(0LL);
          v232 = System_String__StartsWith(v231, (System_String_o *)StringLiteral_888/*"/Actor/chr/body_level_"*/, 0LL);
          v233 = &StringLiteral_16931/*"body_level_"*/;
          if ( v232 )
            goto LABEL_221;
          v234 = v212->fields.affectedObjectPath;
          if ( !v234 )
            sub_B0D97C(0LL);
          v235 = System_String__StartsWith(v234, (System_String_o *)StringLiteral_889/*"/Actor/chr/weapon_level_"*/, 0LL);
          v233 = &StringLiteral_23338/*"weapon_level_"*/;
          if ( v235 )
          {
LABEL_221:
            v236 = (System_String_o *)*v233;
            if ( *v233 )
            {
              v237 = v364->fields.actor;
              if ( !v237 )
                sub_B0D97C(0LL);
              v238 = (System_String_o *)StringLiteral_1/*""*/;
              v239 = UnityEngine_GameObject__get_transform(v237, 0LL);
              if ( !v239 )
                sub_B0D97C(0LL);
              v240 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                               v239,
                                               (System_String_o *)StringLiteral_17477/*"chr(Clone)"*/,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v241 = UnityEngine_Object__op_Inequality(v240, 0LL, 0LL);
              if ( v241 )
              {
                if ( !v240 )
                  sub_B0D97C(v241);
                v242 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v240, 0LL);
                if ( !v242 )
                  sub_B0D97C(0LL);
                while ( 1 )
                {
                  v243 = v242->klass;
                  if ( *(_WORD *)&v242->klass->_2.bitflags1 )
                  {
                    v244 = 0LL;
                    v245 = &v243->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v245 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v244;
                      v245 += 4;
                      if ( v244 >= *(unsigned __int16 *)&v242->klass->_2.bitflags1 )
                        goto LABEL_234;
                    }
                    v246 = (__int64)&v243->vtable[*v245].method;
                  }
                  else
                  {
LABEL_234:
                    v246 = sub_AA67A0(v242, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v246)(
                          v242,
                          *(_QWORD *)(v246 + 8)) & 1) == 0 )
                    break;
                  v247 = v242->klass;
                  if ( *(_WORD *)&v242->klass->_2.bitflags1 )
                  {
                    v248 = 0LL;
                    v249 = (System_Collections_IEnumerator_c **)&v247->_1.interfaceOffsets->offset;
                    while ( *(v249 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v248;
                      v249 += 2;
                      if ( v248 >= *(unsigned __int16 *)&v242->klass->_2.bitflags1 )
                        goto LABEL_241;
                    }
                    v250 = (__int64)&v247->vtable[*(_DWORD *)v249 + 1].method;
                  }
                  else
                  {
LABEL_241:
                    v250 = sub_AA67A0(v242, System_Collections_IEnumerator_TypeInfo, 1LL);
                  }
                  v251 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v250)(
                                                      v242,
                                                      *(_QWORD *)(v250 + 8));
                  v252 = (UnityEngine_Object_o *)v251;
                  if ( !v251 )
                    sub_B0D97C(0LL);
                  v253 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v251->klass->_2.bitflags2 + 1) < (unsigned int)v253
                    || (UnityEngine_Transform_c *)v251->klass->_2.typeHierarchy[v253 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    v185 = (System_String_o *)sub_B0DC70(v251);
LABEL_466:
                    sub_B0D97C(v185);
                  }
                  v254 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v251, 0LL);
                  if ( !v254 )
                    sub_B0D97C(0LL);
                  v255 = UnityEngine_Object__get_name(v254, 0LL);
                  if ( !v255 )
                    sub_B0D97C(0LL);
                  if ( System_String__StartsWith(v255, v236, 0LL) )
                  {
                    v256 = UnityEngine_Object__get_name(v252, 0LL);
                    *((_DWORD *)&v365[1].fields.list + v366) = 1651;
                    v257 = v366;
                    v238 = v256;
                    goto LABEL_259;
                  }
                }
                *((_DWORD *)&v365[1].fields.list + v366) = 1651;
                v257 = v366;
LABEL_259:
                v366 = v257 + 1;
                v262 = sub_B0D964(v242, System_IDisposable_TypeInfo);
                v263 = v262;
                if ( v262 )
                {
                  v264 = *(_QWORD *)v262;
                  if ( *(_WORD *)(*(_QWORD *)v262 + 298LL) )
                  {
                    v265 = 0LL;
                    v266 = (int *)(*(_QWORD *)(v264 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v266 - 1) != System_IDisposable_TypeInfo )
                    {
                      ++v265;
                      v266 += 4;
                      if ( v265 >= *(unsigned __int16 *)(*(_QWORD *)v262 + 298LL) )
                        goto LABEL_264;
                    }
                    v267 = v264 + 16LL * *v266 + 312;
                  }
                  else
                  {
LABEL_264:
                    v267 = sub_AA67A0(v262, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v267)(v263, *(_QWORD *)(v267 + 8));
                }
                if ( v366 && *((_DWORD *)&v365[0].fields.current + v366 + 1) == 1651 )
                  --v366;
              }
              v268 = v212->fields.affectedObjectPath;
              v269 = System_String__Concat_43849904((System_String_o *)StringLiteral_887/*"/Actor/chr/"*/, v236, 0LL);
              if ( !v269 )
                sub_B0D97C(0LL);
              if ( !v268 )
                sub_B0D97C(v269);
              v270 = System_String__Substring(v268, v269->fields.m_stringLength, 0LL);
              v271 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
              if ( !v271 )
                sub_B0D97C(0LL);
              if ( !v271->max_length )
              {
                v353 = sub_B0D9A8(v271);
                sub_B0D948(v353, 0LL);
              }
              v271->m_Items[2] = 47;
              if ( !v270 )
                sub_B0D97C(v271);
              v272 = System_String__Split(v270, v271, 0LL);
              if ( !v272 )
                sub_B0D97C(0LL);
              if ( !v272->max_length )
              {
                v354 = sub_B0D9A8(v272);
                sub_B0D948(v354, 0LL);
              }
              v273 = System_String__Concat_43849904(v236, v272->m_Items[0], 0LL);
              v274 = v364->fields.actor;
              if ( !v274 )
                sub_B0D97C(0LL);
              v275 = UnityEngine_GameObject__get_transform(v274, 0LL);
              v276 = v212->fields.affectedObjectPath;
              if ( !v276 )
                sub_B0D97C(0LL);
              v277 = System_String__Replace_43857140(
                       v276,
                       (System_String_o *)StringLiteral_886/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_17477/*"chr(Clone)"*/,
                       0LL);
              if ( !v277 )
                sub_B0D97C(0LL);
              v278 = System_String__Replace_43857140(v277, v273, v238, 0LL);
              if ( !v275 )
                sub_B0D97C(v278);
              v279 = UnityEngine_Transform__Find(v275, v278, 0LL);
              WellFired_USTimelineContainer__set_AffectedObject(v212, v279, 0LL);
            }
          }
        }
      }
      else
      {
        v258 = v212->fields.affectedObjectPath;
        if ( !v258 )
          sub_B0D97C(0LL);
        v259 = System_String__StartsWith(v258, (System_String_o *)StringLiteral_894/*"/BattleActors/"*/, 0LL);
        if ( v259 )
          v215 = v212->fields.affectedObjectPath;
        if ( v215 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v259, v215, v260) )
            goto LABEL_336;
          if ( v216 )
          {
            v261 = System_String__IndexOf(v215, 0x2Fu, 0LL);
            if ( (v261 & 0x80000000) == 0 )
            {
              itema = System_String__Substring(v215, v261 + 1, 0LL);
              v215 = System_String__Substring_43913640(v215, 0, v261, 0LL);
              goto LABEL_285;
            }
            if ( (seqa & 1) != 0 )
            {
              itema = 0LL;
LABEL_285:
              v281 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v364->fields.createdObjects;
              if ( !v281 )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                v365,
                v281,
                (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v369 = v365[0];
              while ( 1 )
              {
                v282 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v369,
                         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v282 )
                  break;
                v280 = (EventMissionProgressRequest_Argument_ProgressData_o *)v369.fields.current;
                if ( !v369.fields.current )
                  sub_B0D97C(v282);
                v283 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v369.fields.current, 0LL);
                if ( !v283 )
                  sub_B0D97C(0LL);
                v284 = System_String__Replace_43857140(
                         v283,
                         (System_String_o *)StringLiteral_614/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v215, v284, 0LL) )
                  goto LABEL_293;
              }
              v280 = 0LL;
LABEL_293:
              *((_DWORD *)&v365[1].fields.list + v366++) = 1961;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v369,
                (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if ( v366 )
              {
                if ( *((_DWORD *)&v365[0].fields.current + v366 + 1) == 1961 )
                  --v366;
                seqa = 1;
              }
              else
              {
                seqa = 1;
              }
              goto LABEL_299;
            }
            itema = 0LL;
            v280 = 0LL;
            seqa = 0;
          }
          else
          {
            itema = 0LL;
            v280 = 0LL;
          }
LABEL_299:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v280, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v285 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( v285 )
            {
              if ( !x )
                sub_B0D97C(v285);
              v288 = x[18].monitor;
              if ( !v288 )
                sub_B0D97C(v285);
              v289 = v288[180];
            }
            else
            {
              v289 = 0;
            }
            v280 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSequenceManager__searchPrefab(
                                                                            v364,
                                                                            v364->fields.treasureDeviceId,
                                                                            v215,
                                                                            v286,
                                                                            v289,
                                                                            v287);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v280, 0LL, 0LL) )
            {
              v290 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v364->fields.createdObjects;
              if ( !v290 )
                sub_B0D97C(0LL);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v290,
                v280,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
              if ( !v280 )
                sub_B0D97C(v291);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v280, 0, 0LL);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v280, 0LL, 0LL) )
            goto LABEL_336;
          IsNullOrEmpty = System_String__IsNullOrEmpty(itema, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v280 )
              sub_B0D97C(IsNullOrEmpty);
            v305 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v280, 0LL);
            if ( !v305 )
              sub_B0D97C(0LL);
            v306 = UnityEngine_Transform__Find(v305, itema, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v212, v306, 0LL);
            goto LABEL_336;
          }
          if ( !v280 )
            sub_B0D97C(IsNullOrEmpty);
          v293 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v280, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v212, v293, 0LL);
          if ( (v219 & 1) != 0 )
          {
            v294 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v280, 0LL);
            if ( !v294 )
              sub_B0D97C(0LL);
            localPosition = UnityEngine_Transform__get_localPosition(v294, 0LL);
            v295 = localPosition.fields.x;
            v296 = localPosition.fields.y;
            v297 = localPosition.fields.z;
            v298 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v280, 0LL);
            CutInRoot = v364->fields.CutInRoot;
            if ( !CutInRoot )
              sub_B0D97C(0LL);
            v300 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v298 )
              sub_B0D97C(v300);
            UnityEngine_Transform__set_parent(v298, v300, 0LL);
            v301 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v280, 0LL);
            if ( !v301 )
              sub_B0D97C(0LL);
            v374.fields.x = v295;
            v374.fields.y = v296;
            v374.fields.z = v297;
            UnityEngine_Transform__set_localPosition(v301, v374, 0LL);
            BattleSequenceManager__updateCutInEvents(
              v302,
              (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v363,
              v215,
              (UnityEngine_GameObject_o *)v280,
              v303);
            v304 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2786/*"BattleCutIn"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v280, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2782/*"BattleBG"*/, 0LL) )
              goto LABEL_336;
            v304 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2780/*"Battle2D"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v280, v304, 0LL);
LABEL_336:
          v307 = v212->fields.affectedObjectPath;
          if ( !v307 )
            sub_B0D97C(0LL);
          if ( System_String__StartsWith(v307, (System_String_o *)StringLiteral_894/*"/BattleActors/"*/, 0LL) )
          {
            v308 = v212->fields.affectedObjectPath;
            if ( !v308 )
              sub_B0D97C(0LL);
            v309 = System_String__Substring_43913640(v308, v308->fields.m_stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v309, &targetPosIndex, 0LL);
            v311 = --targetPosIndex;
            if ( v361 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v364, v212, v311, v310);
              BattleSequenceManager__SyncAttachedTargetPair(v364, v212, targetPosIndex, v312);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v364, v212, v311, v310);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                         (UnityEngine_Component_o *)v212,
                         1,
                         (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v314 = EventCount;
          if ( !EventCount )
            sub_B0D97C(0LL);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
              {
                v355 = sub_B0D9A8(EventCount);
                sub_B0D948(v355, 0LL);
              }
              v317 = (WellFired_USTimelineEvent_o *)v314->m_Items[j];
              if ( !v317 )
                sub_B0D97C(EventCount);
              for ( k = 0; ; ++k )
              {
                EventCount = (WarBoardControlPlayTalkUiComponent_array *)WellFired_USTimelineEvent__get_EventCount(
                                                                           v317,
                                                                           0LL);
                if ( k >= (int)EventCount )
                  break;
                v319 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v317, k, 0LL);
                v320 = (EventMissionProgressRequest_Argument_ProgressData_o *)v319;
                if ( !v319 )
                  goto LABEL_445;
                v321 = UnityEngine_Object__get_name(v319, 0LL);
                if ( System_String__op_Equality(v321, (System_String_o *)StringLiteral_14810/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v322 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v320->klass->_2.bitflags2 + 1) < (unsigned int)v322
                    || (WellFired_USFGOAttachToParentEvent_c *)v320->klass->_2.typeHierarchy[v322 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v210 = (UnityEngine_GameObject_o *)sub_B0DC70(v320);
LABEL_447:
                    sub_B0D97C(v210);
                  }
                  v323 = System_String__op_Equality(
                           *(System_String_o **)&v320[1].fields.addCount,
                           (System_String_o *)StringLiteral_2784/*"BattleCamera"*/,
                           0LL);
                  if ( v323 )
                  {
                    v324 = (UnityEngine_Component_o *)v364->fields.actorCamera;
                    if ( !v324 )
                      sub_B0D97C(0LL);
                    v325 = UnityEngine_Component__get_transform(v324, 0LL);
                    *(_QWORD *)&v320[1].fields.missionTargetId = v325;
                    sub_B0D840(&v320[1].fields, v325);
                  }
                  else
                  {
                    if ( !v89 )
                      sub_B0D97C(v323);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v89,
                      v320,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              max_length = v314->max_length;
            }
          }
        }
      }
    }
  }
  *((_DWORD *)&v365[1].fields.list + v366++) = 2515;
  seqObject = sub_B0D964(v198, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v327 = *(_QWORD *)seqObject;
    v328 = seqObject;
    if ( *(_WORD *)(*(_QWORD *)seqObject + 298LL) )
    {
      v329 = 0LL;
      v330 = (int *)(*(_QWORD *)(v327 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v330 - 1) != System_IDisposable_TypeInfo )
      {
        ++v329;
        v330 += 4;
        if ( v329 >= *(unsigned __int16 *)(*(_QWORD *)seqObject + 298LL) )
          goto LABEL_378;
      }
      v331 = v327 + 16LL * *v330 + 312;
    }
    else
    {
LABEL_378:
      v331 = sub_AA67A0(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v331)(v328, *(_QWORD *)(v331 + 8));
  }
  if ( v366 && *((_DWORD *)&v365[0].fields.current + v366 + 1) == 2515 )
    --v366;
  if ( !v89 )
    goto LABEL_437;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v365,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v89,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v365[0];
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &m,
          (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields.current,
          v202->fields.performance,
          v202->fields.actor,
          v202->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields.current )
      sub_B0D97C(0LL);
  }
  *((_DWORD *)&v365[1].fields.list + v366++) = 2581;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &m,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( v366 && *((_DWORD *)&v365[0].fields.current + v366 + 1) == 2581 )
    --v366;
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
    v332 = x[18].monitor;
    if ( !v332 )
      goto LABEL_437;
    if ( !v332[77] && !BattleActorControl__isNoVoice((BattleActorControl_o *)x, 0LL) )
    {
      v333 = (UnityEngine_Object_o *)v202->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      seqObject = UnityEngine_Object__op_Inequality(v333, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v334 = v202->fields.performance;
        if ( !v334 )
          goto LABEL_437;
        data = (UnityEngine_Object_o *)v334->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)seqObject,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoiceMaster___);
            v202->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v202->fields.chrId;
            v338 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(v202, v338, chrId, FileName, v340) )
              v202->fields.isAlreadyRegistDefaultVoice = 1;
            v341 = v202->fields.chrId;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v342 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v202, v338, v341, v342, v343);
            v344 = x[18].monitor;
            if ( v344 )
            {
              v345 = v344[168];
              v346 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v346 = BalanceConfig_TypeInfo;
              }
              if ( v345 == v346->static_fields->TreasureDeviceIdMashu3 )
              {
                v347 = v202->fields.chrId;
                if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v348 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v202, v338, v347, v348, v349);
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
  System_GC__Collect_43098652(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x24
  int size; // w23
  unsigned int v10; // w22
  BattleSequenceManager_BattleTarget_o *v11; // x8
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v12; // x20

  v6 = this;
  if ( (byte_4211D93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    this = (BattleSequenceManager_o *)sub_B0D8A4(
                                        &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__,
                                        v7);
    byte_4211D93 = 1;
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
        v10 = 0;
        while ( 1 )
        {
          if ( battleTargetList->fields._size <= v10 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v11 = battleTargetList->fields._items->m_Items[v10];
          if ( !v11 )
            goto LABEL_25;
          if ( v11->fields._positionIndex_k__BackingField == targetIndex )
            break;
          if ( (int)++v10 >= size )
            goto LABEL_14;
          battleTargetList = v6->fields.battleTargetList;
          if ( !battleTargetList )
            goto LABEL_25;
        }
        v12 = v6->fields.battleTargetList;
        if ( v12 )
        {
          if ( v12->fields._size <= v10 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          this = (BattleSequenceManager_o *)v12->fields._items->m_Items[v10];
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
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  BattleSequenceManager_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x21
  int32_t size; // w8
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  v6 = this;
  if ( (byte_4211D97 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    this = (BattleSequenceManager_o *)sub_B0D8A4(&StringLiteral_14524/*"Tmp_Target"*/, v9);
    byte_4211D97 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      sub_B0D97C(this);
    }
    v12 = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, tlcont, *(_QWORD *)&targetIndex);
    UnityEngine_GameObject___ctor(v12, (System_String_o *)StringLiteral_14524/*"Tmp_Target"*/, 0LL);
    if ( !v12 )
      goto LABEL_17;
    this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _BOOL8 v11; // x0
  Il2CppObject *current; // x21
  char v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211D7D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_B0D8A4(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_4211D7D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !evs )
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)evs,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    if ( !v11 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B0D97C(v11);
    if ( System_String__op_Equality((System_String_o *)v16.fields.current[3].monitor, cutInName, 0LL) )
    {
      current[3].klass = (Il2CppClass *)obj;
      sub_B0D840(&current[3], obj);
      v13 = 1;
      v14 = 5;
      goto LABEL_10;
    }
  }
  v13 = 0;
  v14 = 3;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return (v14 == 5) & v13;
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
      sub_B0D97C(transform);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.originalScale, 0LL);
  }
  *p_targetActor = 0LL;
  sub_B0D840(p_targetActor, 0LL);
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
    sub_B0D97C(targetActor);
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
  sub_B0D840(&this->fields.targetActor, bac);
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
  BattleSequenceManager__WaitEndSequence_d__105_o *v3; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
  Il2CppObject *wait_5__2; // x1
  bool result; // w0

  v3 = this;
  if ( (byte_4211EF6 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B0D8A4(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_4211EF6 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_12;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
    v3->fields._wait_5__2 = v6;
    sub_B0D840(&v3->fields._wait_5__2, v6);
    if ( !_4__this )
LABEL_12:
      sub_B0D97C(this);
  }
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v3->fields._wait_5__2;
    v3->fields.__2__current = wait_5__2;
    sub_B0D840(&v3->fields.__2__current, wait_5__2);
    result = 1;
    v3->fields.__1__state = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleSequenceManager__WaitEndSequence_d__105_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  Il2CppObject *v3; // x19
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211EF0 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSequenceManager___c_TypeInfo, v1);
    byte_4211EF0 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleSequenceManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSequenceManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return System_Single__CompareTo_43836096(x2->fields.duration, v4, (const MethodInfo *)&duration);
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
    sub_B0D97C(this);
  return System_Single__CompareTo_43836096(x2->fields.duration, v4, (const MethodInfo *)&duration);
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
    sub_B0D97C(this);
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
  BattleSequenceManager___c__DisplayClass114_0_o *v4; // x20

  v4 = this;
  if ( (byte_4211EF1 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B0D8A4(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_4211EF1 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass114_0_o *)v4->fields.targetList) == 0LL )
    sub_B0D97C(this);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  BattleSequenceManager___c__DisplayClass73_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager_o *_4__this; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v14; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24

  v4 = this;
  if ( (byte_4211EF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__, v6);
    sub_B0D8A4(&StringLiteral_13068/*"StandardCutIn"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B0D8A4(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_4211EF2 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13068/*"StandardCutIn"*/,
                                                                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_B0D840(&_4__this->fields.CutInPrefab, this),
        (this = (BattleSequenceManager___c__DisplayClass73_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(this);
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
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_B0D974(
                                                                    ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v11,
                                                                    v12);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B0D840(&v4->fields.__9__1, _9__1);
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


void __fastcall BattleSequenceManager___c__DisplayClass73_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass73_0_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__o *paramsFromMstTDSeqWeight,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  ServantAssetLoadManager_o *_4__this; // x0
  Il2CppObject *v16; // x23
  struct System_Collections_Generic_Dictionary_int__string__o *klass; // x1
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleActorControl_o *v20; // x8
  struct BattleServantData_o *v21; // x8
  struct BattleSequenceManager_o *v22; // x8
  SoundManager_o *Instance; // x19
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x22
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4211EF3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, obj);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_B0D8A4(&Method_System_Tuple_int__int__get_Item1__, v9);
    sub_B0D8A4(&Method_System_Tuple_int__int__get_Item2__, v10);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, v11);
    sub_B0D8A4(&BattleSequenceManager___c__DisplayClass73_1_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_9622/*"NoblePhantasm_"*/, v13);
    byte_4211EF3 = 1;
  }
  overwriteSvtVoiceId = 0;
  v14 = (Il2CppObject *)sub_B0D974(BattleSequenceManager___c__DisplayClass73_1_TypeInfo, obj, paramsFromMstTDSeqWeight);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v14[1].monitor = this;
  sub_B0D840(&v14[1].monitor, this);
  v14[1].klass = (Il2CppClass *)obj;
  v16 = v14 + 1;
  sub_B0D840(&v14[1], obj);
  _4__this = (ServantAssetLoadManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  klass = (struct System_Collections_Generic_Dictionary_int__string__o *)v16->klass;
  _4__this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v16->klass;
  sub_B0D840(&_4__this->fields.LastActorVoice, klass);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_16;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_16;
  battleSvtData = battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_16;
  battleSvtData->fields.seqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item1 & ~(paramsFromMstTDSeqWeight->fields.m_Item1 >> 31);
  v20 = this->fields.battleActor;
  if ( !v20 )
    goto LABEL_16;
  v21 = v20->fields.battleSvtData;
  if ( !v21 )
    goto LABEL_16;
  v21->fields.groupSeqIdFromMstTDSeqWeight = paramsFromMstTDSeqWeight->fields.m_Item2 & ~(paramsFromMstTDSeqWeight->fields.m_Item2 >> 31);
  _4__this = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_16;
    overwriteSvtVoiceId = v22->fields.overwriteSvtVoiceId;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v24 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v25 = System_String__Concat_43849904((System_String_o *)StringLiteral_9622/*"NoblePhantasm_"*/, v24, 0LL);
  v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(v28, v14, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, 0LL);
  if ( !Instance )
LABEL_16:
    sub_B0D97C(_4__this);
  SoundManager__LoadAudioAssetStorage(Instance, v25, v28, 1, 0LL);
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
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *monitor; // x8
  __int64 v7; // x8
  System_String_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  int CS___8__locals1; // w8
  BattleSequenceManager___c__DisplayClass73_1_o *v12; // x21
  unsigned int v13; // w23
  int v14; // w24
  UnityEngine_Behaviour_o *v15; // x22
  void *v16; // x8
  BattleSequenceManager_o *v17; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4211EF4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_B0D8A4(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4211EF4 = 1;
  }
  monitor = v2[1].monitor;
  if ( !monitor )
    goto LABEL_20;
  v7 = monitor[2];
  if ( !v7 )
    goto LABEL_20;
  this = *(BattleSequenceManager___c__DisplayClass73_1_o **)(v7 + 80);
  if ( !this )
    goto LABEL_20;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  CS___8__locals1 = (int)this->fields.CS___8__locals1;
  v12 = this;
  if ( CS___8__locals1 >= 1 )
  {
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      if ( v13 >= CS___8__locals1 )
      {
        v19 = sub_B0D9A8(this);
        sub_B0D948(v19, 0LL);
      }
      v15 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v12->fields.__9__4 + (int)v13);
      if ( !v15 )
        break;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v15->klass[1]._2.typeHierarchy)(
                                                                v15,
                                                                v15->klass[1]._2.unity_user_data);
      if ( (v14 & (unsigned int)this & 1) != 0 )
      {
        v8 = (System_String_o *)v15[2].monitor;
        v14 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v15, 0, 0LL);
      }
      CS___8__locals1 = (int)v12->fields.CS___8__locals1;
      if ( (int)++v13 >= CS___8__locals1 )
        goto LABEL_15;
    }
LABEL_20:
    sub_B0D97C(this);
  }
LABEL_15:
  v16 = v2[1].monitor;
  if ( !v16 )
    goto LABEL_20;
  v17 = (BattleSequenceManager_o *)*((_QWORD *)v16 + 2);
  v18 = (System_Action_o *)v2[2].monitor;
  if ( !v18 )
  {
    v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v18, v2, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, 0LL);
    v2[2].monitor = v18;
    sub_B0D840(&v2[2].monitor, v18);
  }
  if ( !v17 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v17, v8, v18, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass73_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v11; // x8
  struct BattleSequenceManager_o *v12; // x8
  BattleSequenceManager___c__DisplayClass73_1_o *v13; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v22; // x8
  struct BattleSequenceManager_o *v23; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v25; // x22
  struct BattleSequenceManager___c__DisplayClass73_0_o *v26; // x8
  struct BattleSequenceManager_o *v27; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v29; // x8
  struct BattleSequenceManager_o *v30; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v31; // x8
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int klass; // w21
  struct BattleSequenceManager___c__DisplayClass73_0_o *v35; // x8
  struct BattleSequenceManager_o *v36; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v37; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v40; // x1
  struct BattleSequenceManager___c__DisplayClass73_0_o *v41; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v42; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v43; // x8
  struct BattleSequenceManager_o *v44; // x8
  struct BattleSequenceManager___c__DisplayClass73_0_o *v45; // x8
  struct BattleSequenceManager_o *v46; // x8
  UnityEngine_Object_o *v47; // x20
  struct BattleSequenceManager___c__DisplayClass73_0_o *v48; // x8
  struct BattleSequenceManager_o *v49; // x8
  __int64 v50; // x1
  __int64 v51; // x2
  struct BattleSequenceManager___c__DisplayClass73_0_o *v52; // x8
  struct BattleSequenceManager_o *v53; // x8
  UIStandFigureM_o *v54; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  struct BattleSequenceManager___c__DisplayClass73_0_o *v59; // x8

  v2 = this;
  if ( (byte_4211EF5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B0D8A4(
                                                              &Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                                              v8);
    byte_4211EF5 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
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
                                                            (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_80;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_80;
  v13 = this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v12->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_80;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_80;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v15->fields.seqObject;
  if ( !this )
    goto LABEL_80;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v13,
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
      v37 = v2->fields.CS___8__locals1;
      if ( !v37 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)v37->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v37->fields.onComplete;
      obj = v2->fields.obj;
      v40 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_Dropdown_DropdownItem;
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_77;
      v41 = v2->fields.CS___8__locals1;
      if ( !v41 )
        goto LABEL_80;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)v41->fields.__4__this;
      if ( !this )
        goto LABEL_80;
      onComplete = v41->fields.onComplete;
      obj = v2->fields.obj;
      v40 = (WellFired_USFGOPlayCutInBase_o *)v16;
    }
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v40,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    goto LABEL_77;
  }
  v18 = v2->fields.CS___8__locals1;
  if ( !v18 )
    goto LABEL_80;
  if ( !v13 )
    goto LABEL_80;
  v19 = v18->fields.__4__this;
  if ( !v19 )
    goto LABEL_80;
  v19->fields.faceType = (int32_t)v13[1].monitor;
  v20 = v2->fields.CS___8__locals1;
  if ( !v20 )
    goto LABEL_80;
  v21 = v20->fields.__4__this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  v22 = v2->fields.CS___8__locals1;
  if ( !v22 )
    goto LABEL_80;
  v23 = v22->fields.__4__this;
  if ( !v23 )
    goto LABEL_80;
  performance = v23->fields.performance;
  if ( !performance )
    goto LABEL_80;
  v25 = (StandFigureManager_o *)this;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)performance->fields.root_field;
  if ( !this )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
  if ( !v25 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)StandFigureManager__CreateMeshLocal(
                                                            v25,
                                                            (UnityEngine_GameObject_o *)this,
                                                            0LL);
  if ( !v21 )
    goto LABEL_80;
  v21->fields.standFigure = (struct UIStandFigureM_o *)this;
  sub_B0D840(&v21->fields.standFigure, this);
  v26 = v2->fields.CS___8__locals1;
  if ( !v26 )
    goto LABEL_80;
  v27 = v26->fields.__4__this;
  if ( !v27 )
    goto LABEL_80;
  standFigure = (UnityEngine_Object_o *)v27->fields.standFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v29 = v2->fields.CS___8__locals1;
    if ( v29 )
    {
      v30 = v29->fields.__4__this;
      if ( v30 )
      {
        v30->fields.loadStandFigureId = (int32_t)v13[1].klass;
        v31 = v2->fields.CS___8__locals1;
        if ( v31 )
        {
          battleActor = v31->fields.battleActor;
          if ( battleActor )
          {
            battleSvtData = battleActor->fields.battleSvtData;
            if ( battleSvtData )
            {
              this = (BattleSequenceManager___c__DisplayClass73_1_o *)battleSvtData->fields.svtdata;
              if ( this )
              {
                klass = (int)v13[1].klass;
                this = (BattleSequenceManager___c__DisplayClass73_1_o *)ServantEntity__GetTrueSvtId(
                                                                          (ServantEntity_o *)this,
                                                                          0LL);
                if ( klass == (_DWORD)this
                  || (this = (BattleSequenceManager___c__DisplayClass73_1_o *)HIDWORD(v13[1].klass), (_DWORD)this == -1) )
                {
                  v42 = v2->fields.CS___8__locals1;
                  if ( !v42 )
                    goto LABEL_80;
                  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v42->fields.battleActor;
                  if ( !this )
                    goto LABEL_80;
                  v36 = v42->fields.__4__this;
                  this = (BattleSequenceManager___c__DisplayClass73_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                            (BattleActorControl_o *)this,
                                                                            0LL);
                  if ( !v36 )
                    goto LABEL_80;
                }
                else
                {
                  v35 = v2->fields.CS___8__locals1;
                  if ( !v35 )
                    goto LABEL_80;
                  v36 = v35->fields.__4__this;
                  if ( !v36 )
                    goto LABEL_80;
                }
                v36->fields.loadStandFigureLimitCount = (int)this;
                v43 = v2->fields.CS___8__locals1;
                if ( v43 )
                {
                  v44 = v43->fields.__4__this;
                  if ( v44 )
                  {
                    this = (BattleSequenceManager___c__DisplayClass73_1_o *)v44->fields.standFigure;
                    if ( this )
                    {
                      this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)this,
                                                                                0LL);
                      v45 = v2->fields.CS___8__locals1;
                      if ( v45 )
                      {
                        v46 = v45->fields.__4__this;
                        if ( v46 )
                        {
                          v47 = (UnityEngine_Object_o *)this;
                          this = (BattleSequenceManager___c__DisplayClass73_1_o *)StandFigureManager__CreateStandFigureMName(
                                                                                    v46->fields.loadStandFigureId,
                                                                                    v46->fields.loadStandFigureLimitCount,
                                                                                    0LL);
                          if ( v47 )
                          {
                            UnityEngine_Object__set_name(v47, (System_String_o *)this, 0LL);
                            v48 = v2->fields.CS___8__locals1;
                            if ( v48 )
                            {
                              v49 = v48->fields.__4__this;
                              if ( v49 )
                              {
                                this = (BattleSequenceManager___c__DisplayClass73_1_o *)v49->fields.standFigure;
                                if ( this )
                                {
                                  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
                                  v52 = v2->fields.CS___8__locals1;
                                  if ( v52 )
                                  {
                                    v53 = v52->fields.__4__this;
                                    if ( v53 )
                                    {
                                      v54 = v53->fields.standFigure;
                                      loadStandFigureId = v53->fields.loadStandFigureId;
                                      loadStandFigureLimitCount = v53->fields.loadStandFigureLimitCount;
                                      faceType = v53->fields.faceType;
                                      _9__4 = v2->fields.__9__4;
                                      if ( !_9__4 )
                                      {
                                        _9__4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v50, v51);
                                        System_Action___ctor(
                                          _9__4,
                                          (Il2CppObject *)v2,
                                          Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                          0LL);
                                        v2->fields.__9__4 = _9__4;
                                        sub_B0D840(&v2->fields.__9__4, _9__4);
                                      }
                                      if ( v54 )
                                      {
                                        this = (BattleSequenceManager___c__DisplayClass73_1_o *)UIStandFigureM__SetCharacter_40533468(
                                                                                                  v54,
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
    sub_B0D97C(this);
  }
LABEL_77:
  v59 = v2->fields.CS___8__locals1;
  if ( !v59 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v59->fields.__4__this;
  if ( !this )
    goto LABEL_80;
  BattleSequenceManager__LoadEndStandFigure(
    (BattleSequenceManager_o *)this,
    v2->fields.obj,
    v59->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
  sub_B0D840(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  BattleSequenceManager_onGameObjectLoadComplete_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  UnityEngine_GameObject_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(UnityEngine_GameObject_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, UnityEngine_GameObject_o *, _QWORD); // x0
  BattleSequenceManager_onGameObjectLoadComplete_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(UnityEngine_GameObject_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  UnityEngine_GameObject_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  BattleSequenceManager_onGameObjectLoadComplete_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BattleSequenceManager_onGameObjectLoadComplete_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(UnityEngine_GameObject_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, obj, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = obj->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(obj, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(obj, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(obj, class_0, v10);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v15)(obj, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  obj,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(obj, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, obj, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))v22)(
                v30,
                obj,
                *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))(*v30
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v29 + 72)
                                                                                    + 312))(
                v30,
                obj,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, __int64))v31)(v30, obj, v29);
    }
  }
}