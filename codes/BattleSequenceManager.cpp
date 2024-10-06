void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4A72541 & 1) == 0 )
  {
    sub_1B90010(&BattleSequenceManager_TypeInfo, v1);
    byte_4A72541 = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
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
  System_Array_o *v21; // x0
  struct BattlePerformance_BattleUIPanel_array *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_object__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_List_object__o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_Dictionary_object__int__o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_HashSet_T__o *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  struct UnityEngine_GameObject_array *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_RuntimeFieldHandle_o v52; // 0:w1.4

  if ( (byte_4A72540 & 1) == 0 )
  {
    sub_1B90010(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_string___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_HashSet_string__TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Object___ctor__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Action___ctor__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B90010(&System_Collections_Generic_List_Object__TypeInfo, v13);
    sub_1B90010(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v14);
    sub_1B90010(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_1B90010(&System_Collections_Generic_List_Action__TypeInfo, v16);
    sub_1B90010(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v18);
    sub_1B90010(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v19);
    sub_1B90010(&StringLiteral_9345/*"N_{0}{1}"*/, v20);
    byte_4A72540 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v21 = (System_Array_o *)sub_1B900B8(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v52.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v22 = (struct BattlePerformance_BattleUIPanel_array *)v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61695172(v21, v52, 0LL);
  this->fields.FadeTargetPanelIndexs = v22;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.FadeTargetPanelIndexs, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v25;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v28;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v28, v29, v30);
  v31 = StringLiteral_9345/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9345/*"N_{0}{1}"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.PosNodeFormatNP, v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v34;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v34, v35, v36);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v37;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.battleTargetList, (int32_t)v37, v38, v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v40;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.createdObjects, (int32_t)v40, v41, v42);
  v43 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v43,
    (const MethodInfo_31CF518 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v43;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v43, v44, v45);
  v46 = (System_Collections_Generic_HashSet_T__o *)sub_1B9025C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v46,
    (const MethodInfo_33CB7E8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v46;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v46, v47, v48);
  this->fields.nowTargetAlpha = 1.0;
  v49 = (struct UnityEngine_GameObject_array *)sub_1B900B8(UnityEngine_GameObject___TypeInfo, 3LL);
  this->fields.saveWaitEnemy = v49;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.saveWaitEnemy, (int32_t)v49, v50, v51);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CCA8 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A72524 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, actor);
    sub_1B90010(&StringLiteral_24639/*"wait"*/, v5);
    byte_4A72524 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !actor )
      sub_1B9026C(v6, v7);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_43704400(actor, (System_String_o *)StringLiteral_24639/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      v8.fields.r = 0.0;
      v8.fields.g = 0.0;
      v8.fields.b = 0.0;
      v8.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v8, 0.3, 0LL);
    }
    v9.fields.r = 0.0;
    v9.fields.g = 0.0;
    v9.fields.b = 0.0;
    v9.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v9, 0.0, 0LL);
  }
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_4A7253A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_4A7253A = 1;
  }
  if ( System_String__Equals_61796136(bgmName, this->fields.BackupBgmName, 0LL) )
  {
    return 0;
  }
  else
  {
    intactBgmList = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.intactBgmList;
    return !intactBgmList
        || !intactBgmList[1].monitor
        || !System_Linq_Enumerable__Contains_object_(
              intactBgmList,
              (Il2CppObject *)this->fields.BackupBgmName,
              (const MethodInfo_2EA861C *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_1B9026C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_42899188(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_42899188(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v21; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v28; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v32; // x24

  if ( (byte_4A7250C & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, obj);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass82_0__CreateCutInStandFigure_b__0__, v9);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass82_0_TypeInfo, v10);
    byte_4A7250C = 1;
  }
  v11 = sub_1B9025C(BattleSequenceManager___c__DisplayClass82_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass82_0___ctor((BattleSequenceManager___c__DisplayClass82_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)obj, v16, v17);
  *(_QWORD *)(v11 + 32) = onComplete;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)onComplete, v18, v19);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v21 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v21 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v21, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v24, v25);
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v28 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v32 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass82_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v28 )
            return UIStandFigureM__SetCharacter_41008900(
                     v28,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v32,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1B9026C(Instance, v13);
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
  __int64 performance; // x0
  BattleFieldEnvironmentData_o *FieldEnvData; // x0
  System_String_o *v24; // x21
  struct System_String_o **p_BackupBgmName; // x20
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  _BOOL4 v28; // w21
  struct System_String_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  _BOOL4 v32; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v39; // x3
  BgmPlayArgsGroup_o *v40; // x19
  _BOOL8 v41; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x20
  float v44; // s0
  int v45; // w28
  System_Nullable_float__o v46; // x21
  const MethodInfo_362E09C *v47; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  System_Object_array *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x1
  struct BattlePerformance_o *v54; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v56; // x8
  struct BattlePerformance_o *v57; // x8
  System_String_o *v58; // x19
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  BattleSequenceManager_c *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  Il2CppObject *v65; // x21
  int32_t v66; // w2
  int32_t v67; // w3
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  int32_t v79; // w2
  int32_t v80; // w3
  Il2CppObject *v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  int32_t v84; // w2
  int32_t v85; // w3
  System_Collections_Hashtable_o *v86; // x0
  __int64 v87; // x0
  int v88; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v89; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v93; // 0:x0.8
  System_Nullable_float__o v94; // 0:x1.8
  System_Nullable_float__o v95; // 0:x2.8
  System_Nullable_long__o v96; // 0:x0.16

  if ( (byte_4A72525 & 1) == 0 )
  {
    sub_1B90010(&BattleSequenceManager_TypeInfo, method);
    sub_1B90010(&BgmManager_TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_1B90010(&int_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_1B90010(&Method_System_Nullable_long___ctor__, v9);
    sub_1B90010(&Method_System_Nullable_float___ctor__, v10);
    sub_1B90010(&object___TypeInfo, v11);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v12);
    sub_1B90010(&float_TypeInfo, v13);
    sub_1B90010(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_1B90010(&SoundManager_TypeInfo, v15);
    sub_1B90010(&StringLiteral_19683/*"from"*/, v16);
    sub_1B90010(&StringLiteral_9840/*"OnChangeBgmVolume"*/, v17);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v18);
    sub_1B90010(&StringLiteral_22314/*"onupdate"*/, v19);
    sub_1B90010(&StringLiteral_24008/*"to"*/, v20);
    sub_1B90010(&iTween_TypeInfo, v21);
    byte_4A72525 = 1;
  }
  changeBgm = 0LL;
  memset(&v91, 0, sizeof(v91));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v24 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v24, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v28 = 0;
  }
  else
  {
    *p_BackupBgmName = v24;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v24, (int32_t)v26, v27);
    v28 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v26) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v29 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v29;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v29, v30, v31);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v32 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v28 = 1;
  }
  else
  {
    v32 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v34 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v34;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v34, v35, v36);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v32 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v28 = 1;
  }
  v37 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1B9026C(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v32 | System_String__op_Inequality(v37, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1B900B8(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v51 = (System_Object_array *)performance;
    v52 = StringLiteral_19683/*"from"*/;
    if ( StringLiteral_19683/*"from"*/ )
    {
      v52 = sub_1B9014C(StringLiteral_19683/*"from"*/, v51->obj.klass->_1.element_class);
      if ( !v52 )
        goto LABEL_92;
      v53 = StringLiteral_19683/*"from"*/;
    }
    else
    {
      v53 = 0LL;
    }
    if ( !v51->max_length )
      goto LABEL_91;
    v51->m_Items[0] = (Il2CppObject *)v53;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v51->m_Items, v53, v49, v50);
    v62 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v62 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v90.fields._list = v62->static_fields->NoblePhantasmBgmVolumeRate;
    v52 = j_il2cpp_value_box_0(float_TypeInfo, &v90, v59, v60, v61);
    v65 = (Il2CppObject *)v52;
    if ( !v52 || (v52 = sub_1B9014C(v52, v51->obj.klass->_1.element_class)) != 0 )
    {
      if ( v51->max_length <= 1 )
        goto LABEL_91;
      v51->m_Items[1] = v65;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[1], (int32_t)v65, v63, v64);
      v52 = StringLiteral_24008/*"to"*/;
      if ( StringLiteral_24008/*"to"*/ )
      {
        v52 = sub_1B9014C(StringLiteral_24008/*"to"*/, v51->obj.klass->_1.element_class);
        if ( !v52 )
          goto LABEL_92;
        v53 = StringLiteral_24008/*"to"*/;
      }
      else
      {
        v53 = 0LL;
      }
      if ( v51->max_length <= 2 )
        goto LABEL_91;
      v51->m_Items[2] = (Il2CppObject *)v53;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[2], v53, v66, v67);
      *(_DWORD *)&v89.fields.hasValue = 1;
      v52 = j_il2cpp_value_box_0(int_TypeInfo, &v89, v68, v69, v70);
      v73 = (Il2CppObject *)v52;
      if ( !v52 || (v52 = sub_1B9014C(v52, v51->obj.klass->_1.element_class)) != 0 )
      {
        if ( v51->max_length <= 3 )
          goto LABEL_91;
        v51->m_Items[3] = v73;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[3], (int32_t)v73, v71, v72);
        v52 = StringLiteral_23966/*"time"*/;
        if ( StringLiteral_23966/*"time"*/ )
        {
          v52 = sub_1B9014C(StringLiteral_23966/*"time"*/, v51->obj.klass->_1.element_class);
          if ( !v52 )
            goto LABEL_92;
          v53 = StringLiteral_23966/*"time"*/;
        }
        else
        {
          v53 = 0LL;
        }
        if ( v51->max_length <= 4 )
          goto LABEL_91;
        v51->m_Items[4] = (Il2CppObject *)v53;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[4], v53, v74, v75);
        v88 = 1056964608;
        v52 = j_il2cpp_value_box_0(float_TypeInfo, &v88, v76, v77, v78);
        v81 = (Il2CppObject *)v52;
        if ( !v52 || (v52 = sub_1B9014C(v52, v51->obj.klass->_1.element_class)) != 0 )
        {
          if ( v51->max_length <= 5 )
            goto LABEL_91;
          v51->m_Items[5] = v81;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[5], (int32_t)v81, v79, v80);
          v52 = StringLiteral_22314/*"onupdate"*/;
          if ( StringLiteral_22314/*"onupdate"*/ )
          {
            v52 = sub_1B9014C(StringLiteral_22314/*"onupdate"*/, v51->obj.klass->_1.element_class);
            if ( !v52 )
              goto LABEL_92;
            v53 = StringLiteral_22314/*"onupdate"*/;
          }
          else
          {
            v53 = 0LL;
          }
          if ( v51->max_length <= 6 )
            goto LABEL_91;
          v51->m_Items[6] = (Il2CppObject *)v53;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[6], v53, v82, v83);
          v52 = StringLiteral_9840/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9840/*"OnChangeBgmVolume"*/ )
          {
            v53 = 0LL;
LABEL_84:
            if ( v51->max_length > 7 )
            {
              v51->m_Items[7] = (Il2CppObject *)v53;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v51->m_Items[7], v53, v84, v85);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v86 = iTween__Hash(v51, 0LL);
              iTween__ValueTo(gameObject, v86, 0LL);
              return;
            }
LABEL_91:
            sub_1B90274(v52, v53);
          }
          v52 = sub_1B9014C(StringLiteral_9840/*"OnChangeBgmVolume"*/, v51->obj.klass->_1.element_class);
          if ( v52 )
          {
            v53 = StringLiteral_9840/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v87 = sub_1B90290(v52);
    sub_1B90138(v87, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v28, this->fields.BackupBgmName, v39);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v40 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v90,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v91 = v90;
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v91,
                    (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v41 )
              break;
            current = v91.fields._current;
            if ( !v91.fields._current )
              sub_1B9026C(v41, v42);
            v44 = (float)(__int64)v91.fields._current[2].klass + -800.0;
            if ( v44 == INFINITY )
              v45 = 0x80000000;
            else
              v45 = (int)v44;
            v89 = 0LL;
            v93 = (System_Nullable_float__o)&v89;
            System_Nullable_float____ctor(v93, 0.5, (const MethodInfo_362FB34 *)Method_System_Nullable_float___ctor__);
            v46 = v89;
            v96.fields.value = v45 & (unsigned int)~(v45 >> 31);
            *(_OWORD *)&v90.fields._list = 0uLL;
            *(_QWORD *)&v96.fields.hasValue = &v90;
            System_Nullable_long____ctor(v96, Method_System_Nullable_long___ctor__, v47);
            v94 = 0LL;
            v95 = v46;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v94, v95, *(System_Nullable_long__o *)&v90.fields._list, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v91,
            (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_38366528(v40, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v28 )
  {
    v54 = this->fields.performance;
    if ( !v54 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v54->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v56 = this->fields.performance;
      if ( v56 )
      {
        performance = (__int64)v56->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v57 = this->fields.performance;
          if ( v57 )
          {
            performance = (__int64)v57->fields.logic;
            if ( performance )
            {
              BattleLogic__PlayCurrentBgm((BattleLogic_o *)performance, 0.5, 0LL);
              return;
            }
          }
        }
      }
      goto LABEL_90;
    }
  }
  v58 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v58, 0LL);
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
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v16; // x19
  System_Func_object__bool__o *v17; // x20

  if ( (byte_4A7253C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_1B90010(&System_Func_BgmPlayArgs__bool__TypeInfo, v7);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass145_0__ExistBackupBgmPlayGroup_b__0__, v8);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass145_0_TypeInfo, v9);
    byte_4A7253C = 1;
  }
  v10 = sub_1B9025C(BattleSequenceManager___c__DisplayClass145_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass145_0___ctor((BattleSequenceManager___c__DisplayClass145_0_o *)v10, 0LL);
  if ( !v10 )
    sub_1B9026C(v11, v12);
  *(_QWORD *)(v10 + 16) = checkBgmName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)checkBgmName, v13, v14);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v16 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v17 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleSequenceManager___c__DisplayClass145_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48880324(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_2E9DAC4 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *Panel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *root_drop; // x20
  struct BattlePerformance_o *v14; // x8

  v6 = this;
  if ( (byte_4A7251C & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A7251C = 1;
  }
  FadeTargetPanelIndexs = v6->fields.FadeTargetPanelIndexs;
  v6->fields.nowTargetAlpha = targetAlpha;
  if ( !FadeTargetPanelIndexs )
    goto LABEL_23;
  v8 = *(_QWORD *)&FadeTargetPanelIndexs->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
        sub_1B90274(this, method);
      this = (BattleSequenceManager_o *)v6->fields.performance;
      if ( !this )
        break;
      Panel = (UnityEngine_Object_o *)BattlePerformance__getPanel(
                                        (BattlePerformance_o *)this,
                                        FadeTargetPanelIndexs->m_Items[v9 + 1],
                                        0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        goto LABEL_14;
    }
LABEL_23:
    sub_1B9026C(this, method);
  }
LABEL_14:
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_23;
  root_drop = (UnityEngine_Object_o *)performance->fields.root_drop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(root_drop, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v14 = v6->fields.performance;
    if ( !v14 )
      goto LABEL_23;
    this = (BattleSequenceManager_o *)v14->fields.root_drop;
    if ( !this )
      goto LABEL_23;
    this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_23;
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
  __int64 v29; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__49144716; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x21
  BattleSequenceManager___c_c *v35; // x0
  System_Comparison_T__o *_9__79_0; // x23
  Il2CppObject *v37; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Func_object__bool__o *v41; // x23
  System_Collections_Generic_List_object__o *v42; // x21
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  BattleSequenceManager___c_c *v44; // x0
  System_Comparison_T__o *_9__79_2; // x19
  Il2CppObject *v46; // x22
  struct BattleSequenceManager___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x1
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A7250B & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_1B90010(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v6);
    sub_1B90010(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v10);
    sub_1B90010(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v11);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v12);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v13);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v21);
    sub_1B90010(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v22);
    sub_1B90010(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v23);
    sub_1B90010(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_0__, v24);
    sub_1B90010(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_2__, v25);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass79_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v26);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo, v27);
    sub_1B90010(&BattleSequenceManager___c_TypeInfo, v28);
    byte_4A7250B = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v29 = sub_1B9025C(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_27;
  *(_QWORD *)(v29 + 16) = syncGroupName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)syncGroupName, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__49144716 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                                                                           sequence,
                                                                                           (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v34 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v34,
    ComponentsInChildren_object__49144716,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v35 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v35 = BattleSequenceManager___c_TypeInfo;
  }
  _9__79_0 = (System_Comparison_T__o *)v35->static_fields->__9__79_0;
  if ( !_9__79_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleSequenceManager___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__79_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__79_0,
      v37,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__79_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__79_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v39, v40);
  }
  System_Collections_Generic_List_object___Sort_55649412(
    v34,
    _9__79_0,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v41 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v29,
    Method_BattleSequenceManager___c__DisplayClass79_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v34,
          (System_Func_T__bool__o *)v41,
          (const MethodInfo_2E795E4 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v42 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_351018C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__49144716 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                                                                             sequence,
                                                                                             (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v42 )
    {
      System_Collections_Generic_List_object___AddRange(
        v42,
        ComponentsInChildren_object__49144716,
        (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v43 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                                             sequence,
                                                             (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v42,
        v43,
        (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v44 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v44 = BattleSequenceManager___c_TypeInfo;
      }
      _9__79_2 = (System_Comparison_T__o *)v44->static_fields->__9__79_2;
      if ( !_9__79_2 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = BattleSequenceManager___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__79_2 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__79_2,
          v46,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_2__,
          0LL);
        v47 = BattleSequenceManager___c_TypeInfo->static_fields;
        v47->__9__79_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__79_2;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v47->__9__79_2, (int32_t)_9__79_2, v48, v49);
      }
      System_Collections_Generic_List_object___Sort_55649412(
        v42,
        _9__79_2,
        (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        v42,
        (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v51.fields._current )
          sub_1B9026C(0LL, v50);
      }
      while ( (((__int64 (*)(void))v51.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v51,
        (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1B9026C(ComponentsInChildren_object__49144716, v31);
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
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4A7250F & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    byte_4A7250F = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Component_object, 0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( Component_object )
    {
      ServantId = BattleActorControl__getServantId((BattleActorControl_o *)Component_object, 0LL);
      if ( defLimCnt == -1 || ServantId == svtId )
        return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
      return curLimCnt;
    }
    goto LABEL_15;
  }
  if ( defLimCnt != -1 )
    return curLimCnt;
  if ( !Component_object )
LABEL_15:
    sub_1B9026C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
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
  Il2CppObject *Instance; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A7252F & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&pos);
    sub_1B90010(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1B90010(&StringLiteral_6007/*"Enemy"*/, v9);
    sub_1B90010(&StringLiteral_10679/*"Player"*/, v10);
    byte_4A7252F = 1;
  }
  if ( isEnemy )
    v11 = &StringLiteral_6007/*"Enemy"*/;
  else
    v11 = &StringLiteral_10679/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v21 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v14, v15, v16);
  v18 = System_String__Format_61801464(format, v12, v17, 0LL);
  if ( !Instance )
    sub_1B9026C(v18, v19);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v18, 0LL);
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
  BattleSequenceManager___c__DisplayClass126_0_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v12; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4A72530 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      *(_QWORD *)&posIndex);
    sub_1B90010(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v5);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass126_0__GetTargetPosIndexTransform_b__0__, v6);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass126_0_TypeInfo, v7);
    byte_4A72530 = 1;
  }
  v8 = (BattleSequenceManager___c__DisplayClass126_0_o *)sub_1B9025C(BattleSequenceManager___c__DisplayClass126_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass126_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  v8->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v12 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass126_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v12,
                                        (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v9 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v9 )
      return UnityEngine_GameObject__get_transform(v9, 0LL);
LABEL_9:
    sub_1B9026C(v9, v10);
  }
  return result;
}


bool __fastcall BattleSequenceManager__HasFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o **fxdVoice,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *fixedVoice; // x20

  *fxdVoice = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
  }
  return fixedVoice != 0LL;
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
  Il2CppObject *Component_object; // x20

  if ( (byte_4A7253B & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A7253B = 1;
  }
  if ( !entity )
    return 0;
  if ( TreasureDvcEntity__IsDelayEnd(entity, 0LL) )
    return 1;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actor, 0LL, 0LL) )
    return 0;
  v9 = this->fields.actor;
  if ( !v9 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v9,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_16:
    sub_1B9026C(v9, v8);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_object, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4A7253D & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v2);
    sub_1B90010(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_4A7253D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v5[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  v5 = (UnityEngine_GameObject_o *)v5[4].klass;
  if ( !v5 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1B9026C(v5, v6);
  return LOBYTE(Component_object[30].klass) == 0;
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

  if ( (byte_4A7253F & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A7253F = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4A7250D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_1B90010(&SoundManager_TypeInfo, v7);
    byte_4A7250D = 1;
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)System_String__IsNullOrEmpty(bgmName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( callback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return;
    }
LABEL_14:
    sub_1B9026C(IsNullOrEmpty, v9);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v15[4] = (Il2CppClass *)bgmName;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)bgmName, v10, v11);
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A7250E & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, obj);
    byte_4A7250E = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1B9026C(0LL, v8);
    UIStandFigureRender__SetActive(v9, 0, 0LL);
  }
  if ( onComplete )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))onComplete->fields.m_target)(
      onComplete->fields.original_method_info,
      obj,
      *(_QWORD *)&onComplete->fields.extra_arg);
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
  UnityEngine_GameObject_o *klass; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v13; // x8
  struct BattleData_o *v14; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v17; // x21
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

  if ( (byte_4A7252B & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&StringLiteral_18998/*"en_Parts_Up01"*/, v6);
    sub_1B90010(&StringLiteral_18997/*"en_Parts_Under01"*/, v7);
    byte_4A7252B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)CoreObj, 0LL, 0LL) && this->fields.IsPlaying )
  {
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)klass & 1) == 0 )
    {
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v11->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v13 = this->fields.performance;
        if ( !v13 )
          goto LABEL_54;
        v14 = v13->fields.data;
        if ( !v14 )
          goto LABEL_54;
        if ( v14->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)klass & 1) == 0 )
          {
            if ( !Component_object )
              goto LABEL_54;
            klass = (UnityEngine_GameObject_o *)Component_object[19].klass;
            if ( !klass )
              goto LABEL_54;
            if ( BattleServantData__isMultiTargetCore((BattleServantData_o *)klass, 0LL) )
            {
              SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(SingleTarget, 0LL, 0LL) )
              {
                klass = this->fields.SingleTarget;
                if ( !klass )
                  goto LABEL_54;
                v17 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v17,
                                                      0LL,
                                                      0LL);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v17 )
                    goto LABEL_54;
                  if ( LOBYTE(v17[30].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0LL) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0LL) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0LL);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v18 = &StringLiteral_18998/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v17[28].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0LL);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v18 = &StringLiteral_18997/*"en_Parts_Under01"*/;
                      }
                      v19 = this->fields.performance;
                      if ( !v19 )
                        goto LABEL_54;
                      v20 = (System_String_o *)*v18;
                      v21 = v19->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0LL);
                      if ( !v21 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v21,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v20,
                                                                    0LL);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TransformChild, 0LL, 0LL) )
                      {
                        klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)Component_object,
                                                              0LL);
                        if ( klass )
                        {
                          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)klass,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v26 = v23;
                            v27 = v24;
                            v28 = v25;
                            klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                  TransformChild,
                                                                  0LL);
                            if ( klass )
                            {
                              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)klass, 0LL);
                              x = position.fields.x;
                              y = position.fields.y;
                              z = position.fields.z;
                              klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Component_object,
                                                                    0LL);
                              if ( klass )
                              {
                                v34.fields.z = v28 - z;
                                v34.fields.y = v27 - y;
                                v34.fields.x = v26 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v34, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1B9026C(klass, v10);
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
  struct System_Action_o *BgChangedCallback; // x8
  ServantStatusBattleListViewItem_o *p_BgChangedCallback; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  performance = this->fields.performance;
  this->fields.IsBgBusy = 0;
  if ( !performance || (v3 = this, (this = (BattleSequenceManager_o *)performance->fields.bgPerf) == 0LL) )
    sub_1B9026C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (ServantStatusBattleListViewItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1B8FFB4(p_BgChangedCallback, 0, v6, v7);
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
  System_Collections_Generic_IEnumerable_BgmPlayArgs__c *klass; // x8
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  float v30; // s9
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4A72520 & 1) == 0 )
  {
    sub_1B90010(&BgmManager_TypeInfo, method);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A72520 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_1B9026C(0LL, v11);
    klass = v10->klass;
    v13 = v10;
    v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8));
    if ( !v18 )
      sub_1B9026C(0LL, v17);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_16;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_16:
        v22 = sub_1BE1FF0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v18;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_23;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_23:
        v26 = sub_1BE1FF0(v18, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      if ( !v27 )
        sub_1B9026C(0LL, v28);
      v29 = *(System_String_o **)(v27 + 16);
      v30 = *(float *)(v27 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v29, v30 * newValue, 0LL);
    }
    v31 = *(_QWORD *)v18;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_33;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_33:
      v34 = sub_1BE1FF0(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v18, *(_QWORD *)(v34 + 8));
  }
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayComplete(
        BattleSequenceManager_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleSequenceManager__WaitEndSequence(this, (const MethodInfo *)seq);
  UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v39; // w9
  Il2CppObject *v40; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v42; // w2
  int v43; // w9
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v50; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x25
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v53; // x10
  unsigned __int64 v54; // x21
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v56; // x23
  char v57; // w22
  Il2CppObject *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v60; // x23
  __int64 v61; // x25
  unsigned __int64 v62; // x9
  unsigned __int64 v63; // x26
  UnityEngine_Object_o *v64; // x22
  int32_t v65; // w2
  int32_t v66; // w3
  struct BattlePerformance_o *v67; // x9
  struct UnityEngine_GameObject_array *v68; // x8
  struct UnityEngine_GameObject_array *v69; // x9
  Il2CppClass *v70; // x1
  struct BattlePerformance_o *v71; // x8
  struct UnityEngine_GameObject_array *v72; // x23
  __int64 v73; // x8
  unsigned __int64 v74; // x25
  int v75; // w26
  UnityEngine_Object_o *v76; // x22
  char v77; // w21
  Il2CppObject *v78; // x22
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v80; // x8
  struct BattlePerformance_o *v81; // x8
  struct UnityEngine_GameObject_array *v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x23
  UnityEngine_Object_o *v85; // x21
  Il2CppObject *v86; // x0
  const MethodInfo *v87; // x2
  struct BattlePerformance_o *v88; // x8
  struct UnityEngine_GameObject_array *v89; // x22
  __int64 v90; // x8
  unsigned __int64 v91; // x23
  UnityEngine_Object_o *v92; // x21
  Il2CppObject *v93; // x0
  const MethodInfo *v94; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v97; // x2
  int32_t v98; // w2
  int32_t v99; // w3
  UnityEngine_Camera_o *v100; // x21
  int32_t cullingMask; // w22
  char v102; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v104; // w22
  char v105; // w0
  struct BattlePerformance_o *v106; // x8
  UnityEngine_Object_o *v107; // x21
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  struct BattlePerformance_o *v109; // x8
  BattlePerformance_o *v110; // x20
  int32_t v111; // w21
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A72522 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, method);
    sub_1B90010(&CommonUI_TypeInfo, v3);
    sub_1B90010(&Method_DataManager_GetMaster_TreasureDvcMaster___, v4);
    sub_1B90010(&DataManager_TypeInfo, v5);
    sub_1B90010(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__Clear__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_Object__Clear__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_bool__get_Count__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v21);
    sub_1B90010(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v22);
    sub_1B90010(&StringLiteral_9506/*"NoblePhantasm/CutIns"*/, v23);
    sub_1B90010(&StringLiteral_3227/*"Battle2D"*/, v24);
    byte_4A72522 = 1;
  }
  entity = 0LL;
  memset(&v115, 0, sizeof(v115));
  memset(&v114, 0, sizeof(v114));
  this->fields.IsPlaying = 0;
  this->fields._SeqId_k__BackingField = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v25);
  }
  actorCamera = (UnityEngine_Object_o *)this->fields.actorCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorCamera, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.actorCamera;
    if ( !transform )
      goto LABEL_89;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_89;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.originalCameraRoot, 0LL);
  }
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v28);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v30);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v31);
  BattleSequenceManager__restoreBattleActorTransform(this, v32);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_89;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_312C5FC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v33) )
    BattleSequenceManager__CrossFadeBgm(this, v34);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v34);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)performance->fields.actioncamera;
  if ( !transform )
    goto LABEL_89;
  BattleActionCamera__loadEffectStatus((BattleActionCamera_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.npEndDeleteObjects;
  if ( !transform )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v113,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v115 = v113;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v115,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v115.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v115,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_89;
  size = npEndDeleteObjects->fields._size;
  v39 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v39;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v113,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v114 = v113;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v114,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v40 = v114.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69539440((UnityEngine_Object_o *)v40, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v114,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_89;
  v42 = createdObjects->fields._size;
  v43 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v43;
  if ( v42 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v42, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v46 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69539440(v46, 0LL);
    *p_seqObject = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.seqObject, 0, v47, v48);
  }
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_89;
  v50 = this->fields.performance;
  if ( !v50 )
    goto LABEL_89;
  p_actorlist = v50->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_89;
  e_actorlist = v50->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_89;
  v53 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v53 )
  {
    if ( (int)v53 >= 1 )
    {
      v54 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v54 < max_length )
      {
        v56 = (UnityEngine_Object_o *)p_actorlist->m_Items[v54];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_89;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v54,
                                                   (const MethodInfo_34C768C *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v56 )
            goto LABEL_89;
          v57 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v56, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v56,
                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_89;
            transform = (UnityEngine_Component_o *)Component_object[2].monitor;
            if ( !transform )
              goto LABEL_89;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v57 & 1, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v54 >= (int)max_length )
          goto LABEL_75;
      }
LABEL_169:
      sub_1B90274(transform, v27);
    }
    LODWORD(v54) = 0;
LABEL_75:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_89;
    v60 = 4LL;
    v61 = 32LL;
    while ( 1 )
    {
      v62 = saveWaitEnemy->max_length;
      v63 = v60 - 4;
      if ( v60 - 4 >= (int)v62 )
        break;
      if ( v63 >= v62 )
        goto LABEL_169;
      v64 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v60);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v67 = this->fields.performance;
        if ( !v67 )
          goto LABEL_89;
        v68 = this->fields.saveWaitEnemy;
        if ( !v68 )
          goto LABEL_89;
        if ( v63 >= v68->max_length )
          goto LABEL_169;
        v69 = v67->fields.e_actorlist;
        if ( !v69 )
          goto LABEL_89;
        if ( v63 >= v69->max_length )
          goto LABEL_169;
        v70 = (Il2CppClass *)*((_QWORD *)&v68->obj.klass + v60);
        *(Il2CppClass **)((char *)&v69->obj.klass + v61) = v70;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)v69 + v61), (int32_t)v70, v65, v66);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v60;
      v61 += 8LL;
      if ( !saveWaitEnemy )
        goto LABEL_89;
    }
    v71 = this->fields.performance;
    if ( !v71 )
      goto LABEL_89;
    v72 = v71->fields.e_actorlist;
    if ( !v72 )
      goto LABEL_89;
    v73 = *(_QWORD *)&v72->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = 0LL;
      v75 = v54;
      while ( v74 < (unsigned int)v73 )
      {
        v76 = (UnityEngine_Object_o *)v72->m_Items[v74];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v76, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_89;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v75 + v74,
                                                   (const MethodInfo_34C768C *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_89;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0LL);
          v78 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v76,
                  (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v78,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v78 )
              goto LABEL_89;
            transform = (UnityEngine_Component_o *)v78[2].monitor;
            if ( !transform )
              goto LABEL_89;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v77 & 1, 0LL);
          }
        }
        LODWORD(v73) = v72->max_length;
        if ( (__int64)++v74 >= (int)v73 )
          goto LABEL_107;
      }
      goto LABEL_169;
    }
LABEL_107:
    v50 = this->fields.performance;
    if ( !v50 )
      goto LABEL_89;
  }
  data = (UnityEngine_Object_o *)v50->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v80 = this->fields.performance;
    if ( !v80 )
      goto LABEL_89;
    transform = (UnityEngine_Component_o *)v80->fields.data;
    if ( !transform )
      goto LABEL_89;
    BattleData__PartsIntoTheBody((BattleData_o *)transform, 0LL);
  }
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__InitActorPosition((BattlePerformance_o *)transform, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__resetOriginalPos((BattlePerformance_o *)transform, 0LL);
  v81 = this->fields.performance;
  if ( !v81 )
    goto LABEL_89;
  v82 = v81->fields.p_actorlist;
  if ( !v82 )
    goto LABEL_89;
  v83 = *(_QWORD *)&v82->max_length;
  if ( (int)v83 >= 1 )
  {
    v84 = 0LL;
    while ( v84 < (unsigned int)v83 )
    {
      v85 = (UnityEngine_Object_o *)v82->m_Items[v84];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v85, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v85 )
          goto LABEL_89;
        v86 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v85,
                (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v86, v87);
      }
      LODWORD(v83) = v82->max_length;
      if ( (__int64)++v84 >= (int)v83 )
        goto LABEL_127;
    }
    goto LABEL_169;
  }
LABEL_127:
  v88 = this->fields.performance;
  if ( !v88 )
    goto LABEL_89;
  v89 = v88->fields.e_actorlist;
  if ( !v89 )
    goto LABEL_89;
  v90 = *(_QWORD *)&v89->max_length;
  if ( (int)v90 >= 1 )
  {
    v91 = 0LL;
    while ( v91 < (unsigned int)v90 )
    {
      v92 = (UnityEngine_Object_o *)v89->m_Items[v91];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v92 )
          goto LABEL_89;
        v93 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v92,
                (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v93, v94);
      }
      LODWORD(v90) = v89->max_length;
      if ( (__int64)++v91 >= (int)v90 )
        goto LABEL_138;
    }
    goto LABEL_169;
  }
LABEL_138:
  p_standFigure = &this->fields.standFigure;
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_standFigure;
    if ( !*p_standFigure )
      goto LABEL_89;
    UIStandFigureM__Dispose((UIStandFigureM_o *)transform, 0LL);
    *p_standFigure = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, 0, v98, v99);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v97) )
    BattleSequenceManager__ReleaseCpk(this, v27);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v100 = this->fields.actorCamera;
  if ( !v100 )
    goto LABEL_89;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v102 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3227/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v100, (1 << v102) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_89;
  v104 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v105 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3227/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v104 & ~(1 << v105), 0LL);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v106 = this->fields.performance;
  if ( !v106 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)v106->fields.bgPerf;
  if ( !transform )
    goto LABEL_89;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( !this->fields.OnCompleteActorCallback )
    goto LABEL_159;
  v107 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v107, 0LL, 0LL);
  v27 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_89;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v27 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_89:
    sub_1B9026C(transform, v27);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v27,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_159:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9506/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_89;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  v109 = this->fields.performance;
  if ( !v109 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)v109->fields.actioncamera;
  if ( !transform )
    goto LABEL_89;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v110 = this->fields.performance;
  if ( !v110 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_89;
  v111 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v110, v111, CurrentGroundType, 0, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__ResetCameraClippingRange((BattlePerformance_o *)transform, 1, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
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
  BgmPlayArgsGroup_o *v13; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v14; // x0
  System_Object_array *v15; // x0
  __int64 v16; // x1
  System_Object_array *v17; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v19; // x19
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Func_object__bool__o *v37; // x23
  Il2CppObject *object; // x0
  const MethodInfo_362E09C *v39; // x3
  BgmPlayArgs_o *v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Nullable_long__o v47; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v48; // 0:x1.8
  System_Nullable_float__o v49; // 0:x2.8
  System_Nullable_long__o v50; // 0:x0.16

  if ( (byte_4A72527 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_1B90010(&BgmManager_TypeInfo, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1B90010(&System_Func_BgmPlayArgs__bool__TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_System_Nullable_long___ctor__, v10);
    sub_1B90010(
      &Method_BattleSequenceManager___c__DisplayClass116_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v11);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass116_0_TypeInfo, v12);
    byte_4A72527 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v13 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v13 )
    {
      v14 = BgmPlayArgsGroup__AllArgsListNullExcluded(v13, 0LL);
      v15 = System_Linq_Enumerable__ToArray_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v14,
              (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v17 = v15,
            (v15 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                            this->fields.backupBgmPlayArgsGroup,
                                            0LL)) == 0LL) )
      {
        sub_1B9026C(v15, v16);
      }
      klass = v15->obj.klass;
      v19 = v15;
      v20 = *(unsigned __int16 *)(&v15->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BE1FF0(v15, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v19, *(_QWORD *)(p_method + 8));
      if ( !v24 )
        sub_1B9026C(0LL, v23);
      while ( 1 )
      {
        v25 = *(_QWORD *)v24;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v26;
            v27 += 4;
            if ( !v26 )
              goto LABEL_20;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_20:
          v28 = sub_1BE1FF0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = sub_1B9025C(BattleSequenceManager___c__DisplayClass116_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass116_0___ctor((BattleSequenceManager___c__DisplayClass116_0_o *)v29, 0LL);
        v30 = *(_QWORD *)v24;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1BE1FF0(v24, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
        if ( !v29 )
          sub_1B9026C(v34, v34);
        *(_QWORD *)(v29 + 16) = v34;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v29 + 16), v34, v35, v36);
        v37 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v29,
          Method_BattleSequenceManager___c__DisplayClass116_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v17,
                   (System_Func_T__bool__o *)v37,
                   (const MethodInfo_2E7A1B0 *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v50.fields.value = (int64_t)object[2].klass;
        else
          v50.fields.value = 0LL;
        v40 = *(BgmPlayArgs_o **)(v29 + 16);
        *(_QWORD *)&v47.fields.hasValue = 0LL;
        v47.fields.value = 0LL;
        *(_QWORD *)&v50.fields.hasValue = &v47;
        System_Nullable_long____ctor(v50, Method_System_Nullable_long___ctor__, v39);
        if ( !v40 )
          sub_1B9026C(v41, v42);
        v48 = 0LL;
        v49 = 0LL;
        BgmPlayArgs__Update(v40, v48, v49, v47, 0LL);
      }
      v43 = *(_QWORD *)v24;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_39;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_39:
        v46 = sub_1BE1FF0(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v24, *(_QWORD *)(v46 + 8));
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

  if ( (byte_4A72523 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, actor);
    byte_4A72523 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1B9026C(v4, v5);
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
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v19; // x1
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A72528 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_BattleSequenceManager__ReleaseCpk_b__117_0__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Action__Add__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B90010(&StringLiteral_9509/*"NoblePhantasm_"*/, v7);
    byte_4A72528 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v29 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v13 = System_Int32__ToString((int32_t)&v29, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_61787092(
                                            (System_String_o *)StringLiteral_9509/*"NoblePhantasm_"*/,
                                            v13,
                                            0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v19 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v22 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__117_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v25 = DelayInvokeMethodList->fields._items,
        v26 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v25) )
  {
LABEL_17:
    sub_1B9026C(Instance, v9);
  }
  v27 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v22,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    DelayInvokeMethodList->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.fixedVoice = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.intactBgmList = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A72526 & 1) == 0 )
  {
    sub_1B90010(&BgmManager_TypeInfo, method);
    byte_4A72526 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
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
  Il2CppObject *Component_object; // x21
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A7252C & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_1B90010(&StringLiteral_9343/*"N_Enemy2"*/, v5);
    sub_1B90010(&StringLiteral_9344/*"N_Player2"*/, v6);
    byte_4A7252C = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
    return;
  if ( !Component_object )
    goto LABEL_55;
  SingleTarget = (UnityEngine_Object_o *)this->fields.SingleTarget;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)Component_object,
                                         0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(SingleTarget, gameObject, 0LL) )
    return;
  v11 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v13 = actor;
  v14 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9343/*"N_Enemy2"*/
                           : &StringLiteral_9344/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v15 = 336LL;
  if ( LOBYTE(actor[20].klass) )
    v15 = 344LL;
  v16 = *(__int64 *)((char *)&performance->klass + v15);
  if ( !v16 )
LABEL_55:
    sub_1B9026C(actor, method);
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v17 = *v14;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 24);
    do
    {
      if ( v18 >= v19 )
        sub_1B90274(actor, method);
      v20 = *(UnityEngine_GameObject_o **)(v16 + 32 + 8 * v18);
      v21 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, v21, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v17,
                                              0LL);
        if ( !v20 )
          goto LABEL_55;
        v22 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
        if ( !v22 )
          goto LABEL_55;
        v23 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_position(v22, 0LL);
        if ( !v23 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
        v27 = this->fields.performance;
        if ( !v27 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v27->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v13[20].klass) )
        {
          PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor((BattleData_o *)actor, 1, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
          if ( ((unsigned __int8)actor & 1) != 0 )
          {
            if ( !PartsActor )
              goto LABEL_55;
            actor = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)PartsActor,
                                                  0LL);
            if ( !actor )
              goto LABEL_55;
            position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)actor, 0LL);
            y = position.fields.y;
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)PartsActor, 0LL);
            v31 = (unsigned int)UnityEngine_Transform__get_position(v22, 0LL);
            *(UnityEngine_Vector3_o *)(&v32 - 2) = UnityEngine_Transform__get_position(v22, 0LL);
            if ( !transform )
              goto LABEL_55;
            v33 = v31;
            v34 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v32 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v20 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v20, 0, 0LL);
          v35 = this->fields.performance;
          if ( !v35 )
            goto LABEL_55;
          data = v35->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v13[20].klass) )
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
  int32_t v3; // w3

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_1B9026C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.changeFieldAfter,
    (int32_t)actionData,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SetBattleTargetAuraFilip(
        BattleSequenceManager_o *this,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *battleTargetList; // x0
  int32_t v8; // w21

  if ( (byte_4A72538 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4A72538 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v8 = 0;
  while ( v8 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v8,
                         (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( battleTargetList )
    {
      battleTargetList = (void *)*((_QWORD *)battleTargetList + 3);
      if ( battleTargetList )
      {
        if ( isReset )
          BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        else
          BattleActorControl__setAuraFlip(
            (BattleActorControl_o *)battleTargetList,
            *((_BYTE *)battleTargetList + 480),
            0LL);
        battleTargetList = this->fields.battleTargetList;
        ++v8;
        if ( battleTargetList )
          continue;
      }
    }
    goto LABEL_18;
  }
  if ( isReset )
  {
    battleTargetList = this->fields.actor;
    if ( battleTargetList )
    {
      battleTargetList = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)battleTargetList,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1B9026C(battleTargetList, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.fixedVoice = voiceId;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct System_String_array *BgmNameListWithIds; // x1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A72539 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A72539 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1B9026C(Instance, v7);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v9, v10);
}


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
  BattleSequenceManager_o *v11; // x19

  v4 = this;
  if ( (byte_4A7252A & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4A7252A = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_26;
  data = performance->fields.data;
  if ( !data )
    goto LABEL_26;
  if ( !data->fields.isMultiTargetBattle )
    return;
  if ( !targetActor )
    goto LABEL_26;
  if ( !targetActor->fields.isEnemy )
    return;
  this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
  if ( !this )
    goto LABEL_26;
  this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUp((BattleServantData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)targetActor->fields.battleSvtData;
    if ( !this )
      goto LABEL_26;
    this = (BattleSequenceManager_o *)BattleServantData__isMultiTargetUnder((BattleServantData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
  }
  v7 = v4->fields.performance;
  if ( !v7 || (this = (BattleSequenceManager_o *)v7->fields.data) == 0LL )
LABEL_26:
    sub_1B9026C(this, targetActor);
  PartsActor = (UnityEngine_Component_o *)BattleData__GetPartsActor((BattleData_o *)this, 1, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform(PartsActor, 0LL);
            v11 = this;
            if ( !byte_4A6A9C1 )
            {
              this = (BattleSequenceManager_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, targetActor);
              byte_4A6A9C1 = 1;
            }
            if ( v11 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v11,
                UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_26;
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
  Il2CppObject *Component_object; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w21
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A72511 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4A72511 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v9),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1B9026C(actor, isStart);
  }
  v10 = 0;
  while ( v10 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v10,
                                          (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          *(BattleFBXComponent_o **)&klass->_1.byval_arg.bits,
          isStart,
          v11);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v10;
        if ( actor )
          continue;
      }
    }
    goto LABEL_10;
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

  if ( (byte_4A72512 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, fbx);
    sub_1B90010(&StringLiteral_16633/*"_y0"*/, v6);
    byte_4A72512 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v7 )
  {
    if ( !fbx )
      sub_1B9026C(v7, v8);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16633/*"_y0"*/, 0LL);
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
  Il2CppObject *Component_object; // x20
  unsigned __int64 v11; // x27
  unsigned __int64 v12; // x26
  System_String_o *v13; // x0
  BattleSequenceManager_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v19; // x0
  BattleSequenceManager_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x21
  unsigned __int64 v23; // x8
  int v24; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A72510 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(&StringLiteral_2238/*"Actors/Actor"*/, v8);
    byte_4A72510 = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1B9026C(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v24 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v24, 0LL);
    v14 = (BattleSequenceManager_o *)System_String__Concat_61787092((System_String_o *)StringLiteral_2238/*"Actors/Actor"*/, v13, 0LL);
    v16 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v14,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v14,
                                    v15);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length = playerList->max_length;
      if ( (__int64)v11 < (int)max_length )
      {
        if ( v11 >= max_length )
LABEL_28:
          sub_1B90274(seqObject, playerList);
        seqObject = playerList->m_Items[v11];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v16 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v16,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v11;
  }
  while ( v12 != 3 );
  for ( i = 0LL; i != 3; ++i )
  {
    v24 = i + 4;
    v19 = System_Int32__ToString((int32_t)&v24, 0LL);
    v20 = (BattleSequenceManager_o *)System_String__Concat_61787092((System_String_o *)StringLiteral_2238/*"Actors/Actor"*/, v19, 0LL);
    v22 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v20,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v20,
                                    v21);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v23 = enemyList->max_length;
      if ( (__int64)i < (int)v23 )
      {
        if ( i >= v23 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v22 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v22,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
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
  __int64 v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_o *v28; // x21
  int v29; // w8
  void *v30; // x25
  unsigned int v31; // w20
  __int64 v32; // x8
  int v33; // w8
  void *v34; // x25
  unsigned int v35; // w20
  __int64 v36; // x8
  int v37; // w8
  void *v38; // x25
  unsigned int v39; // w20
  __int64 v40; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v42; // x25
  int klass_low; // w28
  System_Collections_Generic_HashSet_int__o *v44; // x22
  int v45; // w29
  int i; // w24
  __int64 v47; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v51; // x1
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w21
  struct UnityEngine_GameObject_o *v57; // x21
  Il2CppObject *v58; // x23
  int32_t v59; // w2
  int32_t v60; // w3
  const MethodInfo *v61; // x2
  __int64 v62; // x1
  BattlePerformance_o *v63; // x0
  int32_t v64; // w20
  UnityEngine_Object_o *v65; // x21
  _BOOL8 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x22
  BattleSequenceManager_BattleTarget_o *v69; // x21
  __int64 v70; // x1
  BattlePerformance_o *v71; // x0
  __int64 ServantPosIndex; // x0
  __int64 v73; // x1
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x8
  int v82; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v83; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A72529 & 1) == 0 )
  {
    sub_1B90010(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, method);
    sub_1B90010(&BattleSequenceManager_BattleTarget_TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v4);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v5);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v6);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v9);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1B90010(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v14);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v15);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass119_0__SetupTargetInfo_b__0__, v16);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass119_0_TypeInfo, v17);
    byte_4A72529 = 1;
  }
  memset(&j, 0, sizeof(j));
  v18 = sub_1B9025C(BattleSequenceManager___c__DisplayClass119_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass119_0___ctor((BattleSequenceManager___c__DisplayClass119_0_o *)v18, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget, 0, v19, v20);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v25,
        (const MethodInfo_33C53C4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = v25;
        v28 = (ServantStatusBattleListViewItem_o *)(v18 + 16);
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v25, v26, v27);
        if ( monitor )
        {
          actor = BattleActionData__getDamageList(monitor, -1, 0LL);
          if ( actor )
          {
            v29 = *((_DWORD *)actor + 6);
            v30 = actor;
            if ( v29 >= 1 )
            {
              v31 = 0;
              while ( v31 < v29 )
              {
                v32 = *((_QWORD *)v30 + (int)v31 + 4);
                if ( !v32 )
                  goto LABEL_78;
                v21 = *(unsigned int *)(v32 + 28);
                if ( (_DWORD)v21 )
                {
                  actor = v28->klass;
                  if ( !v28->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v21,
                                    (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v29 = *((_DWORD *)v30 + 6);
                if ( (int)++v31 >= v29 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1B90274(actor, v21);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(monitor, -1, 0LL);
            if ( actor )
            {
              v33 = *((_DWORD *)actor + 6);
              v34 = actor;
              if ( v33 >= 1 )
              {
                v35 = 0;
                while ( v35 < v33 )
                {
                  v36 = *((_QWORD *)v34 + (int)v35 + 4);
                  if ( !v36 )
                    goto LABEL_78;
                  v21 = *(unsigned int *)(v36 + 40);
                  if ( (_DWORD)v21 )
                  {
                    actor = v28->klass;
                    if ( !v28->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v21,
                                      (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v33 = *((_DWORD *)v34 + 6);
                  if ( (int)++v35 >= v33 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(monitor, -1, 0LL);
              if ( actor )
              {
                v37 = *((_DWORD *)actor + 6);
                v38 = actor;
                if ( v37 >= 1 )
                {
                  v39 = 0;
                  while ( v39 < v37 )
                  {
                    v40 = *((_QWORD *)v38 + (int)v39 + 4);
                    if ( !v40 )
                      goto LABEL_78;
                    v21 = *(unsigned int *)(v40 + 28);
                    if ( (_DWORD)v21 )
                    {
                      actor = v28->klass;
                      if ( !v28->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v21,
                                        (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v37 = *((_DWORD *)v38 + 6);
                    if ( (int)++v39 >= v37 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v42 = (System_Action_object__o *)sub_1B9025C(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v42,
                    (Il2CppObject *)v18,
                    Method_BattleSequenceManager___c__DisplayClass119_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v42,
                    (const MethodInfo_3511400 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v44 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v44,
                  (const MethodInfo_33C53C4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v28->klass;
                if ( v28->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v83,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_33C5F4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v82 = 0;
                  j = v83;
                  v45 = 0;
LABEL_41:
                  for ( i = v45; ; ++i )
                  {
                    v45 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_3285E1C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1B9026C(0LL, v47);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1B9026C(0LL, v51);
                    v52 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v52 )
                      sub_1B9026C(0LL, v53);
                    if ( (klass_low != 0) == (LOBYTE(v52[30].klass) != 0) )
                    {
                      ++v82;
                      goto LABEL_41;
                    }
                    if ( !v44 )
                      sub_1B9026C(v52, v53);
                    System_Collections_Generic_HashSet_int___Add(
                      v44,
                      current,
                      (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_3285E18 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v82 && i == 1 )
                  {
                    v28->klass = (ServantStatusBattleListViewItem_c *)v44;
                    sub_1B8FFB4(v28, (int32_t)v44, v54, v55);
                  }
                  actor = v28->klass;
                  if ( v28->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v83,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_33C5F4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v56 = -1;
                      for ( j = v83;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_3285E1C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v56 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_3285E18 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v56, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v57 = (struct UnityEngine_GameObject_o *)actor;
                      v58 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v57;
                      sub_1B8FFB4(
                        (ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget,
                        (int32_t)v57,
                        v59,
                        v60);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v58, v61);
                    }
                    if ( v44 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v83,
                        v44,
                        (const MethodInfo_33C5F4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v83;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_3285E1C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v63 = this->fields.performance;
                        if ( !v63 )
                          sub_1B9026C(0LL, v62);
                        v64 = (int32_t)j.fields._current;
                        v65 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v63,
                                                        (int32_t)j.fields._current,
                                                        0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v66 = UnityEngine_Object__op_Equality(v65, 0LL, 0LL);
                        if ( !v66 )
                        {
                          if ( !v65 )
                            sub_1B9026C(v66, v67);
                          v68 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v65,
                                  (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v69 = (BattleSequenceManager_BattleTarget_o *)sub_1B9025C(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v69, 0LL);
                          v71 = this->fields.performance;
                          if ( !v71 )
                            sub_1B9026C(0LL, v70);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v71, v64, 0LL);
                          if ( !v69 )
                            sub_1B9026C(ServantPosIndex, v73);
                          BattleSequenceManager_BattleTarget__setup(
                            v69,
                            (BattleActorControl_o *)v68,
                            ServantPosIndex,
                            0LL);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1B9026C(0LL, v74);
                          items = battleTargetList->fields._items;
                          v79 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1B9026C(battleTargetList, v74);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v69,
                              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v81 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v81[4] = (Il2CppClass *)v69;
                            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v69, v75, v76);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_3285E18 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
LABEL_78:
    sub_1B9026C(actor, v21);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B9026C(0LL, method);
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
  if ( (byte_4A7251F & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_4A7251F = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_11;
  infoComp = (UnityEngine_Object_o *)performance->fields.infoComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_11:
    sub_1B9026C(this, isFullScreen);
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
  Il2CppObject *Component_object; // x21
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v15; // x4
  BaseMonoBehaviour_o *v16; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *m_CancellationTokenSource; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v27; // x1
  Il2CppClass **v28; // x0
  int v29; // w22
  UnityEngine_Transform_o *v30; // x0
  BattleSyncTransformComponent_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v37; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4A7252E & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___, tlcont);
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    byte_4A7252E = 1;
  }
  if ( (targetPosIndex & 0x80000000) == 0 )
  {
    performance = v6->fields.performance;
    if ( !performance )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)performance->fields.data;
    if ( !this )
      goto LABEL_43;
    this = (BattleSequenceManager_o *)BattleData__get_IsEnemyPosCountNormal((BattleData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    if ( !v5 )
      goto LABEL_43;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         v5,
                         (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      Component_object = (Il2CppObject *)v6->fields.defaultSyncSetting;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_43;
      if ( BattleSyncTransformComponent__get_IsNotExecSync((BattleSyncTransformComponent_o *)Component_object, 0LL) )
        return;
      TargetPosIndexTransform = (UnityEngine_Object_o *)BattleSequenceManager__GetTargetPosIndexTransform(
                                                          v6,
                                                          targetPosIndex + 3,
                                                          v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(TargetPosIndexTransform, 0LL, 0LL) )
        return;
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                                 (WellFired_USTimelineContainer_o *)v5,
                                                 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager_o *)UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v16 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v16 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        m_CancellationTokenSource = (UnityEngine_Transform_o *)v16[9].fields.m_CancellationTokenSource;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v15);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v16,
                                            dummyActorPrefab,
                                            m_CancellationTokenSource,
                                            TargetFieldPosNode,
                                            0LL);
        if ( !this )
          goto LABEL_43;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        WellFired_USTimelineContainer__set_AffectedObject((WellFired_USTimelineContainer_o *)v5, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_object__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(
                                            (WellFired_USTimelineContainer_o *)v5,
                                            0LL);
        if ( !this )
          goto LABEL_43;
        this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !npEndDeleteObjects )
          goto LABEL_43;
        items = npEndDeleteObjects->fields._items;
        v25 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v27 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        v29 = 0;
      }
      else
      {
        v29 = 1;
      }
      v30 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_object_(
                                          v30,
                                          (const MethodInfo_2E791F8 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v31 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v29 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v31;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v34 = *(_QWORD *)&this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = tlcont;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)tlcont, v32, v33);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1B9026C(this, tlcont);
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
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0
  System_Collections_ICollection_o *Components_object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  void *v22; // x8
  unsigned __int64 v23; // x26
  NoblePhantasmTargetOverwriteTransform_o *v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A7253E & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v6);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    byte_4A7253E = 1;
  }
  memset(&v26, 0, sizeof(v26));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      battleTargetList,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v11 )
        break;
      if ( !v26.fields._current )
        sub_1B9026C(v11, v12);
      monitor = (UnityEngine_Object_o *)v26.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v14 )
      {
        if ( !monitor )
          sub_1B9026C(v14, v15);
        v16 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
        {
          v18 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v18 )
            sub_1B9026C(0LL, v17);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v18,
                                                                    (const MethodInfo_2EDE0C4 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1B9026C(IsNullOrEmpty, v21);
            v22 = Components_object[1].monitor;
            if ( (int)v22 >= 1 )
            {
              v23 = 0LL;
              do
              {
                if ( v23 >= (unsigned int)v22 )
                  sub_1B90274(IsNullOrEmpty, v21);
                v24 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v23);
                if ( isOverwrite )
                {
                  if ( !v24 )
                    sub_1B9026C(0LL, v21);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v24, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v24 )
                    sub_1B9026C(0LL, v21);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v24, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v22) = Components_object[1].monitor;
                ++v23;
              }
              while ( (__int64)v23 < (int)v22 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
  int32_t v3; // w3
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleActionData_TreasureDvcAfterChangeBgm_o *TdAfterChangeBgm_k__BackingField; // x19

  performance = this->fields.performance;
  if ( !performance )
    sub_1B9026C(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)changeBgm,
    (int32_t)TdAfterChangeBgm_k__BackingField,
    (int32_t)method,
    v3);
  return TdAfterChangeBgm_k__BackingField != 0LL;
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
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A72509 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_4A72509 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v9 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v9;
    if ( v9 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        DelayInvokeMethodList,
        (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v14.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v14.fields._current[1].monitor)(
            v14.fields._current[4].klass,
            v14.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v11 = this->fields.DelayInvokeMethodList;
      if ( !v11 )
LABEL_14:
        sub_1B9026C(DelayInvokeMethodList, v8);
      size = v11->fields._size;
      v13 = v11->fields._version + 1;
      v11->fields._size = 0;
      v11->fields._version = v13;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A72521 & 1) == 0 )
  {
    sub_1B90010(&BattleSequenceManager__WaitEndSequence_d__110_TypeInfo, method);
    byte_4A72521 = 1;
  }
  v3 = sub_1B9025C(BattleSequenceManager__WaitEndSequence_d__110_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__110___ctor((BattleSequenceManager__WaitEndSequence_d__110_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B9026C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__117_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_string__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A72542 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4A72542 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v16.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1B9026C(0LL, v11);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v12 = this->fields.ReleaseSoundNames;
  if ( !v12 )
LABEL_14:
    sub_1B9026C(ReleaseSoundNames, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
}


void __fastcall BattleSequenceManager___setup_b__91_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1B9026C(this, comp);
  SwitchActiveBaseConditionComponent__SwitchActive(comp, performance->fields.data, 0LL);
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

  if ( (byte_4A72514 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_16148/*"_"*/, voiceMaster);
    byte_4A72514 = 1;
  }
  FlagRequestNumber = System_String__Concat_61787092((System_String_o *)StringLiteral_16148/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_42550068((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B9026C(FlagRequestNumber, v10);
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
  BattlePerformance_o *performance; // x23
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
  if ( (byte_4A7251D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_1B90010(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_4A7251D = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.BgChangedCallback, (int32_t)callback, tp, parentCamera);
  performance = this->fields.performance;
  v21 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1B9026C(v22, v23);
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

  if ( (byte_4A72516 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_16148/*"_"*/, voiceMaster);
    byte_4A72516 = 1;
  }
  FlagRequestNumber = System_String__Concat_61787092((System_String_o *)StringLiteral_16148/*"_"*/, labelName, 0LL);
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
    sub_1B9026C(FlagRequestNumber, v10);
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
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4A72533 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_4A72533 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_31D00C0 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_31CFE4C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1B9026C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A72535 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_4A72535 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4A72505 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A72505 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.actor;
  if ( !v6 )
    sub_1B9026C(0LL, v5);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v6,
                                   (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4A72508 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    byte_4A72508 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BE1EEC(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BE1EEC(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v9);
  return BYTE1(Instance[8].monitor) != 0;
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

  if ( (byte_4A72506 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72506 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v4 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v9 = this->fields.performance;
  if ( !v9 || (v10 = v9->fields.data) == 0LL )
LABEL_14:
    sub_1B9026C(v4, v5);
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


int32_t __fastcall BattleSequenceManager__get_SeqId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields._SeqId_k__BackingField;
}


int32_t __fastcall BattleSequenceManager__get_TreasureDeviceId(BattleSequenceManager_o *this, const MethodInfo *method)
{
  return this->fields.treasureDeviceId;
}


bool __fastcall BattleSequenceManager__get_isAuthTDAccelerate(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v6; // x1
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v10; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v12; // x20
  struct BattlePerformance_o *v14; // x8

  if ( (byte_4A72507 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    byte_4A72507 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v7 = this->fields.performance;
  if ( !v7 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v7->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    return 0;
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality(actor, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
    goto LABEL_22;
  Component_object = this->fields.actor;
  if ( !Component_object )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)Component_object,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v10 = this->fields.performance;
  if ( !v10 )
    goto LABEL_27;
  nowAction = v10->fields.nowAction;
  v12 = (BattleServantData_o *)*((_QWORD *)Component_object + 57);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v12 )
LABEL_27:
    sub_1B9026C(Component_object, v6);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 57), 0LL) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v12, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v14 = this->fields.performance;
  if ( !v14 )
    goto LABEL_27;
  Component_object = v14->fields.data;
  if ( !Component_object )
    goto LABEL_27;
  if ( *((_BYTE *)Component_object + 643) )
    return 0;
  return BattleData__IsHighSpeedOption((BattleData_o *)Component_object, 0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x1
  System_Collections_Generic_Dictionary_object__int__o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_HashSet_T__o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_4A7251B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_1B90010(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_4A7251B = 1;
  }
  this->fields.performance = performance;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (int32_t)players);
  this->fields.actor = actor;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.actor, (int32_t)actor, v18, v19);
  this->fields.playerActors = players;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.playerActors, (int32_t)players, v20, v21);
  this->fields.enemyActors = enemies;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.enemyActors, (int32_t)enemies, v22, v23);
  this->fields.actorCamera = camera;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.actorCamera, (int32_t)camera, v24, v25);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v28, v29);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v32, v33);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1B9026C(actorCamera, v27);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v35, v36);
  this->fields.bgObject = bg;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.bgObject, (int32_t)bg, v37, v38);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v39);
  v40 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v40,
    (const MethodInfo_31CF518 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v40;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v40, v41, v42);
  v43 = (System_Collections_Generic_HashSet_T__o *)sub_1B9025C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v43,
    (const MethodInfo_33CB7E8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v43;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v43, v44, v45);
}


bool __fastcall BattleSequenceManager__isFixedWithNoVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_String_o *fixedVoice; // x8

  fixedVoice = this->fields.fixedVoice;
  return fixedVoice && fixedVoice->fields._stringLength == 0;
}


bool __fastcall BattleSequenceManager__isNotPlaySoundLimitCount(
        BattleSequenceManager_o *this,
        System_Int32_array *limitCounts,
        const MethodInfo *method)
{
  if ( (byte_4A72536 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_4A72536 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2EA8328 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4A72518 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_2234/*"Actor"*/, name);
    sub_1B90010(&StringLiteral_16799/*"animCamLoc"*/, v4);
    byte_4A72518 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2234/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16799/*"animCamLoc"*/, 0LL);
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
  __int64 v22; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *Component_object; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  AssetLoader_LoadEndDataHandler_o *v32; // x19

  if ( (byte_4A7250A & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_1B90010(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__0__, v19);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass78_0_TypeInfo, v20);
    sub_1B90010(&StringLiteral_9506/*"NoblePhantasm/CutIns"*/, v21);
    byte_4A7250A = 1;
  }
  v22 = sub_1B9025C(BattleSequenceManager___c__DisplayClass78_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass78_0___ctor((BattleSequenceManager___c__DisplayClass78_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 64) = onComplete;
  *(_DWORD *)(v22 + 24) = chrId;
  *(_DWORD *)(v22 + 28) = limitCount;
  *(_DWORD *)(v22 + 32) = treasureDeviceId;
  *(_DWORD *)(v22 + 36) = treasureDeviceLv;
  *(_DWORD *)(v22 + 40) = npChargeStage;
  *(_DWORD *)(v22 + 56) = overwriteSvtVoiceId;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 64), (int32_t)onComplete, v27, v28);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v22 + 24);
  this->fields.limitCount = *(_DWORD *)(v22 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v22 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v22 + 56);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v22 + 48) = Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 48), (int32_t)Component_object, v30, v31);
  actor = *(UnityEngine_GameObject_o **)(v22 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v22 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v22 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1B9026C(actor, v24);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B9025C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9506/*"NoblePhantasm/CutIns"*/, v32, 1, 0LL);
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
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  __int64 v33; // x0
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v39; // x8
  struct BattlePerformance_o *v40; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v43; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v45; // w24
  char v46; // w0
  System_Collections_Generic_List_bool__o *v47; // x24
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v49; // w2
  int32_t v50; // w3
  struct BattlePerformance_o *v51; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v53; // x8
  unsigned __int64 v54; // x27
  UnityEngine_Object_o *v55; // x25
  System_Collections_Generic_List_bool__o *v56; // x24
  struct System_Boolean_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  struct System_Boolean_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v64; // x2
  struct BattlePerformance_o *v65; // x8
  struct UnityEngine_GameObject_array *v66; // x27
  __int64 v67; // x8
  unsigned __int64 v68; // x28
  UnityEngine_Object_o *v69; // x24
  Il2CppObject *v70; // x0
  const MethodInfo *v71; // x2
  int32_t v72; // w2
  int32_t v73; // w3
  struct UnityEngine_GameObject_array *v74; // x8
  __int64 v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  struct BattlePerformance_o *v78; // x8
  struct UnityEngine_GameObject_array *v79; // x8
  __int64 v80; // x0
  __int64 v81; // x8
  _QWORD *v82; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  bool v88; // w1
  BattleSequenceManager_o *v89; // x25
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v94; // w2
  int32_t v95; // w3
  BattleSequenceManager_o *v96; // x22
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  int32_t v100; // w2
  int32_t v101; // w3
  BattleSequenceManager_o *v102; // x23
  int32_t v103; // w2
  int32_t v104; // w3
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  BattleSequenceManager_c *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  BattleSequenceManager_o *v111; // x23
  int32_t v112; // w2
  int32_t v113; // w3
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  int32_t v117; // w2
  int32_t v118; // w3
  BattleSequenceManager_o *v119; // x23
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w2
  int32_t v123; // w3
  System_Collections_Hashtable_o *v124; // x0
  System_String_o *BgmName; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  const MethodInfo *v128; // x2
  BattleSequenceManager_o *v129; // x21
  ServantStatusBattleListViewItem_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v132; // x24
  System_Delegate_o *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  System_Delegate_o *v136; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v137; // x1
  int32_t v138; // w2
  int32_t v139; // w3
  const MethodInfo *v140; // x2
  __int64 v141; // x0
  System_Action_USSequencer__o *v142; // [xsp+8h] [xbp-78h]
  bool v143; // [xsp+10h] [xbp-70h]
  int v144; // [xsp+14h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+18h] [xbp-68h] BYREF
  int v146; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4A7251E & 1) == 0 )
  {
    sub_1B90010(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_1B90010(&BattleSequenceManager_TypeInfo, v8);
    sub_1B90010(&CommonUI_TypeInfo, v9);
    sub_1B90010(&FSUtility_TypeInfo, v10);
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, v11);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_1B90010(&int_TypeInfo, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1B90010(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1B90010(&object___TypeInfo, v18);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v19);
    sub_1B90010(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_1B90010(&float_TypeInfo, v21);
    sub_1B90010(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v22);
    sub_1B90010(&StringLiteral_12788/*"ShowNobleInfo"*/, v23);
    sub_1B90010(&StringLiteral_19683/*"from"*/, v24);
    sub_1B90010(&StringLiteral_9840/*"OnChangeBgmVolume"*/, v25);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v26);
    sub_1B90010(&StringLiteral_22314/*"onupdate"*/, v27);
    sub_1B90010(&StringLiteral_3227/*"Battle2D"*/, v28);
    sub_1B90010(&StringLiteral_24008/*"to"*/, v29);
    this = (BattleSequenceManager_o *)sub_1B90010(&iTween_TypeInfo, v30);
    byte_4A7251E = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_135;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_135;
  v33 = sub_1B900B8(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v33;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v7->fields.saveWaitEnemy, v33, v35, v36);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    chrId = v7->fields.chrId;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        this = (BattleSequenceManager_o *)BattleSequenceManager_TypeInfo;
      }
      if ( **(_BYTE **)&this->fields.overwriteSvtVoiceId )
      {
        if ( !CommonUI_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
        CommonUI__SetForceObi_16_9(1, 0LL);
      }
    }
    if ( !isDemoMode )
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)v7,
        (System_String_o *)StringLiteral_12788/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v39 = v7->fields.performance;
    if ( !v39 )
      goto LABEL_135;
    this = (BattleSequenceManager_o *)v39->fields.actioncamera;
    if ( !this )
      goto LABEL_135;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v40 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v40 )
      goto LABEL_135;
    this = (BattleSequenceManager_o *)v40->fields.actioncamera;
    if ( !this )
      goto LABEL_135;
    v142 = callback;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_135;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v43 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3227/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v43), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_135;
    v45 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v46 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3227/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v46) | v45, 0LL);
    v47 = (System_Collections_Generic_List_bool__o *)sub_1B9025C(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v47,
      (const MethodInfo_34C7128 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v47;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v7->fields.ActorActiveList, (int32_t)v47, v49, v50);
    v51 = v7->fields.performance;
    if ( !v51 )
      goto LABEL_135;
    p_actorlist = v51->fields.p_actorlist;
    v143 = isDemoMode;
    if ( !p_actorlist )
      goto LABEL_135;
    v53 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v53 >= 1 )
    {
      v54 = 0LL;
      while ( v54 < (unsigned int)v53 )
      {
        v55 = (UnityEngine_Object_o *)p_actorlist->m_Items[v54];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
        v56 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v55 )
            goto LABEL_135;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v55, 0LL);
          if ( !v56 )
            goto LABEL_135;
          items = v56->fields._items;
          v58 = Method_System_Collections_Generic_List_bool__Add__;
          ++v56->fields._version;
          if ( !items )
            goto LABEL_135;
          size = v56->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v56,
              (unsigned __int8)this & 1,
              *(const MethodInfo_34C798C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v56->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v55,
                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)Component_object,
            (BattleActorControl_o *)Component_object,
            v64);
        }
        else
        {
          if ( !v56 )
            goto LABEL_135;
          v60 = v56->fields._items;
          v61 = Method_System_Collections_Generic_List_bool__Add__;
          ++v56->fields._version;
          if ( !v60 )
            goto LABEL_135;
          v62 = v56->fields._size;
          if ( (unsigned int)v62 >= v60->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v56,
              0,
              *(const MethodInfo_34C798C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v56->fields._size = v62 + 1;
            v60->m_Items[v62 + 4] = 0;
          }
        }
        LODWORD(v53) = p_actorlist->max_length;
        if ( (__int64)++v54 >= (int)v53 )
          goto LABEL_46;
      }
LABEL_136:
      sub_1B90274(this, isOpponent);
    }
LABEL_46:
    v65 = v7->fields.performance;
    if ( !v65 )
      goto LABEL_135;
    v66 = v65->fields.e_actorlist;
    if ( !v66 )
      goto LABEL_135;
    v67 = *(_QWORD *)&v66->max_length;
    if ( (int)v67 >= 1 )
    {
      v68 = 0LL;
      do
      {
        if ( v68 >= (unsigned int)v67 )
          goto LABEL_136;
        v69 = (UnityEngine_Object_o *)v66->m_Items[v68];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v69, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v69 )
            goto LABEL_135;
          v70 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v69,
                  (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)v70,
            (BattleActorControl_o *)v70,
            v71);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v69,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_135;
          this = (BattleSequenceManager_o *)this[1].fields.FadeTargetPanelIndexs;
          if ( !this )
            goto LABEL_135;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v74 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_135;
            if ( v68 >= v74->max_length )
              goto LABEL_136;
            v75 = (__int64)v74 + 8 * v68;
            *(_QWORD *)(v75 + 32) = v69;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v75 + 32), (int32_t)v69, v72, v73);
            v78 = v7->fields.performance;
            if ( !v78 )
              goto LABEL_135;
            v79 = v78->fields.e_actorlist;
            if ( !v79 )
              goto LABEL_135;
            if ( v68 >= v79->max_length )
              goto LABEL_136;
            v80 = (__int64)v79 + 8 * v68;
            *(_QWORD *)(v80 + 32) = 0LL;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v80 + 32), 0, v76, v77);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v69, 0, 0LL);
            this = *p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_135;
            v81 = *(_QWORD *)&this->fields.m_CachedPtr;
            v82 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v81 )
              goto LABEL_135;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v81 + 24) )
            {
              v87 = v82[4];
              v88 = 1;
              goto LABEL_78;
            }
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v81 + m_CancellationTokenSource_low + 32) = 1;
          }
          else
          {
            v89 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v69,
                                                0LL);
            if ( !v89 )
              goto LABEL_135;
            v90 = *(_QWORD *)&v89->fields.m_CachedPtr;
            v91 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(v89->fields.m_CancellationTokenSource);
            if ( !v90 )
              goto LABEL_135;
            v92 = SLODWORD(v89->fields.m_CancellationTokenSource);
            if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
            {
              v87 = v91[4];
              v88 = (unsigned __int8)this & 1;
              this = v89;
              goto LABEL_78;
            }
            LODWORD(v89->fields.m_CancellationTokenSource) = v92 + 1;
            *(_BYTE *)(v90 + v92 + 32) = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_135;
          v84 = *(_QWORD *)&this->fields.m_CachedPtr;
          v85 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v84 )
            goto LABEL_135;
          v86 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
          {
            v87 = v85[4];
            v88 = 0;
LABEL_78:
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              v88,
              *(const MethodInfo_34C798C **)(*(_QWORD *)(v87 + 192) + 112LL));
            goto LABEL_79;
          }
          LODWORD(this->fields.m_CancellationTokenSource) = v86 + 1;
          *(_BYTE *)(v84 + v86 + 32) = 0;
        }
LABEL_79:
        LODWORD(v67) = v66->max_length;
      }
      while ( (__int64)++v68 < (int)v67 );
    }
    if ( !v143 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1B900B8(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_135;
    v96 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19683/*"from"*/;
    if ( StringLiteral_19683/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1B9014C(StringLiteral_19683/*"from"*/, v96->klass->_1.element_class);
      if ( !this )
        goto LABEL_137;
      *(_QWORD *)&isOpponent = StringLiteral_19683/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v96->fields.m_CancellationTokenSource) )
      goto LABEL_136;
    v96->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.sequenceManager, isOpponent, v94, v95);
    v146 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v146, v97, v98, v99);
    v102 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1B9014C(this, v96->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_136;
      *(_QWORD *)&v96->fields.servantId = v102;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.servantId, (int32_t)v102, v100, v101);
      this = (BattleSequenceManager_o *)StringLiteral_24008/*"to"*/;
      if ( StringLiteral_24008/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1B9014C(StringLiteral_24008/*"to"*/, v96->klass->_1.element_class);
        if ( !this )
          goto LABEL_137;
        *(_QWORD *)&isOpponent = StringLiteral_24008/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_136;
      *(_QWORD *)&v96->fields.testNpPer = isOpponent;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.testNpPer, isOpponent, v103, v104);
      v108 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v108 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v108->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v105,
                                          v106,
                                          v107);
      v111 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1B9014C(this, v96->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_136;
        v96->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v111;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.FadeTargetPanelIndexs, (int32_t)v111, v109, v110);
        this = (BattleSequenceManager_o *)StringLiteral_23966/*"time"*/;
        if ( StringLiteral_23966/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1B9014C(StringLiteral_23966/*"time"*/, v96->klass->_1.element_class);
          if ( !this )
            goto LABEL_137;
          *(_QWORD *)&isOpponent = StringLiteral_23966/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_136;
        *(_QWORD *)&v96->fields.IsPlaying = isOpponent;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.IsPlaying, isOpponent, v112, v113);
        v144 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v144, v114, v115, v116);
        v119 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1B9014C(this, v96->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_136;
          v96->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v119;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.ReleaseSoundNames, (int32_t)v119, v117, v118);
          this = (BattleSequenceManager_o *)StringLiteral_22314/*"onupdate"*/;
          if ( StringLiteral_22314/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1B9014C(StringLiteral_22314/*"onupdate"*/, v96->klass->_1.element_class);
            if ( !this )
              goto LABEL_137;
            *(_QWORD *)&isOpponent = StringLiteral_22314/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_136;
          v96->fields.performance = (struct BattlePerformance_o *)isOpponent;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.performance, isOpponent, v120, v121);
          this = (BattleSequenceManager_o *)StringLiteral_9840/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9840/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_118:
            if ( LODWORD(v96->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_136;
            v96->fields.seqObject = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v96->fields.seqObject, isOpponent, v122, v123);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v124 = iTween__Hash((System_Object_array *)v96, 0LL);
            iTween__ValueTo(gameObject, v124, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v126, v127);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v128);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v129 = this;
                    p_playerActors = (ServantStatusBattleListViewItem_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v132 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1B9025C(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v132,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v133 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v132, 0LL);
                    v136 = v133;
                    if ( v133 )
                    {
                      v137 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v133->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v133;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v133->klass == v137 )
                          goto LABEL_130;
                      }
                      sub_1B9052C(v133);
                    }
                    p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v136;
LABEL_130:
                    sub_1B8FFB4(p_playerActors, (int32_t)v136, v134, v135);
                    v7->fields.OnCompleteActorCallback = v142;
                    sub_1B8FFB4(
                      (ServantStatusBattleListViewItem_o *)&v7->fields.OnCompleteActorCallback,
                      (int32_t)v142,
                      v138,
                      v139);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v129, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v140);
                    return;
                  }
                }
              }
            }
LABEL_135:
            sub_1B9026C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1B9014C(StringLiteral_9840/*"OnChangeBgmVolume"*/, v96->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_9840/*"OnChangeBgmVolume"*/;
            goto LABEL_118;
          }
        }
      }
    }
LABEL_137:
    v141 = sub_1B90290(this);
    sub_1B90138(v141, 0LL);
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
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v11; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v13; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v15; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  VoiceMaster_o *v19; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v22; // x4
  __int64 v23; // x8
  unsigned __int64 v24; // x22

  if ( (byte_4A72537 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B90010(&Voice_TypeInfo, v6);
    byte_4A72537 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)actor & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    if ( LOBYTE(Component_object[30].klass) )
      return;
    monitor = Component_object[28].monitor;
    if ( !monitor )
      goto LABEL_31;
    if ( !monitor[81] && !BattleActorControl__isNoVoice((BattleActorControl_o *)Component_object, 0LL) )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)actor & 1) != 0 )
      {
        v11 = this->fields.performance;
        if ( !v11 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v11->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v13);
          if ( PlayedSoundList )
          {
            v15 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_VoiceMaster___);
                v19 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v19, chrId, FileName, v22);
                }
                v23 = *(_QWORD *)&v15->max_length;
                if ( (int)v23 >= 1 )
                {
                  v24 = 0LL;
                  do
                  {
                    if ( v24 >= (unsigned int)v23 )
                      sub_1B90274(MasterData_object, v17);
                    BattleSequenceManager__addServantVoicePlayed(this, v19, this->fields.chrId, v15->m_Items[v24], v18);
                    LODWORD(v23) = v15->max_length;
                    ++v24;
                  }
                  while ( (__int64)v24 < (int)v23 );
                }
                return;
              }
LABEL_31:
              sub_1B9026C(actor, method);
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

  if ( (byte_4A72515 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_16148/*"_"*/, voiceMaster);
    byte_4A72515 = 1;
  }
  FlagRequestNumber = System_String__Concat_61787092((System_String_o *)StringLiteral_16148/*"_"*/, labelName, 0LL);
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
    sub_1B9026C(FlagRequestNumber, v10);
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
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A72532 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      method);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v4);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_4A72532 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    battleTargetList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B9026C(0LL, v8);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v12.fields._current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v9 = this->fields.battleTargetList;
  if ( !v9 )
LABEL_13:
    sub_1B9026C(battleTargetList, method);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0LL);
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
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *v18; // x0
  UnityEngine_Object_o *v19; // x19

  if ( (byte_4A72519 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    sub_1B90010(&ServantAssetLoadManager_TypeInfo, v12);
    sub_1B90010(&StringLiteral_3218/*"Battle/Prefab/"*/, v13);
    byte_4A72519 = 1;
  }
  limitCount = this->fields.limitCount;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadNoblePhantasmEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                               tdId,
                                                               limitCount,
                                                               name,
                                                               seqIdFromMstTDSeqWeight,
                                                               0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Manager__loadNoblePhantasmEffect, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (Il2CppObject *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v16,
                                         (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v17 = System_String__Concat_61787092((System_String_o *)StringLiteral_3218/*"Battle/Prefab/"*/, name, 0LL);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = (Il2CppObject *)v19;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v16,
                                         (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return 0LL;
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x0
  __int64 v26; // x1
  WellFired_USTimelineContainer_o *v27; // x21
  System_String_o *monitor; // x22
  System_String_o *v29; // x1
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0

  if ( (byte_4A7251A & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_1B90010(&StringLiteral_1123/*"/"*/, v9);
    byte_4A7251A = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1B9026C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1B9026C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B9026C(0LL, v21);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B9052C(v20);
LABEL_37:
      sub_1B9026C(Component_object, v26);
    }
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      sub_1B9026C(0LL, v24);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v27 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v29 = System_String__Concat_61787092((System_String_o *)StringLiteral_1123/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v29, 0LL) )
      goto LABEL_27;
  }
  v27 = 0LL;
LABEL_27:
  v30 = sub_1B9014C(Enumerator, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_32;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_32:
      v35 = sub_1BE1FF0(v30, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  return v27;
}


void __fastcall BattleSequenceManager__setPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        int32_t value,
        System_String_o *playSoundId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4A72534 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_4A72534 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_31CFEB8 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1B9026C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_33CC9CC *)Method_System_Collections_Generic_HashSet_string__Add__);
}


void __fastcall BattleSequenceManager__set_NowTargetAlpha(
        BattleSequenceManager_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields.nowTargetAlpha = value;
}


void __fastcall BattleSequenceManager__set_SeqId(
        BattleSequenceManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SeqId_k__BackingField = value;
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
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v89; // x3
  UnityEngine_Object_o *v90; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__48781104; // x0
  BattleSequenceManager___c_c *v92; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x19
  System_Func_object__bool__o *_9__91_0; // x21
  Il2CppObject *v95; // x23
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_Collections_Generic_IEnumerable_T__o *v99; // x20
  System_Action_object__o *v100; // x21
  BattleSequenceManager_o *v101; // x0
  const MethodInfo *v102; // x3
  WellFired_USTimelineContainer_o *v103; // x26
  System_Collections_Generic_List_object__o *v104; // x21
  System_Collections_Generic_List_object__o *v105; // x29
  Il2CppObject *v106; // x20
  Il2CppObject *klass; // x23
  UnityEngine_Object_o *v108; // x23
  System_Collections_Generic_List_object__o *v109; // x27
  int32_t v110; // w2
  int32_t v111; // w3
  struct System_Object_array *items; // x8
  _QWORD *v113; // x9
  __int64 size; // x10
  __int64 v115; // x1
  Il2CppClass **v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  Il2CppClass *v119; // x1
  __int64 v120; // x27
  void *monitor; // x1
  int32_t v122; // w2
  int32_t v123; // w3
  Il2CppClass *v124; // x1
  int32_t v125; // w2
  int32_t v126; // w3
  int32_t v127; // w2
  int32_t v128; // w3
  Il2CppClass *v129; // x8
  Il2CppMethodPointer methodPtr; // x1
  __int64 v131; // x1
  Il2CppObject *v132; // x28
  struct UnityEngine_Vector3_StaticFields *v133; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v137; // x0
  ServantStatusBattleListViewItem_o *v138; // x27
  int32_t v139; // w2
  int32_t v140; // w3
  const MethodInfo *v141; // x1
  const MethodInfo *v142; // x2
  int v143; // w8
  __int64 v144; // x20
  int v145; // w24
  UnityEngine_Object_o *v146; // x27
  __int64 v147; // x8
  __int64 v148; // x26
  unsigned __int64 v149; // x25
  __int64 v150; // x28
  System_String_o *name; // x0
  int32_t v152; // w2
  int32_t v153; // w3
  UnityEngine_Object_c *v154; // x8
  int32_t v155; // w27
  System_String_o *v156; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  __int64 v159; // x10
  System_String_o *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  __int64 v163; // x9
  Il2CppClass *v164; // x1
  UnityEngine_Transform_o *parent; // x0
  ServantStatusBattleListViewItem_o *v166; // x0
  int32_t klass_high; // w29
  int32_t monitor_high; // w23
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x23
  int32_t v170; // w2
  int32_t v171; // w3
  System_Collections_Generic_List_object__o *v172; // x8
  struct System_Object_array *v173; // x9
  _QWORD *v174; // x10
  __int64 v175; // x11
  Il2CppClass **v176; // x0
  System_String_o *v177; // x0
  __int64 v178; // x9
  System_String_o **v179; // x29
  System_String_o *v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  void *v186; // x1
  int32_t v187; // w2
  int32_t v188; // w3
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  Il2CppClass **v192; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *v194; // x1
  __int64 v195; // x28
  int32_t v196; // w2
  int32_t v197; // w3
  UnityEngine_Transform_o *v198; // x28
  int v199; // s0
  System_Collections_Generic_List_object__o *v202; // x25
  int32_t v203; // w2
  int32_t v204; // w3
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  BattleSequenceManager_o *v209; // x0
  const MethodInfo *v210; // x3
  int32_t v211; // w2
  int32_t v212; // w3
  struct System_Object_array *v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x1
  Il2CppClass **v217; // x0
  Il2CppObject *current; // x24
  _BOOL8 v219; // x0
  __int64 v220; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v222; // x1
  void *v223; // x24
  int v224; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v226; // x0
  _QWORD *v227; // x25
  __int64 v228; // x8
  unsigned __int64 v229; // x28
  __int64 v230; // x26
  System_String_o *v231; // x0
  __int64 v232; // x9
  _BOOL8 v233; // x0
  __int64 v234; // x1
  int32_t v235; // w2
  int32_t v236; // w3
  UnityEngine_Component_o *v237; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v239; // w2
  int32_t v240; // w3
  struct System_Object_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  Il2CppClass **v244; // x0
  __int64 v245; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v247; // w19
  System_Collections_IEnumerator_c *v248; // x8
  __int64 v249; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v252; // x8
  __int64 v253; // x9
  System_Collections_IEnumerator_c **v254; // x10
  __int64 v255; // x0
  UnityEngine_Component_o *v256; // x0
  __int64 v257; // x1
  __int64 v258; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v260; // x1
  Il2CppObject *v261; // x0
  __int64 v262; // x1
  Il2CppObject *v263; // x25
  System_String_o *v264; // x0
  __int64 v265; // x1
  System_String_o *v266; // x0
  __int64 v267; // x1
  System_String_o *v268; // x0
  System_String_o *v269; // x0
  __int64 v270; // x0
  __int64 v271; // x8
  __int64 v272; // x24
  __int64 v273; // x9
  int *v274; // x10
  __int64 v275; // x0
  __int64 v276; // x1
  System_Collections_IEnumerator_c *v277; // x8
  __int64 v278; // x9
  int32_t *v279; // x10
  __int64 v280; // x0
  System_Collections_IEnumerator_c *v281; // x8
  __int64 v282; // x9
  System_Collections_IEnumerator_c **v283; // x10
  __int64 v284; // x0
  UnityEngine_Component_o *v285; // x0
  __int64 v286; // x1
  __int64 v287; // x9
  UnityEngine_GameObject_o *v288; // x0
  __int64 v289; // x1
  Il2CppObject *v290; // x0
  __int64 v291; // x1
  WellFired_USTimelineContainer_o *v292; // x24
  System_String_o *v293; // x0
  __int64 v294; // x1
  bool v295; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v297; // x27
  System_String_o *v298; // x0
  __int64 v299; // x1
  bool v300; // w28
  System_String_o *v301; // x0
  System_String_o *v302; // x0
  __int64 v303; // x1
  System_String_o *v304; // x0
  UnityEngine_Component_o *v305; // x0
  UnityEngine_Transform_o *v306; // x0
  System_String_o *v307; // x0
  __int64 v308; // x1
  UnityEngine_GameObject_o *v309; // x0
  __int64 v310; // x1
  UnityEngine_Transform_o *v311; // x25
  System_String_o *v312; // x0
  System_String_o *v313; // x0
  UnityEngine_Transform_o *v314; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v316; // x1
  System_String_o *v317; // x0
  bool v318; // w0
  __int64 v319; // x1
  __int64 *v320; // x8
  System_String_o *v321; // x0
  bool v322; // w0
  System_String_o *v323; // x28
  UnityEngine_GameObject_o *v324; // x0
  System_String_o *v325; // x27
  UnityEngine_Transform_o *v326; // x0
  __int64 v327; // x1
  UnityEngine_Object_o *v328; // x25
  _BOOL8 v329; // x0
  __int64 v330; // x1
  __int64 v331; // x1
  System_Collections_IEnumerator_o *v332; // x26
  System_Collections_IEnumerator_c *v333; // x8
  __int64 v334; // x9
  int32_t *v335; // x10
  __int64 v336; // x0
  System_Collections_IEnumerator_c *v337; // x8
  __int64 v338; // x9
  System_Collections_IEnumerator_c **v339; // x10
  __int64 v340; // x0
  UnityEngine_Component_o *v341; // x0
  __int64 v342; // x1
  UnityEngine_Object_o *v343; // x25
  __int64 v344; // x9
  UnityEngine_Object_o *v345; // x0
  __int64 v346; // x1
  System_String_o *v347; // x0
  __int64 v348; // x1
  System_String_o *v349; // x0
  _BOOL8 v350; // x0
  const MethodInfo *v351; // x2
  __int64 v352; // x1
  __int64 v353; // x1
  int32_t v354; // w25
  System_String_o *v355; // x26
  __int64 v356; // x0
  __int64 v357; // x25
  __int64 v358; // x8
  __int64 v359; // x9
  int *v360; // x10
  __int64 v361; // x0
  System_String_o *v362; // x25
  System_String_o *v363; // x0
  __int64 v364; // x1
  System_String_o *v365; // x0
  __int64 v366; // x1
  System_String_array *v367; // x0
  __int64 v368; // x1
  __int64 v369; // x1
  System_String_o *v370; // x26
  UnityEngine_GameObject_o *v371; // x0
  __int64 v372; // x1
  UnityEngine_Transform_o *v373; // x25
  System_String_o *v374; // x0
  System_String_o *v375; // x0
  __int64 v376; // x1
  System_String_o *v377; // x0
  UnityEngine_Transform_o *v378; // x0
  Il2CppObject *v379; // x25
  System_Collections_Generic_List_object__o *v380; // x0
  _BOOL8 v381; // x0
  __int64 v382; // x1
  System_String_o *v383; // x0
  __int64 v384; // x1
  System_String_o *v385; // x1
  _BOOL8 v386; // x0
  __int64 v387; // x1
  BattleBuffData_o *v388; // x3
  const MethodInfo *v389; // x5
  UnityEngine_Object_c *v390; // x8
  int32_t v391; // w4
  __int64 v392; // x1
  int32_t v393; // w2
  int32_t v394; // w3
  System_Collections_Generic_List_object__o *v395; // x0
  struct System_Object_array *v396; // x8
  _QWORD *v397; // x9
  __int64 v398; // x10
  Il2CppClass **v399; // x8
  __int64 v400; // x0
  __int64 v401; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v403; // x1
  UnityEngine_Transform_o *v404; // x0
  UnityEngine_Transform_o *v405; // x0
  __int64 v406; // x1
  float v407; // s8
  float v408; // s9
  float v409; // s10
  __int64 v410; // x1
  UnityEngine_Transform_o *v411; // x26
  UnityEngine_GameObject_o *v412; // x0
  UnityEngine_Transform_o *v413; // x0
  UnityEngine_Transform_o *v414; // x0
  __int64 v415; // x1
  BattleSequenceManager_o *v416; // x0
  const MethodInfo *v417; // x4
  int32_t v418; // w26
  UnityEngine_Transform_o *v419; // x0
  __int64 v420; // x1
  UnityEngine_Transform_o *v421; // x0
  System_String_o *v422; // x0
  __int64 v423; // x1
  System_String_o *v424; // x0
  System_String_o *v425; // x0
  const MethodInfo *v426; // x3
  int32_t v427; // w2
  const MethodInfo *v428; // x3
  System_Object_array *EventCount; // x0
  __int64 v430; // x1
  System_Object_array *v431; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v434; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v436; // x0
  __int64 v437; // x1
  Il2CppObject *v438; // x27
  System_String_o *v439; // x0
  __int64 v440; // x9
  _BOOL8 v441; // x0
  __int64 v442; // x1
  int32_t v443; // w2
  int32_t v444; // w3
  UnityEngine_Component_o *v445; // x0
  UnityEngine_Transform_o *v446; // x0
  int32_t v447; // w2
  int32_t v448; // w3
  struct System_Object_array *v449; // x8
  _QWORD *v450; // x9
  __int64 v451; // x10
  Il2CppClass **v452; // x0
  int32_t layer; // w26
  __int64 v454; // x20
  __int64 v455; // x8
  __int64 v456; // x23
  __int64 v457; // x9
  int *v458; // x10
  __int64 v459; // x0
  __int64 v460; // x1
  UnityEngine_Object_c *v461; // x8
  UnityEngine_Object_o *v462; // x21
  Il2CppClass *v463; // x8
  UnityEngine_Object_o *v464; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v466; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v468; // x4
  int32_t v469; // w22
  System_String_o *v470; // x0
  const MethodInfo *v471; // x4
  UnityEngine_Object_c *v472; // x8
  int v473; // w20
  BalanceConfig_c *v474; // x0
  int32_t v475; // w20
  System_String_o *v476; // x0
  const MethodInfo *v477; // x4
  __int64 v478; // x0
  __int64 v479; // x20
  __int64 v480; // x8
  __int64 v481; // x9
  int *v482; // x10
  __int64 v483; // x0
  int v484; // w1
  int v485; // w19
  void *v486; // x0
  void *v487; // x25
  __int64 v488; // x0
  __int64 v489; // x19
  __int64 v490; // x8
  __int64 v491; // x9
  int *v492; // x10
  __int64 v493; // x0
  System_String_o *v494; // [xsp+8h] [xbp-138h]
  System_String_o *v495; // [xsp+10h] [xbp-130h]
  Il2CppObject *item; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v497; // [xsp+20h] [xbp-120h]
  char v498; // [xsp+20h] [xbp-120h]
  UnityEngine_Object_o *v499; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *sourcea; // [xsp+30h] [xbp-110h]
  bool v502; // [xsp+38h] [xbp-108h]
  __int64 v503; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v504; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v506; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v509; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v510; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v512; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v514; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A72513 & 1) == 0 )
  {
    sub_1B90010(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo, callback);
    sub_1B90010(&BalanceConfig_TypeInfo, v7);
    sub_1B90010(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___, v8);
    sub_1B90010(&Method_BattleSequenceManager__setup_b__91_1__, v9);
    sub_1B90010(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v10);
    sub_1B90010(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___, v11);
    sub_1B90010(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v12);
    sub_1B90010(&Method_DataManager_GetMasterData_VoiceMaster___, v13);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v21);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v22);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v23);
    sub_1B90010(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo, v24);
    sub_1B90010(&System_GC_TypeInfo, v25);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v26);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v27);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v28);
    sub_1B90010(&System_IDisposable_TypeInfo, v29);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v30);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__Add__, v31);
    sub_1B90010(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v32);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v33);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v34);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v35);
    sub_1B90010(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v36);
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v37);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v38);
    sub_1B90010(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v39);
    sub_1B90010(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v40);
    sub_1B90010(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v41);
    sub_1B90010(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v42);
    sub_1B90010(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v43);
    sub_1B90010(&NGUITools_TypeInfo, v44);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v45);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject____76256224, v46);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v47);
    sub_1B90010(&ServantAssetLoadManager_TypeInfo, v48);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49);
    sub_1B90010(&UnityEngine_Transform_TypeInfo, v50);
    sub_1B90010(&Method_BattleSequenceManager___c__setup_b__91_0__, v51);
    sub_1B90010(&BattleSequenceManager___c_TypeInfo, v52);
    sub_1B90010(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v53);
    sub_1B90010(&WellFired_USFGOAttachToParentEvent_TypeInfo, v54);
    sub_1B90010(&WellFired_USFGOChangeBgEvent_TypeInfo, v55);
    sub_1B90010(&WellFired_USFGOPlayCutInEvent_TypeInfo, v56);
    sub_1B90010(&WellFired_USFGOSetCameraEvent_TypeInfo, v57);
    sub_1B90010(&Voice_TypeInfo, v58);
    sub_1B90010(&StringLiteral_1131/*"/Actor/chr/"*/, v59);
    sub_1B90010(&StringLiteral_3229/*"BattleBG"*/, v60);
    sub_1B90010(&StringLiteral_1141/*"/BattleActors/"*/, v61);
    sub_1B90010(&StringLiteral_3231/*"BattleCamera"*/, v62);
    sub_1B90010(&StringLiteral_3234/*"BattleCutIn"*/, v63);
    sub_1B90010(&StringLiteral_14882/*"USFGOSetCameraEvent"*/, v64);
    sub_1B90010(&StringLiteral_2234/*"Actor"*/, v65);
    sub_1B90010(&StringLiteral_17384/*"body_level_"*/, v66);
    sub_1B90010(&StringLiteral_1133/*"/Actor/chr/weapon_level_"*/, v67);
    sub_1B90010(&StringLiteral_1132/*"/Actor/chr/body_level_"*/, v68);
    sub_1B90010(&StringLiteral_6370/*"FGOSequenceManager"*/, v69);
    sub_1B90010(&StringLiteral_1135/*"/AllEffects/"*/, v70);
    sub_1B90010(&StringLiteral_17991/*"chr(Clone)"*/, v71);
    sub_1B90010(&StringLiteral_3989/*"Cameras/BattleCamera"*/, v72);
    sub_1B90010(&StringLiteral_14880/*"USFGOChangeBgEvent"*/, v73);
    sub_1B90010(&StringLiteral_1153/*"/BattleCamera"*/, v74);
    sub_1B90010(&StringLiteral_1156/*"/CutIns/"*/, v75);
    sub_1B90010(&StringLiteral_3227/*"Battle2D"*/, v76);
    sub_1B90010(&StringLiteral_1155/*"/Cameras/BattleCamera"*/, v77);
    sub_1B90010(&StringLiteral_16799/*"animCamLoc"*/, v78);
    sub_1B90010(&StringLiteral_24712/*"weapon_level_"*/, v79);
    sub_1B90010(&StringLiteral_731/*"(Clone)"*/, v80);
    sub_1B90010(&StringLiteral_14879/*"USFGOAttachToParentEvent"*/, v81);
    sub_1B90010(&StringLiteral_1/*""*/, v82);
    sub_1B90010(&StringLiteral_1130/*"/Actor/chr"*/, v83);
    sub_1B90010(&StringLiteral_14878/*"USFGOAnimationCameraEvent"*/, v84);
    sub_1B90010(&StringLiteral_1212/*"0"*/, v85);
    sub_1B90010(&StringLiteral_14881/*"USFGOPlayCutInEvent"*/, v86);
    byte_4A72513 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v510, 0, sizeof(v510));
  memset(&v509, 0, sizeof(v509));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_432;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v90 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2234/*"Actor"*/,
                                  v89);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[6].klass;
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v90 )
      goto LABEL_432;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v90,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  if ( !Component_object )
    goto LABEL_432;
  ComponentsInChildren_object__48781104 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__48781104(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_2E85730 *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v92 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v90;
  v502 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v93 = ComponentsInChildren_object__48781104;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v92 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__48781104 = v93;
  }
  _9__91_0 = (System_Func_object__bool__o *)v92->static_fields->__9__91_0;
  v497 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__91_0 )
  {
    source = ComponentsInChildren_object__48781104;
    if ( !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92);
      v92 = BattleSequenceManager___c_TypeInfo;
    }
    v95 = (Il2CppObject *)v92->static_fields->__9;
    _9__91_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__91_0, v95, Method_BattleSequenceManager___c__setup_b__91_0__, 0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__91_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v97, v98);
    ComponentsInChildren_object__48781104 = source;
  }
  v99 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__48781104,
                                                         (System_Func_TSource__bool__o *)_9__91_0,
                                                         (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v100 = (System_Action_object__o *)sub_1B9025C(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v100, object, Method_BattleSequenceManager__setup_b__91_1__, 0LL);
  BasicHelper__ForEach_object_(
    v99,
    (System_Action_T__o *)v100,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v103 = BattleSequenceManager__searchTimeline(
           v101,
           (WellFired_USSequencer_o *)Component_object,
           (System_String_o *)StringLiteral_6370/*"FGOSequenceManager"*/,
           v102);
  v104 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v104,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v105 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[6].klass;
  if ( !seqObject )
LABEL_432:
    sub_1B9026C(seqObject, callback);
  v106 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)seqObject,
           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v499 = (UnityEngine_Object_o *)v106;
  sourcea = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v105;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v103, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    v108 = (UnityEngine_Object_o *)v106;
    if ( !v103 )
      goto LABEL_432;
    WellFired_USTimelineContainer__set_AffectedObject(v103, (UnityEngine_Transform_o *)seqObject, 0LL);
    v109 = (System_Collections_Generic_List_object__o *)object[21].klass;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v103, 0LL);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !v109 )
      goto LABEL_432;
    items = v109->fields._items;
    v113 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v109->fields._version;
    if ( !items )
      goto LABEL_432;
    size = v109->fields._size;
    v115 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v109,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    }
    else
    {
      v116 = &items->obj.klass + size;
      v109->fields._size = size + 1;
      v116[4] = (Il2CppClass *)v115;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v116 + 4), v115, v110, v111);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v103, 0LL);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2E84CC0 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_432;
    v119 = object[8].klass;
    v120 = seqObject;
    *(_QWORD *)(seqObject + 32) = v119;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(seqObject + 32), (int32_t)v119, v117, v118);
    monitor = object[8].monitor;
    *(_QWORD *)(v120 + 40) = monitor;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v120 + 40), (int32_t)monitor, v122, v123);
    v124 = object[9].klass;
    *(_QWORD *)(v120 + 48) = v124;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v120 + 48), (int32_t)v124, v125, v126);
    v129 = object[5].klass;
    if ( !v129 )
      goto LABEL_432;
    methodPtr = v129->vtable[6].methodPtr;
    *(_QWORD *)(v120 + 96) = methodPtr;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v120 + 96), (int32_t)methodPtr, v127, v128);
    v132 = (Il2CppObject *)object[21].monitor;
    if ( !byte_4A6A9C1 )
    {
      sub_1B90010(&UnityEngine_Vector3_TypeInfo, v131);
      byte_4A6A9C1 = 1;
    }
    v133 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v133->zeroVector.fields.x;
    y = v133->zeroVector.fields.y;
    z = v133->zeroVector.fields.z;
    if ( !byte_4A6A9C7 )
    {
      sub_1B90010(&UnityEngine_Quaternion_TypeInfo, v131);
      byte_4A6A9C7 = 1;
    }
    v512.fields.x = x;
    v512.fields.y = y;
    v512.fields.z = z;
    v137 = UnityEngine_Object__Instantiate_object__49357880(
             v132,
             v512,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_2F12438 *)Method_UnityEngine_Object_Instantiate_GameObject____76256224);
    *(_QWORD *)(v120 + 72) = v137;
    v138 = (ServantStatusBattleListViewItem_o *)(v120 + 72);
    sub_1B8FFB4(v138, (int32_t)v137, v139, v140);
    seqObject = (__int64)v138->klass;
    if ( !v138->klass )
      goto LABEL_432;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !v502 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v141);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v142);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v103,
                           1,
                           (const MethodInfo_2E857AC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_432;
    v143 = *(_DWORD *)(seqObject + 24);
    v144 = seqObject;
    if ( v143 >= 1 )
    {
      v145 = 0;
      v146 = 0LL;
      v503 = seqObject;
      while ( 1 )
      {
        if ( v145 >= (unsigned int)v143 )
LABEL_436:
          sub_1B90274(seqObject, callback);
        seqObject = *(_QWORD *)(v144 + 8LL * v145 + 32);
        if ( !seqObject )
          goto LABEL_432;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_432;
        v147 = *(_QWORD *)(seqObject + 24);
        v148 = seqObject;
        if ( (int)v147 >= 1 )
          break;
LABEL_109:
        v144 = v503;
        ++v145;
        v143 = *(_DWORD *)(v503 + 24);
        if ( v145 >= v143 )
          goto LABEL_110;
      }
      v149 = 0LL;
      while ( 1 )
      {
        if ( v149 >= (unsigned int)v147 )
          goto LABEL_436;
        v150 = *(_QWORD *)(v148 + 32 + 8 * v149);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v150, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v150 )
            goto LABEL_432;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v150, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14878/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v146, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !v108 )
                  goto LABEL_432;
                v154 = v108[19].klass;
                if ( !v154 )
                  goto LABEL_432;
                v155 = (int32_t)v154[2]._1.name;
              }
              else
              {
                v155 = 0;
              }
              klass_high = HIDWORD(object[11].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_16799/*"animCamLoc"*/,
                                                                   v155,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v172 = (System_Collections_Generic_List_object__o *)object[21].klass;
              v105 = (System_Collections_Generic_List_object__o *)sourcea;
              if ( !v172 )
                goto LABEL_432;
              v173 = v172->fields._items;
              v108 = v499;
              v174 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v172->fields._version;
              if ( !v173 )
                goto LABEL_432;
              v175 = v172->fields._size;
              v146 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v175 >= v173->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v172,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
              }
              else
              {
                v176 = &v173->obj.klass + v175;
                v172->fields._size = v175 + 1;
                v176[4] = (Il2CppClass *)v146;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v176 + 4), (int32_t)v146, v170, v171);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v150 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v150 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
              goto LABEL_437;
            }
            *(_QWORD *)(v150 + 56) = v146;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v150 + 56), (int32_t)v146, v152, v153);
            v194 = object[8].klass;
            *(_QWORD *)(v150 + 64) = v194;
            v195 = v150 + 64;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v195, (int32_t)v194, v196, v197);
            *(_BYTE *)(v195 + 28) = 0;
            if ( !v146 )
              goto LABEL_432;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v146, 0LL);
            if ( !object[6].klass )
              goto LABEL_432;
            v198 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[6].klass, 0LL);
            if ( !seqObject )
              goto LABEL_432;
            *(UnityEngine_Vector3_o *)&v199 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v198 )
              goto LABEL_432;
            UnityEngine_Transform__set_position(v198, *(UnityEngine_Vector3_o *)&v199, 0LL);
          }
          else
          {
            v156 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v150, 0LL);
            seqObject = System_String__op_Equality(v156, (System_String_o *)StringLiteral_14881/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v105 )
                goto LABEL_432;
              v159 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v150 + 304LL) >= (unsigned int)v159 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v150 + 200LL) + 8 * v159 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v150
                         : 0LL;
              else
                callback = 0LL;
              v189 = v105->fields._items;
              v190 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v105->fields._version;
              if ( !v189 )
                goto LABEL_432;
              v191 = v105->fields._size;
              if ( (unsigned int)v191 >= v189->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v105,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
                goto LABEL_108;
              }
              v192 = &v189->obj.klass + v191;
              v105->fields._size = v191 + 1;
              v192[4] = (Il2CppClass *)callback;
              v166 = (ServantStatusBattleListViewItem_o *)(v192 + 4);
              goto LABEL_98;
            }
            v160 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v150, 0LL);
            if ( System_String__op_Equality(v160, (System_String_o *)StringLiteral_14882/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v163 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v150 + 304LL) < (unsigned int)v163
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v150 + 200LL) + 8 * v163 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_437;
              }
              v164 = object[8].klass;
              *(_QWORD *)(v150 + 56) = v164;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v150 + 56), (int32_t)v164, v161, v162);
              seqObject = (__int64)object[8].klass;
              if ( !seqObject )
                goto LABEL_432;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_432;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v150 + 64) = parent;
              LODWORD(callback) = (_DWORD)parent;
              v166 = (ServantStatusBattleListViewItem_o *)(v150 + 64);
LABEL_98:
              sub_1B8FFB4(v166, (int32_t)callback, v157, v158);
              goto LABEL_108;
            }
            v177 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v150, 0LL);
            seqObject = System_String__op_Equality(v177, (System_String_o *)StringLiteral_14880/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v178 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v150 + 304LL) < (unsigned int)v178
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v150 + 200LL) + 8 * v178 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
LABEL_437:
                sub_1B9052C(v150);
LABEL_438:
                sub_1B9052C(v256);
LABEL_439:
                sub_1B9026C(v436, v437);
              }
              v179 = (System_String_o **)(v150 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v150 + 64),
                     (System_String_o *)StringLiteral_1212/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v179, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_432;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v180 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v179 = v180;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v150 + 64), (int32_t)v180, v181, v182);
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_432;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v183 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v150 + 72) = v183;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v150 + 72), (int32_t)v183, v184, v185);
                v186 = object[24].monitor;
                *(_QWORD *)(v150 + 136) = v186;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v150 + 136), (int32_t)v186, v187, v188);
              }
              v105 = (System_Collections_Generic_List_object__o *)sourcea;
            }
          }
        }
LABEL_108:
        LODWORD(v147) = *(_DWORD *)(v148 + 24);
        if ( (__int64)++v149 >= (int)v147 )
          goto LABEL_109;
      }
    }
  }
LABEL_110:
  v202 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v202,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v202 )
    goto LABEL_432;
  v205 = v202->fields._items;
  v206 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v202->fields._version;
  if ( !v205 )
    goto LABEL_432;
  v207 = v202->fields._size;
  if ( (unsigned int)v207 >= v205->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v202,
      item,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
  }
  else
  {
    v208 = &v205->obj.klass + v207;
    v202->fields._size = v207 + 1;
    v208[4] = (Il2CppClass *)item;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v208 + 4), (int32_t)item, v203, v204);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v209,
                         (WellFired_USSequencer_o *)v497,
                         (System_String_o *)StringLiteral_3989/*"Cameras/BattleCamera"*/,
                         v210);
  v213 = v202->fields._items;
  v214 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v202->fields._version;
  if ( !v213 )
    goto LABEL_432;
  v215 = v202->fields._size;
  v216 = seqObject;
  if ( (unsigned int)v215 >= v213->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v202,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
  }
  else
  {
    v217 = &v213->obj.klass + v215;
    v202->fields._size = v215 + 1;
    v217[4] = (Il2CppClass *)v216;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v217 + 4), v216, v211, v212);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v506,
    v202,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v510 = v506;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v510,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v510.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v219 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v219 )
    {
      if ( !current )
        sub_1B9026C(v219, v220);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2E857AC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v223 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1B9026C(0LL, v222);
      v224 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v224 >= 1 )
      {
        for ( i = 0; i < v224; ++i )
        {
          if ( i >= (unsigned int)v224 )
            sub_1B90274(ComponentsInChildren_object, v222);
          v226 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v223 + i + 4);
          if ( !v226 )
            sub_1B9026C(0LL, v222);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v226, 0LL);
          v227 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1B9026C(0LL, v222);
          v228 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v228 >= 1 )
          {
            v229 = 0LL;
            do
            {
              if ( v229 >= (unsigned int)v228 )
                sub_1B90274(ComponentsInChildren_object, v222);
              v230 = v227[v229 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v230,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v230 )
                  sub_1B9026C(ComponentsInChildren_object, v222);
                v231 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v230, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v231,
                                                        (System_String_o *)StringLiteral_14879/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v232 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v230 + 304LL) < (unsigned int)v232
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v230 + 200LL) + 8 * v232 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B9052C(v230);
LABEL_429:
                    sub_1B9026C(v233, v234);
                  }
                  v233 = System_String__op_Equality(
                           *(System_String_o **)(v230 + 80),
                           (System_String_o *)StringLiteral_3231/*"BattleCamera"*/,
                           0LL);
                  if ( v233 )
                  {
                    v237 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v237 )
                      sub_1B9026C(0LL, v234);
                    transform = UnityEngine_Component__get_transform(v237, 0LL);
                    *(_QWORD *)(v230 + 64) = transform;
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v230 + 64), (int32_t)transform, v239, v240);
                  }
                  else
                  {
                    if ( !v104 )
                      goto LABEL_429;
                    v241 = v104->fields._items;
                    v242 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v104->fields._version;
                    if ( !v241 )
                      sub_1B9026C(v233, v234);
                    v243 = v104->fields._size;
                    if ( (unsigned int)v243 >= v241->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v104,
                        (Il2CppObject *)v230,
                        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v244 = &v241->obj.klass + v243;
                      v104->fields._size = v243 + 1;
                      v244[4] = (Il2CppClass *)v230;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v244 + 4), v230, v235, v236);
                    }
                  }
                }
              }
              LODWORD(v228) = *((_DWORD *)v227 + 6);
              ++v229;
            }
            while ( (__int64)v229 < (int)v228 );
          }
          v224 = *((_DWORD *)v223 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v510,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v497, 0LL);
  if ( !seqObject )
    goto LABEL_432;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1B9026C(0LL, v245);
  v247 = 0;
  while ( 1 )
  {
    v248 = Enumerator->klass;
    v249 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v248->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v249;
        p_offset += 4;
        if ( !v249 )
          goto LABEL_159;
      }
      p_method = (__int64)&v248->vtable[*p_offset].method;
    }
    else
    {
LABEL_159:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v252 = Enumerator->klass;
    v253 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v254 = (System_Collections_IEnumerator_c **)&v252->_1.interfaceOffsets->offset;
      while ( *(v254 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v253;
        v254 += 2;
        if ( !v253 )
          goto LABEL_166;
      }
      v255 = (__int64)&v252->vtable[*(_DWORD *)v254 + 1].method;
    }
    else
    {
LABEL_166:
      v255 = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v256 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v255)(
                                        Enumerator,
                                        *(_QWORD *)(v255 + 8));
    if ( !v256 )
      sub_1B9026C(0LL, v257);
    v258 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v256->klass->vtable._0_Equals.methodPtr) < (unsigned int)v258
      || (UnityEngine_Transform_c *)v256->klass->_2.typeHierarchy[v258 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_438;
    }
    gameObject = UnityEngine_Component__get_gameObject(v256, 0LL);
    if ( !gameObject )
      sub_1B9026C(0LL, v260);
    v261 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v263 = v261;
    if ( !v261 )
      goto LABEL_442;
    v264 = (System_String_o *)v261[2].monitor;
    if ( !v264 )
      sub_1B9026C(0LL, v262);
    if ( System_String__StartsWith(v264, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) && v263[2].monitor )
    {
      v266 = (System_String_o *)v263[2].monitor;
      if ( !v266 )
        sub_1B9026C(0LL, v265);
      if ( System_String__StartsWith(v266, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
      {
        v268 = (System_String_o *)v263[2].monitor;
        if ( !v268 )
          sub_1B9026C(0LL, v267);
        v269 = System_String__Substring_61806096(v268, v268->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v247 += System_Int32__TryParse(v269, result, 0LL);
      }
    }
  }
  v270 = sub_1B9014C(Enumerator, System_IDisposable_TypeInfo);
  if ( v270 )
  {
    v271 = *(_QWORD *)v270;
    v272 = v270;
    v273 = *(unsigned __int16 *)(*(_QWORD *)v270 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v270 + 302LL) )
    {
      v274 = (int *)(*(_QWORD *)(v271 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v274 - 1) != System_IDisposable_TypeInfo )
      {
        --v273;
        v274 += 4;
        if ( !v273 )
          goto LABEL_185;
      }
      v275 = v271 + 16LL * *v274 + 312;
    }
    else
    {
LABEL_185:
      v275 = sub_1BE1FF0(v270, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v275)(v272, *(_QWORD *)(v275 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v497, 0LL);
  if ( !seqObject )
    goto LABEL_432;
  v504 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v504 )
    sub_1B9026C(0LL, v276);
  v498 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v277 = v504->klass;
          v278 = *(unsigned __int16 *)(&v504->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v504->klass->_2.bitflags2 + 3) )
          {
            v279 = &v277->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v279 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v278;
              v279 += 4;
              if ( !v278 )
                goto LABEL_195;
            }
            v280 = (__int64)&v277->vtable[*v279].method;
          }
          else
          {
LABEL_195:
            v280 = sub_1BE1FF0(v504, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v280)(
                  v504,
                  *(_QWORD *)(v280 + 8)) & 1) == 0 )
          {
            v454 = 0LL;
            goto LABEL_380;
          }
          v281 = v504->klass;
          v282 = *(unsigned __int16 *)(&v504->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v504->klass->_2.bitflags2 + 3) )
          {
            v283 = (System_Collections_IEnumerator_c **)&v281->_1.interfaceOffsets->offset;
            while ( *(v283 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v282;
              v283 += 2;
              if ( !v282 )
                goto LABEL_202;
            }
            v284 = (__int64)&v281->vtable[*(_DWORD *)v283 + 1].method;
          }
          else
          {
LABEL_202:
            v284 = sub_1BE1FF0(v504, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v285 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v284)(
                                              v504,
                                              *(_QWORD *)(v284 + 8));
          if ( !v285 )
            sub_1B9026C(0LL, v286);
          v287 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v285->klass->vtable._0_Equals.methodPtr) < (unsigned int)v287
            || (UnityEngine_Transform_c *)v285->klass->_2.typeHierarchy[v287 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_441:
            sub_1B9052C(v285);
LABEL_442:
            sub_1B9026C(v261, v262);
          }
          v288 = UnityEngine_Component__get_gameObject(v285, 0LL);
          if ( !v288 )
            sub_1B9026C(0LL, v289);
          v290 = UnityEngine_GameObject__GetComponent_object_(
                   v288,
                   (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v292 = (WellFired_USTimelineContainer_o *)v290;
          if ( !v290 )
            sub_1B9026C(0LL, v291);
          v293 = (System_String_o *)v290[2].monitor;
          if ( !v293 )
            sub_1B9026C(0LL, v291);
          v295 = System_String__StartsWith(v293, (System_String_o *)StringLiteral_1135/*"/AllEffects/"*/, 0LL);
          if ( v295 )
          {
            affectedObjectPath = v292->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1B9026C(0LL, v294);
            v297 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v297 = 0LL;
          }
          v298 = v292->fields.affectedObjectPath;
          if ( !v298 )
            sub_1B9026C(0LL, v294);
          v300 = System_String__StartsWith(v298, (System_String_o *)StringLiteral_1156/*"/CutIns/"*/, 0LL);
          if ( v300 )
          {
            v301 = v292->fields.affectedObjectPath;
            if ( !v301 )
              sub_1B9026C(0LL, v299);
            v297 = System_String__Substring(v301, 8, 0LL);
          }
          v302 = v292->fields.affectedObjectPath;
          if ( !v302 )
            sub_1B9026C(0LL, v299);
          if ( !System_String__StartsWith(v302, (System_String_o *)StringLiteral_1153/*"/BattleCamera"*/, 0LL) )
          {
            v304 = v292->fields.affectedObjectPath;
            if ( !v304 )
              sub_1B9026C(0LL, v303);
            if ( !System_String__StartsWith(v304, (System_String_o *)StringLiteral_1155/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v305 = (UnityEngine_Component_o *)object[8].klass;
          if ( !v305 )
            sub_1B9026C(0LL, v303);
          v306 = UnityEngine_Component__get_transform(v305, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v292, v306, 0LL);
        }
        v307 = v292->fields.affectedObjectPath;
        if ( !v307 )
          sub_1B9026C(0LL, v303);
        if ( System_String__StartsWith(v307, (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/, 0LL) )
          break;
        v349 = v292->fields.affectedObjectPath;
        if ( !v349 )
          sub_1B9026C(0LL, v308);
        v350 = System_String__StartsWith(v349, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL);
        if ( v350 )
          v297 = v292->fields.affectedObjectPath;
        if ( v297 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v350, v297, v351) )
            goto LABEL_340;
          if ( v295 )
          {
            v354 = System_String__IndexOf(v297, 0x2Fu, 0LL);
            if ( (v354 & 0x80000000) == 0 )
            {
              v355 = System_String__Substring(v297, v354 + 1, 0LL);
              v297 = System_String__Substring_61806096(v297, 0, v354, 0LL);
              goto LABEL_294;
            }
            if ( (v498 & 1) != 0 )
            {
              v355 = 0LL;
LABEL_294:
              v380 = (System_Collections_Generic_List_object__o *)object[21].klass;
              if ( !v380 )
                sub_1B9026C(0LL, v353);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v506,
                v380,
                (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v495 = v355;
              v509 = v506;
              while ( 1 )
              {
                v381 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v509,
                         (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v381 )
                  break;
                v379 = v509.fields._current;
                if ( !v509.fields._current )
                  sub_1B9026C(v381, v382);
                v383 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v509.fields._current, 0LL);
                if ( !v383 )
                  sub_1B9026C(0LL, v384);
                v385 = System_String__Replace_61806720(
                         v383,
                         (System_String_o *)StringLiteral_731/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v297, v385, 0LL) )
                  goto LABEL_302;
              }
              v379 = 0LL;
LABEL_302:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v509,
                (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v498 = 1;
              goto LABEL_304;
            }
            v355 = 0LL;
            v379 = 0LL;
            v498 = 0;
          }
          else
          {
            v355 = 0LL;
            v379 = 0LL;
          }
LABEL_304:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v379, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v386 = UnityEngine_Object__op_Inequality(v499, 0LL, 0LL);
            if ( v386 )
            {
              if ( !v499 )
                sub_1B9026C(v386, v387);
              v390 = v499[19].klass;
              if ( !v390 )
                sub_1B9026C(v386, v387);
              v391 = (int32_t)v390[2]._1.name;
            }
            else
            {
              v391 = 0;
            }
            v379 = (Il2CppObject *)BattleSequenceManager__searchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[11].klass),
                                     v297,
                                     v388,
                                     v391,
                                     v389);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v379, 0LL, 0LL) )
            {
              v395 = (System_Collections_Generic_List_object__o *)object[21].klass;
              if ( !v395 )
                sub_1B9026C(0LL, v392);
              v396 = v395->fields._items;
              v397 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v395->fields._version;
              if ( !v396 )
                sub_1B9026C(v395, v392);
              v398 = v395->fields._size;
              if ( (unsigned int)v398 >= v396->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v395,
                  v379,
                  *(const MethodInfo_35109C0 **)(*(_QWORD *)(v397[4] + 192LL) + 112LL));
              }
              else
              {
                v399 = &v396->obj.klass + v398;
                v395->fields._size = v398 + 1;
                v399[4] = (Il2CppClass *)v379;
                sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v399 + 4), (int32_t)v379, v393, v394);
              }
              if ( !v379 )
                sub_1B9026C(v400, v401);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v379, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v379, 0LL, 0LL) )
            goto LABEL_340;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v355, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v379 )
              sub_1B9026C(IsNullOrEmpty, v403);
            v419 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v379, 0LL);
            if ( !v419 )
              sub_1B9026C(0LL, v420);
            v421 = UnityEngine_Transform__Find(v419, v355, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v292, v421, 0LL);
            goto LABEL_340;
          }
          if ( !v379 )
            sub_1B9026C(IsNullOrEmpty, v403);
          v404 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v379, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v292, v404, 0LL);
          if ( v300 )
          {
            v405 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v379, 0LL);
            if ( !v405 )
              sub_1B9026C(0LL, v406);
            localPosition = UnityEngine_Transform__get_localPosition(v405, 0LL);
            v407 = localPosition.fields.x;
            v408 = localPosition.fields.y;
            v409 = localPosition.fields.z;
            v411 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v379, 0LL);
            v412 = (UnityEngine_GameObject_o *)object[6].monitor;
            if ( !v412 )
              sub_1B9026C(0LL, v410);
            v413 = UnityEngine_GameObject__get_transform(v412, 0LL);
            if ( !v411 )
              sub_1B9026C(v413, v413);
            UnityEngine_Transform__set_parent(v411, v413, 0LL);
            v414 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v379, 0LL);
            if ( !v414 )
              sub_1B9026C(0LL, v415);
            v514.fields.x = v407;
            v514.fields.y = v408;
            v514.fields.z = v409;
            UnityEngine_Transform__set_localPosition(v414, v514, 0LL);
            BattleSequenceManager__updateCutInEvents(v416, sourcea, v297, (UnityEngine_GameObject_o *)v379, v417);
            v418 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3234/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v379, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3229/*"BattleBG"*/, 0LL) )
              goto LABEL_340;
            v418 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3227/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v379, v418, 0LL);
LABEL_340:
          v422 = v292->fields.affectedObjectPath;
          if ( !v422 )
            sub_1B9026C(0LL, v352);
          if ( System_String__StartsWith(v422, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
          {
            v424 = v292->fields.affectedObjectPath;
            if ( !v424 )
              sub_1B9026C(0LL, v423);
            v425 = System_String__Substring_61806096(v424, v424->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v425, &targetPosIndex, 0LL);
            v427 = --targetPosIndex;
            if ( v247 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v292, v427, v426);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v292,
                targetPosIndex,
                v428);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v292, v427, v426);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v292,
                         1,
                         (const MethodInfo_2E857AC *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v431 = EventCount;
          if ( !EventCount )
            sub_1B9026C(0LL, v430);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1B90274(EventCount, v430);
              v434 = (WellFired_USTimelineEvent_o *)v431->m_Items[j];
              if ( !v434 )
                sub_1B9026C(EventCount, v430);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v434, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v436 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v434, k, 0LL);
                v438 = (Il2CppObject *)v436;
                if ( !v436 )
                  goto LABEL_439;
                v439 = UnityEngine_Object__get_name(v436, 0LL);
                if ( System_String__op_Equality(v439, (System_String_o *)StringLiteral_14879/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v440 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v438->klass->vtable[0].methodPtr) < (unsigned int)v440
                    || (WellFired_USFGOAttachToParentEvent_c *)v438->klass->_2.typeHierarchy[v440 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B9052C(v438);
                    goto LABEL_441;
                  }
                  v441 = System_String__op_Equality(
                           (System_String_o *)v438[5].klass,
                           (System_String_o *)StringLiteral_3231/*"BattleCamera"*/,
                           0LL);
                  if ( v441 )
                  {
                    v445 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v445 )
                      sub_1B9026C(0LL, v442);
                    v446 = UnityEngine_Component__get_transform(v445, 0LL);
                    v438[4].klass = (Il2CppClass *)v446;
                    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v438[4], (int32_t)v446, v447, v448);
                  }
                  else
                  {
                    if ( !v104 )
                      sub_1B9026C(v441, v442);
                    v449 = v104->fields._items;
                    v450 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v104->fields._version;
                    if ( !v449 )
                      sub_1B9026C(v441, v442);
                    v451 = v104->fields._size;
                    if ( (unsigned int)v451 >= v449->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v104,
                        v438,
                        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v450[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v452 = &v449->obj.klass + v451;
                      v104->fields._size = v451 + 1;
                      v452[4] = (Il2CppClass *)v438;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v452 + 4), (int32_t)v438, v443, v444);
                    }
                  }
                }
              }
              max_length = v431->max_length;
            }
          }
        }
      }
      v309 = (UnityEngine_GameObject_o *)object[6].klass;
      if ( !v309 )
        sub_1B9026C(0LL, v308);
      v311 = UnityEngine_GameObject__get_transform(v309, 0LL);
      v312 = v292->fields.affectedObjectPath;
      if ( !v312 )
        sub_1B9026C(0LL, v310);
      v313 = System_String__Replace_61806720(
               v312,
               (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17991/*"chr(Clone)"*/,
               0LL);
      if ( !v311 )
        sub_1B9026C(v313, v313);
      v314 = UnityEngine_Transform__Find(v311, v313, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v292, v314, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v292, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v317 = v292->fields.affectedObjectPath;
        if ( !v317 )
          sub_1B9026C(0LL, v316);
        v318 = System_String__StartsWith(v317, (System_String_o *)StringLiteral_1132/*"/Actor/chr/body_level_"*/, 0LL);
        v320 = &StringLiteral_17384/*"body_level_"*/;
        if ( v318 )
          goto LABEL_236;
        v321 = v292->fields.affectedObjectPath;
        if ( !v321 )
          sub_1B9026C(0LL, v319);
        v322 = System_String__StartsWith(v321, (System_String_o *)StringLiteral_1133/*"/Actor/chr/weapon_level_"*/, 0LL);
        v320 = &StringLiteral_24712/*"weapon_level_"*/;
        if ( v322 )
        {
LABEL_236:
          v323 = (System_String_o *)*v320;
          if ( *v320 )
            break;
        }
      }
    }
    v324 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v324 )
      sub_1B9026C(0LL, v319);
    v325 = (System_String_o *)StringLiteral_1/*""*/;
    v326 = UnityEngine_GameObject__get_transform(v324, 0LL);
    if ( !v326 )
      sub_1B9026C(0LL, v327);
    v328 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v326, (System_String_o *)StringLiteral_17991/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v329 = UnityEngine_Object__op_Inequality(v328, 0LL, 0LL);
    if ( v329 )
      break;
LABEL_281:
    v362 = v292->fields.affectedObjectPath;
    v363 = System_String__Concat_61787092((System_String_o *)StringLiteral_1131/*"/Actor/chr/"*/, v323, 0LL);
    if ( !v363 )
      sub_1B9026C(0LL, v364);
    if ( !v362 )
      sub_1B9026C(v363, v364);
    v365 = System_String__Substring(v362, v363->fields._stringLength, 0LL);
    if ( !v365 )
      sub_1B9026C(0LL, v366);
    v367 = System_String__Split(v365, 0x2Fu, 0, 0LL);
    if ( !v367 )
      sub_1B9026C(0LL, v368);
    if ( !v367->max_length )
      sub_1B90274(v367, v368);
    v370 = System_String__Concat_61787092(v323, v367->m_Items[0], 0LL);
    v371 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v371 )
      sub_1B9026C(0LL, v369);
    v373 = UnityEngine_GameObject__get_transform(v371, 0LL);
    v374 = v292->fields.affectedObjectPath;
    if ( !v374 )
      sub_1B9026C(0LL, v372);
    v375 = System_String__Replace_61806720(
             v374,
             (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17991/*"chr(Clone)"*/,
             0LL);
    if ( !v375 )
      sub_1B9026C(0LL, v376);
    v377 = System_String__Replace_61806720(v375, v370, v325, 0LL);
    if ( !v373 )
      sub_1B9026C(v377, v377);
    v378 = UnityEngine_Transform__Find(v373, v377, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v292, v378, 0LL);
  }
  if ( !v328 )
    sub_1B9026C(v329, v330);
  v332 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v328, 0LL);
  if ( !v332 )
    sub_1B9026C(0LL, v331);
  while ( 2 )
  {
    v333 = v332->klass;
    v334 = *(unsigned __int16 *)(&v332->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v332->klass->_2.bitflags2 + 3) )
    {
      v335 = &v333->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v335 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v334;
        v335 += 4;
        if ( !v334 )
          goto LABEL_248;
      }
      v336 = (__int64)&v333->vtable[*v335].method;
    }
    else
    {
LABEL_248:
      v336 = sub_1BE1FF0(v332, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v336)(v332, *(_QWORD *)(v336 + 8)) & 1) == 0 )
    {
      v494 = v325;
      v495 = 0LL;
      goto LABEL_273;
    }
    v337 = v332->klass;
    v338 = *(unsigned __int16 *)(&v332->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v332->klass->_2.bitflags2 + 3) )
    {
      v339 = (System_Collections_IEnumerator_c **)&v337->_1.interfaceOffsets->offset;
      while ( *(v339 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v338;
        v339 += 2;
        if ( !v338 )
          goto LABEL_255;
      }
      v340 = (__int64)&v337->vtable[*(_DWORD *)v339 + 1].method;
    }
    else
    {
LABEL_255:
      v340 = sub_1BE1FF0(v332, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v341 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v340)(
                                        v332,
                                        *(_QWORD *)(v340 + 8));
    v343 = (UnityEngine_Object_o *)v341;
    if ( !v341 )
      sub_1B9026C(0LL, v342);
    v344 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v341->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v344
      && (UnityEngine_Transform_c *)v341->klass->_2.typeHierarchy[v344 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v345 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v341, 0LL);
      if ( !v345 )
        sub_1B9026C(0LL, v346);
      v347 = UnityEngine_Object__get_name(v345, 0LL);
      if ( !v347 )
        sub_1B9026C(0LL, v348);
      if ( !System_String__StartsWith(v347, v323, 0LL) )
        continue;
      v494 = UnityEngine_Object__get_name(v343, 0LL);
      v495 = 0LL;
LABEL_273:
      v356 = sub_1B9014C(v332, System_IDisposable_TypeInfo);
      v325 = v494;
      v357 = v356;
      if ( v356 )
      {
        v358 = *(_QWORD *)v356;
        v359 = *(unsigned __int16 *)(*(_QWORD *)v356 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v356 + 302LL) )
        {
          v360 = (int *)(*(_QWORD *)(v358 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v360 - 1) != System_IDisposable_TypeInfo )
          {
            --v359;
            v360 += 4;
            if ( !v359 )
              goto LABEL_278;
          }
          v361 = v358 + 16LL * *v360 + 312;
        }
        else
        {
LABEL_278:
          v361 = sub_1BE1FF0(v356, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v361)(v357, *(_QWORD *)(v361 + 8));
      }
      goto LABEL_281;
    }
    break;
  }
  sub_1B9052C(v341);
  v485 = v484;
  v487 = v486;
  v478 = sub_1B9014C(v332, System_IDisposable_TypeInfo);
  v479 = v478;
  if ( v478 )
  {
    v480 = *(_QWORD *)v478;
    v481 = *(unsigned __int16 *)(*(_QWORD *)v478 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v478 + 302LL) )
    {
      v482 = (int *)(*(_QWORD *)(v480 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v482 - 1) != System_IDisposable_TypeInfo )
      {
        --v481;
        v482 += 4;
        if ( !v481 )
          goto LABEL_473;
      }
      v483 = v480 + 16LL * *v482 + 312;
    }
    else
    {
LABEL_473:
      v483 = sub_1BE1FF0(v478, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v483)(v479, *(_QWORD *)(v483 + 8));
  }
  if ( v495 )
    sub_1B90264(v495);
  if ( v485 != 1 )
  {
    v488 = sub_1B9014C(v504, System_IDisposable_TypeInfo);
    v489 = v488;
    if ( v488 )
    {
      v490 = *(_QWORD *)v488;
      v491 = *(unsigned __int16 *)(*(_QWORD *)v488 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v488 + 302LL) )
      {
        v492 = (int *)(*(_QWORD *)(v490 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v492 - 1) != System_IDisposable_TypeInfo )
        {
          --v491;
          v492 += 4;
          if ( !v491 )
            goto LABEL_522;
        }
        v493 = v490 + 16LL * *v492 + 312;
      }
      else
      {
LABEL_522:
        v493 = sub_1BE1FF0(v488, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v493)(v489, *(_QWORD *)(v493 + 8));
    }
    sub_1C7AAA0();
  }
  v454 = *(_QWORD *)__cxa_begin_catch(v487);
  __cxa_end_catch();
LABEL_380:
  seqObject = sub_1B9014C(v504, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v455 = *(_QWORD *)seqObject;
    v456 = seqObject;
    v457 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v458 = (int *)(*(_QWORD *)(v455 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v458 - 1) != System_IDisposable_TypeInfo )
      {
        --v457;
        v458 += 4;
        if ( !v457 )
          goto LABEL_385;
      }
      v459 = v455 + 16LL * *v458 + 312;
    }
    else
    {
LABEL_385:
      v459 = sub_1BE1FF0(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v459)(v456, *(_QWORD *)(v459 + 8));
  }
  if ( v454 )
    sub_1B90264(v454);
  if ( !v104 )
    goto LABEL_432;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v506,
    v104,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v506;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[5].klass,
          (UnityEngine_GameObject_o *)object[6].klass,
          (System_Collections_Generic_List_GameObject__o *)object[21].klass,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1B9026C(0LL, v460);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v499, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v499 )
      goto LABEL_432;
    if ( LOBYTE(v499[20].klass) )
      goto LABEL_423;
    v461 = v499[19].klass;
    if ( !v461 )
      goto LABEL_432;
    if ( !HIDWORD(v461->vtable._1_Finalize.methodPtr)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)v499, 0LL) )
    {
      v462 = (UnityEngine_Object_o *)object[5].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v462, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v463 = object[5].klass;
        if ( !v463 )
          goto LABEL_432;
        v464 = *(UnityEngine_Object_o **)&v463->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v464, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[23].klass) = 0;
            v466 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v466,
                   FileName,
                   v468) )
            {
              LOBYTE(object[23].klass) = 1;
            }
            v469 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v470 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v469,
              v470,
              v471);
            v472 = v499[19].klass;
            if ( v472 )
            {
              v473 = (int)v472[1].vtable._2_GetHashCode.methodPtr;
              v474 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v474 = BalanceConfig_TypeInfo;
              }
              if ( v473 == v474->static_fields->TreasureDeviceIdMashu3 )
              {
                v475 = (int32_t)object[11].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v476 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v475,
                  v476,
                  v477);
              }
              goto LABEL_423;
            }
          }
          goto LABEL_432;
        }
      }
    }
  }
LABEL_423:
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62833160(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v10; // w24
  int32_t v11; // w22

  if ( (byte_4A7252D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7);
    byte_4A7252D = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v10 = size - 1;
      if ( size < 1 )
      {
LABEL_12:
        if ( tlcont )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)tlcont,
                                                                            0LL);
          if ( battleTargetList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleTargetList, 0, 0LL);
            return;
          }
        }
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v11,
                                                                            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v10 == v11 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v11;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v11,
                                                                            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( battleTargetList )
          {
            battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                              (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                              0LL);
            if ( battleTargetList )
            {
              battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                                (UnityEngine_GameObject_o *)battleTargetList,
                                                                                0LL);
              if ( tlcont )
              {
                WellFired_USTimelineContainer__set_AffectedObject(
                  tlcont,
                  (UnityEngine_Transform_o *)battleTargetList,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B9026C(battleTargetList, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4A72531 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    sub_1B90010(&StringLiteral_14523/*"Tmp_Target"*/, v9);
    byte_4A72531 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( !battleTargetList )
      goto LABEL_15;
    if ( battleTargetList->fields._size > targetIndex )
    {
      battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        battleTargetList,
                                                                        targetIndex,
                                                                        (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          0LL);
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)battleTargetList,
                                                                            0LL);
          if ( tlcont )
          {
            WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0LL);
            return;
          }
        }
      }
LABEL_15:
      sub_1B9026C(battleTargetList, tlcont);
    }
    v11 = (UnityEngine_GameObject_o *)sub_1B9025C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_14523/*"Tmp_Target"*/, 0LL);
    if ( !v11 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v11, 0LL);
    if ( !tlcont )
      goto LABEL_15;
    WellFired_USTimelineContainer__set_AffectedObject(tlcont, (UnityEngine_Transform_o *)battleTargetList, 0LL);
    AffectedObject = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)tlcont,
                                                                      0LL);
    if ( !AffectedObject )
      goto LABEL_15;
    UnityEngine_Transform__SetParent(AffectedObject, (UnityEngine_Transform_o *)battleTargetList, 0LL);
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
  bool v13; // w21
  Il2CppObject *current; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A72517 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_1B90010(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_4A72517 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !evs )
    sub_1B9026C(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v13 = v11;
    if ( !v11 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B9026C(v11, v12);
    if ( System_String__op_Equality((System_String_o *)v19.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&current[3].monitor, (int32_t)obj, v15, v16);
      v17 = 4;
      goto LABEL_10;
    }
  }
  v17 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v13 && v17 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4A6A9C7 )
  {
    sub_1B90010(&UnityEngine_Quaternion_TypeInfo, method);
    byte_4A6A9C7 = 1;
  }
  this->fields.originalRotation = UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion;
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
  int32_t v2; // w2
  int32_t v3; // w3
  UnityEngine_Component_o *targetActor; // x0

  if ( this->fields.isSave )
  {
    targetActor = (UnityEngine_Component_o *)this->fields.targetActor;
    if ( !targetActor
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL
      || (UnityEngine_Transform__set_localRotation(
            (UnityEngine_Transform_o *)targetActor,
            this->fields.originalRotation,
            0LL),
          (targetActor = (UnityEngine_Component_o *)this->fields.targetActor) == 0LL)
      || (targetActor = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetActor, 0LL)) == 0LL )
    {
      sub_1B9026C(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, 0, v2, v3);
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
    sub_1B9026C(targetActor, method);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, (int32_t)bac, index, (int32_t)method);
  *((_DWORD *)p_targetActor + 9) = index;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__110___ctor(
        BattleSequenceManager__WaitEndSequence_d__110_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSequenceManager__WaitEndSequence_d__110__MoveNext(
        BattleSequenceManager__WaitEndSequence_d__110_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleSequenceManager__WaitEndSequence_d__110_o *v4; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *wait_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A7264F & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__110_o *)sub_1B90010(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_4A7264F = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B9025C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B9026C(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B8FFB4(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__110__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSequenceManager__WaitEndSequence_d__110_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSequenceManager__WaitEndSequence_d__110__System_Collections_IEnumerator_Reset(
        BattleSequenceManager__WaitEndSequence_d__110_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_BattleSequenceManager__WaitEndSequence_d__110_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
}


Il2CppObject *__fastcall BattleSequenceManager__WaitEndSequence_d__110__System_Collections_IEnumerator_get_Current(
        BattleSequenceManager__WaitEndSequence_d__110_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSequenceManager__WaitEndSequence_d__110__System_IDisposable_Dispose(
        BattleSequenceManager__WaitEndSequence_d__110_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSequenceManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A72649 & 1) == 0 )
  {
    sub_1B90010(&BattleSequenceManager___c_TypeInfo, v1);
    byte_4A72649 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleSequenceManager___c___ctor(BattleSequenceManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__79_0(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x1,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1B9026C(this, x1);
  return System_Single__CompareTo_62674540(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__79_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1B9026C(this, x1);
  return System_Single__CompareTo_62674540(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool __fastcall BattleSequenceManager___c___setup_b__91_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B9026C(this, 0LL);
  return SwitchActiveBaseConditionComponent__IsTimingBeforeTreasureDevice(comp, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass116_0___ctor(
        BattleSequenceManager___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass116_0___OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0(
        BattleSequenceManager___c__DisplayClass116_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  struct BgmPlayArgs_o *args; // x8

  if ( !x || (args = this->fields.args) == 0LL )
    sub_1B9026C(this, x);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, args->fields._BgmName_k__BackingField, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass119_0___ctor(
        BattleSequenceManager___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass119_0___SetupTargetInfo_b__0(
        BattleSequenceManager___c__DisplayClass119_0_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass119_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A7264A & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass119_0_o *)sub_1B90010(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_4A7264A = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass119_0_o *)v4->fields.targetList) == 0LL )
    sub_1B9026C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_33C65C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleSequenceManager___c__DisplayClass126_0___ctor(
        BattleSequenceManager___c__DisplayClass126_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass126_0___GetTargetPosIndexTransform_b__0(
        BattleSequenceManager___c__DisplayClass126_0_o *this,
        BattleSequenceManager_BattleTarget_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return x->fields._positionIndex_k__BackingField == this->fields.posIndex;
}


void __fastcall BattleSequenceManager___c__DisplayClass145_0___ctor(
        BattleSequenceManager___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass145_0___ExistBackupBgmPlayGroup_b__0(
        BattleSequenceManager___c__DisplayClass145_0_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return System_String__op_Equality(x->fields._BgmName_k__BackingField, this->fields.checkBgmName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_0___ctor(
        BattleSequenceManager___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_0___loadSequence_b__0(
        BattleSequenceManager___c__DisplayClass78_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass78_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager_o *_4__this; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v14; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int32_t v20; // w2
  int32_t v21; // w3

  v4 = this;
  if ( (byte_4A7264B & 1) == 0 )
  {
    sub_1B90010(&Method_AssetData_GetObject_GameObject____76169496, data);
    sub_1B90010(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__1__, v6);
    sub_1B90010(&StringLiteral_12963/*"StandardCutIn"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass78_0_o *)sub_1B90010(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_4A7264B = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass78_0_o *)AssetData__GetObject_object__48695184(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_12963/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2E70790 *)Method_AssetData_GetObject_GameObject____76169496),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v10, v11),
        (this = (BattleSequenceManager___c__DisplayClass78_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B9026C(this, data);
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
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1B9025C(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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


void __fastcall BattleSequenceManager___c__DisplayClass78_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass78_0_o *this,
        UnityEngine_GameObject_o *obj,
        System_Tuple_int__int__int__o *paramsFromMstTDSeqWeight,
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
  __int64 v16; // x20
  void *_4__this; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 *v21; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x1
  struct BattleActorControl_o *battleActor; // x8
  int32x2_t *battleSvtData; // x8
  struct BattleSequenceManager_o *v29; // x8
  struct BattleSequenceManager_o *v30; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x22
  System_Action_o *v34; // x23
  struct BattleSequenceManager_o *v35; // x8
  struct BattleSequenceManager_o *v36; // x8
  _DWORD *v37; // x20
  int v38; // w8
  int v39; // w9
  __int64 v40; // x10
  struct BattleSequenceManager_o *v41; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A7264C & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, obj);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_1B90010(&Method_System_Tuple_int__int__int__get_Item1__, v10);
    sub_1B90010(&Method_System_Tuple_int__int__int__get_Item2__, v11);
    sub_1B90010(&Method_System_Tuple_int__int__int__get_Item3__, v12);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__2__, v13);
    sub_1B90010(&BattleSequenceManager___c__DisplayClass78_1_TypeInfo, v14);
    sub_1B90010(&StringLiteral_9509/*"NoblePhantasm_"*/, v15);
    byte_4A7264C = 1;
  }
  v16 = sub_1B9025C(BattleSequenceManager___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_30;
  *(_QWORD *)(v16 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 16) = obj;
  v21 = (__int64 *)(v16 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)obj, v22, v23);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  v26 = *v21;
  *((_QWORD *)_4__this + 11) = *v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)_4__this + 88), v26, v24, v25);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_30;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_30;
  battleSvtData = (int32x2_t *)battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  battleSvtData[94].n64_u64[0] = vmax_s32(*(int32x2_t *)&paramsFromMstTDSeqWeight->fields.m_Item1, 0LL).n64_u64[0];
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_30;
  v29->fields._SeqId_k__BackingField = paramsFromMstTDSeqWeight->fields.m_Item3;
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_30;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v30 = this->fields.__4__this;
    if ( !v30 )
      goto LABEL_30;
    overwriteSvtVoiceId = v30->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v32 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v33 = System_String__Concat_61787092((System_String_o *)StringLiteral_9509/*"NoblePhantasm_"*/, v32, 0LL);
  v34 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v16,
    Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_30;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v33, v34, 1, 0LL);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_30;
  _4__this = v35->fields.seqObject;
  if ( !_4__this )
    goto LABEL_30;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_30;
  v37 = _4__this;
  v36->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v37 )
    goto LABEL_30;
  v38 = v37[6];
  if ( v38 < 1 )
    return;
  v39 = 0;
  while ( 1 )
  {
    if ( v38 == v39 )
      sub_1B90274(_4__this, v18);
    v40 = *(_QWORD *)&v37[2 * v39 + 8];
    if ( !v40 )
      goto LABEL_30;
    if ( !*(_DWORD *)(v40 + 64) && *(_BYTE *)(v40 + 69) )
      break;
    if ( v38 == ++v39 )
      return;
  }
  v41 = this->fields.__4__this;
  if ( !v41 )
LABEL_30:
    sub_1B9026C(_4__this, v18);
  v41->fields.isNoDamageMotionInDamageNoble = 1;
}


void __fastcall BattleSequenceManager___c__DisplayClass78_1___ctor(
        BattleSequenceManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_1___loadSequence_b__2(
        BattleSequenceManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass78_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleSequenceManager___c__DisplayClass78_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v8; // x20
  int v9; // w8
  BattleSequenceManager___c__DisplayClass78_1_o *v10; // x21
  unsigned int v11; // w23
  int v12; // w24
  UnityEngine_Behaviour_o *v13; // x22
  struct BattleSequenceManager___c__DisplayClass78_0_o *v14; // x8
  BattleSequenceManager_o *v15; // x21
  System_Action_o *_9__3; // x22
  int32_t v17; // w2
  int32_t v18; // w3

  v2 = this;
  if ( (byte_4A7264D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_1B90010(&Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)sub_1B90010(&StringLiteral_1/*""*/, v5);
    byte_4A7264D = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_20;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49144716(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2EDE38C *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v9 = (int)this->fields.CS___8__locals1;
  v10 = this;
  if ( v9 >= 1 )
  {
    v11 = 0;
    v12 = 1;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1B90274(this, method);
      v13 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v10->fields.__9__4 + (int)v11);
      if ( !v13 )
        break;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v13->klass[1]._2.typeHierarchy)(
                                                                v13,
                                                                v13->klass[1]._2.unity_user_data);
      if ( (v12 & (unsigned int)this & 1) != 0 )
      {
        v8 = *(System_String_o **)&v13[2].fields.m_CachedPtr;
        v12 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v13, 0, 0LL);
      }
      v9 = (int)v10->fields.CS___8__locals1;
      if ( (int)++v11 >= v9 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1B9026C(this, method);
  }
LABEL_15:
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_20;
  v15 = v14->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v17, v18);
  }
  if ( !v15 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v15, v8, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass78_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager___c__DisplayClass78_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v11; // x8
  struct BattleSequenceManager_o *v12; // x8
  BattleSequenceManager___c__DisplayClass78_1_o *v13; // x20
  struct BattleSequenceManager___c__DisplayClass78_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass78_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x21
  struct BattleSequenceManager___c__DisplayClass78_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v23; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleSequenceManager___c__DisplayClass78_0_o *v27; // x8
  struct BattleSequenceManager_o *v28; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass78_0_o *v30; // x8
  struct BattleSequenceManager_o *v31; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass78_0_o *v36; // x8
  struct BattleSequenceManager_o *v37; // x10
  struct BattleSequenceManager___c__DisplayClass78_0_o *v38; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v41; // x1
  struct BattleSequenceManager___c__DisplayClass78_0_o *v42; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v43; // x8
  struct BattleSequenceManager_o *v44; // x20
  struct BattleSequenceManager_o *v45; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v46; // x8
  struct BattleSequenceManager_o *v47; // x8
  UnityEngine_Object_o *v48; // x20
  struct BattleSequenceManager___c__DisplayClass78_0_o *v49; // x8
  struct BattleSequenceManager_o *v50; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v51; // x8
  struct BattleSequenceManager_o *v52; // x8
  UIStandFigureM_o *v53; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleSequenceManager___c__DisplayClass78_0_o *v60; // x8

  v2 = this;
  if ( (byte_4A7264E & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)sub_1B90010(
                                                              &Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__4__,
                                                              v8);
    byte_4A7264E = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2EDD9CC *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_73;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_73;
  v13 = this;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)v12->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2EDD9CC *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_73;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_73;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)v15->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2EDD9CC *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v13,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v18 = v2->fields.CS___8__locals1;
    if ( !v18 )
      goto LABEL_73;
    if ( !v13 )
      goto LABEL_73;
    v19 = v18->fields.__4__this;
    if ( !v19 )
      goto LABEL_73;
    v19->fields.faceType = (int32_t)v13[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v20 = v2->fields.CS___8__locals1;
    if ( !v20 )
      goto LABEL_73;
    v21 = v20->fields.__4__this;
    if ( !v21 )
      goto LABEL_73;
    performance = v21->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v23 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v23 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v23, (UnityEngine_GameObject_o *)this, 0LL);
    v19->fields.standFigure = MeshLocal;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v19->fields.standFigure, (int32_t)MeshLocal, v25, v26);
    v27 = v2->fields.CS___8__locals1;
    if ( !v27 )
      goto LABEL_73;
    v28 = v27->fields.__4__this;
    if ( !v28 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v28->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v30 = v2->fields.CS___8__locals1;
    if ( !v30 )
      goto LABEL_73;
    v31 = v30->fields.__4__this;
    if ( !v31 )
      goto LABEL_73;
    monitor = (int32_t)v13[1].monitor;
    v31->fields.loadStandFigureId = monitor;
    battleActor = v30->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v13[1].monitor), monitor_high == -1) )
    {
      v43 = v2->fields.CS___8__locals1;
      if ( !v43 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)v43->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v44 = v43->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0LL);
      if ( !v44 )
        goto LABEL_73;
      v44->fields.loadStandFigureLimitCount = (int)this;
      v36 = v2->fields.CS___8__locals1;
      if ( !v36 )
        goto LABEL_73;
    }
    else
    {
      v36 = v2->fields.CS___8__locals1;
      if ( !v36 )
        goto LABEL_73;
      v37 = v36->fields.__4__this;
      if ( !v37 )
        goto LABEL_73;
      v37->fields.loadStandFigureLimitCount = monitor_high;
    }
    v45 = v36->fields.__4__this;
    if ( !v45 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)v45->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    v46 = v2->fields.CS___8__locals1;
    if ( !v46 )
      goto LABEL_73;
    v47 = v46->fields.__4__this;
    if ( !v47 )
      goto LABEL_73;
    v48 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v47->fields.loadStandFigureId,
                                                              v47->fields.loadStandFigureLimitCount,
                                                              0LL);
    if ( !v48 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v48, (System_String_o *)this, 0LL);
    v49 = v2->fields.CS___8__locals1;
    if ( !v49 )
      goto LABEL_73;
    v50 = v49->fields.__4__this;
    if ( !v50 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)v50->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
    v51 = v2->fields.CS___8__locals1;
    if ( !v51 )
      goto LABEL_73;
    v52 = v51->fields.__4__this;
    if ( !v52 )
      goto LABEL_73;
    v53 = v52->fields.standFigure;
    loadStandFigureId = v52->fields.loadStandFigureId;
    loadStandFigureLimitCount = v52->fields.loadStandFigureLimitCount;
    faceType = v52->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v58, v59);
    }
    if ( !v53 )
LABEL_73:
      sub_1B9026C(this, method);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UIStandFigureM__SetCharacter_41008900(
                                                              v53,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v60 = v2->fields.CS___8__locals1;
      if ( v60 )
      {
        this = (BattleSequenceManager___c__DisplayClass78_1_o *)v60->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v60->fields.onComplete,
            0LL);
          return;
        }
      }
      goto LABEL_73;
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v38 = v2->fields.CS___8__locals1;
      if ( !v38 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)v38->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v38->fields.onComplete;
      obj = v2->fields.obj;
      v41 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v42 = v2->fields.CS___8__locals1;
      if ( !v42 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)v42->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v42->fields.onComplete;
      obj = v2->fields.obj;
      v41 = (WellFired_USFGOPlayCutInBase_o *)v16;
    }
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v41,
                                                              obj,
                                                              onComplete,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void __fastcall BattleSequenceManager___c__DisplayClass78_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  struct BattleSequenceManager___c__DisplayClass78_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1B9026C(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass79_0___ctor(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleSequenceManager___c__DisplayClass79_0___FixSyncGroupRandomAudioPlayIndex_b__1(
        BattleSequenceManager___c__DisplayClass79_0_o *this,
        WellFired_USFGOSetAudioGroupIndexConditional_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return WellFired_USFGOSetAudioGroupIndexConditional__FixSyncAudioGroupIndex(x, this->fields.syncGroupName, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass82_0___ctor(
        BattleSequenceManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass82_0___CreateCutInStandFigure_b__0(
        BattleSequenceManager___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B9026C(0LL, method);
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
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D8598;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D8578;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D8530;
}


System_IAsyncResult_o *__fastcall BattleSequenceManager_onGameObjectLoadComplete__BeginInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = obj;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__Invoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_GameObject_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    obj,
    *(_QWORD *)&this->fields.extra_arg);
}