void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_49FEB7E & 1) == 0 )
  {
    sub_1B640C8(&BattleSequenceManager_TypeInfo, v1);
    byte_49FEB7E = 1;
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
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_object__o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_object__o *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_Dictionary_object__int__o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x1
  __int64 v59; // x2
  System_Collections_Generic_HashSet_T__o *v60; // x20
  int32_t v61; // w2
  int32_t v62; // w3
  struct UnityEngine_GameObject_array *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  System_RuntimeFieldHandle_o v66; // 0:w1.4

  if ( (byte_49FEB7D & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformance_BattleUIPanel___TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_HashSet_string__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Object___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_Object__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_List_Action__TypeInfo, v16);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__, v18);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C,
      v19);
    sub_1B640C8(&StringLiteral_9299/*"N_{0}{1}"*/, v20);
    byte_49FEB7D = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v21 = (System_Array_o *)sub_1B64170(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v66.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v22 = (struct BattlePerformance_BattleUIPanel_array *)v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v21, v66, 0LL);
  this->fields.FadeTargetPanelIndexs = v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.FadeTargetPanelIndexs, (int32_t)v22, v23, v24);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v27, v28, v29);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Action__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v32;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v32, v33, v34);
  v35 = StringLiteral_9299/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9299/*"N_{0}{1}"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.PosNodeFormatNP, v35, v36, v37);
  v40 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Object__TypeInfo,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v40;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v40, v41, v42);
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v45;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.battleTargetList, (int32_t)v45, v46, v47);
  v50 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v48,
                                                       v49);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v50;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.createdObjects, (int32_t)v50, v51, v52);
  v55 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v53,
                                                                  v54);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v55,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v55;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v55, v56, v57);
  v60 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v58,
                                                     v59);
  System_Collections_Generic_HashSet_object____ctor(
    v60,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v60, v61, v62);
  this->fields.nowTargetAlpha = 1.0;
  v63 = (struct UnityEngine_GameObject_array *)sub_1B64170(UnityEngine_GameObject___TypeInfo, 3LL);
  this->fields.saveWaitEnemy = v63;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.saveWaitEnemy, (int32_t)v63, v64, v65);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FEB61 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, actor);
    sub_1B640C8(&StringLiteral_24501/*"wait"*/, v5);
    byte_49FEB61 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !actor )
      sub_1B64324(v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_43285100(actor, (System_String_o *)StringLiteral_24501/*"wait"*/, 0, 0LL);
    if ( !this->fields.DemoMode )
    {
      v7.fields.r = 0.0;
      v7.fields.g = 0.0;
      v7.fields.b = 0.0;
      v7.fields.a = 0.0;
      BattleActorControl__ChangeShadowColor(actor, v7, 0.3, 0LL);
    }
    v8.fields.r = 0.0;
    v8.fields.g = 0.0;
    v8.fields.b = 0.0;
    v8.fields.a = 1.0;
    BattleActorControl__SetMaterialColor(actor, v8, 0.0, 0LL);
  }
}


bool __fastcall BattleSequenceManager__CheckNewBgm(
        BattleSequenceManager_o *this,
        System_String_o *bgmName,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *intactBgmList; // x0

  if ( (byte_49FEB77 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_string___, bgmName);
    byte_49FEB77 = 1;
  }
  if ( System_String__Equals_61384440(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_2E52F9C *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_1B64324(this);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_42600296(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_42600296(
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v20; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v27; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x24

  if ( (byte_49FEB49 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v8);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass78_0__CreateCutInStandFigure_b__0__, v9);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass78_0_TypeInfo, v10);
    byte_49FEB49 = 1;
  }
  v11 = sub_1B64314(BattleSequenceManager___c__DisplayClass78_0_TypeInfo, obj, onComplete);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_16;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)obj, v15, v16);
  *(_QWORD *)(v11 + 32) = onComplete;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)onComplete, v17, v18);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v20 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v20 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v20, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v23, v24);
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
          v27 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
          System_Action___ctor(
            v33,
            (Il2CppObject *)v11,
            Method_BattleSequenceManager___c__DisplayClass78_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v27 )
            return UIStandFigureM__SetCharacter_40622932(
                     v27,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v33,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1B64324(Instance);
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
  Il2CppObject *current; // x20
  float v43; // s0
  int v44; // w28
  System_Nullable_float__o v45; // x21
  const MethodInfo_35CE514 *v46; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v48; // w2
  int32_t v49; // w3
  System_Object_array *v50; // x20
  __int64 v51; // x0
  __int64 v52; // x1
  struct BattlePerformance_o *v53; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v55; // x8
  struct BattlePerformance_o *v56; // x8
  System_String_o *v57; // x19
  BattleSequenceManager_c *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  System_Collections_Hashtable_o *v76; // x0
  __int64 v77; // x0
  int v78; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v79; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v83; // 0:x0.8
  System_Nullable_float__o v84; // 0:x1.8
  System_Nullable_float__o v85; // 0:x2.8
  System_Nullable_long__o v86; // 0:x0.16

  if ( (byte_49FEB62 & 1) == 0 )
  {
    sub_1B640C8(&BattleSequenceManager_TypeInfo, method);
    sub_1B640C8(&BgmManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Nullable_long___ctor__, v9);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v10);
    sub_1B640C8(&object___TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&float_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v14);
    sub_1B640C8(&SoundManager_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v16);
    sub_1B640C8(&StringLiteral_9789/*"OnChangeBgmVolume"*/, v17);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v18);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v19);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v20);
    sub_1B640C8(&iTween_TypeInfo, v21);
    byte_49FEB62 = 1;
  }
  changeBgm = 0LL;
  memset(&v81, 0, sizeof(v81));
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v24, (int32_t)v26, v27);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v29, v30, v31);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v34, v35, v36);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v32 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v28 = 1;
  }
  v37 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1B64324(performance);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v32 | System_String__op_Inequality(v37, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1B64170(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v50 = (System_Object_array *)performance;
    v51 = StringLiteral_19577/*"from"*/;
    if ( StringLiteral_19577/*"from"*/ )
    {
      v51 = sub_1B64204(StringLiteral_19577/*"from"*/, v50->obj.klass->_1.element_class);
      if ( !v51 )
        goto LABEL_92;
      v52 = StringLiteral_19577/*"from"*/;
    }
    else
    {
      v52 = 0LL;
    }
    if ( !v50->max_length )
      goto LABEL_91;
    v50->m_Items[0] = (Il2CppObject *)v52;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v50->m_Items, v52, v48, v49);
    v58 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v58 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v80.fields._list = v58->static_fields->NoblePhantasmBgmVolumeRate;
    v51 = j_il2cpp_value_box_0(float_TypeInfo, &v80);
    v61 = (Il2CppObject *)v51;
    if ( !v51 || (v51 = sub_1B64204(v51, v50->obj.klass->_1.element_class)) != 0 )
    {
      if ( v50->max_length <= 1 )
        goto LABEL_91;
      v50->m_Items[1] = v61;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[1], (int32_t)v61, v59, v60);
      v51 = StringLiteral_23870/*"to"*/;
      if ( StringLiteral_23870/*"to"*/ )
      {
        v51 = sub_1B64204(StringLiteral_23870/*"to"*/, v50->obj.klass->_1.element_class);
        if ( !v51 )
          goto LABEL_92;
        v52 = StringLiteral_23870/*"to"*/;
      }
      else
      {
        v52 = 0LL;
      }
      if ( v50->max_length <= 2 )
        goto LABEL_91;
      v50->m_Items[2] = (Il2CppObject *)v52;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[2], v52, v62, v63);
      *(_DWORD *)&v79.fields.hasValue = 1;
      v51 = j_il2cpp_value_box_0(int_TypeInfo, &v79);
      v66 = (Il2CppObject *)v51;
      if ( !v51 || (v51 = sub_1B64204(v51, v50->obj.klass->_1.element_class)) != 0 )
      {
        if ( v50->max_length <= 3 )
          goto LABEL_91;
        v50->m_Items[3] = v66;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[3], (int32_t)v66, v64, v65);
        v51 = StringLiteral_23830/*"time"*/;
        if ( StringLiteral_23830/*"time"*/ )
        {
          v51 = sub_1B64204(StringLiteral_23830/*"time"*/, v50->obj.klass->_1.element_class);
          if ( !v51 )
            goto LABEL_92;
          v52 = StringLiteral_23830/*"time"*/;
        }
        else
        {
          v52 = 0LL;
        }
        if ( v50->max_length <= 4 )
          goto LABEL_91;
        v50->m_Items[4] = (Il2CppObject *)v52;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[4], v52, v67, v68);
        v78 = 1056964608;
        v51 = j_il2cpp_value_box_0(float_TypeInfo, &v78);
        v71 = (Il2CppObject *)v51;
        if ( !v51 || (v51 = sub_1B64204(v51, v50->obj.klass->_1.element_class)) != 0 )
        {
          if ( v50->max_length <= 5 )
            goto LABEL_91;
          v50->m_Items[5] = v71;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[5], (int32_t)v71, v69, v70);
          v51 = StringLiteral_22193/*"onupdate"*/;
          if ( StringLiteral_22193/*"onupdate"*/ )
          {
            v51 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v50->obj.klass->_1.element_class);
            if ( !v51 )
              goto LABEL_92;
            v52 = StringLiteral_22193/*"onupdate"*/;
          }
          else
          {
            v52 = 0LL;
          }
          if ( v50->max_length <= 6 )
            goto LABEL_91;
          v50->m_Items[6] = (Il2CppObject *)v52;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[6], v52, v72, v73);
          v51 = StringLiteral_9789/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9789/*"OnChangeBgmVolume"*/ )
          {
            v52 = 0LL;
LABEL_84:
            if ( v50->max_length > 7 )
            {
              v50->m_Items[7] = (Il2CppObject *)v52;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v50->m_Items[7], v52, v74, v75);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v76 = iTween__Hash(v50, 0LL);
              iTween__ValueTo(gameObject, v76, 0LL);
              return;
            }
LABEL_91:
            sub_1B6432C(v51, v52);
          }
          v51 = sub_1B64204(StringLiteral_9789/*"OnChangeBgmVolume"*/, v50->obj.klass->_1.element_class);
          if ( v51 )
          {
            v52 = StringLiteral_9789/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v77 = sub_1B64348(v51);
    sub_1B641F0(v77, 0LL);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v80,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v81 = v80;
          while ( 1 )
          {
            v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v81,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v41 )
              break;
            current = v81.fields._current;
            if ( !v81.fields._current )
              sub_1B64324(v41);
            v43 = (float)(__int64)v81.fields._current[2].klass + -800.0;
            if ( v43 == INFINITY )
              v44 = 0x80000000;
            else
              v44 = (int)v43;
            v79 = 0LL;
            v83 = (System_Nullable_float__o)&v79;
            System_Nullable_float____ctor(v83, 0.5, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
            v45 = v79;
            v86.fields.value = v44 & (unsigned int)~(v44 >> 31);
            *(_OWORD *)&v80.fields._list = 0uLL;
            *(_QWORD *)&v86.fields.hasValue = &v80;
            System_Nullable_long____ctor(v86, Method_System_Nullable_long___ctor__, v46);
            v84 = 0LL;
            v85 = v45;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v84, v85, *(System_Nullable_long__o *)&v80.fields._list, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v81,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_37999816(v40, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v28 )
  {
    v53 = this->fields.performance;
    if ( !v53 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v53->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v55 = this->fields.performance;
      if ( v55 )
      {
        performance = (__int64)v55->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v56 = this->fields.performance;
          if ( v56 )
          {
            performance = (__int64)v56->fields.logic;
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
  v57 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v57, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x20

  if ( (byte_49FEB79 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___, isCheckExistBgm);
    sub_1B640C8(&System_Func_BgmPlayArgs__bool__TypeInfo, v7);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass141_0__ExistBackupBgmPlayGroup_b__0__, v8);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass141_0_TypeInfo, v9);
    byte_49FEB79 = 1;
  }
  v10 = sub_1B64314(BattleSequenceManager___c__DisplayClass141_0_TypeInfo, isCheckExistBgm, checkBgmName);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_QWORD *)(v10 + 16) = checkBgmName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)checkBgmName, v12, v13);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v15 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BgmPlayArgs__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v10,
    Method_BattleSequenceManager___c__DisplayClass141_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48531816(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (System_Func_TSource__bool__o *)v18,
           (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  if ( (byte_49FEB59 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FEB59 = 1;
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__48794364; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  BattleSequenceManager___c_c *v38; // x0
  System_Comparison_T__o *_9__75_0; // x23
  Il2CppObject *v40; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  System_Func_object__bool__o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_object__o *v49; // x21
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  BattleSequenceManager___c_c *v53; // x0
  System_Comparison_T__o *_9__75_2; // x19
  Il2CppObject *v55; // x22
  struct BattleSequenceManager___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_49FEB48 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___, sequence);
    sub_1B640C8(&System_Comparison_USFGOPlayAudioEvent__TypeInfo, v6);
    sub_1B640C8(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__, v10);
    sub_1B640C8(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__, v21);
    sub_1B640C8(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo, v22);
    sub_1B640C8(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo, v23);
    sub_1B640C8(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_0__, v24);
    sub_1B640C8(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_2__, v25);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass75_0__FixSyncGroupRandomAudioPlayIndex_b__1__, v26);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass75_0_TypeInfo, v27);
    sub_1B640C8(&BattleSequenceManager___c_TypeInfo, v28);
    byte_49FEB48 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  v29 = sub_1B64314(BattleSequenceManager___c__DisplayClass75_0_TypeInfo, sequence, syncGroupName);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_27;
  *(_QWORD *)(v29 + 16) = syncGroupName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)syncGroupName, v31, v32);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__48794364 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                                           sequence,
                                                                                           (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v35 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v35,
    ComponentsInChildren_object__48794364,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v38 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v38 = BattleSequenceManager___c_TypeInfo;
  }
  _9__75_0 = (System_Comparison_T__o *)v38->static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = BattleSequenceManager___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__75_0 = (System_Comparison_T__o *)sub_1B64314(
                                           System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo,
                                           v36,
                                           v37);
    System_Comparison_object____ctor(
      _9__75_0,
      v40,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__75_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)_9__75_0, v42, v43);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v35,
    _9__75_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v46 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo,
                                         v44,
                                         v45);
  System_Func_object__bool____ctor(
    v46,
    (Il2CppObject *)v29,
    Method_BattleSequenceManager___c__DisplayClass75_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v35,
          (System_Func_T__bool__o *)v46,
          (const MethodInfo_2E24870 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo,
                                                         v47,
                                                         v48);
    System_Collections_Generic_List_object____ctor(
      v49,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__48794364 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                                             sequence,
                                                                                             (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v49 )
    {
      System_Collections_Generic_List_object___AddRange(
        v49,
        ComponentsInChildren_object__48794364,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v50 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                             sequence,
                                                             (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v49,
        v50,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v53 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v53 = BattleSequenceManager___c_TypeInfo;
      }
      _9__75_2 = (System_Comparison_T__o *)v53->static_fields->__9__75_2;
      if ( !_9__75_2 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = BattleSequenceManager___c_TypeInfo;
        }
        v55 = (Il2CppObject *)v53->static_fields->__9;
        _9__75_2 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_USFGOPlayAudioEvent__TypeInfo, v51, v52);
        System_Comparison_object____ctor(
          _9__75_2,
          v55,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__75_2__,
          0LL);
        v56 = BattleSequenceManager___c_TypeInfo->static_fields;
        v56->__9__75_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__75_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->__9__75_2, (int32_t)_9__75_2, v57, v58);
      }
      System_Collections_Generic_List_object___Sort_55243320(
        v49,
        _9__75_2,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        v49,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v59,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v59.fields._current )
          sub_1B64324(0LL);
      }
      while ( (((__int64 (*)(void))v59.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v59,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1B64324(ComponentsInChildren_object__48794364);
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

  if ( (byte_49FEB4C & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, *(_QWORD *)&curLimCnt);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FEB4C = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B64324(actor);
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
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FEB6C & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&pos);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v8);
    sub_1B640C8(&StringLiteral_5980/*"Enemy"*/, v9);
    sub_1B640C8(&StringLiteral_10621/*"Player"*/, v10);
    byte_49FEB6C = 1;
  }
  if ( isEnemy )
    v11 = &StringLiteral_5980/*"Enemy"*/;
  else
    v11 = &StringLiteral_10621/*"Player"*/;
  v12 = (Il2CppObject *)*v11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v17 = pos;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v15 = System_String__Format_61389768(format, v12, v14, 0LL);
  if ( !Instance )
    sub_1B64324(v15);
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
  __int64 v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v13; // x20
  UnityEngine_Transform_o *result; // x0
  const MethodInfo *v15; // x1

  if ( (byte_49FEB6D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__,
      *(_QWORD *)&posIndex);
    sub_1B640C8(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo, v5);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass122_0__GetTargetPosIndexTransform_b__0__, v6);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass122_0_TypeInfo, v7);
    byte_49FEB6D = 1;
  }
  v8 = sub_1B64314(BattleSequenceManager___c__DisplayClass122_0_TypeInfo, *(_QWORD *)&posIndex, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_9;
  *(_DWORD *)(v8 + 16) = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v13 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo,
                                        v10,
                                        v11);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_BattleSequenceManager___c__DisplayClass122_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v13,
                                        (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v9 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, v15);
    if ( v9 )
      return UnityEngine_GameObject__get_transform(v9, 0LL);
LABEL_9:
    sub_1B64324(v9);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
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
  UnityEngine_GameObject_o *v8; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_49FEB78 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, entity);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FEB78 = 1;
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
  v8 = this->fields.actor;
  if ( !v8 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v8,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_16:
    sub_1B64324(v8);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_object, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Object_o *klass; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_49FEB7A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v1);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v3);
    byte_49FEB7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v5[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v5 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v5 )
    goto LABEL_18;
  v5 = (UnityEngine_GameObject_o *)v5[4].klass;
  if ( !v5 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1B64324(v5);
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

  if ( (byte_49FEB7C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FEB7C = 1;
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_49FEB4A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, bgmName);
    sub_1B640C8(&SoundManager_TypeInfo, v7);
    byte_49FEB4A = 1;
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
    sub_1B64324(IsNullOrEmpty);
  }
  IsNullOrEmpty = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  if ( !IsNullOrEmpty )
    goto LABEL_14;
  items = IsNullOrEmpty->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++IsNullOrEmpty->fields._version;
  if ( !items )
    goto LABEL_14;
  size = IsNullOrEmpty->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      IsNullOrEmpty,
      (Il2CppObject *)bgmName,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v14[4] = (Il2CppClass *)bgmName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)bgmName, v9, v10);
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
  UIStandFigureRender_o *v8; // x0

  if ( (byte_49FEB4B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, obj);
    byte_49FEB4B = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v8 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v8 )
      sub_1B64324(0LL);
    UIStandFigureRender__SetActive(v8, 0, 0LL);
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
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v12; // x8
  struct BattleData_o *v13; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v16; // x21
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

  if ( (byte_49FEB68 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, CoreObj);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_18900/*"en_Parts_Up01"*/, v6);
    sub_1B640C8(&StringLiteral_18899/*"en_Parts_Under01"*/, v7);
    byte_49FEB68 = 1;
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
      v10 = this->fields.performance;
      if ( !v10 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v10->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v12 = this->fields.performance;
        if ( !v12 )
          goto LABEL_54;
        v13 = v12->fields.data;
        if ( !v13 )
          goto LABEL_54;
        if ( v13->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                v16 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v16,
                                                      0LL,
                                                      0LL);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v16 )
                    goto LABEL_54;
                  if ( LOBYTE(v16[30].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v16[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0LL) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v16[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0LL) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v16[28].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0LL);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v17 = &StringLiteral_18900/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v16[28].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0LL);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v17 = &StringLiteral_18899/*"en_Parts_Under01"*/;
                      }
                      v18 = this->fields.performance;
                      if ( !v18 )
                        goto LABEL_54;
                      v19 = (System_String_o *)*v17;
                      v20 = v18->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0LL);
                      if ( !v20 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v20,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v19,
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
                          *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)klass,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v25 = v22;
                            v26 = v23;
                            v27 = v24;
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
                                v33.fields.z = v27 - z;
                                v33.fields.y = v26 - y;
                                v33.fields.x = v25 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v33, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1B64324(klass);
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
    sub_1B64324(this);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (ServantStatusBattleListViewItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1B6406C(p_BgChangedCallback, 0, v6, v7);
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
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  System_String_o *v26; // x20
  float v27; // s9
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FEB5D & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FEB5D = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v10 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v10 )
      sub_1B64324(0LL);
    klass = v10->klass;
    v12 = v10;
    v13 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(v10, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v12,
            *(_QWORD *)(p_method + 8));
    if ( !v16 )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_16;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_16:
        v20 = sub_1BB60A8(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
        break;
      v21 = *(_QWORD *)v16;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_23;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_23:
        v24 = sub_1BB60A8(v16, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
      if ( !v25 )
        sub_1B64324(0LL);
      v26 = *(System_String_o **)(v25 + 16);
      v27 = *(float *)(v25 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v26, v27 * newValue, 0LL);
    }
    v28 = *(_QWORD *)v16;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_33;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_33:
      v31 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  const MethodInfo *v27; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v38; // w9
  Il2CppObject *v39; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v41; // w2
  int v42; // w9
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v45; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
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
  const MethodInfo *v100; // x1
  UnityEngine_Camera_o *v101; // x21
  int32_t cullingMask; // w22
  char v103; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v105; // w22
  char v106; // w0
  struct BattlePerformance_o *v107; // x8
  UnityEngine_Object_o *v108; // x21
  UnityEngine_Component_o *v109; // x1
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  struct BattlePerformance_o *v111; // x8
  BattlePerformance_o *v112; // x20
  int32_t v113; // w21
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v117; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FEB5F & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&CommonUI_TypeInfo, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_TreasureDvcMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v13);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Object__Clear__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Object__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__get_Item__, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v22);
    sub_1B640C8(&StringLiteral_9459/*"NoblePhantasm/CutIns"*/, v23);
    sub_1B640C8(&StringLiteral_3206/*"Battle2D"*/, v24);
    byte_49FEB5F = 1;
  }
  entity = 0LL;
  memset(&v117, 0, sizeof(v117));
  memset(&v116, 0, sizeof(v116));
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v27);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v29);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v30);
  BattleSequenceManager__restoreBattleActorTransform(this, v31);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_89;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v32) )
    BattleSequenceManager__CrossFadeBgm(this, v33);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v33);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v117 = v115;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v117,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v117.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v117,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_89;
  size = npEndDeleteObjects->fields._size;
  v38 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v38;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v116 = v115;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v39 = v116.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v39, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_89;
  v41 = createdObjects->fields._size;
  v42 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v42;
  if ( v41 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v41, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v45 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v45, 0LL);
    *p_seqObject = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seqObject, 0, v46, v47);
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
                                                   (const MethodInfo_3463050 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v56 )
            goto LABEL_89;
          v57 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v56, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v56,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
      sub_1B6432C(transform, v48);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v69 + v61), (int32_t)v70, v65, v66);
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
                                                   (const MethodInfo_3463050 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v76 )
            goto LABEL_89;
          v77 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v76, (unsigned __int8)transform & 1, 0LL);
          v78 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v76,
                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, 0, v98, v99);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v97) )
    BattleSequenceManager__ReleaseCpk(this, v100);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v101 = this->fields.actorCamera;
  if ( !v101 )
    goto LABEL_89;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v103 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v101, (1 << v103) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_89;
  v105 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v106 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v105 & ~(1 << v106), 0LL);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v107 = this->fields.performance;
  if ( !v107 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)v107->fields.bgPerf;
  if ( !transform )
    goto LABEL_89;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( !this->fields.OnCompleteActorCallback )
    goto LABEL_159;
  v108 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v108, 0LL, 0LL);
  v109 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_89;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v109 = transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_89:
    sub_1B64324(transform);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_Component_o *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v109,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_159:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9459/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_89;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  v111 = this->fields.performance;
  if ( !v111 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)v111->fields.actioncamera;
  if ( !transform )
    goto LABEL_89;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v112 = this->fields.performance;
  if ( !v112 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_89;
  v113 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v112, v113, CurrentGroundType, 0, 0LL);
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
  System_Object_array *v16; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v18; // x19
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x19
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_object__bool__o *v39; // x23
  Il2CppObject *object; // x0
  const MethodInfo_35CE514 *v41; // x3
  BgmPlayArgs_o *v42; // x21
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Nullable_long__o v48; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v49; // 0:x1.8
  System_Nullable_float__o v50; // 0:x2.8
  System_Nullable_long__o v51; // 0:x0.16

  if ( (byte_49FEB64 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_BgmPlayArgs___, method);
    sub_1B640C8(&BgmManager_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1B640C8(&System_Func_BgmPlayArgs__bool__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_System_Nullable_long___ctor__, v10);
    sub_1B640C8(
      &Method_BattleSequenceManager___c__DisplayClass112_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
      v11);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass112_0_TypeInfo, v12);
    byte_49FEB64 = 1;
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
              (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v16 = v15,
            (v15 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                            this->fields.backupBgmPlayArgsGroup,
                                            0LL)) == 0LL) )
      {
        sub_1B64324(v15);
      }
      klass = v15->obj.klass;
      v18 = v15;
      v19 = *(unsigned __int16 *)(&v15->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v15->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BB60A8(v15, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v22 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v18, *(_QWORD *)(p_method + 8));
      if ( !v22 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v23 = *(_QWORD *)v22;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 4;
            if ( !v24 )
              goto LABEL_20;
          }
          v26 = v23 + 16LL * *v25 + 312;
        }
        else
        {
LABEL_20:
          v26 = sub_1BB60A8(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
          break;
        v29 = sub_1B64314(BattleSequenceManager___c__DisplayClass112_0_TypeInfo, v27, v28);
        System_Object___ctor((Il2CppObject *)v29, 0LL);
        v30 = *(_QWORD *)v22;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
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
          v33 = sub_1BB60A8(v22, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v22, *(_QWORD *)(v33 + 8));
        if ( !v29 )
          sub_1B64324(v34);
        *(_QWORD *)(v29 + 16) = v34;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), v34, v35, v36);
        v39 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BgmPlayArgs__bool__TypeInfo, v37, v38);
        System_Func_object__bool____ctor(
          v39,
          (Il2CppObject *)v29,
          Method_BattleSequenceManager___c__DisplayClass112_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v16,
                   (System_Func_T__bool__o *)v39,
                   (const MethodInfo_2E2543C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v51.fields.value = (int64_t)object[2].klass;
        else
          v51.fields.value = 0LL;
        v42 = *(BgmPlayArgs_o **)(v29 + 16);
        *(_QWORD *)&v48.fields.hasValue = 0LL;
        v48.fields.value = 0LL;
        *(_QWORD *)&v51.fields.hasValue = &v48;
        System_Nullable_long____ctor(v51, Method_System_Nullable_long___ctor__, v41);
        if ( !v42 )
          sub_1B64324(v43);
        v49 = 0LL;
        v50 = 0LL;
        BgmPlayArgs__Update(v42, v49, v50, v48, 0LL);
      }
      v44 = *(_QWORD *)v22;
      v45 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_39;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_39:
        v47 = sub_1BB60A8(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v47)(v22, *(_QWORD *)(v47 + 8));
    }
  }
}


void __fastcall BattleSequenceManager__PrevPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0

  if ( (byte_49FEB60 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, actor);
    byte_49FEB60 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1B64324(v4);
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
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v18; // x1
  Il2CppClass **v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FEB65 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleSequenceManager__ReleaseCpk_b__113_0__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_9462/*"NoblePhantasm_"*/, v7);
    byte_49FEB65 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v30 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v12 = System_Int32__ToString((int32_t)&v30, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_61375396(
                                            (System_String_o *)StringLiteral_9462/*"NoblePhantasm_"*/,
                                            v12,
                                            0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v16 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v18 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__113_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v26 = DelayInvokeMethodList->fields._items,
        v27 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v26) )
  {
LABEL_17:
    sub_1B64324(Instance);
  }
  v28 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v28 >= v26->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v23,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    DelayInvokeMethodList->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v23, v24, v25);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.fixedVoice = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.intactBgmList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEB63 & 1) == 0 )
  {
    sub_1B640C8(&BgmManager_TypeInfo, method);
    byte_49FEB63 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
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
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x10
  UnityEngine_GameObject_o *v14; // x20
  System_String_o **v15; // x8
  __int64 v16; // x9
  __int64 v17; // x25
  System_String_o *v18; // x21
  unsigned __int64 v19; // x26
  unsigned int v20; // w8
  UnityEngine_GameObject_o *v21; // x23
  UnityEngine_Object_o *v22; // x22
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *v24; // x23
  int v25; // s0
  struct BattlePerformance_o *v28; // x8
  UnityEngine_Object_o *PartsActor; // x23
  float y; // s8
  UnityEngine_Transform_o *transform; // x23
  unsigned int v32; // s9
  int v33; // s2
  unsigned int v34; // s0
  float v35; // s1
  struct BattlePerformance_o *v36; // x8
  struct BattleData_o *data; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FEB69 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    sub_1B640C8(&StringLiteral_9297/*"N_Enemy2"*/, v5);
    sub_1B640C8(&StringLiteral_9298/*"N_Player2"*/, v6);
    byte_49FEB69 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v14 = actor;
  v15 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9297/*"N_Enemy2"*/
                           : &StringLiteral_9298/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v16 = 336LL;
  if ( LOBYTE(actor[20].klass) )
    v16 = 344LL;
  v17 = *(__int64 *)((char *)&performance->klass + v16);
  if ( !v17 )
LABEL_55:
    sub_1B64324(actor);
  if ( (int)*(_QWORD *)(v17 + 24) >= 1 )
  {
    v18 = *v15;
    v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 24);
    do
    {
      if ( v19 >= v20 )
        sub_1B6432C(actor, v12);
      v21 = *(UnityEngine_GameObject_o **)(v17 + 32 + 8 * v19);
      v22 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v21, v22, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v18,
                                              0LL);
        if ( !v21 )
          goto LABEL_55;
        v23 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
        if ( !v23 )
          goto LABEL_55;
        v24 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_position(v23, 0LL);
        if ( !v24 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
        v28 = this->fields.performance;
        if ( !v28 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v28->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v14[20].klass) )
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
            v32 = (unsigned int)UnityEngine_Transform__get_position(v23, 0LL);
            *(UnityEngine_Vector3_o *)(&v33 - 2) = UnityEngine_Transform__get_position(v23, 0LL);
            if ( !transform )
              goto LABEL_55;
            v34 = v32;
            v35 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v33 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v21, 0, 0LL);
          v36 = this->fields.performance;
          if ( !v36 )
            goto LABEL_55;
          data = v36->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v14[20].klass) )
            UnityEngine_GameObject__SetActive(v21, 1, 0LL);
        }
      }
      v20 = *(_DWORD *)(v17 + 24);
      ++v19;
    }
    while ( (__int64)v19 < (int)v20 );
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
    sub_1B64324(0LL);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1B6406C(
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

  if ( (byte_49FEB75 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, isReset);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_49FEB75 = 1;
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
                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1B64324(battleTargetList);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.fixedVoice = voiceId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  struct System_String_array *BgmNameListWithIds; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FEB76 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_BgmMaster___, bgmIds);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FEB76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v8, v9);
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
  __int64 v11; // x1
  BattleSequenceManager_o *v12; // x19

  v4 = this;
  if ( (byte_49FEB67 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, targetActor);
    byte_49FEB67 = 1;
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
    sub_1B64324(this);
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
            v12 = this;
            if ( !byte_49F7111 )
            {
              this = (BattleSequenceManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v11);
              byte_49F7111 = 1;
            }
            if ( v12 )
            {
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)v12,
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

  if ( (byte_49FEB4E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___, isStart);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v6);
    byte_49FEB4E = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v9),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1B64324(actor);
  }
  v10 = 0;
  while ( v10 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v10,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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

  if ( (byte_49FEB4F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, fbx);
    sub_1B640C8(&StringLiteral_16539/*"_y0"*/, v6);
    byte_49FEB4F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v7 )
  {
    if ( !fbx )
      sub_1B64324(v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16539/*"_y0"*/, 0LL);
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
  __int64 v17; // x1
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v20; // x0
  BattleSequenceManager_o *v21; // x0
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *v23; // x21
  unsigned __int64 v24; // x8
  int v25; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FEB4D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, playerList);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_2235/*"Actors/Actor"*/, v8);
    byte_49FEB4D = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1B64324(seqObject);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v11 = 0LL;
  do
  {
    v12 = v11 + 1;
    v25 = v11 + 1;
    v13 = System_Int32__ToString((int32_t)&v25, 0LL);
    v14 = (BattleSequenceManager_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_2235/*"Actors/Actor"*/, v13, 0LL);
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
          sub_1B6432C(seqObject, v17);
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
    v25 = i + 4;
    v20 = System_Int32__ToString((int32_t)&v25, 0LL);
    v21 = (BattleSequenceManager_o *)System_String__Concat_61375396((System_String_o *)StringLiteral_2235/*"Actors/Actor"*/, v20, 0LL);
    v23 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v21,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v21,
                                    v22);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v24 = enemyList->max_length;
      if ( (__int64)i < (int)v24 )
      {
        if ( i >= v24 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v23 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v23,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
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
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  ServantStatusBattleListViewItem_o *v30; // x21
  __int64 v31; // x1
  int v32; // w8
  void *v33; // x25
  unsigned int v34; // w20
  __int64 v35; // x8
  int v36; // w8
  void *v37; // x25
  unsigned int v38; // w20
  __int64 v39; // x8
  __int64 v40; // x2
  int v41; // w8
  void *v42; // x25
  unsigned int v43; // w20
  __int64 v44; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v46; // x25
  int klass_low; // w28
  System_Collections_Generic_HashSet_int__o *v48; // x22
  int v49; // w29
  int i; // w24
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w21
  struct UnityEngine_GameObject_o *v58; // x21
  Il2CppObject *v59; // x23
  int32_t v60; // w2
  int32_t v61; // w3
  const MethodInfo *v62; // x2
  BattlePerformance_o *v63; // x0
  int32_t v64; // w20
  UnityEngine_Object_o *v65; // x21
  _BOOL8 v66; // x0
  Il2CppObject *v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x21
  const MethodInfo *v71; // x1
  BattlePerformance_o *v72; // x0
  __int64 ServantPosIndex; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  int v76; // w20
  int32_t v77; // w2
  int32_t v78; // w3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x8
  int v84; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v85; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FEB66 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleActionData_MoveToSubMember__TypeInfo, method);
    sub_1B640C8(&BattleSequenceManager_BattleTarget_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass115_0__SetupTargetInfo_b__0__, v17);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass115_0_TypeInfo, v18);
    byte_49FEB66 = 1;
  }
  memset(&j, 0, sizeof(j));
  v19 = sub_1B64314(BattleSequenceManager___c__DisplayClass115_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget, 0, v20, v21);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v27 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                           System_Collections_Generic_HashSet_int__TypeInfo,
                                                           v24,
                                                           v25);
      System_Collections_Generic_HashSet_int____ctor(
        v27,
        (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v19 )
      {
        *(_QWORD *)(v19 + 16) = v27;
        v30 = (ServantStatusBattleListViewItem_o *)(v19 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)v27, v28, v29);
        if ( monitor )
        {
          actor = BattleActionData__getDamageList(monitor, -1, 0LL);
          if ( actor )
          {
            v32 = *((_DWORD *)actor + 6);
            v33 = actor;
            if ( v32 >= 1 )
            {
              v34 = 0;
              while ( v34 < v32 )
              {
                v35 = *((_QWORD *)v33 + (int)v34 + 4);
                if ( !v35 )
                  goto LABEL_78;
                v31 = *(unsigned int *)(v35 + 28);
                if ( (_DWORD)v31 )
                {
                  actor = v30->klass;
                  if ( !v30->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v31,
                                    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v32 = *((_DWORD *)v33 + 6);
                if ( (int)++v34 >= v32 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1B6432C(actor, v31);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(monitor, -1, 0LL);
            if ( actor )
            {
              v36 = *((_DWORD *)actor + 6);
              v37 = actor;
              if ( v36 >= 1 )
              {
                v38 = 0;
                while ( v38 < v36 )
                {
                  v39 = *((_QWORD *)v37 + (int)v38 + 4);
                  if ( !v39 )
                    goto LABEL_78;
                  v31 = *(unsigned int *)(v39 + 40);
                  if ( (_DWORD)v31 )
                  {
                    actor = v30->klass;
                    if ( !v30->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v31,
                                      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v36 = *((_DWORD *)v37 + 6);
                  if ( (int)++v38 >= v36 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(monitor, -1, 0LL);
              if ( actor )
              {
                v41 = *((_DWORD *)actor + 6);
                v42 = actor;
                if ( v41 >= 1 )
                {
                  v43 = 0;
                  while ( v43 < v41 )
                  {
                    v44 = *((_QWORD *)v42 + (int)v43 + 4);
                    if ( !v44 )
                      goto LABEL_78;
                    v31 = *(unsigned int *)(v44 + 28);
                    if ( (_DWORD)v31 )
                    {
                      actor = v30->klass;
                      if ( !v30->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v31,
                                        (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v41 = *((_DWORD *)v42 + 6);
                    if ( (int)++v43 >= v41 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v46 = (System_Action_object__o *)sub_1B64314(
                                                     System_Action_BattleActionData_MoveToSubMember__TypeInfo,
                                                     v31,
                                                     v40);
                  System_Action_object____ctor(
                    v46,
                    (Il2CppObject *)v19,
                    Method_BattleSequenceManager___c__DisplayClass115_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v46,
                    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v48 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                                     System_Collections_Generic_HashSet_int__TypeInfo,
                                                                     v31,
                                                                     v40);
                System_Collections_Generic_HashSet_int____ctor(
                  v48,
                  (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v30->klass;
                if ( v30->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v85,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v84 = 0;
                  j = v85;
                  v49 = 0;
LABEL_41:
                  for ( i = v49; ; ++i )
                  {
                    v49 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1B64324(0LL);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1B64324(0LL);
                    v54 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v54 )
                      sub_1B64324(0LL);
                    if ( (klass_low != 0) == (LOBYTE(v54[30].klass) != 0) )
                    {
                      ++v84;
                      goto LABEL_41;
                    }
                    if ( !v48 )
                      sub_1B64324(v54);
                    System_Collections_Generic_HashSet_int___Add(
                      v48,
                      current,
                      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v84 && i == 1 )
                  {
                    v30->klass = (ServantStatusBattleListViewItem_c *)v48;
                    sub_1B6406C(v30, (int32_t)v48, v55, v56);
                  }
                  actor = v30->klass;
                  if ( v30->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v85,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v57 = -1;
                      for ( j = v85;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v57 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v57, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v58 = (struct UnityEngine_GameObject_o *)actor;
                      v59 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v58;
                      sub_1B6406C(
                        (ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget,
                        (int32_t)v58,
                        v60,
                        v61);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v59, v62);
                    }
                    if ( v48 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v85,
                        v48,
                        (const MethodInfo_3364534 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v85;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_3225D7C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v63 = this->fields.performance;
                        if ( !v63 )
                          sub_1B64324(0LL);
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
                            sub_1B64324(v66);
                          v67 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v65,
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v70 = sub_1B64314(BattleSequenceManager_BattleTarget_TypeInfo, v68, v69);
                          BattleSequenceManager_BattleTarget___ctor((BattleSequenceManager_BattleTarget_o *)v70, v71);
                          v72 = this->fields.performance;
                          if ( !v72 )
                            sub_1B64324(0LL);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v72, v64, 0LL);
                          if ( !v70 )
                            sub_1B64324(ServantPosIndex);
                          v76 = ServantPosIndex;
                          *(_QWORD *)(v70 + 24) = v67;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v70 + 24), (int32_t)v67, v74, v75);
                          *(_DWORD *)(v70 + 60) = v76;
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1B64324(0LL);
                          items = battleTargetList->fields._items;
                          v81 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1B64324(battleTargetList);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v70,
                              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v83 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v83[4] = (Il2CppClass *)v70;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 4), v70, v77, v78);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_3225D78 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1B64324(actor);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B64324(0LL);
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
  if ( (byte_49FEB5C & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, isFullScreen);
    byte_49FEB5C = 1;
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
    sub_1B64324(this);
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
  Il2CppObject *v34; // x1
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v38; // x8

  v6 = this;
  if ( (byte_49FEB6B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___, tlcont);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Object__Add__, v8);
    this = (BattleSequenceManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FEB6B = 1;
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
    if ( !tlcont )
      goto LABEL_43;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)tlcont,
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
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
        WellFired_USTimelineContainer__set_AffectedObject(tlcont, transform, 0LL);
        npEndDeleteObjects = (System_Collections_Generic_List_object__o *)v6->fields.npEndDeleteObjects;
        this = (BattleSequenceManager_o *)WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
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
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v27;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
        }
        v29 = 0;
      }
      else
      {
        v29 = 1;
      }
      v30 = WellFired_USTimelineContainer__get_AffectedObject(tlcont, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_object_(
                                          v30,
                                          (const MethodInfo_2E24484 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v31 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v29 )
      {
        v34 = (Il2CppObject *)v31;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v35 = *(_QWORD *)&this->fields.m_CachedPtr;
        v36 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v35 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v34,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = v35 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v38 + 32) = v34;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)v34, v32, v33);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tlcont, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1B64324(this);
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
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v13; // x0
  UnityEngine_Object_o *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  System_Collections_ICollection_o *Components_object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v18; // x1
  void *v19; // x8
  unsigned __int64 v20; // x26
  NoblePhantasmTargetOverwriteTransform_o *v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FEB7B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      isOverwrite);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FEB7B = 1;
  }
  memset(&v23, 0, sizeof(v23));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      battleTargetList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v11 )
        break;
      if ( !v23.fields._current )
        sub_1B64324(v11);
      monitor = (UnityEngine_Object_o *)v23.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v13 )
      {
        if ( !monitor )
          sub_1B64324(v13);
        v14 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
        {
          v15 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v15 )
            sub_1B64324(0LL);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v15,
                                                                    (const MethodInfo_2E88834 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1B64324(IsNullOrEmpty);
            v19 = Components_object[1].monitor;
            if ( (int)v19 >= 1 )
            {
              v20 = 0LL;
              do
              {
                if ( v20 >= (unsigned int)v19 )
                  sub_1B6432C(IsNullOrEmpty, v18);
                v21 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v20);
                if ( isOverwrite )
                {
                  if ( !v21 )
                    sub_1B64324(0LL);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v21, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v21 )
                    sub_1B64324(0LL);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v21, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v19) = Components_object[1].monitor;
                ++v20;
              }
              while ( (__int64)v20 < (int)v19 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1B64324(this);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1B6406C(
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
  float v8; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEB46 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Action__GetEnumerator__, v6);
    byte_49FEB46 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v8 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v8;
    if ( v8 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        DelayInvokeMethodList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v13.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v13.fields._current[1].monitor)(
            v13.fields._current[4].klass,
            v13.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v10 = this->fields.DelayInvokeMethodList;
      if ( !v10 )
LABEL_14:
        sub_1B64324(DelayInvokeMethodList);
      size = v10->fields._size;
      v12 = v10->fields._version + 1;
      v10->fields._size = 0;
      v10->fields._version = v12;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
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
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FEB5E & 1) == 0 )
  {
    sub_1B640C8(&BattleSequenceManager__WaitEndSequence_d__106_TypeInfo, method);
    byte_49FEB5E = 1;
  }
  v4 = sub_1B64314(BattleSequenceManager__WaitEndSequence_d__106_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  struct System_Collections_Generic_List_string__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FEB7F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__GetEnumerator__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v7);
    byte_49FEB7F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v15.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v15.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1B64324(0LL);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v11 = this->fields.ReleaseSoundNames;
  if ( !v11 )
LABEL_14:
    sub_1B64324(ReleaseSoundNames);
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0LL);
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

  if ( (byte_49FEB51 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16054/*"_"*/, voiceMaster);
    byte_49FEB51 = 1;
  }
  FlagRequestNumber = System_String__Concat_61375396((System_String_o *)StringLiteral_16054/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_42154684((BattleData_o *)FlagRequestNumber, chrId, v11, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B64324(FlagRequestNumber);
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
  if ( (byte_49FEB5A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&Method_BattleSequenceManager_OnBgChanged__, v19);
    byte_49FEB5A = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.BgChangedCallback, (int32_t)callback, tp, parentCamera);
  performance = this->fields.performance;
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1B64324(v24);
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

  if ( (byte_49FEB53 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16054/*"_"*/, voiceMaster);
    byte_49FEB53 = 1;
  }
  FlagRequestNumber = System_String__Concat_61375396((System_String_o *)StringLiteral_16054/*"_"*/, labelName, 0LL);
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
    sub_1B64324(FlagRequestNumber);
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
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_49FEB70 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, groupName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    byte_49FEB70 = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1B64324(playAudioSyncGroupIndexDict);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FEB72 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, method);
    byte_49FEB72 = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actor; // x20
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_49FEB42 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FEB42 = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_1B64324(0LL);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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

  if ( (byte_49FEB45 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__, v4);
    byte_49FEB45 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB5FA4(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB5FA4(v6);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return BYTE1(Instance[8].monitor) != 0;
}


bool __fastcall BattleSequenceManager__get_IsAccelerateMode(BattleSequenceManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  struct BattlePerformance_o *v5; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v8; // x8
  struct BattleData_o *v9; // x8

  if ( (byte_49FEB43 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FEB43 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( v4 )
    return 0;
  v5 = this->fields.performance;
  if ( !v5 )
    goto LABEL_14;
  data = (UnityEngine_Object_o *)v5->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v4 )
    return 0;
  v8 = this->fields.performance;
  if ( !v8 || (v9 = v8->fields.data) == 0LL )
LABEL_14:
    sub_1B64324(v4);
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
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v11; // x20
  struct BattlePerformance_o *v13; // x8

  if ( (byte_49FEB44 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FEB44 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_27;
  data = (UnityEngine_Object_o *)v6->fields.data;
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
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !Component_object )
    goto LABEL_27;
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_27;
  nowAction = v9->fields.nowAction;
  v11 = (BattleServantData_o *)*((_QWORD *)Component_object + 57);
  if ( nowAction && nowAction->fields.isForcedSpeedOne )
    return 0;
  if ( !v11 )
LABEL_27:
    sub_1B64324(Component_object);
  if ( BattleServantData__IsFixNpNormalSpeed(*((BattleServantData_o **)Component_object + 57), 0LL) )
    return 0;
  Component_object = (void *)BattleServantData__IsFixNpFastSpeed(v11, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
    return 1;
LABEL_22:
  v13 = this->fields.performance;
  if ( !v13 )
    goto LABEL_27;
  Component_object = v13->fields.data;
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
  int32_t v27; // w2
  int32_t v28; // w3
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_Dictionary_object__int__o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x1
  __int64 v45; // x2
  System_Collections_Generic_HashSet_T__o *v46; // x20
  int32_t v47; // w2
  int32_t v48; // w3

  if ( (byte_49FEB58 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, performance);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_HashSet_string__TypeInfo, v17);
    byte_49FEB58 = 1;
  }
  this->fields.performance = performance;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (int32_t)players);
  this->fields.actor = actor;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actor, (int32_t)actor, v18, v19);
  this->fields.playerActors = players;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playerActors, (int32_t)players, v20, v21);
  this->fields.enemyActors = enemies;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.enemyActors, (int32_t)enemies, v22, v23);
  this->fields.actorCamera = camera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actorCamera, (int32_t)camera, v24, v25);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v27, v28);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v31, v32);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1B64324(actorCamera);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v34, v35);
  this->fields.bgObject = bg;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgObject, (int32_t)bg, v36, v37);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v38);
  v41 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  v39,
                                                                  v40);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v41,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v41;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v41, v42, v43);
  v46 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v44,
                                                     v45);
  System_Collections_Generic_HashSet_object____ctor(
    v46,
    (const MethodInfo_3369DD0 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v46, v47, v48);
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
  if ( (byte_49FEB73 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, limitCounts);
    byte_49FEB73 = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_49FEB55 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_2231/*"Actor"*/, name);
    sub_1B640C8(&StringLiteral_16705/*"animCamLoc"*/, v4);
    byte_49FEB55 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2231/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16705/*"animCamLoc"*/, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  AssetLoader_LoadEndDataHandler_o *v33; // x19

  if ( (byte_49FEB47 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&chrId);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v18);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__0__, v19);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass74_0_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_9459/*"NoblePhantasm/CutIns"*/, v21);
    byte_49FEB47 = 1;
  }
  v22 = sub_1B64314(
          BattleSequenceManager___c__DisplayClass74_0_TypeInfo,
          *(_QWORD *)&chrId,
          *(_QWORD *)&treasureDeviceId);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v22 + 64) = onComplete;
  *(_DWORD *)(v22 + 24) = chrId;
  *(_DWORD *)(v22 + 28) = limitCount;
  *(_DWORD *)(v22 + 32) = treasureDeviceId;
  *(_DWORD *)(v22 + 36) = treasureDeviceLv;
  *(_DWORD *)(v22 + 40) = npChargeStage;
  *(_DWORD *)(v22 + 56) = overwriteSvtVoiceId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 64), (int32_t)onComplete, v26, v27);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v22 + 24);
  this->fields.limitCount = *(_DWORD *)(v22 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v22 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v22 + 56);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v22 + 48) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 48), (int32_t)Component_object, v29, v30);
  actor = *(UnityEngine_GameObject_o **)(v22 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v22 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v22 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1B64324(actor);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v22,
    Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9459/*"NoblePhantasm/CutIns"*/, v33, 1, 0LL);
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
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_bool__o *v52; // x24
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v54; // w2
  int32_t v55; // w3
  const MethodInfo *v56; // x1
  struct BattlePerformance_o *v57; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v59; // x8
  unsigned __int64 v60; // x27
  UnityEngine_Object_o *v61; // x25
  System_Collections_Generic_List_bool__o *v62; // x24
  struct System_Boolean_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  struct System_Boolean_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v70; // x2
  struct BattlePerformance_o *v71; // x8
  struct UnityEngine_GameObject_array *v72; // x27
  __int64 v73; // x8
  unsigned __int64 v74; // x28
  UnityEngine_Object_o *v75; // x24
  Il2CppObject *v76; // x0
  const MethodInfo *v77; // x2
  int32_t v78; // w2
  int32_t v79; // w3
  struct UnityEngine_GameObject_array *v80; // x8
  __int64 v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct BattlePerformance_o *v84; // x8
  struct UnityEngine_GameObject_array *v85; // x8
  __int64 v86; // x0
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  bool v94; // w1
  BattleSequenceManager_o *v95; // x25
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v100; // w2
  int32_t v101; // w3
  BattleSequenceManager_o *v102; // x22
  int32_t v103; // w2
  int32_t v104; // w3
  BattleSequenceManager_o *v105; // x23
  int32_t v106; // w2
  int32_t v107; // w3
  BattleSequenceManager_c *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  BattleSequenceManager_o *v111; // x23
  int32_t v112; // w2
  int32_t v113; // w3
  int32_t v114; // w2
  int32_t v115; // w3
  BattleSequenceManager_o *v116; // x23
  int32_t v117; // w2
  int32_t v118; // w3
  int32_t v119; // w2
  int32_t v120; // w3
  System_Collections_Hashtable_o *v121; // x0
  System_String_o *BgmName; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  const MethodInfo *v125; // x2
  __int64 v126; // x1
  __int64 v127; // x2
  BattleSequenceManager_o *v128; // x21
  ServantStatusBattleListViewItem_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v131; // x24
  System_Delegate_o *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_Delegate_o *v135; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v136; // x1
  int32_t v137; // w2
  int32_t v138; // w3
  const MethodInfo *v139; // x2
  __int64 v140; // x0
  System_Action_USSequencer__o *v141; // [xsp+8h] [xbp-78h]
  bool v142; // [xsp+10h] [xbp-70h]
  int v143; // [xsp+14h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+18h] [xbp-68h] BYREF
  int v145; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_49FEB5B & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__, isOpponent);
    sub_1B640C8(&BattleSequenceManager_TypeInfo, v8);
    sub_1B640C8(&CommonUI_TypeInfo, v9);
    sub_1B640C8(&FSUtility_TypeInfo, v10);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_bool___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_bool__TypeInfo, v17);
    sub_1B640C8(&object___TypeInfo, v18);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v19);
    sub_1B640C8(&WellFired_USSequencer_PlaybackDelegate_TypeInfo, v20);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v21);
    sub_1B640C8(&float_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v23);
    sub_1B640C8(&StringLiteral_12700/*"ShowNobleInfo"*/, v24);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v25);
    sub_1B640C8(&StringLiteral_9789/*"OnChangeBgmVolume"*/, v26);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v27);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v28);
    sub_1B640C8(&StringLiteral_3206/*"Battle2D"*/, v29);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v30);
    this = (BattleSequenceManager_o *)sub_1B640C8(&iTween_TypeInfo, v31);
    byte_49FEB5B = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_137;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_137;
  v34 = sub_1B64170(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->fields.saveWaitEnemy, v34, v36, v37);
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
        (System_String_o *)StringLiteral_12700/*"ShowNobleInfo"*/,
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
    v141 = callback;
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
    v52 = (System_Collections_Generic_List_bool__o *)sub_1B64314(
                                                       System_Collections_Generic_List_bool__TypeInfo,
                                                       v50,
                                                       v51);
    System_Collections_Generic_List_bool____ctor(
      v52,
      (const MethodInfo_3462AEC *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v52;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->fields.ActorActiveList, (int32_t)v52, v54, v55);
    v57 = v7->fields.performance;
    if ( !v57 )
      goto LABEL_137;
    p_actorlist = v57->fields.p_actorlist;
    v142 = isDemoMode;
    if ( !p_actorlist )
      goto LABEL_137;
    v59 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v59 >= 1 )
    {
      v60 = 0LL;
      while ( v60 < (unsigned int)v59 )
      {
        v61 = (UnityEngine_Object_o *)p_actorlist->m_Items[v60];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
        v62 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v61 )
            goto LABEL_137;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v61, 0LL);
          if ( !v62 )
            goto LABEL_137;
          items = v62->fields._items;
          v64 = Method_System_Collections_Generic_List_bool__Add__;
          ++v62->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v62->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v62,
              (unsigned __int8)this & 1,
              *(const MethodInfo_3463350 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v62->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v61,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)Component_object,
            (BattleActorControl_o *)Component_object,
            v70);
        }
        else
        {
          if ( !v62 )
            goto LABEL_137;
          v66 = v62->fields._items;
          v67 = Method_System_Collections_Generic_List_bool__Add__;
          ++v62->fields._version;
          if ( !v66 )
            goto LABEL_137;
          v68 = v62->fields._size;
          if ( (unsigned int)v68 >= v66->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v62,
              0,
              *(const MethodInfo_3463350 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v62->fields._size = v68 + 1;
            v66->m_Items[v68 + 4] = 0;
          }
        }
        LODWORD(v59) = p_actorlist->max_length;
        if ( (__int64)++v60 >= (int)v59 )
          goto LABEL_48;
      }
LABEL_138:
      sub_1B6432C(this, v56);
    }
LABEL_48:
    v71 = v7->fields.performance;
    if ( !v71 )
      goto LABEL_137;
    v72 = v71->fields.e_actorlist;
    if ( !v72 )
      goto LABEL_137;
    v73 = *(_QWORD *)&v72->max_length;
    if ( (int)v73 >= 1 )
    {
      v74 = 0LL;
      do
      {
        if ( v74 >= (unsigned int)v73 )
          goto LABEL_138;
        v75 = (UnityEngine_Object_o *)v72->m_Items[v74];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v75, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v75 )
            goto LABEL_137;
          v76 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v75,
                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)v76,
            (BattleActorControl_o *)v76,
            v77);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v75,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_137;
          this = (BattleSequenceManager_o *)this[1].fields.FadeTargetPanelIndexs;
          if ( !this )
            goto LABEL_137;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v80 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_137;
            if ( v74 >= v80->max_length )
              goto LABEL_138;
            v81 = (__int64)v80 + 8 * v74;
            *(_QWORD *)(v81 + 32) = v75;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 32), (int32_t)v75, v78, v79);
            v84 = v7->fields.performance;
            if ( !v84 )
              goto LABEL_137;
            v85 = v84->fields.e_actorlist;
            if ( !v85 )
              goto LABEL_137;
            if ( v74 >= v85->max_length )
              goto LABEL_138;
            v86 = (__int64)v85 + 8 * v74;
            *(_QWORD *)(v86 + 32) = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v86 + 32), 0, v82, v83);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v75, 0, 0LL);
            this = *p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_137;
            v87 = *(_QWORD *)&this->fields.m_CachedPtr;
            v88 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v87 )
              goto LABEL_137;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v87 + 24) )
            {
              v93 = v88[4];
              v94 = 1;
              goto LABEL_80;
            }
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v87 + m_CancellationTokenSource_low + 32) = 1;
          }
          else
          {
            v95 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v75,
                                                0LL);
            if ( !v95 )
              goto LABEL_137;
            v96 = *(_QWORD *)&v95->fields.m_CachedPtr;
            v97 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(v95->fields.m_CancellationTokenSource);
            if ( !v96 )
              goto LABEL_137;
            v98 = SLODWORD(v95->fields.m_CancellationTokenSource);
            if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
            {
              v93 = v97[4];
              v94 = (unsigned __int8)this & 1;
              this = v95;
              goto LABEL_80;
            }
            LODWORD(v95->fields.m_CancellationTokenSource) = v98 + 1;
            *(_BYTE *)(v96 + v98 + 32) = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_137;
          v90 = *(_QWORD *)&this->fields.m_CachedPtr;
          v91 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v90 )
            goto LABEL_137;
          v92 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
          {
            v93 = v91[4];
            v94 = 0;
LABEL_80:
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              v94,
              *(const MethodInfo_3463350 **)(*(_QWORD *)(v93 + 192) + 112LL));
            goto LABEL_81;
          }
          LODWORD(this->fields.m_CancellationTokenSource) = v92 + 1;
          *(_BYTE *)(v90 + v92 + 32) = 0;
        }
LABEL_81:
        LODWORD(v73) = v72->max_length;
      }
      while ( (__int64)++v74 < (int)v73 );
    }
    if ( !v142 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, v56);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, v56);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1B64170(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_137;
    v102 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19577/*"from"*/;
    if ( StringLiteral_19577/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1B64204(StringLiteral_19577/*"from"*/, v102->klass->_1.element_class);
      if ( !this )
        goto LABEL_139;
      v56 = (const MethodInfo *)StringLiteral_19577/*"from"*/;
    }
    else
    {
      v56 = 0LL;
    }
    if ( !LODWORD(v102->fields.m_CancellationTokenSource) )
      goto LABEL_138;
    v102->fields.sequenceManager = (struct UnityEngine_GameObject_o *)v56;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.sequenceManager, (int32_t)v56, v100, v101);
    v145 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v145);
    v105 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1B64204(this, v102->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_138;
      *(_QWORD *)&v102->fields.servantId = v105;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.servantId, (int32_t)v105, v103, v104);
      this = (BattleSequenceManager_o *)StringLiteral_23870/*"to"*/;
      if ( StringLiteral_23870/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1B64204(StringLiteral_23870/*"to"*/, v102->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
        v56 = (const MethodInfo *)StringLiteral_23870/*"to"*/;
      }
      else
      {
        v56 = 0LL;
      }
      if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_138;
      *(_QWORD *)&v102->fields.testNpPer = v56;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.testNpPer, (int32_t)v56, v106, v107);
      v108 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v108 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v108->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate);
      v111 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1B64204(this, v102->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_138;
        v102->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v111;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.FadeTargetPanelIndexs, (int32_t)v111, v109, v110);
        this = (BattleSequenceManager_o *)StringLiteral_23830/*"time"*/;
        if ( StringLiteral_23830/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1B64204(StringLiteral_23830/*"time"*/, v102->klass->_1.element_class);
          if ( !this )
            goto LABEL_139;
          v56 = (const MethodInfo *)StringLiteral_23830/*"time"*/;
        }
        else
        {
          v56 = 0LL;
        }
        if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_138;
        *(_QWORD *)&v102->fields.IsPlaying = v56;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.IsPlaying, (int32_t)v56, v112, v113);
        v143 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v143);
        v116 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1B64204(this, v102->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_138;
          v102->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v116;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.ReleaseSoundNames, (int32_t)v116, v114, v115);
          this = (BattleSequenceManager_o *)StringLiteral_22193/*"onupdate"*/;
          if ( StringLiteral_22193/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1B64204(StringLiteral_22193/*"onupdate"*/, v102->klass->_1.element_class);
            if ( !this )
              goto LABEL_139;
            v56 = (const MethodInfo *)StringLiteral_22193/*"onupdate"*/;
          }
          else
          {
            v56 = 0LL;
          }
          if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_138;
          v102->fields.performance = (struct BattlePerformance_o *)v56;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.performance, (int32_t)v56, v117, v118);
          this = (BattleSequenceManager_o *)StringLiteral_9789/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9789/*"OnChangeBgmVolume"*/ )
          {
            v56 = 0LL;
LABEL_120:
            if ( LODWORD(v102->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_138;
            v102->fields.seqObject = (struct UnityEngine_GameObject_o *)v56;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v102->fields.seqObject, (int32_t)v56, v119, v120);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v121 = iTween__Hash((System_Object_array *)v102, 0LL);
            iTween__ValueTo(gameObject, v121, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v123, v124);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v125);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v128 = this;
                    p_playerActors = (ServantStatusBattleListViewItem_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v131 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1B64314(
                                                                         WellFired_USSequencer_PlaybackDelegate_TypeInfo,
                                                                         v126,
                                                                         v127);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v131,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v132 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v131, 0LL);
                    v135 = v132;
                    if ( v132 )
                    {
                      v136 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v132->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v132;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v132->klass == v136 )
                          goto LABEL_132;
                      }
                      sub_1B645E4(v132);
                    }
                    p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v135;
LABEL_132:
                    sub_1B6406C(p_playerActors, (int32_t)v135, v133, v134);
                    v7->fields.OnCompleteActorCallback = v141;
                    sub_1B6406C(
                      (ServantStatusBattleListViewItem_o *)&v7->fields.OnCompleteActorCallback,
                      (int32_t)v141,
                      v137,
                      v138);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v128, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v139);
                    return;
                  }
                }
              }
            }
LABEL_137:
            sub_1B64324(this);
          }
          this = (BattleSequenceManager_o *)sub_1B64204(StringLiteral_9789/*"OnChangeBgmVolume"*/, v102->klass->_1.element_class);
          if ( this )
          {
            v56 = (const MethodInfo *)StringLiteral_9789/*"OnChangeBgmVolume"*/;
            goto LABEL_120;
          }
        }
      }
    }
LABEL_139:
    v140 = sub_1B64348(this);
    sub_1B641F0(v140, 0LL);
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

  if ( (byte_49FEB74 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&Voice_TypeInfo, v6);
    byte_49FEB74 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                      sub_1B6432C(MasterData_object, v17);
                    BattleSequenceManager__addServantVoicePlayed(this, v19, this->fields.chrId, v15->m_Items[v24], v18);
                    LODWORD(v23) = v15->max_length;
                    ++v24;
                  }
                  while ( (__int64)v24 < (int)v23 );
                }
                return;
              }
LABEL_31:
              sub_1B64324(actor);
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

  if ( (byte_49FEB52 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16054/*"_"*/, voiceMaster);
    byte_49FEB52 = 1;
  }
  FlagRequestNumber = System_String__Concat_61375396((System_String_o *)StringLiteral_16054/*"_"*/, labelName, 0LL);
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
    sub_1B64324(FlagRequestNumber);
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

  if ( (byte_49FEB6F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__,
      method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__, v6);
    byte_49FEB6F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    battleTargetList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B64324(0LL);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v12.fields._current,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v9 = this->fields.battleTargetList;
  if ( !v9 )
LABEL_13:
    sub_1B64324(battleTargetList);
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

  if ( (byte_49FEB56 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, *(_QWORD *)&tdId);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_3197/*"Battle/Prefab/"*/, v13);
    byte_49FEB56 = 1;
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
                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v17 = System_String__Concat_61375396((System_String_o *)StringLiteral_3197/*"Battle/Prefab/"*/, name, 0LL);
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
                                         (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  WellFired_USTimelineContainer_o *v23; // x21
  System_String_o *monitor; // x22
  System_String_o *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FEB57 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, seq);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v8);
    this = (BattleSequenceManager_o *)sub_1B640C8(&StringLiteral_1124/*"/"*/, v9);
    byte_49FEB57 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_17;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_17:
      v18 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v19);
LABEL_37:
      sub_1B64324(Component_object);
    }
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v25 = System_String__Concat_61375396((System_String_o *)StringLiteral_1124/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v25, 0LL) )
      goto LABEL_27;
  }
  v23 = 0LL;
LABEL_27:
  v26 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_32;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_32:
      v31 = sub_1BB60A8(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
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
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_49FEB71 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, groupName);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_string__Add__, v9);
    byte_49FEB71 = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1B64324(playAudioSyncGroupIndexDict);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_336AFB4 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 v86; // x1
  __int64 v87; // x2
  System_Collections_Generic_List_object__o *v88; // x21
  __int64 v89; // x1
  __int64 v90; // x2
  System_Collections_Generic_List_object__o *v91; // x29
  Il2CppObject *v92; // x22
  __int64 v93; // x1
  __int64 v94; // x2
  Il2CppObject *sequenceManager; // x23
  UnityEngine_Object_o *v96; // x23
  System_Collections_Generic_List_object__o *createdObjects; // x27
  int32_t v98; // w2
  int32_t v99; // w3
  struct System_Object_array *items; // x8
  _QWORD *v101; // x9
  __int64 size; // x10
  __int64 v103; // x1
  Il2CppClass **v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  struct UnityEngine_Camera_o *actorCamera; // x1
  __int64 v108; // x27
  struct UnityEngine_Camera_o *effectCamera; // x1
  int32_t v110; // w2
  int32_t v111; // w3
  struct UnityEngine_Camera_o *cutInCamera; // x1
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w2
  int32_t v116; // w3
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_o *fadeObject; // x1
  __int64 v119; // x1
  Il2CppObject *CutInPrefab; // x28
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v125; // x0
  ServantStatusBattleListViewItem_o *v126; // x27
  int32_t v127; // w2
  int32_t v128; // w3
  const MethodInfo *v129; // x1
  const MethodInfo *v130; // x2
  int v131; // w8
  __int64 v132; // x22
  int v133; // w24
  UnityEngine_Object_o *v134; // x27
  __int64 v135; // x8
  __int64 v136; // x26
  unsigned __int64 v137; // x25
  __int64 v138; // x28
  System_String_o *name; // x0
  int32_t v140; // w2
  int32_t v141; // w3
  UnityEngine_Object_c *klass; // x8
  int32_t gc_desc; // w27
  System_String_o *v144; // x0
  int32_t v145; // w2
  int32_t v146; // w3
  __int64 v147; // x10
  Il2CppObject *v148; // x1
  System_String_o *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  __int64 v152; // x9
  struct UnityEngine_Camera_o *v153; // x1
  UnityEngine_Transform_o *parent; // x0
  ServantStatusBattleListViewItem_o *v155; // x0
  int32_t treasureDeviceId; // w29
  int32_t limitCount; // w23
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x23
  int32_t v159; // w2
  int32_t v160; // w3
  System_Collections_Generic_List_object__o *v161; // x8
  struct System_Object_array *v162; // x9
  _QWORD *v163; // x10
  __int64 v164; // x11
  Il2CppClass **v165; // x0
  System_String_o *v166; // x0
  __int64 v167; // x9
  System_String_o **v168; // x29
  System_String_o *v169; // x0
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x0
  int32_t v173; // w2
  int32_t v174; // w3
  struct BattleActionData_AfterChangeField_o *changeFieldAfter; // x1
  int32_t v176; // w2
  int32_t v177; // w3
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  Il2CppClass **v181; // x0
  __int64 methodPtr_low; // x9
  struct UnityEngine_Camera_o *v183; // x1
  __int64 v184; // x28
  int32_t v185; // w2
  int32_t v186; // w3
  UnityEngine_Transform_o *v187; // x28
  int v188; // s0
  System_Collections_Generic_List_object__o *v191; // x25
  int32_t v192; // w2
  int32_t v193; // w3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  __int64 v196; // x10
  Il2CppClass **v197; // x0
  BattleSequenceManager_o *v198; // x0
  const MethodInfo *v199; // x3
  int32_t v200; // w2
  int32_t v201; // w3
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  __int64 v205; // x1
  Il2CppClass **v206; // x0
  Il2CppObject *current; // x24
  _BOOL8 v208; // x0
  void *ComponentsInChildren_object; // x0
  __int64 v210; // x1
  void *v211; // x24
  int v212; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v214; // x0
  _QWORD *v215; // x25
  __int64 v216; // x8
  unsigned __int64 v217; // x28
  __int64 v218; // x26
  System_String_o *v219; // x0
  __int64 v220; // x9
  _BOOL8 v221; // x0
  int32_t v222; // w2
  int32_t v223; // w3
  UnityEngine_Component_o *v224; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v226; // w2
  int32_t v227; // w3
  struct System_Object_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  Il2CppClass **v231; // x0
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v233; // w19
  System_Collections_IEnumerator_c *v234; // x8
  __int64 v235; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v238; // x8
  __int64 v239; // x9
  System_Collections_IEnumerator_c **v240; // x10
  __int64 v241; // x0
  UnityEngine_Component_o *v242; // x0
  __int64 v243; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v245; // x0
  Il2CppObject *v246; // x25
  System_String_o *monitor; // x0
  System_String_o *v248; // x0
  System_String_o *v249; // x0
  System_String_o *v250; // x0
  __int64 v251; // x0
  __int64 v252; // x8
  __int64 v253; // x24
  __int64 v254; // x9
  int *v255; // x10
  __int64 v256; // x0
  System_Collections_IEnumerator_c *v257; // x8
  __int64 v258; // x9
  int32_t *v259; // x10
  __int64 v260; // x0
  System_Collections_IEnumerator_c *v261; // x8
  __int64 v262; // x9
  System_Collections_IEnumerator_c **v263; // x10
  __int64 v264; // x0
  UnityEngine_Component_o *v265; // x0
  __int64 v266; // x9
  UnityEngine_GameObject_o *v267; // x0
  Il2CppObject *v268; // x0
  WellFired_USTimelineContainer_o *v269; // x24
  System_String_o *v270; // x0
  bool v271; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v273; // x27
  System_String_o *v274; // x0
  bool v275; // w28
  System_String_o *v276; // x0
  System_String_o *v277; // x0
  System_String_o *v278; // x0
  UnityEngine_Component_o *v279; // x0
  UnityEngine_Transform_o *v280; // x0
  System_String_o *v281; // x0
  UnityEngine_GameObject_o *actor; // x0
  UnityEngine_Transform_o *v283; // x25
  System_String_o *v284; // x0
  System_String_o *v285; // x0
  UnityEngine_Transform_o *v286; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  System_String_o *v288; // x0
  bool v289; // w0
  __int64 *v290; // x8
  System_String_o *v291; // x0
  bool v292; // w0
  System_String_o *v293; // x28
  UnityEngine_GameObject_o *v294; // x0
  System_String_o *v295; // x27
  UnityEngine_Transform_o *v296; // x0
  UnityEngine_Object_o *v297; // x25
  _BOOL8 v298; // x0
  System_Collections_IEnumerator_o *v299; // x26
  System_Collections_IEnumerator_c *v300; // x8
  __int64 v301; // x9
  int32_t *v302; // x10
  __int64 v303; // x0
  System_Collections_IEnumerator_c *v304; // x8
  __int64 v305; // x9
  System_Collections_IEnumerator_c **v306; // x10
  __int64 v307; // x0
  UnityEngine_Component_o *v308; // x0
  UnityEngine_Object_o *v309; // x25
  __int64 v310; // x9
  UnityEngine_Object_o *v311; // x0
  System_String_o *v312; // x0
  System_String_o *v313; // x0
  _BOOL8 v314; // x0
  const MethodInfo *v315; // x2
  int32_t v316; // w25
  System_String_o *v317; // x26
  __int64 v318; // x0
  __int64 v319; // x25
  __int64 v320; // x8
  __int64 v321; // x9
  int *v322; // x10
  __int64 v323; // x0
  System_String_o *v324; // x25
  System_String_o *v325; // x0
  System_String_o *v326; // x0
  System_String_array *v327; // x0
  __int64 v328; // x1
  System_String_o *v329; // x26
  UnityEngine_GameObject_o *v330; // x0
  UnityEngine_Transform_o *v331; // x25
  System_String_o *v332; // x0
  System_String_o *v333; // x0
  System_String_o *v334; // x0
  UnityEngine_Transform_o *v335; // x0
  Il2CppObject *v336; // x25
  System_Collections_Generic_List_object__o *v337; // x0
  _BOOL8 v338; // x0
  System_String_o *v339; // x0
  System_String_o *v340; // x1
  _BOOL8 v341; // x0
  BattleBuffData_o *v342; // x3
  const MethodInfo *v343; // x5
  UnityEngine_Object_c *v344; // x8
  int32_t v345; // w4
  int32_t v346; // w2
  int32_t v347; // w3
  System_Collections_Generic_List_object__o *v348; // x0
  struct System_Object_array *v349; // x8
  _QWORD *v350; // x9
  __int64 v351; // x10
  Il2CppClass **v352; // x8
  __int64 v353; // x0
  _BOOL8 IsNullOrEmpty; // x0
  UnityEngine_Transform_o *v355; // x0
  UnityEngine_Transform_o *v356; // x0
  float v357; // s8
  float v358; // s9
  float v359; // s10
  UnityEngine_Transform_o *v360; // x26
  UnityEngine_GameObject_o *CutInRoot; // x0
  UnityEngine_Transform_o *v362; // x0
  UnityEngine_Transform_o *v363; // x0
  BattleSequenceManager_o *v364; // x0
  const MethodInfo *v365; // x4
  int32_t v366; // w26
  UnityEngine_Transform_o *v367; // x0
  UnityEngine_Transform_o *v368; // x0
  System_String_o *v369; // x0
  System_String_o *v370; // x0
  System_String_o *v371; // x0
  const MethodInfo *v372; // x3
  int32_t v373; // w2
  const MethodInfo *v374; // x3
  System_Object_array *EventCount; // x0
  __int64 v376; // x1
  System_Object_array *v377; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v380; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v382; // x0
  Il2CppObject *v383; // x27
  System_String_o *v384; // x0
  __int64 v385; // x9
  _BOOL8 v386; // x0
  int32_t v387; // w2
  int32_t v388; // w3
  UnityEngine_Component_o *v389; // x0
  UnityEngine_Transform_o *v390; // x0
  int32_t v391; // w2
  int32_t v392; // w3
  struct System_Object_array *v393; // x8
  _QWORD *v394; // x9
  __int64 v395; // x10
  Il2CppClass **v396; // x0
  int32_t layer; // w26
  __int64 v398; // x22
  __int64 v399; // x8
  __int64 v400; // x23
  __int64 v401; // x9
  int *v402; // x10
  __int64 v403; // x0
  UnityEngine_Object_c *v404; // x8
  UnityEngine_Object_o *v405; // x21
  struct BattlePerformance_o *v406; // x8
  UnityEngine_Object_o *data; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v411; // x4
  int32_t v412; // w22
  System_String_o *v413; // x0
  const MethodInfo *v414; // x4
  UnityEngine_Object_c *v415; // x8
  int v416; // w20
  BalanceConfig_c *v417; // x0
  int32_t v418; // w20
  System_String_o *v419; // x0
  const MethodInfo *v420; // x4
  __int64 v421; // x0
  __int64 v422; // x22
  __int64 v423; // x8
  __int64 v424; // x9
  int *v425; // x10
  __int64 v426; // x0
  int v427; // w1
  int v428; // w19
  void *v429; // x0
  void *v430; // x25
  __int64 v431; // x0
  __int64 v432; // x19
  __int64 v433; // x8
  __int64 v434; // x9
  int *v435; // x10
  __int64 v436; // x0
  System_String_o *v437; // [xsp+8h] [xbp-138h]
  System_String_o *v438; // [xsp+10h] [xbp-130h]
  Il2CppObject *v439; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v440; // [xsp+20h] [xbp-120h]
  char v441; // [xsp+20h] [xbp-120h]
  UnityEngine_Object_o *v442; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *evs; // [xsp+30h] [xbp-110h]
  __int64 v444; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v445; // [xsp+38h] [xbp-108h]
  BattleSequenceManager_o *v446; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v447; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v450; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v451; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v453; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v455; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FEB50 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, callback);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___, v7);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_VoiceMaster___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__, v18);
    sub_1B640C8(&System_GC_TypeInfo, v19);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v20);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_USSequencer___, v21);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___, v22);
    sub_1B640C8(&System_IDisposable_TypeInfo, v23);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_USTimelineContainer__Add__, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__, v34);
    sub_1B640C8(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo, v35);
    sub_1B640C8(&System_Collections_Generic_List_USTimelineContainer__TypeInfo, v36);
    sub_1B640C8(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo, v37);
    sub_1B640C8(&NGUITools_TypeInfo, v38);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v39);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791920, v40);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v41);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v42);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v44);
    sub_1B640C8(&WellFired_USFGOAnimationCameraEvent_TypeInfo, v45);
    sub_1B640C8(&WellFired_USFGOAttachToParentEvent_TypeInfo, v46);
    sub_1B640C8(&WellFired_USFGOChangeBgEvent_TypeInfo, v47);
    sub_1B640C8(&WellFired_USFGOPlayCutInEvent_TypeInfo, v48);
    sub_1B640C8(&WellFired_USFGOSetCameraEvent_TypeInfo, v49);
    sub_1B640C8(&Voice_TypeInfo, v50);
    sub_1B640C8(&StringLiteral_1132/*"/Actor/chr/"*/, v51);
    sub_1B640C8(&StringLiteral_3208/*"BattleBG"*/, v52);
    sub_1B640C8(&StringLiteral_1142/*"/BattleActors/"*/, v53);
    sub_1B640C8(&StringLiteral_3210/*"BattleCamera"*/, v54);
    sub_1B640C8(&StringLiteral_3212/*"BattleCutIn"*/, v55);
    sub_1B640C8(&StringLiteral_14786/*"USFGOSetCameraEvent"*/, v56);
    sub_1B640C8(&StringLiteral_2231/*"Actor"*/, v57);
    sub_1B640C8(&StringLiteral_17289/*"body_level_"*/, v58);
    sub_1B640C8(&StringLiteral_1134/*"/Actor/chr/weapon_level_"*/, v59);
    sub_1B640C8(&StringLiteral_1133/*"/Actor/chr/body_level_"*/, v60);
    sub_1B640C8(&StringLiteral_6341/*"FGOSequenceManager"*/, v61);
    sub_1B640C8(&StringLiteral_1136/*"/AllEffects/"*/, v62);
    sub_1B640C8(&StringLiteral_17895/*"chr(Clone)"*/, v63);
    sub_1B640C8(&StringLiteral_3965/*"Cameras/BattleCamera"*/, v64);
    sub_1B640C8(&StringLiteral_14784/*"USFGOChangeBgEvent"*/, v65);
    sub_1B640C8(&StringLiteral_1154/*"/BattleCamera"*/, v66);
    sub_1B640C8(&StringLiteral_1157/*"/CutIns/"*/, v67);
    sub_1B640C8(&StringLiteral_3206/*"Battle2D"*/, v68);
    sub_1B640C8(&StringLiteral_1156/*"/Cameras/BattleCamera"*/, v69);
    sub_1B640C8(&StringLiteral_16705/*"animCamLoc"*/, v70);
    sub_1B640C8(&StringLiteral_24574/*"weapon_level_"*/, v71);
    sub_1B640C8(&StringLiteral_732/*"(Clone)"*/, v72);
    sub_1B640C8(&StringLiteral_14783/*"USFGOAttachToParentEvent"*/, v73);
    sub_1B640C8(&StringLiteral_1/*""*/, v74);
    sub_1B640C8(&StringLiteral_1131/*"/Actor/chr"*/, v75);
    sub_1B640C8(&StringLiteral_14782/*"USFGOAnimationCameraEvent"*/, v76);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v77);
    sub_1B640C8(&StringLiteral_14785/*"USFGOPlayCutInEvent"*/, v78);
    byte_49FEB50 = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v451, 0, sizeof(v451));
  memset(&v450, 0, sizeof(v450));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  v446 = this;
  if ( !seqObject )
    goto LABEL_426;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
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
          (System_String_o *)StringLiteral_6341/*"FGOSequenceManager"*/,
          v84);
  v88 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo,
                                                       v86,
                                                       v87);
  System_Collections_Generic_List_object____ctor(
    v88,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v91 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo,
                                                       v89,
                                                       v90);
  System_Collections_Generic_List_object____ctor(
    v91,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)this->fields.actor;
  if ( !seqObject )
    goto LABEL_426;
  v439 = (Il2CppObject *)v82;
  v440 = (UnityEngine_Component_o *)Component_object;
  v92 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)seqObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v442 = (UnityEngine_Object_o *)v92;
  evs = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v91;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v85, 0LL, 0LL) )
  {
    sequenceManager = (Il2CppObject *)this->fields.sequenceManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           sequenceManager,
                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_426;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    v96 = (UnityEngine_Object_o *)v92;
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
    v101 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++createdObjects->fields._version;
    if ( !items )
      goto LABEL_426;
    size = createdObjects->fields._size;
    v103 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        createdObjects,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
    }
    else
    {
      v104 = &items->obj.klass + size;
      createdObjects->fields._size = size + 1;
      v104[4] = (Il2CppClass *)v103;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v104 + 4), v103, v98, v99);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v85, 0LL);
    if ( !seqObject )
      goto LABEL_426;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_426;
    actorCamera = this->fields.actorCamera;
    v108 = seqObject;
    *(_QWORD *)(seqObject + 32) = actorCamera;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(seqObject + 32), (int32_t)actorCamera, v105, v106);
    effectCamera = this->fields.effectCamera;
    *(_QWORD *)(v108 + 40) = effectCamera;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 40), (int32_t)effectCamera, v110, v111);
    cutInCamera = this->fields.cutInCamera;
    *(_QWORD *)(v108 + 48) = cutInCamera;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 48), (int32_t)cutInCamera, v113, v114);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_426;
    fadeObject = performance->fields.fadeObject;
    *(_QWORD *)(v108 + 96) = fadeObject;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v108 + 96), (int32_t)fadeObject, v115, v116);
    CutInPrefab = (Il2CppObject *)this->fields.CutInPrefab;
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v119);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    if ( !byte_49F7117 )
    {
      sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v119);
      byte_49F7117 = 1;
    }
    v453.fields.x = x;
    v453.fields.y = y;
    v453.fields.z = z;
    v125 = UnityEngine_Object__Instantiate_object__49004284(
             CutInPrefab,
             v453,
             UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
             (const MethodInfo_2EBBEFC *)Method_UnityEngine_Object_Instantiate_GameObject____75791920);
    *(_QWORD *)(v108 + 72) = v125;
    v126 = (ServantStatusBattleListViewItem_o *)(v108 + 72);
    sub_1B6406C(v126, (int32_t)v125, v127, v128);
    seqObject = (__int64)v126->klass;
    if ( !v126->klass )
      goto LABEL_426;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !isDemoMode )
    {
      BattleSequenceManager__SetupTargetInfo(this, v129);
      BattleSequenceManager__SetShaderNoblePhantasmMode(this, 1, v130);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v85,
                           1,
                           (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_426;
    v131 = *(_DWORD *)(seqObject + 24);
    v132 = seqObject;
    if ( v131 >= 1 )
    {
      v133 = 0;
      v134 = 0LL;
      v444 = seqObject;
      while ( 1 )
      {
        if ( v133 >= (unsigned int)v131 )
LABEL_430:
          sub_1B6432C(seqObject, v93);
        seqObject = *(_QWORD *)(v132 + 8LL * v133 + 32);
        if ( !seqObject )
          goto LABEL_426;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_426;
        v135 = *(_QWORD *)(seqObject + 24);
        v136 = seqObject;
        if ( (int)v135 >= 1 )
          break;
LABEL_102:
        v132 = v444;
        ++v133;
        v131 = *(_DWORD *)(v444 + 24);
        if ( v133 >= v131 )
          goto LABEL_103;
      }
      v137 = 0LL;
      while ( 1 )
      {
        if ( v137 >= (unsigned int)v135 )
          goto LABEL_430;
        v138 = *(_QWORD *)(v136 + 32 + 8 * v137);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v138, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v138 )
            goto LABEL_426;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v138, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14782/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v134, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = UnityEngine_Object__op_Inequality(v96, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !v96 )
                  goto LABEL_426;
                klass = v96[19].klass;
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
                                                                   (System_String_o *)StringLiteral_16705/*"animCamLoc"*/,
                                                                   gc_desc,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v161 = (System_Collections_Generic_List_object__o *)this->fields.createdObjects;
              v91 = (System_Collections_Generic_List_object__o *)evs;
              if ( !v161
                || (v162 = v161->fields._items,
                    v96 = v442,
                    v163 = Method_System_Collections_Generic_List_GameObject__Add__,
                    ++v161->fields._version,
                    !v162) )
              {
LABEL_426:
                sub_1B64324(seqObject);
              }
              v164 = v161->fields._size;
              v134 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v164 >= v162->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v161,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
              }
              else
              {
                v165 = &v162->obj.klass + v164;
                v161->fields._size = v164 + 1;
                v165[4] = (Il2CppClass *)v134;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v165 + 4), (int32_t)v134, v159, v160);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v138 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v138 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
LABEL_431:
              sub_1B645E4(v138);
LABEL_432:
              sub_1B645E4(v242);
LABEL_433:
              sub_1B64324(v382);
            }
            *(_QWORD *)(v138 + 56) = v134;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v138 + 56), (int32_t)v134, v140, v141);
            v183 = this->fields.actorCamera;
            *(_QWORD *)(v138 + 64) = v183;
            v184 = v138 + 64;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)v184, (int32_t)v183, v185, v186);
            *(_BYTE *)(v184 + 28) = 0;
            if ( !v134 )
              goto LABEL_426;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v134, 0LL);
            if ( !this->fields.actor )
              goto LABEL_426;
            v187 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform(this->fields.actor, 0LL);
            if ( !seqObject )
              goto LABEL_426;
            *(UnityEngine_Vector3_o *)&v188 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v187 )
              goto LABEL_426;
            UnityEngine_Transform__set_position(v187, *(UnityEngine_Vector3_o *)&v188, 0LL);
          }
          else
          {
            v144 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v138, 0LL);
            seqObject = System_String__op_Equality(v144, (System_String_o *)StringLiteral_14785/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v91 )
                goto LABEL_426;
              v147 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v138 + 304LL) >= (unsigned int)v147 )
                v148 = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v138 + 200LL) + 8 * v147 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                     ? (Il2CppObject *)v138
                     : 0LL;
              else
                v148 = 0LL;
              v178 = v91->fields._items;
              v179 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v91->fields._version;
              if ( !v178 )
                goto LABEL_426;
              v180 = v91->fields._size;
              if ( (unsigned int)v180 >= v178->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v91,
                  v148,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
                goto LABEL_101;
              }
              v181 = &v178->obj.klass + v180;
              v91->fields._size = v180 + 1;
              v181[4] = (Il2CppClass *)v148;
              v155 = (ServantStatusBattleListViewItem_o *)(v181 + 4);
              goto LABEL_91;
            }
            v149 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v138, 0LL);
            if ( System_String__op_Equality(v149, (System_String_o *)StringLiteral_14786/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v152 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v138 + 304LL) < (unsigned int)v152
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v138 + 200LL) + 8 * v152 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_431;
              }
              v153 = this->fields.actorCamera;
              *(_QWORD *)(v138 + 56) = v153;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v138 + 56), (int32_t)v153, v150, v151);
              seqObject = (__int64)this->fields.actorCamera;
              if ( !seqObject )
                goto LABEL_426;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_426;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v138 + 64) = parent;
              LODWORD(v148) = (_DWORD)parent;
              v155 = (ServantStatusBattleListViewItem_o *)(v138 + 64);
LABEL_91:
              sub_1B6406C(v155, (int32_t)v148, v145, v146);
              goto LABEL_101;
            }
            v166 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v138, 0LL);
            seqObject = System_String__op_Equality(v166, (System_String_o *)StringLiteral_14784/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v167 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v138 + 304LL) < (unsigned int)v167
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v138 + 200LL) + 8 * v167 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
                goto LABEL_431;
              }
              v168 = (System_String_o **)(v138 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v138 + 64),
                     (System_String_o *)StringLiteral_1213/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v168, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_426;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v169 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v168 = v169;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v138 + 64), (int32_t)v169, v170, v171);
                seqObject = (__int64)this->fields.performance;
                if ( !seqObject )
                  goto LABEL_426;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v172 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v138 + 72) = v172;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v138 + 72), (int32_t)v172, v173, v174);
                changeFieldAfter = this->fields.changeFieldAfter;
                *(_QWORD *)(v138 + 136) = changeFieldAfter;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v138 + 136), (int32_t)changeFieldAfter, v176, v177);
              }
              v91 = (System_Collections_Generic_List_object__o *)evs;
            }
          }
        }
LABEL_101:
        LODWORD(v135) = *(_DWORD *)(v136 + 24);
        if ( (__int64)++v137 >= (int)v135 )
          goto LABEL_102;
      }
    }
  }
LABEL_103:
  v191 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_USTimelineContainer__TypeInfo,
                                                        v93,
                                                        v94);
  System_Collections_Generic_List_object____ctor(
    v191,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v191 )
    goto LABEL_426;
  v194 = v191->fields._items;
  v195 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v191->fields._version;
  if ( !v194 )
    goto LABEL_426;
  v196 = v191->fields._size;
  if ( (unsigned int)v196 >= v194->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v191,
      v439,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
  }
  else
  {
    v197 = &v194->obj.klass + v196;
    v191->fields._size = v196 + 1;
    v197[4] = (Il2CppClass *)v439;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v197 + 4), (int32_t)v439, v192, v193);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v198,
                         (WellFired_USSequencer_o *)v440,
                         (System_String_o *)StringLiteral_3965/*"Cameras/BattleCamera"*/,
                         v199);
  v202 = v191->fields._items;
  v203 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v191->fields._version;
  if ( !v202 )
    goto LABEL_426;
  v204 = v191->fields._size;
  v205 = seqObject;
  if ( (unsigned int)v204 >= v202->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v191,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
  }
  else
  {
    v206 = &v202->obj.klass + v204;
    v191->fields._size = v204 + 1;
    v206[4] = (Il2CppClass *)v205;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v206 + 4), v205, v200, v201);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v447,
    v191,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v451 = v447;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v451,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v451.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v208 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v208 )
    {
      if ( !current )
        sub_1B64324(v208);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v211 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1B64324(0LL);
      v212 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v212 >= 1 )
      {
        for ( i = 0; i < v212; ++i )
        {
          if ( i >= (unsigned int)v212 )
            sub_1B6432C(ComponentsInChildren_object, v210);
          v214 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v211 + i + 4);
          if ( !v214 )
            sub_1B64324(0LL);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v214, 0LL);
          v215 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1B64324(0LL);
          v216 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v216 >= 1 )
          {
            v217 = 0LL;
            do
            {
              if ( v217 >= (unsigned int)v216 )
                sub_1B6432C(ComponentsInChildren_object, v210);
              v218 = v215[v217 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v218,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v218 )
                  sub_1B64324(ComponentsInChildren_object);
                v219 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v218, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v219,
                                                        (System_String_o *)StringLiteral_14783/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v220 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v218 + 304LL) < (unsigned int)v220
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v218 + 200LL) + 8 * v220 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B645E4(v218);
LABEL_423:
                    sub_1B64324(v221);
                  }
                  v221 = System_String__op_Equality(
                           *(System_String_o **)(v218 + 80),
                           (System_String_o *)StringLiteral_3210/*"BattleCamera"*/,
                           0LL);
                  if ( v221 )
                  {
                    v224 = (UnityEngine_Component_o *)this->fields.actorCamera;
                    if ( !v224 )
                      sub_1B64324(0LL);
                    transform = UnityEngine_Component__get_transform(v224, 0LL);
                    *(_QWORD *)(v218 + 64) = transform;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v218 + 64), (int32_t)transform, v226, v227);
                  }
                  else
                  {
                    if ( !v88 )
                      goto LABEL_423;
                    v228 = v88->fields._items;
                    v229 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v88->fields._version;
                    if ( !v228 )
                      sub_1B64324(v221);
                    v230 = v88->fields._size;
                    if ( (unsigned int)v230 >= v228->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v88,
                        (Il2CppObject *)v218,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v231 = &v228->obj.klass + v230;
                      v88->fields._size = v230 + 1;
                      v231[4] = (Il2CppClass *)v218;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v231 + 4), v218, v222, v223);
                    }
                  }
                }
              }
              LODWORD(v216) = *((_DWORD *)v215 + 6);
              ++v217;
            }
            while ( (__int64)v217 < (int)v216 );
          }
          v212 = *((_DWORD *)v211 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v451,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)v440;
  if ( !v440 )
    goto LABEL_426;
  seqObject = (__int64)UnityEngine_Component__get_transform(v440, 0LL);
  if ( !seqObject )
    goto LABEL_426;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  v233 = 0;
  while ( 1 )
  {
    v234 = Enumerator->klass;
    v235 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v234->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v235;
        p_offset += 4;
        if ( !v235 )
          goto LABEL_153;
      }
      p_method = (__int64)&v234->vtable[*p_offset].method;
    }
    else
    {
LABEL_153:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v238 = Enumerator->klass;
    v239 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v240 = (System_Collections_IEnumerator_c **)&v238->_1.interfaceOffsets->offset;
      while ( *(v240 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v239;
        v240 += 2;
        if ( !v239 )
          goto LABEL_160;
      }
      v241 = (__int64)&v238->vtable[*(_DWORD *)v240 + 1].method;
    }
    else
    {
LABEL_160:
      v241 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v242 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v241)(
                                        Enumerator,
                                        *(_QWORD *)(v241 + 8));
    if ( !v242 )
      sub_1B64324(0LL);
    v243 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v242->klass->vtable._0_Equals.methodPtr) < (unsigned int)v243
      || (UnityEngine_Transform_c *)v242->klass->_2.typeHierarchy[v243 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_432;
    }
    gameObject = UnityEngine_Component__get_gameObject(v242, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    v245 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v246 = v245;
    if ( !v245 )
      goto LABEL_436;
    monitor = (System_String_o *)v245[2].monitor;
    if ( !monitor )
      sub_1B64324(0LL);
    if ( System_String__StartsWith(monitor, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL) && v246[2].monitor )
    {
      v248 = (System_String_o *)v246[2].monitor;
      if ( !v248 )
        sub_1B64324(0LL);
      if ( System_String__StartsWith(v248, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL) )
      {
        v249 = (System_String_o *)v246[2].monitor;
        if ( !v249 )
          sub_1B64324(0LL);
        v250 = System_String__Substring_61394392(v249, v249->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v233 += System_Int32__TryParse(v250, result, 0LL);
      }
    }
  }
  v251 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v251 )
  {
    v252 = *(_QWORD *)v251;
    v253 = v251;
    v254 = *(unsigned __int16 *)(*(_QWORD *)v251 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v251 + 302LL) )
    {
      v255 = (int *)(*(_QWORD *)(v252 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v255 - 1) != System_IDisposable_TypeInfo )
      {
        --v254;
        v255 += 4;
        if ( !v254 )
          goto LABEL_179;
      }
      v256 = v252 + 16LL * *v255 + 312;
    }
    else
    {
LABEL_179:
      v256 = sub_1BB60A8(v251, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v256)(v253, *(_QWORD *)(v256 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v440, 0LL);
  if ( !seqObject )
    goto LABEL_426;
  v445 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v445 )
    sub_1B64324(0LL);
  v441 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v257 = v445->klass;
          v258 = *(unsigned __int16 *)(&v445->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v445->klass->_2.bitflags2 + 3) )
          {
            v259 = &v257->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v259 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v258;
              v259 += 4;
              if ( !v258 )
                goto LABEL_189;
            }
            v260 = (__int64)&v257->vtable[*v259].method;
          }
          else
          {
LABEL_189:
            v260 = sub_1BB60A8(v445, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v260)(
                  v445,
                  *(_QWORD *)(v260 + 8)) & 1) == 0 )
          {
            v398 = 0LL;
            goto LABEL_374;
          }
          v261 = v445->klass;
          v262 = *(unsigned __int16 *)(&v445->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v445->klass->_2.bitflags2 + 3) )
          {
            v263 = (System_Collections_IEnumerator_c **)&v261->_1.interfaceOffsets->offset;
            while ( *(v263 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v262;
              v263 += 2;
              if ( !v262 )
                goto LABEL_196;
            }
            v264 = (__int64)&v261->vtable[*(_DWORD *)v263 + 1].method;
          }
          else
          {
LABEL_196:
            v264 = sub_1BB60A8(v445, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v265 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v264)(
                                              v445,
                                              *(_QWORD *)(v264 + 8));
          if ( !v265 )
            sub_1B64324(0LL);
          v266 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v265->klass->vtable._0_Equals.methodPtr) < (unsigned int)v266
            || (UnityEngine_Transform_c *)v265->klass->_2.typeHierarchy[v266 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_435:
            sub_1B645E4(v265);
LABEL_436:
            sub_1B64324(v245);
          }
          v267 = UnityEngine_Component__get_gameObject(v265, 0LL);
          if ( !v267 )
            sub_1B64324(0LL);
          v268 = UnityEngine_GameObject__GetComponent_object_(
                   v267,
                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v269 = (WellFired_USTimelineContainer_o *)v268;
          if ( !v268 )
            sub_1B64324(0LL);
          v270 = (System_String_o *)v268[2].monitor;
          if ( !v270 )
            sub_1B64324(0LL);
          v271 = System_String__StartsWith(v270, (System_String_o *)StringLiteral_1136/*"/AllEffects/"*/, 0LL);
          if ( v271 )
          {
            affectedObjectPath = v269->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1B64324(0LL);
            v273 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v273 = 0LL;
          }
          v274 = v269->fields.affectedObjectPath;
          if ( !v274 )
            sub_1B64324(0LL);
          v275 = System_String__StartsWith(v274, (System_String_o *)StringLiteral_1157/*"/CutIns/"*/, 0LL);
          if ( v275 )
          {
            v276 = v269->fields.affectedObjectPath;
            if ( !v276 )
              sub_1B64324(0LL);
            v273 = System_String__Substring(v276, 8, 0LL);
          }
          v277 = v269->fields.affectedObjectPath;
          if ( !v277 )
            sub_1B64324(0LL);
          if ( !System_String__StartsWith(v277, (System_String_o *)StringLiteral_1154/*"/BattleCamera"*/, 0LL) )
          {
            v278 = v269->fields.affectedObjectPath;
            if ( !v278 )
              sub_1B64324(0LL);
            if ( !System_String__StartsWith(v278, (System_String_o *)StringLiteral_1156/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v279 = (UnityEngine_Component_o *)v446->fields.actorCamera;
          if ( !v279 )
            sub_1B64324(0LL);
          v280 = UnityEngine_Component__get_transform(v279, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v269, v280, 0LL);
        }
        v281 = v269->fields.affectedObjectPath;
        if ( !v281 )
          sub_1B64324(0LL);
        if ( System_String__StartsWith(v281, (System_String_o *)StringLiteral_1131/*"/Actor/chr"*/, 0LL) )
          break;
        v313 = v269->fields.affectedObjectPath;
        if ( !v313 )
          sub_1B64324(0LL);
        v314 = System_String__StartsWith(v313, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL);
        if ( v314 )
          v273 = v269->fields.affectedObjectPath;
        if ( v273 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v314, v273, v315) )
            goto LABEL_334;
          if ( v271 )
          {
            v316 = System_String__IndexOf(v273, 0x2Fu, 0LL);
            if ( (v316 & 0x80000000) == 0 )
            {
              v317 = System_String__Substring(v273, v316 + 1, 0LL);
              v273 = System_String__Substring_61394392(v273, 0, v316, 0LL);
              goto LABEL_288;
            }
            if ( (v441 & 1) != 0 )
            {
              v317 = 0LL;
LABEL_288:
              v337 = (System_Collections_Generic_List_object__o *)v446->fields.createdObjects;
              if ( !v337 )
                sub_1B64324(0LL);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v447,
                v337,
                (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v438 = v317;
              v450 = v447;
              while ( 1 )
              {
                v338 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v450,
                         (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v338 )
                  break;
                v336 = v450.fields._current;
                if ( !v450.fields._current )
                  sub_1B64324(v338);
                v339 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v450.fields._current, 0LL);
                if ( !v339 )
                  sub_1B64324(0LL);
                v340 = System_String__Replace_61395016(
                         v339,
                         (System_String_o *)StringLiteral_732/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v273, v340, 0LL) )
                  goto LABEL_296;
              }
              v336 = 0LL;
LABEL_296:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v450,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v441 = 1;
              goto LABEL_298;
            }
            v317 = 0LL;
            v336 = 0LL;
            v441 = 0;
          }
          else
          {
            v317 = 0LL;
            v336 = 0LL;
          }
LABEL_298:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v336, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v341 = UnityEngine_Object__op_Inequality(v442, 0LL, 0LL);
            if ( v341 )
            {
              if ( !v442 )
                sub_1B64324(v341);
              v344 = v442[19].klass;
              if ( !v344 )
                sub_1B64324(v341);
              v345 = (int32_t)v344[2]._1.gc_desc;
            }
            else
            {
              v345 = 0;
            }
            v336 = (Il2CppObject *)BattleSequenceManager__searchPrefab(
                                     v446,
                                     v446->fields.treasureDeviceId,
                                     v273,
                                     v342,
                                     v345,
                                     v343);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v336, 0LL, 0LL) )
            {
              v348 = (System_Collections_Generic_List_object__o *)v446->fields.createdObjects;
              if ( !v348 )
                sub_1B64324(0LL);
              v349 = v348->fields._items;
              v350 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v348->fields._version;
              if ( !v349 )
                sub_1B64324(v348);
              v351 = v348->fields._size;
              if ( (unsigned int)v351 >= v349->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v348,
                  v336,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v350[4] + 192LL) + 112LL));
              }
              else
              {
                v352 = &v349->obj.klass + v351;
                v348->fields._size = v351 + 1;
                v352[4] = (Il2CppClass *)v336;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v352 + 4), (int32_t)v336, v346, v347);
              }
              if ( !v336 )
                sub_1B64324(v353);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v336, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v336, 0LL, 0LL) )
            goto LABEL_334;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v317, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v336 )
              sub_1B64324(IsNullOrEmpty);
            v367 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v336, 0LL);
            if ( !v367 )
              sub_1B64324(0LL);
            v368 = UnityEngine_Transform__Find(v367, v317, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v269, v368, 0LL);
            goto LABEL_334;
          }
          if ( !v336 )
            sub_1B64324(IsNullOrEmpty);
          v355 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v336, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v269, v355, 0LL);
          if ( v275 )
          {
            v356 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v336, 0LL);
            if ( !v356 )
              sub_1B64324(0LL);
            localPosition = UnityEngine_Transform__get_localPosition(v356, 0LL);
            v357 = localPosition.fields.x;
            v358 = localPosition.fields.y;
            v359 = localPosition.fields.z;
            v360 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v336, 0LL);
            CutInRoot = v446->fields.CutInRoot;
            if ( !CutInRoot )
              sub_1B64324(0LL);
            v362 = UnityEngine_GameObject__get_transform(CutInRoot, 0LL);
            if ( !v360 )
              sub_1B64324(v362);
            UnityEngine_Transform__set_parent(v360, v362, 0LL);
            v363 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v336, 0LL);
            if ( !v363 )
              sub_1B64324(0LL);
            v455.fields.x = v357;
            v455.fields.y = v358;
            v455.fields.z = v359;
            UnityEngine_Transform__set_localPosition(v363, v455, 0LL);
            BattleSequenceManager__updateCutInEvents(v364, evs, v273, (UnityEngine_GameObject_o *)v336, v365);
            v366 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3212/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v336, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3208/*"BattleBG"*/, 0LL) )
              goto LABEL_334;
            v366 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3206/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v336, v366, 0LL);
LABEL_334:
          v369 = v269->fields.affectedObjectPath;
          if ( !v369 )
            sub_1B64324(0LL);
          if ( System_String__StartsWith(v369, (System_String_o *)StringLiteral_1142/*"/BattleActors/"*/, 0LL) )
          {
            v370 = v269->fields.affectedObjectPath;
            if ( !v370 )
              sub_1B64324(0LL);
            v371 = System_String__Substring_61394392(v370, v370->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v371, &targetPosIndex, 0LL);
            v373 = --targetPosIndex;
            if ( v233 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach(v446, v269, v373, v372);
              BattleSequenceManager__SyncAttachedTargetPair(v446, v269, targetPosIndex, v374);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach(v446, v269, v373, v372);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v269,
                         1,
                         (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v377 = EventCount;
          if ( !EventCount )
            sub_1B64324(0LL);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1B6432C(EventCount, v376);
              v380 = (WellFired_USTimelineEvent_o *)v377->m_Items[j];
              if ( !v380 )
                sub_1B64324(EventCount);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v380, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v382 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v380, k, 0LL);
                v383 = (Il2CppObject *)v382;
                if ( !v382 )
                  goto LABEL_433;
                v384 = UnityEngine_Object__get_name(v382, 0LL);
                if ( System_String__op_Equality(v384, (System_String_o *)StringLiteral_14783/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v385 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v383->klass->vtable[0].methodPtr) < (unsigned int)v385
                    || (WellFired_USFGOAttachToParentEvent_c *)v383->klass->_2.typeHierarchy[v385 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B645E4(v383);
                    goto LABEL_435;
                  }
                  v386 = System_String__op_Equality(
                           (System_String_o *)v383[5].klass,
                           (System_String_o *)StringLiteral_3210/*"BattleCamera"*/,
                           0LL);
                  if ( v386 )
                  {
                    v389 = (UnityEngine_Component_o *)v446->fields.actorCamera;
                    if ( !v389 )
                      sub_1B64324(0LL);
                    v390 = UnityEngine_Component__get_transform(v389, 0LL);
                    v383[4].klass = (Il2CppClass *)v390;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v383[4], (int32_t)v390, v391, v392);
                  }
                  else
                  {
                    if ( !v88 )
                      sub_1B64324(v386);
                    v393 = v88->fields._items;
                    v394 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v88->fields._version;
                    if ( !v393 )
                      sub_1B64324(v386);
                    v395 = v88->fields._size;
                    if ( (unsigned int)v395 >= v393->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v88,
                        v383,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v394[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v396 = &v393->obj.klass + v395;
                      v88->fields._size = v395 + 1;
                      v396[4] = (Il2CppClass *)v383;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v396 + 4), (int32_t)v383, v387, v388);
                    }
                  }
                }
              }
              max_length = v377->max_length;
            }
          }
        }
      }
      actor = v446->fields.actor;
      if ( !actor )
        sub_1B64324(0LL);
      v283 = UnityEngine_GameObject__get_transform(actor, 0LL);
      v284 = v269->fields.affectedObjectPath;
      if ( !v284 )
        sub_1B64324(0LL);
      v285 = System_String__Replace_61395016(
               v284,
               (System_String_o *)StringLiteral_1131/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17895/*"chr(Clone)"*/,
               0LL);
      if ( !v283 )
        sub_1B64324(v285);
      v286 = UnityEngine_Transform__Find(v283, v285, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v269, v286, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v269, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v288 = v269->fields.affectedObjectPath;
        if ( !v288 )
          sub_1B64324(0LL);
        v289 = System_String__StartsWith(v288, (System_String_o *)StringLiteral_1133/*"/Actor/chr/body_level_"*/, 0LL);
        v290 = &StringLiteral_17289/*"body_level_"*/;
        if ( v289 )
          goto LABEL_230;
        v291 = v269->fields.affectedObjectPath;
        if ( !v291 )
          sub_1B64324(0LL);
        v292 = System_String__StartsWith(v291, (System_String_o *)StringLiteral_1134/*"/Actor/chr/weapon_level_"*/, 0LL);
        v290 = &StringLiteral_24574/*"weapon_level_"*/;
        if ( v292 )
        {
LABEL_230:
          v293 = (System_String_o *)*v290;
          if ( *v290 )
            break;
        }
      }
    }
    v294 = v446->fields.actor;
    if ( !v294 )
      sub_1B64324(0LL);
    v295 = (System_String_o *)StringLiteral_1/*""*/;
    v296 = UnityEngine_GameObject__get_transform(v294, 0LL);
    if ( !v296 )
      sub_1B64324(0LL);
    v297 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v296, (System_String_o *)StringLiteral_17895/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v298 = UnityEngine_Object__op_Inequality(v297, 0LL, 0LL);
    if ( v298 )
      break;
LABEL_275:
    v324 = v269->fields.affectedObjectPath;
    v325 = System_String__Concat_61375396((System_String_o *)StringLiteral_1132/*"/Actor/chr/"*/, v293, 0LL);
    if ( !v325 )
      sub_1B64324(0LL);
    if ( !v324 )
      sub_1B64324(v325);
    v326 = System_String__Substring(v324, v325->fields._stringLength, 0LL);
    if ( !v326 )
      sub_1B64324(0LL);
    v327 = System_String__Split(v326, 0x2Fu, 0, 0LL);
    if ( !v327 )
      sub_1B64324(0LL);
    if ( !v327->max_length )
      sub_1B6432C(v327, v328);
    v329 = System_String__Concat_61375396(v293, v327->m_Items[0], 0LL);
    v330 = v446->fields.actor;
    if ( !v330 )
      sub_1B64324(0LL);
    v331 = UnityEngine_GameObject__get_transform(v330, 0LL);
    v332 = v269->fields.affectedObjectPath;
    if ( !v332 )
      sub_1B64324(0LL);
    v333 = System_String__Replace_61395016(
             v332,
             (System_String_o *)StringLiteral_1131/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17895/*"chr(Clone)"*/,
             0LL);
    if ( !v333 )
      sub_1B64324(0LL);
    v334 = System_String__Replace_61395016(v333, v329, v295, 0LL);
    if ( !v331 )
      sub_1B64324(v334);
    v335 = UnityEngine_Transform__Find(v331, v334, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v269, v335, 0LL);
  }
  if ( !v297 )
    sub_1B64324(v298);
  v299 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v297, 0LL);
  if ( !v299 )
    sub_1B64324(0LL);
  while ( 2 )
  {
    v300 = v299->klass;
    v301 = *(unsigned __int16 *)(&v299->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v299->klass->_2.bitflags2 + 3) )
    {
      v302 = &v300->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v302 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v301;
        v302 += 4;
        if ( !v301 )
          goto LABEL_242;
      }
      v303 = (__int64)&v300->vtable[*v302].method;
    }
    else
    {
LABEL_242:
      v303 = sub_1BB60A8(v299, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v303)(v299, *(_QWORD *)(v303 + 8)) & 1) == 0 )
    {
      v437 = v295;
      v438 = 0LL;
      goto LABEL_267;
    }
    v304 = v299->klass;
    v305 = *(unsigned __int16 *)(&v299->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v299->klass->_2.bitflags2 + 3) )
    {
      v306 = (System_Collections_IEnumerator_c **)&v304->_1.interfaceOffsets->offset;
      while ( *(v306 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v305;
        v306 += 2;
        if ( !v305 )
          goto LABEL_249;
      }
      v307 = (__int64)&v304->vtable[*(_DWORD *)v306 + 1].method;
    }
    else
    {
LABEL_249:
      v307 = sub_1BB60A8(v299, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v308 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v307)(
                                        v299,
                                        *(_QWORD *)(v307 + 8));
    v309 = (UnityEngine_Object_o *)v308;
    if ( !v308 )
      sub_1B64324(0LL);
    v310 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v308->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v310
      && (UnityEngine_Transform_c *)v308->klass->_2.typeHierarchy[v310 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v311 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v308, 0LL);
      if ( !v311 )
        sub_1B64324(0LL);
      v312 = UnityEngine_Object__get_name(v311, 0LL);
      if ( !v312 )
        sub_1B64324(0LL);
      if ( !System_String__StartsWith(v312, v293, 0LL) )
        continue;
      v437 = UnityEngine_Object__get_name(v309, 0LL);
      v438 = 0LL;
LABEL_267:
      v318 = sub_1B64204(v299, System_IDisposable_TypeInfo);
      v295 = v437;
      v319 = v318;
      if ( v318 )
      {
        v320 = *(_QWORD *)v318;
        v321 = *(unsigned __int16 *)(*(_QWORD *)v318 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v318 + 302LL) )
        {
          v322 = (int *)(*(_QWORD *)(v320 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v322 - 1) != System_IDisposable_TypeInfo )
          {
            --v321;
            v322 += 4;
            if ( !v321 )
              goto LABEL_272;
          }
          v323 = v320 + 16LL * *v322 + 312;
        }
        else
        {
LABEL_272:
          v323 = sub_1BB60A8(v318, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v323)(v319, *(_QWORD *)(v323 + 8));
      }
      goto LABEL_275;
    }
    break;
  }
  sub_1B645E4(v308);
  v428 = v427;
  v430 = v429;
  v421 = sub_1B64204(v299, System_IDisposable_TypeInfo);
  v422 = v421;
  if ( v421 )
  {
    v423 = *(_QWORD *)v421;
    v424 = *(unsigned __int16 *)(*(_QWORD *)v421 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v421 + 302LL) )
    {
      v425 = (int *)(*(_QWORD *)(v423 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v425 - 1) != System_IDisposable_TypeInfo )
      {
        --v424;
        v425 += 4;
        if ( !v424 )
          goto LABEL_467;
      }
      v426 = v423 + 16LL * *v425 + 312;
    }
    else
    {
LABEL_467:
      v426 = sub_1BB60A8(v421, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v426)(v422, *(_QWORD *)(v426 + 8));
  }
  if ( v438 )
    sub_1B6431C(v438);
  if ( v428 != 1 )
  {
    v431 = sub_1B64204(v445, System_IDisposable_TypeInfo);
    v432 = v431;
    if ( v431 )
    {
      v433 = *(_QWORD *)v431;
      v434 = *(unsigned __int16 *)(*(_QWORD *)v431 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v431 + 302LL) )
      {
        v435 = (int *)(*(_QWORD *)(v433 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v435 - 1) != System_IDisposable_TypeInfo )
        {
          --v434;
          v435 += 4;
          if ( !v434 )
            goto LABEL_516;
        }
        v436 = v433 + 16LL * *v435 + 312;
      }
      else
      {
LABEL_516:
        v436 = sub_1BB60A8(v431, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v436)(v432, *(_QWORD *)(v436 + 8));
    }
    sub_1C4EB58();
  }
  v398 = *(_QWORD *)__cxa_begin_catch(v430);
  __cxa_end_catch();
LABEL_374:
  seqObject = sub_1B64204(v445, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v399 = *(_QWORD *)seqObject;
    v400 = seqObject;
    v401 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v402 = (int *)(*(_QWORD *)(v399 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v402 - 1) != System_IDisposable_TypeInfo )
      {
        --v401;
        v402 += 4;
        if ( !v401 )
          goto LABEL_379;
      }
      v403 = v399 + 16LL * *v402 + 312;
    }
    else
    {
LABEL_379:
      v403 = sub_1BB60A8(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v403)(v400, *(_QWORD *)(v403 + 8));
  }
  if ( v398 )
    sub_1B6431C(v398);
  if ( !v88 )
    goto LABEL_426;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v447,
    v88,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v447;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          v446->fields.performance,
          v446->fields.actor,
          v446->fields.createdObjects,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v442, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v442 )
      goto LABEL_426;
    if ( LOBYTE(v442[20].klass) )
      goto LABEL_417;
    v404 = v442[19].klass;
    if ( !v404 )
      goto LABEL_426;
    if ( !HIDWORD(v404->vtable._1_Finalize.methodPtr)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)v442, 0LL) )
    {
      v405 = (UnityEngine_Object_o *)v446->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v405, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v406 = v446->fields.performance;
        if ( !v406 )
          goto LABEL_426;
        data = (UnityEngine_Object_o *)v406->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_VoiceMaster___);
            v446->fields.isAlreadyRegistDefaultVoice = 0;
            chrId = v446->fields.chrId;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   v446,
                   (VoiceMaster_o *)MasterData_object,
                   chrId,
                   FileName,
                   v411) )
            {
              v446->fields.isAlreadyRegistDefaultVoice = 1;
            }
            v412 = v446->fields.chrId;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v413 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(v446, (VoiceMaster_o *)MasterData_object, v412, v413, v414);
            v415 = v442[19].klass;
            if ( v415 )
            {
              v416 = (int)v415[1].vtable._1_Finalize.method;
              v417 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v417 = BalanceConfig_TypeInfo;
              }
              if ( v416 == v417->static_fields->TreasureDeviceIdMashu3 )
              {
                v418 = v446->fields.chrId;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v419 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(v446, (VoiceMaster_o *)MasterData_object, v418, v419, v420);
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
  System_GC__Collect_62421456(0LL);
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
  const MethodInfo *v12; // x1

  if ( (byte_49FEB6A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, tlcont);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v7);
    byte_49FEB6A = 1;
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
                                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
                                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( battleTargetList )
          {
            battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                              (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                              v12);
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
    sub_1B64324(battleTargetList);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_49FEB6E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, tlcont);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__, v8);
    sub_1B640C8(&StringLiteral_14427/*"Tmp_Target"*/, v9);
    byte_49FEB6E = 1;
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
                                                                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
      if ( battleTargetList )
      {
        battleTargetList = (System_Collections_Generic_List_object__o *)BattleSequenceManager_BattleTarget__saveTransform(
                                                                          (BattleSequenceManager_BattleTarget_o *)battleTargetList,
                                                                          v11);
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
      sub_1B64324(battleTargetList);
    }
    v12 = (UnityEngine_GameObject_o *)sub_1B64314(UnityEngine_GameObject_TypeInfo, tlcont, *(_QWORD *)&targetIndex);
    UnityEngine_GameObject___ctor(v12, (System_String_o *)StringLiteral_14427/*"Tmp_Target"*/, 0LL);
    if ( !v12 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v12, 0LL);
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
  bool v12; // w21
  Il2CppObject *current; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int v16; // w19
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FEB54 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__, evs);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__, v9);
    this = (BattleSequenceManager_o *)sub_1B640C8(
                                        &Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__,
                                        v10);
    byte_49FEB54 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !evs )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v12 = v11;
    if ( !v11 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1B64324(v11);
    if ( System_String__op_Equality((System_String_o *)v18.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[3].monitor, (int32_t)obj, v14, v15);
      v16 = 4;
      goto LABEL_10;
    }
  }
  v16 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v12 && v16 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, method);
    byte_49F7117 = 1;
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
      sub_1B64324(targetActor);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, 0, v2, v3);
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
    sub_1B64324(targetActor);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, (int32_t)bac, index, (int32_t)method);
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
  __int64 v2; // x2
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
  if ( (byte_49FEB86 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__106_o *)sub_1B640C8(
                                                                &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                method);
    byte_49FEB86 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B64324(this);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B6406C(p__2__current, (int32_t)wait_5__2, v2, v3);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleSequenceManager__WaitEndSequence_d__106_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEB80 & 1) == 0 )
  {
    sub_1B640C8(&BattleSequenceManager___c_TypeInfo, v1);
    byte_49FEB80 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleSequenceManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return System_Single__CompareTo_62262836(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1B64324(this);
  return System_Single__CompareTo_62262836(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1B64324(this);
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
  if ( (byte_49FEB81 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass115_0_o *)sub_1B640C8(
                                                               &Method_System_Collections_Generic_HashSet_int__Add__,
                                                               x);
    byte_49FEB81 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass115_0_o *)v4->fields.targetList) == 0LL )
    sub_1B64324(this);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v13; // x1
  __int64 v14; // x2
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v16; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int32_t v22; // w2
  int32_t v23; // w3

  v4 = this;
  if ( (byte_49FEB82 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, data);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v5);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__1__, v6);
    sub_1B640C8(&StringLiteral_12874/*"StandardCutIn"*/, v7);
    this = (BattleSequenceManager___c__DisplayClass74_0_o *)sub_1B640C8(
                                                              &ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                              v8);
    byte_49FEB82 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass74_0_o *)AssetData__GetObject_object__48347676(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_12874/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v10, v11),
        (this = (BattleSequenceManager___c__DisplayClass74_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B64324(this);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v16 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1B64314(
                                                                    ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v13,
                                                                    v14);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass74_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v22, v23);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v16,
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  struct BattleActorControl_o *battleActor; // x8
  int32x2_t *battleSvtData; // x8
  struct BattleSequenceManager_o *v27; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x23
  struct BattleSequenceManager_o *v34; // x8
  struct BattleSequenceManager_o *v35; // x8
  _DWORD *v36; // x20
  __int64 v37; // x1
  int v38; // w8
  int v39; // w9
  __int64 v40; // x10
  struct BattleSequenceManager_o *v41; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FEB83 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, obj);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_1B640C8(&Method_System_Tuple_int__int__get_Item1__, v10);
    sub_1B640C8(&Method_System_Tuple_int__int__get_Item2__, v11);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__2__, v12);
    sub_1B640C8(&BattleSequenceManager___c__DisplayClass74_1_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_9462/*"NoblePhantasm_"*/, v14);
    byte_49FEB83 = 1;
  }
  v15 = sub_1B64314(BattleSequenceManager___c__DisplayClass74_1_TypeInfo, obj, paramsFromMstTDSeqWeight);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_29;
  *(_QWORD *)(v15 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v15 + 16) = obj;
  v19 = (__int64 *)(v15 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)obj, v20, v21);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_29;
  v24 = *v19;
  *((_QWORD *)_4__this + 11) = *v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)_4__this + 88), v24, v22, v23);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_29;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_29;
  battleSvtData = (int32x2_t *)battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_29;
  battleSvtData[93].n64_u64[0] = vmax_s32((int32x2_t)paramsFromMstTDSeqWeight->fields, 0LL).n64_u64[0];
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v27 = this->fields.__4__this;
    if ( !v27 )
      goto LABEL_29;
    overwriteSvtVoiceId = v27->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v29 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v30 = System_String__Concat_61375396((System_String_o *)StringLiteral_9462/*"NoblePhantasm_"*/, v29, 0LL);
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v15,
    Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_29;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v30, v33, 1, 0LL);
  v34 = this->fields.__4__this;
  if ( !v34 )
    goto LABEL_29;
  _4__this = v34->fields.seqObject;
  if ( !_4__this )
    goto LABEL_29;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_29;
  v36 = _4__this;
  v35->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v36 )
    goto LABEL_29;
  v38 = v36[6];
  if ( v38 < 1 )
    return;
  v39 = 0;
  while ( 1 )
  {
    if ( v38 == v39 )
      sub_1B6432C(_4__this, v37);
    v40 = *(_QWORD *)&v36[2 * v39 + 8];
    if ( !v40 )
      goto LABEL_29;
    if ( !*(_DWORD *)(v40 + 64) && *(_BYTE *)(v40 + 69) )
      break;
    if ( v38 == ++v39 )
      return;
  }
  v41 = this->fields.__4__this;
  if ( !v41 )
LABEL_29:
    sub_1B64324(_4__this);
  v41->fields.isNoDamageMotionInDamageNoble = 1;
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
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  int v12; // w8
  BattleSequenceManager___c__DisplayClass74_1_o *v13; // x21
  unsigned int v14; // w23
  int v15; // w24
  UnityEngine_Behaviour_o *v16; // x22
  struct BattleSequenceManager___c__DisplayClass74_0_o *v17; // x8
  BattleSequenceManager_o *v18; // x21
  System_Action_o *_9__3; // x23
  int32_t v20; // w2
  int32_t v21; // w3

  v2 = this;
  if ( (byte_49FEB84 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___, v3);
    sub_1B640C8(&Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__3__, v4);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FEB84 = 1;
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
  this = (BattleSequenceManager___c__DisplayClass74_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v12 = (int)this->fields.CS___8__locals1;
  v13 = this;
  if ( v12 >= 1 )
  {
    v14 = 0;
    v15 = 1;
    while ( 1 )
    {
      if ( v14 >= v12 )
        sub_1B6432C(this, v9);
      v16 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v13->fields.__9__4 + (int)v14);
      if ( !v16 )
        break;
      this = (BattleSequenceManager___c__DisplayClass74_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v16->klass[1]._2.typeHierarchy)(
                                                                v16,
                                                                v16->klass[1]._2.unity_user_data);
      if ( (v15 & (unsigned int)this & 1) != 0 )
      {
        v8 = *(System_String_o **)&v16[2].fields.m_CachedPtr;
        v15 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v16, 0, 0LL);
      }
      v12 = (int)v13->fields.CS___8__locals1;
      if ( (int)++v14 >= v12 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1B64324(this);
  }
LABEL_15:
  v17 = v2->fields.CS___8__locals1;
  if ( !v17 )
    goto LABEL_20;
  v18 = v17->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v20, v21);
  }
  if ( !v18 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v18, v8, _9__3, v11);
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
  __int64 v53; // x1
  __int64 v54; // x2
  struct BattleSequenceManager___c__DisplayClass74_0_o *v55; // x8
  struct BattleSequenceManager_o *v56; // x8
  UIStandFigureM_o *v57; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v62; // w2
  int32_t v63; // w3
  struct BattleSequenceManager___c__DisplayClass74_0_o *v64; // x8

  v2 = this;
  if ( (byte_49FEB85 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)sub_1B640C8(
                                                              &Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__4__,
                                                              v8);
    byte_49FEB85 = 1;
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
                                                            (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
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
                                                            (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
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
                                 (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
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
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->fields.standFigure, (int32_t)MeshLocal, v25, v26);
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
    v55 = v2->fields.CS___8__locals1;
    if ( !v55 )
      goto LABEL_73;
    v56 = v55->fields.__4__this;
    if ( !v56 )
      goto LABEL_73;
    v57 = v56->fields.standFigure;
    loadStandFigureId = v56->fields.loadStandFigureId;
    loadStandFigureLimitCount = v56->fields.loadStandFigureLimitCount;
    faceType = v56->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v53, v54);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass74_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v62, v63);
    }
    if ( !v57 )
LABEL_73:
      sub_1B64324(this);
    this = (BattleSequenceManager___c__DisplayClass74_1_o *)UIStandFigureM__SetCharacter_40622932(
                                                              v57,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v64 = v2->fields.CS___8__locals1;
      if ( v64 )
      {
        this = (BattleSequenceManager___c__DisplayClass74_1_o *)v64->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v64->fields.onComplete,
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AE9EC;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19AE9CC;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AE984;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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