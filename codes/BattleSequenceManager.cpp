void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4184E78 & 1) == 0 )
  {
    sub_B2C35C(&BattleSequenceManager_TypeInfo, v1);
    byte_4184E78 = 1;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v28; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v29; // x20
  struct UnityEngine_GameObject_array *v30; // x0
  System_RuntimeFieldHandle_o v31; // 0:w1.4

  if ( (byte_4184E77 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_HashSet_string__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Object___ctor___67314216, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_Action__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_List_Object__TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v18);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v19);
    sub_B2C35C(&StringLiteral_9395/*"N_{0}{1}"*/, v20);
    byte_4184E77 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v21 = (System_Array_o *)sub_B2C374(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v31.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v21, v31, 0LL);
  this->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v21;
  sub_B2C2F8(&this->fields.FadeTargetPanelIndexs, v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v22;
  sub_B2C2F8(&this->fields.ReleaseSoundNames, v22);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v23;
  sub_B2C2F8(&this->fields.DelayInvokeMethodList, v23);
  v24 = StringLiteral_9395/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9395/*"N_{0}{1}"*/;
  sub_B2C2F8(&this->fields.PosNodeFormatNP, v24);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Object___ctor___67314216);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v25;
  sub_B2C2F8(&this->fields.npEndDeleteObjects, v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v26;
  sub_B2C2F8(&this->fields.battleTargetList, v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v27;
  sub_B2C2F8(&this->fields.createdObjects, v27);
  v28 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v28,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v28;
  sub_B2C2F8(&this->fields.playAudioSyncGroupIndexDict, v28);
  v29 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v29,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v29;
  sub_B2C2F8(&this->fields.playedAudioGroupIdHash, v29);
  this->fields.nowTargetAlpha = 1.0;
  v30 = (struct UnityEngine_GameObject_array *)sub_B2C374(UnityEngine_GameObject___TypeInfo, 3LL);
  this->fields.saveWaitEnemy = v30;
  sub_B2C2F8(&this->fields.saveWaitEnemy, v30);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Color_o clear; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4184E5B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, actor);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v5);
    byte_4184E5B = 1;
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
      sub_B2C434(v6, v7);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_32449920(actor, (System_String_o *)StringLiteral_23190/*"wait"*/, 0, 0LL);
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

  if ( (byte_4184E71 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_4184E71 = 1;
  }
  if ( System_String__Equals_44364288(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_1A8A5EC *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_19708560(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_19708560(
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
  __int64 v13; // x1
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v15; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v20; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v24; // x24

  if ( (byte_4184E43 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__, v9);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass77_0_TypeInfo, v10);
    byte_4184E43 = 1;
  }
  v11 = (BattleSequenceManager___c__DisplayClass77_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass77_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass77_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_17;
  v11->fields.__4__this = this;
  sub_B2C2F8(&v11->fields, this);
  v11->fields.obj = obj;
  sub_B2C2F8(&v11->fields.obj, obj);
  v11->fields.onComplete = onComplete;
  sub_B2C2F8(&v11->fields.onComplete, onComplete);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_17;
  v15 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_17;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v15 )
    goto LABEL_17;
  MeshLocal = StandFigureManager__CreateMeshLocal(v15, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_B2C2F8(&this->fields.standFigure, MeshLocal);
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
          v20 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v24,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass77_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v20 )
            return UIStandFigureM__SetCharacter_40472052(
                     v20,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v24,
                     1,
                     0LL);
        }
      }
    }
LABEL_17:
    sub_B2C434(Instance, v13);
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
  __int64 v27; // x1
  System_String_o *BgmName; // x0
  const MethodInfo *v29; // x3
  BgmPlayArgsGroup_o *v30; // x19
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x20
  float v34; // s0
  double v35; // d0
  int32_t v36; // w21
  const MethodInfo_21524A8 *v37; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  System_Object_array *v39; // x20
  __int64 v40; // x0
  __int64 v41; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v44; // x8
  struct BattlePerformance_o *v45; // x8
  BattleSequenceManager_c *v46; // x0
  Il2CppObject *v47; // x21
  __int64 v48; // x1
  Il2CppObject *v49; // x21
  __int64 v50; // x1
  Il2CppObject *v51; // x21
  __int64 v52; // x1
  __int64 v53; // x1
  System_Collections_Hashtable_o *v54; // x0
  System_String_o *v55; // x19
  __int64 v56; // x0
  __int64 v57; // x0
  int v58; // [xsp+4h] [xbp-7Ch] BYREF
  System_Nullable_long__o v59; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o fadeTime; // [xsp+38h] [xbp-48h] BYREF
  System_Nullable_float__o p_fadeTime; // 0:x0.8
  System_Nullable_float__o v63; // 0:x1.8
  System_Nullable_float__o v64; // 0:x2.8
  System_Nullable_long__o v65; // 0:x0.16

  if ( (byte_4184E5C & 1) == 0 )
  {
    sub_B2C35C(&BattleSequenceManager_TypeInfo, method);
    sub_B2C35C(&BgmManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v9);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v10);
    sub_B2C35C(&object___TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&float_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v16);
    sub_B2C35C(&StringLiteral_9941/*"OnChangeBgmVolume"*/, v17);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v18);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v19);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v20);
    sub_B2C35C(&iTween_TypeInfo, v21);
    byte_4184E5C = 1;
  }
  memset(&v60, 0, sizeof(v60));
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
    sub_B2C2F8(&this->fields.BackupBgmName, v24);
  }
  v25 = *p_BackupBgmName;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_81;
  BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0LL);
  if ( !System_String__op_Inequality(v25, BgmName, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    Instance = sub_B2C374(object___TypeInfo, 8LL);
    if ( !Instance )
      goto LABEL_81;
    v39 = (System_Object_array *)Instance;
    v40 = StringLiteral_18914/*"from"*/;
    if ( StringLiteral_18914/*"from"*/ )
    {
      v40 = sub_B2C41C(StringLiteral_18914/*"from"*/, v39->obj.klass->_1.element_class);
      if ( !v40 )
        goto LABEL_82;
      v41 = StringLiteral_18914/*"from"*/;
    }
    else
    {
      v41 = 0LL;
    }
    if ( !v39->max_length )
      goto LABEL_80;
    v39->m_Items[0] = (Il2CppObject *)v41;
    sub_B2C2F8(v39->m_Items, v41);
    v46 = BattleSequenceManager_TypeInfo;
    if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v46 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v59.fields.value = v46->static_fields->NoblePhantasmBgmVolumeRate;
    v40 = j_il2cpp_value_box_0(float_TypeInfo, &v59);
    v47 = (Il2CppObject *)v40;
    if ( !v40 || (v40 = sub_B2C41C(v40, v39->obj.klass->_1.element_class)) != 0 )
    {
      if ( v39->max_length <= 1 )
        goto LABEL_80;
      v39->m_Items[1] = v47;
      sub_B2C2F8(&v39->m_Items[1], v47);
      v40 = StringLiteral_22714/*"to"*/;
      if ( StringLiteral_22714/*"to"*/ )
      {
        v40 = sub_B2C41C(StringLiteral_22714/*"to"*/, v39->obj.klass->_1.element_class);
        if ( !v40 )
          goto LABEL_82;
        v48 = StringLiteral_22714/*"to"*/;
      }
      else
      {
        v48 = 0LL;
      }
      if ( v39->max_length <= 2 )
        goto LABEL_80;
      v39->m_Items[2] = (Il2CppObject *)v48;
      sub_B2C2F8(&v39->m_Items[2], v48);
      LODWORD(fadeTime.fields.value) = 1;
      v40 = j_il2cpp_value_box_0(int_TypeInfo, &fadeTime);
      v49 = (Il2CppObject *)v40;
      if ( !v40 || (v40 = sub_B2C41C(v40, v39->obj.klass->_1.element_class)) != 0 )
      {
        if ( v39->max_length <= 3 )
          goto LABEL_80;
        v39->m_Items[3] = v49;
        sub_B2C2F8(&v39->m_Items[3], v49);
        v40 = StringLiteral_22677/*"time"*/;
        if ( StringLiteral_22677/*"time"*/ )
        {
          v40 = sub_B2C41C(StringLiteral_22677/*"time"*/, v39->obj.klass->_1.element_class);
          if ( !v40 )
            goto LABEL_82;
          v50 = StringLiteral_22677/*"time"*/;
        }
        else
        {
          v50 = 0LL;
        }
        if ( v39->max_length <= 4 )
          goto LABEL_80;
        v39->m_Items[4] = (Il2CppObject *)v50;
        sub_B2C2F8(&v39->m_Items[4], v50);
        v58 = 1056964608;
        v40 = j_il2cpp_value_box_0(float_TypeInfo, &v58);
        v51 = (Il2CppObject *)v40;
        if ( !v40 || (v40 = sub_B2C41C(v40, v39->obj.klass->_1.element_class)) != 0 )
        {
          if ( v39->max_length <= 5 )
            goto LABEL_80;
          v39->m_Items[5] = v51;
          sub_B2C2F8(&v39->m_Items[5], v51);
          v40 = StringLiteral_21272/*"onupdate"*/;
          if ( StringLiteral_21272/*"onupdate"*/ )
          {
            v40 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v39->obj.klass->_1.element_class);
            if ( !v40 )
              goto LABEL_82;
            v52 = StringLiteral_21272/*"onupdate"*/;
          }
          else
          {
            v52 = 0LL;
          }
          if ( v39->max_length <= 6 )
            goto LABEL_80;
          v39->m_Items[6] = (Il2CppObject *)v52;
          sub_B2C2F8(&v39->m_Items[6], v52);
          v40 = StringLiteral_9941/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9941/*"OnChangeBgmVolume"*/ )
          {
            v53 = 0LL;
LABEL_70:
            if ( v39->max_length > 7 )
            {
              v39->m_Items[7] = (Il2CppObject *)v53;
              sub_B2C2F8(&v39->m_Items[7], v53);
              if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v54 = iTween__Hash(v39, 0LL);
              iTween__ValueTo(gameObject, v54, 0LL);
              return;
            }
LABEL_80:
            v56 = sub_B2C460(v40);
            sub_B2C400(v56, 0LL);
          }
          v40 = sub_B2C41C(StringLiteral_9941/*"OnChangeBgmVolume"*/, v39->obj.klass->_1.element_class);
          if ( v40 )
          {
            v53 = StringLiteral_9941/*"OnChangeBgmVolume"*/;
            goto LABEL_70;
          }
        }
      }
    }
LABEL_82:
    v57 = sub_B2C454();
    sub_B2C400(v57, 0LL);
  }
  Instance = BattleSequenceManager__ExistBackupBgmPlayGroup(
               this,
               this->fields.changeFieldAfter != 0LL,
               this->fields.BackupBgmName,
               v29);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( Instance )
    {
      Instance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)Instance, 0LL);
      if ( Instance )
      {
        v30 = (BgmPlayArgsGroup_o *)Instance;
        Instance = *(_QWORD *)(Instance + 16);
        if ( Instance )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v60,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          while ( 1 )
          {
            v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v60,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v31 )
              break;
            current = v60.fields.current;
            if ( !v60.fields.current )
              sub_B2C434(v31, v32);
            v34 = (float)(__int64)v60.fields.current[2].klass + -800.0;
            if ( v34 == INFINITY )
              v35 = -INFINITY;
            else
              v35 = v34;
            v36 = UnityEngine_Mathf__Max_40694800(0, (int)v35, 0LL);
            fadeTime = 0LL;
            p_fadeTime = (System_Nullable_float__o)&fadeTime;
            System_Nullable_float____ctor(
              p_fadeTime,
              0.5,
              (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
            *(_QWORD *)&v65.fields.has_value = v36;
            v59.fields.value = 0LL;
            *(_QWORD *)&v59.fields.has_value = 0LL;
            v65.fields.value = (int64_t)&v59;
            System_Nullable_long____ctor(v65, Method_System_Nullable_long___ctor__, v37);
            v64 = fadeTime;
            v63 = 0LL;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v63, v64, v59, 0LL);
          }
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v60,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          BgmManager__PlayBgm_24707780(v30, 0LL, 0LL);
          return;
        }
      }
    }
LABEL_81:
    sub_B2C434(Instance, v27);
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
      v44 = this->fields.performance;
      if ( v44 )
      {
        Instance = (__int64)v44->fields.logic;
        if ( Instance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)Instance, 0LL, 0LL);
          v45 = this->fields.performance;
          if ( v45 )
          {
            Instance = (__int64)v45->fields.logic;
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
  v55 = *p_BackupBgmName;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v55, 0LL);
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
  __int64 v13; // x1
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_4184E73 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_B2C35C(&Method_System_Func_BgmPlayArgs__bool___ctor__, v7);
    sub_B2C35C(&System_Func_BgmPlayArgs__bool__TypeInfo, v8);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__, v9);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass140_0_TypeInfo, v10);
    byte_4184E73 = 1;
  }
  v11 = (BattleSequenceManager___c__DisplayClass140_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass140_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass140_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.checkBgmName = checkBgmName;
  sub_B2C2F8(&v11->fields, checkBgmName);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                                               backupBgmPlayArgsGroup,
                                                               0LL);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_BattleSequenceManager___c__DisplayClass140_0__ExistBackupBgmPlayGroup_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
  return System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v15,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  if ( (byte_4184E53 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184E53 = 1;
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
        v15 = sub_B2C460(this);
        sub_B2C400(v15, 0LL);
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
    sub_B2C434(this, method);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x21
  BattleSequenceManager___c_c *v36; // x0
  struct BattleSequenceManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_0; // x23
  Il2CppObject *v39; // x24
  struct BattleSequenceManager___c_StaticFields *v40; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  BattleSequenceManager___c_c *v44; // x0
  struct BattleSequenceManager___c_StaticFields *v45; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__74_2; // x19
  Il2CppObject *v47; // x22
  struct BattleSequenceManager___c_StaticFields *v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4184E42 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_B2C35C(&Method_System_Comparison_USFGOPlayAudioEvent___ctor__, v6);
    sub_B2C35C(&Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__, v7);
    sub_B2C35C(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v8);
    sub_B2C35C(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v12);
    sub_B2C35C(&Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__, v13);
    sub_B2C35C(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v24);
    sub_B2C35C(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v25);
    sub_B2C35C(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v26);
    sub_B2C35C(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__, v27);
    sub_B2C35C(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__, v28);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v29);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo, v30);
    sub_B2C35C(&BattleSequenceManager___c_TypeInfo, v31);
    byte_4184E42 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  v32 = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass74_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_31;
  v32->fields.syncGroupName = syncGroupName;
  sub_B2C2F8(&v32->fields, syncGroupName);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_31;
  v33 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                         sequence,
                                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v35 )
    goto LABEL_31;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v35,
    v33,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v36 = BattleSequenceManager___c_TypeInfo;
  if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v36 = BattleSequenceManager___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__74_0;
  if ( !_9__74_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__74_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__74_0,
      v39,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_USFGOSetAudioGroupIndexConditional___ctor__);
    v40 = BattleSequenceManager___c_TypeInfo->static_fields;
    v40->__9__74_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__74_0;
    sub_B2C2F8(&v40->__9__74_0, _9__74_0);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v35,
    (System_Comparison_T__o *)_9__74_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v41,
    (Il2CppObject *)v32,
    Method_BattleSequenceManager___c__DisplayClass74_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_USFGOSetAudioGroupIndexConditional__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          (System_Collections_Generic_List_T__o *)v35,
          (System_Func_T__bool__o *)v41,
          (const MethodInfo_17266AC *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v42,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    v33 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                           sequence,
                                                           (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v42 )
    {
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v42,
        v33,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v43 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                             sequence,
                                                             (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v42,
        v43,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v44 = BattleSequenceManager___c_TypeInfo;
      if ( (BYTE3(BattleSequenceManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v44 = BattleSequenceManager___c_TypeInfo;
      }
      v45 = v44->static_fields;
      _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v45->__9__74_2;
      if ( !_9__74_2 )
      {
        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v45 = BattleSequenceManager___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)v45->__9;
        _9__74_2 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__74_2,
          v47,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__74_2__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_USFGOPlayAudioEvent___ctor__);
        v48 = BattleSequenceManager___c_TypeInfo->static_fields;
        v48->__9__74_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__74_2;
        sub_B2C2F8(&v48->__9__74_2, _9__74_2);
      }
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v42,
        (System_Comparison_T__o *)_9__74_2,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v50,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v42,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v50,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v50.fields.current )
          sub_B2C434(0LL, v49);
      }
      while ( (((__int64 (*)(void))v50.fields.current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v50,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_31:
    sub_B2C434(v33, v34);
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

  if ( (byte_4184E46 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4184E46 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_16;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      actor,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_B2C434(actor, *(_QWORD *)&curLimCnt);
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
  __int64 v16; // x1
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4184E66 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&pos);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_5993/*"Enemy"*/, v9);
    sub_B2C35C(&StringLiteral_10698/*"Player"*/, v10);
    byte_4184E66 = 1;
  }
  v11 = &StringLiteral_5993/*"Enemy"*/;
  if ( !isEnemy )
    v11 = &StringLiteral_10698/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v18 = pos;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v15 = System_String__Format_44301068(format, v12, v14, 0LL);
  if ( !Instance )
    sub_B2C434(v15, v16);
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
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4184E67 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__, *(_QWORD *)&posIndex);
    sub_B2C35C(&Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__, v5);
    sub_B2C35C(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v6);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__, v7);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass121_0_TypeInfo, v8);
    byte_4184E67 = 1;
  }
  v9 = (BattleSequenceManager___c__DisplayClass121_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass121_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass121_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.posIndex = posIndex;
  battleTargetList = this->fields.battleTargetList;
  v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleSequenceManager___c__DisplayClass121_0__GetTargetPosIndexTransform_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleSequenceManager_BattleTarget___ctor__);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)battleTargetList,
                                        (System_Predicate_T__o *)v13,
                                        (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v10 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v10 )
      return UnityEngine_GameObject__get_transform(v10, 0LL);
LABEL_9:
    sub_B2C434(v10, v11);
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
  sub_B2C2F8(fxdVoice, 0LL);
  fixedVoice = this->fields.fixedVoice;
  if ( !fixedVoice )
    return 0;
  *fxdVoice = fixedVoice;
  sub_B2C2F8(fxdVoice, fixedVoice);
  return 1;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *actor; // x21
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_4184E72 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4184E72 = 1;
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
  v9 = this->fields.actor;
  if ( !v9 )
    goto LABEL_18;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v9,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
    return 0;
  if ( !Component_srcLineSprite )
LABEL_18:
    sub_B2C434(v9, v8);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_srcLineSprite, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UnityEngine_Object_o *Instance; // x19
  WebViewManager_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *webView; // x19
  srcLineSprite_o *Component_srcLineSprite; // x19

  if ( (byte_4184E74 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_4184E74 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Instance, 0LL, 0LL) )
    return 0;
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_21;
  v5 = (WebViewManager_o *)v5->fields.webView;
  if ( !v5 )
    goto LABEL_21;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)v5,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_B2C434(v5, v6);
  return LOBYTE(Component_srcLineSprite[3].fields.mcMyTrans) == 0;
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

  if ( (byte_4184E76 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184E76 = 1;
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
  __int64 v9; // x1

  if ( (byte_4184E44 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_4184E44 = 1;
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
    sub_B2C434(IsNullOrEmpty, v9);
  }
  IsNullOrEmpty = this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_11;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsNullOrEmpty,
    (EventMissionProgressRequest_Argument_ProgressData_o *)bgmName,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
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

  if ( (byte_4184E45 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, obj);
    byte_4184E45 = 1;
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
      sub_B2C434(0LL, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *isMultiTargetUp; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *v14; // x8
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  srcLineSprite_o *v17; // x21
  __int64 *v18; // x8
  struct BattlePerformance_o *v19; // x9
  System_String_o *v20; // x19
  BattleData_o *v21; // x21
  UnityEngine_Component_o *TransformChild; // x19
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4184E62 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_18319/*"en_Parts_Up01"*/, v6);
    sub_B2C35C(&StringLiteral_18318/*"en_Parts_Under01"*/, v7);
    byte_4184E62 = 1;
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
    isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)isMultiTargetUp & 1) == 0 )
    {
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_61;
      data = (UnityEngine_Object_o *)v11->fields.data;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)isMultiTargetUp & 1) == 0 )
      {
        v13 = this->fields.performance;
        if ( !v13 )
          goto LABEL_61;
        v14 = v13->fields.data;
        if ( !v14 )
          goto LABEL_61;
        if ( v14->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_61;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      CoreObj,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                          (UnityEngine_Object_o *)Component_srcLineSprite,
                                                          0LL,
                                                          0LL);
          if ( ((unsigned __int8)isMultiTargetUp & 1) == 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_61;
            isMultiTargetUp = *(UnityEngine_GameObject_o **)&Component_srcLineSprite[3].fields.m_CachedPtr;
            if ( !isMultiTargetUp )
              goto LABEL_61;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)isMultiTargetUp, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                isMultiTargetUp = this->fields.SingleTarget;
                if ( !isMultiTargetUp )
                  goto LABEL_61;
                v17 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        isMultiTargetUp,
                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v17,
                                                                0LL,
                                                                0LL);
                if ( ((unsigned __int8)isMultiTargetUp & 1) == 0 )
                {
                  if ( !v17 )
                    goto LABEL_61;
                  if ( LOBYTE(v17[3].fields.mcMyTrans) )
                  {
                    isMultiTargetUp = *(UnityEngine_GameObject_o **)&v17[3].fields.m_CachedPtr;
                    if ( !isMultiTargetUp )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)isMultiTargetUp, 0LL) )
                      goto LABEL_43;
                    isMultiTargetUp = *(UnityEngine_GameObject_o **)&v17[3].fields.m_CachedPtr;
                    if ( !isMultiTargetUp )
                      goto LABEL_61;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)isMultiTargetUp, 0LL) )
                    {
LABEL_43:
                      isMultiTargetUp = *(UnityEngine_GameObject_o **)&v17[3].fields.m_CachedPtr;
                      if ( !isMultiTargetUp )
                        goto LABEL_61;
                      isMultiTargetUp = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                                      (BattleServantData_o *)isMultiTargetUp,
                                                                      0LL);
                      if ( ((unsigned __int8)isMultiTargetUp & 1) != 0 )
                      {
                        v18 = &StringLiteral_18319/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        isMultiTargetUp = *(UnityEngine_GameObject_o **)&v17[3].fields.m_CachedPtr;
                        if ( !isMultiTargetUp )
                          goto LABEL_61;
                        isMultiTargetUp = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                                        (BattleServantData_o *)isMultiTargetUp,
                                                                        0LL);
                        if ( ((unsigned __int8)isMultiTargetUp & 1) == 0 )
                          return 0;
                        v18 = &StringLiteral_18318/*"en_Parts_Under01"*/;
                      }
                      v19 = this->fields.performance;
                      if ( !v19 )
                        goto LABEL_61;
                      v20 = (System_String_o *)*v18;
                      v21 = v19->fields.data;
                      isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                      0LL);
                      if ( !v21 )
                        goto LABEL_61;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v21,
                                                                    (UnityEngine_Transform_o *)isMultiTargetUp,
                                                                    v20,
                                                                    0LL);
                      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      }
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                        0LL);
                        if ( isMultiTargetUp )
                        {
                          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)isMultiTargetUp,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v26 = v23;
                            v27 = v24;
                            v28 = v25;
                            isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                            TransformChild,
                                                                            0LL);
                            if ( isMultiTargetUp )
                            {
                              position = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)isMultiTargetUp,
                                           0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              isMultiTargetUp = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)Component_srcLineSprite,
                                                                              0LL);
                              if ( isMultiTargetUp )
                              {
                                v34.fields.x = v26 - x;
                                v34.fields.y = v27 - y;
                                v34.fields.z = v28 - z;
                                UnityEngine_Transform__set_localPosition(
                                  (UnityEngine_Transform_o *)isMultiTargetUp,
                                  v34,
                                  0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_61:
                        sub_B2C434(isMultiTargetUp, v10);
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
    sub_B2C434(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = &v3->fields.BgChangedCallback;
    System_Action__Invoke(BgChangedCallback, 0LL);
    *p_BgChangedCallback = 0LL;
    sub_B2C2F8(p_BgChangedCallback, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v14; // x19
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 v20; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x8
  System_String_o *v32; // x20
  float v33; // s9
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0

  if ( (byte_4184E57 & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4184E57 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_B2C434(0LL, v11);
    klass = v10->klass;
    v14 = v10;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v12);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v14,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B2C434(0LL, v18);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v22 = 0LL;
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_16;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_16:
        v24 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v27 = 0LL;
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          ++v27;
          v28 += 4;
          if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_23;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_23:
        v29 = sub_AC5258(v20, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v25);
      }
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
      if ( !v31 )
        sub_B2C434(0LL, v30);
      v32 = *(System_String_o **)(v31 + 16);
      v33 = *(float *)(v31 + 24);
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v32, v33 * newValue, 0LL);
    }
    v34 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_34;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_34:
      v37 = sub_AC5258(v20, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v20, *(_QWORD *)(v37 + 8));
  }
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  srcLineSprite_o *v28; // x1
  const MethodInfo *v29; // x2
  __int64 transform; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  Il2CppObject *v38; // x20
  int v39; // w20
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v42; // x21
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v44; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v47; // x10
  unsigned __int64 v48; // x22
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v50; // x21
  struct System_Collections_Generic_List_bool__o *v51; // x27
  char *v52; // x8
  int v53; // w27
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v56; // x24
  __int64 v57; // x25
  unsigned __int64 v58; // x9
  unsigned __int64 v59; // x26
  UnityEngine_Object_o *v60; // x21
  struct BattlePerformance_o *v61; // x9
  struct UnityEngine_GameObject_array *v62; // x8
  unsigned int *v63; // x27
  __int64 v64; // x21
  struct BattlePerformance_o *v65; // x8
  struct UnityEngine_GameObject_array *v66; // x24
  __int64 v67; // x8
  unsigned __int64 v68; // x25
  UnityEngine_Object_o *v69; // x21
  struct System_Collections_Generic_List_bool__o *v70; // x28
  char *v71; // x8
  int v72; // w28
  UnityEngine_Object_o *v73; // x21
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v75; // x8
  struct BattlePerformance_o *v76; // x8
  struct UnityEngine_GameObject_array *v77; // x22
  __int64 v78; // x8
  unsigned __int64 v79; // x24
  UnityEngine_Object_o *v80; // x21
  BattleActorControl_o *v81; // x0
  const MethodInfo *v82; // x2
  struct BattlePerformance_o *v83; // x8
  struct UnityEngine_GameObject_array *v84; // x22
  __int64 v85; // x8
  unsigned __int64 v86; // x24
  UnityEngine_Object_o *v87; // x21
  BattleActorControl_o *v88; // x0
  const MethodInfo *v89; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v92; // x2
  UnityEngine_Camera_o *v93; // x21
  int32_t cullingMask; // w22
  char v95; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v97; // w22
  char v98; // w0
  struct BattlePerformance_o *v99; // x8
  UnityEngine_Object_o *v100; // x21
  bool v101; // w0
  struct BattlePerformance_o *v102; // x8
  BattlePerformance_o *v103; // x20
  int32_t v104; // w21
  int32_t CurrentGroundType; // w0
  __int64 v106; // x0
  __int64 v107; // x0
  struct UnityEngine_GameObject_o **v108; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+8h] [xbp-B8h] BYREF
  int v110[2]; // [xsp+20h] [xbp-A0h]
  int v111; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v112; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v113; // [xsp+50h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4184E59 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_USSequencer__Invoke__, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&CommonUI_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Object__Clear__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__get_Count__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__get_Item__, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v23);
    sub_B2C35C(&StringLiteral_9596/*"NoblePhantasm/CutIns"*/, v24);
    sub_B2C35C(&StringLiteral_2769/*"Battle2D"*/, v25);
    byte_4184E59 = 1;
  }
  entity = 0LL;
  memset(&v113, 0, sizeof(v113));
  memset(&v112, 0, sizeof(v112));
  v111 = 0;
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v29);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v31);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v32);
  BattleSequenceManager__restoreBattleActorTransform(this, v33);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_195;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_24E412C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v34) )
    BattleSequenceManager__CrossFadeBgm(this, v35);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v35);
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
    &v109,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v113 = v109;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v113,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v113.fields.current;
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
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
  }
  v110[0] = 208;
  v111 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v113,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  v111 = 0;
  transform = (__int64)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_Object__Clear__);
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v109,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)transform,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v112 = v109;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v112,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v38 = v112.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v38, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v38, 0LL);
    }
  }
  v110[0] = 284;
  v39 = ++v111;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v112,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  if ( v39 && v110[v39 - 1] == 284 )
    v111 = v39 - 1;
  transform = (__int64)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_195;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)transform,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v42 = (UnityEngine_Object_o *)*p_seqObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v42, 0LL);
    *p_seqObject = 0LL;
    sub_B2C2F8(&this->fields.seqObject, 0LL);
  }
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_195;
  v44 = this->fields.performance;
  v108 = &this->fields.seqObject;
  if ( !v44 )
    goto LABEL_195;
  p_actorlist = v44->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_195;
  e_actorlist = v44->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_195;
  v47 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v47 )
  {
    if ( (int)v47 >= 1 )
    {
      v48 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v48 < max_length )
      {
        v50 = (UnityEngine_Object_o *)p_actorlist->m_Items[v48];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v51 = this->fields.ActorActiveList;
          if ( !v51 )
            goto LABEL_195;
          if ( v48 >= (unsigned int)v51->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v50 )
            goto LABEL_195;
          v52 = (char *)v51->fields._items + v48;
          v53 = (unsigned __int8)v52[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, v52[32] != 0, 0LL);
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v50,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v53 != 0, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v48 >= (int)max_length )
          goto LABEL_88;
      }
LABEL_196:
      v106 = sub_B2C460(transform);
      sub_B2C400(v106, 0LL);
    }
    LODWORD(v48) = 0;
LABEL_88:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_195;
    v56 = 4LL;
    v57 = 8LL;
    while ( 1 )
    {
      v58 = saveWaitEnemy->max_length;
      v59 = v56 - 4;
      if ( v56 - 4 >= (int)v58 )
        break;
      if ( v59 >= v58 )
        goto LABEL_196;
      v60 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v56);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v60, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        v61 = this->fields.performance;
        if ( !v61 )
          goto LABEL_195;
        v62 = this->fields.saveWaitEnemy;
        if ( !v62 )
          goto LABEL_195;
        if ( v59 >= v62->max_length )
          goto LABEL_196;
        v63 = (unsigned int *)v61->fields.e_actorlist;
        if ( !v63 )
          goto LABEL_195;
        v64 = *((_QWORD *)&v62->obj.klass + v56);
        if ( v64 )
        {
          transform = sub_B2C41C(v64, *(_QWORD *)(*(_QWORD *)v63 + 64LL));
          if ( !transform )
          {
            v107 = sub_B2C454();
            sub_B2C400(v107, 0LL);
          }
        }
        if ( v59 >= v63[6] )
          goto LABEL_196;
        *(_QWORD *)&v63[v57] = v64;
        sub_B2C2F8(&v63[v57], v64);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v56;
      v57 += 2LL;
      if ( !saveWaitEnemy )
        goto LABEL_195;
    }
    v65 = this->fields.performance;
    if ( !v65 )
      goto LABEL_195;
    v66 = v65->fields.e_actorlist;
    if ( !v66 )
      goto LABEL_195;
    v67 = *(_QWORD *)&v66->max_length;
    if ( (int)v67 >= 1 )
    {
      v68 = 0LL;
      while ( v68 < (unsigned int)v67 )
      {
        v69 = (UnityEngine_Object_o *)v66->m_Items[v68];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
        if ( (transform & 1) != 0 )
        {
          v70 = this->fields.ActorActiveList;
          if ( !v70 )
            goto LABEL_195;
          if ( v70->fields._size <= (unsigned int)(v48 + v68) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( !v69 )
            goto LABEL_195;
          v71 = (char *)v70->fields._items + (int)v48 + (int)v68;
          v72 = (unsigned __int8)v71[32];
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v69, v71[32] != 0, 0LL);
          v73 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          (UnityEngine_GameObject_o *)v69,
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
          if ( (transform & 1) != 0 )
          {
            if ( !v73 )
              goto LABEL_195;
            transform = (__int64)v73[1].monitor;
            if ( !transform )
              goto LABEL_195;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v72 != 0, 0LL);
          }
        }
        LODWORD(v67) = v66->max_length;
        if ( (__int64)++v68 >= (int)v67 )
          goto LABEL_127;
      }
      goto LABEL_196;
    }
LABEL_127:
    v44 = this->fields.performance;
    if ( !v44 )
      goto LABEL_195;
  }
  data = (UnityEngine_Object_o *)v44->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    v75 = this->fields.performance;
    if ( !v75 )
      goto LABEL_195;
    transform = (__int64)v75->fields.data;
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
  v76 = this->fields.performance;
  if ( !v76 )
    goto LABEL_195;
  v77 = v76->fields.p_actorlist;
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
      transform = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v80 )
          goto LABEL_195;
        v81 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v80,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v81, v82);
      }
      LODWORD(v78) = v77->max_length;
      if ( (__int64)++v79 >= (int)v78 )
        goto LABEL_149;
    }
    goto LABEL_196;
  }
LABEL_149:
  v83 = this->fields.performance;
  if ( !v83 )
    goto LABEL_195;
  v84 = v83->fields.e_actorlist;
  if ( !v84 )
    goto LABEL_195;
  v85 = *(_QWORD *)&v84->max_length;
  if ( (int)v85 >= 1 )
  {
    v86 = 0LL;
    while ( v86 < (unsigned int)v85 )
    {
      v87 = (UnityEngine_Object_o *)v84->m_Items[v86];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = UnityEngine_Object__op_Inequality(v87, 0LL, 0LL);
      if ( (transform & 1) != 0 )
      {
        if ( !v87 )
          goto LABEL_195;
        v88 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v87,
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, v88, v89);
      }
      LODWORD(v85) = v84->max_length;
      if ( (__int64)++v86 >= (int)v85 )
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
    sub_B2C2F8(&this->fields.standFigure, 0LL);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v92) )
    BattleSequenceManager__ReleaseCpk(this, (const MethodInfo *)v28);
  transform = (__int64)this->fields.performance;
  if ( !transform )
    goto LABEL_195;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v93 = this->fields.actorCamera;
  if ( !v93 )
    goto LABEL_195;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v95 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v93, (1 << v95) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_195;
  v97 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v98 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
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
    v100 = (UnityEngine_Object_o *)*v108;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v101 = UnityEngine_Object__op_Inequality(v100, 0LL, 0LL);
    v28 = 0LL;
    if ( v101 )
    {
      transform = (__int64)*v108;
      if ( !*v108 )
        goto LABEL_195;
      v28 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    }
    transform = (__int64)this->fields.OnCompleteActorCallback;
    if ( transform )
    {
      System_Action_Uri___Invoke(
        (System_Action_Uri__o *)transform,
        (System_Uri_o *)v28,
        (const MethodInfo_24BBAEC *)Method_System_Action_USSequencer__Invoke__);
      goto LABEL_184;
    }
LABEL_195:
    sub_B2C434(transform, v28);
  }
LABEL_184:
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9596/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_195;
  *(_BYTE *)(transform + 129) = 0;
  v102 = this->fields.performance;
  if ( !v102 )
    goto LABEL_195;
  transform = (__int64)v102->fields.actioncamera;
  if ( !transform )
    goto LABEL_195;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v103 = this->fields.performance;
  if ( !v103 )
    goto LABEL_195;
  transform = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_195;
  v104 = transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v103, v104, CurrentGroundType, 0, 0LL);
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
  __int64 v17; // x1
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v18; // x20
  __int64 v19; // x3
  Il2CppClass *klass; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v21; // x19
  unsigned __int64 v22; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  __int64 v27; // x19
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  BattleSequenceManager___c__DisplayClass111_0_o *v33; // x21
  __int64 v34; // x3
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x23
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  const MethodInfo_21524A8 *v42; // x3
  BgmPlayArgs_o *args; // x21
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  System_Nullable_long__o v50; // [xsp+8h] [xbp-68h] BYREF
  __int64 v51; // [xsp+18h] [xbp-58h]
  System_Nullable_float__o v52; // 0:x1.8
  System_Nullable_float__o v53; // 0:x2.8
  System_Nullable_long__o v54; // 0:x0.16

  if ( (byte_4184E5E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_B2C35C(&BgmManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_B2C35C(&Method_System_Func_BgmPlayArgs__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BgmPlayArgs__bool__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v11);
    sub_B2C35C(
      &Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v12);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass111_0_TypeInfo, v13);
    byte_4184E5E = 1;
  }
  HIDWORD(v51) = 0;
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
                                                                                                (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v18 = v16,
            (v16 = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(this->fields.backupBgmPlayArgsGroup, 0LL)) == 0LL) )
      {
        sub_B2C434(v16, v17);
      }
      klass = v16->obj.klass;
      v21 = v16;
      if ( *(_WORD *)&v16->obj.klass->_2.bitflags1 )
      {
        v22 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          ++v22;
          p_offset += 4;
          if ( v22 >= *(unsigned __int16 *)&v16->obj.klass->_2.bitflags1 )
            goto LABEL_14;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_14:
        p_method = sub_AC5258(v16, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL, v19);
      }
      v27 = (*(__int64 (__fastcall **)(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *, _QWORD))p_method)(
              v21,
              *(_QWORD *)(p_method + 8));
      if ( !v27 )
        sub_B2C434(0LL, v25);
      while ( 1 )
      {
        v28 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
        {
          v29 = 0LL;
          v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v29;
            v30 += 4;
            if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
              goto LABEL_21;
          }
          v31 = v28 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_21:
          v31 = sub_AC5258(v27, System_Collections_IEnumerator_TypeInfo, 0LL, v26);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
          break;
        v33 = (BattleSequenceManager___c__DisplayClass111_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass111_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass111_0___ctor(v33, 0LL);
        v35 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
        {
          v36 = 0LL;
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            ++v36;
            v37 += 4;
            if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
              goto LABEL_28;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_28:
          v38 = sub_AC5258(v27, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL, v34);
        }
        v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v27, *(_QWORD *)(v38 + 8));
        if ( !v33 )
          sub_B2C434(v39, v39);
        v33->fields.args = (struct BgmPlayArgs_o *)v39;
        sub_B2C2F8(&v33->fields, v39);
        v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v40,
          (Il2CppObject *)v33,
          Method_BattleSequenceManager___c__DisplayClass111_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          (const MethodInfo_2711C04 *)Method_System_Func_BgmPlayArgs__bool___ctor__);
        USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                           v18,
                                                                           (System_Func_T__bool__o *)v40,
                                                                           (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( USFGOActorBattleActionEventConditional_OverwriteParamCondition )
          *(_QWORD *)&v54.fields.has_value = USFGOActorBattleActionEventConditional_OverwriteParamCondition[1].klass;
        else
          *(_QWORD *)&v54.fields.has_value = 0LL;
        args = v33->fields.args;
        v50.fields.value = 0LL;
        *(_QWORD *)&v50.fields.has_value = 0LL;
        v54.fields.value = (int64_t)&v50;
        System_Nullable_long____ctor(v54, Method_System_Nullable_long___ctor__, v42);
        if ( !args )
          sub_B2C434(v44, v45);
        v52 = 0LL;
        v53 = 0LL;
        BgmPlayArgs__Update(args, v52, v53, v50, 0LL);
      }
      v51 = 0x1000000A3LL;
      v46 = *(_QWORD *)v27;
      if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
            goto LABEL_41;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_41:
        v49 = sub_AC5258(v27, System_IDisposable_TypeInfo, 0LL, v32);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v49)(v27, *(_QWORD *)(v49 + 8));
      if ( (_DWORD)v51 == 163 )
        v51 = 163LL;
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

  if ( (byte_4184E5A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, actor);
    byte_4184E5A = 1;
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
      sub_B2C434(v4, v5);
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
  __int64 v9; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x20
  System_String_o *v13; // x0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x20
  System_Action_o *v15; // x21
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4184E5F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleSequenceManager__ReleaseCpk_b__112_0__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action__Add__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_9598/*"NoblePhantasm_"*/, v7);
    byte_4184E5F = 1;
  }
  v16 = 0;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v16 = overwriteSvtVoiceId;
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  v13 = System_Int32__ToString((int32_t)&v16, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_44305532(
                                            (System_String_o *)StringLiteral_9598/*"NoblePhantasm_"*/,
                                            v13,
                                            0LL);
  if ( !ReleaseSoundNames
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReleaseSoundNames,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__),
        DelayInvokeMethodList = this->fields.DelayInvokeMethodList,
        v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__112_0__, 0LL),
        !DelayInvokeMethodList) )
  {
LABEL_9:
    sub_B2C434(Instance, v9);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)DelayInvokeMethodList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Action__Add__);
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.fixedVoice = 0LL;
  sub_B2C2F8(&this->fields.fixedVoice, 0LL);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  this->fields.intactBgmList = 0LL;
  sub_B2C2F8(&this->fields.intactBgmList, 0LL);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0

  if ( (byte_4184E5D & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, method);
    byte_4184E5D = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_B2C2F8(&this->fields.backupBgmPlayArgsGroup, v3);
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

  if ( (byte_4184E63 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_9393/*"N_Enemy2"*/, v5);
    sub_B2C35C(&StringLiteral_9394/*"N_Player2"*/, v6);
    byte_4184E63 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_61;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_61;
  performance = this->fields.performance;
  v13 = actor;
  v14 = (System_String_o **)((LOBYTE(actor[18].fields.m_CachedPtr) != 0) != (LOBYTE(Component_srcLineSprite[3].fields.mcMyTrans) != 0)
                           ? &StringLiteral_9393/*"N_Enemy2"*/
                           : &StringLiteral_9394/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_61;
  v15 = 296LL;
  if ( LOBYTE(actor[18].fields.m_CachedPtr) )
    v15 = 304LL;
  v16 = *(__int64 *)((char *)&performance->klass + v15);
  if ( !v16 )
LABEL_61:
    sub_B2C434(actor, method);
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v17 = *v14;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 24);
    do
    {
      if ( v18 >= v19 )
      {
        v37 = sub_B2C460(actor);
        sub_B2C400(v37, 0LL);
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
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
        if ( BYTE6(actor[29].klass) && LOBYTE(v13[18].fields.m_CachedPtr) )
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
          if ( data->fields.isMultiTargetBattle && LOBYTE(v13[18].fields.m_CachedPtr) )
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
    sub_B2C434(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_B2C2F8(&this->fields.changeFieldAfter, actionData);
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
  if ( (byte_4184E6F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    this = (BattleSequenceManager_o *)sub_B2C35C(
                                        &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__,
                                        v6);
    byte_4184E6F = 1;
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v10 = battleTargetList->fields._items->m_Items[v8];
    if ( v10 )
    {
      this = (BattleSequenceManager_o *)v10->fields.targetActor;
      if ( this )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        else
          BattleActorControl__setAuraFlip((BattleActorControl_o *)this, (bool)this[1].fields.ReleaseSoundNames, 0LL);
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
                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( this )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)this, 0LL);
        return;
      }
    }
LABEL_20:
    sub_B2C434(this, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  this->fields.fixedVoice = voiceId;
  sub_B2C2F8(&this->fields.fixedVoice, voiceId);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct System_String_array *BgmNameListWithIds; // x0

  if ( (byte_4184E70 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4184E70 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_B2C2F8(&this->fields.intactBgmList, BgmNameListWithIds);
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
  if ( (byte_4184E61 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4184E61 = 1;
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
    sub_B2C434(this, targetActor);
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

  if ( (byte_4184E48 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4184E48 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               actor,
                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          Component_srcLineSprite,
          (BattleFBXComponent_o *)Component_srcLineSprite,
          isStart,
          v9),
        (battleTargetList = this->fields.battleTargetList) == 0LL) )
  {
LABEL_12:
    sub_B2C434(actor, isStart);
  }
  v12 = 0LL;
  while ( 1 )
  {
    size = battleTargetList->fields._size;
    if ( (int)v12 >= size )
      break;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
  __int64 v8; // x1

  if ( (byte_4184E49 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, fbx);
    sub_B2C35C(&StringLiteral_16212/*"_y0"*/, v6);
    byte_4184E49 = 1;
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
      sub_B2C434(v7, v8);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16212/*"_y0"*/, 0LL);
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

  if ( (byte_4184E47 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1834/*"Actors/Actor"*/, v8);
    byte_4184E47 = 1;
  }
  v26 = 0;
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_29:
    sub_B2C434(seqObject, playerList);
  Component_srcLineSprite = (WellFired_USSequencer_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         seqObject,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v26 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v26, 0LL);
    v14 = System_String__Concat_44305532((System_String_o *)StringLiteral_1834/*"Actors/Actor"*/, v13, 0LL);
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
          v25 = sub_B2C460(seqObject);
          sub_B2C400(v25, 0LL);
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
    v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_1834/*"Actors/Actor"*/, v19, 0LL);
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
  BattleSequenceManager___c__DisplayClass114_0_o *v19; // x22
  __int64 v20; // x1
  void *actor; // x0
  srcLineSprite_o *Component_srcLineSprite; // x23
  BattleActionData_o *mMapCtrl_SpotRoadInfo; // x24
  System_Collections_Generic_HashSet_int__o *v24; // x25
  void **p_targetList; // x21
  int v26; // w8
  void *v27; // x25
  unsigned int v28; // w20
  __int64 v29; // x8
  int v30; // w8
  void *v31; // x25
  unsigned int v32; // w20
  __int64 v33; // x8
  int v34; // w8
  void *v35; // x25
  unsigned int v36; // w20
  __int64 v37; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *moveToSubMemberList; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x25
  int mcMyTrans_low; // w20
  System_Collections_Generic_HashSet_int__o *v41; // x22
  int v42; // w27
  int i; // w28
  __int64 v44; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v48; // x1
  srcLineSprite_o *v49; // x0
  __int64 v50; // x1
  int32_t v51; // w21
  int v52; // w25
  int v53; // w8
  struct UnityEngine_GameObject_o *v54; // x21
  BattleActorControl_o *v55; // x23
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  BattlePerformance_o *v58; // x0
  int32_t v59; // w20
  UnityEngine_Object_o *v60; // x21
  _BOOL8 v61; // x0
  __int64 v62; // x1
  BattleActorControl_o *v63; // x22
  BattleSequenceManager_BattleTarget_o *v64; // x21
  __int64 v65; // x1
  BattlePerformance_o *v66; // x0
  __int64 ServantPosIndex; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *battleTargetList; // x0
  int v71; // w25
  __int64 v72; // x0
  int v73; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v74; // [xsp+18h] [xbp-98h] BYREF
  int v75[3]; // [xsp+30h] [xbp-80h]
  int v76; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4184E60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleActionData_MoveToSubMember___ctor__, method);
    sub_B2C35C(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, v3);
    sub_B2C35C(&BattleSequenceManager_BattleTarget_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__, v17);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass114_0_TypeInfo, v18);
    byte_4184E60 = 1;
  }
  memset(&j, 0, sizeof(j));
  v76 = 0;
  v19 = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass114_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass114_0___ctor(v19, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_B2C2F8(&this->fields.SingleTarget, 0LL);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_83;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  mMapCtrl_SpotRoadInfo = (BattleActionData_o *)Component_srcLineSprite[2].fields.mMapCtrl_SpotRoadInfo;
  v24 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v24,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( !v19 )
    goto LABEL_83;
  v19->fields.targetList = v24;
  p_targetList = (void **)&v19->fields.targetList;
  sub_B2C2F8(&v19->fields, v24);
  if ( !mMapCtrl_SpotRoadInfo )
    goto LABEL_83;
  actor = BattleActionData__getDamageList(mMapCtrl_SpotRoadInfo, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v26 = *((_DWORD *)actor + 6);
  v27 = actor;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( v28 < v26 )
    {
      v29 = *((_QWORD *)v27 + (int)v28 + 4);
      if ( !v29 )
        goto LABEL_83;
      v20 = *(unsigned int *)(v29 + 28);
      if ( (_DWORD)v20 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v20,
                          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
        goto LABEL_20;
    }
LABEL_84:
    v72 = sub_B2C460(actor);
    sub_B2C400(v72, 0LL);
  }
LABEL_20:
  actor = BattleActionData__getBuffList(mMapCtrl_SpotRoadInfo, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v30 = *((_DWORD *)actor + 6);
  v31 = actor;
  if ( v30 >= 1 )
  {
    v32 = 0;
    while ( v32 < v30 )
    {
      v33 = *((_QWORD *)v31 + (int)v32 + 4);
      if ( !v33 )
        goto LABEL_83;
      v20 = *(unsigned int *)(v33 + 40);
      if ( (_DWORD)v20 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v20,
                          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v30 = *((_DWORD *)v31 + 6);
      if ( (int)++v32 >= v30 )
        goto LABEL_29;
    }
    goto LABEL_84;
  }
LABEL_29:
  actor = BattleActionData__getHealList(mMapCtrl_SpotRoadInfo, -1, 0LL);
  if ( !actor )
    goto LABEL_83;
  v34 = *((_DWORD *)actor + 6);
  v35 = actor;
  if ( v34 >= 1 )
  {
    v36 = 0;
    while ( v36 < v34 )
    {
      v37 = *((_QWORD *)v35 + (int)v36 + 4);
      if ( !v37 )
        goto LABEL_83;
      v20 = *(unsigned int *)(v37 + 28);
      if ( (_DWORD)v20 )
      {
        actor = *p_targetList;
        if ( !*p_targetList )
          goto LABEL_83;
        actor = (void *)System_Collections_Generic_HashSet_int___Add(
                          (System_Collections_Generic_HashSet_int__o *)actor,
                          v20,
                          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      v34 = *((_DWORD *)v35 + 6);
      if ( (int)++v36 >= v34 )
        goto LABEL_38;
    }
    goto LABEL_84;
  }
LABEL_38:
  moveToSubMemberList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)mMapCtrl_SpotRoadInfo->fields.moveToSubMemberList;
  if ( moveToSubMemberList )
  {
    v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v39,
      (Il2CppObject *)v19,
      Method_BattleSequenceManager___c__DisplayClass114_0__SetupTargetInfo_b__0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleActionData_MoveToSubMember___ctor__);
    System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
      moveToSubMemberList,
      (System_Action_T__o *)v39,
      (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
  }
  mcMyTrans_low = LOBYTE(Component_srcLineSprite[3].fields.mcMyTrans);
  v41 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v41,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  actor = *p_targetList;
  if ( !*p_targetList )
    goto LABEL_83;
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v74,
    (System_Collections_Generic_HashSet_int__o *)actor,
    (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  v73 = 0;
  j = v74;
  v42 = 0;
LABEL_42:
  for ( i = v42; ; ++i )
  {
    v42 = i;
    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
      break;
    performance = this->fields.performance;
    if ( !performance )
      sub_B2C434(0LL, v44);
    current = (int32_t)j.fields._current;
    ServantGameObject = BattlePerformance__getServantGameObject(performance, (int32_t)j.fields._current, 0LL);
    if ( !ServantGameObject )
      sub_B2C434(0LL, v48);
    v49 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
            ServantGameObject,
            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !v49 )
      sub_B2C434(0LL, v50);
    if ( (mcMyTrans_low != 0) == (LOBYTE(v49[3].fields.mcMyTrans) != 0) )
    {
      ++v73;
      goto LABEL_42;
    }
    if ( !v41 )
      sub_B2C434(v49, v50);
    System_Collections_Generic_HashSet_int___Add(
      v41,
      current,
      (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
  }
  v75[0] = 391;
  v76 = 1;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  v76 = 0;
  if ( v73 && i == 1 )
  {
    *p_targetList = v41;
    sub_B2C2F8(p_targetList, v41);
  }
  actor = *p_targetList;
  if ( !*p_targetList )
LABEL_83:
    sub_B2C434(actor, v20);
  if ( *((_DWORD *)actor + 8) == 1 )
  {
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v74,
      (System_Collections_Generic_HashSet_int__o *)actor,
      (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v51 = -1;
    for ( j = v74;
          System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
          v51 = (int32_t)j.fields._current )
    {
      ;
    }
    v75[0] = 486;
    v52 = ++v76;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &j,
      (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    if ( v52 )
    {
      v53 = v52 - 1;
      if ( v75[v52 - 1] == 486 )
      {
        --v52;
        v76 = v53;
      }
    }
    actor = this->fields.performance;
    if ( !actor )
      goto LABEL_83;
    actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v51, 0LL);
    if ( !actor )
      goto LABEL_83;
    v54 = (struct UnityEngine_GameObject_o *)actor;
    v55 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)actor,
                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    this->fields.SingleTarget = v54;
    sub_B2C2F8(&this->fields.SingleTarget, v54);
    BattleSequenceManager__SetMultiTargetBattleEnemy(this, v55, v56);
    if ( !v41 )
      goto LABEL_83;
  }
  else
  {
    v52 = 0;
    if ( !v41 )
      goto LABEL_83;
  }
  System_Collections_Generic_HashSet_int___GetEnumerator(
    &v74,
    v41,
    (const MethodInfo_2D85B88 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
  j = v74;
  while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
            &j,
            (const MethodInfo_20E7C04 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
  {
    v58 = this->fields.performance;
    if ( !v58 )
      sub_B2C434(0LL, v57);
    v59 = (int32_t)j.fields._current;
    v60 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(v58, (int32_t)j.fields._current, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v61 = UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
    if ( !v61 )
    {
      if ( !v60 )
        sub_B2C434(v61, v62);
      v63 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v60,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      v64 = (BattleSequenceManager_BattleTarget_o *)sub_B2C42C(BattleSequenceManager_BattleTarget_TypeInfo);
      BattleSequenceManager_BattleTarget___ctor(v64, 0LL);
      v66 = this->fields.performance;
      if ( !v66 )
        sub_B2C434(0LL, v65);
      ServantPosIndex = BattlePerformance__getServantPosIndex(v66, v59, 0LL);
      if ( !v64 )
        sub_B2C434(ServantPosIndex, v68);
      BattleSequenceManager_BattleTarget__setup(v64, v63, ServantPosIndex, 0LL);
      battleTargetList = this->fields.battleTargetList;
      if ( !battleTargetList )
        sub_B2C434(0LL, v69);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)battleTargetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    }
  }
  v75[v52] = 651;
  v71 = ++v76;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
    &j,
    (const MethodInfo_20E7C00 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
  if ( v71 && v75[v71 - 1] == 651 )
    v76 = v71 - 1;
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B2C434(0LL, method);
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
  if ( (byte_4184E56 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_4184E56 = 1;
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
    sub_B2C434(this, isFullScreen);
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
  WellFired_USTimelineContainer_o *v24; // x0

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4184E65 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___, tlcont);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4184E65 = 1;
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
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Object__Add__);
        v22 = 0;
      }
      else
      {
        v22 = 1;
      }
      v23 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_UIWidget_(
                                          v23,
                                          (const MethodInfo_172628C *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_40;
      v24 = (WellFired_USTimelineContainer_o *)BattleSyncTransformComponent__SetTarget(
                                                 (BattleSyncTransformComponent_o *)this,
                                                 (UnityEngine_Transform_o *)TargetPosIndexTransform,
                                                 (BattleSyncTransformComponent_o *)Component_WebViewObject,
                                                 0LL);
      if ( v22 )
      {
        tlcont = v24;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_40;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)tlcont,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Object__Add__);
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_40:
      sub_B2C434(this, tlcont);
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
  __int64 v13; // x1
  UnityEngine_Object_o *klass; // x21
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  System_Collections_ICollection_o *Components_iTween; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v19; // x1
  void *v20; // x8
  unsigned __int64 v21; // x25
  NoblePhantasmTargetOverwriteTransform_o *v22; // x0
  _BOOL8 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4184E75 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4184E75 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  battleTargetList = this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v27 = v26;
    while ( 1 )
    {
      v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v23 )
        break;
      if ( !v27.fields.current )
        sub_B2C434(v23, v24);
      monitor = (UnityEngine_Object_o *)v27.fields.current[1].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v12 )
      {
        if ( !monitor )
          sub_B2C434(v12, v13);
        klass = (UnityEngine_Object_o *)monitor[1].klass;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
        {
          v16 = (UnityEngine_GameObject_o *)monitor[1].klass;
          if ( !v16 )
            sub_B2C434(0LL, v15);
          Components_iTween = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                    v16,
                                                                    (const MethodInfo_1AA7B88 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_iTween, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_iTween )
              sub_B2C434(IsNullOrEmpty, v19);
            v20 = Components_iTween[1].monitor;
            if ( (int)v20 >= 1 )
            {
              v21 = 0LL;
              do
              {
                if ( v21 >= (unsigned int)v20 )
                {
                  v25 = sub_B2C460(IsNullOrEmpty);
                  sub_B2C400(v25, 0LL);
                }
                v22 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_iTween[2].klass + v21);
                if ( isOverwrite )
                {
                  if ( !v22 )
                    sub_B2C434(0LL, v19);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v22, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v22 )
                    sub_B2C434(0LL, v19);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v22, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v20) = Components_iTween[1].monitor;
                ++v21;
              }
              while ( (__int64)v21 < (int)v20 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
  __int64 v8; // x1
  float v9; // s0
  struct System_Collections_Generic_List_Action__o *DelayInvokeMethodList; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184E40 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_4184E40 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v9 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v9;
    if ( v9 <= 0.0 )
    {
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_13;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v11,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)DelayInvokeMethodList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v11,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v11.fields.current )
          System_Action__Invoke((System_Action_o *)v11.fields.current, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v11,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      DelayInvokeMethodList = this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
LABEL_13:
        sub_B2C434(DelayInvokeMethodList, v8);
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)DelayInvokeMethodList,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_Action__Clear__);
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
  BattleSequenceManager__WaitEndSequence_d__105_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1

  if ( (byte_4184E58 & 1) == 0 )
  {
    sub_B2C35C(&BattleSequenceManager__WaitEndSequence_d__105_TypeInfo, method);
    byte_4184E58 = 1;
  }
  v3 = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B2C42C(BattleSequenceManager__WaitEndSequence_d__105_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__105___ctor(v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  v3->fields.__4__this = this;
  sub_B2C2F8(&v3->fields.__4__this, this);
  return (System_Collections_IEnumerator_o *)v3;
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
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184E79 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4184E79 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ReleaseSoundNames,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v12.fields.current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v12.fields.current, 0LL) )
    {
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v11);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
LABEL_12:
    sub_B2C434(ReleaseSoundNames, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)ReleaseSoundNames,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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

  if ( (byte_4184E4B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15905/*"_"*/, voiceMaster);
    byte_4184E4B = 1;
  }
  FlagRequestNumber = System_String__Concat_44305532((System_String_o *)StringLiteral_15905/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_18384340((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_B2C434(FlagRequestNumber, v10);
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
  System_Action_o *v21; // x24
  __int64 v22; // x0
  __int64 v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v13 = pos.fields.z;
  v14 = pos.fields.y;
  v15 = pos.fields.x;
  if ( (byte_4184E54 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_4184E54 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_B2C2F8(&this->fields.BgChangedCallback, callback);
  performance = this->fields.performance;
  v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_B2C434(v22, v23);
  v24.fields.z = v13;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  v24.fields.x = v15;
  v24.fields.y = v14;
  BattlePerformance__ForceChangeBg(performance, id, tp, v24, v25, 1, parentCamera, v21, 0LL);
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

  if ( (byte_4184E4D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15905/*"_"*/, voiceMaster);
    byte_4184E4D = 1;
  }
  FlagRequestNumber = System_String__Concat_44305532((System_String_o *)StringLiteral_15905/*"_"*/, labelName, 0LL);
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
    sub_B2C434(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4184E6A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_4184E6A = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)playAudioSyncGroupIndexDict,
         (System_Xml_XmlQualifiedName_o *)groupName,
         (const MethodInfo_2DAA4D8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_string__int___get_Item(
               playAudioSyncGroupIndexDict,
               groupName,
               (const MethodInfo_2DAA1A0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_B2C434(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4184E6C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_4184E6C = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v5; // x1
  bool v6; // w8
  BattleActorControl_o *result; // x0
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_4184E3C & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4184E3C = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  result = 0LL;
  if ( v6 )
  {
    v8 = this->fields.actor;
    if ( !v8 )
      sub_B2C434(0LL, v5);
    return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v8,
                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  __int64 v9; // x1

  if ( (byte_4184E3F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    byte_4184E3F = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_AC505C(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v9);
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

  if ( (byte_4184E3D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184E3D = 1;
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
    sub_B2C434(v4, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *performance; // x20
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  UnityEngine_GameObject_o *v11; // x20
  struct BattlePerformance_o *v12; // x8
  struct BattlePerformance_o *v14; // x8
  struct BattleData_o *v15; // x8
  struct BattleActionData_o *nowAction; // x9

  if ( (byte_4184E3E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&OptionManager_TypeInfo, v4);
    byte_4184E3E = 1;
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
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_40;
  data = (UnityEngine_Object_o *)v8->fields.data;
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
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    v11 = Component_srcLineSprite;
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&Component_srcLineSprite[17].fields.m_CachedPtr;
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
      v12 = this->fields.performance;
      if ( !v12 )
        goto LABEL_40;
      Component_srcLineSprite = *(UnityEngine_GameObject_o **)&v11[17].fields.m_CachedPtr;
      if ( !Component_srcLineSprite )
        goto LABEL_40;
      if ( BattleServantData__CheckFirstNpPlay((BattleServantData_o *)Component_srcLineSprite, v12->fields.data, 0LL) )
        return 0;
    }
    Component_srcLineSprite = *(UnityEngine_GameObject_o **)&v11[17].fields.m_CachedPtr;
    if ( !Component_srcLineSprite )
      goto LABEL_40;
    Component_srcLineSprite = (UnityEngine_GameObject_o *)BattleServantData__IsNpEffectSpeedFix(
                                                            (BattleServantData_o *)Component_srcLineSprite,
                                                            0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      Component_srcLineSprite = *(UnityEngine_GameObject_o **)&v11[17].fields.m_CachedPtr;
      if ( Component_srcLineSprite )
        return BattleServantData__IsNpDoubleSpeed((BattleServantData_o *)Component_srcLineSprite, 0LL);
LABEL_40:
      sub_B2C434(Component_srcLineSprite, v7);
    }
    v14 = this->fields.performance;
    if ( !v14 )
      goto LABEL_40;
    nowAction = v14->fields.nowAction;
    if ( nowAction )
    {
      if ( nowAction->fields.isForcedSpeedOne )
        return 0;
    }
  }
  else
  {
    v14 = this->fields.performance;
    if ( !v14 )
      goto LABEL_40;
  }
  v15 = v14->fields.data;
  if ( !v15 )
    goto LABEL_40;
  if ( v15->fields.systemflg_TdConstantvelocity )
    return 0;
  return v15->fields.systemflg_acceleration > 1;
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
  __int64 v19; // x1
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  struct UnityEngine_Transform_o *parent; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v24; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v25; // x20

  if ( (byte_4184E52 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_4184E52 = 1;
  }
  this->fields.performance = performance;
  sub_B2C2F8(&this->fields.performance, performance);
  this->fields.actor = actor;
  sub_B2C2F8(&this->fields.actor, actor);
  this->fields.playerActors = players;
  sub_B2C2F8(&this->fields.playerActors, players);
  this->fields.enemyActors = enemies;
  sub_B2C2F8(&this->fields.enemyActors, enemies);
  this->fields.actorCamera = camera;
  sub_B2C2F8(&this->fields.actorCamera, camera);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_B2C2F8(&this->fields.effectCamera, middleCamera);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_B2C2F8(&this->fields.cutInCamera, cutIncamera);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_B2C434(actorCamera, v19);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_B2C2F8(&this->fields.originalCameraRoot, parent);
  this->fields.bgObject = bg;
  sub_B2C2F8(&this->fields.bgObject, bg);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v23);
  v24 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v24,
    (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v24;
  sub_B2C2F8(&this->fields.playAudioSyncGroupIndexDict, v24);
  v25 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v25,
    (const MethodInfo_2D8BA5C *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v25;
  sub_B2C2F8(&this->fields.playedAudioGroupIdHash, v25);
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
  if ( (byte_4184E6D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_4184E6D = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4184E4F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1830/*"Actor"*/, name);
    sub_B2C35C(&StringLiteral_16339/*"animCamLoc"*/, v4);
    byte_4184E4F = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_1830/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16339/*"animCamLoc"*/, 0LL);
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
  __int64 v24; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  AssetLoader_LoadEndDataHandler_o *v26; // x19

  if ( (byte_4184E41 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__, v19);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass73_0_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_9596/*"NoblePhantasm/CutIns"*/, v21);
    byte_4184E41 = 1;
  }
  v22 = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B2C42C(BattleSequenceManager___c__DisplayClass73_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass73_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_11;
  v22->fields.__4__this = this;
  sub_B2C2F8(&v22->fields, this);
  v22->fields.onComplete = onComplete;
  v22->fields.chrId = chrId;
  v22->fields.limitCount = limitCount;
  v22->fields.treasureDeviceId = treasureDeviceId;
  v22->fields.treasureDeviceLv = treasureDeviceLv;
  v22->fields.npChargeStage = npChargeStage;
  v22->fields.overwriteSvtVoiceId = overwriteSvtVoiceId;
  sub_B2C2F8(&v22->fields.onComplete, onComplete);
  actor = this->fields.actor;
  this->fields.chrId = v22->fields.chrId;
  this->fields.limitCount = v22->fields.limitCount;
  this->fields.treasureDeviceId = v22->fields.treasureDeviceId;
  this->fields.overwriteSvtVoiceId = v22->fields.overwriteSvtVoiceId;
  if ( !actor )
    goto LABEL_11;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  v22->fields.battleActor = (struct BattleActorControl_o *)Component_srcLineSprite;
  sub_B2C2F8(&v22->fields.battleActor, Component_srcLineSprite);
  actor = (UnityEngine_GameObject_o *)v22->fields.battleActor;
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = v22->fields.chrId,
        (actor = (UnityEngine_GameObject_o *)v22->fields.battleActor) == 0LL) )
  {
LABEL_11:
    sub_B2C434(actor, v24);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9596/*"NoblePhantasm/CutIns"*/, v26, 1, 0LL);
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
  System_Collections_Generic_List_bool__o *v47; // x24
  System_Collections_Generic_List_bool__o **p_ActorActiveList; // x23
  struct BattlePerformance_o *v49; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v51; // x8
  unsigned __int64 v52; // x21
  UnityEngine_Object_o *v53; // x24
  System_Collections_Generic_List_bool__o *v54; // x25
  BattleSequenceManager_o *Component_srcLineSprite; // x0
  const MethodInfo *v56; // x2
  struct BattlePerformance_o *v57; // x8
  struct UnityEngine_GameObject_array *v58; // x27
  __int64 v59; // x8
  unsigned __int64 v60; // x28
  UnityEngine_Object_o *v61; // x24
  BattleSequenceManager_o *v62; // x0
  const MethodInfo *v63; // x2
  unsigned int *v64; // x22
  unsigned int *v65; // x0
  struct BattlePerformance_o *v66; // x8
  struct UnityEngine_GameObject_array *v67; // x8
  __int64 v68; // x0
  const MethodInfo_2F2EA34 *v69; // x2
  bool v70; // w1
  System_Collections_Generic_List_bool__o *v71; // x25
  UnityEngine_GameObject_o *gameObject; // x21
  BattleSequenceManager_o *v73; // x22
  __int64 v74; // x1
  BattleSequenceManager_o *v75; // x23
  __int64 v76; // x1
  BattleSequenceManager_c *v77; // x0
  BattleSequenceManager_o *v78; // x23
  __int64 v79; // x1
  BattleSequenceManager_o *v80; // x23
  __int64 v81; // x1
  __int64 v82; // x1
  System_Collections_Hashtable_o *v83; // x0
  System_String_o *BgmName; // x0
  const MethodInfo *v85; // x2
  WellFired_USSequencer_o *v86; // x21
  struct UnityEngine_GameObject_array **p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v89; // x24
  System_Delegate_o *v90; // x0
  const MethodInfo *v91; // x2
  __int64 v92; // x0
  __int64 v93; // x0
  BattleSequenceManager_o *v94; // x0
  BattleActorControl_o *v95; // x1
  const MethodInfo *v96; // x2
  bool v97; // [xsp+Ch] [xbp-74h]
  System_Action_USSequencer__o *v98; // [xsp+10h] [xbp-70h]
  unsigned int **p_saveWaitEnemy; // [xsp+18h] [xbp-68h]
  int v100; // [xsp+24h] [xbp-5Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+28h] [xbp-58h] BYREF
  int v102; // [xsp+2Ch] [xbp-54h] BYREF

  v7 = this;
  if ( (byte_4184E55 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_B2C35C(&BattleSequenceManager_TypeInfo, v8);
    sub_B2C35C(&CommonUI_TypeInfo, v9);
    sub_B2C35C(&FSUtility_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_bool___ctor___67301528, v16);
    sub_B2C35C(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_B2C35C(&object___TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v21);
    sub_B2C35C(&float_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v23);
    sub_B2C35C(&StringLiteral_12857/*"ShowNobleInfo"*/, v24);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v25);
    sub_B2C35C(&StringLiteral_9941/*"OnChangeBgmVolume"*/, v26);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v27);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v28);
    sub_B2C35C(&StringLiteral_2769/*"Battle2D"*/, v29);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v30);
    this = (BattleSequenceManager_o *)sub_B2C35C(&iTween_TypeInfo, v31);
    byte_4184E55 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_128;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_128;
  v34 = sub_B2C374(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v34;
  p_saveWaitEnemy = (unsigned int **)&v7->fields.saveWaitEnemy;
  sub_B2C2F8(&v7->fields.saveWaitEnemy, v34);
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
        (System_String_o *)StringLiteral_12857/*"ShowNobleInfo"*/,
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
    v43 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v43), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_128;
    v45 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v46 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v46) | v45, 0LL);
    v47 = (System_Collections_Generic_List_bool__o *)sub_B2C42C(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v47,
      (const MethodInfo_2F2DCD0 *)Method_System_Collections_Generic_List_bool___ctor___67301528);
    v7->fields.ActorActiveList = v47;
    p_ActorActiveList = &v7->fields.ActorActiveList;
    sub_B2C2F8(&v7->fields.ActorActiveList, v47);
    v49 = v7->fields.performance;
    if ( !v49 )
      goto LABEL_128;
    p_actorlist = v49->fields.p_actorlist;
    v97 = isDemoMode;
    v98 = callback;
    if ( !p_actorlist )
      goto LABEL_128;
    v51 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      while ( v52 < (unsigned int)v51 )
      {
        v53 = (UnityEngine_Object_o *)p_actorlist->m_Items[v52];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
        v54 = *p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v53 )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v53, 0LL);
          if ( !v54 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            v54,
            (unsigned __int8)this & 1,
            (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
          Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)v53,
                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            Component_srcLineSprite,
            (BattleActorControl_o *)Component_srcLineSprite,
            v56);
        }
        else
        {
          if ( !v54 )
            goto LABEL_128;
          System_Collections_Generic_List_bool___Add(
            *p_ActorActiveList,
            0,
            (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__);
        }
        LODWORD(v51) = p_actorlist->max_length;
        if ( (__int64)++v52 >= (int)v51 )
          goto LABEL_47;
      }
LABEL_129:
      v92 = sub_B2C460(this);
      sub_B2C400(v92, 0LL);
    }
LABEL_47:
    v57 = v7->fields.performance;
    if ( !v57 )
      goto LABEL_128;
    v58 = v57->fields.e_actorlist;
    if ( !v58 )
      goto LABEL_128;
    v59 = *(_QWORD *)&v58->max_length;
    if ( (int)v59 >= 1 )
    {
      v60 = 0LL;
      while ( v60 < (unsigned int)v59 )
      {
        v61 = (UnityEngine_Object_o *)v58->m_Items[v60];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_128;
          v62 = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)v61,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(v62, (BattleActorControl_o *)v62, v63);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v61,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_128;
          this = *(BattleSequenceManager_o **)&this[1].fields.testNpPer;
          if ( !this )
            goto LABEL_128;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v64 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_128;
            this = (BattleSequenceManager_o *)sub_B2C41C(v61, *(_QWORD *)(*(_QWORD *)v64 + 64LL));
            if ( !this )
              goto LABEL_130;
            if ( v60 >= v64[6] )
              goto LABEL_129;
            v65 = &v64[2 * v60];
            *((_QWORD *)v65 + 4) = v61;
            sub_B2C2F8(v65 + 8, v61);
            v66 = v7->fields.performance;
            if ( !v66 )
              goto LABEL_128;
            v67 = v66->fields.e_actorlist;
            if ( !v67 )
              goto LABEL_128;
            if ( v60 >= v67->max_length )
              goto LABEL_129;
            v68 = (__int64)v67 + 8 * v60;
            *(_QWORD *)(v68 + 32) = 0LL;
            sub_B2C2F8(v68 + 32, 0LL);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v61, 0, 0LL);
            this = (BattleSequenceManager_o *)*p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_128;
            v69 = (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__;
            v70 = 1;
          }
          else
          {
            v71 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v61,
                                                0LL);
            if ( !v71 )
              goto LABEL_128;
            v69 = (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__;
            v70 = (unsigned __int8)this & 1;
            this = (BattleSequenceManager_o *)v71;
          }
        }
        else
        {
          this = (BattleSequenceManager_o *)*p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_128;
          v69 = (const MethodInfo_2F2EA34 *)Method_System_Collections_Generic_List_bool__Add__;
          v70 = 0;
        }
        System_Collections_Generic_List_bool___Add((System_Collections_Generic_List_bool__o *)this, v70, v69);
        LODWORD(v59) = v58->max_length;
        if ( (__int64)++v60 >= (int)v59 )
          goto LABEL_73;
      }
      goto LABEL_129;
    }
LABEL_73:
    if ( !v97 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_B2C374(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_128;
    v73 = this;
    this = (BattleSequenceManager_o *)StringLiteral_18914/*"from"*/;
    if ( StringLiteral_18914/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_B2C41C(StringLiteral_18914/*"from"*/, v73->klass->_1.element_class);
      if ( !this )
        goto LABEL_130;
      v74 = StringLiteral_18914/*"from"*/;
    }
    else
    {
      v74 = 0LL;
    }
    if ( !LODWORD(v73->fields.sequenceManager) )
      goto LABEL_129;
    *(_QWORD *)&v73->fields.servantId = v74;
    sub_B2C2F8(&v73->fields.servantId, v74);
    v102 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
    v75 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_B2C41C(this, v73->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v73->fields.sequenceManager) <= 1 )
        goto LABEL_129;
      *(_QWORD *)&v73->fields.testNpPer = v75;
      sub_B2C2F8(&v73->fields.testNpPer, v75);
      this = (BattleSequenceManager_o *)StringLiteral_22714/*"to"*/;
      if ( StringLiteral_22714/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_B2C41C(StringLiteral_22714/*"to"*/, v73->klass->_1.element_class);
        if ( !this )
          goto LABEL_130;
        v76 = StringLiteral_22714/*"to"*/;
      }
      else
      {
        v76 = 0LL;
      }
      if ( LODWORD(v73->fields.sequenceManager) <= 2 )
        goto LABEL_129;
      v73->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v76;
      sub_B2C2F8(&v73->fields.FadeTargetPanelIndexs, v76);
      v77 = BattleSequenceManager_TypeInfo;
      if ( (BYTE3(BattleSequenceManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v77 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v77->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v78 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_B2C41C(this, v73->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v73->fields.sequenceManager) <= 3 )
          goto LABEL_129;
        *(_QWORD *)&v73->fields.IsPlaying = v78;
        sub_B2C2F8(&v73->fields.IsPlaying, v78);
        this = (BattleSequenceManager_o *)StringLiteral_22677/*"time"*/;
        if ( StringLiteral_22677/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_B2C41C(StringLiteral_22677/*"time"*/, v73->klass->_1.element_class);
          if ( !this )
            goto LABEL_130;
          v79 = StringLiteral_22677/*"time"*/;
        }
        else
        {
          v79 = 0LL;
        }
        if ( LODWORD(v73->fields.sequenceManager) <= 4 )
          goto LABEL_129;
        v73->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v79;
        sub_B2C2F8(&v73->fields.ReleaseSoundNames, v79);
        v100 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v100);
        v80 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_B2C41C(this, v73->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v73->fields.sequenceManager) <= 5 )
            goto LABEL_129;
          v73->fields.performance = (struct BattlePerformance_o *)v80;
          sub_B2C2F8(&v73->fields.performance, v80);
          this = (BattleSequenceManager_o *)StringLiteral_21272/*"onupdate"*/;
          if ( StringLiteral_21272/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v73->klass->_1.element_class);
            if ( !this )
              goto LABEL_130;
            v81 = StringLiteral_21272/*"onupdate"*/;
          }
          else
          {
            v81 = 0LL;
          }
          if ( LODWORD(v73->fields.sequenceManager) <= 6 )
            goto LABEL_129;
          v73->fields.seqObject = (struct UnityEngine_GameObject_o *)v81;
          sub_B2C2F8(&v73->fields.seqObject, v81);
          this = (BattleSequenceManager_o *)StringLiteral_9941/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9941/*"OnChangeBgmVolume"*/ )
          {
            v82 = 0LL;
LABEL_112:
            if ( LODWORD(v73->fields.sequenceManager) <= 7 )
              goto LABEL_129;
            v73->fields.actor = (struct UnityEngine_GameObject_o *)v82;
            sub_B2C2F8(&v73->fields.actor, v82);
            if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v83 = iTween__Hash((System_Object_array *)v73, 0LL);
            iTween__ValueTo(gameObject, v83, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_B2C2F8(&v7->fields.BackupBgmName, BgmName);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v85);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v86 = (WellFired_USSequencer_o *)this;
                    p_playerActors = &this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v89 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_B2C42C(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v89,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v90 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v89, 0LL);
                    if ( v90
                      && (WellFired_USSequencer_PlaybackDelegate_c *)v90->klass != WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                    {
                      v94 = (BattleSequenceManager_o *)sub_B2C728(v90);
                      BattleSequenceManager__PrevPlayTargetActorProc(v94, v95, v96);
                    }
                    else
                    {
                      v86->fields.PlaybackFinished = (struct WellFired_USSequencer_PlaybackDelegate_o *)v90;
                      sub_B2C2F8(p_playerActors, v90);
                      v7->fields.OnCompleteActorCallback = v98;
                      sub_B2C2F8(&v7->fields.OnCompleteActorCallback, v98);
                      WellFired_USSequencer__Play(v86, 0LL);
                      if ( (BYTE3(CommonUI_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !CommonUI_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                      }
                      if ( CommonUI__GetForceObi_16_9(0LL) )
                        BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v91);
                    }
                    return;
                  }
                }
              }
            }
LABEL_128:
            sub_B2C434(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_B2C41C(StringLiteral_9941/*"OnChangeBgmVolume"*/, v73->klass->_1.element_class);
          if ( this )
          {
            v82 = StringLiteral_9941/*"OnChangeBgmVolume"*/;
            goto LABEL_112;
          }
        }
      }
    }
LABEL_130:
    v93 = sub_B2C454();
    sub_B2C400(v93, 0LL);
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

  if ( (byte_4184E6E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&Voice_TypeInfo, v6);
    byte_4184E6E = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_35;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              actor,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    if ( LOBYTE(Component_srcLineSprite[3].fields.mcMyTrans) )
      return;
    v9 = *(_QWORD *)&Component_srcLineSprite[3].fields.m_CachedPtr;
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)actor,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                      v24 = sub_B2C460(MasterData_WarQuestSelectionMaster);
                      sub_B2C400(v24, 0LL);
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
              sub_B2C434(actor, method);
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

  if ( (byte_4184E4C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15905/*"_"*/, voiceMaster);
    byte_4184E4C = 1;
  }
  FlagRequestNumber = System_String__Concat_44305532((System_String_o *)StringLiteral_15905/*"_"*/, labelName, 0LL);
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
    sub_B2C434(FlagRequestNumber, v10);
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
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4184E69 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_4184E69 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleTargetList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v8);
    BattleSequenceManager_BattleTarget__restoreTransform((BattleSequenceManager_BattleTarget_o *)v9.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
LABEL_11:
    sub_B2C434(battleTargetList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)battleTargetList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
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

  if ( (byte_4184E50 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2762/*"Battle/Prefab/"*/, v13);
    byte_4184E50 = 1;
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
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v17 = System_String__Concat_44305532((System_String_o *)StringLiteral_2762/*"Battle/Prefab/"*/, name, 0LL);
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
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_IEnumerator_c *v18; // x8
  unsigned __int64 v19; // x10
  System_Collections_IEnumerator_c **v20; // x11
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v28; // x1
  WellFired_USTimelineContainer_o *v29; // x21
  System_String_o *v30; // x22
  System_String_o *v31; // x1
  int v32; // w8
  __int64 v33; // x0
  __int64 v34; // x3
  __int64 v35; // x8
  __int64 v36; // x19
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  int v41; // [xsp+0h] [xbp-50h]

  if ( (byte_4184E51 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_B2C35C(&StringLiteral_872/*"/"*/, v9);
    byte_4184E51 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_B2C434(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 2;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_17:
      v21 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v17);
    }
    v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                       Enumerator,
                                       *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_39;
    v24 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24
      || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[v24 - 1] != UnityEngine_Transform_TypeInfo )
    {
      v22 = (UnityEngine_Component_o *)sub_B2C728(v22);
LABEL_39:
      sub_B2C434(v22, v23);
    }
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v26);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                gameObject,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v29 = (WellFired_USTimelineContainer_o *)Component_srcLineSprite;
    if ( !Component_srcLineSprite )
      sub_B2C434(0LL, v28);
    v30 = *(System_String_o **)&Component_srcLineSprite->fields.mtIsUpdate;
    v31 = System_String__Concat_44305532((System_String_o *)StringLiteral_872/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(v30, v31, 0LL) )
    {
      v32 = 93;
      goto LABEL_27;
    }
  }
  v29 = 0LL;
  v32 = 91;
LABEL_27:
  v41 = v32;
  v33 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v33 )
  {
    v35 = *(_QWORD *)v33;
    v36 = v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_32;
      }
      v39 = v35 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_32:
      v39 = sub_AC5258(v33, System_IDisposable_TypeInfo, 0LL, v34);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
  }
  if ( v41 == 91 )
    return 0LL;
  return v29;
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

  if ( (byte_4184E6B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_4184E6B = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    playAudioSyncGroupIndexDict,
    (System_Xml_XmlQualifiedName_o *)groupName,
    value,
    (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_B2C434(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)playAudioSyncGroupIndexDict,
    (WarBoardAIRoute_RouteData_o *)playSoundId,
    (const MethodInfo_2D8CC18 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x21
  struct UnityEngine_GameObject_o *sequenceManager; // x23
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x23
  struct UnityEngine_Camera_o *actorCamera; // x1
  __int64 v91; // x27
  __int64 v92; // x23
  struct UnityEngine_Camera_o *effectCamera; // x1
  struct UnityEngine_Camera_o *cutInCamera; // x1
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  __int64 v97; // x27
  Il2CppObject *CutInPrefab; // x23
  float v99; // s8
  float y; // s9
  float z; // s10
  float v102; // s4
  float v103; // s5
  float v104; // s6
  float w; // s7
  float v106; // s4
  float v107; // s5
  float v108; // s6
  Il2CppObject *v109; // x0
  const MethodInfo *v110; // x1
  const MethodInfo *v111; // x2
  int v112; // w8
  __int64 v113; // x22
  int v114; // w19
  UnityEngine_Object_o *v115; // x27
  __int64 v116; // x8
  __int64 v117; // x26
  unsigned __int64 v118; // x25
  __int64 v119; // x28
  System_String_o *name; // x0
  __int64 v121; // x8
  int32_t v122; // w23
  System_String_o *v123; // x0
  __int64 v124; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v125; // x1
  System_String_o *v126; // x0
  __int64 v127; // x9
  struct UnityEngine_Camera_o *v128; // x1
  UnityEngine_Transform_o *parent; // x0
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  __int64 v131; // x0
  int32_t treasureDeviceId; // w27
  int32_t limitCount; // w24
  UnityEngine_GameObject_o *Manager__loadNoblePhantasmEffect; // x23
  __int64 v135; // x9
  __int64 v136; // x28
  struct UnityEngine_Camera_o *v137; // x1
  UnityEngine_Transform_o *v138; // x23
  int v139; // s0
  System_String_o *v142; // x0
  __int64 v143; // x9
  System_String_o **v144; // x23
  System_String_o *v145; // x0
  System_String_o *v146; // x0
  __int64 v147; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v148; // x23
  BattleSequenceManager_o *v149; // x0
  const MethodInfo *v150; // x3
  WellFired_USTimelineContainer_o *v151; // x0
  Il2CppObject *current; // x23
  _BOOL8 v153; // x0
  __int64 v154; // x1
  void *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v156; // x1
  void *v157; // x24
  int v158; // w8
  int i; // w23
  WellFired_USTimelineEvent_o *v160; // x0
  _QWORD *v161; // x25
  __int64 v162; // x8
  unsigned __int64 v163; // x28
  __int64 v164; // x26
  System_String_o *v165; // x0
  __int64 v166; // x9
  __int64 v167; // x0
  __int64 v168; // x1
  UnityEngine_Component_o *v169; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v171; // x1
  __int64 v172; // x3
  System_Collections_IEnumerator_o *Enumerator; // x24
  System_Collections_IEnumerator_c *v174; // x8
  unsigned __int64 v175; // x10
  System_Collections_IEnumerator_c **v176; // x11
  __int64 v177; // x0
  UnityEngine_Component_o *v178; // x0
  __int64 v179; // x1
  __int64 v180; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v182; // x1
  srcLineSprite_o *v183; // x0
  __int64 v184; // x1
  srcLineSprite_o *v185; // x25
  System_String_o *v186; // x0
  __int64 v187; // x1
  System_String_o *v188; // x0
  __int64 v189; // x1
  System_String_o *v190; // x0
  System_String_o *v191; // x0
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v193; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v196; // x3
  __int64 v197; // x0
  __int64 v198; // x3
  __int64 v199; // x8
  __int64 v200; // x24
  unsigned __int64 v201; // x10
  int *v202; // x11
  __int64 v203; // x0
  __int64 v204; // x1
  __int64 v205; // x3
  System_Collections_IEnumerator_o *v206; // x23
  System_Collections_IEnumerator_c *v207; // x8
  unsigned __int64 v208; // x10
  int32_t *v209; // x11
  BattleSequenceManager_o *v210; // x24
  __int64 v211; // x0
  __int64 v212; // x3
  System_Collections_IEnumerator_c *v213; // x8
  unsigned __int64 v214; // x10
  System_Collections_IEnumerator_c **v215; // x11
  __int64 v216; // x0
  UnityEngine_Component_o *v217; // x0
  __int64 v218; // x1
  __int64 v219; // x9
  UnityEngine_GameObject_o *v220; // x0
  __int64 v221; // x1
  srcLineSprite_o *v222; // x0
  __int64 v223; // x1
  WellFired_USTimelineContainer_o *v224; // x24
  System_String_o *v225; // x0
  __int64 v226; // x1
  System_String_o *affectedObjectPath; // x0
  System_String_o *v228; // x25
  int v229; // w26
  System_String_o *v230; // x0
  __int64 v231; // x1
  System_String_o *v232; // x0
  char v233; // w27
  System_String_o *v234; // x0
  __int64 v235; // x1
  System_String_o *v236; // x0
  UnityEngine_Component_o *v237; // x0
  UnityEngine_Transform_o *v238; // x0
  System_String_o *v239; // x0
  __int64 v240; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v242; // x1
  UnityEngine_Transform_o *v243; // x25
  System_String_o *v244; // x0
  System_String_o *v245; // x0
  UnityEngine_Transform_o *v246; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v248; // x1
  System_String_o *v249; // x0
  bool v250; // w0
  __int64 v251; // x1
  __int64 *v252; // x8
  System_String_o *v253; // x0
  bool v254; // w0
  System_String_o *v255; // x26
  UnityEngine_GameObject_o *v256; // x0
  System_String_o *v257; // x25
  UnityEngine_Transform_o *v258; // x0
  __int64 v259; // x1
  UnityEngine_Object_o *v260; // x27
  _BOOL8 v261; // x0
  __int64 v262; // x1
  __int64 v263; // x1
  __int64 v264; // x3
  System_Collections_IEnumerator_o *v265; // x27
  System_Collections_IEnumerator_c *v266; // x8
  unsigned __int64 v267; // x10
  int32_t *v268; // x11
  __int64 v269; // x0
  __int64 v270; // x3
  System_Collections_IEnumerator_c *v271; // x8
  unsigned __int64 v272; // x10
  System_Collections_IEnumerator_c **v273; // x11
  __int64 v274; // x0
  UnityEngine_Component_o *v275; // x0
  __int64 v276; // x1
  UnityEngine_Object_o *v277; // x28
  __int64 v278; // x9
  UnityEngine_Object_o *v279; // x0
  __int64 v280; // x1
  System_String_o *v281; // x0
  __int64 v282; // x1
  System_String_o *v283; // x0
  int v284; // w8
  System_String_o *v285; // x0
  _BOOL8 v286; // x0
  const MethodInfo *v287; // x2
  __int64 v288; // x1
  __int64 v289; // x1
  int32_t v290; // w26
  __int64 v291; // x0
  __int64 v292; // x3
  __int64 v293; // x27
  __int64 v294; // x8
  unsigned __int64 v295; // x10
  int *v296; // x11
  __int64 v297; // x0
  System_String_o *v298; // x27
  System_String_o *v299; // x0
  __int64 v300; // x1
  System_String_o *v301; // x27
  System_Char_array *v302; // x0
  System_String_array *v303; // x0
  __int64 v304; // x1
  __int64 v305; // x1
  System_String_o *v306; // x27
  UnityEngine_GameObject_o *v307; // x0
  __int64 v308; // x1
  UnityEngine_Transform_o *v309; // x26
  System_String_o *v310; // x0
  System_String_o *v311; // x0
  __int64 v312; // x1
  System_String_o *v313; // x0
  UnityEngine_Transform_o *v314; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v315; // x26
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v316; // x0
  _BOOL8 v317; // x0
  __int64 v318; // x1
  System_String_o *v319; // x0
  __int64 v320; // x1
  System_String_o *v321; // x1
  _BOOL8 v322; // x0
  __int64 v323; // x1
  BattleBuffData_o *v324; // x3
  const MethodInfo *v325; // x5
  __int64 v326; // x8
  int32_t v327; // w4
  __int64 v328; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v329; // x0
  __int64 v330; // x0
  __int64 v331; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v333; // x1
  UnityEngine_Transform_o *v334; // x0
  UnityEngine_Transform_o *v335; // x0
  __int64 v336; // x1
  float v337; // s8
  float v338; // s9
  float v339; // s10
  __int64 v340; // x1
  UnityEngine_Transform_o *v341; // x27
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v343; // x0
  UnityEngine_Transform_o *v344; // x0
  __int64 v345; // x1
  BattleSequenceManager_o *v346; // x0
  const MethodInfo *v347; // x4
  int32_t v348; // w25
  UnityEngine_Transform_o *v349; // x0
  __int64 v350; // x1
  UnityEngine_Transform_o *v351; // x0
  System_String_o *v352; // x0
  __int64 v353; // x1
  System_String_o *v354; // x0
  System_String_o *v355; // x0
  const MethodInfo *v356; // x3
  int32_t v357; // w2
  const MethodInfo *v358; // x3
  WarBoardControlPlayTalkUiComponent_array *EventCount; // x0
  __int64 v360; // x1
  WarBoardControlPlayTalkUiComponent_array *v361; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v364; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v366; // x0
  __int64 v367; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v368; // x27
  System_String_o *v369; // x0
  __int64 v370; // x9
  _BOOL8 v371; // x0
  __int64 v372; // x1
  UnityEngine_Component_o *v373; // x0
  UnityEngine_Transform_o *v374; // x0
  int32_t layer; // w25
  __int64 v376; // x3
  __int64 v377; // x8
  __int64 v378; // x23
  unsigned __int64 v379; // x10
  int *v380; // x11
  __int64 v381; // x0
  __int64 v382; // x1
  __int64 v383; // x8
  UnityEngine_Object_o *v384; // x21
  struct BattlePerformance_o *v385; // x8
  UnityEngine_Object_o *data; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t chrId; // w22
  VoiceMaster_o *v389; // x21
  System_String_o *FileName; // x0
  const MethodInfo *v391; // x4
  int32_t v392; // w22
  System_String_o *v393; // x0
  const MethodInfo *v394; // x4
  __int64 v395; // x8
  int v396; // w20
  BalanceConfig_c *v397; // x0
  int32_t v398; // w20
  System_String_o *v399; // x0
  const MethodInfo *v400; // x4
  __int64 v401; // x0
  __int64 v402; // x0
  __int64 v403; // x0
  __int64 v404; // x0
  __int64 v405; // x0
  __int64 v406; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *item; // [xsp+0h] [xbp-140h]
  System_String_o *itema; // [xsp+0h] [xbp-140h]
  WellFired_USSequencer_o *seq; // [xsp+8h] [xbp-138h]
  char seqa; // [xsp+8h] [xbp-138h]
  __int64 v411; // [xsp+10h] [xbp-130h]
  int v412; // [xsp+10h] [xbp-130h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-128h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v414; // [xsp+20h] [xbp-120h]
  BattleSequenceManager_o *v415; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_Enumerator_T__o v416[2]; // [xsp+30h] [xbp-110h] BYREF
  int v417; // [xsp+68h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o m; // [xsp+70h] [xbp-D0h] BYREF
  int32_t targetPosIndex; // [xsp+8Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v420; // [xsp+90h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v421; // [xsp+B0h] [xbp-90h] BYREF
  int32_t result[2]; // [xsp+D8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v425; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4184E4A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, callback);
    sub_B2C35C(&char___TypeInfo, v7);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v8);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoiceMaster___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v19);
    sub_B2C35C(&System_GC_TypeInfo, v20);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v21);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v22);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v23);
    sub_B2C35C(&System_IDisposable_TypeInfo, v24);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v35);
    sub_B2C35C(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v36);
    sub_B2C35C(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v37);
    sub_B2C35C(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v38);
    sub_B2C35C(&NGUITools_TypeInfo, v39);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v40);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450632, v41);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v42);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v43);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v45);
    sub_B2C35C(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v46);
    sub_B2C35C(&WellFired_USFGOAttachToParentEvent_TypeInfo, v47);
    sub_B2C35C(&WellFired_USFGOChangeBgEvent_TypeInfo, v48);
    sub_B2C35C(&WellFired_USFGOPlayCutInEvent_TypeInfo, v49);
    sub_B2C35C(&WellFired_USFGOSetCameraEvent_TypeInfo, v50);
    sub_B2C35C(&Voice_TypeInfo, v51);
    sub_B2C35C(&StringLiteral_880/*"/Actor/chr/"*/, v52);
    sub_B2C35C(&StringLiteral_2771/*"BattleBG"*/, v53);
    sub_B2C35C(&StringLiteral_887/*"/BattleActors/"*/, v54);
    sub_B2C35C(&StringLiteral_2773/*"BattleCamera"*/, v55);
    sub_B2C35C(&StringLiteral_2775/*"BattleCutIn"*/, v56);
    sub_B2C35C(&StringLiteral_14767/*"USFGOSetCameraEvent"*/, v57);
    sub_B2C35C(&StringLiteral_1830/*"Actor"*/, v58);
    sub_B2C35C(&StringLiteral_16881/*"body_level_"*/, v59);
    sub_B2C35C(&StringLiteral_882/*"/Actor/chr/weapon_level_"*/, v60);
    sub_B2C35C(&StringLiteral_881/*"/Actor/chr/body_level_"*/, v61);
    sub_B2C35C(&StringLiteral_6338/*"FGOSequenceManager"*/, v62);
    sub_B2C35C(&StringLiteral_884/*"/AllEffects/"*/, v63);
    sub_B2C35C(&StringLiteral_17421/*"chr(Clone)"*/, v64);
    sub_B2C35C(&StringLiteral_3482/*"Cameras/BattleCamera"*/, v65);
    sub_B2C35C(&StringLiteral_14765/*"USFGOChangeBgEvent"*/, v66);
    sub_B2C35C(&StringLiteral_899/*"/BattleCamera"*/, v67);
    sub_B2C35C(&StringLiteral_902/*"/CutIns/"*/, v68);
    sub_B2C35C(&StringLiteral_2769/*"Battle2D"*/, v69);
    sub_B2C35C(&StringLiteral_901/*"/Cameras/BattleCamera"*/, v70);
    sub_B2C35C(&StringLiteral_16339/*"animCamLoc"*/, v71);
    sub_B2C35C(&StringLiteral_23260/*"weapon_level_"*/, v72);
    sub_B2C35C(&StringLiteral_609/*"(Clone)"*/, v73);
    sub_B2C35C(&StringLiteral_14764/*"USFGOAttachToParentEvent"*/, v74);
    sub_B2C35C(&StringLiteral_1/*""*/, v75);
    sub_B2C35C(&StringLiteral_879/*"/Actor/chr"*/, v76);
    sub_B2C35C(&StringLiteral_14763/*"USFGOAnimationCameraEvent"*/, v77);
    sub_B2C35C(&StringLiteral_953/*"0"*/, v78);
    sub_B2C35C(&StringLiteral_14766/*"USFGOPlayCutInEvent"*/, v79);
    byte_4184E4A = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v421, 0, sizeof(v421));
  memset(&v420, 0, sizeof(v420));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  v417 = 0;
  seqObject = (__int64)this->fields.seqObject;
  if ( !seqObject )
    goto LABEL_437;
  Component_srcLineSprite = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)seqObject,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v83 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  Component_srcLineSprite,
                                  (WellFired_USSequencer_o *)Component_srcLineSprite,
                                  (System_String_o *)StringLiteral_1830/*"Actor"*/,
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
          (System_String_o *)StringLiteral_6338/*"FGOSequenceManager"*/,
          v85);
  v87 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v87,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v414 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v414,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_437;
  item = (EventMissionProgressRequest_Argument_ProgressData_o *)v83;
  seq = (WellFired_USSequencer_o *)Component_srcLineSprite;
  x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)seqObject,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v415 = this;
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
                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v86, 0LL);
    if ( !seqObject )
      goto LABEL_437;
    seqObject = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_437;
    actorCamera = this->fields.actorCamera;
    v91 = seqObject;
    *(_QWORD *)(seqObject + 24) = actorCamera;
    v92 = seqObject + 24;
    sub_B2C2F8(seqObject + 24, actorCamera);
    effectCamera = this->fields.effectCamera;
    *(_QWORD *)(v92 + 8) = effectCamera;
    sub_B2C2F8(v92 + 8, effectCamera);
    cutInCamera = this->fields.cutInCamera;
    *(_QWORD *)(v92 + 16) = cutInCamera;
    sub_B2C2F8(v92 + 16, cutInCamera);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_437;
    fadeObject = performance->fields.fadeObject;
    *(_QWORD *)(v91 + 88) = fadeObject;
    v97 = v91 + 88;
    sub_B2C2F8(v97, fadeObject);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    zero = UnityEngine_Vector3__get_zero(0LL);
    v99 = zero.fields.x;
    y = zero.fields.y;
    z = zero.fields.z;
    identity = UnityEngine_Quaternion__get_identity(0LL);
    v102 = identity.fields.x;
    v103 = identity.fields.y;
    v104 = identity.fields.z;
    w = identity.fields.w;
    identity.fields.x = v99;
    identity.fields.y = y;
    identity.fields.z = z;
    identity.fields.w = v102;
    v106 = v103;
    v107 = v104;
    v108 = w;
    v109 = UnityEngine_Object__Instantiate_object_(
             CutInPrefab,
             *(UnityEngine_Vector3_o *)&identity.fields.x,
             *(UnityEngine_Quaternion_o *)&identity.fields.w,
             (const MethodInfo_20960C4 *)Method_UnityEngine_Object_Instantiate_GameObject____67450632);
    *(_QWORD *)(v97 - 24) = v109;
    sub_B2C2F8(v97 - 24, v109);
    seqObject = *(_QWORD *)(v97 - 24);
    if ( !seqObject )
      goto LABEL_437;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v110);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v111);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                           (UnityEngine_Component_o *)v86,
                           1,
                           (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_437;
    v112 = *(_DWORD *)(seqObject + 24);
    v113 = seqObject;
    if ( v112 >= 1 )
    {
      v114 = 0;
      v115 = 0LL;
      v411 = seqObject;
      while ( 1 )
      {
        if ( v114 >= (unsigned int)v112 )
        {
LABEL_441:
          v403 = sub_B2C460(seqObject);
          sub_B2C400(v403, 0LL);
        }
        seqObject = *(_QWORD *)(v113 + 8LL * v114 + 32);
        if ( !seqObject )
          goto LABEL_437;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_437;
        v116 = *(_QWORD *)(seqObject + 24);
        v117 = seqObject;
        if ( (int)v116 >= 1 )
          break;
LABEL_95:
        v113 = v411;
        ++v114;
        v112 = *(_DWORD *)(v411 + 24);
        if ( v114 >= v112 )
          goto LABEL_96;
      }
      v118 = 0LL;
      while ( 1 )
      {
        if ( v118 >= (unsigned int)v116 )
          goto LABEL_441;
        v119 = *(_QWORD *)(v117 + 32 + 8 * v118);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v119, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v119 )
            goto LABEL_437;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v119, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14763/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v115, 0LL, 0LL) )
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
                v121 = *(_QWORD *)&x[17].fields.m_CachedPtr;
                if ( !v121 )
                  goto LABEL_437;
                v122 = *(_DWORD *)(v121 + 720);
              }
              else
              {
                v122 = 0;
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
                                                   (System_String_o *)StringLiteral_16339/*"animCamLoc"*/,
                                                   v122,
                                                   0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              seqObject = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this = v415;
              if ( !v415->fields.createdObjects )
LABEL_437:
                sub_B2C434(seqObject, callback);
              v115 = (UnityEngine_Object_o *)seqObject;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v415->fields.createdObjects,
                (EventMissionProgressRequest_Argument_ProgressData_o *)seqObject,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
            }
            v135 = *(&WellFired_USFGOAnimationCameraEvent_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v119 + 300LL) < (unsigned int)v135
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v119 + 200LL) + 8 * v135 - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_442:
              v217 = (UnityEngine_Component_o *)sub_B2C728(v119);
LABEL_443:
              v178 = (UnityEngine_Component_o *)sub_B2C728(v217);
LABEL_444:
              v366 = (UnityEngine_Object_o *)sub_B2C728(v178);
LABEL_445:
              sub_B2C434(v366, v367);
            }
            *(_QWORD *)(v119 + 48) = v115;
            v136 = v119 + 48;
            sub_B2C2F8(v136, v115);
            v137 = this->fields.actorCamera;
            *(_QWORD *)(v136 + 8) = v137;
            sub_B2C2F8(v136 + 8, v137);
            *(_BYTE *)(v136 + 36) = 0;
            if ( !v115 )
              goto LABEL_437;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v115, 0LL);
            if ( !this->fields.actor )
              goto LABEL_437;
            v138 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_437;
            *(UnityEngine_Vector3_o *)&v139 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v138 )
              goto LABEL_437;
            UnityEngine_Transform__set_position(v138, *(UnityEngine_Vector3_o *)&v139, 0LL);
          }
          else
          {
            v123 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v119, 0LL);
            seqObject = System_String__op_Equality(v123, (System_String_o *)StringLiteral_14766/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v414 )
                goto LABEL_437;
              v124 = *(&WellFired_USFGOPlayCutInEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v119 + 300LL) >= (unsigned int)v124 )
              {
                if ( *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v119 + 200LL) + 8 * v124 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo )
                  v125 = (EventMissionProgressRequest_Argument_ProgressData_o *)v119;
                else
                  v125 = 0LL;
              }
              else
              {
                v125 = 0LL;
              }
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v414,
                v125,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
              goto LABEL_94;
            }
            v126 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v119, 0LL);
            if ( System_String__op_Equality(v126, (System_String_o *)StringLiteral_14767/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v127 = *(&WellFired_USFGOSetCameraEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v119 + 300LL) < (unsigned int)v127
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v119 + 200LL) + 8 * v127 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v128 = this->fields.actorCamera;
              *(_QWORD *)(v119 + 48) = v128;
              sub_B2C2F8(v119 + 48, v128);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_437;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_437;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v119 + 56) = parent;
              changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)parent;
              v131 = v119 + 56;
              goto LABEL_89;
            }
            v142 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v119, 0LL);
            seqObject = System_String__op_Equality(v142, (System_String_o *)StringLiteral_14765/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v143 = *(&WellFired_USFGOChangeBgEvent_TypeInfo->_2.bitflags2 + 1);
              if ( *(unsigned __int8 *)(*(_QWORD *)v119 + 300LL) < (unsigned int)v143
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v119 + 200LL) + 8 * v143 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_442;
              }
              v144 = (System_String_o **)(v119 + 56);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v119 + 56),
                     (System_String_o *)StringLiteral_953/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v144, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v145 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v144 = v145;
                sub_B2C2F8(v119 + 56, v145);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_437;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v146 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v119 + 64) = v146;
                v147 = v119 + 64;
                sub_B2C2F8(v147, v146);
                changeFieldAfter = this->fields.changeFieldAfter;
                v131 = v147 + 64;
                *(_QWORD *)(v147 + 64) = changeFieldAfter;
LABEL_89:
                sub_B2C2F8(v131, changeFieldAfter);
              }
            }
          }
        }
LABEL_94:
        LODWORD(v116) = *(_DWORD *)(v117 + 24);
        if ( (__int64)++v118 >= (int)v116 )
          goto LABEL_95;
      }
    }
  }
LABEL_96:
  v148 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v148,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v148 )
    goto LABEL_437;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v148,
    item,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  v151 = BattleSequenceManager__searchTimeline(v149, seq, (System_String_o *)StringLiteral_3482/*"Cameras/BattleCamera"*/, v150);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v148,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v151,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_USTimelineContainer__Add__);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v416,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v148,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v421 = v416[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v421,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v421.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v153 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v153 )
    {
      if ( !current )
        sub_B2C434(v153, v154);
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                  (UnityEngine_Component_o *)current,
                                                                  1,
                                                                  (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v157 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
        sub_B2C434(0LL, v156);
      v158 = *((_DWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 6);
      if ( v158 >= 1 )
      {
        for ( i = 0; i < v158; ++i )
        {
          if ( i >= (unsigned int)v158 )
          {
            v402 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
            sub_B2C400(v402, 0LL);
          }
          v160 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v157 + i + 4);
          if ( !v160 )
            sub_B2C434(0LL, v156);
          ComponentsInChildren_WarBoardControlPlayTalkUiComponent = WellFired_USTimelineEvent__get_Events(v160, 0LL);
          v161 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
          if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
            sub_B2C434(0LL, v156);
          v162 = *((_QWORD *)ComponentsInChildren_WarBoardControlPlayTalkUiComponent + 3);
          if ( (int)v162 >= 1 )
          {
            v163 = 0LL;
            do
            {
              if ( v163 >= (unsigned int)v162 )
              {
                v401 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
                sub_B2C400(v401, 0LL);
              }
              v164 = v161[v163 + 4];
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)UnityEngine_Object__op_Equality(
                                                                                  (UnityEngine_Object_o *)v164,
                                                                                  0LL,
                                                                                  0LL);
              if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) == 0 )
              {
                if ( !v164 )
                  sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v156);
                v165 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v164, 0LL);
                ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (void *)System_String__op_Equality(
                                                                                    v165,
                                                                                    (System_String_o *)StringLiteral_14764/*"USFGOAttachToParentEvent"*/,
                                                                                    0LL);
                if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0 )
                {
                  v166 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v164 + 300LL) < (unsigned int)v166
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v164 + 200LL) + 8 * v166 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v167 = sub_B2C728(v164);
LABEL_435:
                    sub_B2C434(v167, v168);
                  }
                  v167 = System_String__op_Equality(
                           *(System_String_o **)(v164 + 72),
                           (System_String_o *)StringLiteral_2773/*"BattleCamera"*/,
                           0LL);
                  if ( (v167 & 1) != 0 )
                  {
                    v169 = (UnityEngine_Component_o *)v415->fields.actorCamera;
                    if ( !v169 )
                      sub_B2C434(0LL, v168);
                    transform = UnityEngine_Component__get_transform(v169, 0LL);
                    *(_QWORD *)(v164 + 56) = transform;
                    sub_B2C2F8(v164 + 56, transform);
                  }
                  else
                  {
                    if ( !v87 )
                      goto LABEL_435;
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v87,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v164,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              LODWORD(v162) = *((_DWORD *)v161 + 6);
              ++v163;
            }
            while ( (__int64)v163 < (int)v162 );
          }
          v158 = *((_DWORD *)v157 + 6);
        }
      }
    }
  }
  *((_DWORD *)&v416[1].fields.list + v417++) = 1008;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v421,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  if ( v417 && *((_DWORD *)&v416[0].fields.current + v417 + 1) == 1008 )
    --v417;
  seqObject = (__int64)seq;
  if ( !seq )
    goto LABEL_437;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v171);
  v412 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v193 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v193;
        p_offset += 4;
        if ( v193 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_157;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_157:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v172);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v174 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v175 = 0LL;
      v176 = (System_Collections_IEnumerator_c **)&v174->_1.interfaceOffsets->offset;
      while ( *(v176 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v175;
        v176 += 2;
        if ( v175 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_139;
      }
      v177 = (__int64)&v174->vtable[*(_DWORD *)v176 + 1].method;
    }
    else
    {
LABEL_139:
      v177 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v196);
    }
    v178 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v177)(
                                        Enumerator,
                                        *(_QWORD *)(v177 + 8));
    if ( !v178 )
      sub_B2C434(0LL, v179);
    v180 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v178->klass->_2.bitflags2 + 1) < (unsigned int)v180
      || (UnityEngine_Transform_c *)v178->klass->_2.typeHierarchy[v180 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_444;
    }
    gameObject = UnityEngine_Component__get_gameObject(v178, 0LL);
    if ( !gameObject )
      sub_B2C434(0LL, v182);
    v183 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             gameObject,
             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v185 = v183;
    if ( !v183 )
      sub_B2C434(0LL, v184);
    v186 = *(System_String_o **)&v183->fields.mtIsUpdate;
    if ( !v186 )
      sub_B2C434(0LL, v184);
    if ( System_String__StartsWith(v186, (System_String_o *)StringLiteral_887/*"/BattleActors/"*/, 0LL)
      && *(_QWORD *)&v185->fields.mtIsUpdate )
    {
      v188 = *(System_String_o **)&v185->fields.mtIsUpdate;
      if ( !v188 )
        goto LABEL_466;
      if ( System_String__StartsWith(v188, (System_String_o *)StringLiteral_887/*"/BattleActors/"*/, 0LL) )
      {
        v190 = *(System_String_o **)&v185->fields.mtIsUpdate;
        if ( !v190 )
          sub_B2C434(0LL, v189);
        v191 = System_String__Substring_44369268(v190, v190->fields.m_stringLength - 1, 1, 0LL);
        result[0] = 1;
        v412 += System_Int32__TryParse(v191, result, 0LL);
      }
    }
  }
  *((_DWORD *)&v416[1].fields.list + v417++) = 1183;
  v197 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v197 )
  {
    v199 = *(_QWORD *)v197;
    v200 = v197;
    if ( *(_WORD *)(*(_QWORD *)v197 + 298LL) )
    {
      v201 = 0LL;
      v202 = (int *)(*(_QWORD *)(v199 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v202 - 1) != System_IDisposable_TypeInfo )
      {
        ++v201;
        v202 += 4;
        if ( v201 >= *(unsigned __int16 *)(*(_QWORD *)v197 + 298LL) )
          goto LABEL_165;
      }
      v203 = v199 + 16LL * *v202 + 312;
    }
    else
    {
LABEL_165:
      v203 = sub_AC5258(v197, System_IDisposable_TypeInfo, 0LL, v198);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v203)(v200, *(_QWORD *)(v203 + 8));
  }
  if ( v417 && *((_DWORD *)&v416[0].fields.current + v417 + 1) == 1183 )
    --v417;
  seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL);
  if ( !seqObject )
    goto LABEL_437;
  v206 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v206 )
    sub_B2C434(0LL, v204);
  seqa = 0;
  while ( 1 )
  {
    v207 = v206->klass;
    if ( *(_WORD *)&v206->klass->_2.bitflags1 )
    {
      v208 = 0LL;
      v209 = &v207->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v209 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v208;
        v209 += 4;
        if ( v208 >= *(unsigned __int16 *)&v206->klass->_2.bitflags1 )
          goto LABEL_178;
      }
      v210 = v415;
      v211 = (__int64)&v207->vtable[*v209].method;
    }
    else
    {
LABEL_178:
      v210 = v415;
      v211 = sub_AC5258(v206, System_Collections_IEnumerator_TypeInfo, 0LL, v205);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v211)(v206, *(_QWORD *)(v211 + 8)) & 1) == 0 )
      break;
    v213 = v206->klass;
    if ( *(_WORD *)&v206->klass->_2.bitflags1 )
    {
      v214 = 0LL;
      v215 = (System_Collections_IEnumerator_c **)&v213->_1.interfaceOffsets->offset;
      while ( *(v215 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v214;
        v215 += 2;
        if ( v214 >= *(unsigned __int16 *)&v206->klass->_2.bitflags1 )
          goto LABEL_185;
      }
      v216 = (__int64)&v213->vtable[*(_DWORD *)v215 + 1].method;
    }
    else
    {
LABEL_185:
      v216 = sub_AC5258(v206, System_Collections_IEnumerator_TypeInfo, 1LL, v212);
    }
    v217 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v216)(
                                        v206,
                                        *(_QWORD *)(v216 + 8));
    if ( !v217 )
      sub_B2C434(0LL, v218);
    v219 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v217->klass->_2.bitflags2 + 1) < (unsigned int)v219
      || (UnityEngine_Transform_c *)v217->klass->_2.typeHierarchy[v219 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_443;
    }
    v220 = UnityEngine_Component__get_gameObject(v217, 0LL);
    if ( !v220 )
      goto LABEL_447;
    v222 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
             v220,
             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v224 = (WellFired_USTimelineContainer_o *)v222;
    if ( !v222 )
      sub_B2C434(0LL, v223);
    v225 = *(System_String_o **)&v222->fields.mtIsUpdate;
    if ( !v225 )
      sub_B2C434(0LL, v223);
    if ( System_String__StartsWith(v225, (System_String_o *)StringLiteral_884/*"/AllEffects/"*/, 0LL) )
    {
      affectedObjectPath = v224->fields.affectedObjectPath;
      if ( !affectedObjectPath )
        sub_B2C434(0LL, v226);
      v228 = System_String__Substring(affectedObjectPath, 12, 0LL);
      v229 = 1;
    }
    else
    {
      v229 = 0;
      v228 = 0LL;
    }
    v230 = v224->fields.affectedObjectPath;
    if ( !v230 )
      sub_B2C434(0LL, v226);
    if ( System_String__StartsWith(v230, (System_String_o *)StringLiteral_902/*"/CutIns/"*/, 0LL) )
    {
      v232 = v224->fields.affectedObjectPath;
      if ( !v232 )
        sub_B2C434(0LL, v231);
      v228 = System_String__Substring(v232, 8, 0LL);
      v233 = 1;
    }
    else
    {
      v233 = 0;
    }
    v234 = v224->fields.affectedObjectPath;
    if ( !v234 )
      sub_B2C434(0LL, v231);
    if ( System_String__StartsWith(v234, (System_String_o *)StringLiteral_899/*"/BattleCamera"*/, 0LL) )
      goto LABEL_206;
    v236 = v224->fields.affectedObjectPath;
    if ( !v236 )
      sub_B2C434(0LL, v235);
    if ( System_String__StartsWith(v236, (System_String_o *)StringLiteral_901/*"/Cameras/BattleCamera"*/, 0LL) )
    {
LABEL_206:
      v237 = (UnityEngine_Component_o *)v415->fields.actorCamera;
      if ( !v237 )
        sub_B2C434(0LL, v235);
      v238 = UnityEngine_Component__get_transform(v237, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v224, v238, 0LL);
    }
    else
    {
      v239 = v224->fields.affectedObjectPath;
      if ( !v239 )
        sub_B2C434(0LL, v235);
      if ( System_String__StartsWith(v239, (System_String_o *)StringLiteral_879/*"/Actor/chr"*/, 0LL) )
      {
        actor = v415->fields.actor;
        if ( !actor )
          sub_B2C434(0LL, v240);
        v243 = UnityEngine_GameObject__get_transform(actor, 0LL);
        v244 = v224->fields.affectedObjectPath;
        if ( !v244 )
          sub_B2C434(0LL, v242);
        v245 = System_String__Replace_44312768(
                 v244,
                 (System_String_o *)StringLiteral_879/*"/Actor/chr"*/,
                 (System_String_o *)StringLiteral_17421/*"chr(Clone)"*/,
                 0LL);
        if ( !v243 )
          sub_B2C434(v245, v245);
        v246 = UnityEngine_Transform__Find(v243, v245, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject(v224, v246, 0LL);
        AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v224, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
        {
          v249 = v224->fields.affectedObjectPath;
          if ( !v249 )
            sub_B2C434(0LL, v248);
          v250 = System_String__StartsWith(v249, (System_String_o *)StringLiteral_881/*"/Actor/chr/body_level_"*/, 0LL);
          v252 = &StringLiteral_16881/*"body_level_"*/;
          if ( v250 )
            goto LABEL_221;
          v253 = v224->fields.affectedObjectPath;
          if ( !v253 )
            sub_B2C434(0LL, v251);
          v254 = System_String__StartsWith(v253, (System_String_o *)StringLiteral_882/*"/Actor/chr/weapon_level_"*/, 0LL);
          v252 = &StringLiteral_23260/*"weapon_level_"*/;
          if ( v254 )
          {
LABEL_221:
            v255 = (System_String_o *)*v252;
            if ( *v252 )
            {
              v256 = v415->fields.actor;
              if ( !v256 )
                sub_B2C434(0LL, v251);
              v257 = (System_String_o *)StringLiteral_1/*""*/;
              v258 = UnityEngine_GameObject__get_transform(v256, 0LL);
              if ( !v258 )
                sub_B2C434(0LL, v259);
              v260 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                               v258,
                                               (System_String_o *)StringLiteral_17421/*"chr(Clone)"*/,
                                               0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v261 = UnityEngine_Object__op_Inequality(v260, 0LL, 0LL);
              if ( v261 )
              {
                if ( !v260 )
                  sub_B2C434(v261, v262);
                v265 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v260, 0LL);
                if ( !v265 )
                  sub_B2C434(0LL, v263);
                while ( 1 )
                {
                  v266 = v265->klass;
                  if ( *(_WORD *)&v265->klass->_2.bitflags1 )
                  {
                    v267 = 0LL;
                    v268 = &v266->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)v268 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v267;
                      v268 += 4;
                      if ( v267 >= *(unsigned __int16 *)&v265->klass->_2.bitflags1 )
                        goto LABEL_234;
                    }
                    v269 = (__int64)&v266->vtable[*v268].method;
                  }
                  else
                  {
LABEL_234:
                    v269 = sub_AC5258(v265, System_Collections_IEnumerator_TypeInfo, 0LL, v264);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v269)(
                          v265,
                          *(_QWORD *)(v269 + 8)) & 1) == 0 )
                    break;
                  v271 = v265->klass;
                  if ( *(_WORD *)&v265->klass->_2.bitflags1 )
                  {
                    v272 = 0LL;
                    v273 = (System_Collections_IEnumerator_c **)&v271->_1.interfaceOffsets->offset;
                    while ( *(v273 - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      ++v272;
                      v273 += 2;
                      if ( v272 >= *(unsigned __int16 *)&v265->klass->_2.bitflags1 )
                        goto LABEL_241;
                    }
                    v274 = (__int64)&v271->vtable[*(_DWORD *)v273 + 1].method;
                  }
                  else
                  {
LABEL_241:
                    v274 = sub_AC5258(v265, System_Collections_IEnumerator_TypeInfo, 1LL, v270);
                  }
                  v275 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v274)(
                                                      v265,
                                                      *(_QWORD *)(v274 + 8));
                  v277 = (UnityEngine_Object_o *)v275;
                  if ( !v275 )
                    sub_B2C434(0LL, v276);
                  v278 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v275->klass->_2.bitflags2 + 1) < (unsigned int)v278
                    || (UnityEngine_Transform_c *)v275->klass->_2.typeHierarchy[v278 - 1] != UnityEngine_Transform_TypeInfo )
                  {
                    v188 = (System_String_o *)sub_B2C728(v275);
LABEL_466:
                    sub_B2C434(v188, v187);
                  }
                  v279 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v275, 0LL);
                  if ( !v279 )
                    sub_B2C434(0LL, v280);
                  v281 = UnityEngine_Object__get_name(v279, 0LL);
                  if ( !v281 )
                    sub_B2C434(0LL, v282);
                  if ( System_String__StartsWith(v281, v255, 0LL) )
                  {
                    v283 = UnityEngine_Object__get_name(v277, 0LL);
                    *((_DWORD *)&v416[1].fields.list + v417) = 1651;
                    v284 = v417;
                    v257 = v283;
                    goto LABEL_259;
                  }
                }
                *((_DWORD *)&v416[1].fields.list + v417) = 1651;
                v284 = v417;
LABEL_259:
                v417 = v284 + 1;
                v291 = sub_B2C41C(v265, System_IDisposable_TypeInfo);
                v293 = v291;
                if ( v291 )
                {
                  v294 = *(_QWORD *)v291;
                  if ( *(_WORD *)(*(_QWORD *)v291 + 298LL) )
                  {
                    v295 = 0LL;
                    v296 = (int *)(*(_QWORD *)(v294 + 176) + 8LL);
                    while ( *((System_IDisposable_c **)v296 - 1) != System_IDisposable_TypeInfo )
                    {
                      ++v295;
                      v296 += 4;
                      if ( v295 >= *(unsigned __int16 *)(*(_QWORD *)v291 + 298LL) )
                        goto LABEL_264;
                    }
                    v297 = v294 + 16LL * *v296 + 312;
                  }
                  else
                  {
LABEL_264:
                    v297 = sub_AC5258(v291, System_IDisposable_TypeInfo, 0LL, v292);
                  }
                  (*(void (__fastcall **)(__int64, _QWORD))v297)(v293, *(_QWORD *)(v297 + 8));
                }
                if ( v417 && *((_DWORD *)&v416[0].fields.current + v417 + 1) == 1651 )
                  --v417;
              }
              v298 = v224->fields.affectedObjectPath;
              v299 = System_String__Concat_44305532((System_String_o *)StringLiteral_880/*"/Actor/chr/"*/, v255, 0LL);
              if ( !v299 )
                sub_B2C434(0LL, v300);
              if ( !v298 )
                sub_B2C434(v299, v300);
              v301 = System_String__Substring(v298, v299->fields.m_stringLength, 0LL);
              v302 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
              if ( !v302 )
                sub_B2C434(0LL, 0LL);
              if ( !v302->max_length )
              {
                v404 = sub_B2C460(v302);
                sub_B2C400(v404, 0LL);
              }
              v302->m_Items[2] = 47;
              if ( !v301 )
                sub_B2C434(v302, v302);
              v303 = System_String__Split(v301, v302, 0LL);
              if ( !v303 )
                sub_B2C434(0LL, v304);
              if ( !v303->max_length )
              {
                v405 = sub_B2C460(v303);
                sub_B2C400(v405, 0LL);
              }
              v306 = System_String__Concat_44305532(v255, v303->m_Items[0], 0LL);
              v307 = v415->fields.actor;
              if ( !v307 )
                sub_B2C434(0LL, v305);
              v309 = UnityEngine_GameObject__get_transform(v307, 0LL);
              v310 = v224->fields.affectedObjectPath;
              if ( !v310 )
                sub_B2C434(0LL, v308);
              v311 = System_String__Replace_44312768(
                       v310,
                       (System_String_o *)StringLiteral_879/*"/Actor/chr"*/,
                       (System_String_o *)StringLiteral_17421/*"chr(Clone)"*/,
                       0LL);
              if ( !v311 )
                sub_B2C434(0LL, v312);
              v313 = System_String__Replace_44312768(v311, v306, v257, 0LL);
              if ( !v309 )
                sub_B2C434(v313, v313);
              v314 = UnityEngine_Transform__Find(v309, v313, 0LL);
              WellFired_USTimelineContainer__set_AffectedObject(v224, v314, 0LL);
            }
          }
        }
      }
      else
      {
        v285 = v224->fields.affectedObjectPath;
        if ( !v285 )
          sub_B2C434(0LL, v240);
        v286 = System_String__StartsWith(v285, (System_String_o *)StringLiteral_887/*"/BattleActors/"*/, 0LL);
        if ( v286 )
          v228 = v224->fields.affectedObjectPath;
        if ( v228 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v286, v228, v287) )
            goto LABEL_336;
          if ( v229 )
          {
            v290 = System_String__IndexOf(v228, 0x2Fu, 0LL);
            if ( (v290 & 0x80000000) == 0 )
            {
              itema = System_String__Substring(v228, v290 + 1, 0LL);
              v228 = System_String__Substring_44369268(v228, 0, v290, 0LL);
              goto LABEL_285;
            }
            if ( (seqa & 1) != 0 )
            {
              itema = 0LL;
LABEL_285:
              v316 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v415->fields.createdObjects;
              if ( !v316 )
                sub_B2C434(0LL, v289);
              System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
                v416,
                v316,
                (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v420 = v416[0];
              while ( 1 )
              {
                v317 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v420,
                         (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v317 )
                  break;
                v315 = (EventMissionProgressRequest_Argument_ProgressData_o *)v420.fields.current;
                if ( !v420.fields.current )
                  sub_B2C434(v317, v318);
                v319 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v420.fields.current, 0LL);
                if ( !v319 )
                  sub_B2C434(0LL, v320);
                v321 = System_String__Replace_44312768(
                         v319,
                         (System_String_o *)StringLiteral_609/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v228, v321, 0LL) )
                  goto LABEL_293;
              }
              v315 = 0LL;
LABEL_293:
              *((_DWORD *)&v416[1].fields.list + v417++) = 1961;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
                &v420,
                (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              if ( v417 )
              {
                if ( *((_DWORD *)&v416[0].fields.current + v417 + 1) == 1961 )
                  --v417;
                seqa = 1;
              }
              else
              {
                seqa = 1;
              }
              goto LABEL_299;
            }
            itema = 0LL;
            v315 = 0LL;
            seqa = 0;
          }
          else
          {
            itema = 0LL;
            v315 = 0LL;
          }
LABEL_299:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v315, 0LL, 0LL) )
          {
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v322 = UnityEngine_Object__op_Inequality(x, 0LL, 0LL);
            if ( v322 )
            {
              if ( !x )
                sub_B2C434(v322, v323);
              v326 = *(_QWORD *)&x[17].fields.m_CachedPtr;
              if ( !v326 )
                sub_B2C434(v322, v323);
              v327 = *(_DWORD *)(v326 + 720);
            }
            else
            {
              v327 = 0;
            }
            v315 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleSequenceManager__searchPrefab(
                                                                            v415,
                                                                            v415->fields.treasureDeviceId,
                                                                            v228,
                                                                            v324,
                                                                            v327,
                                                                            v325);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v315, 0LL, 0LL) )
            {
              v329 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v415->fields.createdObjects;
              if ( !v329 )
                sub_B2C434(0LL, v328);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v329,
                v315,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
              if ( !v315 )
                sub_B2C434(v330, v331);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v315, 0, 0LL);
            }
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v315, 0LL, 0LL) )
            goto LABEL_336;
          IsNullOrEmpty = System_String__IsNullOrEmpty(itema, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v315 )
              sub_B2C434(IsNullOrEmpty, v333);
            v349 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v315, 0LL);
            if ( !v349 )
              sub_B2C434(0LL, v350);
            v351 = UnityEngine_Transform__Find(v349, itema, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v224, v351, 0LL);
            goto LABEL_336;
          }
          if ( !v315 )
            sub_B2C434(IsNullOrEmpty, v333);
          v334 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v315, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v224, v334, 0LL);
          if ( (v233 & 1) != 0 )
          {
            v335 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v315, 0LL);
            if ( !v335 )
              sub_B2C434(0LL, v336);
            localPosition = UnityEngine_Transform__get_localPosition(v335, 0LL);
            v337 = localPosition.fields.x;
            v338 = localPosition.fields.y;
            v339 = localPosition.fields.z;
            v341 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v315, 0LL);
            CutInRoot = v415->fields.CutInRoot;
            if ( !CutInRoot )
              sub_B2C434(0LL, v340);
            v343 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v341 )
              sub_B2C434(v343, v343);
            UnityEngine_Transform__set_parent(v341, v343, 0LL);
            v344 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v315, 0LL);
            if ( !v344 )
              sub_B2C434(0LL, v345);
            v425.fields.x = v337;
            v425.fields.y = v338;
            v425.fields.z = v339;
            UnityEngine_Transform__set_localPosition(v344, v425, 0LL);
            BattleSequenceManager__updateCutInEvents(
              v346,
              (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v414,
              v228,
              (UnityEngine_GameObject_o *)v315,
              v347);
            v348 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2775/*"BattleCutIn"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v315, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2771/*"BattleBG"*/, 0LL) )
              goto LABEL_336;
            v348 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_2769/*"Battle2D"*/, 0LL);
            if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NGUITools_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            }
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v315, v348, 0LL);
LABEL_336:
          v352 = v224->fields.affectedObjectPath;
          if ( !v352 )
            sub_B2C434(0LL, v288);
          if ( System_String__StartsWith(v352, (System_String_o *)StringLiteral_887/*"/BattleActors/"*/, 0LL) )
          {
            v354 = v224->fields.affectedObjectPath;
            if ( !v354 )
              sub_B2C434(0LL, v353);
            v355 = System_String__Substring_44369268(v354, v354->fields.m_stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v355, &targetPosIndex, 0LL);
            v357 = --targetPosIndex;
            if ( v412 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v415, v224, v357, v356);
              BattleSequenceManager__SyncAttachedTargetPair(v415, v224, targetPosIndex, v358);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v415, v224, v357, v356);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                         (UnityEngine_Component_o *)v224,
                         1,
                         (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v361 = EventCount;
          if ( !EventCount )
            sub_B2C434(0LL, v360);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
              {
                v406 = sub_B2C460(EventCount);
                sub_B2C400(v406, 0LL);
              }
              v364 = (WellFired_USTimelineEvent_o *)v361->m_Items[j];
              if ( !v364 )
                sub_B2C434(EventCount, v360);
              for ( k = 0; ; ++k )
              {
                EventCount = (WarBoardControlPlayTalkUiComponent_array *)WellFired_USTimelineEvent__get_EventCount(
                                                                           v364,
                                                                           0LL);
                if ( k >= (int)EventCount )
                  break;
                v366 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v364, k, 0LL);
                v368 = (EventMissionProgressRequest_Argument_ProgressData_o *)v366;
                if ( !v366 )
                  goto LABEL_445;
                v369 = UnityEngine_Object__get_name(v366, 0LL);
                if ( System_String__op_Equality(v369, (System_String_o *)StringLiteral_14764/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v370 = *(&WellFired_USFGOAttachToParentEvent_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&v368->klass->_2.bitflags2 + 1) < (unsigned int)v370
                    || (WellFired_USFGOAttachToParentEvent_c *)v368->klass->_2.typeHierarchy[v370 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    v220 = (UnityEngine_GameObject_o *)sub_B2C728(v368);
LABEL_447:
                    sub_B2C434(v220, v221);
                  }
                  v371 = System_String__op_Equality(
                           *(System_String_o **)&v368[1].fields.addCount,
                           (System_String_o *)StringLiteral_2773/*"BattleCamera"*/,
                           0LL);
                  if ( v371 )
                  {
                    v373 = (UnityEngine_Component_o *)v415->fields.actorCamera;
                    if ( !v373 )
                      sub_B2C434(0LL, v372);
                    v374 = UnityEngine_Component__get_transform(v373, 0LL);
                    *(_QWORD *)&v368[1].fields.missionTargetId = v374;
                    sub_B2C2F8(&v368[1].fields, v374);
                  }
                  else
                  {
                    if ( !v87 )
                      sub_B2C434(v371, v372);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v87,
                      v368,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
                  }
                }
              }
              max_length = v361->max_length;
            }
          }
        }
      }
    }
  }
  *((_DWORD *)&v416[1].fields.list + v417++) = 2515;
  seqObject = sub_B2C41C(v206, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v377 = *(_QWORD *)seqObject;
    v378 = seqObject;
    if ( *(_WORD *)(*(_QWORD *)seqObject + 298LL) )
    {
      v379 = 0LL;
      v380 = (int *)(*(_QWORD *)(v377 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v380 - 1) != System_IDisposable_TypeInfo )
      {
        ++v379;
        v380 += 4;
        if ( v379 >= *(unsigned __int16 *)(*(_QWORD *)seqObject + 298LL) )
          goto LABEL_378;
      }
      v381 = v377 + 16LL * *v380 + 312;
    }
    else
    {
LABEL_378:
      v381 = sub_AC5258(seqObject, System_IDisposable_TypeInfo, 0LL, v376);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v381)(v378, *(_QWORD *)(v381 + 8));
  }
  if ( v417 && *((_DWORD *)&v416[0].fields.current + v417 + 1) == 2515 )
    --v417;
  if ( !v87 )
    goto LABEL_437;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v416,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v87,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v416[0];
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          &m,
          (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields.current,
          v210->fields.performance,
          v210->fields.actor,
          v210->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields.current )
      sub_B2C434(0LL, v382);
  }
  *((_DWORD *)&v416[1].fields.list + v417++) = 2581;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &m,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( v417 && *((_DWORD *)&v416[0].fields.current + v417 + 1) == 2581 )
    --v417;
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
    if ( LOBYTE(x[18].fields.m_CachedPtr) )
      goto LABEL_428;
    v383 = *(_QWORD *)&x[17].fields.m_CachedPtr;
    if ( !v383 )
      goto LABEL_437;
    if ( !*(_DWORD *)(v383 + 308) && !BattleActorControl__isNoVoice((BattleActorControl_o *)x, 0LL) )
    {
      v384 = (UnityEngine_Object_o *)v210->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      seqObject = UnityEngine_Object__op_Inequality(v384, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v385 = v210->fields.performance;
        if ( !v385 )
          goto LABEL_437;
        data = (UnityEngine_Object_o *)v385->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)seqObject,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoiceMaster___);
            v210->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v210->fields.chrId;
            v389 = (VoiceMaster_o *)MasterData_WarQuestSelectionMaster;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(v210, v389, chrId, FileName, v391) )
              v210->fields.isAlreadyRegistDefaultVoice = 1;
            v392 = v210->fields.chrId;
            if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v393 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v210, v389, v392, v393, v394);
            v395 = *(_QWORD *)&x[17].fields.m_CachedPtr;
            if ( v395 )
            {
              v396 = *(_DWORD *)(v395 + 672);
              v397 = BalanceConfig_TypeInfo;
              if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v397 = BalanceConfig_TypeInfo;
              }
              if ( v396 == v397->static_fields->TreasureDeviceIdMashu3 )
              {
                v398 = v210->fields.chrId;
                if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v399 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v210, v389, v398, v399, v400);
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
  System_GC__Collect_43492776(0LL);
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
  if ( (byte_4184E64 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    this = (BattleSequenceManager_o *)sub_B2C35C(
                                        &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__,
                                        v7);
    byte_4184E64 = 1;
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, tlcont);
  }
}


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
  if ( (byte_4184E68 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    this = (BattleSequenceManager_o *)sub_B2C35C(&StringLiteral_14479/*"Tmp_Target"*/, v9);
    byte_4184E68 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
      sub_B2C434(this, tlcont);
    }
    v12 = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v12, (System_String_o *)StringLiteral_14479/*"Tmp_Target"*/, 0LL);
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
  __int64 v12; // x1
  Il2CppObject *current; // x21
  char v14; // w19
  int v15; // w20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184E4E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_B2C35C(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_4184E4E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !evs )
    sub_B2C434(this, evs);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)evs,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    if ( !v11 )
      break;
    current = v17.fields.current;
    if ( !v17.fields.current )
      sub_B2C434(v11, v12);
    if ( System_String__op_Equality((System_String_o *)v17.fields.current[3].monitor, cutInName, 0LL) )
    {
      current[3].klass = (Il2CppClass *)obj;
      sub_B2C2F8(&current[3], obj);
      v14 = 1;
      v15 = 5;
      goto LABEL_10;
    }
  }
  v14 = 0;
  v15 = 3;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return (v15 == 5) & v14;
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
      sub_B2C434(transform, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, this->fields.originalScale, 0LL);
  }
  *p_targetActor = 0LL;
  sub_B2C2F8(p_targetActor, 0LL);
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
    sub_B2C434(targetActor, method);
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
  sub_B2C2F8(&this->fields.targetActor, bac);
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
  BattleSequenceManager__WaitEndSequence_d__105_o *v2; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v5; // x21
  Il2CppObject *wait_5__2; // x1
  bool result; // w0

  v2 = this;
  if ( (byte_41850CA & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__105_o *)sub_B2C35C(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_41850CA = 1;
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
    v5 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v5, 0LL);
    v2->fields._wait_5__2 = v5;
    sub_B2C2F8(&v2->fields._wait_5__2, v5);
    if ( !_4__this )
LABEL_12:
      sub_B2C434(this, method);
  }
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v2->fields._wait_5__2;
    v2->fields.__2__current = wait_5__2;
    sub_B2C2F8(&v2->fields.__2__current, wait_5__2);
    result = 1;
    v2->fields.__1__state = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleSequenceManager__WaitEndSequence_d__105_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0

  if ( (byte_41850C4 & 1) == 0 )
  {
    sub_B2C35C(&BattleSequenceManager___c_TypeInfo, v1);
    byte_41850C4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleSequenceManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x1);
  return System_Single__CompareTo_44291724(x2->fields.duration, v4, (const MethodInfo *)&duration);
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
    sub_B2C434(this, x1);
  return System_Single__CompareTo_44291724(x2->fields.duration, v4, (const MethodInfo *)&duration);
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
    sub_B2C434(this, x);
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
  if ( (byte_41850C5 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass114_0_o *)sub_B2C35C(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_41850C5 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass114_0_o *)v4->fields.targetList) == 0LL )
    sub_B2C434(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v12; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24

  v4 = this;
  if ( (byte_41850C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__, v6);
    sub_B2C35C(&StringLiteral_13024/*"StandardCutIn"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass73_0_o *)sub_B2C35C(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_41850C6 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass73_0_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_13024/*"StandardCutIn"*/,
                                                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_B2C2F8(&_4__this->fields.CutInPrefab, this),
        (this = (BattleSequenceManager___c__DisplayClass73_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_B2C434(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v12 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_B2C42C(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass73_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_B2C2F8(&v4->fields.__9__1, _9__1);
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__LoadNoblePhantasm(
    v12,
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
  __int64 v16; // x1
  Il2CppObject *v17; // x23
  struct System_Collections_Generic_Dictionary_int__string__o *klass; // x1
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleActorControl_o *v21; // x8
  struct BattleServantData_o *v22; // x8
  struct BattleSequenceManager_o *v23; // x8
  SoundManager_o *Instance; // x19
  System_String_o *v25; // x0
  System_String_o *v26; // x21
  System_Action_o *v27; // x22
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41850C7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_B2C35C(&Method_System_Tuple_int__int__get_Item1__, v9);
    sub_B2C35C(&Method_System_Tuple_int__int__get_Item2__, v10);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, v11);
    sub_B2C35C(&BattleSequenceManager___c__DisplayClass73_1_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_9598/*"NoblePhantasm_"*/, v13);
    byte_41850C7 = 1;
  }
  overwriteSvtVoiceId = 0;
  v14 = (Il2CppObject *)sub_B2C42C(BattleSequenceManager___c__DisplayClass73_1_TypeInfo);
  System_Object___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v14[1].monitor = this;
  sub_B2C2F8(&v14[1].monitor, this);
  v14[1].klass = (Il2CppClass *)obj;
  v17 = v14 + 1;
  sub_B2C2F8(&v14[1], obj);
  _4__this = (ServantAssetLoadManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  klass = (struct System_Collections_Generic_Dictionary_int__string__o *)v17->klass;
  _4__this->fields.LastActorVoice = (struct System_Collections_Generic_Dictionary_int__string__o *)v17->klass;
  sub_B2C2F8(&_4__this->fields.LastActorVoice, klass);
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
  _4__this = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_16;
    overwriteSvtVoiceId = v23->fields.overwriteSvtVoiceId;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v25 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v26 = System_String__Concat_44305532((System_String_o *)StringLiteral_9598/*"NoblePhantasm_"*/, v25, 0LL);
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, v14, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__2__, 0LL);
  if ( !Instance )
LABEL_16:
    sub_B2C434(_4__this, v16);
  SoundManager__LoadAudioAssetStorage(Instance, v26, v27, 1, 0LL);
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
  int CS___8__locals1; // w8
  BattleSequenceManager___c__DisplayClass73_1_o *v10; // x21
  unsigned int v11; // w23
  int v12; // w24
  UnityEngine_Behaviour_o *v13; // x22
  void *v14; // x8
  BattleSequenceManager_o *v15; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_41850C8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_B2C35C(&Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_41850C8 = 1;
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
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  CS___8__locals1 = (int)this->fields.CS___8__locals1;
  v10 = this;
  if ( CS___8__locals1 >= 1 )
  {
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      if ( v11 >= CS___8__locals1 )
      {
        v17 = sub_B2C460(this);
        sub_B2C400(v17, 0LL);
      }
      v13 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v10->fields.__9__4 + (int)v11);
      if ( !v13 )
        break;
      this = (BattleSequenceManager___c__DisplayClass73_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v13->klass[1]._2.typeHierarchy)(
                                                                v13,
                                                                v13->klass[1]._2.unity_user_data);
      if ( (v12 & (unsigned int)this & 1) != 0 )
      {
        v8 = (System_String_o *)v13[2].monitor;
        v12 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
      }
      CS___8__locals1 = (int)v10->fields.CS___8__locals1;
      if ( (int)++v11 >= CS___8__locals1 )
        goto LABEL_15;
    }
LABEL_20:
    sub_B2C434(this, method);
  }
LABEL_15:
  v14 = v2[1].monitor;
  if ( !v14 )
    goto LABEL_20;
  v15 = (BattleSequenceManager_o *)*((_QWORD *)v14 + 2);
  v16 = (System_Action_o *)v2[2].monitor;
  if ( !v16 )
  {
    v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v16, v2, Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__3__, 0LL);
    v2[2].monitor = v16;
    sub_B2C2F8(&v2[2].monitor, v16);
  }
  if ( !v15 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v15, v8, v16, 0LL);
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
  struct BattleSequenceManager___c__DisplayClass73_0_o *v50; // x8
  struct BattleSequenceManager_o *v51; // x8
  UIStandFigureM_o *v52; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  struct BattleSequenceManager___c__DisplayClass73_0_o *v57; // x8

  v2 = this;
  if ( (byte_41850C9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass73_1_o *)sub_B2C35C(
                                                              &Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                                              v8);
    byte_41850C9 = 1;
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
                                                            (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
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
                                                            (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
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
                                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
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
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
  sub_B2C2F8(&v21->fields.standFigure, this);
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
                                  v50 = v2->fields.CS___8__locals1;
                                  if ( v50 )
                                  {
                                    v51 = v50->fields.__4__this;
                                    if ( v51 )
                                    {
                                      v52 = v51->fields.standFigure;
                                      loadStandFigureId = v51->fields.loadStandFigureId;
                                      loadStandFigureLimitCount = v51->fields.loadStandFigureLimitCount;
                                      faceType = v51->fields.faceType;
                                      _9__4 = v2->fields.__9__4;
                                      if ( !_9__4 )
                                      {
                                        _9__4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          _9__4,
                                          (Il2CppObject *)v2,
                                          Method_BattleSequenceManager___c__DisplayClass73_1__loadSequence_b__4__,
                                          0LL);
                                        v2->fields.__9__4 = _9__4;
                                        sub_B2C2F8(&v2->fields.__9__4, _9__4);
                                      }
                                      if ( v52 )
                                      {
                                        this = (BattleSequenceManager___c__DisplayClass73_1_o *)UIStandFigureM__SetCharacter_40472052(
                                                                                                  v52,
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
    sub_B2C434(this, method);
  }
LABEL_77:
  v57 = v2->fields.CS___8__locals1;
  if ( !v57 )
    goto LABEL_80;
  this = (BattleSequenceManager___c__DisplayClass73_1_o *)v57->fields.__4__this;
  if ( !this )
    goto LABEL_80;
  BattleSequenceManager__LoadEndStandFigure(
    (BattleSequenceManager_o *)this,
    v2->fields.obj,
    v57->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass73_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass73_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass73_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_B2C434(this, method);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, method);
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
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  UnityEngine_GameObject_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(UnityEngine_GameObject_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, UnityEngine_GameObject_o *, _QWORD); // x0
  BattleSequenceManager_onGameObjectLoadComplete_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(UnityEngine_GameObject_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  UnityEngine_GameObject_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  BattleSequenceManager_onGameObjectLoadComplete_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
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
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(UnityEngine_GameObject_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, obj, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = obj->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(obj, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(obj, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = obj->klass;
                if ( *(_WORD *)&obj->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&obj->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(obj, class_0, v10, v12);
                }
                (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v16)(obj, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&obj->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  obj,
                  *((_QWORD *)&obj->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(obj, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, obj, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))v24)(
                v32,
                obj,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, UnityEngine_GameObject_o *, _QWORD))(*v32
                                                                                    + 16LL
                                                                                    * *(unsigned __int16 *)(v31 + 72)
                                                                                    + 312))(
                v32,
                obj,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, UnityEngine_GameObject_o *, __int64))v33)(v32, obj, v31);
    }
  }
}