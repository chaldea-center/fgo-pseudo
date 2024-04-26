void __fastcall BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4351D5F & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster_TypeInfo);
    sub_B70694(&StringLiteral_17255/*"btn_master_skill"*/);
    byte_4351D5F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17255/*"btn_master_skill"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17255/*"btn_master_skill"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattlePerformanceMaster_MasterBuffEffectData_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4351D5E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
    sub_B70694(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    byte_4351D5E = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectObjectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.delayAfterNoblePhantasmBuffData,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.battleItemEffectObject,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.battleItemEffectCoroutines,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B70764(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor_20903544(v31, 1, 0LL);
  this->fields.masterBuffEffectDataClose = v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseBoostSkillConfComp(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D1C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D1C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4351D52 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4351D52 = 1;
  }
  win_Retire = this->fields.win_Retire;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B7076C(v5, v6);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v4,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D17 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D17 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__DelayEffect(
        BattlePerformanceMaster_o *this,
        int32_t id,
        UnityEngine_GameObject_o *parentObj,
        bool checkObject,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4351D59 & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster__DelayEffect_d__193_TypeInfo);
    byte_4351D59 = 1;
  }
  v13 = sub_B70764(BattlePerformanceMaster__DelayEffect_d__193_TypeInfo);
  BattlePerformanceMaster__DelayEffect_d__193___ctor((BattlePerformanceMaster__DelayEffect_d__193_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_B7076C(v14, v15);
  *(_QWORD *)(v13 + 64) = this;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 64), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = id;
  *(_QWORD *)(v13 + 40) = parentObj;
  sub_B70630((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)parentObj, v22, v23, v24, v25, v26, v27);
  *(float *)(v13 + 48) = x;
  *(float *)(v13 + 52) = y;
  *(_BYTE *)(v13 + 60) = checkObject;
  *(float *)(v13 + 56) = z;
  return (System_Collections_IEnumerator_o *)v13;
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__DelayShowItem(
        UnityEngine_GameObject_o *obj,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4351D5B & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster__DelayShowItem_d__195_TypeInfo);
    byte_4351D5B = 1;
  }
  v5 = sub_B70764(BattlePerformanceMaster__DelayShowItem_d__195_TypeInfo);
  BattlePerformanceMaster__DelayShowItem_d__195___ctor((BattlePerformanceMaster__DelayShowItem_d__195_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 40) = obj;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)obj, v8, v9, v10, v11, v12, v13);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__EndNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  this->fields._IsNoblePhantasm_k__BackingField = 0;
  v3 = BattlePerformanceMaster__WaitTimeMasterBuffEffect(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
    (System_Int32_array **)started,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BattlePerformanceMaster__GetBattleItemGetPos(
        BattlePerformanceMaster_o *this,
        UnityEngine_Vector3_o *outVector,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleItemTr; // x21
  __int64 v6; // x1
  bool result; // w0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351D5D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D5D = 1;
  }
  *outVector = UnityEngine_Vector3__get_zero(0LL);
  battleItemTr = (UnityEngine_Object_o *)this->fields.battleItemTr;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(battleItemTr, 0LL, 0LL) )
    return 0;
  v8 = this->fields.battleItemTr;
  if ( !v8 )
    sub_B7076C(0LL, v6);
  localPosition = UnityEngine_Transform__get_localPosition(v8, 0LL);
  result = 1;
  *outVector = localPosition;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__Initialize(
        BattlePerformanceMaster_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  CommandSpellWindowComponent_CloseButtonCallBack_o *v32; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct CommandSpellWindowComponent_o *v39; // x21
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  UnityEngine_Transform_o *v61; // x21
  int v62; // s1
  int v63; // s0
  int v64; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v74; // x22
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_Object_o *fieldConf; // x21
  BattleFieldConfConponent_o *v82; // x21
  System_Action_o *v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  AssetData_o *v100; // x21
  System_Int32_array **v101; // x1
  UnityEngine_GameObject_o *v102; // x21
  UnityEngine_GameObject_array *Children; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v104; // x23
  struct UnityEngine_GameObject_o **p_skillBtnFlashObject; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  UnityEngine_Object_o *battleItemUi; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351CFB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_BasicHelper_Any_GameObject___);
    sub_B70694(&Method_BattlePerformanceMaster_OnCloseFieldConf__);
    sub_B70694(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__);
    sub_B70694(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__);
    sub_B70694(&Method_BattlePerformanceMaster_procUseCommandSpell__);
    sub_B70694(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_B70694(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    sub_B70694(&Method_System_Func_GameObject__bool___ctor__);
    sub_B70694(&System_Func_GameObject__bool__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__);
    sub_B70694(&BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo);
    sub_B70694(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
    sub_B70694(&StringLiteral_2816/*"Battle/Common"*/);
    sub_B70694(&StringLiteral_18473/*"ef_masterskill_flash"*/);
    byte_4351CFB = 1;
  }
  v9 = sub_B70764(BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo);
  BattlePerformanceMaster___c__DisplayClass83_0___ctor((BattlePerformanceMaster___c__DisplayClass83_0_o *)v9, 0LL);
  this->fields.perf = inperf;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.data = indata;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.logic = inlogic;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  skillBtn = (char *)this->fields.skillBtn;
  if ( !skillBtn )
    goto LABEL_64;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
  if ( !skillBtn )
    goto LABEL_64;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.menuBtn;
  this->fields.pos_skillbtn = localPosition;
  if ( !skillBtn )
    goto LABEL_64;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
  if ( !skillBtn )
    goto LABEL_64;
  v116 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v116;
  if ( !skillBtn )
    goto LABEL_64;
  BattleMasterSkillWindowComponent__setInitData((BattleMasterSkillWindowComponent_o *)skillBtn, 0, 0.1, 0, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_64;
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_64;
  CommandSpellWindowComponent__InitializeCommandSpell(
    (CommandSpellWindowComponent_o *)skillBtn,
    this->fields.perf,
    1,
    data->fields.temporarySpell,
    0LL);
  win_Spell = this->fields.win_Spell;
  v32 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B70764(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !win_Spell )
    goto LABEL_64;
  win_Spell->fields.callback_close = v32;
  sub_B70630(
    (BattleServantConfConponent_o *)&win_Spell->fields.callback_close,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = this->fields.win_Spell;
  v40 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_B70764(CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v39 )
    goto LABEL_64;
  v39->fields.callback_use = v40;
  sub_B70630(
    (BattleServantConfConponent_o *)&v39->fields.callback_use,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_64;
  v53 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 10) = v53;
  sub_B70630((BattleServantConfConponent_o *)(skillBtn + 80), v53, v47, v48, v49, v50, v51, v52);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_64;
  v60 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 18) = v60;
  sub_B70630((BattleServantConfConponent_o *)(skillBtn + 144), v60, v54, v55, v56, v57, v58, v59);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_64;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_64;
  v61 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0LL);
  if ( !skillBtn )
    goto LABEL_64;
  *(UnityEngine_Vector3_o *)(&v62 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillBtn,
                                           0LL);
  if ( !v61 )
    goto LABEL_64;
  v63 = 0;
  v64 = 0;
  UnityEngine_Transform__set_localPosition(v61, *(UnityEngine_Vector3_o *)(&v62 - 1), 0LL);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  v66 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B70764(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v66,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_64;
  warBoard_win_EnemyConf->fields.callback_close = v66;
  sub_B70630(
    (BattleServantConfConponent_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  win_EnemyConf = this->fields.win_EnemyConf;
  v74 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B70764(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v74,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !win_EnemyConf )
    goto LABEL_64;
  win_EnemyConf->fields.callback_close = v74;
  sub_B70630(
    (BattleServantConfConponent_o *)&win_EnemyConf->fields.callback_close,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v82 = this->fields.fieldConf;
    v83 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v83, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v82 )
      goto LABEL_64;
    BattleFieldConfConponent__Initialize(v82, v83, 0LL);
  }
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_64;
  v90 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 12) = v90;
  sub_B70630((BattleServantConfConponent_o *)(skillBtn + 96), v90, v84, v85, v86, v87, v88, v89);
  BattlePerformanceMaster__updateShortSkill(this, v91);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v92);
  BattlePerformanceMaster__updateSkipDead(this, v93);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_64;
  BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)skillBtn, this->fields.data, 0LL);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 424LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 432LL));
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_64;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_2816/*"Battle/Common"*/, 0LL);
  if ( !v9 )
    goto LABEL_64;
  v100 = (AssetData_o *)skillBtn;
  v101 = (System_Int32_array **)StringLiteral_18473/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v9 + 16) = StringLiteral_18473/*"ef_masterskill_flash"*/;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), v101, v94, v95, v96, v97, v98, v99);
  if ( !v100 )
    goto LABEL_64;
  skillBtn = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                       v100,
                       *(System_String_o **)(v9 + 16),
                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( !this->fields.win_Menu )
    goto LABEL_64;
  v102 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v102, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v104 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v104,
      (Il2CppObject *)v9,
      Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__,
      (const MethodInfo_29AC578 *)Method_System_Func_GameObject__bool___ctor__);
    if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Children,
           (System_Func_T__bool__o *)v104,
           (const MethodInfo_1BDCB34 *)Method_BasicHelper_Any_GameObject___) )
    {
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
    }
    else
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v102, transform, 0LL, 0LL);
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
      this->fields.skillBtnFlashObject = Object;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.skillBtnFlashObject,
        (System_Int32_array **)Object,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113);
    }
    skillBtn = (char *)*p_skillBtnFlashObject;
    if ( *p_skillBtnFlashObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      goto LABEL_57;
    }
LABEL_64:
    sub_B7076C(skillBtn, v28);
  }
LABEL_57:
  this->fields._IsNoblePhantasm_k__BackingField = 0;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0LL, 0LL) )
  {
    skillBtn = (char *)this->fields.battleItemUi;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      return;
    }
    goto LABEL_64;
  }
}


void __fastcall BattlePerformanceMaster__InitializeBattleItem(
        BattlePerformanceMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleItemUi; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_Object_o *battleItemIcon; // x20
  UISprite_o *v9; // x20
  int32_t longName; // w21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4351D55 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351D55 = 1;
  }
  entity = 0LL;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0LL, 0LL) )
  {
    Instance = this->fields.battleItemUi;
    if ( !Instance )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(Instance, 1, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_23:
    sub_B7076C(Instance, v6);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleItemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      v9 = this->fields.battleItemIcon;
      longName = (int32_t)entity->fields.longName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v9, longName, 0LL);
      goto LABEL_21;
    }
    goto LABEL_23;
  }
LABEL_21:
  BattlePerformanceMaster__UpdateBattleItemUi(this, v6);
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_B7076C(0LL, method);
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D54 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15613/*"Wait"*/);
    byte_4351D54 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_B7076C(myFsm, method);
  return System_String__IndexOf_44830516((System_String_o *)myFsm, (System_String_o *)StringLiteral_15613/*"Wait"*/, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D46 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3168/*"CLOSE_CONF"*/);
    byte_4351D46 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D53 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D53 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D51 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D51 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D1A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D1A = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D4F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3119/*"CLICK_CKRETIRE"*/);
    byte_4351D4F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3119/*"CLICK_CKRETIRE"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D15 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D15 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


bool __fastcall BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4351D20 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4351D20 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_12:
    sub_B7076C(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B70764(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_B70630(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ((void (__fastcall *)(BattleSkillSelectAddFuncConfComponent_o *, _QWORD, Il2CppMethodPointer))SkillSelectAddFuncConfWindow->klass->vtable._10_Open.method)(
      SkillSelectAddFuncConfWindow,
      0LL,
      SkillSelectAddFuncConfWindow->klass->vtable._11_CompOpen.methodPtr);
    return 1;
  }
  return 0;
}


void __fastcall BattlePerformanceMaster__PlayInterruption(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_B7076C(0LL, method);
  BattleLogic__PlayInterruption(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__PlayPartyReorganization(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_B7076C(0LL, method);
  BattleLogic__PlayPartyReorganization(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4351D45 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__171_0__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D45 = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v4 = this->fields.fieldConf;
    v5 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__171_0__,
      0LL);
    if ( !v4 )
      sub_B7076C(v6, v7);
    BattleFieldConfConponent__Close(v4, v5, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v6; // x20
  BattleWindowComponent_EndCall_o *v7; // x21

  if ( (byte_4351D44 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__170_0__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D44 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_14;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      perf = (BattlePerformance_o *)this->fields.fieldConf;
      if ( perf )
      {
        BattleFieldConfConponent__SetConfData(
          (BattleFieldConfConponent_o *)perf,
          data->fields._FieldEnvData_k__BackingField,
          0LL);
        v6 = this->fields.fieldConf;
        v7 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__170_0__,
          0LL);
        if ( v6 )
        {
          BattleFieldConfConponent__Open(v6, v7, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B7076C(perf, method);
  }
}


void __fastcall BattlePerformanceMaster__ProcWaveRestart(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0

  BattlePerformanceMaster__proclight(this, this->fields.menuBtn, 0, v2);
  win_Menu = this->fields.win_Menu;
  if ( !win_Menu
    || (BattleMenuWindowComponent__ProcWaveRestart(win_Menu, 0LL),
        (win_Menu = (BattleMenuWindowComponent_o *)this->fields.logic) == 0LL) )
  {
    sub_B7076C(win_Menu, v4);
  }
  BattleLogic__ProcWaveRestart((BattleLogic_o *)win_Menu, 0LL);
}


void __fastcall BattlePerformanceMaster__SerializeFieldNotNullCheck(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__SetupMasterSkillBtn(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  void *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v9; // x20

  if ( (byte_4351CFD & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattlePerformanceMaster_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&StringLiteral_2816/*"Battle/Common"*/);
    sub_B70694(&StringLiteral_2834/*"BattleAssetUIAtlas"*/);
    byte_4351CFD = 1;
  }
  mAtlas = BattlePerformanceMaster_TypeInfo;
  if ( (BYTE3(BattlePerformanceMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
    mAtlas = BattlePerformanceMaster_TypeInfo;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_20;
  v6 = (System_String_o *)**((_QWORD **)mAtlas + 23);
  v7 = System_Int32__ToString((int)data + 104, 0LL);
  mAtlas = System_String__Concat_44758168(v6, v7, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_20;
  v9 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_20;
  if ( UIAtlas__GetSprite((UIAtlas_o *)mAtlas, v9, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mAtlas = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2816/*"Battle/Common"*/, 0LL);
  if ( !mAtlas
    || (mAtlas = AssetData__GetObject_WarBoardWaitTimeSetting_(
                   (AssetData_o *)mAtlas,
                   (System_String_o *)StringLiteral_2834/*"BattleAssetUIAtlas"*/,
                   (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720)) == 0LL
    || (mAtlas = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)mAtlas,
                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_20:
    sub_B7076C(mAtlas, method);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, (UIAtlas_o *)mAtlas, 0LL);
LABEL_18:
  mAtlas = this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v9, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D43 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3129/*"CLICK_FIELD"*/);
    byte_4351D43 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3129/*"CLICK_FIELD"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4351D50 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_OnCompShowRetireSA__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351D50 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  win_Retire = this->fields.win_Retire;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B7076C(v5, v6);
  BattleRetireWindowComponent__Open(win_Retire, v4, 0LL);
}


void __fastcall BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x19
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4351D21 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    byte_4351D21 = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
    if ( !this )
      goto LABEL_17;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_17;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformanceMaster__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v7);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_17;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0LL, 0LL) )
      {
        this = (BattlePerformanceMaster_o *)v6->fields.perf;
        if ( this )
        {
          this = (BattlePerformanceMaster_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                (BattlePerformance_o *)this,
                                                0LL);
          if ( this )
          {
            LOBYTE(this->fields.spellBtn) = 0;
            return;
          }
        }
LABEL_17:
        sub_B7076C(this, skillInfo);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__StartBattleGetEffect(
        BattlePerformanceMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *battleItemEffectObject; // x0
  UnityEngine_Object_o *v6; // x21
  struct System_Collections_Generic_Dictionary_int__Coroutine__o **p_battleItemEffectCoroutines; // x21
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_Object_o *battleItemIcon; // x22
  struct System_Collections_Generic_Dictionary_int__Coroutine__o *battleItemEffectCoroutines; // x22
  const MethodInfo *v11; // x4
  System_Collections_IEnumerator_o *v12; // x0
  WarBoardEvalValueSquare_CalcEval_o *v13; // [xsp+8h] [xbp-38h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351D5A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D5A = 1;
  }
  value = 0LL;
  v13 = 0LL;
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.battleItemEffectObject;
  if ( !battleItemEffectObject )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)battleItemEffectObject,
         id,
         &value,
         (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
  {
    v6 = (UnityEngine_Object_o *)value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    {
      battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)value;
      if ( !value )
        goto LABEL_31;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) )
        return;
    }
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.battleItemEffectObject;
    if ( !battleItemEffectObject )
      goto LABEL_31;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_2FC7F44 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_31;
    p_battleItemEffectCoroutines = &this->fields.battleItemEffectCoroutines;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_2FC7F44 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
  }
  else
  {
    p_battleItemEffectCoroutines = &this->fields.battleItemEffectCoroutines;
  }
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)*p_battleItemEffectCoroutines;
  if ( !*p_battleItemEffectCoroutines )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)battleItemEffectObject,
         id,
         &v13,
         (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
  {
    return;
  }
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleItemIcon, 0LL, 0LL) )
  {
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.battleItemIcon;
    if ( !battleItemEffectObject )
      goto LABEL_31;
    battleItemUi = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)battleItemEffectObject,
                                             0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(battleItemUi, 0LL, 0LL) )
    battleItemUi = (UnityEngine_Object_o *)this->fields.master_root;
  battleItemEffectCoroutines = this->fields.battleItemEffectCoroutines;
  zero = UnityEngine_Vector3__get_zero(0LL);
  v12 = BattlePerformanceMaster__DelayEffect(this, id, (UnityEngine_GameObject_o *)battleItemUi, 1, zero, v11);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  if ( !battleItemEffectCoroutines )
LABEL_31:
    sub_B7076C(battleItemEffectObject, *(_QWORD *)&id);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)battleItemEffectCoroutines,
    id,
    (WarBoardAIRoute_RouteData_o *)battleItemEffectObject,
    (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__StartBattleItemAppearEffect(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *parentObj,
        int32_t id,
        float waitTime,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v8; // x19
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v10; // x4
  int v11; // s0
  float v13; // s1
  float v14; // s1
  System_Collections_IEnumerator_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *mFSM; // x20
  System_Collections_IEnumerator_o *v18; // x1

  v8 = this;
  if ( (byte_4351D5C & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_23156/*"treasure"*/);
    byte_4351D5C = 1;
  }
  if ( id )
  {
    if ( !parentObj )
      goto LABEL_27;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                parentObj,
                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_srcLineSprite,
                                          0LL,
                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_27;
      this = (BattlePerformanceMaster_o *)Component_srcLineSprite->fields.mFSM;
      if ( !this )
        goto LABEL_27;
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_27;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v14 = v13 + 0.22;
    }
    else
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(parentObj, 0LL);
      if ( !this )
        goto LABEL_27;
      this = (BattlePerformanceMaster_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)this,
                                            (System_String_o *)StringLiteral_23156/*"treasure"*/,
                                            0LL);
      if ( !this )
        goto LABEL_27;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    }
    v15 = BattlePerformanceMaster__DelayEffect(v8, id, parentObj, 0, *(UnityEngine_Vector3_o *)&v11, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)v8, v15, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_srcLineSprite,
                                          0LL,
                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        this = (BattlePerformanceMaster_o *)Component_srcLineSprite->fields.mFSM;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          mFSM = (UnityEngine_GameObject_o *)Component_srcLineSprite->fields.mFSM;
          if ( (BYTE3(BattlePerformanceMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
          }
          v18 = BattlePerformanceMaster__DelayShowItem(mFSM, waitTime, v16);
          UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)v8, v18, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B7076C(this, parentObj);
    }
  }
}


void __fastcall BattlePerformanceMaster__StartNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *effectAfterNoblePhantasmCoroutine; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x0

  if ( (byte_4351D58 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    byte_4351D58 = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_36062728(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0LL);
    this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    delayAfterNoblePhantasmBuffData = this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_B7076C(0LL, v10);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)delayAfterNoblePhantasmBuffData,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
  }
}


void __fastcall BattlePerformanceMaster__UpdateBattleItemUi(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4351D56 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B70694(&SingletonTemplate_BattleItemData__TypeInfo);
    byte_4351D56 = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v3);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0LL, 0LL) )
  {
    v5 = this->fields.battleItemCountLabel;
    if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
    }
    v6 = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !v6 || (v6 = BasicHelper__ToCommaString(*(_DWORD *)&v6->fields.m_firstChar, 0LL), !v5) )
      sub_B7076C(v6, v7);
    UILabel__set_text(v5, v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  PlayMakerFSM_o *perf; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4351D1E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    byte_4351D1E = 1;
  }
  isOpenOtherWindow = 0;
  perf = (PlayMakerFSM_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_25;
  if ( BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0LL) )
  {
    perf = this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_25:
    sub_B7076C(perf, playSe);
  }
  if ( playSe )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.actSkillObject,
    (System_Int32_array **)useSkillObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_25;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_25;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v15) )
  {
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v16);
    if ( isOpenOtherWindow )
    {
      perf = (PlayMakerFSM_o *)this->fields.perf;
      if ( !perf )
        goto LABEL_25;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)perf,
                                                               0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0LL, 0LL) )
      {
        perf = (PlayMakerFSM_o *)this->fields.perf;
        if ( !perf )
          goto LABEL_25;
        perf = (PlayMakerFSM_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow((BattlePerformance_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_25;
        LOBYTE(perf[2].fields.fsmTemplate) = 0;
      }
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4351D57 & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_TypeInfo);
    byte_4351D57 = 1;
  }
  v3 = sub_B70764(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_TypeInfo);
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190___ctor(
    (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x20
  System_Int32_array *ValidTargetTypeArray; // x22
  System_Func_int__bool__o *v8; // x23
  System_Int32_array **SelectSvtWindow; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_Func_int__bool__o *v17; // x23
  System_Int32_array **SelectMainSubSvtWindow; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t v25; // w0
  const MethodInfo *v26; // x2
  bool v27; // w8

  v6 = this;
  if ( (byte_4351D1F & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_Target_isChoose__);
    sub_B70694(&Method_Target_isSubChoose__);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D1F = 1;
  }
  if ( !skillInfo )
    goto LABEL_19;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v8 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v8,
    0LL,
    Method_Target_isSubChoose__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  if ( !BasicHelper__Any_int__29214704(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
  {
    v17 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v17,
      0LL,
      Method_Target_isChoose__,
      (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
    if ( BasicHelper__Any_int__29214704(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616) )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( this )
      {
        BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
        this = (BattlePerformanceMaster_o *)v6->fields.perf;
        if ( this )
        {
          SelectMainSubSvtWindow = (System_Int32_array **)BattlePerformance__getSelectMainSubSvtWindow(
                                                            (BattlePerformance_o *)this,
                                                            0LL);
          v6->fields.selectMSWindow = (struct BattleSelectMainSubServantWindow_o *)SelectMainSubSvtWindow;
          sub_B70630(
            (BattleServantConfConponent_o *)&v6->fields.selectMSWindow,
            SelectMainSubSvtWindow,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          this = (BattlePerformanceMaster_o *)v6->fields.selectMSWindow;
          if ( this )
          {
            ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
              this,
              this->klass[1]._1.generic_class);
            v25 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
            BattlePerformanceMaster__openSkillSelectSvtWindow(v6, v25, v26);
            goto LABEL_14;
          }
        }
      }
    }
    else
    {
      this = (BattlePerformanceMaster_o *)v6->fields.logic;
      if ( this )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL);
        this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
        if ( this )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
          v27 = 0;
          goto LABEL_18;
        }
      }
    }
LABEL_19:
    sub_B7076C(this, skillInfo);
  }
  this = (BattlePerformanceMaster_o *)v6->fields.perf;
  if ( !this )
    goto LABEL_19;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
  this = (BattlePerformanceMaster_o *)v6->fields.perf;
  if ( !this )
    goto LABEL_19;
  SelectSvtWindow = (System_Int32_array **)BattlePerformance__getSelectSvtWindow((BattlePerformance_o *)this, 0LL);
  v6->fields.skillselectSvtWindow = (struct BattleSelectServantWindow_o *)SelectSvtWindow;
  sub_B70630(
    (BattleServantConfConponent_o *)&v6->fields.skillselectSvtWindow,
    SelectSvtWindow,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this = (BattlePerformanceMaster_o *)v6->fields.skillselectSvtWindow;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
    this,
    this->klass[1]._1.generic_class);
  BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v6, v16);
LABEL_14:
  v27 = 1;
LABEL_18:
  *isOpenOtherWindow = v27;
}


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__171_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D61 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D61 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__170_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D60 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D60 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__callBackSelectedMainSub(
        BattlePerformanceMaster_o *this,
        bool flg,
        int32_t mainUniqueId,
        int32_t subUniqueId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *selectMSWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8

  if ( (byte_4351D27 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D27 = 1;
  }
  selectMSWindow = (PlayMakerFSM_o *)this->fields.selectMSWindow;
  if ( !selectMSWindow )
    goto LABEL_11;
  ((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *, _QWORD, const MethodInfo *))selectMSWindow->klass[1]._1.typeMetadataHandle)(
    selectMSWindow,
    0LL,
    selectMSWindow->klass[1]._1.interopData,
    *(_QWORD *)&subUniqueId,
    method);
  if ( flg )
  {
    selectMSWindow = this->fields.myFsm;
    if ( selectMSWindow )
    {
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
      actSkillObject = this->fields.actSkillObject;
      if ( actSkillObject )
      {
        selectMSWindow = (PlayMakerFSM_o *)this->fields.logic;
        if ( selectMSWindow )
        {
          BattleLogic__wantUseSkill(
            (BattleLogic_o *)selectMSWindow,
            actSkillObject->fields.skillInfo,
            mainUniqueId,
            subUniqueId,
            0LL);
          return;
        }
      }
    }
LABEL_11:
    sub_B7076C(selectMSWindow, flg);
  }
  selectMSWindow = (PlayMakerFSM_o *)this->fields.perf;
  if ( !selectMSWindow )
    goto LABEL_11;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)selectMSWindow,
    this->fields.myFsm,
    0LL);
}


void __fastcall BattlePerformanceMaster__changeShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4351D2D & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D2D = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_B7076C(data, method);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v4);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4351D31 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D31 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_B7076C(data, method);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateSkipDead(this, v4);
}


void __fastcall BattlePerformanceMaster__changeTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4351D2F & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D2F = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_B7076C(data, method);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v4);
}


void __fastcall BattlePerformanceMaster__checkCommandSpellTarget(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4351D10 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D10 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v4);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL),
        (Instance = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_B7076C(Instance, v4);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0LL);
}


void __fastcall BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v4; // x8
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v6; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 *v13; // x8
  System_Int32_array **v14; // x1

  v2 = this;
  if ( (byte_4351D13 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    sub_B70694(&StringLiteral_12425/*"SKIP"*/);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_9411/*"NG"*/);
    byte_4351D13 = 1;
  }
  tmp_useSkill = v2->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)tmp_useSkill->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_17;
  v4 = v2->fields.tmp_useSkill;
  if ( !v4 )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)v4->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v13 = &StringLiteral_9411/*"NG"*/;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.systemflg_skipskillconf )
  {
    v6 = v2->fields.tmp_useSkill;
    if ( v6 )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.skillInfo;
      if ( this )
      {
        if ( BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0LL) || v2->fields.isLongTap )
          goto LABEL_15;
        v14 = (System_Int32_array **)v2->fields.tmp_useSkill;
        v2->fields.useSkillObject = (struct BattleLogic_UseSkillObject_o *)v14;
        sub_B70630((BattleServantConfConponent_o *)&v2->fields.useSkillObject, v14, v7, v8, v9, v10, v11, v12);
        this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
        if ( this )
        {
          v13 = &StringLiteral_12425/*"SKIP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_B7076C(this, method);
  }
LABEL_15:
  this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
  if ( !this )
    goto LABEL_22;
  v13 = &StringLiteral_5584/*"END_PROC"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v13, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  __int64 *v4; // x9

  if ( (byte_4351D3C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_9858/*"OK"*/);
    sub_B70694(&StringLiteral_12425/*"SKIP"*/);
    byte_4351D3C = 1;
  }
  logic = this->fields.logic;
  if ( !logic || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0LL), !this->fields.myFsm) )
    sub_B7076C(logic, method);
  if ( ((unsigned __int8)logic & 1) != 0 )
    v4 = &StringLiteral_9858/*"OK"*/;
  else
    v4 = &StringLiteral_12425/*"SKIP"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v4, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D18 & 1) == 0 )
  {
    sub_B70694(&BattleLogic_UseSkillObject_TypeInfo);
    sub_B70694(&StringLiteral_3115/*"CLICK_BOOST"*/);
    byte_4351D18 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_B70764(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.tmp_useSkill = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3115/*"CLICK_BOOST"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *logic; // x0

  if ( (byte_4351D1D & 1) == 0 )
  {
    sub_B70694(&BattleLogic_UseSkillObject_TypeInfo);
    sub_B70694(&StringLiteral_3149/*"CLICK_SKILLICON"*/);
    byte_4351D1D = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_B70764(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0LL);
  this->fields.tmp_useSkill = v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = isLong;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0LL) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3149/*"CLICK_SKILLICON"*/, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(logic, v14);
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D08 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5567/*"END_CLOSEALL"*/);
    byte_4351D08 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5567/*"END_CLOSEALL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D42 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D42 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4351D2C & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D2C = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D09 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D09 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4351D05 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D05 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4351D0D & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D0D = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D3F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D3F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D4E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D4E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4351D07 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D07 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4351D2A & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D2A = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4351D03 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D03 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D0B & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D0B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        BattlePerformanceMaster_MasterBuffEffectData_o *closeBuffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectTween; // x22
  bool v8; // w0
  __int64 v9; // x1
  UnityEngine_Behaviour_o *perf; // x0

  if ( (byte_4351D4B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D4B = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL);
  if ( closeBuffData || !v8 )
  {
    if ( closeBuffData )
    {
      this->fields.isMasterBuffEffectPlaying = 0;
      goto LABEL_15;
    }
  }
  else
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !perf )
      goto LABEL_28;
    UnityEngine_Behaviour__set_enabled(perf, 0, 0LL);
  }
  closeBuffData = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B70764(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor(closeBuffData, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_28;
  perf = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)perf, 0LL);
  if ( !closeBuffData )
    goto LABEL_28;
  closeBuffData->fields.isRootActive = (unsigned __int8)perf & 1;
  *(_WORD *)&closeBuffData->fields.isMenuBtnActive = 257;
  closeBuffData->fields.isSkillBtnActive = 1;
LABEL_15:
  perf = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isMenuBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSpellBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.skillBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSkillBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isRootActive, 0LL);
  if ( !widget )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_28;
    widget = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                             (UnityEngine_GameObject_o *)perf,
                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)widget, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( widget )
    {
      ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))widget->klass->vtable._8_set_alpha.method)(
        widget,
        widget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      return;
    }
LABEL_28:
    sub_B7076C(perf, v9);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4351D4C & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_TypeInfo);
    byte_4351D4C = 1;
  }
  v3 = sub_B70764(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_TypeInfo);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4351D28 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4351D28 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_B7076C(Instance, v5);
  }
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D34 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12531/*"START_TAC"*/);
    byte_4351D34 = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12531/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_B7076C(0LL, method);
  BattleBoostSkillIconComponent__procFlash(boostSkillIcon, 0LL);
}


bool __fastcall BattlePerformanceMaster__get_IsMasterBuffEffectPlaying(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  return this->fields.isMasterBuffEffectPlaying;
}


bool __fastcall BattlePerformanceMaster__get_IsNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  return this->fields._IsNoblePhantasm_k__BackingField;
}


bool __fastcall BattlePerformanceMaster__isCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( !BattleData__IsWarBoard(data, 0LL) )
    goto LABEL_5;
  data = (BattleData_o *)this->fields.warBoard_win_EnemyConf;
  if ( !data )
    goto LABEL_7;
  if ( !data->fields.turnEffect )
  {
LABEL_5:
    data = (BattleData_o *)this->fields.win_EnemyConf;
    if ( data )
      return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0LL);
LABEL_7:
    sub_B7076C(data, method);
  }
  return BattleWindowComponent__isClose((BattleWindowComponent_o *)data, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinMenuWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Menu; // x0

  win_Menu = (BattleWindowComponent_o *)this->fields.win_Menu;
  if ( !win_Menu )
    sub_B7076C(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_B7076C(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  int32_t v5; // w20
  int32_t v6; // w8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleData_o *v13; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v15; // x9
  struct BattleData_o *v16; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w24
  int max_length; // w8
  __int64 v21; // x22
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  int v27; // w25
  __int64 v28; // x26
  char v29; // w28
  UILabel_o *skillIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v32; // x22
  UnityEngine_Transform_o *v33; // x23
  int v34; // s0
  UnityEngine_Transform_o *v37; // x23
  int v38; // s0
  struct BattlePerformance_o *v41; // x8
  struct BattleData_o *v42; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v43; // x23
  BattleSkillInfoData_o *v44; // x8
  float v45; // s11
  struct BattleData_o *v46; // x8
  UISprite_o *skillIconSplit; // x23
  struct BattleServantSkillIConComponent_array *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleData_o *v55; // x8
  struct BattleData_o *v56; // x8
  struct BattleData_o *v57; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v59; // x1
  int32_t v60; // w20
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  __int64 v63; // x0
  int32_t overwriteImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351CFC & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_B70694(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_B70694(&SingletonTemplate_BattleItemData__TypeInfo);
    sub_B70694(&StringLiteral_22522/*"skill_partition"*/);
    sub_B70694(&StringLiteral_19178/*"frame_master_bg_disable"*/);
    byte_4351CFC = 1;
  }
  overwriteImageId = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)BattleData__getMasterEquipId(data, 0LL);
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_96;
  v5 = (int)data;
  data = (BattleData_o *)v4->fields.quest_ent;
  if ( !data )
    goto LABEL_96;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x100000000LL, 0LL) )
  {
    data = (BattleData_o *)this->fields.userGrade;
    if ( !data )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    goto LABEL_22;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_96;
  overwriteImageId = BattleData__GetMasterIconImageId(data, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_96;
  BattleData__GetEquipAddImageId(data, &overwriteImageId, 0LL);
  v6 = overwriteImageId;
  if ( !overwriteImageId )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_96;
    overwriteImageId = BattleData__GetOverWriteMasterImageId(data, 0LL);
    if ( !overwriteImageId )
      goto LABEL_17;
    data = (BattleData_o *)this->fields.userGrade;
    if ( !data )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v6 = overwriteImageId;
  }
  if ( v6 == -1 )
  {
LABEL_22:
    data = (BattleData_o *)this->fields.master_root;
    if ( !data )
      goto LABEL_96;
    data = (BattleData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                             (UnityEngine_GameObject_o *)data,
                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_96;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19178/*"frame_master_bg_disable"*/, 0LL);
    goto LABEL_25;
  }
LABEL_17:
  data = (BattleData_o *)this->fields.face_root;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)data, 0LL);
  if ( !(_DWORD)data )
  {
    v13 = this->fields.data;
    if ( !v13 )
      goto LABEL_96;
    data = (BattleData_o *)MasterFaceManager__CreatePrefab_30989120(
                             this->fields.face_root,
                             1,
                             v13->fields.battleGenderType,
                             v5,
                             2,
                             0LL,
                             overwriteImageId,
                             0LL);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_96;
  v15 = perf->fields.data;
  if ( !v15 )
    goto LABEL_96;
  if ( v15->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_96;
  }
  v16 = perf->fields.data;
  if ( !v16 )
    goto LABEL_96;
  masterSkillInfo = v16->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_96;
  skillIcon = this->fields.skillIcon;
  size = masterSkillInfo->fields._size;
  if ( skillIcon )
  {
    max_length = skillIcon->max_length;
    if ( size == max_length )
      goto LABEL_82;
    if ( max_length >= 1 )
    {
      v21 = 0LL;
      do
      {
        if ( (unsigned int)v21 >= max_length )
        {
          v63 = sub_B70798(data);
          sub_B70738(v63, 0LL);
        }
        data = (BattleData_o *)skillIcon->m_Items[v21];
        if ( !data )
          goto LABEL_96;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v21 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.skillIcon, 0LL, v7, v8, v9, v10, v11, v12);
  }
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
  data = (BattleData_o *)this->fields.skillIconSplit;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_96;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  v27 = size - 1;
  if ( size >= 1 )
  {
    v28 = 0LL;
    v29 = 0;
    while ( 1 )
    {
      data = (BattleData_o *)this->fields.win_Skill;
      if ( !data )
        goto LABEL_96;
      skillIconPrefab = (UILabel_o *)this->fields.skillIconPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__Instantiate_UILabel_(
                               skillIconPrefab,
                               transform,
                               (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_96;
      v32 = (UnityEngine_Component_o *)data;
      v33 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL);
      if ( !v33 )
        goto LABEL_96;
      UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
      v37 = UnityEngine_Component__get_transform(v32, 0LL);
      *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v37 )
        goto LABEL_96;
      UnityEngine_Transform__set_localEulerAngles(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
      v41 = this->fields.perf;
      if ( !v41 )
        goto LABEL_96;
      v42 = v41->fields.data;
      if ( !v42 )
        goto LABEL_96;
      v43 = v42->fields.masterSkillInfo;
      if ( !v43 )
        goto LABEL_96;
      if ( v43->fields._size <= (unsigned int)v28 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v44 = v43->fields._items->m_Items[v28];
      if ( !v44 )
        goto LABEL_96;
      v45 = x + (float)(this->fields.skillIconOffset * (float)v27);
      if ( v44->fields.isAdd )
      {
        v46 = this->fields.data;
        if ( !v46 )
          goto LABEL_96;
        if ( !v46->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v29 & 1) == 0 )
          {
            data = (BattleData_o *)this->fields.skillIconSplit;
            if ( !data )
              goto LABEL_96;
            data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
            if ( !data )
              goto LABEL_96;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
            skillIconSplit = this->fields.skillIconSplit;
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_22522/*"skill_partition"*/, 0LL);
          }
          v29 = 1;
          v45 = v45 - this->fields.skillIconSplitSpace;
        }
      }
      data = (BattleData_o *)UnityEngine_Component__get_transform(v32, 0LL);
      if ( !data )
        goto LABEL_96;
      v66.fields.x = v45;
      v66.fields.y = y;
      v66.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v66, 0LL);
      data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                               v32,
                               (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v26 )
        goto LABEL_96;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)data,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
      ++v28;
      --v27;
      if ( (int)v28 >= size )
        goto LABEL_79;
    }
  }
  if ( !v26 )
    goto LABEL_96;
LABEL_79:
  v48 = (struct BattleServantSkillIConComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = v48;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillIcon,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data
    || (data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL)) == 0LL )
  {
LABEL_96:
    sub_B7076C(data, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
LABEL_82:
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_96;
  data = (BattleData_o *)v55->fields.questphase_ent;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0LL);
  v56 = this->fields.data;
  this->fields.iconItemNumberDispType = (int)data;
  if ( !v56 )
    goto LABEL_96;
  data = (BattleData_o *)v56->fields.questphase_ent;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0LL);
  v57 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = (int)data;
  if ( !v57 )
    goto LABEL_96;
  data = (BattleData_o *)v57->fields.questphase_ent;
  if ( !data )
    goto LABEL_96;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0LL);
  if ( BattleItemObjectId >= 1 )
  {
    v60 = BattleItemObjectId;
    if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
    }
    data = (BattleData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_96;
    BattleItemData__SetItemId((BattleItemData_o *)data, v60, 0LL);
    BattlePerformanceMaster__InitializeBattleItem(this, v60, v61);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v59);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v62);
  data = (BattleData_o *)this->fields.master_root;
  if ( !data )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_MasterBuffEffectData_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4351D3A & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D3A = 1;
  }
  v3 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B70764(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor_20903544(v3, 0, 0LL);
  this->fields.masterBuffEffectDataClose = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v10);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_18;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v13);
  BattlePerformanceMaster__procCloseSkill(this, v14);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Spell;
  if ( !master_root )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Menu;
  if ( !master_root )
    goto LABEL_18;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)master_root, 0LL, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Retire;
  if ( !master_root )
    goto LABEL_18;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
  master_root = (UnityEngine_GameObject_o *)this->fields.warBoard_win_EnemyConf;
  if ( !master_root )
    goto LABEL_18;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0LL, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_EnemyConf;
  if ( !master_root )
    goto LABEL_18;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    master_root = (UnityEngine_GameObject_o *)this->fields.fieldConf;
    if ( !master_root )
      goto LABEL_18;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)master_root, 0LL, 0LL);
  }
  master_root = (UnityEngine_GameObject_o *)this->fields.itemListWindow;
  if ( !master_root )
LABEL_18:
    sub_B7076C(master_root, v11);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_MasterBuffEffectData_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_4351D01 & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    byte_4351D01 = 1;
  }
  v3 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B70764(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor_20903544(v3, 1, 0LL);
  this->fields.masterBuffEffectDataClose = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v10);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v13),
        BattlePerformanceMaster__updateSkillIcon(this, v14),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B7076C(master_root, v11);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_4351D48 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3139/*"CLICK_MENU"*/);
    byte_4351D48 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_B7076C(perf, method);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3139/*"CLICK_MENU"*/, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D24 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    byte_4351D24 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D23 & 1) == 0 )
  {
    sub_B70694(&BattleLogic_UseSkillObject_TypeInfo);
    sub_B70694(&StringLiteral_9858/*"OK"*/);
    byte_4351D23 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_B70764(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.useSkillObject = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.useSkillObject,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9858/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v5; // x8

  if ( (byte_4351D47 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_3151/*"CLICK_SPELL"*/);
    byte_4351D47 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  perf = (BattlePerformance_o *)data->fields.quest_ent;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)QuestEntity__HasFlag((QuestEntity_o *)perf, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    v5 = this->fields.data;
    if ( v5 )
    {
      perf = (BattlePerformance_o *)v5->fields.quest_ent;
      if ( perf )
      {
        if ( QuestEntity__HasFlag((QuestEntity_o *)perf, 0x100000000LL, 0LL) )
          goto LABEL_14;
        perf = (BattlePerformance_o *)this->fields.myFsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3151/*"CLICK_SPELL"*/, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B7076C(perf, method);
  }
LABEL_14:
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall BattlePerformanceMaster__onCloseEnemyServantConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D40 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3168/*"CLOSE_CONF"*/);
    byte_4351D40 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_CONF"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__openRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4351D36 & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster__openRetireDialog_d__151_TypeInfo);
    byte_4351D36 = 1;
  }
  v3 = sub_B70764(BattlePerformanceMaster__openRetireDialog_d__151_TypeInfo);
  BattlePerformanceMaster__openRetireDialog_d__151___ctor(
    (BattlePerformanceMaster__openRetireDialog_d__151_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  BattleSelectServantWindow_o *v13; // x0
  struct BattleSelectServantWindow_o *v14; // x21
  BattleSelectServantWindow_SelectServantCallBack_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v26; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v28; // x1

  if ( (byte_4351D11 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_selectedSvt__);
    sub_B70694(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4351D11 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_B7076C(0LL, method);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.selectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = this->fields.selectSvtWindow;
  if ( !v13 )
    sub_B7076C(0LL, v12);
  BattleSelectServantWindow__setUseClose(v13, 1, 0LL);
  v14 = *p_selectSvtWindow;
  v15 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B70764(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v14 )
    sub_B7076C(v16, v17);
  v14->fields.selectCallBack = v15;
  sub_B70630(
    (BattleServantConfConponent_o *)&v14->fields.selectCallBack,
    (System_Int32_array **)v15,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  data = this->fields.data;
  if ( !data )
    sub_B7076C(0LL, v24);
  v26 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v26 )
    sub_B7076C(FieldPlayerServantList, FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v26,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_B7076C(0LL, v28);
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectSvtWindow)->klass->vtable._10_Open.method)(
    *p_selectSvtWindow,
    0LL,
    (*p_selectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  char *data; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  NotificationDialog_ClickDelegate_o *v30; // x23

  if ( (byte_4351D26 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_callBackSelectedMainSub__);
    sub_B70694(&Method_BattlePerformanceMaster_endSelectSvtError__);
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_2577/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/);
    sub_B70694(&StringLiteral_2578/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/);
    byte_4351D26 = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (char *)BattleData__getSubPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_16;
  if ( *((_QWORD *)data + 3) )
  {
    data = (char *)this->fields.perf;
    if ( data )
    {
      SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)data, 0LL);
      p_selectMSWindow = &this->fields.selectMSWindow;
      this->fields.selectMSWindow = SelectMainSubSvtWindow;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.selectMSWindow,
        (System_Int32_array **)SelectMainSubSvtWindow,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      selectMSWindow = this->fields.selectMSWindow;
      v13 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_B70764(BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v13;
        sub_B70630(
          (BattleServantConfConponent_o *)&selectMSWindow->fields.callBack,
          (System_Int32_array **)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v26 = (System_Int32_array **)this->fields.data;
          *((_QWORD *)data + 18) = v26;
          sub_B70630((BattleServantConfConponent_o *)(data + 144), v26, v20, v21, v22, v23, v24, v25);
          data = (char *)*p_selectMSWindow;
          if ( *p_selectMSWindow )
          {
            (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)data + 472LL))(
              data,
              0LL,
              *(_QWORD *)(*(_QWORD *)data + 480LL));
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B7076C(data, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2578/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2577/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0LL);
  v30 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog_17906460(
    Instance,
    v28,
    v29,
    v30,
    -1,
    0,
    0,
    0,
    0,
    1,
    0LL,
    0LL,
    0,
    0,
    0LL,
    1,
    0LL,
    0LL,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__openSkillSelectSvtWindow(
        BattlePerformanceMaster_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_skillselectSvtWindow; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleSelectServantWindow_o *v22; // x20

  if ( (byte_4351D22 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_selectedSkillSvt__);
    sub_B70694(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4351D22 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillselectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0LL);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v15 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B70764(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v15,
        sub_B70630(
          (BattleServantConfConponent_o *)&skillselectSvtWindow->fields.selectCallBack,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v22 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v22)
    || (BattleSelectServantWindow__SetServantData(v22, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0LL) )
  {
LABEL_10:
    sub_B7076C(perf, *(_QWORD *)&skillId);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procCloseAll(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  UnityEngine_Object_o *fieldConf; // x20

  v3 = this;
  if ( (byte_4351D38 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compCloseALL__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D38 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  win_Menu = v3->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_20;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_Retire;
  if ( !win_Menu )
    goto LABEL_20;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Skill = v3->fields.win_Skill;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)v3, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v9,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_Spell;
  if ( !win_Menu )
    goto LABEL_20;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.warBoard_win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_20;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_20;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)v3->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    win_Menu = (BattleMenuWindowComponent_o *)v3->fields.fieldConf;
    if ( !win_Menu )
      goto LABEL_20;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)win_Menu, 0LL, 0LL);
  }
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.skillConfWindow;
  if ( !win_Menu
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
          win_Menu,
          0LL,
          win_Menu->klass->vtable._13_CompClose.methodPtr),
        (win_Menu = (BattleMenuWindowComponent_o *)v3->fields.boostSkillConfWindow) == 0LL)
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
          win_Menu,
          0LL,
          win_Menu->klass->vtable._13_CompClose.methodPtr),
        (win_Menu = (BattleMenuWindowComponent_o *)v3->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)win_Menu, 0LL, 0LL),
        (win_Menu = (BattleMenuWindowComponent_o *)v3->fields.itemListWindow) == 0LL) )
  {
LABEL_20:
    sub_B7076C(win_Menu, v6);
  }
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4351D1B & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D1B = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_B7076C(v5, v6);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v4,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D0E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3183/*"CLOSE_SPELL"*/);
    byte_4351D0E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3183/*"CLOSE_SPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4351D41 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compCloseEnemyConf__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4351D41 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__IsWarBoard(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_8;
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  if ( !warBoard_win_EnemyConf )
    goto LABEL_10;
  if ( !warBoard_win_EnemyConf->fields.bsvtData )
  {
LABEL_8:
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
    v5 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_B7076C(data, method);
  }
  v5 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseEnemyConf__,
    0LL);
LABEL_9:
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, v5, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v3; // x0
  const MethodInfo *v4; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4351D2B & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compCloseMenu__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D2B = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v3, this->fields.menuBtn, 0, v4);
  win_Menu = this->fields.win_Menu;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_B7076C(v7, v8);
  BattleMenuWindowComponent__Close(win_Menu, v6, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x0

  BattlePerformanceMaster__proclight(this, this->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v4, this->fields.menuBtn, 0, v5);
  win_Skill = this->fields.win_Skill;
  if ( !win_Skill )
    sub_B7076C(0LL, v6);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  BattlePerformance_o *perf; // x0
  __int64 v6; // x1

  if ( (byte_4351D16 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_CloseSkillConfComp__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D16 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v4,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B7076C(perf, v6);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v3; // x0
  const MethodInfo *v4; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4351D04 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compCloseSkillWindow__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D04 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v3, this->fields.skillBtn, 0, v4);
  win_Skill = this->fields.win_Skill;
  v6 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_B7076C(v7, v8);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v6,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4351D0C & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compCloseSpellWindow__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    byte_4351D0C = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  win_Spell = this->fields.win_Spell;
  v4 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_B7076C(v5, v6);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v4,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  System_Int32_array **gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleSkillConfComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4351D19 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4351D19 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B70630(
          (BattleServantConfConponent_o *)&boostSkillConfWindow->fields.target,
          gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = (System_Int32_array **)this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)gameObject,
          tmp_useSkill->fields.skillInfo,
          1,
          0,
          0LL),
        v13 = this->fields.boostSkillConfWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v13) )
  {
    sub_B7076C(gameObject, v6);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v14,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v4; // x20
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4351D3E & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compOpenEnemyConf__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D3E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_16;
  perf = (BattlePerformance_o *)BattleData__getEnemyServantDataIndex((BattleData_o *)perf, this->fields.tmp_index, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v4 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)BattleData__IsWarBoard(this->fields.data, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
    goto LABEL_12;
  if ( !v4 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v4, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.warBoard_win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v4, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    perf = (BattlePerformance_o *)this->fields.win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v4, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
  }
  v6 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_B7076C(perf, method);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v6, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  v3 = this;
  if ( (byte_4351D4D & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compOpenItemListWindow__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D4D = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)v3->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  perf = (BattlePerformance_o *)v3->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        itemListWindow = v3->fields.itemListWindow,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)v3,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_11:
    sub_B7076C(perf, v6);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v9, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_4351D06 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D06 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(7, 0LL);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_10:
    sub_B7076C(perf, method);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4351D29 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compOpenMenu__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D29 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v4, this->fields.skillBtn, 0, v5);
  BattlePerformanceMaster__proclight(v6, this->fields.menuBtn, 1, v7);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        win_Menu = this->fields.win_Menu,
        v9 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_11:
    sub_B7076C(perf, method);
  }
  BattleMenuWindowComponent__Open(win_Menu, v9, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  System_Int32_array **gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleSkillConfComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4351D14 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_OpenSkillConfComplete__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4351D14 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B70630(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = (System_Int32_array **)this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)gameObject,
          tmp_useSkill->fields.skillInfo,
          1,
          0,
          0LL),
        v13 = this->fields.skillConfWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v13) )
  {
    sub_B7076C(gameObject, v6);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v14,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v9; // x21

  if ( (byte_4351D02 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compOpenSkillWindow__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D02 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v4, this->fields.skillBtn, 1, v5);
  BattlePerformanceMaster__proclight(v6, this->fields.menuBtn, 0, v7);
  win_Skill = this->fields.win_Skill;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_10:
    sub_B7076C(perf, method);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v9,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v4; // x0
  const MethodInfo *v5; // x3
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x9
  struct CommandSpellWindowComponent_o *v10; // x20
  struct CommandSpellWindowComponent_o *v11; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_4351D0A & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_compOpenSpellWindow__);
    sub_B70694(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&StringLiteral_12506/*"START_CLOSE"*/);
    byte_4351D0A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_15;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12506/*"START_CLOSE"*/, 0LL);
  BattlePerformanceMaster__proclight(v4, this->fields.skillBtn, 0, v5);
  BattlePerformanceMaster__proclight(v6, this->fields.menuBtn, 0, v7);
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_15;
  win_Spell->fields.temporarySpell = data->fields.temporarySpell;
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_15;
  v10 = this->fields.win_Spell;
  perf = (BattlePerformance_o *)BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0LL);
  if ( !v10
    || (v10->fields.isUseTemporarySpell = (unsigned __int8)perf & 1,
        v11 = this->fields.win_Spell,
        v12 = (BattleWindowComponent_EndCall_o *)sub_B70764(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0LL),
        !v11)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v11->klass->vtable._10_Open.method)(
          v11,
          v12,
          v11->klass->vtable._11_CompOpen.methodPtr),
        (perf = (BattlePerformance_o *)this->fields.win_Skill) == 0LL) )
  {
LABEL_15:
    sub_B7076C(perf, method);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
    perf,
    0LL,
    perf->klass[1]._1.properties);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__procUseCommandSpell(
        BattlePerformanceMaster_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D0F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3161/*"CLICK_USESPELL"*/);
    byte_4351D0F = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_B7076C(0LL, *(_QWORD *)&commandSpellId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3161/*"CLICK_USESPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_4351D3B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattlePerformanceMaster_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351D3B = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B7076C(this, obj);
  }
}


void __fastcall BattlePerformanceMaster__retRetireDialog(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4351D37 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_9858/*"OK"*/);
    byte_4351D37 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B7076C(Instance, v5);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9858/*"OK"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSkillSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  void *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x22
  SkillEntity_o *v9; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v11; // x21
  BattlePerformanceMaster___c_c *v12; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__133_0; // x23
  System_String_o *v15; // x22
  Il2CppObject *v16; // x24
  struct BattlePerformanceMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4351D25 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__133_0__);
    sub_B70694(&BattlePerformanceMaster___c_TypeInfo);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_2507/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4351D25 = 1;
  }
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  if ( !skillselectSvtWindow )
    goto LABEL_31;
  skillselectSvtWindow = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)skillselectSvtWindow
                                                                                   + 504LL))(
                                   skillselectSvtWindow,
                                   0LL,
                                   *(_QWORD *)(*(_QWORD *)skillselectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_31;
    skillInfo = actSkillObject->fields.skillInfo;
    skillselectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_31;
    skillselectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_31;
    v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v8 )
      goto LABEL_31;
    skillselectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v8,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_31;
    v9 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !skillselectSvtWindow || !v9 )
      goto LABEL_31;
    if ( SkillEntity__checkUseTreasure(v9, *((_DWORD *)skillselectSvtWindow + 77), 0LL) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B7076C(skillselectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2507/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v11 = (System_String_o *)skillselectSvtWindow;
    v12 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v12 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__133_0 = static_fields->__9__133_0;
    v15 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__133_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__133_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__133_0, v16, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__133_0__, 0LL);
      v17 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v17->__9__133_0 = _9__133_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v17->__9__133_0,
        (System_Int32_array **)_9__133_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( !Instance )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(Instance, v15, v11, _9__133_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  skillselectSvtWindow = this->fields.perf;
  if ( !skillselectSvtWindow )
    goto LABEL_31;
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows(
    (BattlePerformance_o *)skillselectSvtWindow,
    this->fields.myFsm,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v6; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v8; // x21
  BattlePerformanceMaster___c_c *v9; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__109_0; // x23
  System_String_o *v12; // x22
  Il2CppObject *v13; // x24
  struct BattlePerformanceMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4351D12 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_B70694(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_BattlePerformanceMaster___c__selectedSvt_b__109_0__);
    sub_B70694(&BattlePerformanceMaster___c_TypeInfo);
    sub_B70694(&StringLiteral_2985/*"CANCEL"*/);
    sub_B70694(&StringLiteral_5584/*"END_PROC"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_2507/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4351D12 = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_30;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
    selectSvtWindow,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  selectSvtWindow = this->fields.perf;
  if ( !selectSvtWindow )
    goto LABEL_30;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)selectSvtWindow, 0LL);
  if ( uniqueId != -1 )
  {
    selectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_30;
    selectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_30;
    selectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_21C0440 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_30;
    v6 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v6 )
      goto LABEL_30;
    if ( CommandSpellEntity__checkUseTreasure(v6, *((_DWORD *)selectSvtWindow + 77), 0LL) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5584/*"END_PROC"*/, 0LL);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_30:
      sub_B7076C(selectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2507/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v8 = (System_String_o *)selectSvtWindow;
    v9 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v9 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__109_0 = static_fields->__9__109_0;
    v12 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__109_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__109_0 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(_9__109_0, v13, Method_BattlePerformanceMaster___c__selectedSvt_b__109_0__, 0LL);
      v14 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v14->__9__109_0 = _9__109_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v14->__9__109_0,
        (System_Int32_array **)_9__109_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( !Instance )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog(Instance, v12, v8, _9__109_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_30;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_2985/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__set_IsNoblePhantasm(
        BattlePerformanceMaster_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsNoblePhantasm_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__showEnemyServant(
        BattlePerformanceMaster_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D3D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_8543/*"LONGPRESS_ENEMY"*/);
    byte_4351D3D = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_B7076C(0LL, *(_QWORD *)&index);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8543/*"LONGPRESS_ENEMY"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_4351D35 & 1) == 0 )
  {
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351D35 = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_16;
  BattleLogic__playRetire(logic, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  logic = (BattleLogic_o *)this->fields.win_Menu;
  if ( !logic )
    goto LABEL_16;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)logic, 0LL, 0LL);
  logic = (BattleLogic_o *)this->fields.win_Retire;
  if ( !logic )
    goto LABEL_16;
  ((void (__fastcall *)(BattleLogic_o *, _QWORD, void *))logic->klass[1]._1.events)(
    logic,
    0LL,
    logic->klass[1]._1.properties);
  logic = (BattleLogic_o *)this->fields.data;
  if ( !logic )
    goto LABEL_16;
  if ( BattleData__isBattleRetreatQuestClear((BattleData_o *)logic, 0LL) )
    return;
  logic = (BattleLogic_o *)this->fields.perf;
  if ( !logic )
LABEL_16:
    sub_B7076C(logic, method);
  BattlePerformance__effectFadeOut((BattlePerformance_o *)logic, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(3, 0LL);
  v5 = BattlePerformanceMaster__openRetireDialog(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D39 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12507/*"START_COM"*/);
    byte_4351D39 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12507/*"START_COM"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *delayAfterNoblePhantasmBuffData; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v14; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  float v21; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  __int64 v25; // x2
  UnityEngine_Object_o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x24
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_Transform_o *v44; // x24
  BattleUIRangeLabel_o *v45; // x24
  BattleServantBuffIconComponent_o *v46; // x24
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  TrackingMoveCtCComponent_o *v50; // x23
  int v51; // s0
  BattlePerformanceMaster_MasterBuffEffectData_o *v54; // x23
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x8
  System_Collections_Generic_IEnumerable_T__o *v62; // x23
  System_Action_int__o *v63; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x8
  struct UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x8
  const MethodInfo *v68; // x1
  System_Collections_IEnumerator_o *v69; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  UnityEngine_Coroutine_o *v77; // x1
  System_Collections_IEnumerator_o *v78; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct TweenAlpha_o *v88; // x8
  UITweener_o *v89; // x19
  EventDelegate_Callback_o *v90; // x21
  int32_t eventId; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351D49 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_int___ctor__);
    sub_B70694(&System_Action_int__TypeInfo);
    sub_B70694(&Method_BasicHelper_ForEach_int___);
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B70694(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__0__);
    sub_B70694(&Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__1__);
    sub_B70694(&BattlePerformanceMaster___c__DisplayClass175_0_TypeInfo);
    sub_B70694(&StringLiteral_18533/*"effect/ef_poplabel{0:00}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351D49 = 1;
  }
  v5 = sub_B70764(BattlePerformanceMaster___c__DisplayClass175_0_TypeInfo);
  BattlePerformanceMaster___c__DisplayClass175_0___ctor((BattlePerformanceMaster___c__DisplayClass175_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_78;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = masterBuffData;
  v14 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v5 + 32);
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 32),
    (System_Int32_array **)masterBuffData,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  delayAfterNoblePhantasmBuffData = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v5 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_78;
  v21 = 0.0;
  if ( BattleActionData_MasterBuffData__IsEffectEnable(
         (BattleActionData_MasterBuffData_o *)delayAfterNoblePhantasmBuffData,
         0LL) )
  {
    if ( this->fields._IsNoblePhantasm_k__BackingField )
    {
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.delayAfterNoblePhantasmBuffData;
      if ( delayAfterNoblePhantasmBuffData )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          delayAfterNoblePhantasmBuffData,
          *v14,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__);
        return v21;
      }
      goto LABEL_78;
    }
    delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.master_root;
    if ( !delayAfterNoblePhantasmBuffData )
      goto LABEL_78;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
    {
      masterBuffPopLabelEffect = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      p_masterBuffPopLabelEffect = &this->fields.masterBuffPopLabelEffect;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Inequality(masterBuffPopLabelEffect, 0LL, 0LL);
      if ( ((unsigned __int8)delayAfterNoblePhantasmBuffData & 1) != 0 )
      {
        v26 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v26, 0LL);
        *p_masterBuffPopLabelEffect = 0LL;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
          0LL,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      if ( !*v14 )
        goto LABEL_78;
      eventId = (*v14)[1].fields.eventId;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v25);
      v34 = System_String__Format((System_String_o *)StringLiteral_18533/*"effect/ef_poplabel{0:00}"*/, v33, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Resources__Load_UIAtlas_(v34, (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( !this->fields.masterBtn )
        goto LABEL_78;
      v35 = (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData;
      transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v35, transform, 0LL, 0LL);
      this->fields.masterBuffPopLabelEffect = Object;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
        (System_Int32_array **)Object,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.masterBuffPopLabelEffect;
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      v92.fields.y = -42.0;
      v92.fields.x = 0.0;
      v92.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, v92, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !this->fields.master_root )
        goto LABEL_78;
      v44 = (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_transform(this->fields.master_root, 0LL);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !v44 )
        goto LABEL_78;
      UnityEngine_Transform__set_parent(v44, (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      v45 = (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData;
      BattleUIRangeLabel__ParentHasChanged((BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !*v14 )
        goto LABEL_78;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        v45,
        *(System_String_o **)&(*v14)[1].fields.missionTargetId,
        (System_String_o *)StringLiteral_1/*""*/,
        1,
        0LL,
        0,
        0,
        0,
        0LL);
      BattleUIRangeLabel__AddLabelDepth(v45, 20, 0LL);
      if ( !*v14 )
        goto LABEL_78;
      BattleUIRangeLabel__CondensedScaleLabel(v45, (*v14)[4].fields.eventId, (*v14)[4].fields.addCount, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 1, (const MethodInfo_1D4AEF8 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      v46 = (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData;
      BattleServantBuffIconComponent__ParentHasChanged(
        (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData,
        0LL);
      BattleServantBuffIconComponent__setImageId(v46, 0, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
      perf = this->fields.perf;
      if ( !perf )
        goto LABEL_78;
      actorcamera = perf->fields.actorcamera;
      uicamera = perf->fields.uicamera;
      v50 = (TrackingMoveCtCComponent_o *)delayAfterNoblePhantasmBuffData;
      *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v50 )
        goto LABEL_78;
      TrackingMoveCtCComponent__Set(v50, actorcamera, uicamera, 0LL, *(UnityEngine_Vector3_o *)&v51, 0, 0LL);
      TrackingMoveCtCComponent__startAct(v50, 0LL);
      if ( !this->fields.isMasterBuffEffectPlaying )
      {
        v54 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B70764(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
        BattlePerformanceMaster_MasterBuffEffectData___ctor(v54, 0LL);
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.master_root;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0LL);
        if ( !v54 )
          goto LABEL_78;
        v54->fields.isRootActive = (unsigned __int8)delayAfterNoblePhantasmBuffData & 1;
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.menuBtn;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        v54->fields.isMenuBtnActive = UnityEngine_GameObject__get_activeSelf(
                                        (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                        0LL);
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.spellBtn;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        v54->fields.isSpellBtnActive = UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                         0LL);
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.skillBtn;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        v54->fields.isSkillBtnActive = UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                         0LL);
        this->fields.masterBuffEffectDataClose = v54;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
          (System_Int32_array **)v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.masterBuffEffectObjectList;
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)delayAfterNoblePhantasmBuffData,
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      v61 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 24) = 1065353216;
      if ( !v61 )
        goto LABEL_78;
      v62 = *(System_Collections_Generic_IEnumerable_T__o **)(v61 + 72);
      v63 = (System_Action_int__o *)sub_B70764(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v63,
        (Il2CppObject *)v5,
        Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__0__,
        (const MethodInfo_264ABB8 *)Method_System_Action_int___ctor__);
      BasicHelper__ForEach_int_(
        v62,
        (System_Action_T__o *)v63,
        (const MethodInfo_1BDD798 *)Method_BasicHelper_ForEach_int___);
      masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
      if ( !masterBuffEffectDataClose )
        goto LABEL_78;
      if ( !masterBuffEffectDataClose->fields.isRootActive )
      {
        v66 = *v14;
        if ( !*v14 )
          goto LABEL_78;
        if ( *((_BYTE *)&v66[4].fields + 20) )
        {
          masterIconFadeCoroutine = this->fields.masterIconFadeCoroutine;
          this->fields.isMasterBuffEffectPlaying = 1;
          if ( masterIconFadeCoroutine )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_78;
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
              Component_srcLineSprite,
              Component_srcLineSprite->klass[1]._1.declaringType,
              1.0);
            UnityEngine_MonoBehaviour__StopCoroutine_36062728(
              (UnityEngine_MonoBehaviour_o *)this,
              this->fields.masterIconFadeCoroutine,
              0LL);
            v69 = BattlePerformanceMaster__waitMasterBuffEffect(this, *(float *)(v5 + 24), v68);
            started = UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v69, 0LL);
            this->fields.masterIconFadeCoroutine = started;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.masterIconFadeCoroutine,
              (System_Int32_array **)started,
              v71,
              v72,
              v73,
              v74,
              v75,
              v76);
          }
          else
          {
            effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            p_effectTween = &this->fields.effectTween;
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL);
            if ( ((unsigned __int8)delayAfterNoblePhantasmBuffData & 1) == 0 )
              goto LABEL_69;
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_effectTween;
            if ( !*p_effectTween )
              goto LABEL_78;
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData, 0LL);
            if ( ((unsigned __int8)delayAfterNoblePhantasmBuffData & 1) != 0 )
            {
              delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_effectTween;
              if ( !*p_effectTween )
                goto LABEL_78;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData, 0, 0LL);
            }
            else
            {
LABEL_69:
              if ( !Component_srcLineSprite )
                goto LABEL_78;
              ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
                Component_srcLineSprite,
                Component_srcLineSprite->klass[1]._1.declaringType,
                0.01);
            }
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.skillBtn;
            if ( !delayAfterNoblePhantasmBuffData )
              goto LABEL_78;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0, 0LL);
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.menuBtn;
            if ( !delayAfterNoblePhantasmBuffData )
              goto LABEL_78;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0, 0LL);
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.spellBtn;
            if ( !delayAfterNoblePhantasmBuffData )
              goto LABEL_78;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0, 0LL);
            delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.master_root;
            if ( !delayAfterNoblePhantasmBuffData )
              goto LABEL_78;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 1, 0LL);
            v81 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
            this->fields.effectTween = v81;
            sub_B70630(
              (BattleServantConfConponent_o *)&this->fields.effectTween,
              (System_Int32_array **)v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
            v88 = this->fields.effectTween;
            if ( !v88
              || (v88->fields.style = 6,
                  v89 = (UITweener_o *)*p_effectTween,
                  v90 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
                  EventDelegate_Callback___ctor(
                    v90,
                    (Il2CppObject *)v5,
                    Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__1__,
                    0LL),
                  !v89) )
            {
LABEL_78:
              sub_B7076C(delayAfterNoblePhantasmBuffData, v7);
            }
            UITweener__SetOnFinished(v89, v90, 0LL);
          }
        }
        else if ( *((_BYTE *)&v66[4].fields + 21) )
        {
          v77 = this->fields.masterIconFadeCoroutine;
          if ( v77 )
            UnityEngine_MonoBehaviour__StopCoroutine_36062728((UnityEngine_MonoBehaviour_o *)this, v77, 0LL);
          v78 = BattlePerformanceMaster__waitMasterBuffEffect(this, *(float *)(v5 + 24), (const MethodInfo *)v77);
          UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v78, 0LL);
        }
      }
      return *(float *)(v5 + 24);
    }
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_4351D33 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12527/*"START_SKILL"*/);
    byte_4351D33 = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.typeMetadataHandle)(
          win_Spell,
          0LL,
          win_Spell->klass[1]._1.interopData),
        (win_Spell = this->fields.myFsm) == 0LL) )
  {
    sub_B7076C(win_Spell, *(_QWORD *)&type);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12527/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4351D00 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_12531/*"START_TAC"*/);
    byte_4351D00 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12531/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  struct BattleData_o *v4; // x8

  v2 = this;
  if ( (byte_4351CFE & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_19173/*"frame_cs_bg_disable"*/);
    byte_4351CFE = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v4 = v2->fields.data;
    if ( !v4 )
      goto LABEL_17;
    this = (BattlePerformanceMaster_o *)v4->fields.quest_ent;
    if ( !this )
      goto LABEL_17;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
      goto LABEL_11;
  }
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_17;
  if ( BattleData__GetOverwriteCommandSpellIcon((BattleData_o *)this, 0LL) )
  {
LABEL_11:
    this = (BattlePerformanceMaster_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( v2->fields.commandSpellIcon )
    {
      CommandSpellIconComponent__SetDataBattle(
        v2->fields.commandSpellIcon,
        (UserGameEntity_o *)this,
        v2->fields.data,
        0LL);
      return;
    }
LABEL_17:
    sub_B7076C(this, method);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_17;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19173/*"frame_cs_bg_disable"*/, 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.spellSpr;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4351D2E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4351D2E = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skillSkipBtn) == 0LL )
    sub_B7076C(this, method);
  if ( data->fields.systemflg_skipskillconf )
    v4 = &StringLiteral_17261/*"btn_off"*/;
  else
    v4 = &StringLiteral_17262/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v4; // x8
  struct BattleServantSkillIConComponent_array *v5; // x8
  BattlePerformanceMaster_o *v6; // x27
  __int64 v7; // x22
  char v8; // w21
  il2cpp_array_size_t v9; // w20
  int v10; // w25
  int v11; // w26
  struct BattleServantSkillIConComponent_array *v12; // x8
  BattleSkillInfoData_o *v13; // x23
  int v14; // w28
  bool isChargeOK; // w24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int v22; // w26
  System_Int32_array **v23; // x25
  BattlePerformanceMaster_c **v24; // x0
  System_Int32_array **v25; // x25
  BattleBuffData_BuffData_array *v26; // x9
  Il2CppClass **v27; // x0
  struct BattleServantSkillIConComponent_array *v28; // x8
  int myFsm; // w8
  BattlePerformanceMaster_o *v30; // x22
  char v31; // w27
  unsigned int v32; // w23
  int v33; // w24
  char v34; // w25
  struct PlayMakerFSM_o *v35; // x8
  __int64 v36; // x9
  __int64 v37; // x11
  int v38; // w11
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  BattlePerformanceMaster___c_c *v40; // x0
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__87_0; // x23
  System_String_o *v43; // x22
  Il2CppObject *v44; // x21
  struct BattlePerformanceMaster___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array *All_BattleBuffData_BuffData; // x0
  struct BattleData_o *data; // x8
  System_String_o *v54; // x21
  BattlePerformanceMaster_o *v55; // x22
  System_String_o *v56; // x1
  System_String_o *v57; // x22
  __int64 v58; // x2
  Il2CppObject *v59; // x0
  BattlePerformanceMaster_o *v60; // x22
  System_String_o *v61; // x1
  float v62; // s8
  BattlePerformanceMaster___c_c *v63; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  struct BattlePerformanceMaster___c_StaticFields *v65; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__87_1; // x24
  System_String_o *v67; // x23
  Il2CppObject *v68; // x25
  struct BattlePerformanceMaster___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array *v76; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  UnityEngine_Transform_o *v78; // x20
  unsigned int v79; // s0
  unsigned int v80; // s9
  int v81; // s2
  unsigned int localPosition; // s0
  unsigned int v83; // s0
  float v84; // s1
  struct BattleData_o *v85; // x8
  struct BattleData_o *v86; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  __int64 v95; // x0
  __int64 v96; // x0
  BattleBuffData_BuffData_array *array; // [xsp+0h] [xbp-80h]
  BattleBuffData_BuffData_array *v98; // [xsp+8h] [xbp-78h]
  int v99; // [xsp+14h] [xbp-6Ch]
  int v100; // [xsp+18h] [xbp-68h] BYREF
  int v101; // [xsp+1Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4351CFF & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_FindAll_string___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Predicate_string___ctor__);
    sub_B70694(&System_Predicate_string__TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_0__);
    sub_B70694(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_1__);
    sub_B70694(&BattlePerformanceMaster___c_TypeInfo);
    sub_B70694(&StringLiteral_760/*"-"*/);
    sub_B70694(&StringLiteral_2514/*"BATTLE_MASTER_SKILL_CHARGE"*/);
    sub_B70694(&StringLiteral_890/*"/"*/);
    sub_B70694(&StringLiteral_17256/*"btn_master_skill_disable"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_2513/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_9411/*"NG"*/);
    byte_4351CFF = 1;
  }
  v101 = 0;
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)sub_B706AC(string___TypeInfo, skillIcon->max_length);
  v4 = v2->fields.skillIcon;
  array = (BattleBuffData_BuffData_array *)this;
  if ( !v4 )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)sub_B706AC(string___TypeInfo, v4->max_length);
  v5 = v2->fields.skillIcon;
  if ( !v5 )
    goto LABEL_159;
  v6 = this;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v99 = 0;
  v10 = 0;
  v11 = 0;
  v98 = (BattleBuffData_BuffData_array *)this;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.data;
    if ( !this )
      goto LABEL_159;
    if ( (int)v7 >= (signed int)v5->max_length )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v7, 0LL);
    if ( this )
    {
      v12 = v2->fields.skillIcon;
      if ( !v12 )
        goto LABEL_159;
      if ( (unsigned int)v7 >= v12->max_length )
        goto LABEL_160;
      v13 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v12->m_Items[(int)v7];
      if ( !this )
        goto LABEL_159;
      if ( v13->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v13, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
      v14 = v11;
      isChargeOK = BattleSkillInfoData__isChargeOK(v13, 0LL);
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v13, 0LL);
      v101 = (int)this;
      if ( v13->fields.isAdd )
      {
        v22 = v10;
        if ( (int)this <= 0 )
        {
          v23 = (System_Int32_array **)StringLiteral_760/*"-"*/;
          if ( !v6 )
            goto LABEL_159;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v101, 0LL);
          v23 = (System_Int32_array **)this;
          if ( !v6 )
            goto LABEL_159;
        }
        if ( v23 )
        {
          this = (BattlePerformanceMaster_o *)sub_B70754(v23, v6->klass->_1.element_class);
          if ( !this )
            goto LABEL_161;
        }
        if ( (unsigned int)v99 >= LODWORD(v6->fields.myFsm) )
          goto LABEL_160;
        v24 = &v6->klass + v99;
        v24[4] = (BattlePerformanceMaster_c *)v23;
        sub_B70630((BattleServantConfConponent_o *)(v24 + 4), v23, v16, v17, v18, v19, v20, v21);
        ++v99;
      }
      else
      {
        v22 = v10;
        if ( (int)this <= 0 )
        {
          v25 = (System_Int32_array **)StringLiteral_760/*"-"*/;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v101, 0LL);
          v25 = (System_Int32_array **)this;
        }
        v26 = array;
        if ( !array )
          goto LABEL_159;
        if ( v25 )
        {
          this = (BattlePerformanceMaster_o *)sub_B70754(v25, array->obj.klass->_1.element_class);
          v26 = array;
          if ( !this )
          {
LABEL_161:
            v96 = sub_B7078C(this);
            sub_B70738(v96, 0LL);
          }
        }
        if ( v9 >= v26->max_length )
          goto LABEL_160;
        v27 = &v26->obj.klass + (int)v9;
        v27[4] = (Il2CppClass *)v25;
        sub_B70630((BattleServantConfConponent_o *)(v27 + 4), v25, v16, v17, v18, v19, v20, v21);
        ++v9;
      }
      v6 = (BattlePerformanceMaster_o *)v98;
      v10 = v22 | (v101 > 0);
      v8 |= isChargeOK;
      v11 = v14 | (v13->fields.sealedTurn > 0);
    }
    v28 = v2->fields.skillIcon;
    if ( !v28 )
      goto LABEL_159;
    if ( (unsigned int)v7 >= v28->max_length )
    {
LABEL_160:
      v95 = sub_B70798(this);
      sub_B70738(v95, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v28->m_Items[v7];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0LL);
      v5 = v2->fields.skillIcon;
      ++v7;
      if ( v5 )
        continue;
    }
    goto LABEL_159;
  }
  this = (BattlePerformanceMaster_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_159;
  myFsm = (int)this->fields.myFsm;
  v30 = this;
  v31 = v10;
  if ( myFsm >= 1 )
  {
    v32 = 0;
    v33 = 0;
    v34 = 0;
    while ( 1 )
    {
      if ( v32 >= myFsm )
        goto LABEL_160;
      this = (BattlePerformanceMaster_o *)*((_QWORD *)&v30->fields.otherFsm + (int)v32);
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)BattleServantData__getShortenUserEquipSkill((BattleServantData_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      v35 = this->fields.myFsm;
      if ( v35 )
      {
        if ( (int)v35 >= 1 )
        {
          v36 = 0LL;
          do
          {
            v37 = *((_QWORD *)&this->fields.otherFsm + v36);
            if ( !v37 )
              goto LABEL_159;
            v38 = *(_DWORD *)(v37 + 28);
            ++v36;
            if ( v33 <= v38 )
              v33 = v38;
          }
          while ( (int)v36 < (int)v35 );
        }
        v34 = 1;
      }
      myFsm = (int)v30->fields.myFsm;
      if ( (int)++v32 >= myFsm )
        goto LABEL_56;
    }
  }
  v34 = 0;
  v33 = 0;
LABEL_56:
  skillBtnFlashObject = (UnityEngine_Object_o *)v2->fields.skillBtnFlashObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_159;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
      if ( !this )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 & 1, 0LL);
  }
  if ( v2->fields.notDispEquipSkillChargeTurn )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatus;
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeRoot;
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    v40 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v40 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v40->static_fields;
    _9__87_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__87_0;
    v43 = (System_String_o *)StringLiteral_890/*"/"*/;
    if ( !_9__87_0 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)static_fields->__9;
      _9__87_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_string__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__87_0,
        v44,
        Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_0__,
        (const MethodInfo_2BF23B8 *)Method_System_Predicate_string___ctor__);
      v45 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v45->__9__87_0 = (struct System_Predicate_string__o *)_9__87_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v45->__9__87_0,
        (System_Int32_array **)_9__87_0,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    All_BattleBuffData_BuffData = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                           array,
                                                           (System_Predicate_T__o *)_9__87_0,
                                                           (const MethodInfo_1FCAFA4 *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v43, All_BattleBuffData_BuffData, 0LL);
    data = v2->fields.data;
    if ( !data )
      goto LABEL_159;
    v54 = (System_String_o *)this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0LL);
    if ( !v2->fields.masterSkillBadStatus )
      goto LABEL_159;
    v55 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillBadStatus, v11 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_159;
    if ( (v11 & 1) != 0 )
      v56 = (System_String_o *)v55;
    else
      v56 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v56, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2514/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0LL);
    v100 = v33 + 1;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v58);
    this = (BattlePerformanceMaster_o *)System_String__Format(v57, v59, 0LL);
    if ( !v2->fields.masterSkillChargeRoot )
      goto LABEL_159;
    v60 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillChargeRoot, v34 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_159;
    v61 = (v34 & 1) != 0 ? (System_String_o *)v60 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v61, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    v62 = (((unsigned __int8)v11 | (unsigned __int8)v34) & 1) != 0 ? -58.0 : -38.0;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    if ( v99 < 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeLabel;
      if ( !this )
        goto LABEL_159;
      UILabel__set_text((UILabel_o *)this, v54, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v2->fields.chargeTimeRoot )
        goto LABEL_159;
      v78 = (UnityEngine_Transform_o *)this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v2->fields.chargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_159;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      v80 = localPosition;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      *(UnityEngine_Vector3_o *)(&v81 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !v78 )
        goto LABEL_159;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v31 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v63 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v2->fields.addSkillAddChargeTimeLabel;
      if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
        v63 = BattlePerformanceMaster___c_TypeInfo;
      }
      v65 = v63->static_fields;
      _9__87_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v65->__9__87_1;
      v67 = (System_String_o *)StringLiteral_890/*"/"*/;
      if ( !_9__87_1 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          v65 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        }
        v68 = (Il2CppObject *)v65->__9;
        _9__87_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_string__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__87_1,
          v68,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_1__,
          (const MethodInfo_2BF23B8 *)Method_System_Predicate_string___ctor__);
        v69 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v69->__9__87_1 = (struct System_Predicate_string__o *)_9__87_1;
        sub_B70630(
          (BattleServantConfConponent_o *)&v69->__9__87_1,
          (System_Int32_array **)_9__87_1,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
      }
      v76 = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                     v98,
                                     (System_Predicate_T__o *)_9__87_1,
                                     (const MethodInfo_1FCAFA4 *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v67, v76, 0LL);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_159;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0LL);
      addSkillAddChargeTimeSplitLabel = v2->fields.addSkillAddChargeTimeSplitLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2513/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0LL);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_159;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_159;
      UILabel__set_text((UILabel_o *)this, v54, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v2->fields.addSkillChargeTimeRoot )
        goto LABEL_159;
      v78 = (UnityEngine_Transform_o *)this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v2->fields.addSkillChargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_159;
      v79 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      v80 = v79;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      *(UnityEngine_Vector3_o *)(&v81 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)this,
                                               0LL);
      if ( !v78 )
        goto LABEL_159;
    }
    v83 = v80;
    v84 = v62;
    UnityEngine_Transform__set_localPosition(v78, *(UnityEngine_Vector3_o *)(&v81 - 2), 0LL);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)BattleData__getBoostSkillInfo((BattleData_o *)this, 0, 0LL);
  if ( !v2->fields.boostSkillIcon )
    goto LABEL_159;
  if ( this )
    BattleServantSkillIConComponent__SetSkillInfo(
      (BattleServantSkillIConComponent_o *)v2->fields.boostSkillIcon,
      (BattleSkillInfoData_o *)this,
      1,
      0,
      0,
      0,
      0LL);
  else
    BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)v2->fields.boostSkillIcon, 0, 0LL);
  v85 = v2->fields.data;
  if ( !v85 )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)v85->fields.quest_ent;
  if ( !this )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_148;
  v86 = v2->fields.data;
  if ( !v86 )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)v86->fields.quest_ent;
  if ( !this )
    goto LABEL_159;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
  {
LABEL_148:
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17256/*"btn_master_skill_disable"*/, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtn;
      if ( this )
      {
        ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem,
                                              0LL,
                                              0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_159;
          v94 = (System_Int32_array **)StringLiteral_9411/*"NG"*/;
          ComponentInChildren_Dropdown_DropdownItem->fields.m_Image = (struct UnityEngine_UI_Image_o *)StringLiteral_9411/*"NG"*/;
          sub_B70630(
            (BattleServantConfConponent_o *)&ComponentInChildren_Dropdown_DropdownItem->fields.m_Image,
            v94,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93);
        }
        this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
    }
LABEL_159:
    sub_B7076C(this, method);
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4351D32 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4351D32 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skipDeadBtn) == 0LL )
    sub_B7076C(this, method);
  if ( data->fields.systemflg_skipDead )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
}


void __fastcall BattlePerformanceMaster__updateTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4351D30 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_17262/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_B70694(&StringLiteral_17261/*"btn_off"*/);
    byte_4351D30 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.tdConstBtn) == 0LL )
    sub_B7076C(this, method);
  if ( data->fields.systemflg_TdConstantvelocity )
    v4 = &StringLiteral_17262/*"btn_on"*/;
  else
    v4 = &StringLiteral_17261/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4351D4A & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster__waitMasterBuffEffect_d__176_TypeInfo);
    byte_4351D4A = 1;
  }
  v5 = sub_B70764(BattlePerformanceMaster__waitMasterBuffEffect_d__176_TypeInfo);
  BattlePerformanceMaster__waitMasterBuffEffect_d__176___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor_20903544(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = (BattlePerformanceMaster_MasterBuffEffectData_Fields)(16843009 * value);
}


void __fastcall BattlePerformanceMaster__DelayEffect_d__193___ctor(
        BattlePerformanceMaster__DelayEffect_d__193_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceMaster__DelayEffect_d__193__MoveNext(
        BattlePerformanceMaster__DelayEffect_d__193_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t *p_id; // x23
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  float v9; // s8
  UnityEngine_WaitForSeconds_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  bool result; // w0
  int32_t v19; // w20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Transform_o *v25; // x21
  float v26; // s0
  float v27; // s1
  float v28; // s2
  struct EffectEntity_o *effectEnt_5__2; // x8
  System_String_o *se; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434F7FC & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B70694(&StringLiteral_2814/*"Battle"*/);
    byte_434F7FC = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_id = &this->fields.id;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_36;
    p_id = &this->fields.id;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  (WarEntity_o **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_21C049C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_36;
    v9 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v9 > 0.0 )
    {
      v10 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v10, v9, 0LL);
      this->fields.__2__current = (Il2CppObject *)v10;
      p__2__current = &this->fields.__2__current;
      sub_B70630(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v10,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  v19 = *p_id;
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  Instance = (DataManager_o *)BattleEffectUtility__getEffectObjectSafe(v19, 0LL, 1, 1.0, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v23 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v24 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v24 )
    goto LABEL_36;
  UnityEngine_Transform__set_parent(v24, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v25 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v25 )
    goto LABEL_36;
  v32.fields.x = v26 + this->fields.pos.fields.x;
  v32.fields.y = v27 + this->fields.pos.fields.y;
  v32.fields.z = v28 + this->fields.pos.fields.z;
  UnityEngine_Transform__set_localPosition(v25, v32, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v33, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v34.fields.x = 1.0;
  v34.fields.y = 1.0;
  v34.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v34, 0LL);
  UnityEngine_GameObject__SetActive(v23, 1, 0LL);
  Instance = (DataManager_o *)this->fields._effectEnt_5__2;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    effectEnt_5__2 = this->fields._effectEnt_5__2;
    if ( !effectEnt_5__2 )
      goto LABEL_36;
    se = effectEnt_5__2->fields.se;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    Instance = (DataManager_o *)SoundManager__playSe_23182708((System_String_o *)StringLiteral_2814/*"Battle"*/, se, 0LL);
  }
  if ( this->fields.checkObject )
  {
    if ( _4__this )
    {
      Instance = (DataManager_o *)_4__this->fields.battleItemEffectObject;
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Instance,
          *p_id,
          (WarBoardAIRoute_RouteData_o *)v23,
          (const MethodInfo_2FC6540 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_36:
    sub_B7076C(Instance, v6);
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayEffect_d__193__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayEffect_d__193_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__DelayEffect_d__193__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayEffect_d__193_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattlePerformanceMaster__DelayEffect_d__193_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayEffect_d__193__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayEffect_d__193_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__DelayEffect_d__193__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayEffect_d__193_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__DelayShowItem_d__195___ctor(
        BattlePerformanceMaster__DelayShowItem_d__195_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__DelayShowItem_d__195__MoveNext(
        BattlePerformanceMaster__DelayShowItem_d__195_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0
  UnityEngine_GameObject_o *obj; // x0

  if ( (byte_434F7FD & 1) == 0 )
  {
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434F7FD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = this->fields.obj;
    if ( !obj )
      sub_B7076C(0LL, method);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v5 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayShowItem_d__195__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayShowItem_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__DelayShowItem_d__195__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayShowItem_d__195_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattlePerformanceMaster__DelayShowItem_d__195_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayShowItem_d__195__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayShowItem_d__195_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__DelayShowItem_d__195__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayShowItem_d__195_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190___ctor(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190__MoveNext(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *v2; // x19
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleServantConfConponent_o *p__7__wrap1; // x21
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  UnityEngine_WaitForSeconds_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  System_Func_WarBoardAIRoute_RouteData__float__o *v16; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x22
  System_Collections_Generic_IEnumerator_float__c *v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  const MethodInfo *v37; // x1
  BattleServantConfConponent_c *v38; // x20
  _QWORD *image; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_WaitForSeconds_o *v58; // x20
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  v2 = this;
  if ( (byte_434F7FE & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_startMasterBuffEffect__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    sub_B70694(&Method_System_Func_BattleActionData_MasterBuffData__float___ctor__);
    sub_B70694(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_float__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_float__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *)sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_434F7FE = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_B7076C(this, method);
    delayAfterNoblePhantasmBuffData = _4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_B7076C(this, method);
    if ( delayAfterNoblePhantasmBuffData->fields._size >= 1 )
    {
      v7 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, 0.25, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v7;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v7,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    }
    goto LABEL_13;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_B7076C(this, method);
LABEL_13:
    v15 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    v16 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B70764(System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      v16,
      (Il2CppObject *)_4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      (const MethodInfo_29AE46C *)Method_System_Func_BattleActionData_MasterBuffData__float___ctor__);
    v17 = System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
            v15,
            (System_Func_TSource__TResult__o *)v16,
            (const MethodInfo_1CC452C *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v19 = v17;
    if ( !v17 )
      sub_B7076C(0LL, v18);
    klass = v17->klass;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_18:
      p_method = sub_B08590(v17, System_Collections_Generic_IEnumerable_float__TypeInfo, 0LL);
    }
    v24 = (System_Int32_array **)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
                                   v19,
                                   *(_QWORD *)(p_method + 8));
    v2->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)v24;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap1;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, v24, v25, v26, v27, v28, v29, v30);
    goto LABEL_21;
  }
  if ( _1__state != 2 )
    return 0;
  p__7__wrap1 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap1;
LABEL_21:
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B7076C(this, method);
  v32 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_26:
    v35 = sub_B08590(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v35)(
          _7__wrap1,
          *(_QWORD *)(v35 + 8));
  if ( (v36 & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190____m__Finally1(v2, v37);
    p__7__wrap1->klass = 0LL;
    sub_B70630(p__7__wrap1, 0LL, v43, v44, v45, v46, v47, v48);
    if ( !_4__this )
      sub_B7076C(v49, v50);
    v51 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !v51 )
      sub_B7076C(0LL, v50);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v51,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    _4__this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_B70630(
      (BattleServantConfConponent_o *)&_4__this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    return 0;
  }
  v38 = p__7__wrap1->klass;
  if ( !p__7__wrap1->klass )
    sub_B7076C(v36, v37);
  image = v38->_1.image;
  if ( *((_WORD *)v38->_1.image + 149) )
  {
    v40 = 0LL;
    v41 = (int *)(image[22] + 8LL);
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v41 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *((unsigned __int16 *)v38->_1.image + 149) )
        goto LABEL_34;
    }
    v42 = (__int64)&image[2 * *v41 + 39];
  }
  else
  {
LABEL_34:
    v42 = sub_B08590(p__7__wrap1->klass, System_Collections_Generic_IEnumerator_float__TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8));
  v58 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v58, 0.25, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v58;
  sub_B70630(
    (BattleServantConfConponent_o *)&v2->fields.__2__current,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v2->fields.__1__state = 2;
  return 1;
}


Il2CppObject *__fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190__System_IDisposable_Dispose(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 || _1__state == -3 )
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190____m__Finally1(this, method);
}


void __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190____m__Finally1(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_float__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_434F7FF & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    byte_434F7FF = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v5 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        p_offset += 4;
        if ( v5 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_B08590(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F7FA & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceMaster___c_TypeInfo);
    byte_434F7FA = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BattlePerformanceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattlePerformanceMaster___c___ctor(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c___selectedSkillSvt_b__133_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster___c___selectedSvt_b__109_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattlePerformanceMaster___c___updateSkillIcon_b__87_0(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


bool __fastcall BattlePerformanceMaster___c___updateSkillIcon_b__87_1(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass175_0___ctor(
        BattlePerformanceMaster___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass175_0___startMasterBuffEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass175_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v6; // x1
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x21
  struct BattlePerformanceMaster_o *v11; // x8
  UnityEngine_Transform_o *v12; // x22
  EffectEntity_o *Entity; // x0
  EffectEntity_o *v14; // x20
  System_String_o *se; // x20
  srcLineSprite_o *Component_srcLineSprite; // x20
  float v17; // s0
  struct BattlePerformanceMaster_o *v18; // x8

  if ( (byte_434F7FB & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_2814/*"Battle"*/);
    byte_434F7FB = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(x, 0LL, 1, 1.0, 0LL);
  _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v8 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[6].monitor;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  EffectObjectSafe = BaseMonoBehaviour__createObject(_4__this, v8, transform, 0LL, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  v10 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_31;
  v12 = (UnityEngine_Transform_o *)EffectObjectSafe;
  EffectObjectSafe = v11->fields.master_root;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)EffectObjectSafe,
                                                   0LL);
  if ( !v12 )
    goto LABEL_31;
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)EffectObjectSafe, 0LL);
  UnityEngine_GameObject__SetActive(v10, 1, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = (EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)EffectObjectSafe,
                               x,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( EffectEntity__isSe(Entity, 0LL) )
    {
      se = v14->fields.se;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe_23182708((System_String_o *)StringLiteral_2814/*"Battle"*/, se, 0LL);
    }
  }
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v10,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_srcLineSprite,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)EffectObjectSafe & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_31;
    v17 = *(float *)&Component_srcLineSprite->fields.mFSM;
    if ( this->fields.waitTime < v17 )
      this->fields.waitTime = v17;
  }
  v18 = this->fields.__4__this;
  if ( !v18 || (EffectObjectSafe = (UnityEngine_GameObject_o *)v18->fields.masterBuffEffectObjectList) == 0LL )
LABEL_31:
    sub_B7076C(EffectObjectSafe, v6);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)EffectObjectSafe,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass175_0___startMasterBuffEffect_b__1(
        BattlePerformanceMaster___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_MasterBuffData_o *masterBuffData; // x8
  struct BattlePerformanceMaster_o *_4__this; // x19
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v6; // x0
  System_Int32_array **started; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  masterBuffData = this->fields.masterBuffData;
  if ( !masterBuffData )
    goto LABEL_8;
  if ( masterBuffData->fields._IsEnd_k__BackingField )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      masterIconFadeCoroutine = _4__this->fields.masterIconFadeCoroutine;
      if ( !masterIconFadeCoroutine
        || (UnityEngine_MonoBehaviour__StopCoroutine_36062728(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              masterIconFadeCoroutine,
              0LL),
            (_4__this = this->fields.__4__this) != 0LL) )
      {
        v6 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, 0LL);
        started = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_36062060(
                                           (UnityEngine_MonoBehaviour_o *)_4__this,
                                           v6,
                                           0LL);
        _4__this->fields.masterIconFadeCoroutine = (struct UnityEngine_Coroutine_o *)started;
        sub_B70630(
          (BattleServantConfConponent_o *)&_4__this->fields.masterIconFadeCoroutine,
          started,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        return;
      }
    }
LABEL_8:
    sub_B7076C(this, method);
  }
}


void __fastcall BattlePerformanceMaster___c__DisplayClass178_0___ctor(
        BattlePerformanceMaster___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass178_0___endMasterBuffEffectFadeOut_b__0(
        BattlePerformanceMaster___c__DisplayClass178_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattlePerformanceMaster_o *_4__this; // x8
  BattlePerformanceMaster___c__DisplayClass178_0_o *v9; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        _4__this->fields.masterIconFadeCoroutine = 0LL,
        sub_B70630(
          (BattleServantConfConponent_o *)&_4__this->fields.masterIconFadeCoroutine,
          0LL,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (this = (BattlePerformanceMaster___c__DisplayClass178_0_o *)v9->fields.__4__this) == 0LL) )
  {
    sub_B7076C(this, method);
  }
  BattlePerformanceMaster__endMasterBuffEffect(
    (BattlePerformanceMaster_o *)this,
    v9->fields.widget,
    (BattlePerformanceMaster_MasterBuffEffectData_o *)this[16].fields.__4__this,
    0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass83_0___ctor(
        BattlePerformanceMaster___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceMaster___c__DisplayClass83_0___Initialize_b__0(
        BattlePerformanceMaster___c__DisplayClass83_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  BattlePerformanceMaster___c__DisplayClass83_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BattlePerformanceMaster___c__DisplayClass83_0_o *)UnityEngine_Object__get_name(
                                                                     (UnityEngine_Object_o *)x,
                                                                     0LL)) == 0LL) )
  {
    sub_B7076C(this, x);
  }
  return System_String__StartsWith((System_String_o *)this, v3->fields.flashPrefabName, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178___ctor(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178__MoveNext(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass178_0_o *_8__1; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattlePerformanceMaster___c__DisplayClass178_0_o *v34; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass178_0_o *v36; // x8
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UnityEngine_Object_o *effectTween; // x19
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct TweenAlpha_o *v51; // x8
  UITweener_o *v52; // x20
  Il2CppObject *v53; // x21
  EventDelegate_Callback_o *v54; // x19

  v2 = this;
  if ( (byte_434F800 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_BattlePerformanceMaster___c__DisplayClass178_0__endMasterBuffEffectFadeOut_b__0__);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)sub_B70694(&BattlePerformanceMaster___c__DisplayClass178_0_TypeInfo);
    byte_434F800 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)_4__this->fields.master_root;
    if ( !this )
      goto LABEL_29;
    _8__1 = v2->fields.__8__1;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_29;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_B70630(
      (BattleServantConfConponent_o *)&_8__1->fields.widget,
      (System_Int32_array **)this,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v34 = v2->fields.__8__1;
    if ( !v34 )
      goto LABEL_29;
    widget = (UnityEngine_Object_o *)v34->fields.widget;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)UnityEngine_Object__op_Equality(
                                                                             widget,
                                                                             0LL,
                                                                             0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v36 = v2->fields.__8__1;
      if ( !v36 )
        goto LABEL_29;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)v36->fields.widget;
      if ( !this )
        goto LABEL_29;
      ((void (__fastcall *)(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_29;
      if ( BattlePerformance__isPositionTactical((BattlePerformance_o *)this, 0LL) )
      {
        _4__this->fields.isMasterBuffEffectPlaying = 0;
        _4__this->fields.masterIconFadeCoroutine = 0LL;
        sub_B70630(
          (BattleServantConfConponent_o *)&_4__this->fields.masterIconFadeCoroutine,
          0LL,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        effectTween = (UnityEngine_Object_o *)_4__this->fields.effectTween;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL) )
        {
          this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)_4__this->fields.effectTween;
          if ( !this )
            goto LABEL_29;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        }
      }
      else
      {
        v44 = (System_Int32_array **)TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        _4__this->fields.effectTween = (struct TweenAlpha_o *)v44;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.effectTween, v44, v45, v46, v47, v48, v49, v50);
        v51 = _4__this->fields.effectTween;
        if ( !v51 )
          goto LABEL_29;
        v51->fields.style = 6;
        v52 = (UITweener_o *)_4__this->fields.effectTween;
        v53 = (Il2CppObject *)v2->fields.__8__1;
        v54 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v54,
          v53,
          Method_BattlePerformanceMaster___c__DisplayClass178_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        if ( !v52 )
          goto LABEL_29;
        UITweener__SetOnFinished(v52, v54, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_B70764(BattlePerformanceMaster___c__DisplayClass178_0_TypeInfo);
    System_Object___ctor(v4, 0LL);
    v2->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass178_0_o *)v4;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.__8__1, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)v2->fields.__8__1;
    if ( this )
    {
      v17 = (System_Int32_array **)v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v17;
      sub_B70630((BattleServantConfConponent_o *)&this->fields, v17, v11, v12, v13, v14, v15, v16);
      v2->fields.__2__current = 0LL;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B70630(p__2__current, 0LL, v19, v20, v21, v22, v23, v24);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_29:
    sub_B7076C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178__System_IDisposable_Dispose(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__openRetireDialog_d__151___ctor(
        BattlePerformanceMaster__openRetireDialog_d__151_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__openRetireDialog_d__151__MoveNext(
        BattlePerformanceMaster__openRetireDialog_d__151_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattlePerformanceMaster__openRetireDialog_d__151_o *v8; // x19
  int32_t _1__state; // w8
  DefCoroutine_c *v10; // x0
  System_Int32_array **milliSecSeven; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v16; // x21

  v8 = this;
  if ( (byte_434F801 & 1) == 0 )
  {
    sub_B70694(&Method_BattlePerformanceMaster_retRetireDialog__);
    sub_B70694(&NotificationDialog_ClickDelegate_TypeInfo);
    this = (BattlePerformanceMaster__openRetireDialog_d__151_o *)sub_B70694(&DefCoroutine_TypeInfo);
    byte_434F801 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this
      || (this = (BattlePerformanceMaster__openRetireDialog_d__151_o *)_4__this->fields.perf) == 0LL
      || (BattlePerformance__ResetSoundMask((BattlePerformance_o *)this, 0LL),
          logic = _4__this->fields.logic,
          v16 = (NotificationDialog_ClickDelegate_o *)sub_B70764(NotificationDialog_ClickDelegate_TypeInfo),
          NotificationDialog_ClickDelegate___ctor(
            v16,
            (Il2CppObject *)_4__this,
            Method_BattlePerformanceMaster_retRetireDialog__,
            0LL),
          !logic) )
    {
      sub_B7076C(this, method);
    }
    BattleLogic__OpenBattleLoseDlg(logic, 1, 1, v16, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v10 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v10 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (System_Int32_array **)v10->static_fields->milliSecSeven;
  v8->fields.__2__current = (Il2CppObject *)milliSecSeven;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B70630(p__2__current, milliSecSeven, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceMaster__openRetireDialog_d__151__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__openRetireDialog_d__151_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__openRetireDialog_d__151__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__openRetireDialog_d__151_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattlePerformanceMaster__openRetireDialog_d__151_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__openRetireDialog_d__151__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__openRetireDialog_d__151_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__openRetireDialog_d__151__System_IDisposable_Dispose(
        BattlePerformanceMaster__openRetireDialog_d__151_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__176___ctor(
        BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__176__MoveNext(
        BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *this,
        const MethodInfo *method)
{
  unsigned int _1__state; // w8
  bool v4; // cf
  bool v5; // zf
  int32_t v6; // w8
  float waitTime; // s8
  BattlePerformanceMaster_o *_4__this; // x0
  Il2CppObject *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  bool result; // w0
  float deltaTime; // s0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  _1__state = this->fields.__1__state;
  v4 = _1__state >= 2;
  v5 = _1__state == 2;
  v6 = -1;
  if ( !v4 )
  {
    waitTime = this->fields.waitTime;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( waitTime >= 0.0 )
    {
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      this->fields.__2__current = 0LL;
      this->fields.waitTime = waitTime - deltaTime;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v18, v19, v20, v21, v22, v23);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_B7076C(0LL, method);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      this->fields.__2__current = v9;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v9,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      result = 1;
      v6 = 2;
    }
    goto LABEL_8;
  }
  result = 0;
  if ( v5 )
LABEL_8:
    this->fields.__1__state = v6;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__176__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__waitMasterBuffEffect_d__176__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__176_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__176__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__176__System_IDisposable_Dispose(
        BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *this,
        const MethodInfo *method)
{
  ;
}