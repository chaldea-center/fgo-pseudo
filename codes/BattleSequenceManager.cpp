void __fastcall BattleSequenceManager___cctor(const MethodInfo *method)
{
  struct BattleSequenceManager_StaticFields *static_fields; // x8

  if ( (byte_4A5D82A & 1) == 0 )
  {
    sub_1B885B0(&BattleSequenceManager_TypeInfo);
    byte_4A5D82A = 1;
  }
  static_fields = BattleSequenceManager_TypeInfo->static_fields;
  static_fields->defaultForceObi_16_9 = 1;
  static_fields->NoblePhantasmBgmVolumeRate = 0.5;
}


void __fastcall BattleSequenceManager___ctor(BattleSequenceManager_o *this, const MethodInfo *method)
{
  System_Array_o *v3; // x0
  struct BattlePerformance_BattleUIPanel_array *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_Dictionary_object__int__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_HashSet_T__o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  struct UnityEngine_GameObject_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  if ( (byte_4A5D829 & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformance_BattleUIPanel___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Object__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_Action__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
    sub_1B885B0(&Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C);
    sub_1B885B0(&StringLiteral_9341/*"N_{0}{1}"*/);
    byte_4A5D829 = 1;
  }
  this->fields.servantId = 100100;
  this->fields.testNpPer = 500;
  v3 = (System_Array_o *)sub_1B88658(BattlePerformance_BattleUIPanel___TypeInfo, 4LL);
  v34.fields.value = Field__PrivateImplementationDetails__0ABF8AC68111CEBD27676BF5EF5DD92A3FEE0C68C2FDAB9B259C4795F93C7A8C;
  v4 = (struct BattlePerformance_BattleUIPanel_array *)v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v3, v34, 0LL);
  this->fields.FadeTargetPanelIndexs = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FadeTargetPanelIndexs, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ReleaseSoundNames, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Action__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Action___ctor__);
  this->fields.DelayInvokeMethodList = (struct System_Collections_Generic_List_Action__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.DelayInvokeMethodList, (int32_t)v10, v11, v12);
  v13 = StringLiteral_9341/*"N_{0}{1}"*/;
  this->fields.PosNodeFormatNP = (struct System_String_o *)StringLiteral_9341/*"N_{0}{1}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.PosNodeFormatNP, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Object__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Object___ctor__);
  this->fields.npEndDeleteObjects = (struct System_Collections_Generic_List_Object__o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.npEndDeleteObjects, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget___ctor__);
  this->fields.battleTargetList = (struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleTargetList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.createdObjects = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.createdObjects, (int32_t)v22, v23, v24);
  v25 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v25,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v25, v26, v27);
  v28 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v28,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v28, v29, v30);
  this->fields.nowTargetAlpha = 1.0;
  v31 = (struct UnityEngine_GameObject_array *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 3LL);
  this->fields.saveWaitEnemy = v31;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.saveWaitEnemy, (int32_t)v31, v32, v33);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_BattleSequenceManager___ctor__);
}


void __fastcall BattleSequenceManager__AfterPlayTargetActorProc(
        BattleSequenceManager_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5D80D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5D80D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !actor )
      sub_1B8880C(v5, v6);
    BattleActorControl__RevertDefaultAnimation(actor, 0LL);
    BattleActorControl__playAnimation_43649396(actor, (System_String_o *)StringLiteral_24600/*"wait"*/, 0, 0LL);
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

  if ( (byte_4A5D823 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_string___);
    byte_4A5D823 = 1;
  }
  if ( System_String__Equals_61716076(bgmName, this->fields.BackupBgmName, 0LL) )
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
              (const MethodInfo_2E99D08 *)Method_System_Linq_Enumerable_Contains_string___);
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
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(WellFired_USFGOPlayCutInBase_o *, BattleSequenceManager_o *, UnityEngine_GameObject_o *, void *, const MethodInfo *))baseCutInEvent->klass->vtable._19_InitPreLoadStandFigureData.method)(
    baseCutInEvent,
    this,
    obj,
    baseCutInEvent->klass[1]._1.image,
    method);
  return BattleSequenceManager__CreateCutInStandFigure_42844424(this, obj, onComplete, v8);
}


bool __fastcall BattleSequenceManager__CreateCutInStandFigure_42844424(
        BattleSequenceManager_o *this,
        UnityEngine_GameObject_o *obj,
        BattleSequenceManager_onGameObjectLoadComplete_o *onComplete,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v17; // x21
  struct UIStandFigureM_o *MeshLocal; // x0
  struct UIStandFigureM_o **p_standFigure; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *standFigure; // x22
  UnityEngine_Object_o *gameObject; // x22
  UIStandFigureM_o *v24; // x21
  int32_t loadStandFigureId; // w22
  int32_t loadStandFigureLimitCount; // w23
  int32_t faceType; // w19
  System_Action_o *v28; // x24

  if ( (byte_4A5D7F5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass82_0__CreateCutInStandFigure_b__0__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass82_0_TypeInfo);
    byte_4A5D7F5 = 1;
  }
  v7 = sub_1B887FC(BattleSequenceManager___c__DisplayClass82_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass82_0___ctor((BattleSequenceManager___c__DisplayClass82_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)obj, v12, v13);
  *(_QWORD *)(v7 + 32) = onComplete;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)onComplete, v14, v15);
  Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_16;
  v17 = (StandFigureManager_o *)Instance;
  Instance = (UnityEngine_Component_o *)performance->fields.root_field;
  if ( !Instance )
    goto LABEL_16;
  Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
  if ( !v17 )
    goto LABEL_16;
  MeshLocal = StandFigureManager__CreateMeshLocal(v17, (UnityEngine_GameObject_o *)Instance, 0LL);
  this->fields.standFigure = MeshLocal;
  p_standFigure = &this->fields.standFigure;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, (int32_t)MeshLocal, v20, v21);
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
          v24 = this->fields.standFigure;
          loadStandFigureId = this->fields.loadStandFigureId;
          loadStandFigureLimitCount = this->fields.loadStandFigureLimitCount;
          faceType = this->fields.faceType;
          v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v28,
            (Il2CppObject *)v7,
            Method_BattleSequenceManager___c__DisplayClass82_0__CreateCutInStandFigure_b__0__,
            0LL);
          if ( v24 )
            return UIStandFigureM__SetCharacter_40954688(
                     v24,
                     loadStandFigureId,
                     loadStandFigureLimitCount,
                     faceType,
                     v28,
                     1,
                     0LL);
        }
      }
    }
LABEL_16:
    sub_1B8880C(Instance, v9);
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
  int32_t v8; // w3
  _BOOL4 v9; // w21
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  _BOOL4 v13; // w22
  BattleActionData_AfterChangeField_o *changeFieldAfter; // x0
  struct System_String_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x23
  System_String_o *BgmName; // x0
  const MethodInfo *v20; // x3
  BgmPlayArgsGroup_o *v21; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  float v25; // s0
  int v26; // w28
  System_Nullable_float__o v27; // x21
  const MethodInfo_361AA4C *v28; // x3
  UnityEngine_GameObject_o *gameObject; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  System_Object_array *v32; // x20
  __int64 v33; // x0
  __int64 v34; // x1
  struct BattlePerformance_o *v35; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattlePerformance_o *v37; // x8
  struct BattlePerformance_o *v38; // x8
  System_String_o *v39; // x19
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  BattleSequenceManager_c *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  int32_t v52; // w2
  int32_t v53; // w3
  Il2CppObject *v54; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *v62; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  int32_t v66; // w3
  System_Collections_Hashtable_o *v67; // x0
  __int64 v68; // x0
  int v69; // [xsp+Ch] [xbp-A4h] BYREF
  System_Nullable_float__o v70; // [xsp+10h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+30h] [xbp-80h] BYREF
  BattleActionData_TreasureDvcAfterChangeBgm_o *changeBgm; // [xsp+58h] [xbp-58h] BYREF
  System_Nullable_float__o v74; // 0:x0.8
  System_Nullable_float__o v75; // 0:x1.8
  System_Nullable_float__o v76; // 0:x2.8
  System_Nullable_long__o v77; // 0:x0.16

  if ( (byte_4A5D80E & 1) == 0 )
  {
    sub_1B885B0(&BattleSequenceManager_TypeInfo);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_9834/*"OnChangeBgmVolume"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D80E = 1;
  }
  changeBgm = 0LL;
  memset(&v72, 0, sizeof(v72));
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_90;
  FieldEnvData = BattlePerformance__get_FieldEnvData((BattlePerformance_o *)performance, 0LL);
  v5 = FieldEnvData ? BattleFieldEnvironmentData__get_CurBGMName(FieldEnvData, 0LL) : 0LL;
  p_BackupBgmName = &this->fields.BackupBgmName;
  if ( BasicHelper__EqualExceptNullOrEmpty(v5, this->fields.BackupBgmName, 0LL) || this->fields.DemoMode )
  {
    v9 = 0;
  }
  else
  {
    *p_BackupBgmName = v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v5, (int32_t)v7, v8);
    v9 = 1;
  }
  if ( BattleSequenceManager__TryGetAfterChangeBgm(this, &changeBgm, v7) )
  {
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v10 = BattleActionData_TreasureDvcAfterChangeBgm__ReflectAfterChangeBgm(
            changeBgm,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v10, v11, v12);
    performance = (__int64)changeBgm;
    if ( !changeBgm )
      goto LABEL_90;
    v13 = BattleActionData_TreasureDvcAfterChangeBgm__get_IsBgmAllowSubPlaying(changeBgm, 0LL);
    v9 = 1;
  }
  else
  {
    v13 = 0;
  }
  changeFieldAfter = this->fields.changeFieldAfter;
  if ( changeFieldAfter )
  {
    v15 = BattleActionData_AfterChangeField__GetPriorityBgmName(
            changeFieldAfter,
            this->fields.performance,
            this->fields.BackupBgmName,
            0LL);
    this->fields.BackupBgmName = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BackupBgmName, (int32_t)v15, v16, v17);
    performance = (__int64)this->fields.changeFieldAfter;
    if ( !performance )
      goto LABEL_90;
    v13 = BattleActionData_AfterChangeField__get_IsBgmAllowSubPlaying(
            (BattleActionData_AfterChangeField_o *)performance,
            0LL);
    v9 = 1;
  }
  v18 = *p_BackupBgmName;
  performance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !performance )
LABEL_90:
    sub_1B8880C(performance, method);
  BgmName = BgmManager__get_BgmName((BgmManager_o *)performance, 0LL);
  if ( ((v13 | System_String__op_Inequality(v18, BgmName, 0LL)) & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    performance = sub_1B88658(object___TypeInfo, 8LL);
    if ( !performance )
      goto LABEL_90;
    v32 = (System_Object_array *)performance;
    v33 = StringLiteral_19656/*"from"*/;
    if ( StringLiteral_19656/*"from"*/ )
    {
      v33 = sub_1B886EC(StringLiteral_19656/*"from"*/, v32->obj.klass->_1.element_class);
      if ( !v33 )
        goto LABEL_92;
      v34 = StringLiteral_19656/*"from"*/;
    }
    else
    {
      v34 = 0LL;
    }
    if ( !v32->max_length )
      goto LABEL_91;
    v32->m_Items[0] = (Il2CppObject *)v34;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v32->m_Items, v34, v30, v31);
    v43 = BattleSequenceManager_TypeInfo;
    if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
      v43 = BattleSequenceManager_TypeInfo;
    }
    *(float *)&v71.fields._list = v43->static_fields->NoblePhantasmBgmVolumeRate;
    v33 = j_il2cpp_value_box_0(float_TypeInfo, &v71, v40, v41, v42);
    v46 = (Il2CppObject *)v33;
    if ( !v33 || (v33 = sub_1B886EC(v33, v32->obj.klass->_1.element_class)) != 0 )
    {
      if ( v32->max_length <= 1 )
        goto LABEL_91;
      v32->m_Items[1] = v46;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[1], (int32_t)v46, v44, v45);
      v33 = StringLiteral_23969/*"to"*/;
      if ( StringLiteral_23969/*"to"*/ )
      {
        v33 = sub_1B886EC(StringLiteral_23969/*"to"*/, v32->obj.klass->_1.element_class);
        if ( !v33 )
          goto LABEL_92;
        v34 = StringLiteral_23969/*"to"*/;
      }
      else
      {
        v34 = 0LL;
      }
      if ( v32->max_length <= 2 )
        goto LABEL_91;
      v32->m_Items[2] = (Il2CppObject *)v34;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[2], v34, v47, v48);
      *(_DWORD *)&v70.fields.hasValue = 1;
      v33 = j_il2cpp_value_box_0(int_TypeInfo, &v70, v49, v50, v51);
      v54 = (Il2CppObject *)v33;
      if ( !v33 || (v33 = sub_1B886EC(v33, v32->obj.klass->_1.element_class)) != 0 )
      {
        if ( v32->max_length <= 3 )
          goto LABEL_91;
        v32->m_Items[3] = v54;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[3], (int32_t)v54, v52, v53);
        v33 = StringLiteral_23929/*"time"*/;
        if ( StringLiteral_23929/*"time"*/ )
        {
          v33 = sub_1B886EC(StringLiteral_23929/*"time"*/, v32->obj.klass->_1.element_class);
          if ( !v33 )
            goto LABEL_92;
          v34 = StringLiteral_23929/*"time"*/;
        }
        else
        {
          v34 = 0LL;
        }
        if ( v32->max_length <= 4 )
          goto LABEL_91;
        v32->m_Items[4] = (Il2CppObject *)v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[4], v34, v55, v56);
        v69 = 1056964608;
        v33 = j_il2cpp_value_box_0(float_TypeInfo, &v69, v57, v58, v59);
        v62 = (Il2CppObject *)v33;
        if ( !v33 || (v33 = sub_1B886EC(v33, v32->obj.klass->_1.element_class)) != 0 )
        {
          if ( v32->max_length <= 5 )
            goto LABEL_91;
          v32->m_Items[5] = v62;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[5], (int32_t)v62, v60, v61);
          v33 = StringLiteral_22281/*"onupdate"*/;
          if ( StringLiteral_22281/*"onupdate"*/ )
          {
            v33 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v32->obj.klass->_1.element_class);
            if ( !v33 )
              goto LABEL_92;
            v34 = StringLiteral_22281/*"onupdate"*/;
          }
          else
          {
            v34 = 0LL;
          }
          if ( v32->max_length <= 6 )
            goto LABEL_91;
          v32->m_Items[6] = (Il2CppObject *)v34;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[6], v34, v63, v64);
          v33 = StringLiteral_9834/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9834/*"OnChangeBgmVolume"*/ )
          {
            v34 = 0LL;
LABEL_84:
            if ( v32->max_length > 7 )
            {
              v32->m_Items[7] = (Il2CppObject *)v34;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v32->m_Items[7], v34, v65, v66);
              if ( !iTween_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
              v67 = iTween__Hash(v32, 0LL);
              iTween__ValueTo(gameObject, v67, 0LL);
              return;
            }
LABEL_91:
            sub_1B88814(v33, v34);
          }
          v33 = sub_1B886EC(StringLiteral_9834/*"OnChangeBgmVolume"*/, v32->obj.klass->_1.element_class);
          if ( v33 )
          {
            v34 = StringLiteral_9834/*"OnChangeBgmVolume"*/;
            goto LABEL_84;
          }
        }
      }
    }
LABEL_92:
    v68 = sub_1B88830(v33);
    sub_1B886D8(v68, 0LL);
  }
  performance = BattleSequenceManager__ExistBackupBgmPlayGroup(this, v9, this->fields.BackupBgmName, v20);
  if ( (performance & 1) != 0 )
  {
    performance = (__int64)this->fields.backupBgmPlayArgsGroup;
    if ( performance )
    {
      performance = (__int64)BgmPlayArgsGroup__NullExcludedClone((BgmPlayArgsGroup_o *)performance, 0LL);
      if ( performance )
      {
        v21 = (BgmPlayArgsGroup_o *)performance;
        performance = *(_QWORD *)(performance + 16);
        if ( performance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v71,
            (System_Collections_Generic_List_object__o *)performance,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BgmPlayArgs__GetEnumerator__);
          v72 = v71;
          while ( 1 )
          {
            v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v72,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__MoveNext__);
            if ( !v22 )
              break;
            current = v72.fields._current;
            if ( !v72.fields._current )
              sub_1B8880C(v22, v23);
            v25 = (float)(__int64)v72.fields._current[2].klass + -800.0;
            if ( v25 == INFINITY )
              v26 = 0x80000000;
            else
              v26 = (int)v25;
            v70 = 0LL;
            v74 = (System_Nullable_float__o)&v70;
            System_Nullable_float____ctor(v74, 0.5, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
            v27 = v70;
            v77.fields.value = v26 & (unsigned int)~(v26 >> 31);
            *(_OWORD *)&v71.fields._list = 0uLL;
            *(_QWORD *)&v77.fields.hasValue = &v71;
            System_Nullable_long____ctor(v77, Method_System_Nullable_long___ctor__, v28);
            v75 = 0LL;
            v76 = v27;
            BgmPlayArgs__Update((BgmPlayArgs_o *)current, v75, v76, *(System_Nullable_long__o *)&v71.fields._list, 0LL);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v72,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BgmPlayArgs__Dispose__);
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          BgmManager__PlayBgm_38314408(v21, 0LL, 0LL);
          return;
        }
      }
    }
    goto LABEL_90;
  }
  if ( v9 )
  {
    v35 = this->fields.performance;
    if ( !v35 )
      goto LABEL_90;
    logic = (UnityEngine_Object_o *)v35->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    performance = UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    if ( (performance & 1) != 0 )
    {
      v37 = this->fields.performance;
      if ( v37 )
      {
        performance = (__int64)v37->fields.logic;
        if ( performance )
        {
          BattleLogic__loadBgmName((BattleLogic_o *)performance, 0LL, 0LL);
          v38 = this->fields.performance;
          if ( v38 )
          {
            performance = (__int64)v38->fields.logic;
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
  v39 = *p_BackupBgmName;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(v39, 0LL);
}


bool __fastcall BattleSequenceManager__ExistBackupBgmPlayGroup(
        BattleSequenceManager_o *this,
        bool isCheckExistBgm,
        System_String_o *checkBgmName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  BgmPlayArgsGroup_o *backupBgmPlayArgsGroup; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4A5D825 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
    sub_1B885B0(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass145_0__ExistBackupBgmPlayGroup_b__0__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass145_0_TypeInfo);
    byte_4A5D825 = 1;
  }
  v7 = sub_1B887FC(BattleSequenceManager___c__DisplayClass145_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass145_0___ctor((BattleSequenceManager___c__DisplayClass145_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = checkBgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)checkBgmName, v10, v11);
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( !backupBgmPlayArgsGroup || !isCheckExistBgm )
    return backupBgmPlayArgsGroup != 0LL;
  v13 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BgmPlayArgs__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass145_0__ExistBackupBgmPlayGroup_b__0__,
    0LL);
  return System_Linq_Enumerable__Any_object__48820656(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_BgmPlayArgs___);
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
  if ( (byte_4A5D805 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D805 = 1;
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
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
  __int64 v6; // x22
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__49085148; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x21
  BattleSequenceManager___c_c *v12; // x0
  System_Comparison_T__o *_9__79_0; // x23
  Il2CppObject *v14; // x24
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Func_object__bool__o *v18; // x23
  System_Collections_Generic_List_object__o *v19; // x21
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  BattleSequenceManager___c_c *v21; // x0
  System_Comparison_T__o *_9__79_2; // x19
  Il2CppObject *v23; // x22
  struct BattleSequenceManager___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4A5D7F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___);
    sub_1B885B0(&System_Comparison_USFGOPlayAudioEvent__TypeInfo);
    sub_1B885B0(&System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__get_Current__);
    sub_1B885B0(&System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_0__);
    sub_1B885B0(&Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_2__);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass79_0__FixSyncGroupRandomAudioPlayIndex_b__1__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
    sub_1B885B0(&BattleSequenceManager___c_TypeInfo);
    byte_4A5D7F4 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v6 = sub_1B887FC(BattleSequenceManager___c__DisplayClass79_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass79_0___ctor((BattleSequenceManager___c__DisplayClass79_0_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_27;
  *(_QWORD *)(v6 + 16) = syncGroupName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)syncGroupName, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional___ctor__);
  if ( !sequence )
    goto LABEL_27;
  ComponentsInChildren_object__49085148 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                           sequence,
                                                                                           (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOSetAudioGroupIndexConditional___);
  if ( !v11 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v11,
    ComponentsInChildren_object__49085148,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__AddRange__);
  v12 = BattleSequenceManager___c_TypeInfo;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
  }
  _9__79_0 = (System_Comparison_T__o *)v12->static_fields->__9__79_0;
  if ( !_9__79_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__79_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_USFGOSetAudioGroupIndexConditional__TypeInfo);
    System_Comparison_object____ctor(
      _9__79_0,
      v14,
      Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_0__,
      0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__79_0 = (struct System_Comparison_USFGOSetAudioGroupIndexConditional__o *)_9__79_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v16, v17);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    _9__79_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional__Sort__);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_USFGOSetAudioGroupIndexConditional__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v6,
    Method_BattleSequenceManager___c__DisplayClass79_0__FixSyncGroupRandomAudioPlayIndex_b__1__,
    0LL);
  if ( !BasicHelper__Any_object_(
          (System_Collections_Generic_List_T__o *)v11,
          (System_Func_T__bool__o *)v18,
          (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_USFGOSetAudioGroupIndexConditional___) )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_USFGOPlayAudioEvent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent___ctor__);
    ComponentsInChildren_object__49085148 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                             sequence,
                                                                                             (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventRandom___);
    if ( v19 )
    {
      System_Collections_Generic_List_object___AddRange(
        v19,
        ComponentsInChildren_object__49085148,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v20 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                             sequence,
                                                             (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEventConditional___);
      System_Collections_Generic_List_object___AddRange(
        v19,
        v20,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__AddRange__);
      v21 = BattleSequenceManager___c_TypeInfo;
      if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
        v21 = BattleSequenceManager___c_TypeInfo;
      }
      _9__79_2 = (System_Comparison_T__o *)v21->static_fields->__9__79_2;
      if ( !_9__79_2 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BattleSequenceManager___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__79_2 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_USFGOPlayAudioEvent__TypeInfo);
        System_Comparison_object____ctor(
          _9__79_2,
          v23,
          Method_BattleSequenceManager___c__FixSyncGroupRandomAudioPlayIndex_b__79_2__,
          0LL);
        v24 = BattleSequenceManager___c_TypeInfo->static_fields;
        v24->__9__79_2 = (struct System_Comparison_USFGOPlayAudioEvent__o *)_9__79_2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->__9__79_2, (int32_t)_9__79_2, v25, v26);
      }
      System_Collections_Generic_List_object___Sort_55571192(
        v19,
        _9__79_2,
        (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__Sort__);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v28,
        v19,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_USFGOPlayAudioEvent__GetEnumerator__);
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__MoveNext__) )
          break;
        if ( !v28.fields._current )
          sub_1B8880C(0LL, v27);
      }
      while ( (((__int64 (*)(void))v28.fields._current->klass->vtable[16].method)() & 1) == 0 );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayAudioEvent__Dispose__);
      return;
    }
LABEL_27:
    sub_1B8880C(ComponentsInChildren_object__49085148, v8);
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
  Il2CppObject *Component_object; // x22
  int32_t ServantId; // w0

  if ( (byte_4A5D7F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7F8 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B8880C(actor, *(_QWORD *)&curLimCnt);
  return BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)Component_object, 0LL);
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
  Il2CppObject *Instance; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5D818 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6006/*"Enemy"*/);
    sub_1B885B0(&StringLiteral_10673/*"Player"*/);
    byte_4A5D818 = 1;
  }
  if ( isEnemy )
    v8 = &StringLiteral_6006/*"Enemy"*/;
  else
    v8 = &StringLiteral_10673/*"Player"*/;
  v9 = (Il2CppObject *)*v8;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  v18 = pos;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
  v15 = System_String__Format_61721404(format, v9, v14, 0LL);
  if ( !Instance )
    sub_1B8880C(v15, v16);
  return FGOSequenceManager__getCharacterPosition((FGOSequenceManager_o *)Instance, v15, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleSequenceManager__GetTargetPosIndexTransform(
        BattleSequenceManager_o *this,
        int32_t posIndex,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass126_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *battleTargetList; // x19
  System_Predicate_object__o *v9; // x20
  UnityEngine_Transform_o *result; // x0

  if ( (byte_4A5D819 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
    sub_1B885B0(&System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass126_0__GetTargetPosIndexTransform_b__0__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass126_0_TypeInfo);
    byte_4A5D819 = 1;
  }
  v5 = (BattleSequenceManager___c__DisplayClass126_0_o *)sub_1B887FC(BattleSequenceManager___c__DisplayClass126_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass126_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  v5->fields.posIndex = posIndex;
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleSequenceManager_BattleTarget__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleSequenceManager___c__DisplayClass126_0__GetTargetPosIndexTransform_b__0__,
    0LL);
  if ( !battleTargetList )
    goto LABEL_9;
  result = (UnityEngine_Transform_o *)System_Collections_Generic_List_object___Find(
                                        battleTargetList,
                                        (System_Predicate_T__o *)v9,
                                        (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Find__);
  if ( result )
  {
    v6 = BattleSequenceManager_BattleTarget__saveTransform((BattleSequenceManager_BattleTarget_o *)result, 0LL);
    if ( v6 )
      return UnityEngine_GameObject__get_transform(v6, 0LL);
LABEL_9:
    sub_1B8880C(v6, v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)fxdVoice, 0, (int32_t)method, v3);
  fixedVoice = this->fields.fixedVoice;
  if ( fixedVoice )
  {
    *fxdVoice = fixedVoice;
    sub_1B88554((ServantStatusBattleListViewItem_o *)fxdVoice, (int32_t)fixedVoice, v6, v7);
  }
  return fixedVoice != 0LL;
}


bool __fastcall BattleSequenceManager__IsDelayEndTreasureDvcSequence(
        BattleSequenceManager_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4A5D824 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D824 = 1;
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
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_16:
    sub_1B8880C(v8, v7);
  return BattleActorControl__IsDelayEndSequence((BattleActorControl_o *)Component_object, entity, 0LL);
}


bool __fastcall BattleSequenceManager__IsPlayerSideNoblePhantasm(const MethodInfo *method)
{
  Il2CppObject *Instance; // x19
  UnityEngine_GameObject_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x19
  Il2CppObject *Component_object; // x19

  if ( (byte_4A5D826 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5D826 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  klass = (UnityEngine_Object_o *)v2[4].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
    return 0;
  v2 = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v2 )
    goto LABEL_18;
  v2 = (UnityEngine_GameObject_o *)v2[4].klass;
  if ( !v2 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
    return 0;
  if ( !Component_object )
LABEL_18:
    sub_1B8880C(v2, v3);
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

  if ( (byte_4A5D828 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D828 = 1;
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
  System_Collections_Generic_List_object__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4A5D7F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5D7F6 = 1;
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
    sub_1B8880C(IsNullOrEmpty, v8);
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
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    IsNullOrEmpty->fields._size = size + 1;
    v14[4] = (Il2CppClass *)bgmName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)bgmName, v9, v10);
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

  if ( (byte_4A5D7F7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7F7 = 1;
  }
  standFigure = (UnityEngine_Object_o *)this->fields.standFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL) )
  {
    v9 = (UIStandFigureRender_o *)this->fields.standFigure;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
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
  UnityEngine_Object_o *performance; // x21
  UnityEngine_GameObject_o *klass; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8
  UnityEngine_Object_o *Component_object; // x20
  UnityEngine_Object_o *SingleTarget; // x21
  Il2CppObject *v14; // x21
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

  if ( (byte_4A5D814 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_18973/*"en_Parts_Up01"*/);
    sub_1B885B0(&StringLiteral_18972/*"en_Parts_Under01"*/);
    byte_4A5D814 = 1;
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
      v8 = this->fields.performance;
      if ( !v8 )
        goto LABEL_54;
      data = (UnityEngine_Object_o *)v8->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
      if ( ((unsigned __int8)klass & 1) == 0 )
      {
        v10 = this->fields.performance;
        if ( !v10 )
          goto LABEL_54;
        v11 = v10->fields.data;
        if ( !v11 )
          goto LABEL_54;
        if ( v11->fields.isMultiTargetBattle )
        {
          if ( !CoreObj )
            goto LABEL_54;
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       CoreObj,
                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
                v14 = UnityEngine_GameObject__GetComponent_object_(
                        klass,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                klass = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v14,
                                                      0LL,
                                                      0LL);
                if ( ((unsigned __int8)klass & 1) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_54;
                  if ( LOBYTE(v14[30].klass) )
                  {
                    klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)klass, 0LL) )
                      goto LABEL_37;
                    klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                    if ( !klass )
                      goto LABEL_54;
                    if ( BattleServantData__isMultiTargetUnder((BattleServantData_o *)klass, 0LL) )
                    {
LABEL_37:
                      klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                      if ( !klass )
                        goto LABEL_54;
                      klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUp(
                                                            (BattleServantData_o *)klass,
                                                            0LL);
                      if ( ((unsigned __int8)klass & 1) != 0 )
                      {
                        v15 = &StringLiteral_18973/*"en_Parts_Up01"*/;
                      }
                      else
                      {
                        klass = (UnityEngine_GameObject_o *)v14[28].monitor;
                        if ( !klass )
                          goto LABEL_54;
                        klass = (UnityEngine_GameObject_o *)BattleServantData__isMultiTargetUnder(
                                                              (BattleServantData_o *)klass,
                                                              0LL);
                        if ( ((unsigned __int8)klass & 1) == 0 )
                          return 0;
                        v15 = &StringLiteral_18972/*"en_Parts_Under01"*/;
                      }
                      v16 = this->fields.performance;
                      if ( !v16 )
                        goto LABEL_54;
                      v17 = (System_String_o *)*v15;
                      v18 = v16->fields.data;
                      klass = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)Component_object,
                                                            0LL);
                      if ( !v18 )
                        goto LABEL_54;
                      TransformChild = (UnityEngine_Component_o *)BattleData__FindTransformChild(
                                                                    v18,
                                                                    (UnityEngine_Transform_o *)klass,
                                                                    v17,
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
                          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(
                                                             (UnityEngine_Transform_o *)klass,
                                                             0LL);
                          if ( TransformChild )
                          {
                            v23 = v20;
                            v24 = v21;
                            v25 = v22;
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
                                v31.fields.z = v25 - z;
                                v31.fields.y = v24 - y;
                                v31.fields.x = v23 - x;
                                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)klass, v31, 0LL);
                                return 1;
                              }
                            }
                          }
                        }
LABEL_54:
                        sub_1B8880C(klass, v7);
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
    sub_1B8880C(this, method);
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  BgChangedCallback = v3->fields.BgChangedCallback;
  if ( BgChangedCallback )
  {
    p_BgChangedCallback = (ServantStatusBattleListViewItem_o *)&v3->fields.BgChangedCallback;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))BgChangedCallback->fields.m_target)(
      BgChangedCallback->fields.original_method_info,
      *(_QWORD *)&BgChangedCallback->fields.extra_arg);
    p_BgChangedCallback->klass = 0LL;
    sub_1B88554(p_BgChangedCallback, 0, v6, v7);
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
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  float v26; // s9
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4A5D809 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5D809 = 1;
  }
  backupBgmPlayArgsGroup = this->fields.backupBgmPlayArgsGroup;
  if ( backupBgmPlayArgsGroup )
  {
    v6 = BgmPlayArgsGroup__AllArgsListNullExcluded(backupBgmPlayArgsGroup, 0LL);
    if ( !v6 )
      sub_1B8880C(0LL, v7);
    klass = v6->klass;
    v9 = v6;
    v10 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(v6, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BgmPlayArgs__o *, _QWORD))p_method)(
            v9,
            *(_QWORD *)(p_method + 8));
    if ( !v14 )
      sub_1B8880C(0LL, v13);
    while ( 1 )
    {
      v15 = *(_QWORD *)v14;
      v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_16;
        }
        v18 = v15 + 16LL * *v17 + 312;
      }
      else
      {
LABEL_16:
        v18 = sub_1BDA590(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
        break;
      v19 = *(_QWORD *)v14;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v21 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_23;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_23:
        v22 = sub_1BDA590(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1B8880C(0LL, v24);
      v25 = *(System_String_o **)(v23 + 16);
      v26 = *(float *)(v23 + 24);
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      BgmManager__ChangePlayerVolume(v25, v26 * newValue, 0LL);
    }
    v27 = *(_QWORD *)v14;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_1BDA590(v14, System_IDisposable_TypeInfo, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleSequenceManager__OnNoblePhantasmPlayCompleteProc(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Object_o *actorCamera; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Object__o *npEndDeleteObjects; // x8
  int32_t size; // w2
  int v17; // w9
  Il2CppObject *v18; // x20
  struct System_Collections_Generic_List_GameObject__o *createdObjects; // x8
  int32_t v20; // w2
  int v21; // w9
  struct UnityEngine_GameObject_o **p_seqObject; // x20
  UnityEngine_Object_o *seqObject; // x21
  UnityEngine_Object_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Collections_Generic_List_bool__o *ActorActiveList; // x9
  struct BattlePerformance_o *v28; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x25
  struct UnityEngine_GameObject_array *e_actorlist; // x11
  __int64 v31; // x10
  unsigned __int64 v32; // x21
  il2cpp_array_size_t max_length; // w8
  UnityEngine_Object_o *v34; // x23
  char v35; // w22
  Il2CppObject *Component_object; // x23
  struct UnityEngine_GameObject_array *saveWaitEnemy; // x8
  __int64 v38; // x23
  __int64 v39; // x25
  unsigned __int64 v40; // x9
  unsigned __int64 v41; // x26
  UnityEngine_Object_o *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  struct BattlePerformance_o *v45; // x9
  struct UnityEngine_GameObject_array *v46; // x8
  struct UnityEngine_GameObject_array *v47; // x9
  Il2CppClass *v48; // x1
  struct BattlePerformance_o *v49; // x8
  struct UnityEngine_GameObject_array *v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x25
  int v53; // w26
  UnityEngine_Object_o *v54; // x22
  char v55; // w21
  Il2CppObject *v56; // x22
  UnityEngine_Object_o *data; // x21
  struct BattlePerformance_o *v58; // x8
  struct BattlePerformance_o *v59; // x8
  struct UnityEngine_GameObject_array *v60; // x22
  __int64 v61; // x8
  unsigned __int64 v62; // x23
  UnityEngine_Object_o *v63; // x21
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x2
  struct BattlePerformance_o *v66; // x8
  struct UnityEngine_GameObject_array *v67; // x22
  __int64 v68; // x8
  unsigned __int64 v69; // x23
  UnityEngine_Object_o *v70; // x21
  Il2CppObject *v71; // x0
  const MethodInfo *v72; // x2
  struct UIStandFigureM_o **p_standFigure; // x21
  UnityEngine_Object_o *standFigure; // x22
  const MethodInfo *v75; // x2
  int32_t v76; // w2
  int32_t v77; // w3
  UnityEngine_Camera_o *v78; // x21
  int32_t cullingMask; // w22
  char v80; // w0
  UnityEngine_Camera_o *effectCamera; // x21
  int32_t v82; // w22
  char v83; // w0
  struct BattlePerformance_o *v84; // x8
  UnityEngine_Object_o *v85; // x21
  struct System_Action_USSequencer__o *OnCompleteActorCallback; // x8
  struct BattlePerformance_o *v87; // x8
  BattlePerformance_o *v88; // x20
  int32_t v89; // w21
  int32_t CurrentGroundType; // w0
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5D80B & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&CommonUI_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Object__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Object__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9502/*"NoblePhantasm/CutIns"*/);
    sub_1B885B0(&StringLiteral_3226/*"Battle2D"*/);
    byte_4A5D80B = 1;
  }
  entity = 0LL;
  memset(&v93, 0, sizeof(v93));
  memset(&v92, 0, sizeof(v92));
  this->fields.IsPlaying = 0;
  this->fields._SeqId_k__BackingField = 0;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  if ( CommonUI__GetForceObi_16_9(0LL) )
  {
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
    CommonUI__SetForceObi_16_9(0, 0LL);
    BattleSequenceManager__SwitchPopupFullScreen(this, 1, v3);
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
  BattleSequenceManager__TargetTransformOverwriteOrReset(this, 0, v6);
  BattleSequenceManager__SetShaderNoblePhantasmMode(this, 0, v8);
  BattleSequenceManager__SetBattleTargetAuraFilip(this, 1, v9);
  BattleSequenceManager__restoreBattleActorTransform(this, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  transform = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
  if ( !transform )
    goto LABEL_89;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)transform,
    &entity,
    this->fields.treasureDeviceId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v11) )
    BattleSequenceManager__CrossFadeBgm(this, v12);
  BattleSequenceManager__registNobleVoiceRandomPlay(this, v12);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Object__GetEnumerator__);
  v93 = v91;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v93,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Object__MoveNext__) )
  {
    current = v93.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v93,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Object__Dispose__);
  npEndDeleteObjects = this->fields.npEndDeleteObjects;
  if ( !npEndDeleteObjects )
    goto LABEL_89;
  size = npEndDeleteObjects->fields._size;
  v17 = npEndDeleteObjects->fields._version + 1;
  npEndDeleteObjects->fields._size = 0;
  npEndDeleteObjects->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)npEndDeleteObjects->fields._items, 0, size, 0LL);
  transform = (UnityEngine_Component_o *)this->fields.createdObjects;
  if ( !transform )
    goto LABEL_89;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    (System_Collections_Generic_List_object__o *)transform,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v92 = v91;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v18 = v92.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v18, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  createdObjects = this->fields.createdObjects;
  if ( !createdObjects )
    goto LABEL_89;
  v20 = createdObjects->fields._size;
  v21 = createdObjects->fields._version + 1;
  createdObjects->fields._size = 0;
  createdObjects->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)createdObjects->fields._items, 0, v20, 0LL);
  p_seqObject = &this->fields.seqObject;
  seqObject = (UnityEngine_Object_o *)this->fields.seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(seqObject, 0LL, 0LL) )
  {
    v24 = (UnityEngine_Object_o *)*p_seqObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v24, 0LL);
    *p_seqObject = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seqObject, 0, v25, v26);
  }
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__FlipAll((BattlePerformance_o *)transform, 0, 0LL);
  ActorActiveList = this->fields.ActorActiveList;
  if ( !ActorActiveList )
    goto LABEL_89;
  v28 = this->fields.performance;
  if ( !v28 )
    goto LABEL_89;
  p_actorlist = v28->fields.p_actorlist;
  if ( !p_actorlist )
    goto LABEL_89;
  e_actorlist = v28->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_89;
  v31 = *(_QWORD *)&p_actorlist->max_length;
  if ( ActorActiveList->fields._size == e_actorlist->max_length + (_DWORD)v31 )
  {
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      max_length = *(_QWORD *)&p_actorlist->max_length;
      while ( v32 < max_length )
      {
        v34 = (UnityEngine_Object_o *)p_actorlist->m_Items[v32];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_89;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v32,
                                                   (const MethodInfo_34B4500 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v34 )
            goto LABEL_89;
          v35 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v34, (unsigned __int8)transform & 1, 0LL);
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v34,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v35 & 1, 0LL);
          }
        }
        max_length = p_actorlist->max_length;
        if ( (__int64)++v32 >= (int)max_length )
          goto LABEL_75;
      }
LABEL_169:
      sub_1B88814(transform, v5);
    }
    LODWORD(v32) = 0;
LABEL_75:
    saveWaitEnemy = this->fields.saveWaitEnemy;
    if ( !saveWaitEnemy )
      goto LABEL_89;
    v38 = 4LL;
    v39 = 32LL;
    while ( 1 )
    {
      v40 = saveWaitEnemy->max_length;
      v41 = v38 - 4;
      if ( v38 - 4 >= (int)v40 )
        break;
      if ( v41 >= v40 )
        goto LABEL_169;
      v42 = (UnityEngine_Object_o *)*((_QWORD *)&saveWaitEnemy->obj.klass + v38);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v45 = this->fields.performance;
        if ( !v45 )
          goto LABEL_89;
        v46 = this->fields.saveWaitEnemy;
        if ( !v46 )
          goto LABEL_89;
        if ( v41 >= v46->max_length )
          goto LABEL_169;
        v47 = v45->fields.e_actorlist;
        if ( !v47 )
          goto LABEL_89;
        if ( v41 >= v47->max_length )
          goto LABEL_169;
        v48 = (Il2CppClass *)*((_QWORD *)&v46->obj.klass + v38);
        *(Il2CppClass **)((char *)&v47->obj.klass + v39) = v48;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v47 + v39), (int32_t)v48, v43, v44);
      }
      saveWaitEnemy = this->fields.saveWaitEnemy;
      ++v38;
      v39 += 8LL;
      if ( !saveWaitEnemy )
        goto LABEL_89;
    }
    v49 = this->fields.performance;
    if ( !v49 )
      goto LABEL_89;
    v50 = v49->fields.e_actorlist;
    if ( !v50 )
      goto LABEL_89;
    v51 = *(_QWORD *)&v50->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      v53 = v32;
      while ( v52 < (unsigned int)v51 )
      {
        v54 = (UnityEngine_Object_o *)v50->m_Items[v52];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v54, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          transform = (UnityEngine_Component_o *)this->fields.ActorActiveList;
          if ( !transform )
            goto LABEL_89;
          transform = (UnityEngine_Component_o *)System_Collections_Generic_List_bool___get_Item(
                                                   (System_Collections_Generic_List_bool__o *)transform,
                                                   v53 + v52,
                                                   (const MethodInfo_34B4500 *)Method_System_Collections_Generic_List_bool__get_Item__);
          if ( !v54 )
            goto LABEL_89;
          v55 = (char)transform;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v54, (unsigned __int8)transform & 1, 0LL);
          v56 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v54,
                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v56,
                                                   0LL,
                                                   0LL);
          if ( ((unsigned __int8)transform & 1) != 0 )
          {
            if ( !v56 )
              goto LABEL_89;
            transform = (UnityEngine_Component_o *)v56[2].monitor;
            if ( !transform )
              goto LABEL_89;
            BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)transform, v55 & 1, 0LL);
          }
        }
        LODWORD(v51) = v50->max_length;
        if ( (__int64)++v52 >= (int)v51 )
          goto LABEL_107;
      }
      goto LABEL_169;
    }
LABEL_107:
    v28 = this->fields.performance;
    if ( !v28 )
      goto LABEL_89;
  }
  data = (UnityEngine_Object_o *)v28->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v58 = this->fields.performance;
    if ( !v58 )
      goto LABEL_89;
    transform = (UnityEngine_Component_o *)v58->fields.data;
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
  v59 = this->fields.performance;
  if ( !v59 )
    goto LABEL_89;
  v60 = v59->fields.p_actorlist;
  if ( !v60 )
    goto LABEL_89;
  v61 = *(_QWORD *)&v60->max_length;
  if ( (int)v61 >= 1 )
  {
    v62 = 0LL;
    while ( v62 < (unsigned int)v61 )
    {
      v63 = (UnityEngine_Object_o *)v60->m_Items[v62];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v63 )
          goto LABEL_89;
        v64 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v63,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v64, v65);
      }
      LODWORD(v61) = v60->max_length;
      if ( (__int64)++v62 >= (int)v61 )
        goto LABEL_127;
    }
    goto LABEL_169;
  }
LABEL_127:
  v66 = this->fields.performance;
  if ( !v66 )
    goto LABEL_89;
  v67 = v66->fields.e_actorlist;
  if ( !v67 )
    goto LABEL_89;
  v68 = *(_QWORD *)&v67->max_length;
  if ( (int)v68 >= 1 )
  {
    v69 = 0LL;
    while ( v69 < (unsigned int)v68 )
    {
      v70 = (UnityEngine_Object_o *)v67->m_Items[v69];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v70 )
          goto LABEL_89;
        v71 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v70,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        BattleSequenceManager__AfterPlayTargetActorProc(this, (BattleActorControl_o *)v71, v72);
      }
      LODWORD(v68) = v67->max_length;
      if ( (__int64)++v69 >= (int)v68 )
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.standFigure, 0, v76, v77);
  }
  if ( !BattleSequenceManager__IsDelayEndTreasureDvcSequence(this, (TreasureDvcEntity_o *)entity, v75) )
    BattleSequenceManager__ReleaseCpk(this, v5);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__InitAmbientLight((BattlePerformance_o *)transform, 0LL);
  v78 = this->fields.actorCamera;
  if ( !v78 )
    goto LABEL_89;
  cullingMask = UnityEngine_Camera__get_cullingMask(this->fields.actorCamera, 0LL);
  v80 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(v78, (1 << v80) | cullingMask, 0LL);
  effectCamera = this->fields.effectCamera;
  if ( !effectCamera )
    goto LABEL_89;
  v82 = UnityEngine_Camera__get_cullingMask(this->fields.effectCamera, 0LL);
  v83 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
  UnityEngine_Camera__set_cullingMask(effectCamera, v82 & ~(1 << v83), 0LL);
  transform = (UnityEngine_Component_o *)this->fields.performance;
  if ( !transform )
    goto LABEL_89;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)transform, 0LL);
  v84 = this->fields.performance;
  if ( !v84 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)v84->fields.bgPerf;
  if ( !transform )
    goto LABEL_89;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)transform, 0, 0LL);
  if ( !this->fields.OnCompleteActorCallback )
    goto LABEL_159;
  v85 = (UnityEngine_Object_o *)*p_seqObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v85, 0LL, 0LL);
  v5 = 0LL;
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    transform = (UnityEngine_Component_o *)*p_seqObject;
    if ( !*p_seqObject )
      goto LABEL_89;
    transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)transform,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    v5 = (const MethodInfo *)transform;
  }
  OnCompleteActorCallback = this->fields.OnCompleteActorCallback;
  if ( !OnCompleteActorCallback )
LABEL_89:
    sub_1B8880C(transform, v5);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, const MethodInfo *, _QWORD))OnCompleteActorCallback->fields.m_target)(
    OnCompleteActorCallback->fields.original_method_info,
    v5,
    *(_QWORD *)&OnCompleteActorCallback->fields.extra_arg);
LABEL_159:
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_9502/*"NoblePhantasm/CutIns"*/, 0LL);
  transform = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !transform )
    goto LABEL_89;
  BYTE1(transform[5].fields.m_CachedPtr) = 0;
  v87 = this->fields.performance;
  if ( !v87 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)v87->fields.actioncamera;
  if ( !transform )
    goto LABEL_89;
  BattleActionCamera__setNormalMode((BattleActionCamera_o *)transform, 0LL);
  v88 = this->fields.performance;
  if ( !v88 )
    goto LABEL_89;
  transform = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
  if ( !this->fields.performance )
    goto LABEL_89;
  v89 = (int)transform;
  CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
  BattlePerformance__UpdateCameraClippingRange(v88, v89, CurrentGroundType, 0, 0LL);
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
  BgmPlayArgsGroup_o *v3; // x0
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v4; // x0
  System_Object_array *v5; // x0
  __int64 v6; // x1
  System_Object_array *v7; // x20
  Il2CppClass *klass; // x8
  System_Object_array *v9; // x19
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Func_object__bool__o *v27; // x23
  Il2CppObject *object; // x0
  const MethodInfo_361AA4C *v29; // x3
  BgmPlayArgs_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Nullable_long__o v37; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o v38; // 0:x1.8
  System_Nullable_float__o v39; // 0:x2.8
  System_Nullable_long__o v40; // 0:x0.16

  if ( (byte_4A5D810 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_BgmPlayArgs___);
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1B885B0(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_long___ctor__);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass116_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass116_0_TypeInfo);
    byte_4A5D810 = 1;
  }
  if ( this->fields.backupBgmPlayArgsGroup )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager__ExportPlayArgsGroup(0LL);
    if ( v3 )
    {
      v4 = BgmPlayArgsGroup__AllArgsListNullExcluded(v3, 0LL);
      v5 = System_Linq_Enumerable__ToArray_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v4,
             (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
      if ( !this->fields.backupBgmPlayArgsGroup
        || (v7 = v5,
            (v5 = (System_Object_array *)BgmPlayArgsGroup__AllArgsListNullExcluded(
                                           this->fields.backupBgmPlayArgsGroup,
                                           0LL)) == 0LL) )
      {
        sub_1B8880C(v5, v6);
      }
      klass = v5->obj.klass;
      v9 = v5;
      v10 = *(unsigned __int16 *)(&v5->obj.klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v5->obj.klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BgmPlayArgs__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo )
        {
          --v10;
          p_offset += 4;
          if ( !v10 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_13:
        p_method = sub_1BDA590(v5, System_Collections_Generic_IEnumerable_BgmPlayArgs__TypeInfo, 0LL);
      }
      v14 = (*(__int64 (__fastcall **)(System_Object_array *, _QWORD))p_method)(v9, *(_QWORD *)(p_method + 8));
      if ( !v14 )
        sub_1B8880C(0LL, v13);
      while ( 1 )
      {
        v15 = *(_QWORD *)v14;
        v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 4;
            if ( !v16 )
              goto LABEL_20;
          }
          v18 = v15 + 16LL * *v17 + 312;
        }
        else
        {
LABEL_20:
          v18 = sub_1BDA590(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
          break;
        v19 = sub_1B887FC(BattleSequenceManager___c__DisplayClass116_0_TypeInfo);
        BattleSequenceManager___c__DisplayClass116_0___ctor((BattleSequenceManager___c__DisplayClass116_0_o *)v19, 0LL);
        v20 = *(_QWORD *)v14;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BgmPlayArgs__c **)v22 - 1) != System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1BDA590(v14, System_Collections_Generic_IEnumerator_BgmPlayArgs__TypeInfo, 0LL);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v14, *(_QWORD *)(v23 + 8));
        if ( !v19 )
          sub_1B8880C(v24, v24);
        *(_QWORD *)(v19 + 16) = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 16), v24, v25, v26);
        v27 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BgmPlayArgs__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v19,
          Method_BattleSequenceManager___c__DisplayClass116_0__OverwriteStartTimeToSavedBgmPlayArgsGroup_b__0__,
          0LL);
        object = BasicHelper__Find_object_(
                   v7,
                   (System_Func_T__bool__o *)v27,
                   (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_BgmPlayArgs___);
        if ( object )
          v40.fields.value = (int64_t)object[2].klass;
        else
          v40.fields.value = 0LL;
        v30 = *(BgmPlayArgs_o **)(v19 + 16);
        *(_QWORD *)&v37.fields.hasValue = 0LL;
        v37.fields.value = 0LL;
        *(_QWORD *)&v40.fields.hasValue = &v37;
        System_Nullable_long____ctor(v40, Method_System_Nullable_long___ctor__, v29);
        if ( !v30 )
          sub_1B8880C(v31, v32);
        v38 = 0LL;
        v39 = 0LL;
        BgmPlayArgs__Update(v30, v38, v39, v37, 0LL);
      }
      v33 = *(_QWORD *)v14;
      v34 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_39;
        }
        v36 = v33 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_39:
        v36 = sub_1BDA590(v14, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v36)(v14, *(_QWORD *)(v36 + 8));
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

  if ( (byte_4A5D80C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D80C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v4 )
  {
    if ( !actor )
      sub_1B8880C(v4, v5);
    BattleActorControl__SetTempDefaultAnimation(actor, 0LL);
  }
}


void __fastcall BattleSequenceManager__ReleaseCpk(BattleSequenceManager_o *this, const MethodInfo *method)
{
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t VoiceId; // w0
  int32_t overwriteSvtVoiceId; // w8
  System_Collections_Generic_List_object__o *ReleaseSoundNames; // x20
  System_String_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  ServantAssetLoadManager_o *v14; // x1
  Il2CppClass **v15; // x0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x20
  System_Action_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D811 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager__ReleaseCpk_b__117_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9505/*"NoblePhantasm_"*/);
    byte_4A5D811 = 1;
  }
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  VoiceId = ServantAssetLoadManager__getVoiceId(Instance, this->fields.chrId, this->fields.limitCount, 0LL);
  overwriteSvtVoiceId = this->fields.overwriteSvtVoiceId;
  if ( !overwriteSvtVoiceId )
    overwriteSvtVoiceId = VoiceId;
  v24 = overwriteSvtVoiceId;
  ReleaseSoundNames = (System_Collections_Generic_List_object__o *)this->fields.ReleaseSoundNames;
  v8 = System_Int32__ToString((int32_t)&v24, 0LL);
  Instance = (ServantAssetLoadManager_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_9505/*"NoblePhantasm_"*/, v8, 0LL);
  if ( !ReleaseSoundNames )
    goto LABEL_17;
  items = ReleaseSoundNames->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++ReleaseSoundNames->fields._version;
  if ( !items )
    goto LABEL_17;
  size = ReleaseSoundNames->fields._size;
  v14 = Instance;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ReleaseSoundNames,
      (Il2CppObject *)Instance,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    ReleaseSoundNames->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
  DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
  v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BattleSequenceManager__ReleaseCpk_b__117_0__, 0LL);
  if ( !DelayInvokeMethodList
    || (v20 = DelayInvokeMethodList->fields._items,
        v21 = Method_System_Collections_Generic_List_Action__Add__,
        ++DelayInvokeMethodList->fields._version,
        !v20) )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  v22 = DelayInvokeMethodList->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      DelayInvokeMethodList,
      (Il2CppObject *)v17,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    DelayInvokeMethodList->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
  }
  this->fields.delayInvokeTimer = 1.0;
}


void __fastcall BattleSequenceManager__RemoveFixedVoice(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.fixedVoice = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, 0, v2, v3);
}


void __fastcall BattleSequenceManager__RemoveIntactBgms(BattleSequenceManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.intactBgmList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, 0, v2, v3);
}


void __fastcall BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  struct BgmPlayArgsGroup_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D80F & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    byte_4A5D80F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  v3 = BgmManager__ExportPlayArgsGroup(0LL);
  this->fields.backupBgmPlayArgsGroup = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.backupBgmPlayArgsGroup, (int32_t)v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSequenceManager__SearchTargetAndModifyPositions(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x21
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
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D815 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9339/*"N_Enemy2"*/);
    sub_1B885B0(&StringLiteral_9340/*"N_Player2"*/);
    byte_4A5D815 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_55;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
  v7 = (UnityEngine_Object_o *)this->fields.SingleTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    return;
  actor = this->fields.SingleTarget;
  if ( !actor )
    goto LABEL_55;
  actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                        actor,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !actor )
    goto LABEL_55;
  performance = this->fields.performance;
  v9 = actor;
  v10 = (System_String_o **)((LOBYTE(actor[20].klass) != 0) != (LOBYTE(Component_object[30].klass) != 0)
                           ? &StringLiteral_9339/*"N_Enemy2"*/
                           : &StringLiteral_9340/*"N_Player2"*/);
  if ( !performance )
    goto LABEL_55;
  v11 = 336LL;
  if ( LOBYTE(actor[20].klass) )
    v11 = 344LL;
  v12 = *(__int64 *)((char *)&performance->klass + v11);
  if ( !v12 )
LABEL_55:
    sub_1B8880C(actor, method);
  if ( (int)*(_QWORD *)(v12 + 24) >= 1 )
  {
    v13 = *v10;
    v14 = 0LL;
    v15 = *(_QWORD *)(v12 + 24);
    do
    {
      if ( v14 >= v15 )
        sub_1B88814(actor, method);
      v16 = *(UnityEngine_GameObject_o **)(v12 + 32 + 8 * v14);
      v17 = (UnityEngine_Object_o *)this->fields.SingleTarget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, v17, 0LL) )
      {
        actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
        if ( !actor )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)FGOSequenceManager__getCharacterPosition(
                                              (FGOSequenceManager_o *)actor,
                                              v13,
                                              0LL);
        if ( !v16 )
          goto LABEL_55;
        v18 = (UnityEngine_Transform_o *)actor;
        actor = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
        if ( !v18 )
          goto LABEL_55;
        v19 = (UnityEngine_Transform_o *)actor;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(v18, 0LL);
        if ( !v19 )
          goto LABEL_55;
        UnityEngine_Transform__set_position(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
        v23 = this->fields.performance;
        if ( !v23 )
          goto LABEL_55;
        actor = (UnityEngine_GameObject_o *)v23->fields.data;
        if ( !actor )
          goto LABEL_55;
        if ( BYTE6(actor[29].monitor) && LOBYTE(v9[20].klass) )
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
            v27 = (unsigned int)UnityEngine_Transform__get_position(v18, 0LL);
            *(UnityEngine_Vector3_o *)(&v28 - 2) = UnityEngine_Transform__get_position(v18, 0LL);
            if ( !transform )
              goto LABEL_55;
            v29 = v27;
            v30 = y;
            UnityEngine_Transform__set_position(transform, *(UnityEngine_Vector3_o *)(&v28 - 2), 0LL);
          }
        }
      }
      else
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actor = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
        if ( ((unsigned __int8)actor & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_55;
          UnityEngine_GameObject__SetActive(v16, 0, 0LL);
          v31 = this->fields.performance;
          if ( !v31 )
            goto LABEL_55;
          data = v31->fields.data;
          if ( !data )
            goto LABEL_55;
          if ( data->fields.isMultiTargetBattle && LOBYTE(v9[20].klass) )
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
  int32_t v3; // w3

  if ( actionData )
    actionData = (BattleActionData_o *)actionData->fields._ChangeField_k__BackingField;
  if ( !this )
    sub_1B8880C(0LL, actionData);
  this->fields.changeFieldAfter = (struct BattleActionData_AfterChangeField_o *)actionData;
  sub_1B88554(
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
  void *battleTargetList; // x0
  int32_t v6; // w21

  if ( (byte_4A5D821 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4A5D821 = 1;
  }
  battleTargetList = this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_18;
  v6 = 0;
  while ( v6 < *((_DWORD *)battleTargetList + 6) )
  {
    battleTargetList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)battleTargetList,
                         v6,
                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
        ++v6;
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( battleTargetList )
      {
        BattleActorControl__resetAuraFlip((BattleActorControl_o *)battleTargetList, 0LL);
        return;
      }
    }
LABEL_18:
    sub_1B8880C(battleTargetList, isReset);
  }
}


void __fastcall BattleSequenceManager__SetFixedVoice(
        BattleSequenceManager_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.fixedVoice = voiceId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fixedVoice, (int32_t)voiceId, (int32_t)method, v3);
}


void __fastcall BattleSequenceManager__SetIntactBgms(
        BattleSequenceManager_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_String_array *BgmNameListWithIds; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D822 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D822 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BgmMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  BgmNameListWithIds = BgmMaster__GetBgmNameListWithIds((BgmMaster_o *)Instance, bgmIds, 0LL);
  this->fields.intactBgmList = BgmNameListWithIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.intactBgmList, (int32_t)BgmNameListWithIds, v8, v9);
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
  if ( (byte_4A5D813 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D813 = 1;
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
    sub_1B8880C(this, targetActor);
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
            if ( !byte_4A55CE1 )
            {
              this = (BattleSequenceManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE1 = 1;
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
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x3
  int32_t v8; // w21
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4A5D7FA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4A5D7FA = 1;
  }
  actor = this->fields.actor;
  if ( !actor
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             actor,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleFBXComponent___),
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)Component_object,
          (BattleFBXComponent_o *)Component_object,
          isStart,
          v7),
        (actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(actor, isStart);
  }
  v8 = 0;
  while ( v8 < SLODWORD(actor[1].klass) )
  {
    actor = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)actor,
                                          v8,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    if ( actor )
    {
      klass = actor[1].klass;
      if ( klass )
      {
        BattleSequenceManager__SetTempShaderNoblePhantasmMode(
          (BattleSequenceManager_o *)actor,
          *(BattleFBXComponent_o **)&klass->_1.byval_arg.bits,
          isStart,
          v9);
        actor = (UnityEngine_GameObject_o *)this->fields.battleTargetList;
        ++v8;
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
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A5D7FB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16608/*"_y0"*/);
    byte_4A5D7FB = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fbx, 0LL, 0LL);
  if ( v6 )
  {
    if ( !fbx )
      sub_1B8880C(v6, v7);
    if ( BattleFBXComponent__IsYTransparenceShader(fbx, 0LL) )
    {
      if ( isStart )
        BattleFBXComponent__SetTempShaderFloatProperty(fbx, 5000.0, (System_String_o *)StringLiteral_16608/*"_y0"*/, 0LL);
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
  Il2CppObject *Component_object; // x20
  unsigned __int64 v9; // x27
  unsigned __int64 v10; // x26
  System_String_o *v11; // x0
  BattleSequenceManager_o *v12; // x0
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x22
  unsigned __int64 max_length; // x8
  unsigned __int64 i; // x22
  System_String_o *v17; // x0
  BattleSequenceManager_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *v20; // x21
  unsigned __int64 v21; // x8
  int v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5D7F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2237/*"Actors/Actor"*/);
    byte_4A5D7F9 = 1;
  }
  seqObject = this->fields.seqObject;
  if ( !seqObject )
LABEL_27:
    sub_1B8880C(seqObject, playerList);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       seqObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v9 = 0LL;
  do
  {
    v10 = v9 + 1;
    v22 = v9 + 1;
    v11 = System_Int32__ToString((int32_t)&v22, 0LL);
    v12 = (BattleSequenceManager_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_2237/*"Actors/Actor"*/, v11, 0LL);
    v14 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v12,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v12,
                                    v13);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !playerList )
        goto LABEL_27;
      max_length = playerList->max_length;
      if ( (__int64)v9 < (int)max_length )
      {
        if ( v9 >= max_length )
LABEL_28:
          sub_1B88814(seqObject, playerList);
        seqObject = playerList->m_Items[v9];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v14 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v14,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
    ++v9;
  }
  while ( v10 != 3 );
  for ( i = 0LL; i != 3; ++i )
  {
    v22 = i + 4;
    v17 = System_Int32__ToString((int32_t)&v22, 0LL);
    v18 = (BattleSequenceManager_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_2237/*"Actors/Actor"*/, v17, 0LL);
    v20 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                    v18,
                                    (WellFired_USSequencer_o *)Component_object,
                                    (System_String_o *)v18,
                                    v19);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v20, 0LL, 0LL);
    if ( ((unsigned __int8)seqObject & 1) != 0 )
    {
      if ( !enemyList )
        goto LABEL_27;
      v21 = enemyList->max_length;
      if ( (__int64)i < (int)v21 )
      {
        if ( i >= v21 )
          goto LABEL_28;
        seqObject = enemyList->m_Items[i];
        if ( !seqObject )
          goto LABEL_27;
        seqObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seqObject, 0LL);
        if ( !v20 )
          goto LABEL_27;
        WellFired_USTimelineContainer__set_AffectedObject(
          (WellFired_USTimelineContainer_o *)v20,
          (UnityEngine_Transform_o *)seqObject,
          0LL);
      }
    }
  }
}


void __fastcall BattleSequenceManager__SetupTargetInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x22
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  void *actor; // x0
  Il2CppObject *Component_object; // x23
  BattleActionData_o *monitor; // x24
  System_Collections_Generic_HashSet_int__o *v10; // x25
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *v13; // x21
  int v14; // w8
  void *v15; // x25
  unsigned int v16; // w20
  __int64 v17; // x8
  int v18; // w8
  void *v19; // x25
  unsigned int v20; // w20
  __int64 v21; // x8
  int v22; // w8
  void *v23; // x25
  unsigned int v24; // w20
  __int64 v25; // x8
  System_Collections_Generic_List_object__o *moveToSubMemberList; // x24
  System_Action_object__o *v27; // x25
  int klass_low; // w28
  System_Collections_Generic_HashSet_int__o *v29; // x22
  int v30; // w29
  int i; // w24
  __int64 v32; // x1
  BattlePerformance_o *performance; // x0
  int32_t current; // w23
  UnityEngine_GameObject_o *ServantGameObject; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w21
  struct UnityEngine_GameObject_o *v42; // x21
  Il2CppObject *v43; // x23
  int32_t v44; // w2
  int32_t v45; // w3
  const MethodInfo *v46; // x2
  __int64 v47; // x1
  BattlePerformance_o *v48; // x0
  int32_t v49; // w20
  UnityEngine_Object_o *v50; // x21
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x22
  BattleSequenceManager_BattleTarget_o *v54; // x21
  __int64 v55; // x1
  BattlePerformance_o *v56; // x0
  __int64 ServantPosIndex; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x8
  int v67; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_HashSet_Enumerator_T__o v68; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o j; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5D812 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData_MoveToSubMember__TypeInfo);
    sub_1B885B0(&BattleSequenceManager_BattleTarget_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass119_0__SetupTargetInfo_b__0__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass119_0_TypeInfo);
    byte_4A5D812 = 1;
  }
  memset(&j, 0, sizeof(j));
  v3 = sub_1B887FC(BattleSequenceManager___c__DisplayClass119_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass119_0___ctor((BattleSequenceManager___c__DisplayClass119_0_o *)v3, 0LL);
  this->fields.SingleTarget = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget, 0, v4, v5);
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)actor,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  actor = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)actor & 1) == 0 )
  {
    if ( Component_object )
    {
      monitor = (BattleActionData_o *)Component_object[26].monitor;
      v10 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v10,
        (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
      if ( v3 )
      {
        *(_QWORD *)(v3 + 16) = v10;
        v13 = (ServantStatusBattleListViewItem_o *)(v3 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v10, v11, v12);
        if ( monitor )
        {
          actor = BattleActionData__getDamageList(monitor, -1, 0LL);
          if ( actor )
          {
            v14 = *((_DWORD *)actor + 6);
            v15 = actor;
            if ( v14 >= 1 )
            {
              v16 = 0;
              while ( v16 < v14 )
              {
                v17 = *((_QWORD *)v15 + (int)v16 + 4);
                if ( !v17 )
                  goto LABEL_78;
                v6 = *(unsigned int *)(v17 + 28);
                if ( (_DWORD)v6 )
                {
                  actor = v13->klass;
                  if ( !v13->klass )
                    goto LABEL_78;
                  actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                    (System_Collections_Generic_HashSet_int__o *)actor,
                                    v6,
                                    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                v14 = *((_DWORD *)v15 + 6);
                if ( (int)++v16 >= v14 )
                  goto LABEL_19;
              }
LABEL_79:
              sub_1B88814(actor, v6);
            }
LABEL_19:
            actor = BattleActionData__getBuffList(monitor, -1, 0LL);
            if ( actor )
            {
              v18 = *((_DWORD *)actor + 6);
              v19 = actor;
              if ( v18 >= 1 )
              {
                v20 = 0;
                while ( v20 < v18 )
                {
                  v21 = *((_QWORD *)v19 + (int)v20 + 4);
                  if ( !v21 )
                    goto LABEL_78;
                  v6 = *(unsigned int *)(v21 + 40);
                  if ( (_DWORD)v6 )
                  {
                    actor = v13->klass;
                    if ( !v13->klass )
                      goto LABEL_78;
                    actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                      (System_Collections_Generic_HashSet_int__o *)actor,
                                      v6,
                                      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  v18 = *((_DWORD *)v19 + 6);
                  if ( (int)++v20 >= v18 )
                    goto LABEL_28;
                }
                goto LABEL_79;
              }
LABEL_28:
              actor = BattleActionData__getHealList(monitor, -1, 0LL);
              if ( actor )
              {
                v22 = *((_DWORD *)actor + 6);
                v23 = actor;
                if ( v22 >= 1 )
                {
                  v24 = 0;
                  while ( v24 < v22 )
                  {
                    v25 = *((_QWORD *)v23 + (int)v24 + 4);
                    if ( !v25 )
                      goto LABEL_78;
                    v6 = *(unsigned int *)(v25 + 28);
                    if ( (_DWORD)v6 )
                    {
                      actor = v13->klass;
                      if ( !v13->klass )
                        goto LABEL_78;
                      actor = (void *)System_Collections_Generic_HashSet_int___Add(
                                        (System_Collections_Generic_HashSet_int__o *)actor,
                                        v6,
                                        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
                    }
                    v22 = *((_DWORD *)v23 + 6);
                    if ( (int)++v24 >= v22 )
                      goto LABEL_37;
                  }
                  goto LABEL_79;
                }
LABEL_37:
                moveToSubMemberList = (System_Collections_Generic_List_object__o *)monitor->fields.moveToSubMemberList;
                if ( moveToSubMemberList )
                {
                  v27 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData_MoveToSubMember__TypeInfo);
                  System_Action_object____ctor(
                    v27,
                    (Il2CppObject *)v3,
                    Method_BattleSequenceManager___c__DisplayClass119_0__SetupTargetInfo_b__0__,
                    0LL);
                  System_Collections_Generic_List_object___ForEach(
                    moveToSubMemberList,
                    (System_Action_T__o *)v27,
                    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleActionData_MoveToSubMember__ForEach__);
                }
                klass_low = LOBYTE(Component_object[30].klass);
                v29 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
                System_Collections_Generic_HashSet_int____ctor(
                  v29,
                  (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
                actor = v13->klass;
                if ( v13->klass )
                {
                  System_Collections_Generic_HashSet_int___GetEnumerator(
                    &v68,
                    (System_Collections_Generic_HashSet_int__o *)actor,
                    (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                  v67 = 0;
                  j = v68;
                  v30 = 0;
LABEL_41:
                  for ( i = v30; ; ++i )
                  {
                    v30 = i;
                    if ( !System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                            &j,
                            (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      break;
                    performance = this->fields.performance;
                    if ( !performance )
                      sub_1B8880C(0LL, v32);
                    current = (int32_t)j.fields._current;
                    ServantGameObject = BattlePerformance__getServantGameObject(
                                          performance,
                                          (int32_t)j.fields._current,
                                          0LL);
                    if ( !ServantGameObject )
                      sub_1B8880C(0LL, v36);
                    v37 = UnityEngine_GameObject__GetComponent_object_(
                            ServantGameObject,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                    if ( !v37 )
                      sub_1B8880C(0LL, v38);
                    if ( (klass_low != 0) == (LOBYTE(v37[30].klass) != 0) )
                    {
                      ++v67;
                      goto LABEL_41;
                    }
                    if ( !v29 )
                      sub_1B8880C(v37, v38);
                    System_Collections_Generic_HashSet_int___Add(
                      v29,
                      current,
                      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
                  }
                  System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                    &j,
                    (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                  if ( v67 && i == 1 )
                  {
                    v13->klass = (ServantStatusBattleListViewItem_c *)v29;
                    sub_1B88554(v13, (int32_t)v29, v39, v40);
                  }
                  actor = v13->klass;
                  if ( v13->klass )
                  {
                    if ( *((_DWORD *)actor + 8) == 1 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v68,
                        (System_Collections_Generic_HashSet_int__o *)actor,
                        (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      v41 = -1;
                      for ( j = v68;
                            System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                              &j,
                              (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
                            v41 = (int32_t)j.fields._current )
                      {
                        ;
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
                      actor = this->fields.performance;
                      if ( !actor )
                        goto LABEL_78;
                      actor = BattlePerformance__getServantGameObject((BattlePerformance_o *)actor, v41, 0LL);
                      if ( !actor )
                        goto LABEL_78;
                      v42 = (struct UnityEngine_GameObject_o *)actor;
                      v43 = UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)actor,
                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                      this->fields.SingleTarget = v42;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&this->fields.SingleTarget,
                        (int32_t)v42,
                        v44,
                        v45);
                      BattleSequenceManager__SetMultiTargetBattleEnemy(this, (BattleActorControl_o *)v43, v46);
                    }
                    if ( v29 )
                    {
                      System_Collections_Generic_HashSet_int___GetEnumerator(
                        &v68,
                        v29,
                        (const MethodInfo_33B3704 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
                      j = v68;
                      while ( System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
                                &j,
                                (const MethodInfo_3273FD0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__) )
                      {
                        v48 = this->fields.performance;
                        if ( !v48 )
                          sub_1B8880C(0LL, v47);
                        v49 = (int32_t)j.fields._current;
                        v50 = (UnityEngine_Object_o *)BattlePerformance__getServantGameObject(
                                                        v48,
                                                        (int32_t)j.fields._current,
                                                        0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v51 = UnityEngine_Object__op_Equality(v50, 0LL, 0LL);
                        if ( !v51 )
                        {
                          if ( !v50 )
                            sub_1B8880C(v51, v52);
                          v53 = UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v50,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
                          v54 = (BattleSequenceManager_BattleTarget_o *)sub_1B887FC(BattleSequenceManager_BattleTarget_TypeInfo);
                          BattleSequenceManager_BattleTarget___ctor(v54, 0LL);
                          v56 = this->fields.performance;
                          if ( !v56 )
                            sub_1B8880C(0LL, v55);
                          ServantPosIndex = BattlePerformance__getServantPosIndex(v56, v49, 0LL);
                          if ( !v54 )
                            sub_1B8880C(ServantPosIndex, v58);
                          BattleSequenceManager_BattleTarget__setup(
                            v54,
                            (BattleActorControl_o *)v53,
                            ServantPosIndex,
                            0LL);
                          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
                          if ( !battleTargetList )
                            sub_1B8880C(0LL, v59);
                          items = battleTargetList->fields._items;
                          v64 = Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Add__;
                          ++battleTargetList->fields._version;
                          if ( !items )
                            sub_1B8880C(battleTargetList, v59);
                          size = battleTargetList->fields._size;
                          if ( (unsigned int)size >= items->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              battleTargetList,
                              (Il2CppObject *)v54,
                              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v66 = &items->obj.klass + size;
                            battleTargetList->fields._size = size + 1;
                            v66[4] = (Il2CppClass *)v54;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v54, v60, v61);
                          }
                        }
                      }
                      System_Collections_Generic_HashSet_Enumerator_int___Dispose(
                        &j,
                        (const MethodInfo_3273FCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
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
    sub_1B8880C(actor, v6);
  }
}


void __fastcall BattleSequenceManager__ShowNobleInfo(BattleSequenceManager_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B8880C(0LL, method);
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
  if ( (byte_4A5D808 & 1) == 0 )
  {
    this = (BattleSequenceManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D808 = 1;
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
    sub_1B8880C(this, isFullScreen);
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
  Il2CppObject *Component_object; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *TargetPosIndexTransform; // x23
  UnityEngine_Object_o *AffectedObject; // x24
  const MethodInfo *v12; // x4
  BaseMonoBehaviour_o *v13; // x24
  UnityEngine_GameObject_o *dummyActorPrefab; // x25
  UnityEngine_Transform_o *m_CancellationTokenSource; // x26
  UnityEngine_Transform_o *TargetFieldPosNode; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_Generic_List_object__o *npEndDeleteObjects; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  BattleSequenceManager_o *v24; // x1
  Il2CppClass **v25; // x0
  int v26; // w22
  UnityEngine_Transform_o *v27; // x0
  BattleSyncTransformComponent_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v34; // x8

  v5 = (UnityEngine_Component_o *)tlcont;
  v6 = this;
  if ( (byte_4A5D817 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Object__Add__);
    this = (BattleSequenceManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D817 = 1;
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
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BattleSyncTransformComponent___);
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
                                                          v9);
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
        v13 = (BaseMonoBehaviour_o *)v6->fields.performance;
        if ( !v13 )
          goto LABEL_43;
        dummyActorPrefab = v6->fields.dummyActorPrefab;
        m_CancellationTokenSource = (UnityEngine_Transform_o *)v13[9].fields.m_CancellationTokenSource;
        TargetFieldPosNode = BattleSequenceManager__GetTargetFieldPosNode(
                               this,
                               targetPosIndex + 1,
                               v6->fields.PosNodeFormatNP,
                               1,
                               v12);
        this = (BattleSequenceManager_o *)BaseMonoBehaviour__createObject(
                                            v13,
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
        v22 = Method_System_Collections_Generic_List_Object__Add__;
        ++npEndDeleteObjects->fields._version;
        if ( !items )
          goto LABEL_43;
        size = npEndDeleteObjects->fields._size;
        v24 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            npEndDeleteObjects,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          npEndDeleteObjects->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v24;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
        }
        v26 = 0;
      }
      else
      {
        v26 = 1;
      }
      v27 = WellFired_USTimelineContainer__get_AffectedObject((WellFired_USTimelineContainer_o *)v5, 0LL);
      this = (BattleSequenceManager_o *)BasicHelper__AddNotExistComponent_object_(
                                          v27,
                                          (const MethodInfo_2E6A8E4 *)Method_BasicHelper_AddNotExistComponent_BattleSyncTransformComponent___);
      if ( !this )
        goto LABEL_43;
      v28 = BattleSyncTransformComponent__SetTarget(
              (BattleSyncTransformComponent_o *)this,
              (UnityEngine_Transform_o *)TargetPosIndexTransform,
              (BattleSyncTransformComponent_o *)Component_object,
              0LL);
      if ( v26 )
      {
        tlcont = (WellFired_USTimelineContainer_o *)v28;
        this = (BattleSequenceManager_o *)v6->fields.npEndDeleteObjects;
        if ( !this )
          goto LABEL_43;
        v31 = *(_QWORD *)&this->fields.m_CachedPtr;
        v32 = Method_System_Collections_Generic_List_Object__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v31 )
          goto LABEL_43;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)tlcont,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v34 + 32) = tlcont;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)tlcont, v29, v30);
        }
      }
      this = (BattleSequenceManager_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        return;
      }
LABEL_43:
      sub_1B8880C(this, tlcont);
    }
  }
}


void __fastcall BattleSequenceManager__TargetTransformOverwriteOrReset(
        BattleSequenceManager_o *this,
        bool isOverwrite,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *monitor; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  System_Collections_ICollection_o *Components_object; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  void *v17; // x8
  unsigned __int64 v18; // x26
  NoblePhantasmTargetOverwriteTransform_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5D827 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D827 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( battleTargetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      battleTargetList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    v21 = v20;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v21,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
      if ( !v6 )
        break;
      if ( !v21.fields._current )
        sub_1B8880C(v6, v7);
      monitor = (UnityEngine_Object_o *)v21.fields._current[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality(monitor, 0LL, 0LL);
      if ( !v9 )
      {
        if ( !monitor )
          sub_1B8880C(v9, v10);
        v11 = (UnityEngine_Object_o *)monitor[1].monitor;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
        {
          v13 = (UnityEngine_GameObject_o *)monitor[1].monitor;
          if ( !v13 )
            sub_1B8880C(0LL, v12);
          Components_object = (System_Collections_ICollection_o *)UnityEngine_GameObject__GetComponents_object_(
                                                                    v13,
                                                                    (const MethodInfo_2ECF814 *)Method_UnityEngine_GameObject_GetComponents_NoblePhantasmTargetOverwriteTransform___);
          IsNullOrEmpty = BasicHelper__IsNullOrEmpty(Components_object, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !Components_object )
              sub_1B8880C(IsNullOrEmpty, v16);
            v17 = Components_object[1].monitor;
            if ( (int)v17 >= 1 )
            {
              v18 = 0LL;
              do
              {
                if ( v18 >= (unsigned int)v17 )
                  sub_1B88814(IsNullOrEmpty, v16);
                v19 = (NoblePhantasmTargetOverwriteTransform_o *)*((_QWORD *)&Components_object[2].klass + v18);
                if ( isOverwrite )
                {
                  if ( !v19 )
                    sub_1B8880C(0LL, v16);
                  NoblePhantasmTargetOverwriteTransform__OverwriteTarget(v19, (BattleActorControl_o *)monitor, 0LL);
                }
                else
                {
                  if ( !v19 )
                    sub_1B8880C(0LL, v16);
                  NoblePhantasmTargetOverwriteTransform__ResetTarget(v19, (BattleActorControl_o *)monitor, 0LL);
                }
                LODWORD(v17) = Components_object[1].monitor;
                ++v18;
              }
              while ( (__int64)v18 < (int)v17 );
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
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
    sub_1B8880C(this, changeBgm);
  nowAction = performance->fields.nowAction;
  if ( nowAction )
    TdAfterChangeBgm_k__BackingField = nowAction->fields._TdAfterChangeBgm_k__BackingField;
  else
    TdAfterChangeBgm_k__BackingField = 0LL;
  *changeBgm = TdAfterChangeBgm_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)changeBgm,
    (int32_t)TdAfterChangeBgm_k__BackingField,
    (int32_t)method,
    v3);
  return TdAfterChangeBgm_k__BackingField != 0LL;
}


void __fastcall BattleSequenceManager__Update(BattleSequenceManager_o *this, const MethodInfo *method)
{
  float delayInvokeTimer; // s8
  __int64 v4; // x1
  float v5; // s0
  System_Collections_Generic_List_object__o *DelayInvokeMethodList; // x0
  struct System_Collections_Generic_List_Action__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D7F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Action__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Action__GetEnumerator__);
    byte_4A5D7F2 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  delayInvokeTimer = this->fields.delayInvokeTimer;
  if ( delayInvokeTimer > 0.0 )
  {
    v5 = delayInvokeTimer - UnityEngine_Time__get_deltaTime(0LL);
    this->fields.delayInvokeTimer = v5;
    if ( v5 <= 0.0 )
    {
      DelayInvokeMethodList = (System_Collections_Generic_List_object__o *)this->fields.DelayInvokeMethodList;
      if ( !DelayInvokeMethodList )
        goto LABEL_14;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        DelayInvokeMethodList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Action__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Action__MoveNext__) )
      {
        if ( v10.fields._current )
          ((void (__fastcall *)(Il2CppClass *, void *))v10.fields._current[1].monitor)(
            v10.fields._current[4].klass,
            v10.fields._current[2].monitor);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Action__Dispose__);
      v7 = this->fields.DelayInvokeMethodList;
      if ( !v7 )
LABEL_14:
        sub_1B8880C(DelayInvokeMethodList, v4);
      size = v7->fields._size;
      v9 = v7->fields._version + 1;
      v7->fields._size = 0;
      v7->fields._version = v9;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
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

  if ( (byte_4A5D80A & 1) == 0 )
  {
    sub_1B885B0(&BattleSequenceManager__WaitEndSequence_d__110_TypeInfo);
    byte_4A5D80A = 1;
  }
  v3 = sub_1B887FC(BattleSequenceManager__WaitEndSequence_d__110_TypeInfo);
  BattleSequenceManager__WaitEndSequence_d__110___ctor((BattleSequenceManager__WaitEndSequence_d__110_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleSequenceManager___ReleaseCpk_b__117_0(BattleSequenceManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *ReleaseSoundNames; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5D82B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4A5D82B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  ReleaseSoundNames = this->fields.ReleaseSoundNames;
  if ( !ReleaseSoundNames )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)ReleaseSoundNames,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields._current;
    if ( !BasicHelper__EqualExceptNullOrEmpty(this->fields.BackupBgmName, (System_String_o *)v11.fields._current, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1B8880C(0LL, v6);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  v7 = this->fields.ReleaseSoundNames;
  if ( !v7 )
LABEL_14:
    sub_1B8880C(ReleaseSoundNames, method);
  size = v7->fields._size;
  v9 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
}


void __fastcall BattleSequenceManager___setup_b__91_1(
        BattleSequenceManager_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || !comp )
    sub_1B8880C(this, comp);
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

  if ( (byte_4A5D7FD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5D7FD = 1;
  }
  FlagRequestNumber = System_String__Concat_61707032((System_String_o *)StringLiteral_16123/*"_"*/, labelName, 0LL);
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
        BattleData__AddServantVoicePlayed_42495304((BattleData_o *)FlagRequestNumber, chrId, v12, 0, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1B8880C(FlagRequestNumber, v10);
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
  BattlePerformance_o *performance; // x23
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
  if ( (byte_4A5D806 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager_OnBgChanged__);
    byte_4A5D806 = 1;
  }
  this->fields.IsBgBusy = 1;
  this->fields.BgChangedCallback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BgChangedCallback, (int32_t)callback, tp, parentCamera);
  performance = this->fields.performance;
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleSequenceManager_OnBgChanged__, 0LL);
  if ( !performance )
    sub_1B8880C(v21, v22);
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

  if ( (byte_4A5D7FF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5D7FF = 1;
  }
  FlagRequestNumber = System_String__Concat_61707032((System_String_o *)StringLiteral_16123/*"_"*/, labelName, 0LL);
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
    sub_1B8880C(FlagRequestNumber, v10);
  }
  LOBYTE(FlagRequestNumber) = BattleData__checkServantVoicePlayed((BattleData_o *)FlagRequestNumber, chrId, v12, 0LL);
  return (char)FlagRequestNumber;
}


int32_t __fastcall BattleSequenceManager__getPlayAudioSyncGroup(
        BattleSequenceManager_o *this,
        System_String_o *groupName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4A5D81C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4A5D81C = 1;
  }
  playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
         (Il2CppObject *)groupName,
         (const MethodInfo_31BE4D4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    playAudioSyncGroupIndexDict = this->fields.playAudioSyncGroupIndexDict;
    if ( playAudioSyncGroupIndexDict )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)playAudioSyncGroupIndexDict,
               (Il2CppObject *)groupName,
               (const MethodInfo_31BE260 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
LABEL_8:
    sub_1B8880C(playAudioSyncGroupIndexDict, groupName);
  }
  return -1;
}


System_String_array *__fastcall BattleSequenceManager__getPlayedSoundList(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D81E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    byte_4A5D81E = 1;
  }
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.playedAudioGroupIdHash,
                                  (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
}


BattleActorControl_o *__fastcall BattleSequenceManager__get_BattleActor(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actor; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4A5D7EE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7EE = 1;
  }
  actor = (UnityEngine_Object_o *)this->fields.actor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(actor, 0LL, 0LL) )
    return 0LL;
  v5 = this->fields.actor;
  if ( !v5 )
    sub_1B8880C(0LL, v4);
  return (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   v5,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
}


bool __fastcall BattleSequenceManager__get_ExistChangeFieldAfter(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  return this->fields.changeFieldAfter != 0LL;
}


bool __fastcall BattleSequenceManager__get_FarClippingLock(BattleSequenceManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x0
  UnityEngine_Object_o *v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5D7F1 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
    byte_4A5D7F1 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_FGOSequenceManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1BDA48C(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) || !this->fields.IsPlaying )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_FGOSequenceManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
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

  if ( (byte_4A5D7EF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7EF = 1;
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
    sub_1B8880C(v4, v5);
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
  UnityEngine_Object_o *performance; // x20
  void *Component_object; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  UnityEngine_Object_o *actor; // x20
  struct BattlePerformance_o *v9; // x8
  struct BattleActionData_o *nowAction; // x8
  BattleServantData_o *v11; // x20
  struct BattlePerformance_o *v13; // x8

  if ( (byte_4A5D7F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7F0 = 1;
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
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
    sub_1B8880C(Component_object, v5);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Component_o *actorCamera; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct UnityEngine_Camera_o *middleCamera; // x1
  struct UnityEngine_Camera_o *cutIncamera; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x1
  System_Collections_Generic_Dictionary_object__int__o *v37; // x20
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_HashSet_T__o *v40; // x20
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_4A5D804 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4A5D804 = 1;
  }
  this->fields.performance = performance;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.performance,
    (int32_t)performance,
    (int32_t)actor,
    (int32_t)players);
  this->fields.actor = actor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actor, (int32_t)actor, v15, v16);
  this->fields.playerActors = players;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playerActors, (int32_t)players, v17, v18);
  this->fields.enemyActors = enemies;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyActors, (int32_t)enemies, v19, v20);
  this->fields.actorCamera = camera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actorCamera, (int32_t)camera, v21, v22);
  if ( !performance )
    goto LABEL_7;
  middleCamera = performance->fields.middleCamera;
  this->fields.effectCamera = middleCamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectCamera, (int32_t)middleCamera, v25, v26);
  cutIncamera = performance->fields.cutIncamera;
  this->fields.cutInCamera = cutIncamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cutInCamera, (int32_t)cutIncamera, v29, v30);
  actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
  if ( !actorCamera
    || (actorCamera = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(actorCamera, 0LL)) == 0LL )
  {
LABEL_7:
    sub_1B8880C(actorCamera, v24);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)actorCamera, 0LL);
  this->fields.originalCameraRoot = parent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.originalCameraRoot, (int32_t)parent, v32, v33);
  this->fields.bgObject = bg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgObject, (int32_t)bg, v34, v35);
  this->fields.IsPlaying = 1;
  BattleSequenceManager__FadeBattleUI(this, 0.3, 0.0, v36);
  v37 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v37,
    (const MethodInfo_31BD92C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.playAudioSyncGroupIndexDict = (struct System_Collections_Generic_Dictionary_string__int__o *)v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playAudioSyncGroupIndexDict, (int32_t)v37, v38, v39);
  v40 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v40,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.playedAudioGroupIdHash = (struct System_Collections_Generic_HashSet_string__o *)v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playedAudioGroupIdHash, (int32_t)v40, v41, v42);
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
  if ( (byte_4A5D81F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5D81F = 1;
  }
  return limitCounts
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)limitCounts,
           this->fields.limitCount,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall BattleSequenceManager__isValidObject(
        BattleSequenceManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  if ( (byte_4A5D801 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_2233/*"Actor"*/);
    sub_1B885B0(&StringLiteral_16774/*"animCamLoc"*/);
    byte_4A5D801 = 1;
  }
  return !System_String__op_Equality(name, (System_String_o *)StringLiteral_2233/*"Actor"*/, 0LL)
      && !System_String__op_Equality(name, (System_String_o *)StringLiteral_16774/*"animCamLoc"*/, 0LL);
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
  __int64 v17; // x20
  UnityEngine_GameObject_o *actor; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  AssetLoader_LoadEndDataHandler_o *v27; // x19

  if ( (byte_4A5D7F3 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__0__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass78_0_TypeInfo);
    sub_1B885B0(&StringLiteral_9502/*"NoblePhantasm/CutIns"*/);
    byte_4A5D7F3 = 1;
  }
  v17 = sub_1B887FC(BattleSequenceManager___c__DisplayClass78_0_TypeInfo);
  BattleSequenceManager___c__DisplayClass78_0___ctor((BattleSequenceManager___c__DisplayClass78_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  *(_QWORD *)(v17 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 64) = onComplete;
  *(_DWORD *)(v17 + 24) = chrId;
  *(_DWORD *)(v17 + 28) = limitCount;
  *(_DWORD *)(v17 + 32) = treasureDeviceId;
  *(_DWORD *)(v17 + 36) = treasureDeviceLv;
  *(_DWORD *)(v17 + 40) = npChargeStage;
  *(_DWORD *)(v17 + 56) = overwriteSvtVoiceId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 64), (int32_t)onComplete, v22, v23);
  actor = this->fields.actor;
  this->fields.chrId = *(_DWORD *)(v17 + 24);
  this->fields.limitCount = *(_DWORD *)(v17 + 28);
  this->fields.treasureDeviceId = *(_DWORD *)(v17 + 32);
  this->fields.overwriteSvtVoiceId = *(_DWORD *)(v17 + 56);
  if ( !actor )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  *(_QWORD *)(v17 + 48) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 48), (int32_t)Component_object, v25, v26);
  actor = *(UnityEngine_GameObject_o **)(v17 + 48);
  if ( !actor
    || (this->fields.actorLimitImgCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL),
        this->fields.faceType = 2,
        this->fields.loadStandFigureId = *(_DWORD *)(v17 + 24),
        (actor = *(UnityEngine_GameObject_o **)(v17 + 48)) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(actor, v19);
  }
  this->fields.loadStandFigureLimitCount = BattleActorControl__get_LimitImageIndex((BattleActorControl_o *)actor, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v17,
    Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9502/*"NoblePhantasm/CutIns"*/, v27, 1, 0LL);
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
  __int64 v10; // x0
  struct UnityEngine_GameObject_array **p_saveWaitEnemy; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *seqObject; // x23
  int32_t chrId; // w23
  struct BattlePerformance_o *v16; // x8
  struct BattlePerformance_o *v17; // x8
  UnityEngine_Camera_o *actorCamera; // x23
  int32_t cullingMask; // w24
  char v20; // w0
  UnityEngine_Camera_o *effectCamera; // x23
  int32_t v22; // w24
  char v23; // w0
  System_Collections_Generic_List_bool__o *v24; // x24
  BattleSequenceManager_o **p_ActorActiveList; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  struct BattlePerformance_o *v28; // x8
  struct UnityEngine_GameObject_array *p_actorlist; // x20
  __int64 v30; // x8
  unsigned __int64 v31; // x27
  UnityEngine_Object_o *v32; // x25
  System_Collections_Generic_List_bool__o *v33; // x24
  struct System_Boolean_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  struct System_Boolean_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppObject *Component_object; // x0
  const MethodInfo *v41; // x2
  struct BattlePerformance_o *v42; // x8
  struct UnityEngine_GameObject_array *v43; // x27
  __int64 v44; // x8
  unsigned __int64 v45; // x28
  UnityEngine_Object_o *v46; // x24
  Il2CppObject *v47; // x0
  const MethodInfo *v48; // x2
  int32_t v49; // w2
  int32_t v50; // w3
  struct UnityEngine_GameObject_array *v51; // x8
  __int64 v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct BattlePerformance_o *v55; // x8
  struct UnityEngine_GameObject_array *v56; // x8
  __int64 v57; // x0
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  bool v65; // w1
  BattleSequenceManager_o *v66; // x25
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  UnityEngine_GameObject_o *gameObject; // x21
  int32_t v71; // w2
  int32_t v72; // w3
  BattleSequenceManager_o *v73; // x22
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  int32_t v77; // w2
  int32_t v78; // w3
  BattleSequenceManager_o *v79; // x23
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  BattleSequenceManager_c *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  BattleSequenceManager_o *v88; // x23
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  int32_t v94; // w2
  int32_t v95; // w3
  BattleSequenceManager_o *v96; // x23
  int32_t v97; // w2
  int32_t v98; // w3
  int32_t v99; // w2
  int32_t v100; // w3
  System_Collections_Hashtable_o *v101; // x0
  System_String_o *BgmName; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  const MethodInfo *v105; // x2
  BattleSequenceManager_o *v106; // x21
  ServantStatusBattleListViewItem_o *p_playerActors; // x22
  System_Delegate_o *playerActors; // x23
  WellFired_USSequencer_PlaybackDelegate_o *v109; // x24
  System_Delegate_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_Delegate_o *v113; // x8
  WellFired_USSequencer_PlaybackDelegate_c *v114; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  const MethodInfo *v117; // x2
  __int64 v118; // x0
  System_Action_USSequencer__o *v119; // [xsp+8h] [xbp-78h]
  bool v120; // [xsp+10h] [xbp-70h]
  int v121; // [xsp+14h] [xbp-6Ch] BYREF
  float NoblePhantasmBgmVolumeRate; // [xsp+18h] [xbp-68h] BYREF
  int v123; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4A5D807 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__);
    sub_1B885B0(&BattleSequenceManager_TypeInfo);
    sub_1B885B0(&CommonUI_TypeInfo);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&WellFired_USSequencer_PlaybackDelegate_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12763/*"ShowNobleInfo"*/);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_9834/*"OnChangeBgmVolume"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_3226/*"Battle2D"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    this = (BattleSequenceManager_o *)sub_1B885B0(&iTween_TypeInfo);
    byte_4A5D807 = 1;
  }
  performance = v7->fields.performance;
  if ( !performance )
    goto LABEL_135;
  e_actorlist = performance->fields.e_actorlist;
  if ( !e_actorlist )
    goto LABEL_135;
  v10 = sub_1B88658(UnityEngine_GameObject___TypeInfo, e_actorlist->max_length);
  p_saveWaitEnemy = &v7->fields.saveWaitEnemy;
  v7->fields.saveWaitEnemy = (struct UnityEngine_GameObject_array *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.saveWaitEnemy, v10, v12, v13);
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
        (System_String_o *)StringLiteral_12763/*"ShowNobleInfo"*/,
        0.7,
        0LL);
    v16 = v7->fields.performance;
    if ( !v16 )
      goto LABEL_135;
    this = (BattleSequenceManager_o *)v16->fields.actioncamera;
    if ( !this )
      goto LABEL_135;
    BattleActionCamera__setSpecialMode((BattleActionCamera_o *)this, 0LL);
    v17 = v7->fields.performance;
    v7->fields.DemoMode = isDemoMode;
    if ( !v17 )
      goto LABEL_135;
    this = (BattleSequenceManager_o *)v17->fields.actioncamera;
    if ( !this )
      goto LABEL_135;
    v119 = callback;
    BattleActionCamera__saveEffectStatus((BattleActionCamera_o *)this, 0LL);
    actorCamera = v7->fields.actorCamera;
    if ( !actorCamera )
      goto LABEL_135;
    cullingMask = UnityEngine_Camera__get_cullingMask(v7->fields.actorCamera, 0LL);
    v20 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(actorCamera, cullingMask & ~(1 << v20), 0LL);
    effectCamera = v7->fields.effectCamera;
    if ( !effectCamera )
      goto LABEL_135;
    v22 = UnityEngine_Camera__get_cullingMask(v7->fields.effectCamera, 0LL);
    v23 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
    UnityEngine_Camera__set_cullingMask(effectCamera, (1 << v23) | v22, 0LL);
    v24 = (System_Collections_Generic_List_bool__o *)sub_1B887FC(System_Collections_Generic_List_bool__TypeInfo);
    System_Collections_Generic_List_bool____ctor(
      v24,
      (const MethodInfo_34B3F9C *)Method_System_Collections_Generic_List_bool___ctor__);
    v7->fields.ActorActiveList = v24;
    p_ActorActiveList = (BattleSequenceManager_o **)&v7->fields.ActorActiveList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.ActorActiveList, (int32_t)v24, v26, v27);
    v28 = v7->fields.performance;
    if ( !v28 )
      goto LABEL_135;
    p_actorlist = v28->fields.p_actorlist;
    v120 = isDemoMode;
    if ( !p_actorlist )
      goto LABEL_135;
    v30 = *(_QWORD *)&p_actorlist->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      while ( v31 < (unsigned int)v30 )
      {
        v32 = (UnityEngine_Object_o *)p_actorlist->m_Items[v31];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
        v33 = (System_Collections_Generic_List_bool__o *)*p_ActorActiveList;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v32 )
            goto LABEL_135;
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)v32, 0LL);
          if ( !v33 )
            goto LABEL_135;
          items = v33->fields._items;
          v35 = Method_System_Collections_Generic_List_bool__Add__;
          ++v33->fields._version;
          if ( !items )
            goto LABEL_135;
          size = v33->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v33,
              (unsigned __int8)this & 1,
              *(const MethodInfo_34B4800 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v33->fields._size = size + 1;
            items->m_Items[size + 4] = (unsigned __int8)this & 1;
          }
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v32,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)Component_object,
            (BattleActorControl_o *)Component_object,
            v41);
        }
        else
        {
          if ( !v33 )
            goto LABEL_135;
          v37 = v33->fields._items;
          v38 = Method_System_Collections_Generic_List_bool__Add__;
          ++v33->fields._version;
          if ( !v37 )
            goto LABEL_135;
          v39 = v33->fields._size;
          if ( (unsigned int)v39 >= v37->max_length )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              v33,
              0,
              *(const MethodInfo_34B4800 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v33->fields._size = v39 + 1;
            v37->m_Items[v39 + 4] = 0;
          }
        }
        LODWORD(v30) = p_actorlist->max_length;
        if ( (__int64)++v31 >= (int)v30 )
          goto LABEL_46;
      }
LABEL_136:
      sub_1B88814(this, isOpponent);
    }
LABEL_46:
    v42 = v7->fields.performance;
    if ( !v42 )
      goto LABEL_135;
    v43 = v42->fields.e_actorlist;
    if ( !v43 )
      goto LABEL_135;
    v44 = *(_QWORD *)&v43->max_length;
    if ( (int)v44 >= 1 )
    {
      v45 = 0LL;
      do
      {
        if ( v45 >= (unsigned int)v44 )
          goto LABEL_136;
        v46 = (UnityEngine_Object_o *)v43->m_Items[v45];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleSequenceManager_o *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v46 )
            goto LABEL_135;
          v47 = UnityEngine_GameObject__GetComponent_object_(
                  (UnityEngine_GameObject_o *)v46,
                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          BattleSequenceManager__PrevPlayTargetActorProc(
            (BattleSequenceManager_o *)v47,
            (BattleActorControl_o *)v47,
            v48);
          this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v46,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
          if ( !this )
            goto LABEL_135;
          this = (BattleSequenceManager_o *)this[1].fields.FadeTargetPanelIndexs;
          if ( !this )
            goto LABEL_135;
          this = (BattleSequenceManager_o *)BattleServantData__isDeadWaitNotAlive((BattleServantData_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v51 = *p_saveWaitEnemy;
            if ( !*p_saveWaitEnemy )
              goto LABEL_135;
            if ( v45 >= v51->max_length )
              goto LABEL_136;
            v52 = (__int64)v51 + 8 * v45;
            *(_QWORD *)(v52 + 32) = v46;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)v46, v49, v50);
            v55 = v7->fields.performance;
            if ( !v55 )
              goto LABEL_135;
            v56 = v55->fields.e_actorlist;
            if ( !v56 )
              goto LABEL_135;
            if ( v45 >= v56->max_length )
              goto LABEL_136;
            v57 = (__int64)v56 + 8 * v45;
            *(_QWORD *)(v57 + 32) = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 32), 0, v53, v54);
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v46, 0, 0LL);
            this = *p_ActorActiveList;
            if ( !*p_ActorActiveList )
              goto LABEL_135;
            v58 = *(_QWORD *)&this->fields.m_CachedPtr;
            v59 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(this->fields.m_CancellationTokenSource);
            if ( !v58 )
              goto LABEL_135;
            m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v58 + 24) )
            {
              v64 = v59[4];
              v65 = 1;
              goto LABEL_78;
            }
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_BYTE *)(v58 + m_CancellationTokenSource_low + 32) = 1;
          }
          else
          {
            v66 = *p_ActorActiveList;
            this = (BattleSequenceManager_o *)UnityEngine_GameObject__get_activeSelf(
                                                (UnityEngine_GameObject_o *)v46,
                                                0LL);
            if ( !v66 )
              goto LABEL_135;
            v67 = *(_QWORD *)&v66->fields.m_CachedPtr;
            v68 = Method_System_Collections_Generic_List_bool__Add__;
            ++HIDWORD(v66->fields.m_CancellationTokenSource);
            if ( !v67 )
              goto LABEL_135;
            v69 = SLODWORD(v66->fields.m_CancellationTokenSource);
            if ( (unsigned int)v69 >= *(_DWORD *)(v67 + 24) )
            {
              v64 = v68[4];
              v65 = (unsigned __int8)this & 1;
              this = v66;
              goto LABEL_78;
            }
            LODWORD(v66->fields.m_CancellationTokenSource) = v69 + 1;
            *(_BYTE *)(v67 + v69 + 32) = (unsigned __int8)this & 1;
          }
        }
        else
        {
          this = *p_ActorActiveList;
          if ( !*p_ActorActiveList )
            goto LABEL_135;
          v61 = *(_QWORD *)&this->fields.m_CachedPtr;
          v62 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v61 )
            goto LABEL_135;
          v63 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
          {
            v64 = v62[4];
            v65 = 0;
LABEL_78:
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              v65,
              *(const MethodInfo_34B4800 **)(*(_QWORD *)(v64 + 192) + 112LL));
            goto LABEL_79;
          }
          LODWORD(this->fields.m_CancellationTokenSource) = v63 + 1;
          *(_BYTE *)(v61 + v63 + 32) = 0;
        }
LABEL_79:
        LODWORD(v44) = v43->max_length;
      }
      while ( (__int64)++v45 < (int)v44 );
    }
    if ( !v120 )
      BattleSequenceManager__SearchTargetAndModifyPositions(v7, (const MethodInfo *)isOpponent);
    BattleSequenceManager__SaveCurrentBgmPlayArgsGroup(v7, (const MethodInfo *)isOpponent);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
    this = (BattleSequenceManager_o *)sub_1B88658(object___TypeInfo, 8LL);
    if ( !this )
      goto LABEL_135;
    v73 = this;
    this = (BattleSequenceManager_o *)StringLiteral_19656/*"from"*/;
    if ( StringLiteral_19656/*"from"*/ )
    {
      this = (BattleSequenceManager_o *)sub_1B886EC(StringLiteral_19656/*"from"*/, v73->klass->_1.element_class);
      if ( !this )
        goto LABEL_137;
      *(_QWORD *)&isOpponent = StringLiteral_19656/*"from"*/;
    }
    else
    {
      *(_QWORD *)&isOpponent = 0LL;
    }
    if ( !LODWORD(v73->fields.m_CancellationTokenSource) )
      goto LABEL_136;
    v73->fields.sequenceManager = (struct UnityEngine_GameObject_o *)isOpponent;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.sequenceManager, isOpponent, v71, v72);
    v123 = 1;
    this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v123, v74, v75, v76);
    v79 = this;
    if ( !this || (this = (BattleSequenceManager_o *)sub_1B886EC(this, v73->klass->_1.element_class)) != 0LL )
    {
      if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_136;
      *(_QWORD *)&v73->fields.servantId = v79;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.servantId, (int32_t)v79, v77, v78);
      this = (BattleSequenceManager_o *)StringLiteral_23969/*"to"*/;
      if ( StringLiteral_23969/*"to"*/ )
      {
        this = (BattleSequenceManager_o *)sub_1B886EC(StringLiteral_23969/*"to"*/, v73->klass->_1.element_class);
        if ( !this )
          goto LABEL_137;
        *(_QWORD *)&isOpponent = StringLiteral_23969/*"to"*/;
      }
      else
      {
        *(_QWORD *)&isOpponent = 0LL;
      }
      if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_136;
      *(_QWORD *)&v73->fields.testNpPer = isOpponent;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.testNpPer, isOpponent, v80, v81);
      v85 = BattleSequenceManager_TypeInfo;
      if ( !BattleSequenceManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleSequenceManager_TypeInfo);
        v85 = BattleSequenceManager_TypeInfo;
      }
      NoblePhantasmBgmVolumeRate = v85->static_fields->NoblePhantasmBgmVolumeRate;
      this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &NoblePhantasmBgmVolumeRate, v82, v83, v84);
      v88 = this;
      if ( !this || (this = (BattleSequenceManager_o *)sub_1B886EC(this, v73->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 3 )
          goto LABEL_136;
        v73->fields.FadeTargetPanelIndexs = (struct BattlePerformance_BattleUIPanel_array *)v88;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.FadeTargetPanelIndexs, (int32_t)v88, v86, v87);
        this = (BattleSequenceManager_o *)StringLiteral_23929/*"time"*/;
        if ( StringLiteral_23929/*"time"*/ )
        {
          this = (BattleSequenceManager_o *)sub_1B886EC(StringLiteral_23929/*"time"*/, v73->klass->_1.element_class);
          if ( !this )
            goto LABEL_137;
          *(_QWORD *)&isOpponent = StringLiteral_23929/*"time"*/;
        }
        else
        {
          *(_QWORD *)&isOpponent = 0LL;
        }
        if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 4 )
          goto LABEL_136;
        *(_QWORD *)&v73->fields.IsPlaying = isOpponent;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.IsPlaying, isOpponent, v89, v90);
        v121 = 1050253722;
        this = (BattleSequenceManager_o *)j_il2cpp_value_box_0(float_TypeInfo, &v121, v91, v92, v93);
        v96 = this;
        if ( !this || (this = (BattleSequenceManager_o *)sub_1B886EC(this, v73->klass->_1.element_class)) != 0LL )
        {
          if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 5 )
            goto LABEL_136;
          v73->fields.ReleaseSoundNames = (struct System_Collections_Generic_List_string__o *)v96;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.ReleaseSoundNames, (int32_t)v96, v94, v95);
          this = (BattleSequenceManager_o *)StringLiteral_22281/*"onupdate"*/;
          if ( StringLiteral_22281/*"onupdate"*/ )
          {
            this = (BattleSequenceManager_o *)sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v73->klass->_1.element_class);
            if ( !this )
              goto LABEL_137;
            *(_QWORD *)&isOpponent = StringLiteral_22281/*"onupdate"*/;
          }
          else
          {
            *(_QWORD *)&isOpponent = 0LL;
          }
          if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 6 )
            goto LABEL_136;
          v73->fields.performance = (struct BattlePerformance_o *)isOpponent;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.performance, isOpponent, v97, v98);
          this = (BattleSequenceManager_o *)StringLiteral_9834/*"OnChangeBgmVolume"*/;
          if ( !StringLiteral_9834/*"OnChangeBgmVolume"*/ )
          {
            *(_QWORD *)&isOpponent = 0LL;
LABEL_118:
            if ( LODWORD(v73->fields.m_CancellationTokenSource) <= 7 )
              goto LABEL_136;
            v73->fields.seqObject = (struct UnityEngine_GameObject_o *)isOpponent;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v73->fields.seqObject, isOpponent, v99, v100);
            if ( !iTween_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
            v101 = iTween__Hash((System_Object_array *)v73, 0LL);
            iTween__ValueTo(gameObject, v101, 0LL);
            this = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
            if ( this )
            {
              BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
              v7->fields.BackupBgmName = BgmName;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.BackupBgmName, (int32_t)BgmName, v103, v104);
              BattleSequenceManager__TargetTransformOverwriteOrReset(v7, 1, v105);
              this = (BattleSequenceManager_o *)v7->fields.seqObject;
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (BattleSequenceManager_o *)v7->fields.seqObject;
                if ( this )
                {
                  this = (BattleSequenceManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
                  if ( this )
                  {
                    v106 = this;
                    p_playerActors = (ServantStatusBattleListViewItem_o *)&this->fields.playerActors;
                    playerActors = (System_Delegate_o *)this->fields.playerActors;
                    v109 = (WellFired_USSequencer_PlaybackDelegate_o *)sub_1B887FC(WellFired_USSequencer_PlaybackDelegate_TypeInfo);
                    WellFired_USSequencer_PlaybackDelegate___ctor(
                      v109,
                      (Il2CppObject *)v7,
                      Method_BattleSequenceManager_OnNoblePhantasmPlayComplete__,
                      0LL);
                    v110 = System_Delegate__Combine(playerActors, (System_Delegate_o *)v109, 0LL);
                    v113 = v110;
                    if ( v110 )
                    {
                      v114 = WellFired_USSequencer_PlaybackDelegate_TypeInfo;
                      if ( (WellFired_USSequencer_PlaybackDelegate_c *)v110->klass == WellFired_USSequencer_PlaybackDelegate_TypeInfo )
                      {
                        p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v110;
                        if ( (WellFired_USSequencer_PlaybackDelegate_c *)v110->klass == v114 )
                          goto LABEL_130;
                      }
                      sub_1B88ACC(v110);
                    }
                    p_playerActors->klass = (ServantStatusBattleListViewItem_c *)v113;
LABEL_130:
                    sub_1B88554(p_playerActors, (int32_t)v113, v111, v112);
                    v7->fields.OnCompleteActorCallback = v119;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&v7->fields.OnCompleteActorCallback,
                      (int32_t)v119,
                      v115,
                      v116);
                    WellFired_USSequencer__Play((WellFired_USSequencer_o *)v106, 0LL);
                    if ( !CommonUI_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
                    if ( CommonUI__GetForceObi_16_9(0LL) )
                      BattleSequenceManager__SwitchPopupFullScreen(v7, 0, v117);
                    return;
                  }
                }
              }
            }
LABEL_135:
            sub_1B8880C(this, isOpponent);
          }
          this = (BattleSequenceManager_o *)sub_1B886EC(StringLiteral_9834/*"OnChangeBgmVolume"*/, v73->klass->_1.element_class);
          if ( this )
          {
            *(_QWORD *)&isOpponent = StringLiteral_9834/*"OnChangeBgmVolume"*/;
            goto LABEL_118;
          }
        }
      }
    }
LABEL_137:
    v118 = sub_1B88830(this);
    sub_1B886D8(v118, 0LL);
  }
}


void __fastcall BattleSequenceManager__registNobleVoiceRandomPlay(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actor; // x0
  Il2CppObject *Component_object; // x20
  _DWORD *monitor; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  const MethodInfo *v9; // x1
  System_String_array *PlayedSoundList; // x0
  System_String_array *v11; // x20
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  VoiceMaster_o *v15; // x21
  int32_t chrId; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v18; // x4
  __int64 v19; // x8
  unsigned __int64 v20; // x22

  if ( (byte_4A5D820 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Voice_TypeInfo);
    byte_4A5D820 = 1;
  }
  actor = this->fields.actor;
  if ( !actor )
    goto LABEL_31;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       actor,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
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
        v7 = this->fields.performance;
        if ( !v7 )
          goto LABEL_31;
        data = (UnityEngine_Object_o *)v7->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          PlayedSoundList = BattleSequenceManager__getPlayedSoundList(this, v9);
          if ( PlayedSoundList )
          {
            v11 = PlayedSoundList;
            if ( *(_QWORD *)&PlayedSoundList->max_length )
            {
              actor = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( actor )
              {
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)actor,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceMaster___);
                v15 = (VoiceMaster_o *)MasterData_object;
                if ( !this->fields.isAlreadyRegistDefaultVoice )
                {
                  chrId = this->fields.chrId;
                  if ( !Voice_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                  FileName = Voice__getFileName(111, 0LL);
                  BattleSequenceManager__removeServantVoicePlayed(this, v15, chrId, FileName, v18);
                }
                v19 = *(_QWORD *)&v11->max_length;
                if ( (int)v19 >= 1 )
                {
                  v20 = 0LL;
                  do
                  {
                    if ( v20 >= (unsigned int)v19 )
                      sub_1B88814(MasterData_object, v13);
                    BattleSequenceManager__addServantVoicePlayed(this, v15, this->fields.chrId, v11->m_Items[v20], v14);
                    LODWORD(v19) = v11->max_length;
                    ++v20;
                  }
                  while ( (__int64)v20 < (int)v19 );
                }
                return;
              }
LABEL_31:
              sub_1B8880C(actor, method);
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

  if ( (byte_4A5D7FE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16123/*"_"*/);
    byte_4A5D7FE = 1;
  }
  FlagRequestNumber = System_String__Concat_61707032((System_String_o *)StringLiteral_16123/*"_"*/, labelName, 0LL);
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
    sub_1B8880C(FlagRequestNumber, v10);
  }
}


void __fastcall BattleSequenceManager__restoreBattleActorTransform(
        BattleSequenceManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattleSequenceManager_BattleTarget__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D81B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
    byte_4A5D81B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
  if ( !battleTargetList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    battleTargetList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B8880C(0LL, v4);
    BattleSequenceManager_BattleTarget__restoreTransform(
      (BattleSequenceManager_BattleTarget_o *)v8.fields._current,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSequenceManager_BattleTarget__Dispose__);
  v5 = this->fields.battleTargetList;
  if ( !v5 )
LABEL_13:
    sub_1B8880C(battleTargetList, method);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0LL);
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Object_o *v14; // x0
  UnityEngine_Object_o *v15; // x19

  if ( (byte_4A5D802 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3217/*"Battle/Prefab/"*/);
    byte_4A5D802 = 1;
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
    v12 = (Il2CppObject *)Manager__loadNoblePhantasmEffect;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v12,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_3217/*"Battle/Prefab/"*/, name, 0LL);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (Il2CppObject *)v15;
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                         v12,
                                         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  __int64 v17; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  Il2CppObject *Component_object; // x0
  __int64 v22; // x1
  WellFired_USTimelineContainer_o *v23; // x21
  System_String_o *monitor; // x22
  System_String_o *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5D803 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    this = (BattleSequenceManager_o *)sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5D803 = 1;
  }
  if ( !seq
    || (this = (BattleSequenceManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seq, 0LL)) == 0LL )
  {
    sub_1B8880C(this, seq);
  }
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)this, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_17:
      v15 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1B8880C(0LL, v17);
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B88ACC(v16);
LABEL_37:
      sub_1B8880C(Component_object, v22);
    }
    gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !gameObject )
      sub_1B8880C(0LL, v20);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v23 = (WellFired_USTimelineContainer_o *)Component_object;
    if ( !Component_object )
      goto LABEL_37;
    monitor = (System_String_o *)Component_object[2].monitor;
    v25 = System_String__Concat_61707032((System_String_o *)StringLiteral_1123/*"/"*/, name, 0LL);
    if ( System_String__op_Equality(monitor, v25, 0LL) )
      goto LABEL_27;
  }
  v23 = 0LL;
LABEL_27:
  v26 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v31 = sub_1BDA590(v26, System_IDisposable_TypeInfo, 0LL);
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
  System_Collections_Generic_Dictionary_object__int__o *playAudioSyncGroupIndexDict; // x0

  if ( (byte_4A5D81D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4A5D81D = 1;
  }
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playAudioSyncGroupIndexDict;
  if ( !playAudioSyncGroupIndexDict )
    goto LABEL_7;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    playAudioSyncGroupIndexDict,
    (Il2CppObject *)groupName,
    value,
    (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  if ( System_String__IsNullOrEmpty(playSoundId, 0LL) )
    return;
  playAudioSyncGroupIndexDict = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.playedAudioGroupIdHash;
  if ( !playAudioSyncGroupIndexDict )
LABEL_7:
    sub_1B8880C(playAudioSyncGroupIndexDict, groupName);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_T__o *)playAudioSyncGroupIndexDict,
    (Il2CppObject *)playSoundId,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_string__Add__);
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
  __int64 seqObject; // x0
  Il2CppObject *Component_object; // x28
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *ComponentsInChildren_object__48721436; // x0
  BattleSequenceManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *_9__91_0; // x21
  Il2CppObject *v15; // x23
  struct BattleSequenceManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_T__o *v19; // x20
  System_Action_object__o *v20; // x21
  BattleSequenceManager_o *v21; // x0
  const MethodInfo *v22; // x3
  WellFired_USTimelineContainer_o *v23; // x26
  System_Collections_Generic_List_object__o *v24; // x21
  System_Collections_Generic_List_object__o *v25; // x29
  Il2CppObject *v26; // x20
  Il2CppObject *klass; // x23
  UnityEngine_Object_o *v28; // x23
  System_Collections_Generic_List_object__o *v29; // x27
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  __int64 v35; // x1
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppClass *v39; // x1
  __int64 v40; // x27
  void *monitor; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppClass *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppClass *v49; // x8
  Il2CppMethodPointer methodPtr; // x1
  Il2CppObject *v51; // x28
  struct UnityEngine_Vector3_StaticFields *v52; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  Il2CppObject *v56; // x0
  ServantStatusBattleListViewItem_o *v57; // x27
  int32_t v58; // w2
  int32_t v59; // w3
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x2
  int v62; // w8
  __int64 v63; // x20
  int v64; // w24
  UnityEngine_Object_o *v65; // x27
  __int64 v66; // x8
  __int64 v67; // x26
  unsigned __int64 v68; // x25
  __int64 v69; // x28
  System_String_o *name; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  UnityEngine_Object_c *v73; // x8
  int32_t v74; // w27
  System_String_o *v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x10
  System_String_o *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x9
  Il2CppClass *v83; // x1
  UnityEngine_Transform_o *parent; // x0
  ServantStatusBattleListViewItem_o *v85; // x0
  int32_t klass_high; // w29
  int32_t monitor_high; // w23
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x23
  int32_t v89; // w2
  int32_t v90; // w3
  System_Collections_Generic_List_object__o *v91; // x8
  struct System_Object_array *v92; // x9
  _QWORD *v93; // x10
  __int64 v94; // x11
  Il2CppClass **v95; // x0
  System_String_o *v96; // x0
  __int64 v97; // x9
  System_String_o **v98; // x29
  System_String_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  void *v105; // x1
  int32_t v106; // w2
  int32_t v107; // w3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass **v111; // x0
  __int64 methodPtr_low; // x9
  Il2CppClass *v113; // x1
  __int64 v114; // x28
  int32_t v115; // w2
  int32_t v116; // w3
  UnityEngine_Transform_o *v117; // x28
  int v118; // s0
  System_Collections_Generic_List_object__o *v121; // x25
  int32_t v122; // w2
  int32_t v123; // w3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  BattleSequenceManager_o *v128; // x0
  const MethodInfo *v129; // x3
  int32_t v130; // w2
  int32_t v131; // w3
  struct System_Object_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x1
  Il2CppClass **v136; // x0
  Il2CppObject *current; // x24
  _BOOL8 v138; // x0
  __int64 v139; // x1
  void *ComponentsInChildren_object; // x0
  __int64 v141; // x1
  void *v142; // x24
  int v143; // w8
  int i; // w27
  WellFired_USTimelineEvent_o *v145; // x0
  _QWORD *v146; // x25
  __int64 v147; // x8
  unsigned __int64 v148; // x28
  __int64 v149; // x26
  System_String_o *v150; // x0
  __int64 v151; // x9
  _BOOL8 v152; // x0
  __int64 v153; // x1
  int32_t v154; // w2
  int32_t v155; // w3
  UnityEngine_Component_o *v156; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  struct System_Object_array *v160; // x8
  _QWORD *v161; // x9
  __int64 v162; // x10
  Il2CppClass **v163; // x0
  __int64 v164; // x1
  System_Collections_IEnumerator_o *Enumerator; // x24
  int v166; // w19
  System_Collections_IEnumerator_c *v167; // x8
  __int64 v168; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v171; // x8
  __int64 v172; // x9
  System_Collections_IEnumerator_c **v173; // x10
  __int64 v174; // x0
  UnityEngine_Component_o *v175; // x0
  __int64 v176; // x1
  __int64 v177; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v179; // x1
  Il2CppObject *v180; // x0
  __int64 v181; // x1
  Il2CppObject *v182; // x25
  System_String_o *v183; // x0
  __int64 v184; // x1
  System_String_o *v185; // x0
  __int64 v186; // x1
  System_String_o *v187; // x0
  System_String_o *v188; // x0
  __int64 v189; // x0
  __int64 v190; // x8
  __int64 v191; // x24
  __int64 v192; // x9
  int *v193; // x10
  __int64 v194; // x0
  __int64 v195; // x1
  System_Collections_IEnumerator_c *v196; // x8
  __int64 v197; // x9
  int32_t *v198; // x10
  __int64 v199; // x0
  System_Collections_IEnumerator_c *v200; // x8
  __int64 v201; // x9
  System_Collections_IEnumerator_c **v202; // x10
  __int64 v203; // x0
  UnityEngine_Component_o *v204; // x0
  __int64 v205; // x1
  __int64 v206; // x9
  UnityEngine_GameObject_o *v207; // x0
  __int64 v208; // x1
  Il2CppObject *v209; // x0
  __int64 v210; // x1
  WellFired_USTimelineContainer_o *v211; // x24
  System_String_o *v212; // x0
  __int64 v213; // x1
  bool v214; // w25
  System_String_o *affectedObjectPath; // x0
  System_String_o *v216; // x27
  System_String_o *v217; // x0
  __int64 v218; // x1
  bool v219; // w28
  System_String_o *v220; // x0
  System_String_o *v221; // x0
  __int64 v222; // x1
  System_String_o *v223; // x0
  UnityEngine_Component_o *v224; // x0
  UnityEngine_Transform_o *v225; // x0
  System_String_o *v226; // x0
  __int64 v227; // x1
  UnityEngine_GameObject_o *v228; // x0
  __int64 v229; // x1
  UnityEngine_Transform_o *v230; // x25
  System_String_o *v231; // x0
  System_String_o *v232; // x0
  UnityEngine_Transform_o *v233; // x0
  UnityEngine_Object_o *AffectedObject; // x25
  __int64 v235; // x1
  System_String_o *v236; // x0
  bool v237; // w0
  __int64 v238; // x1
  __int64 *v239; // x8
  System_String_o *v240; // x0
  bool v241; // w0
  System_String_o *v242; // x28
  UnityEngine_GameObject_o *v243; // x0
  System_String_o *v244; // x27
  UnityEngine_Transform_o *v245; // x0
  __int64 v246; // x1
  UnityEngine_Object_o *v247; // x25
  _BOOL8 v248; // x0
  __int64 v249; // x1
  __int64 v250; // x1
  System_Collections_IEnumerator_o *v251; // x26
  System_Collections_IEnumerator_c *v252; // x8
  __int64 v253; // x9
  int32_t *v254; // x10
  __int64 v255; // x0
  System_Collections_IEnumerator_c *v256; // x8
  __int64 v257; // x9
  System_Collections_IEnumerator_c **v258; // x10
  __int64 v259; // x0
  UnityEngine_Component_o *v260; // x0
  __int64 v261; // x1
  UnityEngine_Object_o *v262; // x25
  __int64 v263; // x9
  UnityEngine_Object_o *v264; // x0
  __int64 v265; // x1
  System_String_o *v266; // x0
  __int64 v267; // x1
  System_String_o *v268; // x0
  _BOOL8 v269; // x0
  const MethodInfo *v270; // x2
  __int64 v271; // x1
  __int64 v272; // x1
  int32_t v273; // w25
  System_String_o *v274; // x26
  __int64 v275; // x0
  __int64 v276; // x25
  __int64 v277; // x8
  __int64 v278; // x9
  int *v279; // x10
  __int64 v280; // x0
  System_String_o *v281; // x25
  System_String_o *v282; // x0
  __int64 v283; // x1
  System_String_o *v284; // x0
  __int64 v285; // x1
  System_String_array *v286; // x0
  __int64 v287; // x1
  __int64 v288; // x1
  System_String_o *v289; // x26
  UnityEngine_GameObject_o *v290; // x0
  __int64 v291; // x1
  UnityEngine_Transform_o *v292; // x25
  System_String_o *v293; // x0
  System_String_o *v294; // x0
  __int64 v295; // x1
  System_String_o *v296; // x0
  UnityEngine_Transform_o *v297; // x0
  Il2CppObject *v298; // x25
  System_Collections_Generic_List_object__o *v299; // x0
  _BOOL8 v300; // x0
  __int64 v301; // x1
  System_String_o *v302; // x0
  __int64 v303; // x1
  System_String_o *v304; // x1
  _BOOL8 v305; // x0
  __int64 v306; // x1
  BattleBuffData_o *v307; // x3
  const MethodInfo *v308; // x5
  UnityEngine_Object_c *v309; // x8
  int32_t v310; // w4
  __int64 v311; // x1
  int32_t v312; // w2
  int32_t v313; // w3
  System_Collections_Generic_List_object__o *v314; // x0
  struct System_Object_array *v315; // x8
  _QWORD *v316; // x9
  __int64 v317; // x10
  Il2CppClass **v318; // x8
  __int64 v319; // x0
  __int64 v320; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v322; // x1
  UnityEngine_Transform_o *v323; // x0
  UnityEngine_Transform_o *v324; // x0
  __int64 v325; // x1
  float v326; // s8
  float v327; // s9
  float v328; // s10
  __int64 v329; // x1
  UnityEngine_Transform_o *v330; // x26
  UnityEngine_GameObject_o *v331; // x0
  UnityEngine_Transform_o *v332; // x0
  UnityEngine_Transform_o *v333; // x0
  __int64 v334; // x1
  BattleSequenceManager_o *v335; // x0
  const MethodInfo *v336; // x4
  int32_t v337; // w26
  UnityEngine_Transform_o *v338; // x0
  __int64 v339; // x1
  UnityEngine_Transform_o *v340; // x0
  System_String_o *v341; // x0
  __int64 v342; // x1
  System_String_o *v343; // x0
  System_String_o *v344; // x0
  const MethodInfo *v345; // x3
  int32_t v346; // w2
  const MethodInfo *v347; // x3
  System_Object_array *EventCount; // x0
  __int64 v349; // x1
  System_Object_array *v350; // x24
  int max_length; // w8
  int j; // w28
  WellFired_USTimelineEvent_o *v353; // x25
  int32_t k; // w26
  UnityEngine_Object_o *v355; // x0
  __int64 v356; // x1
  Il2CppObject *v357; // x27
  System_String_o *v358; // x0
  __int64 v359; // x9
  _BOOL8 v360; // x0
  __int64 v361; // x1
  int32_t v362; // w2
  int32_t v363; // w3
  UnityEngine_Component_o *v364; // x0
  UnityEngine_Transform_o *v365; // x0
  int32_t v366; // w2
  int32_t v367; // w3
  struct System_Object_array *v368; // x8
  _QWORD *v369; // x9
  __int64 v370; // x10
  Il2CppClass **v371; // x0
  int32_t layer; // w26
  __int64 v373; // x20
  __int64 v374; // x8
  __int64 v375; // x23
  __int64 v376; // x9
  int *v377; // x10
  __int64 v378; // x0
  __int64 v379; // x1
  UnityEngine_Object_c *v380; // x8
  UnityEngine_Object_o *v381; // x21
  Il2CppClass *v382; // x8
  UnityEngine_Object_o *v383; // x21
  Il2CppObject *MasterData_object; // x21
  int32_t v385; // w22
  System_String_o *FileName; // x0
  const MethodInfo *v387; // x4
  int32_t v388; // w22
  System_String_o *v389; // x0
  const MethodInfo *v390; // x4
  UnityEngine_Object_c *v391; // x8
  int v392; // w20
  BalanceConfig_c *v393; // x0
  int32_t v394; // w20
  System_String_o *v395; // x0
  const MethodInfo *v396; // x4
  __int64 v397; // x0
  __int64 v398; // x20
  __int64 v399; // x8
  __int64 v400; // x9
  int *v401; // x10
  __int64 v402; // x0
  int v403; // w1
  int v404; // w19
  void *v405; // x0
  void *v406; // x25
  __int64 v407; // x0
  __int64 v408; // x19
  __int64 v409; // x8
  __int64 v410; // x9
  int *v411; // x10
  __int64 v412; // x0
  System_String_o *v413; // [xsp+8h] [xbp-138h]
  System_String_o *v414; // [xsp+10h] [xbp-130h]
  Il2CppObject *item; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v416; // [xsp+20h] [xbp-120h]
  char v417; // [xsp+20h] [xbp-120h]
  UnityEngine_Object_o *v418; // [xsp+28h] [xbp-118h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+30h] [xbp-110h]
  System_Collections_Generic_List_USFGOPlayCutInEvent__o *sourcea; // [xsp+30h] [xbp-110h]
  bool v421; // [xsp+38h] [xbp-108h]
  __int64 v422; // [xsp+38h] [xbp-108h]
  System_Collections_IEnumerator_o *v423; // [xsp+38h] [xbp-108h]
  Il2CppObject *object; // [xsp+40h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v425; // [xsp+48h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o m; // [xsp+60h] [xbp-E0h] BYREF
  int32_t targetPosIndex; // [xsp+7Ch] [xbp-C4h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v428; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v429; // [xsp+A0h] [xbp-A0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v431; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v433; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D7FC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
    sub_1B885B0(&Method_BattleSequenceManager__setup_b__91_1__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    sub_1B885B0(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__get_Current__);
    sub_1B885B0(&System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_USSequencer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USTimelineContainer__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_USTimelineContainer__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76172016);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__setup_b__91_0__);
    sub_1B885B0(&BattleSequenceManager___c_TypeInfo);
    sub_1B885B0(&WellFired_USFGOAnimationCameraEvent_TypeInfo);
    sub_1B885B0(&WellFired_USFGOAttachToParentEvent_TypeInfo);
    sub_1B885B0(&WellFired_USFGOChangeBgEvent_TypeInfo);
    sub_1B885B0(&WellFired_USFGOPlayCutInEvent_TypeInfo);
    sub_1B885B0(&WellFired_USFGOSetCameraEvent_TypeInfo);
    sub_1B885B0(&Voice_TypeInfo);
    sub_1B885B0(&StringLiteral_1131/*"/Actor/chr/"*/);
    sub_1B885B0(&StringLiteral_3228/*"BattleBG"*/);
    sub_1B885B0(&StringLiteral_1141/*"/BattleActors/"*/);
    sub_1B885B0(&StringLiteral_3230/*"BattleCamera"*/);
    sub_1B885B0(&StringLiteral_3233/*"BattleCutIn"*/);
    sub_1B885B0(&StringLiteral_14857/*"USFGOSetCameraEvent"*/);
    sub_1B885B0(&StringLiteral_2233/*"Actor"*/);
    sub_1B885B0(&StringLiteral_17359/*"body_level_"*/);
    sub_1B885B0(&StringLiteral_1133/*"/Actor/chr/weapon_level_"*/);
    sub_1B885B0(&StringLiteral_1132/*"/Actor/chr/body_level_"*/);
    sub_1B885B0(&StringLiteral_6369/*"FGOSequenceManager"*/);
    sub_1B885B0(&StringLiteral_1135/*"/AllEffects/"*/);
    sub_1B885B0(&StringLiteral_17965/*"chr(Clone)"*/);
    sub_1B885B0(&StringLiteral_3988/*"Cameras/BattleCamera"*/);
    sub_1B885B0(&StringLiteral_14855/*"USFGOChangeBgEvent"*/);
    sub_1B885B0(&StringLiteral_1153/*"/BattleCamera"*/);
    sub_1B885B0(&StringLiteral_1156/*"/CutIns/"*/);
    sub_1B885B0(&StringLiteral_3226/*"Battle2D"*/);
    sub_1B885B0(&StringLiteral_1155/*"/Cameras/BattleCamera"*/);
    sub_1B885B0(&StringLiteral_16774/*"animCamLoc"*/);
    sub_1B885B0(&StringLiteral_24673/*"weapon_level_"*/);
    sub_1B885B0(&StringLiteral_731/*"(Clone)"*/);
    sub_1B885B0(&StringLiteral_14854/*"USFGOAttachToParentEvent"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_1130/*"/Actor/chr"*/);
    sub_1B885B0(&StringLiteral_14853/*"USFGOAnimationCameraEvent"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    sub_1B885B0(&StringLiteral_14856/*"USFGOPlayCutInEvent"*/);
    byte_4A5D7FC = 1;
  }
  *(_QWORD *)result = 0LL;
  memset(&v429, 0, sizeof(v429));
  memset(&v428, 0, sizeof(v428));
  targetPosIndex = 0;
  memset(&m, 0, sizeof(m));
  seqObject = (__int64)this->fields.seqObject;
  object = (Il2CppObject *)this;
  if ( !seqObject )
    goto LABEL_432;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)seqObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USSequencer___);
  v10 = (UnityEngine_Object_o *)BattleSequenceManager__searchTimeline(
                                  (BattleSequenceManager_o *)Component_object,
                                  (WellFired_USSequencer_o *)Component_object,
                                  (System_String_o *)StringLiteral_2233/*"Actor"*/,
                                  v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    seqObject = (__int64)object[6].klass;
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    if ( !v10 )
      goto LABEL_432;
    WellFired_USTimelineContainer__set_AffectedObject(
      (WellFired_USTimelineContainer_o *)v10,
      (UnityEngine_Transform_o *)seqObject,
      0LL);
  }
  if ( !Component_object )
    goto LABEL_432;
  ComponentsInChildren_object__48721436 = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Component__GetComponentsInChildren_object__48721436(
                                                                                                 (UnityEngine_Component_o *)Component_object,
                                                                                                 (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_SwitchActiveBaseConditionComponent___);
  v12 = BattleSequenceManager___c_TypeInfo;
  item = (Il2CppObject *)v10;
  v421 = isDemoMode;
  if ( !BattleSequenceManager___c_TypeInfo->_2.cctor_finished )
  {
    v13 = ComponentsInChildren_object__48721436;
    j_il2cpp_runtime_class_init_0(BattleSequenceManager___c_TypeInfo);
    v12 = BattleSequenceManager___c_TypeInfo;
    ComponentsInChildren_object__48721436 = v13;
  }
  _9__91_0 = (System_Func_object__bool__o *)v12->static_fields->__9__91_0;
  v416 = (UnityEngine_Component_o *)Component_object;
  if ( !_9__91_0 )
  {
    source = ComponentsInChildren_object__48721436;
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleSequenceManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__91_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SwitchActiveBaseConditionComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__91_0, v15, Method_BattleSequenceManager___c__setup_b__91_0__, 0LL);
    static_fields = BattleSequenceManager___c_TypeInfo->static_fields;
    static_fields->__9__91_0 = (struct System_Func_SwitchActiveBaseConditionComponent__bool__o *)_9__91_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__91_0, (int32_t)_9__91_0, v17, v18);
    ComponentsInChildren_object__48721436 = source;
  }
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         ComponentsInChildren_object__48721436,
                                                         (System_Func_TSource__bool__o *)_9__91_0,
                                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_SwitchActiveBaseConditionComponent___);
  v20 = (System_Action_object__o *)sub_1B887FC(System_Action_SwitchActiveBaseConditionComponent__TypeInfo);
  System_Action_object____ctor(v20, object, Method_BattleSequenceManager__setup_b__91_1__, 0LL);
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)v20,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_SwitchActiveBaseConditionComponent___);
  v23 = BattleSequenceManager__searchTimeline(
          v21,
          (WellFired_USSequencer_o *)Component_object,
          (System_String_o *)StringLiteral_6369/*"FGOSequenceManager"*/,
          v22);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_USFGOAttachToParentEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_USFGOPlayCutInEvent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent___ctor__);
  seqObject = (__int64)object[6].klass;
  if ( !seqObject )
LABEL_432:
    sub_1B8880C(seqObject, callback);
  v26 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)seqObject,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v418 = (UnityEngine_Object_o *)v26;
  sourcea = (System_Collections_Generic_List_USFGOPlayCutInEvent__o *)v25;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
  {
    klass = (Il2CppObject *)object[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                           klass,
                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)seqObject, 0LL);
    v28 = (UnityEngine_Object_o *)v26;
    if ( !v23 )
      goto LABEL_432;
    WellFired_USTimelineContainer__set_AffectedObject(v23, (UnityEngine_Transform_o *)seqObject, 0LL);
    v29 = (System_Collections_Generic_List_object__o *)object[21].klass;
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v23, 0LL);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seqObject, 0LL);
    if ( !v29 )
      goto LABEL_432;
    items = v29->fields._items;
    v33 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v29->fields._version;
    if ( !items )
      goto LABEL_432;
    size = v29->fields._size;
    v35 = seqObject;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        (Il2CppObject *)seqObject,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      v29->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v35;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), v35, v30, v31);
    }
    seqObject = (__int64)WellFired_USTimelineContainer__get_AffectedObject(v23, 0LL);
    if ( !seqObject )
      goto LABEL_432;
    seqObject = (__int64)UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)seqObject,
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_FGOSequenceManager___);
    if ( !seqObject )
      goto LABEL_432;
    v39 = object[8].klass;
    v40 = seqObject;
    *(_QWORD *)(seqObject + 32) = v39;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(seqObject + 32), (int32_t)v39, v37, v38);
    monitor = object[8].monitor;
    *(_QWORD *)(v40 + 40) = monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 40), (int32_t)monitor, v42, v43);
    v44 = object[9].klass;
    *(_QWORD *)(v40 + 48) = v44;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 48), (int32_t)v44, v45, v46);
    v49 = object[5].klass;
    if ( !v49 )
      goto LABEL_432;
    methodPtr = v49->vtable[6].methodPtr;
    *(_QWORD *)(v40 + 96) = methodPtr;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 96), (int32_t)methodPtr, v47, v48);
    v51 = (Il2CppObject *)object[21].monitor;
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    v52 = UnityEngine_Vector3_TypeInfo->static_fields;
    x = v52->zeroVector.fields.x;
    y = v52->zeroVector.fields.y;
    z = v52->zeroVector.fields.z;
    if ( !byte_4A55CE7 )
    {
      sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4A55CE7 = 1;
    }
    v431.fields.x = x;
    v431.fields.y = y;
    v431.fields.z = z;
    v56 = UnityEngine_Object__Instantiate_object__49298104(
            v51,
            v431,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            (const MethodInfo_2F03AB8 *)Method_UnityEngine_Object_Instantiate_GameObject____76172016);
    *(_QWORD *)(v40 + 72) = v56;
    v57 = (ServantStatusBattleListViewItem_o *)(v40 + 72);
    sub_1B88554(v57, (int32_t)v56, v58, v59);
    seqObject = (__int64)v57->klass;
    if ( !v57->klass )
      goto LABEL_432;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)seqObject, 0, 0LL);
    if ( !v421 )
    {
      BattleSequenceManager__SetupTargetInfo((BattleSequenceManager_o *)object, v60);
      BattleSequenceManager__SetShaderNoblePhantasmMode((BattleSequenceManager_o *)object, 1, v61);
    }
    seqObject = (__int64)UnityEngine_Component__GetComponentsInChildren_object_(
                           (UnityEngine_Component_o *)v23,
                           1,
                           (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
    if ( !seqObject )
      goto LABEL_432;
    v62 = *(_DWORD *)(seqObject + 24);
    v63 = seqObject;
    if ( v62 >= 1 )
    {
      v64 = 0;
      v65 = 0LL;
      v422 = seqObject;
      while ( 1 )
      {
        if ( v64 >= (unsigned int)v62 )
LABEL_436:
          sub_1B88814(seqObject, callback);
        seqObject = *(_QWORD *)(v63 + 8LL * v64 + 32);
        if ( !seqObject )
          goto LABEL_432;
        seqObject = (__int64)WellFired_USTimelineEvent__get_Events((WellFired_USTimelineEvent_o *)seqObject, 0LL);
        if ( !seqObject )
          goto LABEL_432;
        v66 = *(_QWORD *)(seqObject + 24);
        v67 = seqObject;
        if ( (int)v66 >= 1 )
          break;
LABEL_109:
        v63 = v422;
        ++v64;
        v62 = *(_DWORD *)(v422 + 24);
        if ( v64 >= v62 )
          goto LABEL_110;
      }
      v68 = 0LL;
      while ( 1 )
      {
        if ( v68 >= (unsigned int)v66 )
          goto LABEL_436;
        v69 = *(_QWORD *)(v67 + 32 + 8 * v68);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        seqObject = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v69, 0LL, 0LL);
        if ( (seqObject & 1) == 0 )
        {
          if ( !v69 )
            goto LABEL_432;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
          if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_14853/*"USFGOAnimationCameraEvent"*/, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v65, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
              if ( (seqObject & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_432;
                v73 = v28[19].klass;
                if ( !v73 )
                  goto LABEL_432;
                v74 = (int32_t)v73[2]._1.name;
              }
              else
              {
                v74 = 0;
              }
              klass_high = HIDWORD(object[11].klass);
              monitor_high = HIDWORD(object[2].monitor);
              if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
              Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                   klass_high,
                                                                   monitor_high,
                                                                   (System_String_o *)StringLiteral_16774/*"animCamLoc"*/,
                                                                   v74,
                                                                   0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              seqObject = (__int64)UnityEngine_Object__Instantiate_object_(
                                     Manager__loadNoblePhantasmEffect,
                                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
              v91 = (System_Collections_Generic_List_object__o *)object[21].klass;
              v25 = (System_Collections_Generic_List_object__o *)sourcea;
              if ( !v91 )
                goto LABEL_432;
              v92 = v91->fields._items;
              v28 = v418;
              v93 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v91->fields._version;
              if ( !v92 )
                goto LABEL_432;
              v94 = v91->fields._size;
              v65 = (UnityEngine_Object_o *)seqObject;
              if ( (unsigned int)v94 >= v92->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v91,
                  (Il2CppObject *)seqObject,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
              }
              else
              {
                v95 = &v92->obj.klass + v94;
                v91->fields._size = v94 + 1;
                v95[4] = (Il2CppClass *)v65;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v95 + 4), (int32_t)v65, v89, v90);
              }
            }
            methodPtr_low = LOBYTE(WellFired_USFGOAnimationCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v69 + 304LL) < (unsigned int)methodPtr_low
              || *(WellFired_USFGOAnimationCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v69 + 200LL) + 8 * methodPtr_low - 8) != WellFired_USFGOAnimationCameraEvent_TypeInfo )
            {
              goto LABEL_437;
            }
            *(_QWORD *)(v69 + 56) = v65;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 56), (int32_t)v65, v71, v72);
            v113 = object[8].klass;
            *(_QWORD *)(v69 + 64) = v113;
            v114 = v69 + 64;
            sub_1B88554((ServantStatusBattleListViewItem_o *)v114, (int32_t)v113, v115, v116);
            *(_BYTE *)(v114 + 28) = 0;
            if ( !v65 )
              goto LABEL_432;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v65, 0LL);
            if ( !object[6].klass )
              goto LABEL_432;
            v117 = (UnityEngine_Transform_o *)seqObject;
            seqObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)object[6].klass, 0LL);
            if ( !seqObject )
              goto LABEL_432;
            *(UnityEngine_Vector3_o *)&v118 = UnityEngine_Transform__get_position(
                                                (UnityEngine_Transform_o *)seqObject,
                                                0LL);
            if ( !v117 )
              goto LABEL_432;
            UnityEngine_Transform__set_position(v117, *(UnityEngine_Vector3_o *)&v118, 0LL);
          }
          else
          {
            v75 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
            seqObject = System_String__op_Equality(v75, (System_String_o *)StringLiteral_14856/*"USFGOPlayCutInEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_432;
              v78 = LOBYTE(WellFired_USFGOPlayCutInEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v69 + 304LL) >= (unsigned int)v78 )
                callback = *(WellFired_USFGOPlayCutInEvent_c **)(*(_QWORD *)(*(_QWORD *)v69 + 200LL) + 8 * v78 - 8) == WellFired_USFGOPlayCutInEvent_TypeInfo
                         ? (System_Action_o *)v69
                         : 0LL;
              else
                callback = 0LL;
              v108 = v25->fields._items;
              v109 = Method_System_Collections_Generic_List_USFGOPlayCutInEvent__Add__;
              ++v25->fields._version;
              if ( !v108 )
                goto LABEL_432;
              v110 = v25->fields._size;
              if ( (unsigned int)v110 >= v108->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v25,
                  (Il2CppObject *)callback,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
                goto LABEL_108;
              }
              v111 = &v108->obj.klass + v110;
              v25->fields._size = v110 + 1;
              v111[4] = (Il2CppClass *)callback;
              v85 = (ServantStatusBattleListViewItem_o *)(v111 + 4);
              goto LABEL_98;
            }
            v79 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
            if ( System_String__op_Equality(v79, (System_String_o *)StringLiteral_14857/*"USFGOSetCameraEvent"*/, 0LL) )
            {
              v82 = LOBYTE(WellFired_USFGOSetCameraEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v69 + 304LL) < (unsigned int)v82
                || *(WellFired_USFGOSetCameraEvent_c **)(*(_QWORD *)(*(_QWORD *)v69 + 200LL) + 8 * v82 - 8) != WellFired_USFGOSetCameraEvent_TypeInfo )
              {
                goto LABEL_437;
              }
              v83 = object[8].klass;
              *(_QWORD *)(v69 + 56) = v83;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 56), (int32_t)v83, v80, v81);
              seqObject = (__int64)object[8].klass;
              if ( !seqObject )
                goto LABEL_432;
              seqObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seqObject, 0LL);
              if ( !seqObject )
                goto LABEL_432;
              parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)seqObject, 0LL);
              *(_QWORD *)(v69 + 64) = parent;
              LODWORD(callback) = (_DWORD)parent;
              v85 = (ServantStatusBattleListViewItem_o *)(v69 + 64);
LABEL_98:
              sub_1B88554(v85, (int32_t)callback, v76, v77);
              goto LABEL_108;
            }
            v96 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v69, 0LL);
            seqObject = System_String__op_Equality(v96, (System_String_o *)StringLiteral_14855/*"USFGOChangeBgEvent"*/, 0LL);
            if ( (seqObject & 1) != 0 )
            {
              v97 = LOBYTE(WellFired_USFGOChangeBgEvent_TypeInfo->vtable._0_Equals.methodPtr);
              if ( *(unsigned __int8 *)(*(_QWORD *)v69 + 304LL) < (unsigned int)v97
                || *(WellFired_USFGOChangeBgEvent_c **)(*(_QWORD *)(*(_QWORD *)v69 + 200LL) + 8 * v97 - 8) != WellFired_USFGOChangeBgEvent_TypeInfo )
              {
LABEL_437:
                sub_1B88ACC(v69);
LABEL_438:
                sub_1B88ACC(v175);
LABEL_439:
                sub_1B8880C(v355, v356);
              }
              v98 = (System_String_o **)(v69 + 64);
              if ( System_String__op_Equality(
                     *(System_String_o **)(v69 + 64),
                     (System_String_o *)StringLiteral_1212/*"0"*/,
                     0LL)
                || (seqObject = System_String__op_Equality(*v98, (System_String_o *)StringLiteral_1/*""*/, 0LL),
                    (seqObject & 1) != 0) )
              {
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_432;
                result[1] = BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)seqObject, 0LL);
                v99 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *v98 = v99;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 64), (int32_t)v99, v100, v101);
                seqObject = (__int64)object[5].klass;
                if ( !seqObject )
                  goto LABEL_432;
                result[1] = BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)seqObject, 0LL);
                v102 = System_Int32__ToString((int32_t)&result[1], 0LL);
                *(_QWORD *)(v69 + 72) = v102;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 72), (int32_t)v102, v103, v104);
                v105 = object[24].monitor;
                *(_QWORD *)(v69 + 136) = v105;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 136), (int32_t)v105, v106, v107);
              }
              v25 = (System_Collections_Generic_List_object__o *)sourcea;
            }
          }
        }
LABEL_108:
        LODWORD(v66) = *(_DWORD *)(v67 + 24);
        if ( (__int64)++v68 >= (int)v66 )
          goto LABEL_109;
      }
    }
  }
LABEL_110:
  v121 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_USTimelineContainer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v121,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_USTimelineContainer___ctor__);
  if ( !v121 )
    goto LABEL_432;
  v124 = v121->fields._items;
  v125 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v121->fields._version;
  if ( !v124 )
    goto LABEL_432;
  v126 = v121->fields._size;
  if ( (unsigned int)v126 >= v124->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v121,
      item,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v127 = &v124->obj.klass + v126;
    v121->fields._size = v126 + 1;
    v127[4] = (Il2CppClass *)item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v127 + 4), (int32_t)item, v122, v123);
  }
  seqObject = (__int64)BattleSequenceManager__searchTimeline(
                         v128,
                         (WellFired_USSequencer_o *)v416,
                         (System_String_o *)StringLiteral_3988/*"Cameras/BattleCamera"*/,
                         v129);
  v132 = v121->fields._items;
  v133 = Method_System_Collections_Generic_List_USTimelineContainer__Add__;
  ++v121->fields._version;
  if ( !v132 )
    goto LABEL_432;
  v134 = v121->fields._size;
  v135 = seqObject;
  if ( (unsigned int)v134 >= v132->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v121,
      (Il2CppObject *)seqObject,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v136 = &v132->obj.klass + v134;
    v121->fields._size = v134 + 1;
    v136[4] = (Il2CppClass *)v135;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v136 + 4), v135, v130, v131);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v425,
    v121,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_USTimelineContainer__GetEnumerator__);
  v429 = v425;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v429,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__MoveNext__) )
  {
    current = v429.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v138 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v138 )
    {
      if ( !current )
        sub_1B8880C(v138, v139);
      ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)current,
                                      1,
                                      (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
      v142 = ComponentsInChildren_object;
      if ( !ComponentsInChildren_object )
        sub_1B8880C(0LL, v141);
      v143 = *((_DWORD *)ComponentsInChildren_object + 6);
      if ( v143 >= 1 )
      {
        for ( i = 0; i < v143; ++i )
        {
          if ( i >= (unsigned int)v143 )
            sub_1B88814(ComponentsInChildren_object, v141);
          v145 = (WellFired_USTimelineEvent_o *)*((_QWORD *)v142 + i + 4);
          if ( !v145 )
            sub_1B8880C(0LL, v141);
          ComponentsInChildren_object = WellFired_USTimelineEvent__get_Events(v145, 0LL);
          v146 = ComponentsInChildren_object;
          if ( !ComponentsInChildren_object )
            sub_1B8880C(0LL, v141);
          v147 = *((_QWORD *)ComponentsInChildren_object + 3);
          if ( (int)v147 >= 1 )
          {
            v148 = 0LL;
            do
            {
              if ( v148 >= (unsigned int)v147 )
                sub_1B88814(ComponentsInChildren_object, v141);
              v149 = v146[v148 + 4];
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              ComponentsInChildren_object = (void *)UnityEngine_Object__op_Equality(
                                                      (UnityEngine_Object_o *)v149,
                                                      0LL,
                                                      0LL);
              if ( ((unsigned __int8)ComponentsInChildren_object & 1) == 0 )
              {
                if ( !v149 )
                  sub_1B8880C(ComponentsInChildren_object, v141);
                v150 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v149, 0LL);
                ComponentsInChildren_object = (void *)System_String__op_Equality(
                                                        v150,
                                                        (System_String_o *)StringLiteral_14854/*"USFGOAttachToParentEvent"*/,
                                                        0LL);
                if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
                {
                  v151 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( *(unsigned __int8 *)(*(_QWORD *)v149 + 304LL) < (unsigned int)v151
                    || *(WellFired_USFGOAttachToParentEvent_c **)(*(_QWORD *)(*(_QWORD *)v149 + 200LL) + 8 * v151 - 8) != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B88ACC(v149);
LABEL_429:
                    sub_1B8880C(v152, v153);
                  }
                  v152 = System_String__op_Equality(
                           *(System_String_o **)(v149 + 80),
                           (System_String_o *)StringLiteral_3230/*"BattleCamera"*/,
                           0LL);
                  if ( v152 )
                  {
                    v156 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v156 )
                      sub_1B8880C(0LL, v153);
                    transform = UnityEngine_Component__get_transform(v156, 0LL);
                    *(_QWORD *)(v149 + 64) = transform;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v149 + 64), (int32_t)transform, v158, v159);
                  }
                  else
                  {
                    if ( !v24 )
                      goto LABEL_429;
                    v160 = v24->fields._items;
                    v161 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v24->fields._version;
                    if ( !v160 )
                      sub_1B8880C(v152, v153);
                    v162 = v24->fields._size;
                    if ( (unsigned int)v162 >= v160->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        (Il2CppObject *)v149,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v163 = &v160->obj.klass + v162;
                      v24->fields._size = v162 + 1;
                      v163[4] = (Il2CppClass *)v149;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v163 + 4), v149, v154, v155);
                    }
                  }
                }
              }
              LODWORD(v147) = *((_DWORD *)v146 + 6);
              ++v148;
            }
            while ( (__int64)v148 < (int)v147 );
          }
          v143 = *((_DWORD *)v142 + 6);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v429,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_USTimelineContainer__Dispose__);
  seqObject = (__int64)UnityEngine_Component__get_transform(v416, 0LL);
  if ( !seqObject )
    goto LABEL_432;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v164);
  v166 = 0;
  while ( 1 )
  {
    v167 = Enumerator->klass;
    v168 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &v167->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v168;
        p_offset += 4;
        if ( !v168 )
          goto LABEL_159;
      }
      p_method = (__int64)&v167->vtable[*p_offset].method;
    }
    else
    {
LABEL_159:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v171 = Enumerator->klass;
    v172 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v173 = (System_Collections_IEnumerator_c **)&v171->_1.interfaceOffsets->offset;
      while ( *(v173 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v172;
        v173 += 2;
        if ( !v172 )
          goto LABEL_166;
      }
      v174 = (__int64)&v171->vtable[*(_DWORD *)v173 + 1].method;
    }
    else
    {
LABEL_166:
      v174 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v175 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v174)(
                                        Enumerator,
                                        *(_QWORD *)(v174 + 8));
    if ( !v175 )
      sub_1B8880C(0LL, v176);
    v177 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v175->klass->vtable._0_Equals.methodPtr) < (unsigned int)v177
      || (UnityEngine_Transform_c *)v175->klass->_2.typeHierarchy[v177 - 1] != UnityEngine_Transform_TypeInfo )
    {
      goto LABEL_438;
    }
    gameObject = UnityEngine_Component__get_gameObject(v175, 0LL);
    if ( !gameObject )
      sub_1B8880C(0LL, v179);
    v180 = UnityEngine_GameObject__GetComponent_object_(
             gameObject,
             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
    v182 = v180;
    if ( !v180 )
      goto LABEL_442;
    v183 = (System_String_o *)v180[2].monitor;
    if ( !v183 )
      sub_1B8880C(0LL, v181);
    if ( System_String__StartsWith(v183, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) && v182[2].monitor )
    {
      v185 = (System_String_o *)v182[2].monitor;
      if ( !v185 )
        sub_1B8880C(0LL, v184);
      if ( System_String__StartsWith(v185, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
      {
        v187 = (System_String_o *)v182[2].monitor;
        if ( !v187 )
          sub_1B8880C(0LL, v186);
        v188 = System_String__Substring_61726036(v187, v187->fields._stringLength - 1, 1, 0LL);
        result[0] = 1;
        v166 += System_Int32__TryParse(v188, result, 0LL);
      }
    }
  }
  v189 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v189 )
  {
    v190 = *(_QWORD *)v189;
    v191 = v189;
    v192 = *(unsigned __int16 *)(*(_QWORD *)v189 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v189 + 302LL) )
    {
      v193 = (int *)(*(_QWORD *)(v190 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v193 - 1) != System_IDisposable_TypeInfo )
      {
        --v192;
        v193 += 4;
        if ( !v192 )
          goto LABEL_185;
      }
      v194 = v190 + 16LL * *v193 + 312;
    }
    else
    {
LABEL_185:
      v194 = sub_1BDA590(v189, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v194)(v191, *(_QWORD *)(v194 + 8));
  }
  seqObject = (__int64)UnityEngine_Component__get_transform(v416, 0LL);
  if ( !seqObject )
    goto LABEL_432;
  v423 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)seqObject, 0LL);
  if ( !v423 )
    sub_1B8880C(0LL, v195);
  v417 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v196 = v423->klass;
          v197 = *(unsigned __int16 *)(&v423->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v423->klass->_2.bitflags2 + 3) )
          {
            v198 = &v196->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)v198 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v197;
              v198 += 4;
              if ( !v197 )
                goto LABEL_195;
            }
            v199 = (__int64)&v196->vtable[*v198].method;
          }
          else
          {
LABEL_195:
            v199 = sub_1BDA590(v423, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v199)(
                  v423,
                  *(_QWORD *)(v199 + 8)) & 1) == 0 )
          {
            v373 = 0LL;
            goto LABEL_380;
          }
          v200 = v423->klass;
          v201 = *(unsigned __int16 *)(&v423->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v423->klass->_2.bitflags2 + 3) )
          {
            v202 = (System_Collections_IEnumerator_c **)&v200->_1.interfaceOffsets->offset;
            while ( *(v202 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v201;
              v202 += 2;
              if ( !v201 )
                goto LABEL_202;
            }
            v203 = (__int64)&v200->vtable[*(_DWORD *)v202 + 1].method;
          }
          else
          {
LABEL_202:
            v203 = sub_1BDA590(v423, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v204 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v203)(
                                              v423,
                                              *(_QWORD *)(v203 + 8));
          if ( !v204 )
            sub_1B8880C(0LL, v205);
          v206 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v204->klass->vtable._0_Equals.methodPtr) < (unsigned int)v206
            || (UnityEngine_Transform_c *)v204->klass->_2.typeHierarchy[v206 - 1] != UnityEngine_Transform_TypeInfo )
          {
LABEL_441:
            sub_1B88ACC(v204);
LABEL_442:
            sub_1B8880C(v180, v181);
          }
          v207 = UnityEngine_Component__get_gameObject(v204, 0LL);
          if ( !v207 )
            sub_1B8880C(0LL, v208);
          v209 = UnityEngine_GameObject__GetComponent_object_(
                   v207,
                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_USTimelineContainer___);
          v211 = (WellFired_USTimelineContainer_o *)v209;
          if ( !v209 )
            sub_1B8880C(0LL, v210);
          v212 = (System_String_o *)v209[2].monitor;
          if ( !v212 )
            sub_1B8880C(0LL, v210);
          v214 = System_String__StartsWith(v212, (System_String_o *)StringLiteral_1135/*"/AllEffects/"*/, 0LL);
          if ( v214 )
          {
            affectedObjectPath = v211->fields.affectedObjectPath;
            if ( !affectedObjectPath )
              sub_1B8880C(0LL, v213);
            v216 = System_String__Substring(affectedObjectPath, 12, 0LL);
          }
          else
          {
            v216 = 0LL;
          }
          v217 = v211->fields.affectedObjectPath;
          if ( !v217 )
            sub_1B8880C(0LL, v213);
          v219 = System_String__StartsWith(v217, (System_String_o *)StringLiteral_1156/*"/CutIns/"*/, 0LL);
          if ( v219 )
          {
            v220 = v211->fields.affectedObjectPath;
            if ( !v220 )
              sub_1B8880C(0LL, v218);
            v216 = System_String__Substring(v220, 8, 0LL);
          }
          v221 = v211->fields.affectedObjectPath;
          if ( !v221 )
            sub_1B8880C(0LL, v218);
          if ( !System_String__StartsWith(v221, (System_String_o *)StringLiteral_1153/*"/BattleCamera"*/, 0LL) )
          {
            v223 = v211->fields.affectedObjectPath;
            if ( !v223 )
              sub_1B8880C(0LL, v222);
            if ( !System_String__StartsWith(v223, (System_String_o *)StringLiteral_1155/*"/Cameras/BattleCamera"*/, 0LL) )
              break;
          }
          v224 = (UnityEngine_Component_o *)object[8].klass;
          if ( !v224 )
            sub_1B8880C(0LL, v222);
          v225 = UnityEngine_Component__get_transform(v224, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v211, v225, 0LL);
        }
        v226 = v211->fields.affectedObjectPath;
        if ( !v226 )
          sub_1B8880C(0LL, v222);
        if ( System_String__StartsWith(v226, (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/, 0LL) )
          break;
        v268 = v211->fields.affectedObjectPath;
        if ( !v268 )
          sub_1B8880C(0LL, v227);
        v269 = System_String__StartsWith(v268, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL);
        if ( v269 )
          v216 = v211->fields.affectedObjectPath;
        if ( v216 )
        {
          if ( !BattleSequenceManager__isValidObject((BattleSequenceManager_o *)v269, v216, v270) )
            goto LABEL_340;
          if ( v214 )
          {
            v273 = System_String__IndexOf(v216, 0x2Fu, 0LL);
            if ( (v273 & 0x80000000) == 0 )
            {
              v274 = System_String__Substring(v216, v273 + 1, 0LL);
              v216 = System_String__Substring_61726036(v216, 0, v273, 0LL);
              goto LABEL_294;
            }
            if ( (v417 & 1) != 0 )
            {
              v274 = 0LL;
LABEL_294:
              v299 = (System_Collections_Generic_List_object__o *)object[21].klass;
              if ( !v299 )
                sub_1B8880C(0LL, v272);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v425,
                v299,
                (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
              v414 = v274;
              v428 = v425;
              while ( 1 )
              {
                v300 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v428,
                         (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
                if ( !v300 )
                  break;
                v298 = v428.fields._current;
                if ( !v428.fields._current )
                  sub_1B8880C(v300, v301);
                v302 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v428.fields._current, 0LL);
                if ( !v302 )
                  sub_1B8880C(0LL, v303);
                v304 = System_String__Replace_61726660(
                         v302,
                         (System_String_o *)StringLiteral_731/*"(Clone)"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
                if ( System_String__op_Equality(v216, v304, 0LL) )
                  goto LABEL_302;
              }
              v298 = 0LL;
LABEL_302:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v428,
                (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
              v417 = 1;
              goto LABEL_304;
            }
            v274 = 0LL;
            v298 = 0LL;
            v417 = 0;
          }
          else
          {
            v274 = 0LL;
            v298 = 0LL;
          }
LABEL_304:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v298, 0LL, 0LL) )
          {
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v305 = UnityEngine_Object__op_Inequality(v418, 0LL, 0LL);
            if ( v305 )
            {
              if ( !v418 )
                sub_1B8880C(v305, v306);
              v309 = v418[19].klass;
              if ( !v309 )
                sub_1B8880C(v305, v306);
              v310 = (int32_t)v309[2]._1.name;
            }
            else
            {
              v310 = 0;
            }
            v298 = (Il2CppObject *)BattleSequenceManager__searchPrefab(
                                     (BattleSequenceManager_o *)object,
                                     HIDWORD(object[11].klass),
                                     v216,
                                     v307,
                                     v310,
                                     v308);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v298, 0LL, 0LL) )
            {
              v314 = (System_Collections_Generic_List_object__o *)object[21].klass;
              if ( !v314 )
                sub_1B8880C(0LL, v311);
              v315 = v314->fields._items;
              v316 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v314->fields._version;
              if ( !v315 )
                sub_1B8880C(v314, v311);
              v317 = v314->fields._size;
              if ( (unsigned int)v317 >= v315->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v314,
                  v298,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
              }
              else
              {
                v318 = &v315->obj.klass + v317;
                v314->fields._size = v317 + 1;
                v318[4] = (Il2CppClass *)v298;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v318 + 4), (int32_t)v298, v312, v313);
              }
              if ( !v298 )
                sub_1B8880C(v319, v320);
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v298, 0, 0LL);
            }
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v298, 0LL, 0LL) )
            goto LABEL_340;
          IsNullOrEmpty = System_String__IsNullOrEmpty(v274, 0LL);
          if ( !IsNullOrEmpty )
          {
            if ( !v298 )
              sub_1B8880C(IsNullOrEmpty, v322);
            v338 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v298, 0LL);
            if ( !v338 )
              sub_1B8880C(0LL, v339);
            v340 = UnityEngine_Transform__Find(v338, v274, 0LL);
            WellFired_USTimelineContainer__set_AffectedObject(v211, v340, 0LL);
            goto LABEL_340;
          }
          if ( !v298 )
            sub_1B8880C(IsNullOrEmpty, v322);
          v323 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v298, 0LL);
          WellFired_USTimelineContainer__set_AffectedObject(v211, v323, 0LL);
          if ( v219 )
          {
            v324 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v298, 0LL);
            if ( !v324 )
              sub_1B8880C(0LL, v325);
            localPosition = UnityEngine_Transform__get_localPosition(v324, 0LL);
            v326 = localPosition.fields.x;
            v327 = localPosition.fields.y;
            v328 = localPosition.fields.z;
            v330 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v298, 0LL);
            v331 = (UnityEngine_GameObject_o *)object[6].monitor;
            if ( !v331 )
              sub_1B8880C(0LL, v329);
            v332 = UnityEngine_GameObject__get_transform(v331, 0LL);
            if ( !v330 )
              sub_1B8880C(v332, v332);
            UnityEngine_Transform__set_parent(v330, v332, 0LL);
            v333 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v298, 0LL);
            if ( !v333 )
              sub_1B8880C(0LL, v334);
            v433.fields.x = v326;
            v433.fields.y = v327;
            v433.fields.z = v328;
            UnityEngine_Transform__set_localPosition(v333, v433, 0LL);
            BattleSequenceManager__updateCutInEvents(v335, sourcea, v216, (UnityEngine_GameObject_o *)v298, v336);
            v337 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3233/*"BattleCutIn"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          else
          {
            layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v298, 0LL);
            if ( layer == UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3228/*"BattleBG"*/, 0LL) )
              goto LABEL_340;
            v337 = UnityEngine_LayerMask__NameToLayer((System_String_o *)StringLiteral_3226/*"Battle2D"*/, 0LL);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          }
          NGUITools__SetLayer((UnityEngine_GameObject_o *)v298, v337, 0LL);
LABEL_340:
          v341 = v211->fields.affectedObjectPath;
          if ( !v341 )
            sub_1B8880C(0LL, v271);
          if ( System_String__StartsWith(v341, (System_String_o *)StringLiteral_1141/*"/BattleActors/"*/, 0LL) )
          {
            v343 = v211->fields.affectedObjectPath;
            if ( !v343 )
              sub_1B8880C(0LL, v342);
            v344 = System_String__Substring_61726036(v343, v343->fields._stringLength - 1, 1, 0LL);
            targetPosIndex = 1;
            System_Int32__TryParse(v344, &targetPosIndex, 0LL);
            v346 = --targetPosIndex;
            if ( v166 >= 2 )
            {
              BattleSequenceManager__targetMultipleAttach((BattleSequenceManager_o *)object, v211, v346, v345);
              BattleSequenceManager__SyncAttachedTargetPair(
                (BattleSequenceManager_o *)object,
                v211,
                targetPosIndex,
                v347);
            }
            else
            {
              BattleSequenceManager__targetSingleAttach((BattleSequenceManager_o *)object, v211, v346, v345);
            }
          }
          EventCount = UnityEngine_Component__GetComponentsInChildren_object_(
                         (UnityEngine_Component_o *)v211,
                         1,
                         (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_USTimelineEvent___);
          v350 = EventCount;
          if ( !EventCount )
            sub_1B8880C(0LL, v349);
          max_length = EventCount->max_length;
          if ( max_length >= 1 )
          {
            for ( j = 0; j < max_length; ++j )
            {
              if ( j >= (unsigned int)max_length )
                sub_1B88814(EventCount, v349);
              v353 = (WellFired_USTimelineEvent_o *)v350->m_Items[j];
              if ( !v353 )
                sub_1B8880C(EventCount, v349);
              for ( k = 0; ; ++k )
              {
                EventCount = (System_Object_array *)WellFired_USTimelineEvent__get_EventCount(v353, 0LL);
                if ( k >= (int)EventCount )
                  break;
                v355 = (UnityEngine_Object_o *)WellFired_USTimelineEvent__Event(v353, k, 0LL);
                v357 = (Il2CppObject *)v355;
                if ( !v355 )
                  goto LABEL_439;
                v358 = UnityEngine_Object__get_name(v355, 0LL);
                if ( System_String__op_Equality(v358, (System_String_o *)StringLiteral_14854/*"USFGOAttachToParentEvent"*/, 0LL) )
                {
                  v359 = LOBYTE(WellFired_USFGOAttachToParentEvent_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(v357->klass->vtable[0].methodPtr) < (unsigned int)v359
                    || (WellFired_USFGOAttachToParentEvent_c *)v357->klass->_2.typeHierarchy[v359 - 1] != WellFired_USFGOAttachToParentEvent_TypeInfo )
                  {
                    sub_1B88ACC(v357);
                    goto LABEL_441;
                  }
                  v360 = System_String__op_Equality(
                           (System_String_o *)v357[5].klass,
                           (System_String_o *)StringLiteral_3230/*"BattleCamera"*/,
                           0LL);
                  if ( v360 )
                  {
                    v364 = (UnityEngine_Component_o *)object[8].klass;
                    if ( !v364 )
                      sub_1B8880C(0LL, v361);
                    v365 = UnityEngine_Component__get_transform(v364, 0LL);
                    v357[4].klass = (Il2CppClass *)v365;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v357[4], (int32_t)v365, v366, v367);
                  }
                  else
                  {
                    if ( !v24 )
                      sub_1B8880C(v360, v361);
                    v368 = v24->fields._items;
                    v369 = Method_System_Collections_Generic_List_USFGOAttachToParentEvent__Add__;
                    ++v24->fields._version;
                    if ( !v368 )
                      sub_1B8880C(v360, v361);
                    v370 = v24->fields._size;
                    if ( (unsigned int)v370 >= v368->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v24,
                        v357,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v369[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v371 = &v368->obj.klass + v370;
                      v24->fields._size = v370 + 1;
                      v371[4] = (Il2CppClass *)v357;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v371 + 4), (int32_t)v357, v362, v363);
                    }
                  }
                }
              }
              max_length = v350->max_length;
            }
          }
        }
      }
      v228 = (UnityEngine_GameObject_o *)object[6].klass;
      if ( !v228 )
        sub_1B8880C(0LL, v227);
      v230 = UnityEngine_GameObject__get_transform(v228, 0LL);
      v231 = v211->fields.affectedObjectPath;
      if ( !v231 )
        sub_1B8880C(0LL, v229);
      v232 = System_String__Replace_61726660(
               v231,
               (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
               (System_String_o *)StringLiteral_17965/*"chr(Clone)"*/,
               0LL);
      if ( !v230 )
        sub_1B8880C(v232, v232);
      v233 = UnityEngine_Transform__Find(v230, v232, 0LL);
      WellFired_USTimelineContainer__set_AffectedObject(v211, v233, 0LL);
      AffectedObject = (UnityEngine_Object_o *)WellFired_USTimelineContainer__get_AffectedObject(v211, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(AffectedObject, 0LL, 0LL) )
      {
        v236 = v211->fields.affectedObjectPath;
        if ( !v236 )
          sub_1B8880C(0LL, v235);
        v237 = System_String__StartsWith(v236, (System_String_o *)StringLiteral_1132/*"/Actor/chr/body_level_"*/, 0LL);
        v239 = &StringLiteral_17359/*"body_level_"*/;
        if ( v237 )
          goto LABEL_236;
        v240 = v211->fields.affectedObjectPath;
        if ( !v240 )
          sub_1B8880C(0LL, v238);
        v241 = System_String__StartsWith(v240, (System_String_o *)StringLiteral_1133/*"/Actor/chr/weapon_level_"*/, 0LL);
        v239 = &StringLiteral_24673/*"weapon_level_"*/;
        if ( v241 )
        {
LABEL_236:
          v242 = (System_String_o *)*v239;
          if ( *v239 )
            break;
        }
      }
    }
    v243 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v243 )
      sub_1B8880C(0LL, v238);
    v244 = (System_String_o *)StringLiteral_1/*""*/;
    v245 = UnityEngine_GameObject__get_transform(v243, 0LL);
    if ( !v245 )
      sub_1B8880C(0LL, v246);
    v247 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v245, (System_String_o *)StringLiteral_17965/*"chr(Clone)"*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v248 = UnityEngine_Object__op_Inequality(v247, 0LL, 0LL);
    if ( v248 )
      break;
LABEL_281:
    v281 = v211->fields.affectedObjectPath;
    v282 = System_String__Concat_61707032((System_String_o *)StringLiteral_1131/*"/Actor/chr/"*/, v242, 0LL);
    if ( !v282 )
      sub_1B8880C(0LL, v283);
    if ( !v281 )
      sub_1B8880C(v282, v283);
    v284 = System_String__Substring(v281, v282->fields._stringLength, 0LL);
    if ( !v284 )
      sub_1B8880C(0LL, v285);
    v286 = System_String__Split(v284, 0x2Fu, 0, 0LL);
    if ( !v286 )
      sub_1B8880C(0LL, v287);
    if ( !v286->max_length )
      sub_1B88814(v286, v287);
    v289 = System_String__Concat_61707032(v242, v286->m_Items[0], 0LL);
    v290 = (UnityEngine_GameObject_o *)object[6].klass;
    if ( !v290 )
      sub_1B8880C(0LL, v288);
    v292 = UnityEngine_GameObject__get_transform(v290, 0LL);
    v293 = v211->fields.affectedObjectPath;
    if ( !v293 )
      sub_1B8880C(0LL, v291);
    v294 = System_String__Replace_61726660(
             v293,
             (System_String_o *)StringLiteral_1130/*"/Actor/chr"*/,
             (System_String_o *)StringLiteral_17965/*"chr(Clone)"*/,
             0LL);
    if ( !v294 )
      sub_1B8880C(0LL, v295);
    v296 = System_String__Replace_61726660(v294, v289, v244, 0LL);
    if ( !v292 )
      sub_1B8880C(v296, v296);
    v297 = UnityEngine_Transform__Find(v292, v296, 0LL);
    WellFired_USTimelineContainer__set_AffectedObject(v211, v297, 0LL);
  }
  if ( !v247 )
    sub_1B8880C(v248, v249);
  v251 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)v247, 0LL);
  if ( !v251 )
    sub_1B8880C(0LL, v250);
  while ( 2 )
  {
    v252 = v251->klass;
    v253 = *(unsigned __int16 *)(&v251->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v251->klass->_2.bitflags2 + 3) )
    {
      v254 = &v252->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v254 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v253;
        v254 += 4;
        if ( !v253 )
          goto LABEL_248;
      }
      v255 = (__int64)&v252->vtable[*v254].method;
    }
    else
    {
LABEL_248:
      v255 = sub_1BDA590(v251, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v255)(v251, *(_QWORD *)(v255 + 8)) & 1) == 0 )
    {
      v413 = v244;
      v414 = 0LL;
      goto LABEL_273;
    }
    v256 = v251->klass;
    v257 = *(unsigned __int16 *)(&v251->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v251->klass->_2.bitflags2 + 3) )
    {
      v258 = (System_Collections_IEnumerator_c **)&v256->_1.interfaceOffsets->offset;
      while ( *(v258 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v257;
        v258 += 2;
        if ( !v257 )
          goto LABEL_255;
      }
      v259 = (__int64)&v256->vtable[*(_DWORD *)v258 + 1].method;
    }
    else
    {
LABEL_255:
      v259 = sub_1BDA590(v251, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v260 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v259)(
                                        v251,
                                        *(_QWORD *)(v259 + 8));
    v262 = (UnityEngine_Object_o *)v260;
    if ( !v260 )
      sub_1B8880C(0LL, v261);
    v263 = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v260->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v263
      && (UnityEngine_Transform_c *)v260->klass->_2.typeHierarchy[v263 - 1] == UnityEngine_Transform_TypeInfo )
    {
      v264 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v260, 0LL);
      if ( !v264 )
        sub_1B8880C(0LL, v265);
      v266 = UnityEngine_Object__get_name(v264, 0LL);
      if ( !v266 )
        sub_1B8880C(0LL, v267);
      if ( !System_String__StartsWith(v266, v242, 0LL) )
        continue;
      v413 = UnityEngine_Object__get_name(v262, 0LL);
      v414 = 0LL;
LABEL_273:
      v275 = sub_1B886EC(v251, System_IDisposable_TypeInfo);
      v244 = v413;
      v276 = v275;
      if ( v275 )
      {
        v277 = *(_QWORD *)v275;
        v278 = *(unsigned __int16 *)(*(_QWORD *)v275 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v275 + 302LL) )
        {
          v279 = (int *)(*(_QWORD *)(v277 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v279 - 1) != System_IDisposable_TypeInfo )
          {
            --v278;
            v279 += 4;
            if ( !v278 )
              goto LABEL_278;
          }
          v280 = v277 + 16LL * *v279 + 312;
        }
        else
        {
LABEL_278:
          v280 = sub_1BDA590(v275, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v280)(v276, *(_QWORD *)(v280 + 8));
      }
      goto LABEL_281;
    }
    break;
  }
  sub_1B88ACC(v260);
  v404 = v403;
  v406 = v405;
  v397 = sub_1B886EC(v251, System_IDisposable_TypeInfo);
  v398 = v397;
  if ( v397 )
  {
    v399 = *(_QWORD *)v397;
    v400 = *(unsigned __int16 *)(*(_QWORD *)v397 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v397 + 302LL) )
    {
      v401 = (int *)(*(_QWORD *)(v399 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v401 - 1) != System_IDisposable_TypeInfo )
      {
        --v400;
        v401 += 4;
        if ( !v400 )
          goto LABEL_473;
      }
      v402 = v399 + 16LL * *v401 + 312;
    }
    else
    {
LABEL_473:
      v402 = sub_1BDA590(v397, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v402)(v398, *(_QWORD *)(v402 + 8));
  }
  if ( v414 )
    sub_1B88804(v414);
  if ( v404 != 1 )
  {
    v407 = sub_1B886EC(v423, System_IDisposable_TypeInfo);
    v408 = v407;
    if ( v407 )
    {
      v409 = *(_QWORD *)v407;
      v410 = *(unsigned __int16 *)(*(_QWORD *)v407 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v407 + 302LL) )
      {
        v411 = (int *)(*(_QWORD *)(v409 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v411 - 1) != System_IDisposable_TypeInfo )
        {
          --v410;
          v411 += 4;
          if ( !v410 )
            goto LABEL_522;
        }
        v412 = v409 + 16LL * *v411 + 312;
      }
      else
      {
LABEL_522:
        v412 = sub_1BDA590(v407, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v412)(v408, *(_QWORD *)(v412 + 8));
    }
    sub_1C73040();
  }
  v373 = *(_QWORD *)__cxa_begin_catch(v406);
  __cxa_end_catch();
LABEL_380:
  seqObject = sub_1B886EC(v423, System_IDisposable_TypeInfo);
  if ( seqObject )
  {
    v374 = *(_QWORD *)seqObject;
    v375 = seqObject;
    v376 = *(unsigned __int16 *)(*(_QWORD *)seqObject + 302LL);
    if ( *(_WORD *)(*(_QWORD *)seqObject + 302LL) )
    {
      v377 = (int *)(*(_QWORD *)(v374 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v377 - 1) != System_IDisposable_TypeInfo )
      {
        --v376;
        v377 += 4;
        if ( !v376 )
          goto LABEL_385;
      }
      v378 = v374 + 16LL * *v377 + 312;
    }
    else
    {
LABEL_385:
      v378 = sub_1BDA590(seqObject, System_IDisposable_TypeInfo, 0LL);
    }
    seqObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v378)(v375, *(_QWORD *)(v378 + 8));
  }
  if ( v373 )
    sub_1B88804(v373);
  if ( !v24 )
    goto LABEL_432;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v425,
    v24,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_USFGOAttachToParentEvent__GetEnumerator__);
  for ( m = v425;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &m,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__MoveNext__);
        WellFired_USFGOAttachToParentEvent__SetupTarget(
          (WellFired_USFGOAttachToParentEvent_o *)m.fields._current,
          (BattlePerformance_o *)object[5].klass,
          (UnityEngine_GameObject_o *)object[6].klass,
          (System_Collections_Generic_List_GameObject__o *)object[21].klass,
          0LL) )
  {
    if ( !m.fields._current )
      sub_1B8880C(0LL, v379);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &m,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_USFGOAttachToParentEvent__Dispose__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seqObject = UnityEngine_Object__op_Inequality(v418, 0LL, 0LL);
  if ( (seqObject & 1) != 0 )
  {
    if ( !v418 )
      goto LABEL_432;
    if ( LOBYTE(v418[20].klass) )
      goto LABEL_423;
    v380 = v418[19].klass;
    if ( !v380 )
      goto LABEL_432;
    if ( !HIDWORD(v380->vtable._1_Finalize.methodPtr)
      && !BattleActorControl__isNoVoice((BattleActorControl_o *)v418, 0LL) )
    {
      v381 = (UnityEngine_Object_o *)object[5].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      seqObject = UnityEngine_Object__op_Inequality(v381, 0LL, 0LL);
      if ( (seqObject & 1) != 0 )
      {
        v382 = object[5].klass;
        if ( !v382 )
          goto LABEL_432;
        v383 = *(UnityEngine_Object_o **)&v382->_1.byval_arg.bits;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v383, 0LL, 0LL) )
        {
          seqObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( seqObject )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)seqObject,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_VoiceMaster___);
            LOBYTE(object[23].klass) = 0;
            v385 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            FileName = Voice__getFileName(111, 0LL);
            if ( BattleSequenceManager__checkServantVoicePlayed(
                   (BattleSequenceManager_o *)object,
                   (VoiceMaster_o *)MasterData_object,
                   v385,
                   FileName,
                   v387) )
            {
              LOBYTE(object[23].klass) = 1;
            }
            v388 = (int32_t)object[11].klass;
            if ( !Voice_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
            v389 = Voice__getFileName(111, 0LL);
            BattleSequenceManager__addServantVoicePlayed(
              (BattleSequenceManager_o *)object,
              (VoiceMaster_o *)MasterData_object,
              v388,
              v389,
              v390);
            v391 = v418[19].klass;
            if ( v391 )
            {
              v392 = (int)v391[1].vtable._2_GetHashCode.methodPtr;
              v393 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v393 = BalanceConfig_TypeInfo;
              }
              if ( v392 == v393->static_fields->TreasureDeviceIdMashu3 )
              {
                v394 = (int32_t)object[11].klass;
                if ( !Voice_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
                v395 = Voice__getFileName(121, 0LL);
                BattleSequenceManager__addServantVoicePlayed(
                  (BattleSequenceManager_o *)object,
                  (VoiceMaster_o *)MasterData_object,
                  v394,
                  v395,
                  v396);
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
  System_GC__Collect_62753100(0LL);
}


void __fastcall BattleSequenceManager__targetMultipleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  int size; // w8
  int v9; // w24
  int32_t v10; // w22

  if ( (byte_4A5D816 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    byte_4A5D816 = 1;
  }
  if ( (targetIndex & 0x80000000) == 0 )
  {
    battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
    if ( battleTargetList )
    {
      size = battleTargetList->fields._size;
      v9 = size - 1;
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
        v10 = 0;
        while ( 1 )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v10,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
          if ( !battleTargetList )
            goto LABEL_21;
          if ( HIDWORD(battleTargetList[1].fields._items) == targetIndex )
            break;
          if ( v9 == v10 )
            goto LABEL_12;
          battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
          ++v10;
          if ( !battleTargetList )
            goto LABEL_21;
        }
        battleTargetList = (System_Collections_Generic_List_object__o *)this->fields.battleTargetList;
        if ( battleTargetList )
        {
          battleTargetList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            battleTargetList,
                                                                            v10,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
    sub_1B8880C(battleTargetList, tlcont);
  }
}


void __fastcall BattleSequenceManager__targetSingleAttach(
        BattleSequenceManager_o *this,
        WellFired_USTimelineContainer_o *tlcont,
        int32_t targetIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *battleTargetList; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *AffectedObject; // x20

  if ( (byte_4A5D81A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
    sub_1B885B0(&StringLiteral_14498/*"Tmp_Target"*/);
    byte_4A5D81A = 1;
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
                                                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleSequenceManager_BattleTarget__get_Item__);
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
      sub_1B8880C(battleTargetList, tlcont);
    }
    v8 = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v8, (System_String_o *)StringLiteral_14498/*"Tmp_Target"*/, 0LL);
    if ( !v8 )
      goto LABEL_15;
    battleTargetList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(v8, 0LL);
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
  _BOOL8 v8; // x0
  __int64 v9; // x1
  bool v10; // w21
  Il2CppObject *current; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5D800 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__get_Current__);
    this = (BattleSequenceManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
    byte_4A5D800 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !evs )
    sub_1B8880C(this, evs);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)evs,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_USFGOPlayCutInEvent__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__MoveNext__);
    v10 = v8;
    if ( !v8 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1B8880C(v8, v9);
    if ( System_String__op_Equality((System_String_o *)v16.fields._current[4].klass, cutInName, 0LL) )
    {
      current[3].monitor = obj;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&current[3].monitor, (int32_t)obj, v12, v13);
      v14 = 4;
      goto LABEL_10;
    }
  }
  v14 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_USFGOPlayCutInEvent__Dispose__);
  return v10 && v14 == 4;
}


void __fastcall BattleSequenceManager_BattleTarget___ctor(
        BattleSequenceManager_BattleTarget_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.originalScale.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.originalScale.fields.z = z;
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
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
      sub_1B8880C(targetActor, method);
    }
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)targetActor, this->fields.originalScale, 0LL);
  }
  this->fields.targetActor = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, 0, v2, v3);
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
    sub_1B8880C(targetActor, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetActor, (int32_t)bac, index, (int32_t)method);
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
  if ( (byte_4A5D938 & 1) == 0 )
  {
    this = (BattleSequenceManager__WaitEndSequence_d__110_o *)sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4A5D938 = 1;
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
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    v4->fields._wait_5__2 = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._wait_5__2, (int32_t)v7, v8, v9);
  }
  if ( !_4__this )
    sub_1B8880C(this, method);
  if ( _4__this->fields.IsBgBusy )
  {
    wait_5__2 = (Il2CppObject *)v4->fields._wait_5__2;
    v4->fields.__2__current = wait_5__2;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(p__2__current, (int32_t)wait_5__2, v2, v3);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleSequenceManager__WaitEndSequence_d__110_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D932 & 1) == 0 )
  {
    sub_1B885B0(&BattleSequenceManager___c_TypeInfo);
    byte_4A5D932 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleSequenceManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleSequenceManager___c_TypeInfo->static_fields->__9 = (struct BattleSequenceManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleSequenceManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, x1);
  return System_Single__CompareTo_62594480(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
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
    sub_1B8880C(this, x1);
  return System_Single__CompareTo_62594480(x2->fields.firetime, v4, (const MethodInfo *)&firetime);
}


bool __fastcall BattleSequenceManager___c___setup_b__91_0(
        BattleSequenceManager___c_o *this,
        SwitchActiveBaseConditionComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
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
  if ( (byte_4A5D933 & 1) == 0 )
  {
    this = (BattleSequenceManager___c__DisplayClass119_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5D933 = 1;
  }
  if ( !x || (this = (BattleSequenceManager___c__DisplayClass119_0_o *)v4->fields.targetList) == 0LL )
    sub_1B8880C(this, x);
  System_Collections_Generic_HashSet_int___Add(
    (System_Collections_Generic_HashSet_int__o *)this,
    x->fields._uniqueId_k__BackingField,
    (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  struct BattleSequenceManager_o *_4__this; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  ServantAssetLoadManager_onGameObjectLoadComplete_o *_9__1; // x26
  UnityEngine_GameObject_o *v10; // x25
  int32_t chrId; // w20
  int32_t limitCount; // w21
  int32_t treasureDeviceId; // w22
  int32_t treasureDeviceLv; // w23
  int32_t npChargeStage; // w24
  int32_t v16; // w2
  int32_t v17; // w3

  v4 = this;
  if ( (byte_4A5D934 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__1__);
    sub_1B885B0(&StringLiteral_12938/*"StandardCutIn"*/);
    this = (BattleSequenceManager___c__DisplayClass78_0_o *)sub_1B885B0(&ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    byte_4A5D934 = 1;
  }
  if ( !data
    || (_4__this = v4->fields.__4__this,
        this = (BattleSequenceManager___c__DisplayClass78_0_o *)AssetData__GetObject_object__48635516(
                                                                  data,
                                                                  (System_String_o *)StringLiteral_12938/*"StandardCutIn"*/,
                                                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        !_4__this)
    || (_4__this->fields.CutInPrefab = (struct UnityEngine_GameObject_o *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.CutInPrefab, (int32_t)this, v6, v7),
        (this = (BattleSequenceManager___c__DisplayClass78_0_o *)v4->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(this, data);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  _9__1 = v4->fields.__9__1;
  v10 = gameObject;
  chrId = v4->fields.chrId;
  limitCount = v4->fields.limitCount;
  treasureDeviceId = v4->fields.treasureDeviceId;
  treasureDeviceLv = v4->fields.treasureDeviceLv;
  npChargeStage = v4->fields.npChargeStage;
  if ( !_9__1 )
  {
    _9__1 = (ServantAssetLoadManager_onGameObjectLoadComplete_o *)sub_1B887FC(ServantAssetLoadManager_onGameObjectLoadComplete_TypeInfo);
    ServantAssetLoadManager_onGameObjectLoadComplete___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_BattleSequenceManager___c__DisplayClass78_0__loadSequence_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v16, v17);
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__LoadNoblePhantasm(
    v10,
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
  __int64 v7; // x20
  void *_4__this; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  struct BattleActorControl_o *battleActor; // x8
  int32x2_t *battleSvtData; // x8
  struct BattleSequenceManager_o *v20; // x8
  struct BattleSequenceManager_o *v21; // x8
  Il2CppObject *Instance; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  System_Action_o *v25; // x23
  struct BattleSequenceManager_o *v26; // x8
  struct BattleSequenceManager_o *v27; // x8
  _DWORD *v28; // x20
  int v29; // w8
  int v30; // w9
  __int64 v31; // x10
  struct BattleSequenceManager_o *v32; // x8
  int32_t overwriteSvtVoiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D935 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_System_Tuple_int__int__int__get_Item1__);
    sub_1B885B0(&Method_System_Tuple_int__int__int__get_Item2__);
    sub_1B885B0(&Method_System_Tuple_int__int__int__get_Item3__);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__2__);
    sub_1B885B0(&BattleSequenceManager___c__DisplayClass78_1_TypeInfo);
    sub_1B885B0(&StringLiteral_9505/*"NoblePhantasm_"*/);
    byte_4A5D935 = 1;
  }
  v7 = sub_1B887FC(BattleSequenceManager___c__DisplayClass78_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_30;
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 16) = obj;
  v12 = (__int64 *)(v7 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)obj, v13, v14);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_30;
  v17 = *v12;
  *((_QWORD *)_4__this + 11) = *v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)_4__this + 88), v17, v15, v16);
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_30;
  if ( !paramsFromMstTDSeqWeight )
    goto LABEL_30;
  battleSvtData = (int32x2_t *)battleActor->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  battleSvtData[94].n64_u64[0] = vmax_s32(*(int32x2_t *)&paramsFromMstTDSeqWeight->fields.m_Item1, 0LL).n64_u64[0];
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_30;
  v20->fields._SeqId_k__BackingField = paramsFromMstTDSeqWeight->fields.m_Item3;
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_30;
    overwriteSvtVoiceId = v21->fields.overwriteSvtVoiceId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v23 = System_Int32__ToString((int32_t)&overwriteSvtVoiceId, 0LL);
  v24 = System_String__Concat_61707032((System_String_o *)StringLiteral_9505/*"NoblePhantasm_"*/, v23, 0LL);
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__2__,
    0LL);
  if ( !Instance )
    goto LABEL_30;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, v24, v25, 1, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_30;
  _4__this = v26->fields.seqObject;
  if ( !_4__this )
    goto LABEL_30;
  _4__this = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
               (UnityEngine_GameObject_o *)_4__this,
               (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOActorBattleActionEvent___);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_30;
  v28 = _4__this;
  v27->fields.isNoDamageMotionInDamageNoble = 0;
  _4__this = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)_4__this, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !v28 )
    goto LABEL_30;
  v29 = v28[6];
  if ( v29 < 1 )
    return;
  v30 = 0;
  while ( 1 )
  {
    if ( v29 == v30 )
      sub_1B88814(_4__this, v9);
    v31 = *(_QWORD *)&v28[2 * v30 + 8];
    if ( !v31 )
      goto LABEL_30;
    if ( !*(_DWORD *)(v31 + 64) && *(_BYTE *)(v31 + 69) )
      break;
    if ( v29 == ++v30 )
      return;
  }
  v32 = this->fields.__4__this;
  if ( !v32 )
LABEL_30:
    sub_1B8880C(_4__this, v9);
  v32->fields.isNoDamageMotionInDamageNoble = 1;
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
  struct BattleSequenceManager___c__DisplayClass78_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  System_String_o *v5; // x20
  int v6; // w8
  BattleSequenceManager___c__DisplayClass78_1_o *v7; // x21
  unsigned int v8; // w23
  int v9; // w24
  UnityEngine_Behaviour_o *v10; // x22
  struct BattleSequenceManager___c__DisplayClass78_0_o *v11; // x8
  BattleSequenceManager_o *v12; // x21
  System_Action_o *_9__3; // x22
  int32_t v14; // w2
  int32_t v15; // w3

  v2 = this;
  if ( (byte_4A5D936 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
    sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__3__);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D936 = 1;
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
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayBgmEvent___);
  if ( !this )
    goto LABEL_20;
  v6 = (int)this->fields.CS___8__locals1;
  v7 = this;
  if ( v6 >= 1 )
  {
    v8 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1B88814(this, method);
      v10 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v7->fields.__9__4 + (int)v8);
      if ( !v10 )
        break;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))v10->klass[1]._2.typeHierarchy)(
                                                                v10,
                                                                v10->klass[1]._2.unity_user_data);
      if ( (v9 & (unsigned int)this & 1) != 0 )
      {
        v5 = *(System_String_o **)&v10[2].fields.m_CachedPtr;
        v9 = 0;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled(v10, 0, 0LL);
      }
      v6 = (int)v7->fields.CS___8__locals1;
      if ( (int)++v8 >= v6 )
        goto LABEL_15;
    }
LABEL_20:
    sub_1B8880C(this, method);
  }
LABEL_15:
  v11 = v2->fields.CS___8__locals1;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.__4__this;
  _9__3 = v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__3__,
      0LL);
    v2->fields.__9__3 = _9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v14, v15);
  }
  if ( !v12 )
    goto LABEL_20;
  BattleSequenceManager__LoadBgm(v12, v5, _9__3, 0LL);
}


void __fastcall BattleSequenceManager___c__DisplayClass78_1___loadSequence_b__3(
        BattleSequenceManager___c__DisplayClass78_1_o *this,
        const MethodInfo *method)
{
  BattleSequenceManager___c__DisplayClass78_1_o *v2; // x19
  struct BattleSequenceManager___c__DisplayClass78_0_o *CS___8__locals1; // x8
  struct BattleSequenceManager_o *_4__this; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v5; // x8
  struct BattleSequenceManager_o *v6; // x8
  BattleSequenceManager___c__DisplayClass78_1_o *v7; // x20
  struct BattleSequenceManager___c__DisplayClass78_0_o *v8; // x8
  struct BattleSequenceManager_o *v9; // x8
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *ComponentInChildren_object; // x22
  struct BattleSequenceManager___c__DisplayClass78_0_o *v12; // x8
  struct BattleSequenceManager_o *v13; // x21
  struct BattleSequenceManager___c__DisplayClass78_0_o *v14; // x8
  struct BattleSequenceManager_o *v15; // x8
  struct BattlePerformance_o *performance; // x8
  StandFigureManager_o *v17; // x22
  UIStandFigureM_o *MeshLocal; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct BattleSequenceManager___c__DisplayClass78_0_o *v21; // x8
  struct BattleSequenceManager_o *v22; // x8
  UnityEngine_Object_o *standFigure; // x21
  struct BattleSequenceManager___c__DisplayClass78_0_o *v24; // x8
  struct BattleSequenceManager_o *v25; // x9
  int32_t monitor; // w21
  struct BattleActorControl_o *battleActor; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int32_t monitor_high; // w9
  struct BattleSequenceManager___c__DisplayClass78_0_o *v30; // x8
  struct BattleSequenceManager_o *v31; // x10
  struct BattleSequenceManager___c__DisplayClass78_0_o *v32; // x8
  BattleSequenceManager_onGameObjectLoadComplete_o *onComplete; // x3
  UnityEngine_GameObject_o *obj; // x2
  WellFired_USFGOPlayCutInBase_o *v35; // x1
  struct BattleSequenceManager___c__DisplayClass78_0_o *v36; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v37; // x8
  struct BattleSequenceManager_o *v38; // x20
  struct BattleSequenceManager_o *v39; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v40; // x8
  struct BattleSequenceManager_o *v41; // x8
  UnityEngine_Object_o *v42; // x20
  struct BattleSequenceManager___c__DisplayClass78_0_o *v43; // x8
  struct BattleSequenceManager_o *v44; // x8
  struct BattleSequenceManager___c__DisplayClass78_0_o *v45; // x8
  struct BattleSequenceManager_o *v46; // x8
  UIStandFigureM_o *v47; // x20
  int32_t loadStandFigureId; // w21
  int32_t loadStandFigureLimitCount; // w22
  int32_t faceType; // w23
  System_Action_o *_9__4; // x24
  int32_t v52; // w2
  int32_t v53; // w3
  struct BattleSequenceManager___c__DisplayClass78_0_o *v54; // x8

  v2 = this;
  if ( (byte_4A5D937 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)sub_1B885B0(&Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__4__);
    byte_4A5D937 = 1;
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
                                                            (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInEvent___);
  v5 = v2->fields.CS___8__locals1;
  if ( !v5 )
    goto LABEL_73;
  v6 = v5->fields.__4__this;
  if ( !v6 )
    goto LABEL_73;
  v7 = this;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)v6->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInRandom___);
  v8 = v2->fields.CS___8__locals1;
  if ( !v8 )
    goto LABEL_73;
  v9 = v8->fields.__4__this;
  if ( !v9 )
    goto LABEL_73;
  v10 = (UnityEngine_Object_o *)this;
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)v9->fields.seqObject;
  if ( !this )
    goto LABEL_73;
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)this,
                                 (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_USFGOPlayStandardCutInLimitCount___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v7,
                                                            0LL,
                                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v12 = v2->fields.CS___8__locals1;
    if ( !v12 )
      goto LABEL_73;
    if ( !v7 )
      goto LABEL_73;
    v13 = v12->fields.__4__this;
    if ( !v13 )
      goto LABEL_73;
    v13->fields.faceType = (int32_t)v7[1].fields.obj;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    v14 = v2->fields.CS___8__locals1;
    if ( !v14 )
      goto LABEL_73;
    v15 = v14->fields.__4__this;
    if ( !v15 )
      goto LABEL_73;
    performance = v15->fields.performance;
    if ( !performance )
      goto LABEL_73;
    v17 = (StandFigureManager_o *)this;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)performance->fields.root_field;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    if ( !v17 )
      goto LABEL_73;
    MeshLocal = StandFigureManager__CreateMeshLocal(v17, (UnityEngine_GameObject_o *)this, 0LL);
    v13->fields.standFigure = MeshLocal;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v13->fields.standFigure, (int32_t)MeshLocal, v19, v20);
    v21 = v2->fields.CS___8__locals1;
    if ( !v21 )
      goto LABEL_73;
    v22 = v21->fields.__4__this;
    if ( !v22 )
      goto LABEL_73;
    standFigure = (UnityEngine_Object_o *)v22->fields.standFigure;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(standFigure, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_70;
    v24 = v2->fields.CS___8__locals1;
    if ( !v24 )
      goto LABEL_73;
    v25 = v24->fields.__4__this;
    if ( !v25 )
      goto LABEL_73;
    monitor = (int32_t)v7[1].monitor;
    v25->fields.loadStandFigureId = monitor;
    battleActor = v24->fields.battleActor;
    if ( !battleActor )
      goto LABEL_73;
    battleSvtData = battleActor->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)battleSvtData->fields.svtdata;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)ServantEntity__GetTrueSvtId((ServantEntity_o *)this, 0LL);
    if ( monitor == (_DWORD)this || (monitor_high = HIDWORD(v7[1].monitor), monitor_high == -1) )
    {
      v37 = v2->fields.CS___8__locals1;
      if ( !v37 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)v37->fields.battleActor;
      if ( !this )
        goto LABEL_73;
      v38 = v37->fields.__4__this;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)BattleActorControl__get_LimitImageIndex(
                                                                (BattleActorControl_o *)this,
                                                                0LL);
      if ( !v38 )
        goto LABEL_73;
      v38->fields.loadStandFigureLimitCount = (int)this;
      v30 = v2->fields.CS___8__locals1;
      if ( !v30 )
        goto LABEL_73;
    }
    else
    {
      v30 = v2->fields.CS___8__locals1;
      if ( !v30 )
        goto LABEL_73;
      v31 = v30->fields.__4__this;
      if ( !v31 )
        goto LABEL_73;
      v31->fields.loadStandFigureLimitCount = monitor_high;
    }
    v39 = v30->fields.__4__this;
    if ( !v39 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)v39->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
    v40 = v2->fields.CS___8__locals1;
    if ( !v40 )
      goto LABEL_73;
    v41 = v40->fields.__4__this;
    if ( !v41 )
      goto LABEL_73;
    v42 = (UnityEngine_Object_o *)this;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)StandFigureManager__CreateStandFigureMName(
                                                              v41->fields.loadStandFigureId,
                                                              v41->fields.loadStandFigureLimitCount,
                                                              0LL);
    if ( !v42 )
      goto LABEL_73;
    UnityEngine_Object__set_name(v42, (System_String_o *)this, 0LL);
    v43 = v2->fields.CS___8__locals1;
    if ( !v43 )
      goto LABEL_73;
    v44 = v43->fields.__4__this;
    if ( !v44 )
      goto LABEL_73;
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)v44->fields.standFigure;
    if ( !this )
      goto LABEL_73;
    UIStandFigureRender__SetDepth((UIStandFigureRender_o *)this, 0.0, 0LL);
    v45 = v2->fields.CS___8__locals1;
    if ( !v45 )
      goto LABEL_73;
    v46 = v45->fields.__4__this;
    if ( !v46 )
      goto LABEL_73;
    v47 = v46->fields.standFigure;
    loadStandFigureId = v46->fields.loadStandFigureId;
    loadStandFigureLimitCount = v46->fields.loadStandFigureLimitCount;
    faceType = v46->fields.faceType;
    _9__4 = v2->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_BattleSequenceManager___c__DisplayClass78_1__loadSequence_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v52, v53);
    }
    if ( !v47 )
LABEL_73:
      sub_1B8880C(this, method);
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)UIStandFigureM__SetCharacter_40954688(
                                                              v47,
                                                              loadStandFigureId,
                                                              loadStandFigureLimitCount,
                                                              faceType,
                                                              _9__4,
                                                              1,
                                                              0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
LABEL_70:
      v54 = v2->fields.CS___8__locals1;
      if ( v54 )
      {
        this = (BattleSequenceManager___c__DisplayClass78_1_o *)v54->fields.__4__this;
        if ( this )
        {
          BattleSequenceManager__LoadEndStandFigure(
            (BattleSequenceManager_o *)this,
            v2->fields.obj,
            v54->fields.onComplete,
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
      v32 = v2->fields.CS___8__locals1;
      if ( !v32 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)v32->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v32->fields.onComplete;
      obj = v2->fields.obj;
      v35 = (WellFired_USFGOPlayCutInBase_o *)ComponentInChildren_object;
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_70;
      v36 = v2->fields.CS___8__locals1;
      if ( !v36 )
        goto LABEL_73;
      this = (BattleSequenceManager___c__DisplayClass78_1_o *)v36->fields.__4__this;
      if ( !this )
        goto LABEL_73;
      onComplete = v36->fields.onComplete;
      obj = v2->fields.obj;
      v35 = (WellFired_USFGOPlayCutInBase_o *)v10;
    }
    this = (BattleSequenceManager___c__DisplayClass78_1_o *)BattleSequenceManager__CreateCutInStandFigure(
                                                              (BattleSequenceManager_o *)this,
                                                              v35,
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(0LL, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D11E0;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D11C0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1178;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall BattleSequenceManager_onGameObjectLoadComplete__EndInvoke(
        BattleSequenceManager_onGameObjectLoadComplete_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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