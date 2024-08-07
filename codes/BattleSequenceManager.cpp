void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4A012A0 & 1) == 0 )
  {
    sub_1B64A00(&BattleSequenceManager_TypeInfo, v1);
    byte_4A012A0 = 1;
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

  if ( (byte_4A0129F & 1) == 0 )
  {
    sub_1B64A00(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B64A00(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_string___ctor__, v6);
    sub_1B64A00(&System_Collections_Generic_HashSet_string__TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Object___ctor__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Action___ctor__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_Object__TypeInfo, v13);
    sub_1B64A00(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v14);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_1B64A00(&System_Collections_Generic_List_Action__TypeInfo, v16);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B64A00(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v18);
    sub_1B64A00(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v19);
    sub_1B64A00(&StringLiteral_9302/*"N_{0}{1}"*/, v20);
    byte_4A0129F = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v21 = (System_Array_o *)sub_1B64AA8(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v52.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v22 = (struct BattlePerformance_BattleUIPanel_array *)v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61293216(v21, v52, 0LL);
  this->fields.FadeTargetPanelIndexs = v22;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.FadeTargetPanelIndexs, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v25;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v28;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v28, v29, v30);
  v31 = StringLiteral_9302/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9302/*"N_{0}{1}"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.PosNodeFormatNP, v31, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v34;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v34, v35, v36);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v37;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.battleTargetList, (int32_t)v37, v38, v39);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v40;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.createdObjects, (int32_t)v40, v41, v42);
  v43 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v43,
    (const MethodInfo_31725F0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v43;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v43, v44, v45);
  v46 = (System_Collections_Generic_HashSet_T__o *)sub_1B64C4C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v46,
    (const MethodInfo_336C6C4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v46;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v46, v47, v48);
  this->fields.nowTargetAlpha = 1.0;
  v49 = (struct UnityEngine_GameObject_array *)sub_1B64AA8(UnityEngine_GameObject___TypeInfo, 3LL);
  this->fields.saveWaitEnemy = v49;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.saveWaitEnemy, (int32_t)v49, v50, v51);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
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

  if ( (byte_4A01283 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, actor);
    sub_1B64A00(&StringLiteral_24505/*"wait"*/, v5);
    byte_4A01283 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !actor )
      sub_1B64C5C(v6, v7);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_43294128(actor, (System_String_o *)StringLiteral_24505/*"wait"*/, 0, 0LL);
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

  if ( (byte_4A01299 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_4A01299 = 1;
  }
  if ( System_String__Equals_61394180(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_2E55890 *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_1B64C5C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_42608956(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_42608956(
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

  if ( (byte_4A0126B & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, obj);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass78_0__CreateCutInStandFigure_b__0__, v9);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass78_0_TypeInfo, v10);
    byte_4A0126B = 1;
  }
  v11 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)obj, v16, v17);
  *(_QWORD *)(v11 + 32) = onComplete;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)onComplete, v18, v19);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v24, v25);
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
          v32 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
          System_Action___ctor(
            v32,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass78_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v28 )
            return UIStandFigureM__SetCharacter_40628576(
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
    sub_1B64C5C(Instance, v13);
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
  const MethodInfo_35D0E08 *v47; // x3
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

  if ( (byte_4A01284 & 1) == 0 )
  {
    sub_1B64A00(&BattleSequenceManager_TypeInfo, method);
    sub_1B64A00(&BgmManager_TypeInfo, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_1B64A00(&int_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_1B64A00(&Method_System_Nullable_long___ctor__, v9);
    sub_1B64A00(&Method_System_Nullable_float___ctor__, v10);
    sub_1B64A00(&object___TypeInfo, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&float_TypeInfo, v13);
    sub_1B64A00(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_1B64A00(&SoundManager_TypeInfo, v15);
    sub_1B64A00(&StringLiteral_19580/*"from"*/, v16);
    sub_1B64A00(&StringLiteral_9791/*"OnChangeBgmVolume"*/, v17);
    sub_1B64A00(&StringLiteral_23834/*"time"*/, v18);
    sub_1B64A00(&StringLiteral_22196/*"onupdate"*/, v19);
    sub_1B64A00(&StringLiteral_23874/*"to"*/, v20);
    sub_1B64A00(&iTween_TypeInfo, v21);
    byte_4A01284 = 1;
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
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v24, (int32_t)v26, v27);
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
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v29, v30, v31);
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
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v34, v35, v36);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v32 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v28 = 1;
  }
  v37 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1B64C5C(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v32 | System_String__op_Inequality(v37, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1B64AA8(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v51 = (System_Object_array *)performance;
    v52 = StringLiteral_19580/*"from"*/;
    if ( StringLiteral_19580/*"from"*/ )
    {
      v52 = sub_1B64B3C(StringLiteral_19580/*"from"*/, v51->obj.klass->_1.element_class);
      if ( !v52 )
        goto LABEL_92;
      v53 = StringLiteral_19580/*"from"*/;
    }
    else
    {
      v53 = 0LL;
    }
    if ( !v51->max_length )
      goto LABEL_91;
    v51->m_Items[0] = (Il2CppObject *)v53;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)v51->m_Items, v53, v49, v50);
    v62 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v62 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v90.fields._list = v62->static_fields->NoblePhantasmBgmVolumeRate;
    v52 = j_il2cpp_value_box_0(float_TypeInfo, &v90, v59, v60, v61);
    v65 = (Il2CppObject *)v52;
    if ( !v52 || (v52 = sub_1B64B3C(v52, v51->obj.klass->_1.element_class)) != 0 )
    {
      if ( v51->max_length <= 1 )
        goto LABEL_91;
      v51->m_Items[1] = v65;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[1], (int32_t)v65, v63, v64);
      v52 = StringLiteral_23874/*"to"*/;
      if ( StringLiteral_23874/*"to"*/ )
      {
        v52 = sub_1B64B3C(StringLiteral_23874/*"to"*/, v51->obj.klass->_1.element_class);
        if ( !v52 )
          goto LABEL_92;
        v53 = StringLiteral_23874/*"to"*/;
      }
      else
      {
        v53 = 0LL;
      }
      if ( v51->max_length <= 2 )
        goto LABEL_91;
      v51->m_Items[2] = (Il2CppObject *)v53;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[2], v53, v66, v67);
      *(_DWORD *)&v89.fields.hasValue = 1;
      v52 = j_il2cpp_value_box_0(int_TypeInfo, &v89, v68, v69, v70);
      v73 = (Il2CppObject *)v52;
      if ( !v52 || (v52 = sub_1B64B3C(v52, v51->obj.klass->_1.element_class)) != 0 )
      {
        if ( v51->max_length <= 3 )
          goto LABEL_91;
        v51->m_Items[3] = v73;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[3], (int32_t)v73, v71, v72);
        v52 = StringLiteral_23834/*"time"*/;
        if ( StringLiteral_23834/*"time"*/ )
        {
          v52 = sub_1B64B3C(StringLiteral_23834/*"time"*/, v51->obj.klass->_1.element_class);
          if ( !v52 )
            goto LABEL_92;
          v53 = StringLiteral_23834/*"time"*/;
        }
        else
        {
          v53 = 0LL;
        }
        if ( v51->max_length <= 4 )
          goto LABEL_91;
        v51->m_Items[4] = (Il2CppObject *)v53;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[4], v53, v74, v75);
        v88 = 1056964608;
        v52 = j_il2cpp_value_box_0(float_TypeInfo, &v88, v76, v77, v78);
        v81 = (Il2CppObject *)v52;
        if ( !v52 || (v52 = sub_1B64B3C(v52, v51->obj.klass->_1.element_class)) != 0 )
        {
          if ( v51->max_length <= 5 )
            goto LABEL_91;
          v51->m_Items[5] = v81;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[5], (int32_t)v81, v79, v80);
          v52 = StringLiteral_22196/*"onupdate"*/;
          if ( StringLiteral_22196/*"onupdate"*/ )
          {
            v52 = sub_1B64B3C(StringLiteral_22196/*"onupdate"*/, v51->obj.klass->_1.element_class);
            if ( !v52 )
              goto LABEL_92;
            v53 = StringLiteral_22196/*"onupdate"*/;
          }
          else
          {
            v53 = 0LL;
          }
          if ( v51->max_length <= 6 )
            goto LABEL_91;
          v51->m_Items[6] = (Il2CppObject *)v53;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[6], v53, v82, v83);
          v52 = StringLiteral_9791/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9791/*"OnChangeBgmVolume"*/ )
          {
            v53 = 0LL;
LABEL_84:
            if ( v51->max_length > 7 )
            {
              v51->m_Items[7] = (Il2CppObject *)v53;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&v51->m_Items[7], v53, v84, v85);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v86 = iTween__Hash(v51, 0LL);
              iTween__ValueTo(gameObject, v86, 0LL);
              return;
            }
LABEL_91:
            sub_1B64C64(v52, v53);
          }
          v52 = sub_1B64B3C(StringLiteral_9791/*"OnChangeBgmVolume"*/, v51->obj.klass->_1.element_class);
          if ( v52 )
          {
            v53 = StringLiteral_9791/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v87 = sub_1B64C80(v52);
    sub_1B64B28(v87, 0LL);
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
            (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v91 = v90;
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v91,
                    (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v41 )
              break;
            current = v91.fields._current;
            if ( !v91.fields._current )
              sub_1B64C5C(v41, v42);
            v44 = (float)(__int64)v91.fields._current[2].klass + -800.0;
            if ( v44 == INFINITY )
              v45 = 0x80000000;
            else
              v45 = (int)v44;
            v89 = 0LL;
            v93 = (System_Nullable_float__o)&v89;
            System_Nullable_float____ctor(v93, 0.5, (const MethodInfo_35D28A0 *)Method_System_Nullable_float___ctor__);
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
            (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_38004532(v40, 0LL, 0LL);
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

  if ( (byte_4A0129B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_1B64A00(&System_Func_BgmPlayArgs__bool__TypeInfo, v7);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass141_0__ExistBackupBgmPlayGroup_b__0__, v8);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass141_0_TypeInfo, v9);
    byte_4A0129B = 1;
  }
  v10 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass141_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64C5C(v11, v12);
  *(_QWORD *)(v10 + 16) = checkBgmName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)checkBgmName, v13, v14);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v16 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v17 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_BattleSequenceManager___c__DisplayClass141_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48542300(
           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_2E4B25C *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  if ( (byte_4A0127B & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A0127B = 1;
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
        sub_1B64C64(this, method);
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
    sub_1B64C5C(this, method);
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
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__48804848; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *v34; // x21
  BattleSequenceManager___c_c *v35; // x0
  System_Comparison_T__o *_9__75_0; // x23
  Il2CppObject *v37; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Func_object__bool__o *v41; // x23
  System_Collections_Generic_List_object__o *v42; // x21
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  BattleSequenceManager___c_c *v44; // x0
  System_Comparison_T__o *_9__75_2; // x19
  Il2CppObject *v46; // x22
  struct BattleSequenceManager___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x1
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A0126A & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_1B64A00(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v6);
    sub_1B64A00(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v10);
    sub_1B64A00(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v11);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v12);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v13);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v21);
    sub_1B64A00(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v22);
    sub_1B64A00(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v23);
    sub_1B64A00(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_0__, v24);
    sub_1B64A00(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_2__, v25);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass75_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v26);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo, v27);
    sub_1B64A00(&BattleSequenceManager___c_TypeInfo, v28);
    byte_4A0126A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v29 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_27;
  *(_QWORD *)(v29 + 16) = syncGroupName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)syncGroupName, v32, v33);
  v34 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__48804848 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48804848(
                                                                                           sequence,
                                                                                           (const MethodInfo_2E8B3F0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v34 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v34,
    ComponentsInChildren_object__48804848,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v35 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v35 = BattleSequenceManager___c_TypeInfo;
  }
  _9__75_0 = (System_Comparison_T__o *)v35->static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = BattleSequenceManager___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__75_0 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__75_0,
      v37,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__75_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)_9__75_0, v39, v40);
  }
  System_Collections_Generic_List_object___Sort_55253804(
    v34,
    _9__75_0,
    (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v41 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v41,
    (Il2CppObject *)v29,
    Method_BattleSequenceManager___c__DisplayClass75_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v34,
          (System_Func_T__bool__o *)v41,
          (const MethodInfo_2E27164 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v42 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v42,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__48804848 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48804848(
                                                                                             sequence,
                                                                                             (const MethodInfo_2E8B3F0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v42 )
    {
      System_Collections_Generic_List_object___AddRange(
        v42,
        ComponentsInChildren_object__48804848,
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v43 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48804848(
                                                             sequence,
                                                             (const MethodInfo_2E8B3F0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v42,
        v43,
        (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v44 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v44 = BattleSequenceManager___c_TypeInfo;
      }
      _9__75_2 = (System_Comparison_T__o *)v44->static_fields->__9__75_2;
      if ( !_9__75_2 )
      {
        if ( !v44->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v44);
          v44 = BattleSequenceManager___c_TypeInfo;
        }
        v46 = (Il2CppObject *)v44->static_fields->__9;
        _9__75_2 = (System_Comparison_T__o *)sub_1B64C4C(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__75_2,
          v46,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_2__,
          0LL);
        v47 = BattleSequenceManager___c_TypeInfo->static_fields;
        v47->__9__75_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__75_2;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v47->__9__75_2, (int32_t)_9__75_2, v48, v49);
      }
      System_Collections_Generic_List_object___Sort_55253804(
        v42,
        _9__75_2,
        (const MethodInfo_34B1B2C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v51,
        v42,
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v51,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v51.fields._current )
          sub_1B64C5C(0LL, v50);
      }
      while ( (((__int64 (*)(void))v51.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v51,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1B64C5C(ComponentsInChildren_object__48804848, v31);
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

  if ( (byte_4A0126E & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0126E = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B64C5C(actor, *(_QWORD *)&curLimCnt);
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

  if ( (byte_4A0128E & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&pos);
    sub_1B64A00(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1B64A00(&StringLiteral_5981/*"Enemy"*/, v9);
    sub_1B64A00(&StringLiteral_10623/*"Player"*/, v10);
    byte_4A0128E = 1;
  }
  if ( isEnemy )
    v11 = &StringLiteral_5981/*"Enemy"*/;
  else
    v11 = &StringLiteral_10623/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v21 = pos;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v14, v15, v16);
  v18 = System_String__Format_61399508(format, v12, v17, 0LL);
  if ( !Instance )
    sub_1B64C5C(v18, v19);
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
  __int64 v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v12; // x20
  UnityEngine_Transform_o *result; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4A0128F & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      *(_QWORD *)&posIndex);
    sub_1B64A00(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v5);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass122_0__GetTargetPosIndexTransform_b__0__, v6);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass122_0_TypeInfo, v7);
    byte_4A0128F = 1;
  }
  v8 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass122_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_DWORD *)(v8 + 16) = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v12 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass122_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v12,
                                        (const MethodInfo_34B0630 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v9 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, v14);
    if ( v9 )
      return UnityEngine_GameObject__get_transform(v9, 0LL);
LABEL_9:
    sub_1B64C5C(v9, v10);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
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

  if ( (byte_4A0129A & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_4A0129A = 1;
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
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_16:
    sub_1B64C5C(v9, v8);
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

  if ( (byte_4A0129C & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v2);
    sub_1B64A00(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_4A0129C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v5[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  v5 = (UnityEngine_GameObject_o *)v5[4].klass;
  if ( !v5 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1B64C5C(v5, v6);
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

  if ( (byte_4A0129E & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A0129E = 1;
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

  if ( (byte_4A0126C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_1B64A00(&SoundManager_TypeInfo, v7);
    byte_4A0126C = 1;
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
    sub_1B64C5C(IsNullOrEmpty, v9);
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v15[4] = (Il2CppClass *)bgmName;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)bgmName, v10, v11);
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

  if ( (byte_4A0126D & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, obj);
    byte_4A0126D = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1B64C5C(0LL, v8);
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

  if ( (byte_4A0128A & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    sub_1B64A00(&StringLiteral_18903/*"en_Parts_Up01"*/, v6);
    sub_1B64A00(&StringLiteral_18902/*"en_Parts_Under01"*/, v7);
    byte_4A0128A = 1;
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
                                                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                        (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                        v18 = &StringLiteral_18903/*"en_Parts_Up01"*/;
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
                        v18 = &StringLiteral_18902/*"en_Parts_Under01"*/;
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
                        sub_1B64C5C(klass, v10);
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
    sub_1B64C5C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (ServantStatusBattleListViewItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1B649A4(p_BgChangedCallback, 0, v6, v7);
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

  if ( (byte_4A0127F & 1) == 0 )
  {
    sub_1B64A00(&BgmManager_TypeInfo, method);
    sub_1B64A00(&System_IDisposable_TypeInfo, v5);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4A0127F = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_1B64C5C(0LL, v11);
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
      p_method = sub_1BB69E0(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v13,
            *(_QWORD *)(p_method + 8));
    if ( !v18 )
      sub_1B64C5C(0LL, v17);
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
        v22 = sub_1BB69E0(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v26 = sub_1BB69E0(v18, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      if ( !v27 )
        sub_1B64C5C(0LL, v28);
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
      v34 = sub_1BB69E0(v18, System_IDisposable_TypeInfo, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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

  if ( (byte_4A01281 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, method);
    sub_1B64A00(&CommonUI_TypeInfo, v3);
    sub_1B64A00(&Method_DataManager_GetMaster_TreasureDvcMaster___, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Clear__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_Object__Clear__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool__get_Count__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v21);
    sub_1B64A00(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v22);
    sub_1B64A00(&StringLiteral_9462/*"NoblePhantasm/CutIns"*/, v23);
    sub_1B64A00(&StringLiteral_3206/*"Battle2D"*/, v24);
    byte_4A01281 = 1;
  }
  entity = 0LL;
  memset(&v115, 0, sizeof(v115));
  memset(&v114, 0, sizeof(v114));
  this->fields.IsPlaying = 0;
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
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_89;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_30D67EC *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
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
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v115 = v113;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v115,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v115.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v115,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
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
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v114 = v113;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v114,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v40 = v114.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)v40, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v114,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
    UnityEngine_Object__Destroy_69137476(v46, 0LL);
    *p_seqObject = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.seqObject, 0, v47, v48);
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
                                                   (const MethodInfo_3465944 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v56 )
            goto LABEL_89;
          v57 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v56, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v56,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      sub_1B64C64(transform, v27);
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
        sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)v69 + v61), (int32_t)v70, v65, v66);
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
                                                   (const MethodInfo_3465944 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_89;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0LL);
          v78 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v76,
                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, 0, v98, v99);
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
  v102 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v100, (1 << v102) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_89;
  v104 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v105 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
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
                                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v27 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_89:
    sub_1B64C5C(transform, v27);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v27,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_159:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9462/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
  const MethodInfo_35D0E08 *v39; // x3
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

  if ( (byte_4A01286 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_1B64A00(&BgmManager_TypeInfo, v3);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1B64A00(&System_Func_BgmPlayArgs__bool__TypeInfo, v5);
    sub_1B64A00(&System_IDisposable_TypeInfo, v6);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v7);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v8);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64A00(&Method_System_Nullable_long___ctor__, v10);
    sub_1B64A00(
      &Method_BattleSequenceManager___c__DisplayClass112_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v11);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass112_0_TypeInfo, v12);
    byte_4A01286 = 1;
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
              (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v17 = v15,
            (v15 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                            this->fields.backupBgmPlayArgsGroup,
                                            0LL)) == 0LL) )
      {
        sub_1B64C5C(v15, v16);
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
        p_method = sub_1BB69E0(v15, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v24 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v19, *(_QWORD *)(p_method + 8));
      if ( !v24 )
        sub_1B64C5C(0LL, v23);
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
          v28 = sub_1BB69E0(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass112_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v29, 0LL);
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
          v33 = sub_1BB69E0(v24, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
        if ( !v29 )
          sub_1B64C5C(v34, v34);
        *(_QWORD *)(v29 + 16) = v34;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v29 + 16), v34, v35, v36);
        v37 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v37,
          (Il2CppObject *)v29,
          Method_BattleSequenceManager___c__DisplayClass112_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v17,
                   (System_Func_T__bool__o *)v37,
                   (const MethodInfo_2E27D30 *)Method_BasicHelper_Find_BgmPlayArgs___);
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
          sub_1B64C5C(v41, v42);
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
        v46 = sub_1BB69E0(v24, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4A01282 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, actor);
    byte_4A01282 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1B64C5C(v4, v5);
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

  if ( (byte_4A01287 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_BattleSequenceManager__ReleaseCpk_b__113_0__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Action__Add__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B64A00(&StringLiteral_9465/*"NoblePhantasm_"*/, v7);
    byte_4A01287 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v29 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v13 = System_Int32__ToString((int32_t)&v29, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_61385136(
                                            (System_String_o *)StringLiteral_9465/*"NoblePhantasm_"*/,
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v19;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v22 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__113_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v25 = DelayInvokeMethodList->fields._items,
        v26 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v25) )
  {
LABEL_17:
    sub_1B64C5C(Instance, v9);
  }
  v27 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v22,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    DelayInvokeMethodList->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.fixedVoice = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.intactBgmList = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A01285 & 1) == 0 )
  {
    sub_1B64A00(&BgmManager_TypeInfo, method);
    byte_4A01285 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
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

  if ( (byte_4A0128B & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_1B64A00(&StringLiteral_9300/*"N_Enemy2"*/, v5);
    sub_1B64A00(&StringLiteral_9301/*"N_Player2"*/, v6);
    byte_4A0128B = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                                        (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v13 = actor;
  v14 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9300/*"N_Enemy2"*/
                           : &StringLiteral_9301/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v15 = 336LL;
  if ( LOBYTE(actor[20].klass) )
    v15 = 344LL;
  v16 = *(__int64 *)((char *)&performance->klass + v15);
  if ( !v16 )
LABEL_55:
    sub_1B64C5C(actor, method);
  if ( (int)*(_QWORD *)(v16 + 24) >= 1 )
  {
    v17 = *v14;
    v18 = 0LL;
    v19 = *(_QWORD *)(v16 + 24);
    do
    {
      if ( v18 >= v19 )
        sub_1B64C64(actor, method);
      v20 = *(UnityEngine_GameObject_o **)(v16 + 32 + 8 * v18);
      v21 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, v21, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
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
    sub_1B64C5C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1B649A4(
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

  if ( (byte_4A01297 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4A01297 = 1;
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
                         (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1B64C5C(battleTargetList, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.fixedVoice = voiceId;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
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

  if ( (byte_4A01298 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A01298 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1B64C5C(Instance, v7);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v9, v10);
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
  if ( (byte_4A01289 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, targetActor);
    byte_4A01289 = 1;
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
    sub_1B64C5C(this, targetActor);
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
            if ( !byte_49F9821 )
            {
              this = (BattleSequenceManager_o *)sub_1B64A00(&UnityEngine_Vector3_TypeInfo, targetActor);
              byte_49F9821 = 1;
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

  if ( (byte_4A01270 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_4A01270 = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v9),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1B64C5C(actor, isStart);
  }
  v10 = 0;
  while ( v10 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v10,
                                          (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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

  if ( (byte_4A01271 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, fbx);
    sub_1B64A00(&StringLiteral_16542/*"_y0"*/, v6);
    byte_4A01271 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v7 )
  {
    if ( !fbx )
      sub_1B64C5C(v7, v8);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16542/*"_y0"*/, 0LL);
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

  if ( (byte_4A0126F & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_2235/*"Actors/Actor"*/, v8);
    byte_4A0126F = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1B64C5C(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v24 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v24, 0LL);
    v14 = (BattleSequenceManager_o *)System_String__Concat_61385136((System_String_o *)StringLiteral_2235/*"Actors/Actor"*/, v13, 0LL);
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
          sub_1B64C64(seqObject, playerList);
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
    v20 = (BattleSequenceManager_o *)System_String__Concat_61385136((System_String_o *)StringLiteral_2235/*"Actors/Actor"*/, v19, 0LL);
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
  __int64 v69; // x21
  const MethodInfo *v70; // x1
  __int64 v71; // x1
  BattlePerformance_o *v72; // x0
  __int64 ServantPosIndex; // x0
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  int v77; // w20
  __int64 v78; // x1
  int32_t v79; // w2
  int32_t v80; // w3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x8
  int v86; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v87; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A01288 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, method);
    sub_1B64A00(&BattleSequenceManager_BattleTarget_TypeInfo, v3);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int___ctor__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_int__get_Count__, v11);
    sub_1B64A00(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v14);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass115_0__SetupTargetInfo_b__0__, v16);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass115_0_TypeInfo, v17);
    byte_4A01288 = 1;
  }
  memset(&j, 0, sizeof(j));
  v18 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget, 0, v19, v20);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v25 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v25,
        (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = v25;
        v28 = (ServantStatusBattleListViewItem_o *)(v18 + 16);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v25, v26, v27);
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
                                    (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v29 = *((_DWORD *)v30 + 6);
                if ( (int)++v31 >= v29 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1B64C64(actor, v21);
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
                                      (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
                                        (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
                  v42 = (System_Action_object__o *)sub_1B64C4C(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v42,
                    (Il2CppObject *)v18,
                    Method_BattleSequenceManager___c__DisplayClass115_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v42,
                    (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v44 = (System_Collections_Generic_HashSet_int__o *)sub_1B64C4C(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v44,
                  (const MethodInfo_33662A0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v28->klass;
                if ( v28->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v87,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_3366E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v86 = 0;
                  j = v87;
                  v45 = 0;
LABEL_41:
                  for ( i = v45; ; ++i )
                  {
                    v45 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_3228670 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1B64C5C(0LL, v47);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1B64C5C(0LL, v51);
                    v52 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v52 )
                      sub_1B64C5C(0LL, v53);
                    if ( (klass_low != 0) == (LOBYTE(v52[30].klass) != 0) )
                    {
                      ++v86;
                      goto LABEL_41;
                    }
                    if ( !v44 )
                      sub_1B64C5C(v52, v53);
                    System_Collections_Generic_HashSet_int___Add(
                      v44,
                      current,
                      (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_322866C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v86 && i == 1 )
                  {
                    v28->klass = (ServantStatusBattleListViewItem_c *)v44;
                    sub_1B649A4(v28, (int32_t)v44, v54, v55);
                  }
                  actor = v28->klass;
                  if ( v28->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v87,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_3366E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v56 = -1;
                      for ( j = v87;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_3228670 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v56 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_322866C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v56, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v57 = (struct UnityEngine_GameObject_o *)actor;
                      v58 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v57;
                      sub_1B649A4(
                        (ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget,
                        (int32_t)v57,
                        v59,
                        v60);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v58, v61);
                    }
                    if ( v44 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v87,
                        v44,
                        (const MethodInfo_3366E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v87;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_3228670 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v63 = this->fields.performance;
                        if ( !v63 )
                          sub_1B64C5C(0LL, v62);
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
                            sub_1B64C5C(v66, v67);
                          v68 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v65,
                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v69 = sub_1B64C4C(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor((BattleSequenceManager_BattleTarget_o *)v69, v70);
                          v72 = this->fields.performance;
                          if ( !v72 )
                            sub_1B64C5C(0LL, v71);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v72, v64, 0LL);
                          if ( !v69 )
                            sub_1B64C5C(ServantPosIndex, v74);
                          v77 = ServantPosIndex;
                          *(_QWORD *)(v69 + 24) = v68;
                          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v69 + 24), (int32_t)v68, v75, v76);
                          *(_DWORD *)(v69 + 60) = v77;
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1B64C5C(0LL, v78);
                          items = battleTargetList->fields._items;
                          v83 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1B64C5C(battleTargetList, v78);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v69,
                              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v85 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v85[4] = (Il2CppClass *)v69;
                            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v85 + 4), v69, v79, v80);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_322866C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1B64C5C(actor, v21);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B64C5C(0LL, method);
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
  if ( (byte_4A0127E & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_4A0127E = 1;
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
    sub_1B64C5C(this, isFullScreen);
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
  if ( (byte_4A0128D & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___, tlcont);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0128D = 1;
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
                         (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
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
                                          (const MethodInfo_2E26D78 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
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
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v37 + 32) = tlcont;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)tlcont, v32, v33);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1B64C5C(this, tlcont);
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

  if ( (byte_4A0129D & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    byte_4A0129D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      battleTargetList,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v11 )
        break;
      if ( !v26.fields._current )
        sub_1B64C5C(v11, v12);
      monitor = (UnityEngine_Object_o *)v26.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v14 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v14 )
      {
        if ( !monitor )
          sub_1B64C5C(v14, v15);
        v16 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v16, 0LL, 0LL) )
        {
          v18 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v18 )
            sub_1B64C5C(0LL, v17);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v18,
                                                                    (const MethodInfo_2E8B128 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1B64C5C(IsNullOrEmpty, v21);
            v22 = Components_object[1].monitor;
            if ( (int)v22 >= 1 )
            {
              v23 = 0LL;
              do
              {
                if ( v23 >= (unsigned int)v22 )
                  sub_1B64C64(IsNullOrEmpty, v21);
                v24 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v23);
                if ( isOverwrite )
                {
                  if ( !v24 )
                    sub_1B64C5C(0LL, v21);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v24, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v24 )
                    sub_1B64C5C(0LL, v21);
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
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1B64C5C(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1B649A4(
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

  if ( (byte_4A01268 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_4A01268 = 1;
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
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v14.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v14.fields._current[1].monitor)(
            v14.fields._current[4].klass,
            v14.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v11 = this->fields.DelayInvokeMethodList;
      if ( !v11 )
LABEL_14:
        sub_1B64C5C(DelayInvokeMethodList, v8);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A01280 & 1) == 0 )
  {
    sub_1B64A00(&BattleSequenceManager__WaitEndSequence_d__106_TypeInfo, method);
    byte_4A01280 = 1;
  }
  v3 = sub_1B64C4C(BattleSequenceManager__WaitEndSequence_d__106_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__113_0(BattleSequenceManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A012A1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_4A012A1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v16.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v16.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1B64C5C(0LL, v11);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v12 = this->fields.ReleaseSoundNames;
  if ( !v12 )
LABEL_14:
    sub_1B64C5C(ReleaseSoundNames, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
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

  if ( (byte_4A01273 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16057/*"_"*/, voiceMaster);
    byte_4A01273 = 1;
  }
  FlagRequestNumber = System_String__Concat_61385136((System_String_o *)StringLiteral_16057/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_42162104((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B64C5C(FlagRequestNumber, v10);
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
  if ( (byte_4A0127C & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_1B64A00(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_4A0127C = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.BgChangedCallback, (int32_t)callback, tp, parentCamera);
  performance = this->fields.performance;
  v21 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1B64C5C(v22, v23);
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

  if ( (byte_4A01275 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16057/*"_"*/, voiceMaster);
    byte_4A01275 = 1;
  }
  FlagRequestNumber = System_String__Concat_61385136((System_String_o *)StringLiteral_16057/*"_"*/, labelName, 0LL);
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
    sub_1B64C5C(FlagRequestNumber, v10);
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

  if ( (byte_4A01292 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_4A01292 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_3173198 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_3172F24 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1B64C5C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A01294 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_4A01294 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4A01264 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A01264 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.actor;
  if ( !v6 )
    sub_1B64C5C(0LL, v5);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v6,
                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_4A01267 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    byte_4A01267 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB68DC(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB68DC(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v9);
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

  if ( (byte_4A01265 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A01265 = 1;
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
    sub_1B64C5C(v4, v5);
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

  if ( (byte_4A01266 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A01266 = 1;
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
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B64C5C(Component_object, v6);
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

  if ( (byte_4A0127A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_1B64A00(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_4A0127A = 1;
  }
  this->fields.performance = performance;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (int32_t)players);
  this->fields.actor = actor;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.actor, (int32_t)actor, v18, v19);
  this->fields.playerActors = players;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playerActors, (int32_t)players, v20, v21);
  this->fields.enemyActors = enemies;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.enemyActors, (int32_t)enemies, v22, v23);
  this->fields.actorCamera = camera;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.actorCamera, (int32_t)camera, v24, v25);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v28, v29);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v32, v33);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1B64C5C(actorCamera, v27);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v35, v36);
  this->fields.bgObject = bg;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.bgObject, (int32_t)bg, v37, v38);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v39);
  v40 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v40,
    (const MethodInfo_31725F0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v40;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v40, v41, v42);
  v43 = (System_Collections_Generic_HashSet_T__o *)sub_1B64C4C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v43,
    (const MethodInfo_336C6C4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v43;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v43, v44, v45);
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
  if ( (byte_4A01295 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_4A01295 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4A01277 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_2231/*"Actor"*/, name);
    sub_1B64A00(&StringLiteral_16708/*"animCamLoc"*/, v4);
    byte_4A01277 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2231/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16708/*"animCamLoc"*/, 0LL);
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

  if ( (byte_4A01269 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__0__, v19);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo, v20);
    sub_1B64A00(&StringLiteral_9462/*"NoblePhantasm/CutIns"*/, v21);
    byte_4A01269 = 1;
  }
  v22 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass74_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 64) = onComplete;
  *(_DWORD *)(v22 + 24) = chrId;
  *(_DWORD *)(v22 + 28) = limitCount;
  *(_DWORD *)(v22 + 32) = treasureDeviceId;
  *(_DWORD *)(v22 + 36) = treasureDeviceLv;
  *(_DWORD *)(v22 + 40) = npChargeStage;
  *(_DWORD *)(v22 + 56) = overwriteSvtVoiceId;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 64), (int32_t)onComplete, v27, v28);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v22 + 24);
  this->fields.limitCount = *(_DWORD *)(v22 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v22 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v22 + 56);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v22 + 48) = Component_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v22 + 48), (int32_t)Component_object, v30, v31);
  actor = *(UnityEngine_GameObject_o **)(v22 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v22 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v22 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1B64C5C(actor, v24);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9462/*"NoblePhantasm/CutIns"*/, v32, 1, 0LL);
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
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Object_o *seqObject; // x23
  int32_t NPSeqIdFromCachedAssetName; // w0
  int32_t chrId; // w24
  int32_t v41; // w23
  struct BattlePerformance_o *v42; // x8
  struct BattlePerformance_o *v43; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v46; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v48; // w24
  char v49; // w0
  System_Collections_Generic_List_bool__o *v50; // x24
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  struct BattlePerformance_o *v54; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v56; // x8
  unsigned __int64 v57; // x27
  UnityEngine_Object_o *v58; // x25
  System_Collections_Generic_List_bool__o *v59; // x24
  struct System_Boolean_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  struct System_Boolean_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v67; // x2
  struct BattlePerformance_o *v68; // x8
  struct UnityEngine_GameObject_array *v69; // x27
  __int64 v70; // x8
  unsigned __int64 v71; // x28
  UnityEngine_Object_o *v72; // x24
  Il2CppObject *v73; // x0
  const MethodInfo *v74; // x2
  int32_t v75; // w2
  int32_t v76; // w3
  struct UnityEngine_GameObject_array *v77; // x8
  __int64 v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  struct BattlePerformance_o *v81; // x8
  struct UnityEngine_GameObject_array *v82; // x8
  __int64 v83; // x0
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  bool v91; // w1
  BattleSequenceManager_o *v92; // x25
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v97; // w2
  int32_t v98; // w3
  BattleSequenceManager_o *v99; // x22
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int32_t v103; // w2
  int32_t v104; // w3
  BattleSequenceManager_o *v105; // x23
  int32_t v106; // w2
  int32_t v107; // w3
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  BattleSequenceManager_c *v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  BattleSequenceManager_o *v114; // x23
  int32_t v115; // w2
  int32_t v116; // w3
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  int32_t v120; // w2
  int32_t v121; // w3
  BattleSequenceManager_o *v122; // x23
  int32_t v123; // w2
  int32_t v124; // w3
  int32_t v125; // w2
  int32_t v126; // w3
  System_Collections_Hashtable_o *v127; // x0
  System_String_o *BgmName; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  const MethodInfo *v131; // x2
  BattleSequenceManager_o *v132; // x21
  ServantStatusBattleListViewItem_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v135; // x24
  System_Delegate_o *v136; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  System_Delegate_o *v139; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v140; // x1
  int32_t v141; // w2
  int32_t v142; // w3
  const MethodInfo *v143; // x2
  __int64 v144; // x0
  System_Action_USSequencer__o *v145; // [xsp+8h] [xbp-78h]
  bool v146; // [xsp+10h] [xbp-70h]
  int v147; // [xsp+14h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+18h] [xbp-68h] BYREF
  int v149; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4A0127D & 1) == 0 )
  {
    sub_1B64A00(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_1B64A00(&BattleSequenceManager_TypeInfo, v8);
    sub_1B64A00(&CommonUI_TypeInfo, v9);
    sub_1B64A00(&FSUtility_TypeInfo, v10);
    sub_1B64A00(&UnityEngine_GameObject___TypeInfo, v11);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_1B64A00(&int_TypeInfo, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1B64A00(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1B64A00(&object___TypeInfo, v18);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v19);
    sub_1B64A00(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v21);
    sub_1B64A00(&float_TypeInfo, v22);
    sub_1B64A00(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v23);
    sub_1B64A00(&StringLiteral_12705/*"ShowNobleInfo"*/, v24);
    sub_1B64A00(&StringLiteral_19580/*"from"*/, v25);
    sub_1B64A00(&StringLiteral_9791/*"OnChangeBgmVolume"*/, v26);
    sub_1B64A00(&StringLiteral_23834/*"time"*/, v27);
    sub_1B64A00(&StringLiteral_22196/*"onupdate"*/, v28);
    sub_1B64A00(&StringLiteral_3206/*"Battle2D"*/, v29);
    sub_1B64A00(&StringLiteral_23874/*"to"*/, v30);
    this = (BattleSequenceManager_o *)sub_1B64A00(&iTween_TypeInfo, v31);
    byte_4A0127D = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_137;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_137;
  v34 = sub_1B64AA8(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v34;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v7->fields.saveWaitEnemy, v34, v36, v37);
  seqObject = (UnityEngine_Object_o *)v7->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NPSeqIdFromCachedAssetName = ServantAssetLoadManager__GetNPSeqIdFromCachedAssetName(0LL);
    chrId = v7->fields.chrId;
    v41 = NPSeqIdFromCachedAssetName;
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    this = (BattleSequenceManager_o *)FSUtility__IsFullScreenNP(chrId, v41, 0LL);
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
        (System_String_o *)StringLiteral_12705/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v42 = v7->fields.performance;
    if ( !v42 )
      goto LABEL_137;
    this = (BattleSequenceManager_o *)v42->fields.actioncamera;
    if ( !this )
      goto LABEL_137;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v43 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v43 )
      goto LABEL_137;
    this = (BattleSequenceManager_o *)v43->fields.actioncamera;
    if ( !this )
      goto LABEL_137;
    v145 = callback;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_137;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v46 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v46), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_137;
    v48 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v49 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v49) | v48, 0LL);
    v50 = (System_Collections_Generic_List_bool__o *)sub_1B64C4C(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v50,
      (const MethodInfo_34653E0 *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v50;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v7->fields.ActorActiveList, (int32_t)v50, v52, v53);
    v54 = v7->fields.performance;
    if ( !v54 )
      goto LABEL_137;
    p_actorlist = v54->fields.p_actorlist;
    v146 = isDemoMode;
    if ( !p_actorlist )
      goto LABEL_137;
    v56 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0LL;
      while ( v57 < (unsigned int)v56 )
      {
        v58 = (UnityEngine_Object_o *)p_actorlist->m_Items[v57];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
        v59 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v58 )
            goto LABEL_137;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v58, 0LL);
          if ( !v59 )
            goto LABEL_137;
          items = v59->fields._items;
          v61 = Method_System_Collections_Generic_List_bool__Add__;
          ++v59->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v59->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v59,
              (unsigned __int8)this & 1,
              *(const MethodInfo_3465C44 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            v59->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v58,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)Component_object,
            (BattleActorControl_o *)Component_object,
            v67);
        }
        else
        {
          if ( !v59 )
            goto LABEL_137;
          v63 = v59->fields._items;
          v64 = Method_System_Collections_Generic_List_bool__Add__;
          ++v59->fields._version;
          if ( !v63 )
            goto LABEL_137;
          v65 = v59->fields._size;
          if ( (unsigned int)v65 >= v63->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v59,
              0,
              *(const MethodInfo_3465C44 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v59->fields._size = v65 + 1;
            v63->m_Items[v65 + 4] = 0;
          }
        }
        LODWORD(v56) = p_actorlist->max_length;
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_48;
      }
LABEL_138:
      sub_1B64C64(this, isOpponent);
    }
LABEL_48:
    v68 = v7->fields.performance;
    if ( !v68 )
      goto LABEL_137;
    v69 = v68->fields.e_actorlist;
    if ( !v69 )
      goto LABEL_137;
    v70 = *(_QWORD *)&v69->max_length;
    if ( (int)v70 >= 1 )
    {
      v71 = 0LL;
      do
      {
        if ( v71 >= (unsigned int)v70 )
          goto LABEL_138;
        v72 = (UnityEngine_Object_o *)v69->m_Items[v71];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v72 )
            goto LABEL_137;
          v73 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v72,
                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)v73,
            (BattleActorControl_o *)v73,
            v74);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v72,
                                              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_137;
          this = (BattleSequenceManager_o *)this[1].fields.FadeTargetPanelIndexs;
          if ( !this )
            goto LABEL_137;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v77 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_137;
            if ( v71 >= v77->max_length )
              goto LABEL_138;
            v78 = (__int64)v77 + 8 * v71;
            *(_QWORD *)(v78 + 32) = v72;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v78 + 32), (int32_t)v72, v75, v76);
            v81 = v7->fields.performance;
            if ( !v81 )
              goto LABEL_137;
            v82 = v81->fields.e_actorlist;
            if ( !v82 )
              goto LABEL_137;
            if ( v71 >= v82->max_length )
              goto LABEL_138;
            v83 = (__int64)v82 + 8 * v71;
            *(_QWORD *)(v83 + 32) = 0LL;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v83 + 32), 0, v79, v80);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v72, 0, 0LL);
            this = *p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_137;
            v84 = *(_QWORD *)&this->fields.m_CachedPtr;
            v85 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v84 )
              goto LABEL_137;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v84 + 24) )
            {
              v90 = v85[4];
              v91 = 1;
              goto LABEL_80;
            }
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v84 + m_CancellationTokenSource_low + 32) = 1;
          }
          else
          {
            v92 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v72,
                                                0LL);
            if ( !v92 )
              goto LABEL_137;
            v93 = *(_QWORD *)&v92->fields.m_CachedPtr;
            v94 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(v92->fields.m_CancellationTokenSource);
            if ( !v93 )
              goto LABEL_137;
            v95 = SLODWORD(v92->fields.m_CancellationTokenSource);
            if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
            {
              v90 = v94[4];
              v91 = (unsigned __int8)this & 1;
              this = v92;
              goto LABEL_80;
            }
            LODWORD(v92->fields.m_CancellationTokenSource) = v95 + 1;
            *(_BYTE *)(v93 + v95 + 32) = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_137;
          v87 = *(_QWORD *)&this->fields.m_CachedPtr;
          v88 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v87 )
            goto LABEL_137;
          v89 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
          {
            v90 = v88[4];
            v91 = 0;
LABEL_80:
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              v91,
              *(const MethodInfo_3465C44 **)(*(_QWORD *)(v90 + 192) + 112LL));
            goto LABEL_81;
          }
          LODWORD(this->fields.m_CancellationTokenSource) = v89 + 1;
          *(_BYTE *)(v87 + v89 + 32) = 0;
        }
LABEL_81:
        LODWORD(v70) = v69->max_length;
      }
      while ( (__int64)++v71 < (int)v70 );
    }
    if ( !v146 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1B64AA8(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_137;
    v99 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19580/*"from"*/;
    if ( StringLiteral_19580/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1B64B3C(StringLiteral_19580/*"from"*/, v99->klass->_1.element_class);
      if ( !this )
        goto LABEL_139;
      *(_QWORD *)&isOpponent = StringLiteral_19580/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v99->fields.m_CancellationTokenSource) )
      goto LABEL_138;
    v99->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.sequenceManager, isOpponent, v97, v98);
    v149 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v149, v100, v101, v102);
    v105 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1B64B3C(this, v99->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_138;
      *(_QWORD *)&v99->fields.servantId = v105;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.servantId, (int32_t)v105, v103, v104);
      this = (BattleSequenceManager_o *)StringLiteral_23874/*"to"*/;
      if ( StringLiteral_23874/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1B64B3C(StringLiteral_23874/*"to"*/, v99->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
        *(_QWORD *)&isOpponent = StringLiteral_23874/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_138;
      *(_QWORD *)&v99->fields.testNpPer = isOpponent;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.testNpPer, isOpponent, v106, v107);
      v111 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v111 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v111->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(
                                          float_TypeInfo,
                                          &NoblePhantasmBgmVolumeRate,
                                          v108,
                                          v109,
                                          v110);
      v114 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1B64B3C(this, v99->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_138;
        v99->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v114;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.FadeTargetPanelIndexs, (int32_t)v114, v112, v113);
        this = (BattleSequenceManager_o *)StringLiteral_23834/*"time"*/;
        if ( StringLiteral_23834/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1B64B3C(StringLiteral_23834/*"time"*/, v99->klass->_1.element_class);
          if ( !this )
            goto LABEL_139;
          *(_QWORD *)&isOpponent = StringLiteral_23834/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_138;
        *(_QWORD *)&v99->fields.IsPlaying = isOpponent;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.IsPlaying, isOpponent, v115, v116);
        v147 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v147, v117, v118, v119);
        v122 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1B64B3C(this, v99->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_138;
          v99->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v122;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.ReleaseSoundNames, (int32_t)v122, v120, v121);
          this = (BattleSequenceManager_o *)StringLiteral_22196/*"onupdate"*/;
          if ( StringLiteral_22196/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1B64B3C(StringLiteral_22196/*"onupdate"*/, v99->klass->_1.element_class);
            if ( !this )
              goto LABEL_139;
            *(_QWORD *)&isOpponent = StringLiteral_22196/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_138;
          v99->fields.performance = (struct BattlePerformance_o *)isOpponent;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.performance, isOpponent, v123, v124);
          this = (BattleSequenceManager_o *)StringLiteral_9791/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9791/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_120:
            if ( LODWORD(v99->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_138;
            v99->fields.seqObject = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v99->fields.seqObject, isOpponent, v125, v126);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v127 = iTween__Hash((System_Object_array *)v99, 0LL);
            iTween__ValueTo(gameObject, v127, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v129, v130);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v131);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v132 = this;
                    p_playerActors = (ServantStatusBattleListViewItem_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v135 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1B64C4C(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v135,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v136 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v135, 0LL);
                    v139 = v136;
                    if ( v136 )
                    {
                      v140 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v136->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v136;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v136->klass == v140 )
                          goto LABEL_132;
                      }
                      sub_1B64F1C(v136);
                    }
                    p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v139;
LABEL_132:
                    sub_1B649A4(p_playerActors, (int32_t)v139, v137, v138);
                    v7->fields.OnCompleteActorCallback = v145;
                    sub_1B649A4(
                      (ServantStatusBattleListViewItem_o *)&v7->fields.OnCompleteActorCallback,
                      (int32_t)v145,
                      v141,
                      v142);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v132, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v143);
                    return;
                  }
                }
              }
            }
LABEL_137:
            sub_1B64C5C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1B64B3C(StringLiteral_9791/*"OnChangeBgmVolume"*/, v99->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_9791/*"OnChangeBgmVolume"*/;
            goto LABEL_120;
          }
        }
      }
    }
LABEL_139:
    v144 = sub_1B64C80(this);
    sub_1B64B28(v144, 0LL);
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

  if ( (byte_4A01296 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B64A00(&Voice_TypeInfo, v6);
    byte_4A01296 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                      sub_1B64C64(MasterData_object, v17);
                    BattleSequenceManager__addServantVoicePlayed(this, v19, this->fields.chrId, v15->m_Items[v24], v18);
                    LODWORD(v23) = v15->max_length;
                    ++v24;
                  }
                  while ( (__int64)v24 < (int)v23 );
                }
                return;
              }
LABEL_31:
              sub_1B64C5C(actor, method);
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

  if ( (byte_4A01274 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_16057/*"_"*/, voiceMaster);
    byte_4A01274 = 1;
  }
  FlagRequestNumber = System_String__Concat_61385136((System_String_o *)StringLiteral_16057/*"_"*/, labelName, 0LL);
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
    sub_1B64C5C(FlagRequestNumber, v10);
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
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A01291 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_1B64A00(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_4A01291 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    battleTargetList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B64C5C(0LL, v8);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v12.fields._current,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v9 = this->fields.battleTargetList;
  if ( !v9 )
LABEL_13:
    sub_1B64C5C(battleTargetList, method);
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

  if ( (byte_4A01278 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v11);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_3197/*"Battle/Prefab/"*/, v13);
    byte_4A01278 = 1;
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
                                         (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v17 = System_String__Concat_61385136((System_String_o *)StringLiteral_3197/*"Battle/Prefab/"*/, name, 0LL);
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
                                         (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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

  if ( (byte_4A01279 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_1B64A00(&System_IDisposable_TypeInfo, v6);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B64A00(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_1B64A00(&StringLiteral_1124/*"/"*/, v9);
    byte_4A01279 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1B64C5C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v10);
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
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v19 = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      sub_1B64C5C(0LL, v21);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B64F1C(v20);
LABEL_37:
      sub_1B64C5C(Component_object, v26);
    }
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      sub_1B64C5C(0LL, v24);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v27 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v29 = System_String__Concat_61385136((System_String_o *)StringLiteral_1124/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v29, 0LL) )
      goto LABEL_27;
  }
  v27 = 0LL;
LABEL_27:
  v30 = sub_1B64B3C(Enumerator, System_IDisposable_TypeInfo);
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
      v35 = sub_1BB69E0(v30, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4A01293 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_1B64A00(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_4A01293 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_3172F90 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1B64C5C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_336D8A8 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x24
  const MethodInfo *v81; // x3
  UnityEngine_Object_o *v82; // x27
  _BOOL8 v83; // x0
  const MethodInfo *v84; // x3
  WellFired_USTimelineContainer_o *v85; // x26
  System_Collections_Generic_List_object__o *v86; // x21
  System_Collections_Generic_List_object__o *v87; // x29
  Il2CppObject *v88; // x22
  Il2CppObject *sequenceManager; // x23
  UnityEngine_Object_o *v90; // x23
  System_Collections_Generic_List_object__o *createdObjects; // x27
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  __int64 v97; // x1
  Il2CppClass **v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  struct UnityEngine_Camera_o *actorCamera; // x1
  __int64 v102; // x27
  struct UnityEngine_Camera_o *effectCamera; // x1
  int32_t v104; // w2
  int32_t v105; // w3
  struct UnityEngine_Camera_o *cutInCamera; // x1
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w2
  int32_t v110; // w3
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  __int64 v113; // x1
  Il2CppObject *CutInPrefab; // x28
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v119; // x0
  ServantStatusBattleListViewItem_o *v120; // x27
  int32_t v121; // w2
  int32_t v122; // w3
  const MethodInfo *v123; // x1
  const MethodInfo *v124; // x2
  int v125; // w8
  __int64 v126; // x22
  int v127; // w24
  UnityEngine_Object_o *v128; // x27
  __int64 v129; // x8
  __int64 v130; // x26
  unsigned __int64 v131; // x25
  __int64 v132; // x28
  System_String_o *name; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  UnityEngine_Object_c *klass; // x8
  int32_t gc_desc; // w27
  System_String_o *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  __int64 v141; // x10
  System_String_o *v142; // x0
  int32_t v143; // w2
  int32_t v144; // w3
  __int64 v145; // x9
  struct UnityEngine_Camera_o *v146; // x1
  UnityEngine_Transform_o *parent; // x0
  ServantStatusBattleListViewItem_o *v148; // x0
  int32_t treasureDeviceId; // w29
  int32_t limitCount; // w23
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x23
  int32_t v152; // w2
  int32_t v153; // w3
  System_Collections_Generic_List_object__o *v154; // x8
  struct System_Object_array *v155; // x9
  _QWORD *v156; // x10
  __int64 v157; // x11
  Il2CppClass **v158; // x0
  System_String_o *v159; // x0
  __int64 v160; // x9
  System_String_o **v161; // x29
  System_String_o *v162; // x0
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  int32_t v169; // w2
  int32_t v170; // w3
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  __int64 methodPtr_low; // x9
  struct UnityEngine_Camera_o *v176; // x1
  __int64 v177; // x28
  int32_t v178; // w2
  int32_t v179; // w3
  UnityEngine_Transform_o *v180; // x28
  int v181; // s0
  System_Collections_Generic_List_object__o *v184; // x25
  int32_t v185; // w2
  int32_t v186; // w3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  Il2CppClass **v190; // x0
  BattleSequenceManager_o *v191; // x0
  const MethodInfo *v192; // x3
  int32_t v193; // w2
  int32_t v194; // w3
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x1
  Il2CppClass **v199; // x0
  Il2CppObject *current; // x24
  _BOOL8 v201; // x0
  __int64 v202; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v204; // x1
  void *v205; // x24
  int v206; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v208; // x0
  _QWORD *v209; // x25
  __int64 v210; // x8
  unsigned __int64 v211; // x28
  __int64 v212; // x26
  System_String_o *v213; // x0
  __int64 v214; // x9
  _BOOL8 v215; // x0
  __int64 v216; // x1
  int32_t v217; // w2
  int32_t v218; // w3
  UnityEngine_Component_o *v219; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v221; // w2
  int32_t v222; // w3
  struct System_Object_array *v223; // x8
  _QWORD *v224; // x9
  __int64 v225; // x10
  Il2CppClass **v226; // x0
  __int64 v227; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v229; // w19
  System_Collections_IEnumerator_c *v230; // x8
  __int64 v231; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v234; // x8
  __int64 v235; // x9
  System_Collections_IEnumerator_c **v236; // x10
  __int64 v237; // x0
  UnityEngine_Component_o *v238; // x0
  __int64 v239; // x1
  __int64 v240; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v242; // x1
  Il2CppObject *v243; // x0
  __int64 v244; // x1
  Il2CppObject *v245; // x25
  System_String_o *monitor; // x0
  __int64 v247; // x1
  System_String_o *v248; // x0
  __int64 v249; // x1
  System_String_o *v250; // x0
  System_String_o *v251; // x0
  __int64 v252; // x0
  __int64 v253; // x8
  __int64 v254; // x24
  __int64 v255; // x9
  int *v256; // x10
  __int64 v257; // x0
  __int64 v258; // x1
  System_Collections_IEnumerator_c *v259; // x8
  __int64 v260; // x9
  int32_t *v261; // x10
  __int64 v262; // x0
  System_Collections_IEnumerator_c *v263; // x8
  __int64 v264; // x9
  System_Collections_IEnumerator_c **v265; // x10
  __int64 v266; // x0
  UnityEngine_Component_o *v267; // x0
  __int64 v268; // x1
  __int64 v269; // x9
  UnityEngine_GameObject_o *v270; // x0
  __int64 v271; // x1
  Il2CppObject *v272; // x0
  __int64 v273; // x1
  WellFired_USTimelineContainer_o *v274; // x24
  System_String_o *v275; // x0
  __int64 v276; // x1
  bool v277; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v279; // x27
  System_String_o *v280; // x0
  __int64 v281; // x1
  bool v282; // w28
  System_String_o *v283; // x0
  System_String_o *v284; // x0
  __int64 v285; // x1
  System_String_o *v286; // x0
  UnityEngine_Component_o *v287; // x0
  UnityEngine_Transform_o *v288; // x0
  System_String_o *v289; // x0
  __int64 v290; // x1
  UnityEngine_GameObject_o *actor; // x0
  __int64 v292; // x1
  UnityEngine_Transform_o *v293; // x25
  System_String_o *v294; // x0
  System_String_o *v295; // x0
  UnityEngine_Transform_o *v296; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v298; // x1
  System_String_o *v299; // x0
  bool v300; // w0
  __int64 v301; // x1
  __int64 *v302; // x8
  System_String_o *v303; // x0
  bool v304; // w0
  System_String_o *v305; // x28
  UnityEngine_GameObject_o *v306; // x0
  System_String_o *v307; // x27
  UnityEngine_Transform_o *v308; // x0
  __int64 v309; // x1
  UnityEngine_Object_o *v310; // x25
  _BOOL8 v311; // x0
  __int64 v312; // x1
  __int64 v313; // x1
  System_Collections_IEnumerator_o *v314; // x26
  System_Collections_IEnumerator_c *v315; // x8
  __int64 v316; // x9
  int32_t *v317; // x10
  __int64 v318; // x0
  System_Collections_IEnumerator_c *v319; // x8
  __int64 v320; // x9
  System_Collections_IEnumerator_c **v321; // x10
  __int64 v322; // x0
  UnityEngine_Component_o *v323; // x0
  __int64 v324; // x1
  UnityEngine_Object_o *v325; // x25
  __int64 v326; // x9
  UnityEngine_Object_o *v327; // x0
  __int64 v328; // x1
  System_String_o *v329; // x0
  __int64 v330; // x1
  System_String_o *v331; // x0
  _BOOL8 v332; // x0
  const MethodInfo *v333; // x2
  __int64 v334; // x1
  __int64 v335; // x1
  int32_t v336; // w25
  System_String_o *v337; // x26
  __int64 v338; // x0
  __int64 v339; // x25
  __int64 v340; // x8
  __int64 v341; // x9
  int *v342; // x10
  __int64 v343; // x0
  System_String_o *v344; // x25
  System_String_o *v345; // x0
  __int64 v346; // x1
  System_String_o *v347; // x0
  __int64 v348; // x1
  System_String_array *v349; // x0
  __int64 v350; // x1
  __int64 v351; // x1
  System_String_o *v352; // x26
  UnityEngine_GameObject_o *v353; // x0
  __int64 v354; // x1
  UnityEngine_Transform_o *v355; // x25
  System_String_o *v356; // x0
  System_String_o *v357; // x0
  __int64 v358; // x1
  System_String_o *v359; // x0
  UnityEngine_Transform_o *v360; // x0
  Il2CppObject *v361; // x25
  System_Collections_Generic_List_object__o *v362; // x0
  _BOOL8 v363; // x0
  __int64 v364; // x1
  System_String_o *v365; // x0
  __int64 v366; // x1
  System_String_o *v367; // x1
  _BOOL8 v368; // x0
  __int64 v369; // x1
  BattleBuffData_o *v370; // x3
  const MethodInfo *v371; // x5
  UnityEngine_Object_c *v372; // x8
  int32_t v373; // w4
  __int64 v374; // x1
  int32_t v375; // w2
  int32_t v376; // w3
  System_Collections_Generic_List_object__o *v377; // x0
  struct System_Object_array *v378; // x8
  _QWORD *v379; // x9
  __int64 v380; // x10
  Il2CppClass **v381; // x8
  __int64 v382; // x0
  __int64 v383; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v385; // x1
  UnityEngine_Transform_o *v386; // x0
  UnityEngine_Transform_o *v387; // x0
  __int64 v388; // x1
  float v389; // s8
  float v390; // s9
  float v391; // s10
  __int64 v392; // x1
  UnityEngine_Transform_o *v393; // x26
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v395; // x0
  UnityEngine_Transform_o *v396; // x0
  __int64 v397; // x1
  BattleSequenceManager_o *v398; // x0
  const MethodInfo *v399; // x4
  int32_t v400; // w26
  UnityEngine_Transform_o *v401; // x0
  __int64 v402; // x1
  UnityEngine_Transform_o *v403; // x0
  System_String_o *v404; // x0
  __int64 v405; // x1
  System_String_o *v406; // x0
  System_String_o *v407; // x0
  const MethodInfo *v408; // x3
  int32_t v409; // w2
  const MethodInfo *v410; // x3
  System_Object_array *EventCount; // x0
  __int64 v412; // x1
  System_Object_array *v413; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v416; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v418; // x0
  __int64 v419; // x1
  Il2CppObject *v420; // x27
  System_String_o *v421; // x0
  __int64 v422; // x9
  _BOOL8 v423; // x0
  __int64 v424; // x1
  int32_t v425; // w2
  int32_t v426; // w3
  UnityEngine_Component_o *v427; // x0
  UnityEngine_Transform_o *v428; // x0
  int32_t v429; // w2
  int32_t v430; // w3
  struct System_Object_array *v431; // x8
  _QWORD *v432; // x9
  __int64 v433; // x10
  Il2CppClass **v434; // x0
  int32_t layer; // w26
  __int64 v436; // x22
  __int64 v437; // x8
  __int64 v438; // x23
  __int64 v439; // x9
  int *v440; // x10
  __int64 v441; // x0
  __int64 v442; // x1
  UnityEngine_Object_c *v443; // x8
  UnityEngine_Object_o *v444; // x21
  struct BattlePerformance_o *v445; // x8
  UnityEngine_Object_o *data; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v450; // x4
  int32_t v451; // w22
  System_String_o *v452; // x0
  const MethodInfo *v453; // x4
  UnityEngine_Object_c *v454; // x8
  int v455; // w20
  BalanceConfig_c *v456; // x0
  int32_t v457; // w20
  System_String_o *v458; // x0
  const MethodInfo *v459; // x4
  __int64 v460; // x0
  __int64 v461; // x22
  __int64 v462; // x8
  __int64 v463; // x9
  int *v464; // x10
  __int64 v465; // x0
  int v466; // w1
  int v467; // w19
  void *v468; // x0
  void *v469; // x25
  __int64 v470; // x0
  __int64 v471; // x19
  __int64 v472; // x8
  __int64 v473; // x9
  int *v474; // x10
  __int64 v475; // x0
  System_String_o *v476; // [xsp+8h] [xbp-138h]
  System_String_o *v477; // [xsp+10h] [xbp-130h]
  System_Action_o *v478; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v479; // [xsp+20h] [xbp-120h]
  char v480; // [xsp+20h] [xbp-120h]
  UnityEngine_Object_o *v481; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  __int64 v483; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v484; // [xsp+38h] [xbp-108h]
  BattleSequenceManager_o *v485; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v486; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v489; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v490; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v492; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v494; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01272 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, callback);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v7);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v8);
    sub_1B64A00(&Method_DataManager_GetMasterData_VoiceMaster___, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v18);
    sub_1B64A00(&System_GC_TypeInfo, v19);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v20);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v21);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v22);
    sub_1B64A00(&System_IDisposable_TypeInfo, v23);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v32);
    sub_1B64A00(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v33);
    sub_1B64A00(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v34);
    sub_1B64A00(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v35);
    sub_1B64A00(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v36);
    sub_1B64A00(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v37);
    sub_1B64A00(&NGUITools_TypeInfo, v38);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v39);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801936, v40);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v41);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v42);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B64A00(&UnityEngine_Transform_TypeInfo, v44);
    sub_1B64A00(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v45);
    sub_1B64A00(&WellFired_USFGOAttachToParentEvent_TypeInfo, v46);
    sub_1B64A00(&WellFired_USFGOChangeBgEvent_TypeInfo, v47);
    sub_1B64A00(&WellFired_USFGOPlayCutInEvent_TypeInfo, v48);
    sub_1B64A00(&WellFired_USFGOSetCameraEvent_TypeInfo, v49);
    sub_1B64A00(&Voice_TypeInfo, v50);
    sub_1B64A00(&StringLiteral_1132/*"/Actor/chr/"*/, v51);
    sub_1B64A00(&StringLiteral_3208/*"BattleBG"*/, v52);
    sub_1B64A00(&StringLiteral_1142/*"/BattleActors/"*/, v53);
    sub_1B64A00(&StringLiteral_3210/*"BattleCamera"*/, v54);
    sub_1B64A00(&StringLiteral_3212/*"BattleCutIn"*/, v55);
    sub_1B64A00(&StringLiteral_14791/*"USFGOSetCameraEvent"*/, v56);
    sub_1B64A00(&StringLiteral_2231/*"Actor"*/, v57);
    sub_1B64A00(&StringLiteral_17292/*"body_level_"*/, v58);
    sub_1B64A00(&StringLiteral_1134/*"/Actor/chr/weapon_level_"*/, v59);
    sub_1B64A00(&StringLiteral_1133/*"/Actor/chr/body_level_"*/, v60);
    sub_1B64A00(&StringLiteral_6342/*"FGOSequenceManager"*/, v61);
    sub_1B64A00(&StringLiteral_1136/*"/AllEffects/"*/, v62);
    sub_1B64A00(&StringLiteral_17898/*"chr(Clone)"*/, v63);
    sub_1B64A00(&StringLiteral_3966/*"Cameras/BattleCamera"*/, v64);
    sub_1B64A00(&StringLiteral_14789/*"USFGOChangeBgEvent"*/, v65);
    sub_1B64A00(&StringLiteral_1154/*"/BattleCamera"*/, v66);
    sub_1B64A00(&StringLiteral_1157/*"/CutIns/"*/, v67);
    sub_1B64A00(&StringLiteral_3206/*"Battle2D"*/, v68);
    sub_1B64A00(&StringLiteral_1156/*"/Cameras/BattleCamera"*/, v69);
    sub_1B64A00(&StringLiteral_16708/*"animCamLoc"*/, v70);
    sub_1B64A00(&StringLiteral_24578/*"weapon_level_"*/, v71);
    sub_1B64A00(&StringLiteral_732/*"(Clone)"*/, v72);
    sub_1B64A00(&StringLiteral_14788/*"USFGOAttachToParentEvent"*/, v73);
    sub_1B64A00(&StringLiteral_1/*""*/, v74);
    sub_1B64A00(&StringLiteral_1131/*"/Actor/chr"*/, v75);
    sub_1B64A00(&StringLiteral_14787/*"USFGOAnimationCameraEvent"*/, v76);
    sub_1B64A00(&StringLiteral_1213/*"0"*/, v77);
    sub_1B64A00(&StringLiteral_14790/*"USFGOPlayCutInEvent"*/, v78);
    byte_4A01272 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v490, 0, sizeof(v490));
  memset(&v489, 0, sizeof(v489));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  v485 = this;
  if ( !seqObject )
    goto LABEL_426;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v82 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2231/*"Actor"*/,
                                  v81);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v83 = UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
  if ( v83 )
  {
    seqObject = (__int64)this->fields.actor;
    if ( !seqObject )
      goto LABEL_426;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v82 )
      goto LABEL_426;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v82,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  v85 = BattleSequenceManager__searchTimeline(
          (BattleSequenceManager_o *)v83,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6342/*"FGOSequenceManager"*/,
          v84);
  v86 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v86,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v87 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v87,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_426;
  v478 = (System_Action_o *)v82;
  v479 = (UnityEngine_Component_o *)Component_object;
  v88 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)seqObject,
          (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v481 = (UnityEngine_Object_o *)v88;
  evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v87;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v85, 0LL, 0LL) )
  {
    sequenceManager = (Il2CppObject *)this->fields.sequenceManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           sequenceManager,
                           (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_426;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    v90 = (UnityEngine_Object_o *)v88;
    if ( !v85 )
      goto LABEL_426;
    WellFired_USTimelineContainer__set_AffectedObject(v85, (UnityEngine_Transform_o *)seqObject, 0LL);
    createdObjects = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v85, 0LL);
    if ( !seqObject )
      goto LABEL_426;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !createdObjects )
      goto LABEL_426;
    items = createdObjects->fields._items;
    v95 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++createdObjects->fields._version;
    if ( !items )
      goto LABEL_426;
    size = createdObjects->fields._size;
    v97 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        createdObjects,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &items->obj.klass + size;
      createdObjects->fields._size = size + 1;
      v98[4] = (Il2CppClass *)v97;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v98 + 4), v97, v92, v93);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v85, 0LL);
    if ( !seqObject )
      goto LABEL_426;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_426;
    actorCamera = this->fields.actorCamera;
    v102 = seqObject;
    *(_QWORD *)(seqObject + 32) = actorCamera;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(seqObject + 32), (int32_t)actorCamera, v99, v100);
    effectCamera = this->fields.effectCamera;
    *(_QWORD *)(v102 + 40) = effectCamera;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v102 + 40), (int32_t)effectCamera, v104, v105);
    cutInCamera = this->fields.cutInCamera;
    *(_QWORD *)(v102 + 48) = cutInCamera;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v102 + 48), (int32_t)cutInCamera, v107, v108);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_426;
    fadeObject = performance->fields.fadeObject;
    *(_QWORD *)(v102 + 96) = fadeObject;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v102 + 96), (int32_t)fadeObject, v109, v110);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    if ( !byte_49F9821 )
    {
      sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v113);
      byte_49F9821 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_49F9827 )
    {
      sub_1B64A00(&UnityEngine_Quaternion_TypeInfo, v113);
      byte_49F9827 = 1;
    }
    v492.fields.x = x;
    v492.fields.y = y;
    v492.fields.z = z;
    v119 = UnityEngine_Object__Instantiate_object__49014768(
             CutInPrefab,
             v492,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_2EBE7F0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801936);
    *(_QWORD *)(v102 + 72) = v119;
    v120 = (ServantStatusBattleListViewItem_o *)(v102 + 72);
    sub_1B649A4(v120, (int32_t)v119, v121, v122);
    seqObject = (__int64)v120->klass;
    if ( !v120->klass )
      goto LABEL_426;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v123);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v124);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v85,
                           1,
                           (const MethodInfo_2E33270 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_426;
    v125 = *(_DWORD *)(seqObject + 24);
    v126 = seqObject;
    if ( v125 >= 1 )
    {
      v127 = 0;
      v128 = 0LL;
      v483 = seqObject;
      while ( 1 )
      {
        if ( v127 >= (unsigned int)v125 )
LABEL_430:
          sub_1B64C64(seqObject, callback);
        seqObject = *(_QWORD *)(v126 + 8LL * v127 + 32);
        if ( !seqObject )
          goto LABEL_426;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_426;
        v129 = *(_QWORD *)(seqObject + 24);
        v130 = seqObject;
        if ( (int)v129 >= 1 )
          break;
LABEL_102:
        v126 = v483;
        ++v127;
        v125 = *(_DWORD *)(v483 + 24);
        if ( v127 >= v125 )
          goto LABEL_103;
      }
      v131 = 0LL;
      while ( 1 )
      {
        if ( v131 >= (unsigned int)v129 )
          goto LABEL_430;
        v132 = *(_QWORD *)(v130 + 32 + 8 * v131);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v132, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v132 )
            goto LABEL_426;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v132, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14787/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v128, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = UnityEngine_Object__op_Inequality(v90, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !v90 )
                  goto LABEL_426;
                klass = v90[19].klass;
                if ( !klass )
                  goto LABEL_426;
                gc_desc = (int32_t)klass[2]._1.gc_desc;
              }
              else
              {
                gc_desc = 0;
              }
              treasureDeviceId = this->fields.treasureDeviceId;
              limitCount = this->fields.limitCount;
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                   treasureDeviceId,
                                                                   limitCount,
                                                                   (System_String_o *)StringLiteral_16708/*"animCamLoc"*/,
                                                                   gc_desc,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v154 = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
              v87 = (System_Collections_Generic_List_object__o *)evs;
              if ( !v154
                || (v155 = v154->fields._items,
                    v90 = v481,
                    v156 = Method_System_Collections_Generic_List_GameObject__Add__,
                    ++v154->fields._version,
                    !v155) )
              {
LABEL_426:
                sub_1B64C5C(seqObject, callback);
              }
              v157 = v154->fields._size;
              v128 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v157 >= v155->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v154,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
              }
              else
              {
                v158 = &v155->obj.klass + v157;
                v154->fields._size = v157 + 1;
                v158[4] = (Il2CppClass *)v128;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v158 + 4), (int32_t)v128, v152, v153);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v132 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v132 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_431:
              sub_1B64F1C(v132);
LABEL_432:
              sub_1B64F1C(v238);
LABEL_433:
              sub_1B64C5C(v418, v419);
            }
            *(_QWORD *)(v132 + 56) = v128;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v132 + 56), (int32_t)v128, v134, v135);
            v176 = this->fields.actorCamera;
            *(_QWORD *)(v132 + 64) = v176;
            v177 = v132 + 64;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)v177, (int32_t)v176, v178, v179);
            *(_BYTE *)(v177 + 28) = 0;
            if ( !v128 )
              goto LABEL_426;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v128, 0LL);
            if ( !this->fields.actor )
              goto LABEL_426;
            v180 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_426;
            *(UnityEngine_Vector3_o *)&v181 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v180 )
              goto LABEL_426;
            UnityEngine_Transform__set_position(v180, *(UnityEngine_Vector3_o *)&v181, 0LL);
          }
          else
          {
            v138 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v132, 0LL);
            seqObject = System_String__op_Equality(v138, (System_String_o *)StringLiteral_14790/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v87 )
                goto LABEL_426;
              v141 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v132 + 304LL) >= (unsigned int)v141 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v132 + 200LL) + 8 * v141 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v132
                         : 0LL;
              else
                callback = 0LL;
              v171 = v87->fields._items;
              v172 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v87->fields._version;
              if ( !v171 )
                goto LABEL_426;
              v173 = v87->fields._size;
              if ( (unsigned int)v173 >= v171->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v87,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v174 = &v171->obj.klass + v173;
              v87->fields._size = v173 + 1;
              v174[4] = (Il2CppClass *)callback;
              v148 = (ServantStatusBattleListViewItem_o *)(v174 + 4);
              goto LABEL_91;
            }
            v142 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v132, 0LL);
            if ( System_String__op_Equality(v142, (System_String_o *)StringLiteral_14791/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v145 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v132 + 304LL) < (unsigned int)v145
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v132 + 200LL) + 8 * v145 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_431;
              }
              v146 = this->fields.actorCamera;
              *(_QWORD *)(v132 + 56) = v146;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v132 + 56), (int32_t)v146, v143, v144);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_426;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_426;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v132 + 64) = parent;
              LODWORD(callback) = (_DWORD)parent;
              v148 = (ServantStatusBattleListViewItem_o *)(v132 + 64);
LABEL_91:
              sub_1B649A4(v148, (int32_t)callback, v139, v140);
              goto LABEL_101;
            }
            v159 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v132, 0LL);
            seqObject = System_String__op_Equality(v159, (System_String_o *)StringLiteral_14789/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v160 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v132 + 304LL) < (unsigned int)v160
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v132 + 200LL) + 8 * v160 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_431;
              }
              v161 = (System_String_o **)(v132 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v132 + 64),
                     (System_String_o *)StringLiteral_1213/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v161, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_426;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v162 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v161 = v162;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v132 + 64), (int32_t)v162, v163, v164);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_426;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v165 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v132 + 72) = v165;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v132 + 72), (int32_t)v165, v166, v167);
                changeFieldAfter = this->fields.changeFieldAfter;
                *(_QWORD *)(v132 + 136) = changeFieldAfter;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v132 + 136), (int32_t)changeFieldAfter, v169, v170);
              }
              v87 = (System_Collections_Generic_List_object__o *)evs;
            }
          }
        }
LABEL_101:
        LODWORD(v129) = *(_DWORD *)(v130 + 24);
        if ( (__int64)++v131 >= (int)v129 )
          goto LABEL_102;
      }
    }
  }
LABEL_103:
  v184 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v184,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v184 )
    goto LABEL_426;
  v187 = v184->fields._items;
  callback = v478;
  v188 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v184->fields._version;
  if ( !v187 )
    goto LABEL_426;
  v189 = v184->fields._size;
  if ( (unsigned int)v189 >= v187->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v184,
      (Il2CppObject *)v478,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
  }
  else
  {
    v190 = &v187->obj.klass + v189;
    v184->fields._size = v189 + 1;
    v190[4] = (Il2CppClass *)v478;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v190 + 4), (int32_t)v478, v185, v186);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v191,
                         (WellFired_USSequencer_o *)v479,
                         (System_String_o *)StringLiteral_3966/*"Cameras/BattleCamera"*/,
                         v192);
  v195 = v184->fields._items;
  v196 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v184->fields._version;
  if ( !v195 )
    goto LABEL_426;
  v197 = v184->fields._size;
  v198 = seqObject;
  if ( (unsigned int)v197 >= v195->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v184,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
  }
  else
  {
    v199 = &v195->obj.klass + v197;
    v184->fields._size = v197 + 1;
    v199[4] = (Il2CppClass *)v198;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v199 + 4), v198, v193, v194);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v486,
    v184,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v490 = v486;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v490,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v490.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v201 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v201 )
    {
      if ( !current )
        sub_1B64C5C(v201, v202);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2E33270 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v205 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1B64C5C(0LL, v204);
      v206 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v206 >= 1 )
      {
        for ( i = 0; i < v206; ++i )
        {
          if ( i >= (unsigned int)v206 )
            sub_1B64C64(ComponentsInChildren_object, v204);
          v208 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v205 + i + 4);
          if ( !v208 )
            sub_1B64C5C(0LL, v204);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v208, 0LL);
          v209 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1B64C5C(0LL, v204);
          v210 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v210 >= 1 )
          {
            v211 = 0LL;
            do
            {
              if ( v211 >= (unsigned int)v210 )
                sub_1B64C64(ComponentsInChildren_object, v204);
              v212 = v209[v211 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v212,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v212 )
                  sub_1B64C5C(ComponentsInChildren_object, v204);
                v213 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v212, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v213,
                                                        (System_String_o *)StringLiteral_14788/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v214 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v212 + 304LL) < (unsigned int)v214
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v212 + 200LL) + 8 * v214 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B64F1C(v212);
LABEL_423:
                    sub_1B64C5C(v215, v216);
                  }
                  v215 = System_String__op_Equality(
                           *(System_String_o **)(v212 + 80),
                           (System_String_o *)StringLiteral_3210/*"BattleCamera"*/,
                           0LL);
                  if ( v215 )
                  {
                    v219 = (UnityEngine_Component_o *)this->fields.actorCamera;
                    if ( !v219 )
                      sub_1B64C5C(0LL, v216);
                    transform = UnityEngine_Component__get_transform(v219, 0LL);
                    *(_QWORD *)(v212 + 64) = transform;
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v212 + 64), (int32_t)transform, v221, v222);
                  }
                  else
                  {
                    if ( !v86 )
                      goto LABEL_423;
                    v223 = v86->fields._items;
                    v224 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v86->fields._version;
                    if ( !v223 )
                      sub_1B64C5C(v215, v216);
                    v225 = v86->fields._size;
                    if ( (unsigned int)v225 >= v223->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v86,
                        (Il2CppObject *)v212,
                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v224[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v226 = &v223->obj.klass + v225;
                      v86->fields._size = v225 + 1;
                      v226[4] = (Il2CppClass *)v212;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v226 + 4), v212, v217, v218);
                    }
                  }
                }
              }
              LODWORD(v210) = *((_DWORD *)v209 + 6);
              ++v211;
            }
            while ( (__int64)v211 < (int)v210 );
          }
          v206 = *((_DWORD *)v205 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v490,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)v479;
  if ( !v479 )
    goto LABEL_426;
  seqObject = (__int64)UnityEngine_Component__get_transform(v479, 0LL);
  if ( !seqObject )
    goto LABEL_426;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1B64C5C(0LL, v227);
  v229 = 0;
  while ( 1 )
  {
    v230 = Enumerator->klass;
    v231 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v230->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v231;
        p_offset += 4;
        if ( !v231 )
          goto LABEL_153;
      }
      p_method = (__int64)&v230->vtable[*p_offset].method;
    }
    else
    {
LABEL_153:
      p_method = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v234 = Enumerator->klass;
    v235 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v236 = (System_Collections_IEnumerator_c **)&v234->_1.interfaceOffsets->offset;
      while ( *(v236 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v235;
        v236 += 2;
        if ( !v235 )
          goto LABEL_160;
      }
      v237 = (__int64)&v234->vtable[*(_DWORD *)v236 + 1].method;
    }
    else
    {
LABEL_160:
      v237 = sub_1BB69E0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v238 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v237)(
                                        Enumerator,
                                        *(_QWORD *)(v237 + 8));
    if ( !v238 )
      sub_1B64C5C(0LL, v239);
    v240 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v238->klass->vtable._0_Equals.methodPtr) < (unsigned int)v240
      || (UnityEngine_Transform_c *)v238->klass->_2.typeHierarchy[v240 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_432;
    }
    gameObject = UnityEngine_Component__get_gameObject(v238, 0LL);
    if ( !gameObject )
      sub_1B64C5C(0LL, v242);
    v243 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v245 = v243;
    if ( !v243 )
      goto LABEL_436;
    monitor = (System_String_o *)v243[2].monitor;
    if ( !monitor )
      sub_1B64C5C(0LL, v244);
    if ( System_String__StartsWith(monitor, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL) && v245[2].monitor )
    {
      v248 = (System_String_o *)v245[2].monitor;
      if ( !v248 )
        sub_1B64C5C(0LL, v247);
      if ( System_String__StartsWith(v248, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL) )
      {
        v250 = (System_String_o *)v245[2].monitor;
        if ( !v250 )
          sub_1B64C5C(0LL, v249);
        v251 = System_String__Substring_61404132(v250, v250->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v229 += System_Int32__TryParse(v251, result, 0LL);
      }
    }
  }
  v252 = sub_1B64B3C(Enumerator, System_IDisposable_TypeInfo);
  if ( v252 )
  {
    v253 = *(_QWORD *)v252;
    v254 = v252;
    v255 = *(unsigned __int16 *)(*(_QWORD *)v252 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v252 + 302LL) )
    {
      v256 = (int *)(*(_QWORD *)(v253 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v256 - 1) != System_IDisposable_TypeInfo )
      {
        --v255;
        v256 += 4;
        if ( !v255 )
          goto LABEL_179;
      }
      v257 = v253 + 16LL * *v256 + 312;
    }
    else
    {
LABEL_179:
      v257 = sub_1BB69E0(v252, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v257)(v254, *(_QWORD *)(v257 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v479, 0LL);
  if ( !seqObject )
    goto LABEL_426;
  v484 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v484 )
    sub_1B64C5C(0LL, v258);
  v480 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v259 = v484->klass;
          v260 = *(unsigned __int16 *)(&v484->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v484->klass->_2.bitflags2 + 3) )
          {
            v261 = &v259->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v261 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v260;
              v261 += 4;
              if ( !v260 )
                goto LABEL_189;
            }
            v262 = (__int64)&v259->vtable[*v261].method;
          }
          else
          {
LABEL_189:
            v262 = sub_1BB69E0(v484, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v262)(
                  v484,
                  *(_QWORD *)(v262 + 8)) & 1) == 0 )
          {
            v436 = 0LL;
            goto LABEL_374;
          }
          v263 = v484->klass;
          v264 = *(unsigned __int16 *)(&v484->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v484->klass->_2.bitflags2 + 3) )
          {
            v265 = (System_Collections_IEnumerator_c **)&v263->_1.interfaceOffsets->offset;
            while ( *(v265 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v264;
              v265 += 2;
              if ( !v264 )
                goto LABEL_196;
            }
            v266 = (__int64)&v263->vtable[*(_DWORD *)v265 + 1].method;
          }
          else
          {
LABEL_196:
            v266 = sub_1BB69E0(v484, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v267 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v266)(
                                              v484,
                                              *(_QWORD *)(v266 + 8));
          if ( !v267 )
            sub_1B64C5C(0LL, v268);
          v269 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v267->klass->vtable._0_Equals.methodPtr) < (unsigned int)v269
            || (UnityEngine_Transform_c *)v267->klass->_2.typeHierarchy[v269 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_435:
            sub_1B64F1C(v267);
LABEL_436:
            sub_1B64C5C(v243, v244);
          }
          v270 = UnityEngine_Component__get_gameObject(v267, 0LL);
          if ( !v270 )
            sub_1B64C5C(0LL, v271);
          v272 = UnityEngine_GameObject__GetComponent_object_(
                   v270,
                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v274 = (WellFired_USTimelineContainer_o *)v272;
          if ( !v272 )
            sub_1B64C5C(0LL, v273);
          v275 = (System_String_o *)v272[2].monitor;
          if ( !v275 )
            sub_1B64C5C(0LL, v273);
          v277 = System_String__StartsWith(v275, (System_String_o *)StringLiteral_1136/*"/AllEffects/"*/, 0LL);
          if ( v277 )
          {
            affectedObjectPath = v274->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1B64C5C(0LL, v276);
            v279 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v279 = 0LL;
          }
          v280 = v274->fields.affectedObjectPath;
          if ( !v280 )
            sub_1B64C5C(0LL, v276);
          v282 = System_String__StartsWith(v280, (System_String_o *)StringLiteral_1157/*"/CutIns/"*/, 0LL);
          if ( v282 )
          {
            v283 = v274->fields.affectedObjectPath;
            if ( !v283 )
              sub_1B64C5C(0LL, v281);
            v279 = System_String__Substring(v283, 8, 0LL);
          }
          v284 = v274->fields.affectedObjectPath;
          if ( !v284 )
            sub_1B64C5C(0LL, v281);
          if ( !System_String__StartsWith(v284, (System_String_o *)StringLiteral_1154/*"/BattleCamera"*/, 0LL) )
          {
            v286 = v274->fields.affectedObjectPath;
            if ( !v286 )
              sub_1B64C5C(0LL, v285);
            if ( !System_String__StartsWith(v286, (System_String_o *)StringLiteral_1156/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v287 = (UnityEngine_Component_o *)v485->fields.actorCamera;
          if ( !v287 )
            sub_1B64C5C(0LL, v285);
          v288 = UnityEngine_Component__get_transform(v287, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v274, v288, 0LL);
        }
        v289 = v274->fields.affectedObjectPath;
        if ( !v289 )
          sub_1B64C5C(0LL, v285);
        if ( System_String__StartsWith(v289, (System_String_o *)StringLiteral_1131/*"/Actor/chr"*/, 0LL) )
          break;
        v331 = v274->fields.affectedObjectPath;
        if ( !v331 )
          sub_1B64C5C(0LL, v290);
        v332 = System_String__StartsWith(v331, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL);
        if ( v332 )
          v279 = v274->fields.affectedObjectPath;
        if ( v279 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v332, v279, v333) )
            goto LABEL_334;
          if ( v277 )
          {
            v336 = System_String__IndexOf(v279, 0x2Fu, 0LL);
            if ( (v336 & 0x80000000) == 0 )
            {
              v337 = System_String__Substring(v279, v336 + 1, 0LL);
              v279 = System_String__Substring_61404132(v279, 0, v336, 0LL);
              goto LABEL_288;
            }
            if ( (v480 & 1) != 0 )
            {
              v337 = 0LL;
LABEL_288:
              v362 = (System_Collections_Generic_List_object__o *)v485->fields.createdObjects;
              if ( !v362 )
                sub_1B64C5C(0LL, v335);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v486,
                v362,
                (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v477 = v337;
              v489 = v486;
              while ( 1 )
              {
                v363 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v489,
                         (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v363 )
                  break;
                v361 = v489.fields._current;
                if ( !v489.fields._current )
                  sub_1B64C5C(v363, v364);
                v365 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v489.fields._current, 0LL);
                if ( !v365 )
                  sub_1B64C5C(0LL, v366);
                v367 = System_String__Replace_61404756(
                         v365,
                         (System_String_o *)StringLiteral_732/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v279, v367, 0LL) )
                  goto LABEL_296;
              }
              v361 = 0LL;
LABEL_296:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v489,
                (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v480 = 1;
              goto LABEL_298;
            }
            v337 = 0LL;
            v361 = 0LL;
            v480 = 0;
          }
          else
          {
            v337 = 0LL;
            v361 = 0LL;
          }
LABEL_298:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v361, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v368 = UnityEngine_Object__op_Inequality(v481, 0LL, 0LL);
            if ( v368 )
            {
              if ( !v481 )
                sub_1B64C5C(v368, v369);
              v372 = v481[19].klass;
              if ( !v372 )
                sub_1B64C5C(v368, v369);
              v373 = (int32_t)v372[2]._1.gc_desc;
            }
            else
            {
              v373 = 0;
            }
            v361 = (Il2CppObject *)BattleSequenceManager__searchPrefab(
                                     v485,
                                     v485->fields.treasureDeviceId,
                                     v279,
                                     v370,
                                     v373,
                                     v371);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v361, 0LL, 0LL) )
            {
              v377 = (System_Collections_Generic_List_object__o *)v485->fields.createdObjects;
              if ( !v377 )
                sub_1B64C5C(0LL, v374);
              v378 = v377->fields._items;
              v379 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v377->fields._version;
              if ( !v378 )
                sub_1B64C5C(v377, v374);
              v380 = v377->fields._size;
              if ( (unsigned int)v380 >= v378->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v377,
                  v361,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v379[4] + 192LL) + 112LL));
              }
              else
              {
                v381 = &v378->obj.klass + v380;
                v377->fields._size = v380 + 1;
                v381[4] = (Il2CppClass *)v361;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v381 + 4), (int32_t)v361, v375, v376);
              }
              if ( !v361 )
                sub_1B64C5C(v382, v383);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v361, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v361, 0LL, 0LL) )
            goto LABEL_334;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v337, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v361 )
              sub_1B64C5C(IsNullOrEmpty, v385);
            v401 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v361, 0LL);
            if ( !v401 )
              sub_1B64C5C(0LL, v402);
            v403 = UnityEngine_Transform__Find(v401, v337, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v274, v403, 0LL);
            goto LABEL_334;
          }
          if ( !v361 )
            sub_1B64C5C(IsNullOrEmpty, v385);
          v386 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v361, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v274, v386, 0LL);
          if ( v282 )
          {
            v387 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v361, 0LL);
            if ( !v387 )
              sub_1B64C5C(0LL, v388);
            localPosition = UnityEngine_Transform__get_localPosition(v387, 0LL);
            v389 = localPosition.fields.x;
            v390 = localPosition.fields.y;
            v391 = localPosition.fields.z;
            v393 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v361, 0LL);
            CutInRoot = v485->fields.CutInRoot;
            if ( !CutInRoot )
              sub_1B64C5C(0LL, v392);
            v395 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v393 )
              sub_1B64C5C(v395, v395);
            UnityEngine_Transform__set_parent(v393, v395, 0LL);
            v396 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v361, 0LL);
            if ( !v396 )
              sub_1B64C5C(0LL, v397);
            v494.fields.x = v389;
            v494.fields.y = v390;
            v494.fields.z = v391;
            UnityEngine_Transform__set_localPosition(v396, v494, 0LL);
            BattleSequenceManager__updateCutInEvents(v398, evs, v279, (UnityEngine_GameObject_o *)v361, v399);
            v400 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3212/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v361, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3208/*"BattleBG"*/, 0LL) )
              goto LABEL_334;
            v400 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v361, v400, 0LL);
LABEL_334:
          v404 = v274->fields.affectedObjectPath;
          if ( !v404 )
            sub_1B64C5C(0LL, v334);
          if ( System_String__StartsWith(v404, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL) )
          {
            v406 = v274->fields.affectedObjectPath;
            if ( !v406 )
              sub_1B64C5C(0LL, v405);
            v407 = System_String__Substring_61404132(v406, v406->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v407, &targetPosIndex, 0LL);
            v409 = --targetPosIndex;
            if ( v229 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v485, v274, v409, v408);
              BattleSequenceManager__SyncAttachedTargetPair(v485, v274, targetPosIndex, v410);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v485, v274, v409, v408);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v274,
                         1,
                         (const MethodInfo_2E33270 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v413 = EventCount;
          if ( !EventCount )
            sub_1B64C5C(0LL, v412);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1B64C64(EventCount, v412);
              v416 = (WellFired_USTimelineEvent_o *)v413->m_Items[j];
              if ( !v416 )
                sub_1B64C5C(EventCount, v412);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v416, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v418 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v416, k, 0LL);
                v420 = (Il2CppObject *)v418;
                if ( !v418 )
                  goto LABEL_433;
                v421 = UnityEngine_Object__get_name(v418, 0LL);
                if ( System_String__op_Equality(v421, (System_String_o *)StringLiteral_14788/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v422 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v420->klass->vtable[0].methodPtr) < (unsigned int)v422
                    || (WellFired_USFGOAttachToParentEvent_c *)v420->klass->_2.typeHierarchy[v422 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B64F1C(v420);
                    goto LABEL_435;
                  }
                  v423 = System_String__op_Equality(
                           (System_String_o *)v420[5].klass,
                           (System_String_o *)StringLiteral_3210/*"BattleCamera"*/,
                           0LL);
                  if ( v423 )
                  {
                    v427 = (UnityEngine_Component_o *)v485->fields.actorCamera;
                    if ( !v427 )
                      sub_1B64C5C(0LL, v424);
                    v428 = UnityEngine_Component__get_transform(v427, 0LL);
                    v420[4].klass = (Il2CppClass *)v428;
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v420[4], (int32_t)v428, v429, v430);
                  }
                  else
                  {
                    if ( !v86 )
                      sub_1B64C5C(v423, v424);
                    v431 = v86->fields._items;
                    v432 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v86->fields._version;
                    if ( !v431 )
                      sub_1B64C5C(v423, v424);
                    v433 = v86->fields._size;
                    if ( (unsigned int)v433 >= v431->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v86,
                        v420,
                        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v432[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v434 = &v431->obj.klass + v433;
                      v86->fields._size = v433 + 1;
                      v434[4] = (Il2CppClass *)v420;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v434 + 4), (int32_t)v420, v425, v426);
                    }
                  }
                }
              }
              max_length = v413->max_length;
            }
          }
        }
      }
      actor = v485->fields.actor;
      if ( !actor )
        sub_1B64C5C(0LL, v290);
      v293 = UnityEngine_GameObject__get_transform(actor, 0LL);
      v294 = v274->fields.affectedObjectPath;
      if ( !v294 )
        sub_1B64C5C(0LL, v292);
      v295 = System_String__Replace_61404756(
               v294,
               (System_String_o *)StringLiteral_1131/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17898/*"chr(Clone)"*/,
               0LL);
      if ( !v293 )
        sub_1B64C5C(v295, v295);
      v296 = UnityEngine_Transform__Find(v293, v295, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v274, v296, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v274, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v299 = v274->fields.affectedObjectPath;
        if ( !v299 )
          sub_1B64C5C(0LL, v298);
        v300 = System_String__StartsWith(v299, (System_String_o *)StringLiteral_1133/*"/Actor/chr/body_level_"*/, 0LL);
        v302 = &StringLiteral_17292/*"body_level_"*/;
        if ( v300 )
          goto LABEL_230;
        v303 = v274->fields.affectedObjectPath;
        if ( !v303 )
          sub_1B64C5C(0LL, v301);
        v304 = System_String__StartsWith(v303, (System_String_o *)StringLiteral_1134/*"/Actor/chr/weapon_level_"*/, 0LL);
        v302 = &StringLiteral_24578/*"weapon_level_"*/;
        if ( v304 )
        {
LABEL_230:
          v305 = (System_String_o *)*v302;
          if ( *v302 )
            break;
        }
      }
    }
    v306 = v485->fields.actor;
    if ( !v306 )
      sub_1B64C5C(0LL, v301);
    v307 = (System_String_o *)StringLiteral_1/*""*/;
    v308 = UnityEngine_GameObject__get_transform(v306, 0LL);
    if ( !v308 )
      sub_1B64C5C(0LL, v309);
    v310 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v308, (System_String_o *)StringLiteral_17898/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v311 = UnityEngine_Object__op_Inequality(v310, 0LL, 0LL);
    if ( v311 )
      break;
LABEL_275:
    v344 = v274->fields.affectedObjectPath;
    v345 = System_String__Concat_61385136((System_String_o *)StringLiteral_1132/*"/Actor/chr/"*/, v305, 0LL);
    if ( !v345 )
      sub_1B64C5C(0LL, v346);
    if ( !v344 )
      sub_1B64C5C(v345, v346);
    v347 = System_String__Substring(v344, v345->fields._stringLength, 0LL);
    if ( !v347 )
      sub_1B64C5C(0LL, v348);
    v349 = System_String__Split(v347, 0x2Fu, 0, 0LL);
    if ( !v349 )
      sub_1B64C5C(0LL, v350);
    if ( !v349->max_length )
      sub_1B64C64(v349, v350);
    v352 = System_String__Concat_61385136(v305, v349->m_Items[0], 0LL);
    v353 = v485->fields.actor;
    if ( !v353 )
      sub_1B64C5C(0LL, v351);
    v355 = UnityEngine_GameObject__get_transform(v353, 0LL);
    v356 = v274->fields.affectedObjectPath;
    if ( !v356 )
      sub_1B64C5C(0LL, v354);
    v357 = System_String__Replace_61404756(
             v356,
             (System_String_o *)StringLiteral_1131/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17898/*"chr(Clone)"*/,
             0LL);
    if ( !v357 )
      sub_1B64C5C(0LL, v358);
    v359 = System_String__Replace_61404756(v357, v352, v307, 0LL);
    if ( !v355 )
      sub_1B64C5C(v359, v359);
    v360 = UnityEngine_Transform__Find(v355, v359, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v274, v360, 0LL);
  }
  if ( !v310 )
    sub_1B64C5C(v311, v312);
  v314 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v310, 0LL);
  if ( !v314 )
    sub_1B64C5C(0LL, v313);
  while ( 2 )
  {
    v315 = v314->klass;
    v316 = *(unsigned __int16 *)(&v314->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v314->klass->_2.bitflags2 + 3) )
    {
      v317 = &v315->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v317 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v316;
        v317 += 4;
        if ( !v316 )
          goto LABEL_242;
      }
      v318 = (__int64)&v315->vtable[*v317].method;
    }
    else
    {
LABEL_242:
      v318 = sub_1BB69E0(v314, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v318)(v314, *(_QWORD *)(v318 + 8)) & 1) == 0 )
    {
      v476 = v307;
      v477 = 0LL;
      goto LABEL_267;
    }
    v319 = v314->klass;
    v320 = *(unsigned __int16 *)(&v314->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v314->klass->_2.bitflags2 + 3) )
    {
      v321 = (System_Collections_IEnumerator_c **)&v319->_1.interfaceOffsets->offset;
      while ( *(v321 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v320;
        v321 += 2;
        if ( !v320 )
          goto LABEL_249;
      }
      v322 = (__int64)&v319->vtable[*(_DWORD *)v321 + 1].method;
    }
    else
    {
LABEL_249:
      v322 = sub_1BB69E0(v314, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v323 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v322)(
                                        v314,
                                        *(_QWORD *)(v322 + 8));
    v325 = (UnityEngine_Object_o *)v323;
    if ( !v323 )
      sub_1B64C5C(0LL, v324);
    v326 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v323->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v326
      && (UnityEngine_Transform_c *)v323->klass->_2.typeHierarchy[v326 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v327 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v323, 0LL);
      if ( !v327 )
        sub_1B64C5C(0LL, v328);
      v329 = UnityEngine_Object__get_name(v327, 0LL);
      if ( !v329 )
        sub_1B64C5C(0LL, v330);
      if ( !System_String__StartsWith(v329, v305, 0LL) )
        continue;
      v476 = UnityEngine_Object__get_name(v325, 0LL);
      v477 = 0LL;
LABEL_267:
      v338 = sub_1B64B3C(v314, System_IDisposable_TypeInfo);
      v307 = v476;
      v339 = v338;
      if ( v338 )
      {
        v340 = *(_QWORD *)v338;
        v341 = *(unsigned __int16 *)(*(_QWORD *)v338 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v338 + 302LL) )
        {
          v342 = (int *)(*(_QWORD *)(v340 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v342 - 1) != System_IDisposable_TypeInfo )
          {
            --v341;
            v342 += 4;
            if ( !v341 )
              goto LABEL_272;
          }
          v343 = v340 + 16LL * *v342 + 312;
        }
        else
        {
LABEL_272:
          v343 = sub_1BB69E0(v338, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v343)(v339, *(_QWORD *)(v343 + 8));
      }
      goto LABEL_275;
    }
    break;
  }
  sub_1B64F1C(v323);
  v467 = v466;
  v469 = v468;
  v460 = sub_1B64B3C(v314, System_IDisposable_TypeInfo);
  v461 = v460;
  if ( v460 )
  {
    v462 = *(_QWORD *)v460;
    v463 = *(unsigned __int16 *)(*(_QWORD *)v460 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v460 + 302LL) )
    {
      v464 = (int *)(*(_QWORD *)(v462 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v464 - 1) != System_IDisposable_TypeInfo )
      {
        --v463;
        v464 += 4;
        if ( !v463 )
          goto LABEL_467;
      }
      v465 = v462 + 16LL * *v464 + 312;
    }
    else
    {
LABEL_467:
      v465 = sub_1BB69E0(v460, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v465)(v461, *(_QWORD *)(v465 + 8));
  }
  if ( v477 )
    sub_1B64C54(v477);
  if ( v467 != 1 )
  {
    v470 = sub_1B64B3C(v484, System_IDisposable_TypeInfo);
    v471 = v470;
    if ( v470 )
    {
      v472 = *(_QWORD *)v470;
      v473 = *(unsigned __int16 *)(*(_QWORD *)v470 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v470 + 302LL) )
      {
        v474 = (int *)(*(_QWORD *)(v472 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v474 - 1) != System_IDisposable_TypeInfo )
        {
          --v473;
          v474 += 4;
          if ( !v473 )
            goto LABEL_516;
        }
        v475 = v472 + 16LL * *v474 + 312;
      }
      else
      {
LABEL_516:
        v475 = sub_1BB69E0(v470, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v475)(v471, *(_QWORD *)(v475 + 8));
    }
    sub_1C4F490();
  }
  v436 = *(_QWORD *)__cxa_begin_catch(v469);
  __cxa_end_catch();
LABEL_374:
  seqObject = sub_1B64B3C(v484, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v437 = *(_QWORD *)seqObject;
    v438 = seqObject;
    v439 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v440 = (int *)(*(_QWORD *)(v437 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v440 - 1) != System_IDisposable_TypeInfo )
      {
        --v439;
        v440 += 4;
        if ( !v439 )
          goto LABEL_379;
      }
      v441 = v437 + 16LL * *v440 + 312;
    }
    else
    {
LABEL_379:
      v441 = sub_1BB69E0(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v441)(v438, *(_QWORD *)(v441 + 8));
  }
  if ( v436 )
    sub_1B64C54(v436);
  if ( !v86 )
    goto LABEL_426;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v486,
    v86,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v486;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          v485->fields.performance,
          v485->fields.actor,
          v485->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1B64C5C(0LL, v442);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v481, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v481 )
      goto LABEL_426;
    if ( LOBYTE(v481[20].klass) )
      goto LABEL_417;
    v443 = v481[19].klass;
    if ( !v443 )
      goto LABEL_426;
    if ( !HIDWORD(v443->vtable._1_Finalize.methodPtr)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)v481, 0LL) )
    {
      v444 = (UnityEngine_Object_o *)v485->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v444, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v445 = v485->fields.performance;
        if ( !v445 )
          goto LABEL_426;
        data = (UnityEngine_Object_o *)v445->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_VoiceMaster___);
            v485->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v485->fields.chrId;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   v485,
                   (VoiceMaster_o *)MasterData_object,
                   chrId,
                   FileName,
                   v450) )
            {
              v485->fields.isAlreadyRegistDefaultVoice = 1;
            }
            v451 = v485->fields.chrId;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v452 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v485, (VoiceMaster_o *)MasterData_object, v451, v452, v453);
            v454 = v481[19].klass;
            if ( v454 )
            {
              v455 = (int)v454[1].vtable._1_Finalize.method;
              v456 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v456 = BalanceConfig_TypeInfo;
              }
              if ( v455 == v456->static_fields->TreasureDeviceIdMashu3 )
              {
                v457 = v485->fields.chrId;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v458 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v485, (VoiceMaster_o *)MasterData_object, v457, v458, v459);
              }
              goto LABEL_417;
            }
          }
          goto LABEL_426;
        }
      }
    }
  }
LABEL_417:
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62431196(0LL);
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

  if ( (byte_4A0128C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7);
    byte_4A0128C = 1;
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
                                                                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                                                                            (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( battleTargetList )
          {
            battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                              (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                              (const MethodInfo *)tlcont);
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
    sub_1B64C5C(battleTargetList, tlcont);
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

  if ( (byte_4A01290 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    sub_1B64A00(&StringLiteral_14432/*"Tmp_Target"*/, v9);
    byte_4A01290 = 1;
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
                                                                        (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          (const MethodInfo *)tlcont);
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
      sub_1B64C5C(battleTargetList, tlcont);
    }
    v11 = (UnityEngine_GameObject_o *)sub_1B64C4C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v11, (System_String_o *)StringLiteral_14432/*"Tmp_Target"*/, 0LL);
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

  if ( (byte_4A01276 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_1B64A00(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_4A01276 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !evs )
    sub_1B64C5C(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v13 = v11;
    if ( !v11 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      sub_1B64C5C(v11, v12);
    if ( System_String__op_Equality((System_String_o *)v19.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&current[3].monitor, (int32_t)obj, v15, v16);
      v17 = 4;
      goto LABEL_10;
    }
  }
  v17 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v13 && v17 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F9821 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_49F9827 )
  {
    sub_1B64A00(&UnityEngine_Quaternion_TypeInfo, method);
    byte_49F9827 = 1;
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
      sub_1B64C5C(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, 0, v2, v3);
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
    sub_1B64C5C(targetActor, method);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, (int32_t)bac, index, (int32_t)method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  BattleSequenceManager__WaitEndSequence_d__106_o *v4; // x19
  int32_t _1__state; // w8
  BattleSequenceManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *wait_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A012A8 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__106_o *)sub_1B64A00(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_4A012A8 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B64C5C(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B649A4(p__2__current, (int32_t)wait_5__2, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(_4__this, method);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BattleSequenceManager__WaitEndSequence_d__106_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A012A2 & 1) == 0 )
  {
    sub_1B64A00(&BattleSequenceManager___c_TypeInfo, v1);
    byte_4A012A2 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1B64C5C(this, x1);
  return System_Single__CompareTo_62272576(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


int32_t __fastcall BattleSequenceManager___c___FixSyncGroupRandomAudioPlayIndex_b__75_2(
        BattleSequenceManager___c_o *this,
        WellFired_USFGOPlayAudioEvent_o *x1,
        WellFired_USFGOPlayAudioEvent_o *x2,
        const MethodInfo *method)
{
  float v4; // s1
  float firetime; // [xsp+Ch] [xbp-4h] BYREF

  if ( !x1 || (firetime = x1->fields.firetime, !x2) )
    sub_1B64C5C(this, x1);
  return System_Single__CompareTo_62272576(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1B64C5C(this, x);
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
  if ( (byte_4A012A3 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass115_0_o *)sub_1B64A00(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_4A012A3 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass115_0_o *)v4->fields.targetList) == 0LL )
    sub_1B64C5C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_33674A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
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
  if ( (byte_4A012A4 & 1) == 0 )
  {
    sub_1B64A00(&Method_AssetData_GetObject_GameObject____75715992, data);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__1__, v6);
    sub_1B64A00(&StringLiteral_12879/*"StandardCutIn"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_1B64A00(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_4A012A4 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass74_0_o *)AssetData__GetObject_object__48358160(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_12879/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2E1E310 *)Method_AssetData_GetObject_GameObject____75715992),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v10, v11),
        (this = (BattleSequenceManager___c__DisplayClass74_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B64C5C(this, data);
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
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1B64C4C(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v20, v21);
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


void __fastcall BattleSequenceManager___c__DisplayClass74_0___loadSequence_b__1(
        BattleSequenceManager___c__DisplayClass74_0_o *this,
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
  __int64 v14; // x1
  __int64 v15; // x20
  void *_4__this; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  struct BattleActorControl_o *battleActor; // x8
  int32x2_t *battleSvtData; // x8
  struct BattleSequenceManager_o *v28; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  System_Action_o *v32; // x23
  struct BattleSequenceManager_o *v33; // x8
  struct BattleSequenceManager_o *v34; // x8
  _DWORD *v35; // x20
  int v36; // w8
  int v37; // w9
  __int64 v38; // x10
  struct BattleSequenceManager_o *v39; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A012A5 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, obj);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v7);
    sub_1B64A00(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_1B64A00(&Method_System_Tuple_int__int__get_Item1__, v10);
    sub_1B64A00(&Method_System_Tuple_int__int__get_Item2__, v11);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__2__, v12);
    sub_1B64A00(&BattleSequenceManager___c__DisplayClass74_1_TypeInfo, v13);
    sub_1B64A00(&StringLiteral_9465/*"NoblePhantasm_"*/, v14);
    byte_4A012A5 = 1;
  }
  v15 = sub_1B64C4C(BattleSequenceManager___c__DisplayClass74_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 24) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 16) = obj;
  v20 = (__int64 *)(v15 + 16);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)obj, v21, v22);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  v25 = *v20;
  *((_QWORD *)_4__this + 11) = *v20;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)((char *)_4__this + 88), v25, v23, v24);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_29;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_29;
  battleSvtData = (int32x2_t *)battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_29;
  battleSvtData[93].n64_u64[0] = vmax_s32((int32x2_t)paramsFromMstTDSeqWeight->fields, 0LL).n64_u64[0];
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_29;
  _4__this = (void *)ServantAssetLoadManager__getVoiceId(
                       (ServantAssetLoadManager_o *)_4__this,
                       this->fields.chrId,
                       this->fields.limitCount,
                       0LL);
  overwriteSvtVoiceId = (int)_4__this;
  if ( this->fields.overwriteSvtVoiceId )
  {
    v28 = this->fields.__4__this;
    if ( !v28 )
      goto LABEL_29;
    overwriteSvtVoiceId = v28->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v30 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v31 = System_String__Concat_61385136((System_String_o *)StringLiteral_9465/*"NoblePhantasm_"*/, v30, 0LL);
  v32 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v15,
    Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_29;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v31, v32, 1, 0LL);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_29;
  _4__this = v33->fields.seqObject;
  if ( !_4__this )
    goto LABEL_29;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__48804848(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2E8B3F0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_29;
  v35 = _4__this;
  v34->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v35 )
    goto LABEL_29;
  v36 = v35[6];
  if ( v36 < 1 )
    return;
  v37 = 0;
  while ( 1 )
  {
    if ( v36 == v37 )
      sub_1B64C64(_4__this, v17);
    v38 = *(_QWORD *)&v35[2 * v37 + 8];
    if ( !v38 )
      goto LABEL_29;
    if ( !*(_DWORD *)(v38 + 64) && *(_BYTE *)(v38 + 69) )
      break;
    if ( v36 == ++v37 )
      return;
  }
  v39 = this->fields.__4__this;
  if ( !v39 )
LABEL_29:
    sub_1B64C5C(_4__this, v17);
  v39->fields.isNoDamageMotionInDamageNoble = 1;
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
  BattleSequenceManager___c__DisplayClass74_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleSequenceManager___c__DisplayClass74_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v8; // x20
  const MethodInfo *v9; // x3
  int v10; // w8
  BattleSequenceManager___c__DisplayClass74_1_o *v11; // x21
  unsigned int v12; // w23
  int v13; // w24
  UnityEngine_Behaviour_o *v14; // x22
  struct BattleSequenceManager___c__DisplayClass74_0_o *v15; // x8
  BattleSequenceManager_o *v16; // x21
  System_Action_o *_9__3; // x23
  int32_t v18; // w2
  int32_t v19; // w3

  v2 = this;
  if ( (byte_4A012A6 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_1B64A00(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)sub_1B64A00(&StringLiteral_1/*""*/, v5);
    byte_4A012A6 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_20;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_20;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48804848(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E8B3F0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v10 = (int)this->fields.CS___8__locals1;
  v11 = this;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1B64C64(this, method);
      v14 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v11->fields.__9__4 + (int)v12);
      if ( !v14 )
        break;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v14->klass[1]._2.typeHierarchy)(
                                                                v14,
                                                                v14->klass[1]._2.unity_user_data);
      if ( (v13 & (unsigned int)this & 1) != 0 )
      {
        v8 = *(System_String_o **)&v14[2].fields.m_CachedPtr;
        v13 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v14, 0, 0LL);
      }
      v10 = (int)v11->fields.CS___8__locals1;
      if ( (int)++v12 >= v10 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1B64C5C(this, method);
  }
LABEL_15:
  v15 = v2->fields.CS___8__locals1;
  if ( !v15 )
    goto LABEL_20;
  v16 = v15->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v18, v19);
  }
  if ( !v16 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v16, v8, _9__3, v9);
}


void __fastcall BattleSequenceManager___c__DisplayClass74_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass74_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass74_1_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSequenceManager___c__DisplayClass74_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v11; // x8
  struct BattleSequenceManager_o *v12; // x8
  BattleSequenceManager___c__DisplayClass74_1_o *v13; // x20
  struct BattleSequenceManager___c__DisplayClass74_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  UnityEngine_Object_o *v16; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass74_0_o *v18; // x8
  struct BattleSequenceManager_o *v19; // x21
  struct BattleSequenceManager___c__DisplayClass74_0_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v23; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleSequenceManager___c__DisplayClass74_0_o *v27; // x8
  struct BattleSequenceManager_o *v28; // x8
  UnityEngine_Object_o *standFigure; // x21
  const MethodInfo *v30; // x3
  struct BattleSequenceManager___c__DisplayClass74_0_o *v31; // x8
  struct BattleSequenceManager_o *v32; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass74_0_o *v37; // x8
  struct BattleSequenceManager_o *v38; // x10
  const MethodInfo *v39; // x4
  struct BattleSequenceManager___c__DisplayClass74_0_o *v40; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v43; // x1
  struct BattleSequenceManager___c__DisplayClass74_0_o *v44; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v45; // x8
  struct BattleSequenceManager_o *v46; // x20
  struct BattleSequenceManager_o *v47; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v48; // x8
  struct BattleSequenceManager_o *v49; // x8
  UnityEngine_Object_o *v50; // x20
  struct BattleSequenceManager___c__DisplayClass74_0_o *v51; // x8
  struct BattleSequenceManager_o *v52; // x8
  struct BattleSequenceManager___c__DisplayClass74_0_o *v53; // x8
  struct BattleSequenceManager_o *v54; // x8
  UIStandFigureM_o *v55; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  struct BattleSequenceManager___c__DisplayClass74_0_o *v62; // x8

  v2 = this;
  if ( (byte_4A012A7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)sub_1B64A00(
                                                              &Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__4__,
                                                              v8);
    byte_4A012A7 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_73;
  _4__this = CS___8__locals1->fields.__4__this;
  if ( !_4__this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)_4__this->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E8AA30 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_73;
  v12 = v11->fields.__4__this;
  if ( !v12 )
    goto LABEL_73;
  v13 = this;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)v12->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E8AA30 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v14 = v2->fields.CS___8__locals1;
  if ( !v14 )
    goto LABEL_73;
  v15 = v14->fields.__4__this;
  if ( !v15 )
    goto LABEL_73;
  v16 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)v15->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2E8AA30 *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(
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
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v23 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v23, (UnityEngine_GameObject_o *)this, 0LL);
    v19->fields.standFigure = MeshLocal;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v19->fields.standFigure, (int32_t)MeshLocal, v25, v26);
    v27 = v2->fields.CS___8__locals1;
    if ( !v27 )
      goto LABEL_73;
    v28 = v27->fields.__4__this;
    if ( !v28 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v28->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v31 = v2->fields.CS___8__locals1;
    if ( !v31 )
      goto LABEL_73;
    v32 = v31->fields.__4__this;
    if ( !v32 )
      goto LABEL_73;
    monitor = (int32_t)v13[1].monitor;
    v32->fields.loadStandFigureId = monitor;
    battleActor = v31->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v13[1].monitor), monitor_high == -1) )
    {
      v45 = v2->fields.CS___8__locals1;
      if ( !v45 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)v45->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v46 = v45->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0LL);
      if ( !v46 )
        goto LABEL_73;
      v46->fields.loadStandFigureLimitCount = (int)this;
      v37 = v2->fields.CS___8__locals1;
      if ( !v37 )
        goto LABEL_73;
    }
    else
    {
      v37 = v2->fields.CS___8__locals1;
      if ( !v37 )
        goto LABEL_73;
      v38 = v37->fields.__4__this;
      if ( !v38 )
        goto LABEL_73;
      v38->fields.loadStandFigureLimitCount = monitor_high;
    }
    v47 = v37->fields.__4__this;
    if ( !v47 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)v47->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    v48 = v2->fields.CS___8__locals1;
    if ( !v48 )
      goto LABEL_73;
    v49 = v48->fields.__4__this;
    if ( !v49 )
      goto LABEL_73;
    v50 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v49->fields.loadStandFigureId,
                                                              v49->fields.loadStandFigureLimitCount,
                                                              0LL);
    if ( !v50 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v50, (System_String_o *)this, 0LL);
    v51 = v2->fields.CS___8__locals1;
    if ( !v51 )
      goto LABEL_73;
    v52 = v51->fields.__4__this;
    if ( !v52 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)v52->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
    v53 = v2->fields.CS___8__locals1;
    if ( !v53 )
      goto LABEL_73;
    v54 = v53->fields.__4__this;
    if ( !v54 )
      goto LABEL_73;
    v55 = v54->fields.standFigure;
    loadStandFigureId = v54->fields.loadStandFigureId;
    loadStandFigureLimitCount = v54->fields.loadStandFigureLimitCount;
    faceType = v54->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v60, v61);
    }
    if ( !v55 )
LABEL_73:
      sub_1B64C5C(this, method);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UIStandFigureM__SetCharacter_40628576(
                                                              v55,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v62 = v2->fields.CS___8__locals1;
      if ( v62 )
      {
        this = (BattleSequenceManager___c__DisplayClass74_1_o *)v62->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v62->fields.onComplete,
            v30);
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
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(
                                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                                              0LL,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v40 = v2->fields.CS___8__locals1;
      if ( !v40 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)v40->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v40->fields.onComplete;
      obj = v2->fields.obj;
      v43 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v44 = v2->fields.CS___8__locals1;
      if ( !v44 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)v44->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v44->fields.onComplete;
      obj = v2->fields.obj;
      v43 = (WellFired_USFGOPlayCutInBase_o *)v16;
    }
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v43,
                                                              obj,
                                                              onComplete,
                                                              v39);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
  }
}


void __fastcall BattleSequenceManager___c__DisplayClass74_1___loadSequence_b__4(
        BattleSequenceManager___c__DisplayClass74_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct BattleSequenceManager___c__DisplayClass74_0_o *CS___8__locals1; // x9

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !CS___8__locals1->fields.__4__this )
    sub_1B64C5C(this, method);
  BattleSequenceManager__LoadEndStandFigure(
    CS___8__locals1->fields.__4__this,
    this->fields.obj,
    CS___8__locals1->fields.onComplete,
    v2);
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
    sub_1B64C5C(this, 0LL);
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
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1B64C5C(this, method);
  BattleSequenceManager__LoadEndStandFigure(this->fields.__4__this, this->fields.obj, this->fields.onComplete, v2);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AF324;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AF304;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AF2BC;
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
  return (System_IAsyncResult_o *)sub_1B649B4(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
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