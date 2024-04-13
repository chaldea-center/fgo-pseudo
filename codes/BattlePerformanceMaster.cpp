void __fastcall BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E95D7 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17208/*"btn_master_skill"*/, v8, v9, v10);
    byte_42E95D7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceMaster_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17208/*"btn_master_skill"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17208/*"btn_master_skill"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v43; // x20
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v50; // x20
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  BattlePerformanceMaster_MasterBuffEffectData_o *v57; // x20
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7

  if ( (byte_42E95D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v26, v27, v28);
    byte_42E95D6 = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectObjectList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.delayAfterNoblePhantasmBuffData,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v43,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleItemEffectObject,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v50,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v50;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleItemEffectCoroutines,
    (System_Int32_array **)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B5D694(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor_20462740(v57, 1, 0LL);
  this->fields.masterBuffEffectDataClose = v57;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseBoostSkillConfComp(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9594 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9594 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E95CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E95CA = 1;
  }
  win_Retire = this->fields.win_Retire;
  v9 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B5D69C(v10, v11);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v9,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E958F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E958F = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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
  if ( (byte_42E95D1 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster__DelayEffect_d__193_TypeInfo, id, (_DWORD)parentObj, checkObject);
    byte_42E95D1 = 1;
  }
  v13 = sub_B5D694(BattlePerformanceMaster__DelayEffect_d__193_TypeInfo);
  BattlePerformanceMaster__DelayEffect_d__193___ctor((BattlePerformanceMaster__DelayEffect_d__193_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  *(_QWORD *)(v13 + 64) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 64), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = id;
  *(_QWORD *)(v13 + 40) = parentObj;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)parentObj, v22, v23, v24, v25, v26, v27);
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
  int v3; // w2
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E95D3 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster__DelayShowItem_d__195_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E95D3 = 1;
  }
  v7 = sub_B5D694(BattlePerformanceMaster__DelayShowItem_d__195_TypeInfo);
  BattlePerformanceMaster__DelayShowItem_d__195___ctor((BattlePerformanceMaster__DelayShowItem_d__195_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = obj;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)obj, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v7;
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
  started = UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_B5D560(
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
  __int64 v3; // x3
  UnityEngine_Object_o *battleItemTr; // x21
  __int64 v7; // x1
  bool result; // w0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E95D5 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)outVector, (_DWORD)method, v3);
    byte_42E95D5 = 1;
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
  v9 = this->fields.battleItemTr;
  if ( !v9 )
    sub_B5D69C(0LL, v7);
  localPosition = UnityEngine_Transform__get_localPosition(v9, 0LL);
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
  __int64 v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x1
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  CommandSpellWindowComponent_CloseButtonCallBack_o *v83; // x22
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct CommandSpellWindowComponent_o *v90; // x21
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v91; // x22
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  UnityEngine_Transform_o *v112; // x21
  int v113; // s1
  int v114; // s0
  int v115; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v117; // x22
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v125; // x22
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UnityEngine_Object_o *fieldConf; // x21
  BattleFieldConfConponent_o *v133; // x21
  System_Action_o *v134; // x22
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x1
  const MethodInfo *v142; // x1
  const MethodInfo *v143; // x1
  const MethodInfo *v144; // x1
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  AssetData_o *v151; // x21
  System_Int32_array **v152; // x1
  UnityEngine_GameObject_o *v153; // x21
  UnityEngine_GameObject_array *Children; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v155; // x23
  struct UnityEngine_GameObject_o **p_skillBtnFlashObject; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  UnityEngine_Object_o *battleItemUi; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v167; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9573 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)inperf, (_DWORD)indata, inlogic);
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, v9, v10, v11);
    sub_B5D5C4(&AssetManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BasicHelper_Any_GameObject___, v15, v16, v17);
    sub_B5D5C4(&Method_BattlePerformanceMaster_OnCloseFieldConf__, v18, v19, v20);
    sub_B5D5C4(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__, v21, v22, v23);
    sub_B5D5C4(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__, v24, v25, v26);
    sub_B5D5C4(&Method_BattlePerformanceMaster_procUseCommandSpell__, v27, v28, v29);
    sub_B5D5C4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Func_GameObject__bool___ctor__, v36, v37, v38);
    sub_B5D5C4(&System_Func_GameObject__bool__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__, v45, v46, v47);
    sub_B5D5C4(&BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_18424/*"ef_masterskill_flash"*/, v57, v58, v59);
    byte_42E9573 = 1;
  }
  v60 = sub_B5D694(BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo);
  BattlePerformanceMaster___c__DisplayClass83_0___ctor((BattlePerformanceMaster___c__DisplayClass83_0_o *)v60, 0LL);
  this->fields.perf = inperf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.data = indata;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  this->fields.logic = inlogic;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
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
  v167 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v167;
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
  v83 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B5D694(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v83,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !win_Spell )
    goto LABEL_64;
  win_Spell->fields.callback_close = v83;
  sub_B5D560(
    (BattleServantConfConponent_o *)&win_Spell->fields.callback_close,
    (System_Int32_array **)v83,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  v90 = this->fields.win_Spell;
  v91 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_B5D694(CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v91,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v90 )
    goto LABEL_64;
  v90->fields.callback_use = v91;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v90->fields.callback_use,
    (System_Int32_array **)v91,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
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
  v104 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 10) = v104;
  sub_B5D560((BattleServantConfConponent_o *)(skillBtn + 80), v104, v98, v99, v100, v101, v102, v103);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_64;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_64;
  v111 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 18) = v111;
  sub_B5D560((BattleServantConfConponent_o *)(skillBtn + 144), v111, v105, v106, v107, v108, v109, v110);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_64;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_64;
  v112 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0LL);
  if ( !skillBtn )
    goto LABEL_64;
  *(UnityEngine_Vector3_o *)(&v113 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skillBtn,
                                            0LL);
  if ( !v112 )
    goto LABEL_64;
  v114 = 0;
  v115 = 0;
  UnityEngine_Transform__set_localPosition(v112, *(UnityEngine_Vector3_o *)(&v113 - 1), 0LL);
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
  v117 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B5D694(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v117,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_64;
  warBoard_win_EnemyConf->fields.callback_close = v117;
  sub_B5D560(
    (BattleServantConfConponent_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (System_Int32_array **)v117,
    v118,
    v119,
    v120,
    v121,
    v122,
    v123);
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
  v125 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_B5D694(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v125,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !win_EnemyConf )
    goto LABEL_64;
  win_EnemyConf->fields.callback_close = v125;
  sub_B5D560(
    (BattleServantConfConponent_o *)&win_EnemyConf->fields.callback_close,
    (System_Int32_array **)v125,
    v126,
    v127,
    v128,
    v129,
    v130,
    v131);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v133 = this->fields.fieldConf;
    v134 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v134, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v133 )
      goto LABEL_64;
    BattleFieldConfConponent__Initialize(v133, v134, 0LL);
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
  v141 = (System_Int32_array **)this->fields.data;
  *((_QWORD *)skillBtn + 12) = v141;
  sub_B5D560((BattleServantConfConponent_o *)(skillBtn + 96), v141, v135, v136, v137, v138, v139, v140);
  BattlePerformanceMaster__updateShortSkill(this, v142);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v143);
  BattlePerformanceMaster__updateSkipDead(this, v144);
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
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
  if ( !v60 )
    goto LABEL_64;
  v151 = (AssetData_o *)skillBtn;
  v152 = (System_Int32_array **)StringLiteral_18424/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v60 + 16) = StringLiteral_18424/*"ef_masterskill_flash"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v60 + 16), v152, v145, v146, v147, v148, v149, v150);
  if ( !v151 )
    goto LABEL_64;
  skillBtn = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                       v151,
                       *(System_String_o **)(v60 + 16),
                       (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !this->fields.win_Menu )
    goto LABEL_64;
  v153 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v153, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v155 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v155,
      (Il2CppObject *)v60,
      Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_GameObject__bool___ctor__);
    if ( BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)Children,
           (System_Func_T__bool__o *)v155,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_GameObject___) )
    {
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
    }
    else
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v153, transform, 0LL, 0LL);
      p_skillBtnFlashObject = &this->fields.skillBtnFlashObject;
      this->fields.skillBtnFlashObject = Object;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.skillBtnFlashObject,
        (System_Int32_array **)Object,
        v159,
        v160,
        v161,
        v162,
        v163,
        v164);
    }
    skillBtn = (char *)*p_skillBtnFlashObject;
    if ( *p_skillBtnFlashObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      goto LABEL_57;
    }
LABEL_64:
    sub_B5D69C(skillBtn, v79);
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
  UnityEngine_Object_o *battleItemUi; // x21
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_Object_o *battleItemIcon; // x20
  UISprite_o *v22; // x20
  int32_t longName; // w21
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E95CD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E95CD = 1;
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_23:
    sub_B5D69C(Instance, v19);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
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
      v22 = this->fields.battleItemIcon;
      longName = (int32_t)entity->fields.longName;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v22, longName, 0LL);
      goto LABEL_21;
    }
    goto LABEL_23;
  }
LABEL_21:
  BattlePerformanceMaster__UpdateBattleItemUi(this, v19);
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_B5D69C(0LL, method);
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15582/*"Wait"*/, (_DWORD)method, v2, v3);
    byte_42E95CC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_B5D69C(myFsm, method);
  return System_String__IndexOf_44650136((System_String_o *)myFsm, (System_String_o *)StringLiteral_15582/*"Wait"*/, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95BE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3159/*"CLOSE_CONF"*/, (_DWORD)method, v2, v3);
    byte_42E95BE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3159/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95CB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95CB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95C9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95C9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9592 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9592 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95C7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3110/*"CLICK_CKRETIRE"*/, (_DWORD)method, v2, v3);
    byte_42E95C7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3110/*"CLICK_CKRETIRE"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E958D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E958D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


bool __fastcall BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9598 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__, (_DWORD)skillInfo, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v9, v10, v11);
    byte_42E9598 = 1;
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
    sub_B5D69C(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v14 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_B5D694(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v14;
    sub_B5D560(
      (BattleServantConfConponent_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
    sub_B5D69C(0LL, method);
  BattleLogic__PlayInterruption(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__PlayPartyReorganization(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_B5D69C(0LL, method);
  BattleLogic__PlayPartyReorganization(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v12; // x20
  BattleWindowComponent_EndCall_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42E95BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__171_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E95BD = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v12 = this->fields.fieldConf;
    v13 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__171_0__,
      0LL);
    if ( !v12 )
      sub_B5D69C(v14, v15);
    BattleFieldConfConponent__Close(v12, v13, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v17; // x20
  BattleWindowComponent_EndCall_o *v18; // x21

  if ( (byte_42E95BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__170_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v11, v12, v13);
    byte_42E95BC = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_14;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
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
        v17 = this->fields.fieldConf;
        v18 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
        BattleWindowComponent_EndCall___ctor(
          v18,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__170_0__,
          0LL);
        if ( v17 )
        {
          BattleFieldConfConponent__Open(v17, v18, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_B5D69C(perf, method);
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
    sub_B5D69C(win_Menu, v4);
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
  void *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v26; // x20

  if ( (byte_42E9575 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattlePerformanceMaster_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v17, v18, v19);
    byte_42E9575 = 1;
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
  v23 = (System_String_o *)**((_QWORD **)mAtlas + 23);
  v24 = System_Int32__ToString((int)data + 104, 0LL);
  mAtlas = System_String__Concat_44577788(v23, v24, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_20;
  v26 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_20;
  if ( UIAtlas__GetSprite((UIAtlas_o *)mAtlas, v26, 0LL) )
    goto LABEL_18;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mAtlas = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
  if ( !mAtlas
    || (mAtlas = AssetData__GetObject_WarBoardWaitTimeSetting_(
                   (AssetData_o *)mAtlas,
                   (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                   (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504)) == 0LL
    || (mAtlas = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)mAtlas,
                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_20:
    sub_B5D69C(mAtlas, method);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, (UIAtlas_o *)mAtlas, 0LL);
LABEL_18:
  mAtlas = this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v26, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95BB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3120/*"CLICK_FIELD"*/, (_DWORD)method, v2, v3);
    byte_42E95BB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3120/*"CLICK_FIELD"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E95C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_OnCompShowRetireSA__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E95C8 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  win_Retire = this->fields.win_Retire;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_B5D69C(v13, v14);
  BattleRetireWindowComponent__Open(win_Retire, v12, 0LL);
}


void __fastcall BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x20
  const MethodInfo *v7; // x2

  v6 = this;
  if ( (byte_42E9599 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, (_DWORD)skillInfo, selIndex, method);
    byte_42E9599 = 1;
  }
  if ( selIndex != -1 )
  {
    if ( skillInfo )
    {
      BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
      BattlePerformanceMaster__WantUseSkill(v6, skillInfo, v7);
      return;
    }
LABEL_8:
    sub_B5D69C(this, skillInfo);
  }
  this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
  if ( !this )
    goto LABEL_8;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__StartBattleGetEffect(
        BattlePerformanceMaster_o *this,
        int32_t id,
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *battleItemEffectObject; // x0
  UnityEngine_Object_o *v22; // x21
  struct System_Collections_Generic_Dictionary_int__Coroutine__o **p_battleItemEffectCoroutines; // x21
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_Object_o *battleItemIcon; // x22
  struct System_Collections_Generic_Dictionary_int__Coroutine__o *battleItemEffectCoroutines; // x22
  const MethodInfo *v27; // x4
  System_Collections_IEnumerator_o *v28; // x0
  WarBoardEvalValueSquare_CalcEval_o *v29; // [xsp+8h] [xbp-38h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E95D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E95D2 = 1;
  }
  value = 0LL;
  v29 = 0LL;
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.battleItemEffectObject;
  if ( !battleItemEffectObject )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)battleItemEffectObject,
         id,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
  {
    v22 = (UnityEngine_Object_o *)value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
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
      (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_31;
    p_battleItemEffectCoroutines = &this->fields.battleItemEffectCoroutines;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
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
         &v29,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
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
  v28 = BattlePerformanceMaster__DelayEffect(this, id, (UnityEngine_GameObject_o *)battleItemUi, 1, zero, v27);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v28, 0LL);
  if ( !battleItemEffectCoroutines )
LABEL_31:
    sub_B5D69C(battleItemEffectObject, *(_QWORD *)&id);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)battleItemEffectCoroutines,
    id,
    (WarBoardAIRoute_RouteData_o *)battleItemEffectObject,
    (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  srcLineSprite_o *Component_srcLineSprite; // x20
  const MethodInfo *v19; // x4
  int v20; // s0
  float v22; // s1
  float v23; // s1
  System_Collections_IEnumerator_o *v24; // x0
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *mFSM; // x20
  System_Collections_IEnumerator_o *v27; // x1

  v8 = this;
  if ( (byte_42E95D4 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster_TypeInfo, (_DWORD)parentObj, id, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_23084/*"treasure"*/, v15, v16, v17);
    byte_42E95D4 = 1;
  }
  if ( id )
  {
    if ( !parentObj )
      goto LABEL_27;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                parentObj,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
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
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v23 = v22 + 0.22;
    }
    else
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(parentObj, 0LL);
      if ( !this )
        goto LABEL_27;
      this = (BattlePerformanceMaster_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)this,
                                            (System_String_o *)StringLiteral_23084/*"treasure"*/,
                                            0LL);
      if ( !this )
        goto LABEL_27;
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    }
    v24 = BattlePerformanceMaster__DelayEffect(v8, id, parentObj, 0, *(UnityEngine_Vector3_o *)&v20, v19);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v8, v24, 0LL);
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
          v27 = BattlePerformanceMaster__DelayShowItem(mFSM, waitTime, v25);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v8, v27, 0LL);
          return;
        }
      }
LABEL_27:
      sub_B5D69C(this, parentObj);
    }
  }
}


void __fastcall BattlePerformanceMaster__StartNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Coroutine_o *effectAfterNoblePhantasmCoroutine; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x0

  if ( (byte_42E95D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__, (_DWORD)method, v2, v3);
    byte_42E95D0 = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_35615756(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0LL);
    this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    delayAfterNoblePhantasmBuffData = this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_B5D69C(0LL, v12);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)delayAfterNoblePhantasmBuffData,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
  }
}


void __fastcall BattlePerformanceMaster__UpdateBattleItemUi(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_42E95CE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v8, v9, v10);
    byte_42E95CE = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v11);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0LL, 0LL) )
  {
    v13 = this->fields.battleItemCountLabel;
    if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
    }
    v14 = (System_String_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !v14 || (v14 = BasicHelper__ToCommaString(*(_DWORD *)&v14->fields.m_firstChar, 0LL), !v13) )
      sub_B5D69C(v14, v15);
    UILabel__set_text(v13, v14, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *perf; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_42E9596 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, playSe, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v6, v7, v8);
    byte_42E9596 = 1;
  }
  perf = (PlayMakerFSM_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  if ( BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0LL) )
  {
    perf = this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(perf, playSe);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actSkillObject,
    (System_Int32_array **)useSkillObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_16;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_16;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v19) )
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, v20);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E95CF & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E95CF = 1;
  }
  v5 = sub_B5D694(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_TypeInfo);
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190___ctor(
    (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattlePerformanceMaster_o *v5; // x19
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
  System_Int32_array *ValidTargetTypeArray; // x21
  System_Func_int__bool__o *v22; // x22
  System_Int32_array **SelectSvtWindow; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  System_Func_int__bool__o *v31; // x22
  System_Int32_array **SelectMainSubSvtWindow; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // w1
  const MethodInfo *v40; // x2

  v5 = this;
  if ( (byte_42E9597 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, (_DWORD)skillInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_Target_isChoose__, v12, v13, v14);
    sub_B5D5C4(&Method_Target_isSubChoose__, v15, v16, v17);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v18, v19, v20);
    byte_42E9597 = 1;
  }
  if ( !skillInfo )
    goto LABEL_17;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v22 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    0LL,
    Method_Target_isSubChoose__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__28142236(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v22,
         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
  {
    this = (BattlePerformanceMaster_o *)v5->fields.perf;
    if ( this )
    {
      BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v5->fields.perf;
      if ( this )
      {
        SelectSvtWindow = (System_Int32_array **)BattlePerformance__getSelectSvtWindow((BattlePerformance_o *)this, 0LL);
        v5->fields.skillselectSvtWindow = (struct BattleSelectServantWindow_o *)SelectSvtWindow;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields.skillselectSvtWindow,
          SelectSvtWindow,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        this = (BattlePerformanceMaster_o *)v5->fields.skillselectSvtWindow;
        if ( this )
        {
          ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
            this,
            this->klass[1]._1.generic_class);
          BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v5, v30);
          return;
        }
      }
    }
LABEL_17:
    sub_B5D69C(this, skillInfo);
  }
  v31 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v31,
    0LL,
    Method_Target_isChoose__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int__28142236(
         ValidTargetTypeArray,
         (System_Func_T__bool__o *)v31,
         (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384) )
  {
    this = (BattlePerformanceMaster_o *)v5->fields.perf;
    if ( !this )
      goto LABEL_17;
    BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
    this = (BattlePerformanceMaster_o *)v5->fields.perf;
    if ( !this )
      goto LABEL_17;
    SelectMainSubSvtWindow = (System_Int32_array **)BattlePerformance__getSelectMainSubSvtWindow(
                                                      (BattlePerformance_o *)this,
                                                      0LL);
    v5->fields.selectMSWindow = (struct BattleSelectMainSubServantWindow_o *)SelectMainSubSvtWindow;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.selectMSWindow,
      SelectMainSubSvtWindow,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    this = (BattlePerformanceMaster_o *)v5->fields.selectMSWindow;
    if ( !this )
      goto LABEL_17;
    ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
      this,
      this->klass[1]._1.generic_class);
    v39 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    BattlePerformanceMaster__openSkillSelectSvtWindow(v5, v39, v40);
  }
  else
  {
    this = (BattlePerformanceMaster_o *)v5->fields.logic;
    if ( !this )
      goto LABEL_17;
    BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0LL);
    this = (BattlePerformanceMaster_o *)v5->fields.myFsm;
    if ( !this )
      goto LABEL_17;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
  }
}


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__171_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95D9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95D9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__170_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95D8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95D8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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

  if ( (byte_42E959F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, flg, mainUniqueId, *(_QWORD *)&subUniqueId);
    byte_42E959F = 1;
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
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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
    sub_B5D69C(selectMSWindow, flg);
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
  int v2; // w2
  __int64 v3; // x3
  BattleData_o *data; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E95A5 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E95A5 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_B5D69C(data, method);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v6);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleData_o *data; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E95A9 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E95A9 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_B5D69C(data, method);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateSkipDead(this, v6);
}


void __fastcall BattlePerformanceMaster__changeTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleData_o *data; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E95A7 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E95A7 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_B5D69C(data, method);
  if ( (WORD1(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v6);
}


void __fastcall BattlePerformanceMaster__checkCommandSpellTarget(
        BattlePerformanceMaster_o *this,
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
  void *Instance; // x0
  const MethodInfo *v15; // x1

  if ( (byte_42E9588 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v11, v12, v13);
    byte_42E9588 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v15);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL),
        (Instance = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(Instance, v15);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0LL);
}


void __fastcall BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v12; // x8
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v14; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 *v21; // x8
  System_Int32_array **v22; // x1

  v4 = this;
  if ( (byte_42E958B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v5, v6, v7);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v8, v9, v10);
    byte_42E958B = 1;
  }
  tmp_useSkill = v4->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)tmp_useSkill->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_17;
  v12 = v4->fields.tmp_useSkill;
  if ( !v12 )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)v12->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    this = (BattlePerformanceMaster_o *)v4->fields.myFsm;
    if ( this )
    {
      v21 = &StringLiteral_9396/*"NG"*/;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.systemflg_skipskillconf )
  {
    v14 = v4->fields.tmp_useSkill;
    if ( v14 )
    {
      this = (BattlePerformanceMaster_o *)v14->fields.skillInfo;
      if ( this )
      {
        if ( BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0LL) || v4->fields.isLongTap )
          goto LABEL_15;
        v22 = (System_Int32_array **)v4->fields.tmp_useSkill;
        v4->fields.useSkillObject = (struct BattleLogic_UseSkillObject_o *)v22;
        sub_B5D560((BattleServantConfConponent_o *)&v4->fields.useSkillObject, v22, v15, v16, v17, v18, v19, v20);
        this = (BattlePerformanceMaster_o *)v4->fields.myFsm;
        if ( this )
        {
          v21 = &StringLiteral_12404/*"SKIP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_B5D69C(this, method);
  }
LABEL_15:
  this = (BattlePerformanceMaster_o *)v4->fields.myFsm;
  if ( !this )
    goto LABEL_22;
  v21 = &StringLiteral_5573/*"END_PROC"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v21, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleLogic_o *logic; // x0
  __int64 *v9; // x9

  if ( (byte_42E95B4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v5, v6, v7);
    byte_42E95B4 = 1;
  }
  logic = this->fields.logic;
  if ( !logic || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0LL), !this->fields.myFsm) )
    sub_B5D69C(logic, method);
  if ( ((unsigned __int8)logic & 1) != 0 )
    v9 = &StringLiteral_9842/*"OK"*/;
  else
    v9 = &StringLiteral_12404/*"SKIP"*/;
  PlayMakerFSM__SendEvent(this->fields.myFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleLogic_UseSkillObject_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9590 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogic_UseSkillObject_TypeInfo, (_DWORD)skillInfo, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3106/*"CLICK_BOOST"*/, v6, v7, v8);
    byte_42E9590 = 1;
  }
  v9 = (BattleLogic_UseSkillObject_o *)sub_B5D694(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v9, skillInfo, 0LL);
  this->fields.tmp_useSkill = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v16);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3106/*"CLICK_BOOST"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  BattleLogic_UseSkillObject_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  PlayMakerFSM_o *logic; // x0

  if ( (byte_42E9595 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogic_UseSkillObject_TypeInfo, (_DWORD)skillInfo, isLong, method);
    sub_B5D5C4(&StringLiteral_3140/*"CLICK_SKILLICON"*/, v7, v8, v9);
    byte_42E9595 = 1;
  }
  v10 = (BattleLogic_UseSkillObject_o *)sub_B5D694(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v10, skillInfo, 0LL);
  this->fields.tmp_useSkill = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tmp_useSkill,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = isLong;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0LL) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3140/*"CLICK_SKILLICON"*/, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(logic, v17);
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9580 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5556/*"END_CLOSEALL"*/, (_DWORD)method, v2, v3);
    byte_42E9580 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5556/*"END_CLOSEALL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95BA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95BA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_42E95A4 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95A4 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9581 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9581 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_42E957D & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E957D = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_42E9585 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9585 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95B7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95B7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95C6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_42E957F & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E957F = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 1, v3);
  BattlePerformanceMaster__proclight(v5, v4->fields.menuBtn, 0, v6);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v7);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_42E95A2 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E95A2 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.menuBtn, 1, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_42E957B & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E957B = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 1, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9583 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E9583 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        BattlePerformanceMaster_MasterBuffEffectData_o *closeBuffData,
        const MethodInfo *method)
{
  BattlePerformanceMaster_MasterBuffEffectData_o *v4; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o *effectTween; // x22
  bool v14; // w0
  __int64 v15; // x1
  UnityEngine_Behaviour_o *perf; // x0

  v4 = closeBuffData;
  Component_srcLineSprite = (UnityEngine_Object_o *)widget;
  if ( (byte_42E95C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)widget, (_DWORD)closeBuffData, method);
    sub_B5D5C4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42E95C3 = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL);
  if ( v4 || !v14 )
  {
    if ( v4 )
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
  v4 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B5D694(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor(v4, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_28;
  perf = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)perf, 0LL);
  if ( !v4 )
    goto LABEL_28;
  v4->fields.isRootActive = (unsigned __int8)perf & 1;
  *(_WORD *)&v4->fields.isMenuBtnActive = 257;
  v4->fields.isSkillBtnActive = 1;
LABEL_15:
  perf = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isMenuBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isSpellBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.skillBtn;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isSkillBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
  if ( !perf )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isRootActive, 0LL);
  if ( !Component_srcLineSprite )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_28;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)perf,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( Component_srcLineSprite )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
        Component_srcLineSprite,
        Component_srcLineSprite->klass[1]._1.declaringType,
        1.0);
      return;
    }
LABEL_28:
    sub_B5D69C(perf, v15);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E95C4 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E95C4 = 1;
  }
  v5 = sub_B5D694(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_TypeInfo);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E95A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, (_DWORD)method, v3);
    byte_42E95A0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95AC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12510/*"START_TAC"*/, (_DWORD)method, v2, v3);
    byte_42E95AC = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12510/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(data, method);
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
    sub_B5D69C(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_B5D69C(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  BattleData_o *data; // x0
  struct BattleData_o *v48; // x8
  int32_t v49; // w20
  int32_t v50; // w8
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct BattleData_o *v57; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v59; // x9
  struct BattleData_o *v60; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w24
  int max_length; // w8
  __int64 v65; // x22
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x21
  int v71; // w25
  __int64 v72; // x26
  char v73; // w28
  UILabel_o *skillIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v76; // x22
  UnityEngine_Transform_o *v77; // x23
  int v78; // s0
  UnityEngine_Transform_o *v81; // x23
  int v82; // s0
  struct BattlePerformance_o *v85; // x8
  struct BattleData_o *v86; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *v87; // x23
  BattleSkillInfoData_o *v88; // x8
  float v89; // s11
  struct BattleData_o *v90; // x8
  UISprite_o *skillIconSplit; // x23
  struct BattleServantSkillIConComponent_array *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct BattleData_o *v99; // x8
  struct BattleData_o *v100; // x8
  struct BattleData_o *v101; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v103; // x1
  int32_t v104; // w20
  const MethodInfo *v105; // x2
  const MethodInfo *v106; // x1
  __int64 v107; // x0
  int32_t overwriteImageId; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9574 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonTemplate_BattleItemData__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SingletonTemplate_BattleItemData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_22452/*"skill_partition"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_19123/*"frame_master_bg_disable"*/, v44, v45, v46);
    byte_42E9574 = 1;
  }
  overwriteImageId = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)BattleData__getMasterEquipId(data, 0LL);
  v48 = this->fields.data;
  if ( !v48 )
    goto LABEL_96;
  v49 = (int)data;
  data = (BattleData_o *)v48->fields.quest_ent;
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
  v50 = overwriteImageId;
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
    v50 = overwriteImageId;
  }
  if ( v50 == -1 )
  {
LABEL_22:
    data = (BattleData_o *)this->fields.master_root;
    if ( !data )
      goto LABEL_96;
    data = (BattleData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                             (UnityEngine_GameObject_o *)data,
                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_96;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19123/*"frame_master_bg_disable"*/, 0LL);
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
    v57 = this->fields.data;
    if ( !v57 )
      goto LABEL_96;
    data = (BattleData_o *)MasterFaceManager__CreatePrefab_31037192(
                             this->fields.face_root,
                             1,
                             v57->fields.battleGenderType,
                             v49,
                             2,
                             0LL,
                             overwriteImageId,
                             0LL);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_96;
  v59 = perf->fields.data;
  if ( !v59 )
    goto LABEL_96;
  if ( v59->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_96;
  }
  v60 = perf->fields.data;
  if ( !v60 )
    goto LABEL_96;
  masterSkillInfo = v60->fields.masterSkillInfo;
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
      v65 = 0LL;
      do
      {
        if ( (unsigned int)v65 >= max_length )
        {
          v107 = sub_B5D6C8(data);
          sub_B5D668(v107, 0LL);
        }
        data = (BattleData_o *)skillIcon->m_Items[v65];
        if ( !data )
          goto LABEL_96;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v65 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.skillIcon, 0LL, v51, v52, v53, v54, v55, v56);
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
  v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v70,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  v71 = size - 1;
  if ( size >= 1 )
  {
    v72 = 0LL;
    v73 = 0;
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
                               (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_96;
      v76 = (UnityEngine_Component_o *)data;
      v77 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      *(UnityEngine_Vector3_o *)&v78 = UnityEngine_Vector3__get_one(0LL);
      if ( !v77 )
        goto LABEL_96;
      UnityEngine_Transform__set_localScale(v77, *(UnityEngine_Vector3_o *)&v78, 0LL);
      v81 = UnityEngine_Component__get_transform(v76, 0LL);
      *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v81 )
        goto LABEL_96;
      UnityEngine_Transform__set_localEulerAngles(v81, *(UnityEngine_Vector3_o *)&v82, 0LL);
      v85 = this->fields.perf;
      if ( !v85 )
        goto LABEL_96;
      v86 = v85->fields.data;
      if ( !v86 )
        goto LABEL_96;
      v87 = v86->fields.masterSkillInfo;
      if ( !v87 )
        goto LABEL_96;
      if ( v87->fields._size <= (unsigned int)v72 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v88 = v87->fields._items->m_Items[v72];
      if ( !v88 )
        goto LABEL_96;
      v89 = x + (float)(this->fields.skillIconOffset * (float)v71);
      if ( v88->fields.isAdd )
      {
        v90 = this->fields.data;
        if ( !v90 )
          goto LABEL_96;
        if ( !v90->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v73 & 1) == 0 )
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
            AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_22452/*"skill_partition"*/, 0LL);
          }
          v73 = 1;
          v89 = v89 - this->fields.skillIconSplitSpace;
        }
      }
      data = (BattleData_o *)UnityEngine_Component__get_transform(v76, 0LL);
      if ( !data )
        goto LABEL_96;
      v110.fields.x = v89;
      v110.fields.y = y;
      v110.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v110, 0LL);
      data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                               v76,
                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v70 )
        goto LABEL_96;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v70,
        (EventMissionProgressRequest_Argument_ProgressData_o *)data,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
      ++v72;
      --v71;
      if ( (int)v72 >= size )
        goto LABEL_79;
    }
  }
  if ( !v70 )
    goto LABEL_96;
LABEL_79:
  v92 = (struct BattleServantSkillIConComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v70,
                                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = v92;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillIcon,
    (System_Int32_array **)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  data = (BattleData_o *)this->fields.skillIconPrefab;
  if ( !data
    || (data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL)) == 0LL )
  {
LABEL_96:
    sub_B5D69C(data, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
LABEL_82:
  v99 = this->fields.data;
  if ( !v99 )
    goto LABEL_96;
  data = (BattleData_o *)v99->fields.questphase_ent;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0LL);
  v100 = this->fields.data;
  this->fields.iconItemNumberDispType = (int)data;
  if ( !v100 )
    goto LABEL_96;
  data = (BattleData_o *)v100->fields.questphase_ent;
  if ( !data )
    goto LABEL_96;
  data = (BattleData_o *)QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0LL);
  v101 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = (int)data;
  if ( !v101 )
    goto LABEL_96;
  data = (BattleData_o *)v101->fields.questphase_ent;
  if ( !data )
    goto LABEL_96;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0LL);
  if ( BattleItemObjectId >= 1 )
  {
    v104 = BattleItemObjectId;
    if ( (BYTE3(SingletonTemplate_BattleItemData__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BattleItemData__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BattleItemData__TypeInfo);
    }
    data = (BattleData_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_96;
    BattleItemData__SetItemId((BattleItemData_o *)data, v104, 0LL);
    BattlePerformanceMaster__InitializeBattleItem(this, v104, v105);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v103);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v106);
  data = (BattleData_o *)this->fields.master_root;
  if ( !data )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformanceMaster_MasterBuffEffectData_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_42E95B2 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E95B2 = 1;
  }
  v8 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B5D694(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor_20462740(v8, 0, 0LL);
  this->fields.masterBuffEffectDataClose = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v15);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_18;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v18);
  BattlePerformanceMaster__procCloseSkill(this, v19);
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
    sub_B5D69C(master_root, v16);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformanceMaster_MasterBuffEffectData_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1

  if ( (byte_42E9579 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v5, v6, v7);
    byte_42E9579 = 1;
  }
  v8 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B5D694(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  BattlePerformanceMaster_MasterBuffEffectData___ctor_20462740(v8, 1, 0LL);
  this->fields.masterBuffEffectDataClose = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v15);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v18),
        BattlePerformanceMaster__updateSkillIcon(this, v19),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(master_root, v16);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformance_o *perf; // x0

  if ( (byte_42E95C0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3130/*"CLICK_MENU"*/, (_DWORD)method, v2, v3);
    byte_42E95C0 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_B5D69C(perf, method);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3130/*"CLICK_MENU"*/, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E959C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, (_DWORD)method, v2, v3);
    byte_42E959C = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleLogic_UseSkillObject_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E959B & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogic_UseSkillObject_TypeInfo, (_DWORD)skillInfo, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, v6, v7, v8);
    byte_42E959B = 1;
  }
  v9 = (BattleLogic_UseSkillObject_o *)sub_B5D694(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v9, skillInfo, 0LL);
  this->fields.useSkillObject = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.useSkillObject,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, v16);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9842/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_42E95BF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3142/*"CLICK_SPELL"*/, v5, v6, v7);
    byte_42E95BF = 1;
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
    v10 = this->fields.data;
    if ( v10 )
    {
      perf = (BattlePerformance_o *)v10->fields.quest_ent;
      if ( perf )
      {
        if ( QuestEntity__HasFlag((QuestEntity_o *)perf, 0x100000000LL, 0LL) )
          goto LABEL_14;
        perf = (BattlePerformance_o *)this->fields.myFsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3142/*"CLICK_SPELL"*/, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B5D69C(perf, method);
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
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95B8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3159/*"CLOSE_CONF"*/, (_DWORD)method, v2, v3);
    byte_42E95B8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3159/*"CLOSE_CONF"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__openRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E95AE & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster__openRetireDialog_d__151_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E95AE = 1;
  }
  v5 = sub_B5D694(BattlePerformanceMaster__openRetireDialog_d__151_TypeInfo);
  BattlePerformanceMaster__openRetireDialog_d__151___ctor(
    (BattlePerformanceMaster__openRetireDialog_d__151_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  BattleSelectServantWindow_o *v18; // x0
  struct BattleSelectServantWindow_o *v19; // x21
  BattleSelectServantWindow_SelectServantCallBack_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v31; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v33; // x1

  if ( (byte_42E9589 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_selectedSvt__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5, v6, v7);
    byte_42E9589 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_B5D69C(0LL, method);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = this->fields.selectSvtWindow;
  if ( !v18 )
    sub_B5D69C(0LL, v17);
  BattleSelectServantWindow__setUseClose(v18, 1, 0LL);
  v19 = *p_selectSvtWindow;
  v20 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B5D694(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v19 )
    sub_B5D69C(v21, v22);
  v19->fields.selectCallBack = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v19->fields.selectCallBack,
    (System_Int32_array **)v20,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  data = this->fields.data;
  if ( !data )
    sub_B5D69C(0LL, v29);
  v31 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v31 )
    sub_B5D69C(FieldPlayerServantList, FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v31,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_B5D69C(0LL, v33);
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectSvtWindow)->klass->vtable._10_Open.method)(
    *p_selectSvtWindow,
    0LL,
    (*p_selectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(
        BattlePerformanceMaster_o *this,
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
  char *data; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v36; // x22
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x1
  CommonUI_o *Instance; // x20
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  NotificationDialog_ClickDelegate_o *v53; // x23

  if ( (byte_42E959E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_callBackSelectedMainSub__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceMaster_endSelectSvtError__, v5, v6, v7);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_2570/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2571/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, v23, v24, v25);
    byte_42E959E = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.selectMSWindow,
        (System_Int32_array **)SelectMainSubSvtWindow,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      selectMSWindow = this->fields.selectMSWindow;
      v36 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_B5D694(BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v36,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v36;
        sub_B5D560(
          (BattleServantConfConponent_o *)&selectMSWindow->fields.callBack,
          (System_Int32_array **)v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v49 = (System_Int32_array **)this->fields.data;
          *((_QWORD *)data + 18) = v49;
          sub_B5D560((BattleServantConfConponent_o *)(data + 144), v49, v43, v44, v45, v46, v47, v48);
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
    sub_B5D69C(data, method);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2571/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0LL);
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2570/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0LL);
  v53 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v53,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog_18204284(
    Instance,
    v51,
    v52,
    v53,
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_skillselectSvtWindow; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleSelectServantWindow_o *v26; // x20

  if ( (byte_42E959A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_selectedSkillSvt__, skillId, (_DWORD)method, v3);
    sub_B5D5C4(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v6, v7, v8);
    byte_42E959A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillselectSvtWindow,
    (System_Int32_array **)SelectSvtWindow,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0LL);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v19 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_B5D694(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v19,
        sub_B5D560(
          (BattleServantConfConponent_o *)&skillselectSvtWindow->fields.selectCallBack,
          (System_Int32_array **)v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v26 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v26)
    || (BattleSelectServantWindow__SetServantData(v26, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(perf, *(_QWORD *)&skillId);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procCloseAll(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v16; // x21
  UnityEngine_Object_o *fieldConf; // x20

  v4 = this;
  if ( (byte_42E95B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compCloseALL__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E95B0 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  BattlePerformanceMaster__proclight(v11, v4->fields.menuBtn, 0, v12);
  win_Menu = v4->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_20;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.win_Retire;
  if ( !win_Menu )
    goto LABEL_20;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Skill = v4->fields.win_Skill;
  v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v16, (Il2CppObject *)v4, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v16,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.win_Spell;
  if ( !win_Menu )
    goto LABEL_20;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.warBoard_win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_20;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_20;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)v4->fields.fieldConf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    win_Menu = (BattleMenuWindowComponent_o *)v4->fields.fieldConf;
    if ( !win_Menu )
      goto LABEL_20;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)win_Menu, 0LL, 0LL);
  }
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.skillConfWindow;
  if ( !win_Menu
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
          win_Menu,
          0LL,
          win_Menu->klass->vtable._13_CompClose.methodPtr),
        (win_Menu = (BattleMenuWindowComponent_o *)v4->fields.boostSkillConfWindow) == 0LL)
    || (((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
          win_Menu,
          0LL,
          win_Menu->klass->vtable._13_CompClose.methodPtr),
        (win_Menu = (BattleMenuWindowComponent_o *)v4->fields.perf) == 0LL)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)win_Menu, 0LL, 0LL),
        (win_Menu = (BattleMenuWindowComponent_o *)v4->fields.itemListWindow) == 0LL) )
  {
LABEL_20:
    sub_B5D69C(win_Menu, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9593 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    byte_42E9593 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_B5D69C(v13, v14);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v12,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9586 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3174/*"CLOSE_SPELL"*/, (_DWORD)method, v2, v3);
    byte_42E9586 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3174/*"CLOSE_SPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleData_o *data; // x0
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_42E95B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compCloseEnemyConf__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E95B9 = 1;
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
    v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_B5D69C(data, method);
  }
  v10 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseEnemyConf__,
    0LL);
LABEL_9:
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, v10, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E95A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compCloseMenu__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    byte_42E95A3 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v11, this->fields.menuBtn, 0, v12);
  win_Menu = this->fields.win_Menu;
  v14 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v14, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_B5D69C(v15, v16);
  BattleMenuWindowComponent__Close(win_Menu, v14, 0LL);
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
    sub_B5D69C(0LL, v6);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  BattlePerformance_o *perf; // x0
  __int64 v14; // x1

  if ( (byte_42E958E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_CloseSkillConfComp__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    byte_42E958E = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v12,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_B5D69C(perf, v14);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkillWindow(
        BattlePerformanceMaster_o *this,
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
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E957C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compCloseSkillWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    byte_42E957C = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  BattlePerformanceMaster__proclight(v11, this->fields.skillBtn, 0, v12);
  win_Skill = this->fields.win_Skill;
  v14 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_B5D69C(v15, v16);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v14,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSpellWindow(
        BattlePerformanceMaster_o *this,
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
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E9584 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compCloseSpellWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    byte_42E9584 = 1;
  }
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(10, 0LL);
  win_Spell = this->fields.win_Spell;
  v12 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_B5D69C(v13, v14);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v12,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  System_Int32_array **gameObject; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleSkillConfComponent_o *v18; // x20
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_42E9591 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E9591 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B5D560(
          (BattleServantConfConponent_o *)&boostSkillConfWindow->fields.target,
          gameObject,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        !tmp_useSkill)
    || (gameObject = (System_Int32_array **)this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)gameObject,
          tmp_useSkill->fields.skillInfo,
          1,
          0,
          0LL),
        v18 = this->fields.boostSkillConfWindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v18) )
  {
    sub_B5D69C(gameObject, v11);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
    v18,
    v19,
    v18->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v12; // x20
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_42E95B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compOpenEnemyConf__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v8, v9, v10);
    byte_42E95B6 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_16;
  perf = (BattlePerformance_o *)BattleData__getEnemyServantDataIndex((BattleData_o *)perf, this->fields.tmp_index, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v12 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)BattleData__IsWarBoard(this->fields.data, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
    goto LABEL_12;
  if ( !v12 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v12, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.warBoard_win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v12, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    perf = (BattlePerformance_o *)this->fields.win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v12, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
  }
  v14 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_B5D69C(perf, method);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v14, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattlePerformanceMaster_o *v14; // x0
  const MethodInfo *v15; // x3
  __int64 v16; // x1
  BattlePerformance_o *perf; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v19; // x21

  v4 = this;
  if ( (byte_42E95C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compOpenItemListWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v11, v12, v13);
    byte_42E95C5 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  BattlePerformanceMaster__proclight(v14, v4->fields.menuBtn, 0, v15);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)v4->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  perf = (BattlePerformance_o *)v4->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        itemListWindow = v4->fields.itemListWindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)v4,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_11:
    sub_B5D69C(perf, v16);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v19, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformance_o *perf; // x0

  if ( (byte_42E957E & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v5, v6, v7);
    byte_42E957E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(7, 0LL);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_10:
    sub_B5D69C(perf, method);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  BattlePerformanceMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_42E95A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compOpenMenu__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v11, v12, v13);
    byte_42E95A1 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v15, this->fields.skillBtn, 0, v16);
  BattlePerformanceMaster__proclight(v17, this->fields.menuBtn, 1, v18);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        win_Menu = this->fields.win_Menu,
        v20 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v20,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_11:
    sub_B5D69C(perf, method);
  }
  BattleMenuWindowComponent__Open(win_Menu, v20, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  System_Int32_array **gameObject; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct BattleSkillConfComponent_o *v18; // x20
  BattleWindowComponent_EndCall_o *v19; // x21

  if ( (byte_42E958C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_OpenSkillConfComplete__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    byte_42E958C = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_B5D560(
          (BattleServantConfConponent_o *)&skillConfWindow->fields.target,
          gameObject,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        !tmp_useSkill)
    || (gameObject = (System_Int32_array **)this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)gameObject,
          tmp_useSkill->fields.skillInfo,
          1,
          0,
          0LL),
        v18 = this->fields.skillConfWindow,
        v19 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v19,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v18) )
  {
    sub_B5D69C(gameObject, v11);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
    v18,
    v19,
    v18->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  BattlePerformanceMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_42E957A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compOpenSkillWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v11, v12, v13);
    byte_42E957A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(9, 0LL);
  BattlePerformanceMaster__proclight(v15, this->fields.skillBtn, 1, v16);
  BattlePerformanceMaster__proclight(v17, this->fields.menuBtn, 0, v18);
  win_Skill = this->fields.win_Skill;
  v20 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_10:
    sub_B5D69C(perf, method);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v20,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  BattlePerformance_o *perf; // x0
  BattlePerformanceMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  BattlePerformanceMaster_o *v17; // x0
  const MethodInfo *v18; // x3
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x9
  struct CommandSpellWindowComponent_o *v21; // x20
  struct CommandSpellWindowComponent_o *v22; // x20
  BattleWindowComponent_EndCall_o *v23; // x21

  if ( (byte_42E9582 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_compOpenSpellWindow__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12485/*"START_CLOSE"*/, v11, v12, v13);
    byte_42E9582 = 1;
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12485/*"START_CLOSE"*/, 0LL);
  BattlePerformanceMaster__proclight(v15, this->fields.skillBtn, 0, v16);
  BattlePerformanceMaster__proclight(v17, this->fields.menuBtn, 0, v18);
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
  v21 = this->fields.win_Spell;
  perf = (BattlePerformance_o *)BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0LL);
  if ( !v21
    || (v21->fields.isUseTemporarySpell = (unsigned __int8)perf & 1,
        v22 = this->fields.win_Spell,
        v23 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v23,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0LL),
        !v22)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v22->klass->vtable._10_Open.method)(
          v22,
          v23,
          v22->klass->vtable._11_CompOpen.methodPtr),
        (perf = (BattlePerformance_o *)this->fields.win_Skill) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(perf, method);
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
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9587 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3152/*"CLICK_USESPELL"*/, commandSpellId, (_DWORD)method, v3);
    byte_42E9587 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_B5D69C(0LL, *(_QWORD *)&commandSpellId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3152/*"CLICK_USESPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42E95B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)obj, flg, method);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E95B3 = 1;
  }
  if ( !obj )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      obj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_B5D69C(this, obj);
  }
}


void __fastcall BattlePerformanceMaster__retRetireDialog(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E95AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9842/*"OK"*/, v5, v6, v7);
    byte_42E95AF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9842/*"OK"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSkillSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
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
  void *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v39; // x22
  SkillEntity_o *v40; // x22
  CommonUI_o *Instance; // x20
  System_String_o *v42; // x21
  BattlePerformanceMaster___c_c *v43; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__133_0; // x23
  System_String_o *v46; // x22
  Il2CppObject *v47; // x24
  struct BattlePerformanceMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_42E959D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__133_0__, v21, v22, v23);
    sub_B5D5C4(&BattlePerformanceMaster___c_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_2500/*"BATTLE_INVALID_SELECT_TARGET"*/, v33, v34, v35);
    byte_42E959D = 1;
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
    skillselectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_31;
    skillselectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_31;
    v39 = (DataMasterBase_WarMaster__WarEntity__int__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v39 )
      goto LABEL_31;
    skillselectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v39,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_31;
    v40 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !skillselectSvtWindow || !v40 )
      goto LABEL_31;
    if ( SkillEntity__checkUseTreasure(v40, *((_DWORD *)skillselectSvtWindow + 77), 0LL) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B5D69C(skillselectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2500/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v42 = (System_String_o *)skillselectSvtWindow;
    v43 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v43 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__133_0 = static_fields->__9__133_0;
    v46 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__133_0 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__133_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__133_0, v47, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__133_0__, 0LL);
      v48 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v48->__9__133_0 = _9__133_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v48->__9__133_0,
        (System_Int32_array **)_9__133_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    if ( !Instance )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(Instance, v46, v42, _9__133_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
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
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v40; // x21
  CommonUI_o *Instance; // x20
  System_String_o *v42; // x21
  BattlePerformanceMaster___c_c *v43; // x8
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x9
  System_Action_o *_9__109_0; // x23
  System_String_o *v46; // x22
  Il2CppObject *v47; // x24
  struct BattlePerformanceMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_42E958A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandSpellMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__selectedSvt_b__109_0__, v21, v22, v23);
    sub_B5D5C4(&BattlePerformanceMaster___c_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2976/*"CANCEL"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1/*""*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_2500/*"BATTLE_INVALID_SELECT_TARGET"*/, v36, v37, v38);
    byte_42E958A = 1;
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
    selectSvtWindow = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_30;
    selectSvtWindow = DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_30;
    selectSvtWindow = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        (DataMasterBase_WarMaster__WarEntity__int__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_30;
    v40 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v40 )
      goto LABEL_30;
    if ( CommandSpellEntity__checkUseTreasure(v40, *((_DWORD *)selectSvtWindow + 77), 0LL) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_30:
      sub_B5D69C(selectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2500/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v42 = (System_String_o *)selectSvtWindow;
    v43 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v43 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__109_0 = static_fields->__9__109_0;
    v46 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__109_0 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v47 = (Il2CppObject *)static_fields->__9;
      _9__109_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__109_0, v47, Method_BattlePerformanceMaster___c__selectedSvt_b__109_0__, 0LL);
      v48 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v48->__9__109_0 = _9__109_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v48->__9__109_0,
        (System_Int32_array **)_9__109_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    if ( !Instance )
      goto LABEL_30;
    CommonUI__OpenNotificationDialog(Instance, v46, v42, _9__109_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
  }
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_30;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_2976/*"CANCEL"*/, 0LL);
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
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95B5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8528/*"LONGPRESS_ENEMY"*/, index, (_DWORD)method, v3);
    byte_42E95B5 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_B5D69C(0LL, *(_QWORD *)&index);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8528/*"LONGPRESS_ENEMY"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleLogic_o *logic; // x0
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_42E95AD & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E95AD = 1;
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
    sub_B5D69C(logic, method);
  BattlePerformance__effectFadeOut((BattlePerformance_o *)logic, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlayCommonSe(3, 0LL);
  v10 = BattlePerformanceMaster__openRetireDialog(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E95B1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12486/*"START_COM"*/, (_DWORD)method, v2, v3);
    byte_42E95B1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12486/*"START_COM"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
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
  __int64 v60; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *delayAfterNoblePhantasmBuffData; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v69; // x22
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  float v76; // s8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  UnityEngine_Object_o *v80; // x24
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UnityEngine_GameObject_o *v89; // x24
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  UnityEngine_Transform_o *v98; // x24
  BattleUIRangeLabel_o *v99; // x24
  BattleServantBuffIconComponent_o *v100; // x24
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  TrackingMoveCtCComponent_o *v104; // x23
  int v105; // s0
  BattlePerformanceMaster_MasterBuffEffectData_o *v108; // x23
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  __int64 v115; // x8
  System_Collections_Generic_IEnumerable_T__o *v116; // x23
  System_Action_int__o *v117; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v120; // x8
  struct UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x8
  const MethodInfo *v122; // x1
  System_Collections_IEnumerator_o *v123; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  UnityEngine_Coroutine_o *v131; // x1
  System_Collections_IEnumerator_o *v132; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  struct TweenAlpha_o *v142; // x8
  UITweener_o *v143; // x19
  EventDelegate_Callback_o *v144; // x21
  int32_t eventId; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E95C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)masterBuffData, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v9, v10, v11);
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v24, v25, v26);
    sub_B5D5C4(&int_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v33, v34, v35);
    sub_B5D5C4(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v42, v43, v44);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__0__, v45, v46, v47);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__1__, v48, v49, v50);
    sub_B5D5C4(&BattlePerformanceMaster___c__DisplayClass175_0_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_18484/*"effect/ef_poplabel{0:00}"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_1/*""*/, v57, v58, v59);
    byte_42E95C1 = 1;
  }
  v60 = sub_B5D694(BattlePerformanceMaster___c__DisplayClass175_0_TypeInfo);
  BattlePerformanceMaster___c__DisplayClass175_0___ctor((BattlePerformanceMaster___c__DisplayClass175_0_o *)v60, 0LL);
  if ( !v60 )
    goto LABEL_78;
  *(_QWORD *)(v60 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v60 + 16), (System_Int32_array **)this, v63, v64, v65, v66, v67, v68);
  *(_QWORD *)(v60 + 32) = masterBuffData;
  v69 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v60 + 32);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v60 + 32),
    (System_Int32_array **)masterBuffData,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  delayAfterNoblePhantasmBuffData = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v60 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_78;
  v76 = 0.0;
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
          *v69,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__);
        return v76;
      }
      goto LABEL_78;
    }
    delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.master_root;
    if ( !delayAfterNoblePhantasmBuffData )
      goto LABEL_78;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
        v80 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v80, 0LL);
        *p_masterBuffPopLabelEffect = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
          0LL,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
      }
      if ( !*v69 )
        goto LABEL_78;
      eventId = (*v69)[1].fields.eventId;
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
      v88 = System_String__Format((System_String_o *)StringLiteral_18484/*"effect/ef_poplabel{0:00}"*/, v87, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Resources__Load_UIAtlas_(v88, (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( !this->fields.masterBtn )
        goto LABEL_78;
      v89 = (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData;
      transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v89, transform, 0LL, 0LL);
      this->fields.masterBuffPopLabelEffect = Object;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.masterBuffPopLabelEffect,
        (System_Int32_array **)Object,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.masterBuffPopLabelEffect;
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      v146.fields.y = -42.0;
      v146.fields.x = 0.0;
      v146.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, v146, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !this->fields.master_root )
        goto LABEL_78;
      v98 = (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_transform(this->fields.master_root, 0LL);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !v98 )
        goto LABEL_78;
      UnityEngine_Transform__set_parent(v98, (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      v99 = (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData;
      BattleUIRangeLabel__ParentHasChanged((BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData, 0LL);
      if ( !*v69 )
        goto LABEL_78;
      BattleUIRangeLabel__SetAdjustLabelOffset(
        v99,
        *(System_String_o **)&(*v69)[1].fields.missionTargetId,
        (System_String_o *)StringLiteral_1/*""*/,
        1,
        0LL,
        0,
        0,
        0,
        0LL);
      BattleUIRangeLabel__AddLabelDepth(v99, 20, 0LL);
      if ( !*v69 )
        goto LABEL_78;
      BattleUIRangeLabel__CondensedScaleLabel(
        v99,
        (*v69)[4].fields.missionConditionDetailId,
        (*v69)[4].fields.targetId,
        0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__GetComponentInChildren_SimpleAnimation_((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 1, (const MethodInfo_1CC446C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      v100 = (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData;
      BattleServantBuffIconComponent__ParentHasChanged(
        (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData,
        0LL);
      BattleServantBuffIconComponent__setImageId(v100, 0, 0LL);
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_masterBuffPopLabelEffect;
      if ( !*p_masterBuffPopLabelEffect )
        goto LABEL_78;
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
      perf = this->fields.perf;
      if ( !perf )
        goto LABEL_78;
      actorcamera = perf->fields.actorcamera;
      uicamera = perf->fields.uicamera;
      v104 = (TrackingMoveCtCComponent_o *)delayAfterNoblePhantasmBuffData;
      *(UnityEngine_Vector3_o *)&v105 = UnityEngine_Vector3__get_zero(0LL);
      if ( !v104 )
        goto LABEL_78;
      TrackingMoveCtCComponent__Set(v104, actorcamera, uicamera, 0LL, *(UnityEngine_Vector3_o *)&v105, 0, 0LL);
      TrackingMoveCtCComponent__startAct(v104, 0LL);
      if ( !this->fields.isMasterBuffEffectPlaying )
      {
        v108 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_B5D694(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
        BattlePerformanceMaster_MasterBuffEffectData___ctor(v108, 0LL);
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.master_root;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData, 0LL);
        if ( !v108 )
          goto LABEL_78;
        v108->fields.isRootActive = (unsigned __int8)delayAfterNoblePhantasmBuffData & 1;
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.menuBtn;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        v108->fields.isMenuBtnActive = UnityEngine_GameObject__get_activeSelf(
                                         (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                         0LL);
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.spellBtn;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        v108->fields.isSpellBtnActive = UnityEngine_GameObject__get_activeSelf(
                                          (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                          0LL);
        delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.skillBtn;
        if ( !delayAfterNoblePhantasmBuffData )
          goto LABEL_78;
        v108->fields.isSkillBtnActive = UnityEngine_GameObject__get_activeSelf(
                                          (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                          0LL);
        this->fields.masterBuffEffectDataClose = v108;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.masterBuffEffectDataClose,
          (System_Int32_array **)v108,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114);
      }
      delayAfterNoblePhantasmBuffData = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.masterBuffEffectObjectList;
      if ( !delayAfterNoblePhantasmBuffData )
        goto LABEL_78;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)delayAfterNoblePhantasmBuffData,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
      v115 = *(_QWORD *)(v60 + 32);
      *(_DWORD *)(v60 + 24) = 1065353216;
      if ( !v115 )
        goto LABEL_78;
      v116 = *(System_Collections_Generic_IEnumerable_T__o **)(v115 + 72);
      v117 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v117,
        (Il2CppObject *)v60,
        Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__0__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      BasicHelper__ForEach_int_(
        v116,
        (System_Action_T__o *)v117,
        (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
      masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
      if ( !masterBuffEffectDataClose )
        goto LABEL_78;
      if ( !masterBuffEffectDataClose->fields.isRootActive )
      {
        v120 = *v69;
        if ( !*v69 )
          goto LABEL_78;
        if ( LOBYTE(v120[4].fields.eventId) )
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
            UnityEngine_MonoBehaviour__StopCoroutine_35615756(
              (UnityEngine_MonoBehaviour_o *)this,
              this->fields.masterIconFadeCoroutine,
              0LL);
            v123 = BattlePerformanceMaster__waitMasterBuffEffect(this, *(float *)(v60 + 24), v122);
            started = UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v123, 0LL);
            this->fields.masterIconFadeCoroutine = started;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.masterIconFadeCoroutine,
              (System_Int32_array **)started,
              v125,
              v126,
              v127,
              v128,
              v129,
              v130);
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
            v135 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
            this->fields.effectTween = v135;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.effectTween,
              (System_Int32_array **)v135,
              v136,
              v137,
              v138,
              v139,
              v140,
              v141);
            v142 = this->fields.effectTween;
            if ( !v142
              || (v142->fields.style = 6,
                  v143 = (UITweener_o *)*p_effectTween,
                  v144 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
                  EventDelegate_Callback___ctor(
                    v144,
                    (Il2CppObject *)v60,
                    Method_BattlePerformanceMaster___c__DisplayClass175_0__startMasterBuffEffect_b__1__,
                    0LL),
                  !v143) )
            {
LABEL_78:
              sub_B5D69C(delayAfterNoblePhantasmBuffData, v62);
            }
            UITweener__SetOnFinished(v143, v144, 0LL);
          }
        }
        else if ( BYTE1(v120[4].fields.eventId) )
        {
          v131 = this->fields.masterIconFadeCoroutine;
          if ( v131 )
            UnityEngine_MonoBehaviour__StopCoroutine_35615756((UnityEngine_MonoBehaviour_o *)this, v131, 0LL);
          v132 = BattlePerformanceMaster__waitMasterBuffEffect(this, *(float *)(v60 + 24), (const MethodInfo *)v131);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v132, 0LL);
        }
      }
      return *(float *)(v60 + 24);
    }
  }
  return v76;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_42E95AB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12506/*"START_SKILL"*/, type, (_DWORD)method, v3);
    byte_42E95AB = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.typeMetadataHandle)(
          win_Spell,
          0LL,
          win_Spell->klass[1]._1.interopData),
        (win_Spell = this->fields.myFsm) == 0LL) )
  {
    sub_B5D69C(win_Spell, *(_QWORD *)&type);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12506/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_42E9578 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12510/*"START_TAC"*/, (_DWORD)method, v2, v3);
    byte_42E9578 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12510/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleData_o *data; // x8
  struct BattleData_o *v9; // x8

  v4 = this;
  if ( (byte_42E9576 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, (_DWORD)method, v2, v3);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_19118/*"frame_cs_bg_disable"*/, v5, v6, v7);
    byte_42E9576 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v9 = v4->fields.data;
    if ( !v9 )
      goto LABEL_17;
    this = (BattlePerformanceMaster_o *)v9->fields.quest_ent;
    if ( !this )
      goto LABEL_17;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
      goto LABEL_11;
  }
  this = (BattlePerformanceMaster_o *)v4->fields.data;
  if ( !this )
    goto LABEL_17;
  if ( BattleData__GetOverwriteCommandSpellIcon((BattleData_o *)this, 0LL) )
  {
LABEL_11:
    this = (BattlePerformanceMaster_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( v4->fields.commandSpellIcon )
    {
      CommandSpellIconComponent__SetDataBattle(
        v4->fields.commandSpellIcon,
        (UserGameEntity_o *)this,
        v4->fields.data,
        0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(this, method);
  }
  this = (BattlePerformanceMaster_o *)v4->fields.spellBtn;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_17;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19118/*"frame_cs_bg_disable"*/, 0LL);
  this = (BattlePerformanceMaster_o *)v4->fields.spellSpr;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleData_o *data; // x8
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_42E95A6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E95A6 = 1;
  }
  data = v4->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v4->fields.skillSkipBtn) == 0LL )
    sub_B5D69C(this, method);
  if ( data->fields.systemflg_skipskillconf )
    v9 = &StringLiteral_17214/*"btn_off"*/;
  else
    v9 = &StringLiteral_17215/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster_o *v4; // x19
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
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v57; // x8
  struct BattleServantSkillIConComponent_array *v58; // x8
  BattlePerformanceMaster_o *v59; // x27
  __int64 v60; // x22
  char v61; // w21
  il2cpp_array_size_t v62; // w20
  int v63; // w25
  int v64; // w26
  struct BattleServantSkillIConComponent_array *v65; // x8
  BattleSkillInfoData_o *v66; // x23
  int v67; // w28
  bool isChargeOK; // w24
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  int v75; // w26
  System_Int32_array **v76; // x25
  BattlePerformanceMaster_c **v77; // x0
  System_Int32_array **v78; // x25
  BattleBuffData_BuffData_array *v79; // x9
  Il2CppClass **v80; // x0
  struct BattleServantSkillIConComponent_array *v81; // x8
  int myFsm; // w8
  BattlePerformanceMaster_o *v83; // x22
  char v84; // w27
  unsigned int v85; // w23
  int v86; // w24
  char v87; // w25
  struct PlayMakerFSM_o *v88; // x8
  __int64 v89; // x9
  __int64 v90; // x11
  int v91; // w11
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  BattlePerformanceMaster___c_c *v93; // x0
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__87_0; // x23
  System_String_o *v96; // x22
  Il2CppObject *v97; // x21
  struct BattlePerformanceMaster___c_StaticFields *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array *All_BattleBuffData_BuffData; // x0
  struct BattleData_o *data; // x8
  System_String_o *v107; // x21
  BattlePerformanceMaster_o *v108; // x22
  System_String_o *v109; // x1
  System_String_o *v110; // x22
  Il2CppObject *v111; // x0
  BattlePerformanceMaster_o *v112; // x22
  System_String_o *v113; // x1
  float v114; // s8
  BattlePerformanceMaster___c_c *v115; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  struct BattlePerformanceMaster___c_StaticFields *v117; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__87_1; // x24
  System_String_o *v119; // x23
  Il2CppObject *v120; // x25
  struct BattlePerformanceMaster___c_StaticFields *v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_String_array *v128; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  UnityEngine_Transform_o *v130; // x20
  unsigned int v131; // s0
  unsigned int v132; // s9
  int v133; // s2
  unsigned int localPosition; // s0
  unsigned int v135; // s0
  float v136; // s1
  struct BattleData_o *v137; // x8
  struct BattleData_o *v138; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x1
  __int64 v147; // x0
  __int64 v148; // x0
  BattleBuffData_BuffData_array *array; // [xsp+0h] [xbp-80h]
  BattleBuffData_BuffData_array *v150; // [xsp+8h] [xbp-78h]
  int v151; // [xsp+14h] [xbp-6Ch]
  int v152; // [xsp+18h] [xbp-68h] BYREF
  int v153; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_42E9577 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_string___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___, v5, v6, v7);
    sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Predicate_string___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Predicate_string__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&string___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_0__, v26, v27, v28);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_1__, v29, v30, v31);
    sub_B5D5C4(&BattlePerformanceMaster___c_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2507/*"BATTLE_MASTER_SKILL_CHARGE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_17209/*"btn_master_skill_disable"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1/*""*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_2506/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, v50, v51, v52);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_9396/*"NG"*/, v53, v54, v55);
    byte_42E9577 = 1;
  }
  v153 = 0;
  skillIcon = v4->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)sub_B5D5DC(string___TypeInfo, skillIcon->max_length);
  v57 = v4->fields.skillIcon;
  array = (BattleBuffData_BuffData_array *)this;
  if ( !v57 )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)sub_B5D5DC(string___TypeInfo, v57->max_length);
  v58 = v4->fields.skillIcon;
  if ( !v58 )
    goto LABEL_159;
  v59 = this;
  v60 = 0LL;
  v61 = 0;
  v62 = 0;
  v151 = 0;
  v63 = 0;
  v64 = 0;
  v150 = (BattleBuffData_BuffData_array *)this;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v4->fields.data;
    if ( !this )
      goto LABEL_159;
    if ( (int)v60 >= (signed int)v58->max_length )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v60, 0LL);
    if ( this )
    {
      v65 = v4->fields.skillIcon;
      if ( !v65 )
        goto LABEL_159;
      if ( (unsigned int)v60 >= v65->max_length )
        goto LABEL_160;
      v66 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v65->m_Items[(int)v60];
      if ( !this )
        goto LABEL_159;
      if ( v66->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v66, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
      v67 = v64;
      isChargeOK = BattleSkillInfoData__isChargeOK(v66, 0LL);
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v66, 0LL);
      v153 = (int)this;
      if ( v66->fields.isAdd )
      {
        v75 = v63;
        if ( (int)this <= 0 )
        {
          v76 = (System_Int32_array **)StringLiteral_755/*"-"*/;
          if ( !v59 )
            goto LABEL_159;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v153, 0LL);
          v76 = (System_Int32_array **)this;
          if ( !v59 )
            goto LABEL_159;
        }
        if ( v76 )
        {
          this = (BattlePerformanceMaster_o *)sub_B5D684(v76, v59->klass->_1.element_class);
          if ( !this )
            goto LABEL_161;
        }
        if ( (unsigned int)v151 >= LODWORD(v59->fields.myFsm) )
          goto LABEL_160;
        v77 = &v59->klass + v151;
        v77[4] = (BattlePerformanceMaster_c *)v76;
        sub_B5D560((BattleServantConfConponent_o *)(v77 + 4), v76, v69, v70, v71, v72, v73, v74);
        ++v151;
      }
      else
      {
        v75 = v63;
        if ( (int)this <= 0 )
        {
          v78 = (System_Int32_array **)StringLiteral_755/*"-"*/;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v153, 0LL);
          v78 = (System_Int32_array **)this;
        }
        v79 = array;
        if ( !array )
          goto LABEL_159;
        if ( v78 )
        {
          this = (BattlePerformanceMaster_o *)sub_B5D684(v78, array->obj.klass->_1.element_class);
          v79 = array;
          if ( !this )
          {
LABEL_161:
            v148 = sub_B5D6BC(this);
            sub_B5D668(v148, 0LL);
          }
        }
        if ( v62 >= v79->max_length )
          goto LABEL_160;
        v80 = &v79->obj.klass + (int)v62;
        v80[4] = (Il2CppClass *)v78;
        sub_B5D560((BattleServantConfConponent_o *)(v80 + 4), v78, v69, v70, v71, v72, v73, v74);
        ++v62;
      }
      v59 = (BattlePerformanceMaster_o *)v150;
      v63 = v75 | (v153 > 0);
      v61 |= isChargeOK;
      v64 = v67 | (v66->fields.sealedTurn > 0);
    }
    v81 = v4->fields.skillIcon;
    if ( !v81 )
      goto LABEL_159;
    if ( (unsigned int)v60 >= v81->max_length )
    {
LABEL_160:
      v147 = sub_B5D6C8(this);
      sub_B5D668(v147, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v81->m_Items[v60];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0LL);
      v58 = v4->fields.skillIcon;
      ++v60;
      if ( v58 )
        continue;
    }
    goto LABEL_159;
  }
  this = (BattlePerformanceMaster_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_159;
  myFsm = (int)this->fields.myFsm;
  v83 = this;
  v84 = v63;
  if ( myFsm >= 1 )
  {
    v85 = 0;
    v86 = 0;
    v87 = 0;
    while ( 1 )
    {
      if ( v85 >= myFsm )
        goto LABEL_160;
      this = (BattlePerformanceMaster_o *)*((_QWORD *)&v83->fields.otherFsm + (int)v85);
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)BattleServantData__getShortenUserEquipSkill((BattleServantData_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      v88 = this->fields.myFsm;
      if ( v88 )
      {
        if ( (int)v88 >= 1 )
        {
          v89 = 0LL;
          do
          {
            v90 = *((_QWORD *)&this->fields.otherFsm + v89);
            if ( !v90 )
              goto LABEL_159;
            v91 = *(_DWORD *)(v90 + 28);
            ++v89;
            if ( v86 <= v91 )
              v86 = v91;
          }
          while ( (int)v89 < (int)v88 );
        }
        v87 = 1;
      }
      myFsm = (int)v83->fields.myFsm;
      if ( (int)++v85 >= myFsm )
        goto LABEL_56;
    }
  }
  v87 = 0;
  v86 = 0;
LABEL_56:
  skillBtnFlashObject = (UnityEngine_Object_o *)v4->fields.skillBtnFlashObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceMaster_o *)v4->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_159;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (BattlePerformanceMaster_o *)v4->fields.skillBtnFlashObject;
      if ( !this )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v4->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v61 & 1, 0LL);
  }
  if ( v4->fields.notDispEquipSkillChargeTurn )
  {
    this = (BattlePerformanceMaster_o *)v4->fields.masterSkillBadStatus;
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.masterSkillChargeRoot;
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    v93 = BattlePerformanceMaster___c_TypeInfo;
    if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v93 = BattlePerformanceMaster___c_TypeInfo;
    }
    static_fields = v93->static_fields;
    _9__87_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__87_0;
    v96 = (System_String_o *)StringLiteral_885/*"/"*/;
    if ( !_9__87_0 )
    {
      if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v93);
        static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      }
      v97 = (Il2CppObject *)static_fields->__9;
      _9__87_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__87_0,
        v97,
        Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
      v98 = BattlePerformanceMaster___c_TypeInfo->static_fields;
      v98->__9__87_0 = (struct System_Predicate_string__o *)_9__87_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v98->__9__87_0,
        (System_Int32_array **)_9__87_0,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
    }
    All_BattleBuffData_BuffData = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                                           array,
                                                           (System_Predicate_T__o *)_9__87_0,
                                                           (const MethodInfo_1FC072C *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v96, All_BattleBuffData_BuffData, 0LL);
    data = v4->fields.data;
    if ( !data )
      goto LABEL_159;
    v107 = (System_String_o *)this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0LL);
    if ( !v4->fields.masterSkillBadStatus )
      goto LABEL_159;
    v108 = this;
    UnityEngine_GameObject__SetActive(v4->fields.masterSkillBadStatus, v64 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_159;
    if ( (v64 & 1) != 0 )
      v109 = (System_String_o *)v108;
    else
      v109 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v109, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v110 = LocalizationManager__Get((System_String_o *)StringLiteral_2507/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0LL);
    v152 = v86 + 1;
    v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
    this = (BattlePerformanceMaster_o *)System_String__Format(v110, v111, 0LL);
    if ( !v4->fields.masterSkillChargeRoot )
      goto LABEL_159;
    v112 = this;
    UnityEngine_GameObject__SetActive(v4->fields.masterSkillChargeRoot, v87 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_159;
    v113 = (v87 & 1) != 0 ? (System_String_o *)v112 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v113, 0LL);
    this = (BattlePerformanceMaster_o *)v4->fields.addSkillChargeTimeRoot;
    v114 = (((unsigned __int8)v64 | (unsigned __int8)v87) & 1) != 0 ? -58.0 : -38.0;
    if ( !this )
      goto LABEL_159;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_159;
    if ( v151 < 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v84 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.chargeTimeLabel;
      if ( !this )
        goto LABEL_159;
      UILabel__set_text((UILabel_o *)this, v107, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v4->fields.chargeTimeRoot )
        goto LABEL_159;
      v130 = (UnityEngine_Transform_o *)this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v4->fields.chargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_159;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      v132 = localPosition;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      *(UnityEngine_Vector3_o *)(&v133 - 2) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL);
      if ( !v130 )
        goto LABEL_159;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v84 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v115 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v4->fields.addSkillAddChargeTimeLabel;
      if ( (BYTE3(BattlePerformanceMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
        v115 = BattlePerformanceMaster___c_TypeInfo;
      }
      v117 = v115->static_fields;
      _9__87_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v117->__9__87_1;
      v119 = (System_String_o *)StringLiteral_885/*"/"*/;
      if ( !_9__87_1 )
      {
        if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v115);
          v117 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        }
        v120 = (Il2CppObject *)v117->__9;
        _9__87_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          _9__87_1,
          v120,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__87_1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
        v121 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v121->__9__87_1 = (struct System_Predicate_string__o *)_9__87_1;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v121->__9__87_1,
          (System_Int32_array **)_9__87_1,
          v122,
          v123,
          v124,
          v125,
          v126,
          v127);
      }
      v128 = (System_String_array *)System_Array__FindAll_BattleBuffData_BuffData_(
                                      v150,
                                      (System_Predicate_T__o *)_9__87_1,
                                      (const MethodInfo_1FC072C *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v119, v128, 0LL);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_159;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0LL);
      addSkillAddChargeTimeSplitLabel = v4->fields.addSkillAddChargeTimeSplitLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2506/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0LL);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_159;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_159;
      UILabel__set_text((UILabel_o *)this, v107, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v4->fields.addSkillChargeTimeRoot )
        goto LABEL_159;
      v130 = (UnityEngine_Transform_o *)this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v4->fields.addSkillChargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_159;
      v131 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_159;
      v132 = v131;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_159;
      *(UnityEngine_Vector3_o *)(&v133 - 2) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL);
      if ( !v130 )
        goto LABEL_159;
    }
    v135 = v132;
    v136 = v114;
    UnityEngine_Transform__set_localPosition(v130, *(UnityEngine_Vector3_o *)(&v133 - 2), 0LL);
  }
  this = (BattlePerformanceMaster_o *)v4->fields.data;
  if ( !this )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)BattleData__getBoostSkillInfo((BattleData_o *)this, 0, 0LL);
  if ( !v4->fields.boostSkillIcon )
    goto LABEL_159;
  if ( this )
    BattleServantSkillIConComponent__SetSkillInfo(
      (BattleServantSkillIConComponent_o *)v4->fields.boostSkillIcon,
      (BattleSkillInfoData_o *)this,
      1,
      0,
      0,
      0,
      0LL);
  else
    BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)v4->fields.boostSkillIcon, 0, 0LL);
  v137 = v4->fields.data;
  if ( !v137 )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)v137->fields.quest_ent;
  if ( !this )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_148;
  v138 = v4->fields.data;
  if ( !v138 )
    goto LABEL_159;
  this = (BattlePerformanceMaster_o *)v138->fields.quest_ent;
  if ( !this )
    goto LABEL_159;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
  {
LABEL_148:
    this = (BattlePerformanceMaster_o *)v4->fields.skillBtnSp;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17209/*"btn_master_skill_disable"*/, 0LL);
      this = (BattlePerformanceMaster_o *)v4->fields.skillBtn;
      if ( this )
      {
        ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
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
          v146 = (System_Int32_array **)StringLiteral_9396/*"NG"*/;
          ComponentInChildren_Dropdown_DropdownItem->fields.m_Image = (struct UnityEngine_UI_Image_o *)StringLiteral_9396/*"NG"*/;
          sub_B5D560(
            (BattleServantConfConponent_o *)&ComponentInChildren_Dropdown_DropdownItem->fields.m_Image,
            v146,
            v140,
            v141,
            v142,
            v143,
            v144,
            v145);
        }
        this = (BattlePerformanceMaster_o *)v4->fields.skillBtnFlashObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
    }
LABEL_159:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleData_o *data; // x8
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_42E95AA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E95AA = 1;
  }
  data = v4->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v4->fields.skipDeadBtn) == 0LL )
    sub_B5D69C(this, method);
  if ( data->fields.systemflg_skipDead )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
}


void __fastcall BattlePerformanceMaster__updateTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleData_o *data; // x8
  __int64 *v9; // x8

  v4 = this;
  if ( (byte_42E95A8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    this = (BattlePerformanceMaster_o *)sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E95A8 = 1;
  }
  data = v4->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v4->fields.tdConstBtn) == 0LL )
    sub_B5D69C(this, method);
  if ( data->fields.systemflg_TdConstantvelocity )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v9, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E95C2 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster__waitMasterBuffEffect_d__176_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E95C2 = 1;
  }
  v7 = sub_B5D694(BattlePerformanceMaster__waitMasterBuffEffect_d__176_TypeInfo);
  BattlePerformanceMaster__waitMasterBuffEffect_d__176___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__176_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor_20462740(
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
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  int32_t *p_id; // x23
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  float v32; // s8
  UnityEngine_WaitForSeconds_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  int32_t v36; // w20
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v40; // x20
  UnityEngine_Transform_o *v41; // x21
  UnityEngine_Transform_o *v42; // x21
  float v43; // s0
  float v44; // s1
  float v45; // s2
  struct EffectEntity_o *effectEnt_5__2; // x8
  System_String_o *se; // x21
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E609A & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_2806/*"Battle"*/, v23, v24, v25);
    byte_42E609A = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_36;
    p_id = &this->fields.id;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                  (WarEntity_o **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_36;
    v32 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v32 > 0.0 )
    {
      v33 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v33, v32, 0LL);
      this->fields.__2__current = (Il2CppObject *)v33;
      p__2__current = &this->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  v36 = *p_id;
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  Instance = (DataManager_o *)BattleEffectUtility__getEffectObjectSafe(v36, 0LL, 1, 1.0, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v40 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v41 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v41 )
    goto LABEL_36;
  UnityEngine_Transform__set_parent(v41, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v42 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v42 )
    goto LABEL_36;
  v49.fields.x = v43 + this->fields.pos.fields.x;
  v49.fields.y = v44 + this->fields.pos.fields.y;
  v49.fields.z = v45 + this->fields.pos.fields.z;
  UnityEngine_Transform__set_localPosition(v42, v49, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v50, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v51.fields.x = 1.0;
  v51.fields.y = 1.0;
  v51.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v51, 0LL);
  UnityEngine_GameObject__SetActive(v40, 1, 0LL);
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
    Instance = (DataManager_o *)SoundManager__playSe_23390804((System_String_o *)StringLiteral_2806/*"Battle"*/, se, 0LL);
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
          (WarBoardAIRoute_RouteData_o *)v40,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_36:
    sub_B5D69C(Instance, v29);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceMaster__DelayEffect_d__193_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_GameObject_o *obj; // x0

  if ( (byte_42E609B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E609B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = this->fields.obj;
    if ( !obj )
      sub_B5D69C(0LL, method);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v7 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v7, waitTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = &this->fields.__2__current;
      sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceMaster__DelayShowItem_d__195_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *v4; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  struct System_Collections_Generic_IEnumerator_float__o **p__7__wrap1; // x21
  int *monitor; // x8
  UnityEngine_WaitForSeconds_o *v36; // x20
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Func_WarBoardAIRoute_RouteData__float__o *v39; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v43; // x21
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x22
  System_Collections_Generic_IEnumerator_float__c *v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x0
  const MethodInfo *v54; // x1
  __int64 v55; // x3
  struct System_Collections_Generic_IEnumerator_float__o *v56; // x20
  System_Collections_Generic_IEnumerator_float__c *v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *v63; // x0
  UnityEngine_WaitForSeconds_o *v64; // x20

  v4 = this;
  if ( (byte_42E609C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_startMasterBuffEffect__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattleActionData_MasterBuffData__float___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_float__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_float__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__, v26, v27, v28);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_o *)sub_B5D5C4(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v29,
                                                                           v30,
                                                                           v31);
    byte_42E609C = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = (Il2CppObject *)v4->fields.__4__this;
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    monitor = (int *)_4__this[30].monitor;
    if ( !monitor )
      sub_B5D69C(this, method);
    if ( monitor[6] >= 1 )
    {
      v36 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v36, 0.25, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v36;
      sub_B5D560(&v4->fields.__2__current);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    }
    goto LABEL_13;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
LABEL_13:
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this[30].monitor;
    v39 = (System_Func_WarBoardAIRoute_RouteData__float__o *)sub_B5D694(System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    System_Func_WarBoardAIRoute_RouteData__float____ctor(
      v39,
      _4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      (const MethodInfo_2C30BC4 *)Method_System_Func_BattleActionData_MasterBuffData__float___ctor__);
    v40 = System_Linq_Enumerable__Select_ShiftHpData_HpDetail__float_(
            v38,
            (System_Func_TSource__TResult__o *)v39,
            (const MethodInfo_1CB37F8 *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v43 = v40;
    if ( !v40 )
      sub_B5D69C(0LL, v41);
    klass = v40->klass;
    if ( *(_WORD *)&v40->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        ++v45;
        p_offset += 4;
        if ( v45 >= *(unsigned __int16 *)&v40->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_18:
      p_method = sub_AF54C0(v40, System_Collections_Generic_IEnumerable_float__TypeInfo, 0LL, v42);
    }
    v4->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
                                                                                        v43,
                                                                                        *(_QWORD *)(p_method + 8));
    p__7__wrap1 = &v4->fields.__7__wrap1;
    sub_B5D560(&v4->fields.__7__wrap1);
    goto LABEL_21;
  }
  if ( _1__state != 2 )
    return 0;
  p__7__wrap1 = &v4->fields.__7__wrap1;
LABEL_21:
  _7__wrap1 = v4->fields.__7__wrap1;
  v4->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_B5D69C(this, method);
  v49 = _7__wrap1->klass;
  if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_26:
    v52 = sub_AF54C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
  }
  v53 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v52)(
          _7__wrap1,
          *(_QWORD *)(v52 + 8));
  if ( (v53 & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190____m__Finally1(v4, v54);
    *p__7__wrap1 = 0LL;
    sub_B5D560(p__7__wrap1);
    if ( !_4__this )
      sub_B5D69C(v61, v62);
    v63 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)_4__this[30].monitor;
    if ( !v63 )
      sub_B5D69C(0LL, v62);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      v63,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    _4__this[31].monitor = 0LL;
    sub_B5D560(&_4__this[31].monitor);
    return 0;
  }
  v56 = *p__7__wrap1;
  if ( !*p__7__wrap1 )
    sub_B5D69C(v53, v54);
  v57 = v56->klass;
  if ( *(_WORD *)&v56->klass->_2.bitflags1 )
  {
    v58 = 0LL;
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v59 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      ++v58;
      v59 += 4;
      if ( v58 >= *(unsigned __int16 *)&v56->klass->_2.bitflags1 )
        goto LABEL_34;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_34:
    v60 = sub_AF54C0(*p__7__wrap1, System_Collections_Generic_IEnumerator_float__TypeInfo, 0LL, v55);
  }
  (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v60)(
    v56,
    *(_QWORD *)(v60 + 8));
  v64 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v64, 0.25, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v64;
  sub_B5D560(&v4->fields.__2__current);
  v4->fields.__1__state = 2;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__190_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_float__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E609D & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E609D = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AF54C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL, v3);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E6098 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6098 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattlePerformanceMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v31; // x1
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x21
  struct BattlePerformanceMaster_o *v36; // x8
  UnityEngine_Transform_o *v37; // x22
  EffectEntity_o *Entity; // x0
  EffectEntity_o *v39; // x20
  System_String_o *se; // x20
  srcLineSprite_o *Component_srcLineSprite; // x20
  float v42; // s0
  struct BattlePerformanceMaster_o *v43; // x8

  if ( (byte_42E6099 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, x, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&SoundManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2806/*"Battle"*/, v27, v28, v29);
    byte_42E6099 = 1;
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
  v33 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[6].monitor;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  EffectObjectSafe = BaseMonoBehaviour__createObject(_4__this, v33, transform, 0LL, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  v35 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_31;
  v37 = (UnityEngine_Transform_o *)EffectObjectSafe;
  EffectObjectSafe = v36->fields.master_root;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)EffectObjectSafe,
                                                   0LL);
  if ( !v37 )
    goto LABEL_31;
  UnityEngine_Transform__set_parent(v37, (UnityEngine_Transform_o *)EffectObjectSafe, 0LL);
  UnityEngine_GameObject__SetActive(v35, 1, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = (EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)EffectObjectSafe,
                               x,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v39 = Entity;
    if ( EffectEntity__isSe(Entity, 0LL) )
    {
      se = v39->fields.se;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSe_23390804((System_String_o *)StringLiteral_2806/*"Battle"*/, se, 0LL);
    }
  }
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v35,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    v42 = *(float *)&Component_srcLineSprite->fields.mFSM;
    if ( this->fields.waitTime < v42 )
      this->fields.waitTime = v42;
  }
  v43 = this->fields.__4__this;
  if ( !v43 || (EffectObjectSafe = (UnityEngine_GameObject_o *)v43->fields.masterBuffEffectObjectList) == 0LL )
LABEL_31:
    sub_B5D69C(EffectObjectSafe, v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)EffectObjectSafe,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass175_0___startMasterBuffEffect_b__1(
        BattlePerformanceMaster___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_MasterBuffData_o *masterBuffData; // x8
  struct BattlePerformanceMaster_o *_4__this; // x19
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v6; // x0

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
        || (UnityEngine_MonoBehaviour__StopCoroutine_35615756(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              masterIconFadeCoroutine,
              0LL),
            (_4__this = this->fields.__4__this) != 0LL) )
      {
        v6 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, 0LL);
        _4__this->fields.masterIconFadeCoroutine = UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                     (UnityEngine_MonoBehaviour_o *)_4__this,
                                                     v6,
                                                     0LL);
        sub_B5D560(&_4__this->fields.masterIconFadeCoroutine);
        return;
      }
    }
LABEL_8:
    sub_B5D69C(this, method);
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
  struct BattlePerformanceMaster_o *_4__this; // x8
  BattlePerformanceMaster___c__DisplayClass178_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        _4__this->fields.masterIconFadeCoroutine = 0LL,
        sub_B5D560(&_4__this->fields.masterIconFadeCoroutine),
        (this = (BattlePerformanceMaster___c__DisplayClass178_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(this, method);
  }
  BattlePerformanceMaster__endMasterBuffEffect(
    (BattlePerformanceMaster_o *)this,
    v3->fields.widget,
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
    sub_B5D69C(this, x);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *v4; // x19
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
  int32_t _1__state; // w8
  Il2CppObject *v18; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass178_0_o *_8__1; // x20
  struct BattlePerformanceMaster___c__DisplayClass178_0_o *v23; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass178_0_o *v25; // x8
  UnityEngine_Object_o *effectTween; // x19
  struct TweenAlpha_o *v27; // x8
  UITweener_o *v28; // x20
  Il2CppObject *v29; // x21
  EventDelegate_Callback_o *v30; // x19

  v4 = this;
  if ( (byte_42E609E & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattlePerformanceMaster___c__DisplayClass178_0__endMasterBuffEffectFadeOut_b__0__, v11, v12, v13);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)sub_B5D5C4(
                                                                             &BattlePerformanceMaster___c__DisplayClass178_0_TypeInfo,
                                                                             v14,
                                                                             v15,
                                                                             v16);
    byte_42E609E = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_29;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)_4__this->fields.master_root;
    if ( !this )
      goto LABEL_29;
    _8__1 = v4->fields.__8__1;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_29;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_B5D560(&_8__1->fields.widget);
    v23 = v4->fields.__8__1;
    if ( !v23 )
      goto LABEL_29;
    widget = (UnityEngine_Object_o *)v23->fields.widget;
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
      v25 = v4->fields.__8__1;
      if ( !v25 )
        goto LABEL_29;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)v25->fields.widget;
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
        sub_B5D560(&_4__this->fields.masterIconFadeCoroutine);
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
        _4__this->fields.effectTween = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        sub_B5D560(&_4__this->fields.effectTween);
        v27 = _4__this->fields.effectTween;
        if ( !v27 )
          goto LABEL_29;
        v27->fields.style = 6;
        v28 = (UITweener_o *)_4__this->fields.effectTween;
        v29 = (Il2CppObject *)v4->fields.__8__1;
        v30 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v30,
          v29,
          Method_BattlePerformanceMaster___c__DisplayClass178_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        if ( !v28 )
          goto LABEL_29;
        UITweener__SetOnFinished(v28, v30, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v18 = (Il2CppObject *)sub_B5D694(BattlePerformanceMaster___c__DisplayClass178_0_TypeInfo);
    System_Object___ctor(v18, 0LL);
    v4->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass178_0_o *)v18;
    sub_B5D560(&v4->fields.__8__1);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_o *)v4->fields.__8__1;
    if ( this )
    {
      *(_QWORD *)&this->fields.__1__state = v4->fields.__4__this;
      sub_B5D560(&this->fields);
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_29:
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__178_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceMaster__openRetireDialog_d__151_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  DefCoroutine_c *v12; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject *_4__this; // x21
  BattleLogic_o *klass; // x19
  NotificationDialog_ClickDelegate_o *v17; // x20

  v4 = this;
  if ( (byte_42E609F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattlePerformanceMaster_retRetireDialog__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    this = (BattlePerformanceMaster__openRetireDialog_d__151_o *)sub_B5D5C4(&DefCoroutine_TypeInfo, v8, v9, v10);
    byte_42E609F = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = (Il2CppObject *)v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this
      || (klass = (BattleLogic_o *)_4__this[3].klass,
          v17 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo),
          NotificationDialog_ClickDelegate___ctor(v17, _4__this, Method_BattlePerformanceMaster_retRetireDialog__, 0LL),
          !klass) )
    {
      sub_B5D69C(this, method);
    }
    BattleLogic__OpenBattleLoseDlg(klass, 1, 1, v17, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v12 = DefCoroutine_TypeInfo;
  if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v12 = DefCoroutine_TypeInfo;
  }
  v4->fields.__2__current = (Il2CppObject *)v12->static_fields->milliSecSeven;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceMaster__openRetireDialog_d__151_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  bool result; // w0
  float deltaTime; // s0

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
      sub_B5D560(&this->fields.__2__current);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_B5D69C(0LL, method);
      this->fields.__2__current = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__176_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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