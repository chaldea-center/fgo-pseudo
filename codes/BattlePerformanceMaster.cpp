void __fastcall BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDF634 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_17811/*"btn_master_skill"*/);
    byte_4BDF634 = 1;
  }
  BattlePerformanceMaster_TypeInfo->static_fields->MASTER_SKILL_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_17811/*"btn_master_skill"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePerformanceMaster_TypeInfo->static_fields,
    StringLiteral_17811/*"btn_master_skill"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BDF633 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    byte_4BDF633 = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.masterBuffEffectObjectList,
    (int64_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.delayAfterNoblePhantasmBuffData,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battleItemEffectObject,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battleItemEffectCoroutines,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = sub_1C22084(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  *(_DWORD *)(v31 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v31, v32, v33, v34, v35, v36, v37);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseBoostSkillConfComp(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5F1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5F1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF627 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF627 = 1;
  }
  win_Retire = this->fields.win_Retire;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_1C22094(v5, v6);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v4,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5EC & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5EC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4BDF62E & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster__DelayEffect_d__194_TypeInfo);
    byte_4BDF62E = 1;
  }
  v13 = sub_1C22084(BattlePerformanceMaster__DelayEffect_d__194_TypeInfo);
  BattlePerformanceMaster__DelayEffect_d__194___ctor((BattlePerformanceMaster__DelayEffect_d__194_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_1C22094(v14, v15);
  *(_QWORD *)(v13 + 64) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = id;
  *(_QWORD *)(v13 + 40) = parentObj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)parentObj, v22, v23, v24, v25, v26, v27);
  *(_BYTE *)(v13 + 60) = checkObject;
  *(float *)(v13 + 48) = x;
  *(float *)(v13 + 52) = y;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF630 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster__DelayShowItem_d__196_TypeInfo);
    byte_4BDF630 = 1;
  }
  v5 = sub_1C22084(BattlePerformanceMaster__DelayShowItem_d__196_TypeInfo);
  BattlePerformanceMaster__DelayShowItem_d__196___ctor((BattlePerformanceMaster__DelayShowItem_d__196_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 40) = obj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)obj, v8, v9, v10, v11, v12, v13);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__EndNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  this->fields._IsNoblePhantasm_k__BackingField = 0;
  v3 = BattlePerformanceMaster__WaitTimeMasterBuffEffect(this, method);
  started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
    (int64_t)started,
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  UnityEngine_Object_o *battleItemTr; // x21
  __int64 v8; // x1
  bool v9; // w21
  UnityEngine_Transform_o *v10; // x0

  if ( (byte_4BDF632 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF632 = 1;
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&outVector->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  outVector->fields.z = z;
  battleItemTr = (UnityEngine_Object_o *)this->fields.battleItemTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(battleItemTr, 0LL, 0LL);
  if ( !v9 )
  {
    v10 = this->fields.battleItemTr;
    if ( !v10 )
      sub_1C22094(0LL, v8);
    *outVector = UnityEngine_Transform__get_localPosition(v10, 0LL);
  }
  return !v9;
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  PartyOrganizationUtility_o *win_Spell; // x21
  CommandSpellWindowComponent_CloseButtonCallBack_o *v32; // x22
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct CommandSpellWindowComponent_o *v39; // x21
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v40; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct BattleData_o *v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct BattleData_o *v60; // x1
  UnityEngine_Transform_o *v61; // x21
  int v62; // s1
  int v63; // s0
  int v64; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v66; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v74; // x22
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  UnityEngine_Object_o *fieldConf; // x21
  BattleFieldConfConponent_o *v82; // x21
  System_Action_o *v83; // x22
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct BattleData_o *v90; // x1
  const MethodInfo *v91; // x1
  const MethodInfo *v92; // x1
  const MethodInfo *v93; // x1
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  AssetData_o *v100; // x21
  int64_t v101; // x1
  UnityEngine_GameObject_o *v102; // x21
  UnityEngine_GameObject_array *Children; // x22
  System_Func_object__bool__o *v104; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  UnityEngine_Object_o *battleItemUi; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF5CF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_BasicHelper_Any_GameObject___);
    sub_1C21E38(&Method_BattlePerformanceMaster_OnCloseFieldConf__);
    sub_1C21E38(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procUseCommandSpell__);
    sub_1C21E38(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_1C21E38(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    sub_1C21E38(&System_Func_GameObject__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__);
    sub_1C21E38(&BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo);
    sub_1C21E38(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
    sub_1C21E38(&StringLiteral_3256/*"Battle/Common"*/);
    sub_1C21E38(&StringLiteral_19166/*"ef_masterskill_flash"*/);
    byte_4BDF5CF = 1;
  }
  v9 = sub_1C22084(BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo);
  BattlePerformanceMaster___c__DisplayClass83_0___ctor((BattlePerformanceMaster___c__DisplayClass83_0_o *)v9, 0LL);
  this->fields.perf = inperf;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inperf, v10, v11, v12, v13, v14, v15);
  this->fields.data = indata;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v16, v17, v18, v19, v20, v21);
  this->fields.logic = inlogic;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v22, v23, v24, v25, v26, v27);
  skillBtn = (char *)this->fields.skillBtn;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
  if ( !skillBtn )
    goto LABEL_59;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.menuBtn;
  this->fields.pos_skillbtn = localPosition;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
  if ( !skillBtn )
    goto LABEL_59;
  v115 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v115;
  if ( !skillBtn )
    goto LABEL_59;
  BattleMasterSkillWindowComponent__setInitData((BattleMasterSkillWindowComponent_o *)skillBtn, 0, 0.1, 0, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_59;
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_59;
  CommandSpellWindowComponent__InitializeCommandSpell(
    (CommandSpellWindowComponent_o *)skillBtn,
    this->fields.perf,
    1,
    data->fields.temporarySpell,
    0LL);
  win_Spell = (PartyOrganizationUtility_o *)this->fields.win_Spell;
  v32 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C22084(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !win_Spell )
    goto LABEL_59;
  win_Spell[1].klass = (PartyOrganizationUtility_c *)v32;
  sub_1C21DDC(win_Spell + 1, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = this->fields.win_Spell;
  v40 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_1C22084(CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v39 )
    goto LABEL_59;
  v39->fields.callback_use = v40;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v39->fields.callback_use, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  skillBtn = (char *)this->fields.win_Spell;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Menu;
  if ( !skillBtn )
    goto LABEL_59;
  v53 = this->fields.data;
  *((_QWORD *)skillBtn + 11) = v53;
  sub_1C21DDC((PartyOrganizationUtility_o *)(skillBtn + 88), (int64_t)v53, v47, v48, v49, v50, v51, v52);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  v60 = this->fields.data;
  *((_QWORD *)skillBtn + 19) = v60;
  sub_1C21DDC((PartyOrganizationUtility_o *)(skillBtn + 152), (int64_t)v60, v54, v55, v56, v57, v58, v59);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_59;
  v61 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0LL);
  if ( !skillBtn )
    goto LABEL_59;
  *(UnityEngine_Vector3_o *)(&v62 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillBtn,
                                           0LL);
  if ( !v61 )
    goto LABEL_59;
  v63 = 0;
  v64 = 0;
  UnityEngine_Transform__set_localPosition(v61, *(UnityEngine_Vector3_o *)(&v62 - 1), 0LL);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  v66 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C22084(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v66,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_59;
  warBoard_win_EnemyConf->fields.callback_close = v66;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (int64_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  win_EnemyConf = this->fields.win_EnemyConf;
  v74 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C22084(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v74,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !win_EnemyConf )
    goto LABEL_59;
  win_EnemyConf->fields.callback_close = v74;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&win_EnemyConf->fields.callback_close,
    (int64_t)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v82 = this->fields.fieldConf;
    v83 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v83, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v82 )
      goto LABEL_59;
    BattleFieldConfConponent__Initialize(v82, v83, 0LL);
  }
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  skillBtn = (char *)this->fields.itemListWindow;
  if ( !skillBtn )
    goto LABEL_59;
  v90 = this->fields.data;
  *((_QWORD *)skillBtn + 13) = v90;
  sub_1C21DDC((PartyOrganizationUtility_o *)(skillBtn + 104), (int64_t)v90, v84, v85, v86, v87, v88, v89);
  BattlePerformanceMaster__updateShortSkill(this, v91);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v92);
  BattlePerformanceMaster__updateSkipDead(this, v93);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_59;
  BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)skillBtn, this->fields.data, 0LL);
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 424LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 432LL));
  skillBtn = (char *)this->fields.boostSkillConfWindow;
  if ( !skillBtn )
    goto LABEL_59;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)skillBtn + 456LL))(
    skillBtn,
    *(_QWORD *)(*(_QWORD *)skillBtn + 464LL));
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3256/*"Battle/Common"*/, 0LL);
  if ( !v9 )
    goto LABEL_59;
  v100 = (AssetData_o *)skillBtn;
  v101 = StringLiteral_19166/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v9 + 16) = StringLiteral_19166/*"ef_masterskill_flash"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), v101, v94, v95, v96, v97, v98, v99);
  if ( !v100 )
    goto LABEL_59;
  skillBtn = (char *)AssetData__GetObject_object__49880776(
                       v100,
                       *(System_String_o **)(v9 + 16),
                       (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !this->fields.win_Menu )
    goto LABEL_59;
  v102 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v102, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v104 = (System_Func_object__bool__o *)sub_1C22084(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v104,
      (Il2CppObject *)v9,
      Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__,
      0LL);
    if ( !BasicHelper__Any_object__49917468(
            (System_Object_array *)Children,
            (System_Func_T__bool__o *)v104,
            (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_GameObject___) )
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_59;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v102, transform, 0LL, 0LL);
      this->fields.skillBtnFlashObject = Object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.skillBtnFlashObject,
        (int64_t)Object,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
    }
    skillBtn = (char *)this->fields.skillBtnFlashObject;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      goto LABEL_53;
    }
LABEL_59:
    sub_1C22094(skillBtn, v28);
  }
LABEL_53:
  this->fields._IsNoblePhantasm_k__BackingField = 0;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0LL, 0LL) )
  {
    skillBtn = (char *)this->fields.battleItemUi;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      return;
    }
    goto LABEL_59;
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
  int32_t monitor; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF62A & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF62A = 1;
  }
  entity = 0LL;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0LL, 0LL) )
  {
    Instance = this->fields.battleItemUi;
    if ( !Instance )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(Instance, 1, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1C22094(Instance, v6);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleItemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      v9 = this->fields.battleItemIcon;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v9, monitor, 0LL);
      goto LABEL_18;
    }
    goto LABEL_20;
  }
LABEL_18:
  BattlePerformanceMaster__UpdateBattleItemUi(this, v6);
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_1C22094(0LL, method);
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF629 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15830/*"Wait"*/);
    byte_4BDF629 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_1C22094(myFsm, method);
  return System_String__IndexOf_63147052((System_String_o *)myFsm, (System_String_o *)StringLiteral_15830/*"Wait"*/, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF61B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3638/*"CLOSE_CONF"*/);
    byte_4BDF61B = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3638/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF628 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF628 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF626 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF626 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnRetireDialog(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDF60C & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_9811/*"OK"*/);
    byte_4BDF60C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL)
    || (BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9811/*"OK"*/, 0LL),
        (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_1C22094(Instance, v5);
  }
  BattlePerformance__ResetSoundMask((BattlePerformance_o *)Instance, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5EF & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5EF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__OpenRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF60B & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster__OpenRetireDialog_d__152_TypeInfo);
    byte_4BDF60B = 1;
  }
  v3 = sub_1C22084(BattlePerformanceMaster__OpenRetireDialog_d__152_TypeInfo);
  BattlePerformanceMaster__OpenRetireDialog_d__152___ctor(
    (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF624 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3586/*"CLICK_CKRETIRE"*/);
    byte_4BDF624 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3586/*"CLICK_CKRETIRE"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5EA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5EA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


bool __fastcall BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF5F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4BDF5F5 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_11:
    sub_1C22094(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1C22084(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (int64_t)v7,
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


void __fastcall BattlePerformanceMaster__OverwriteMasterBackgroundImage(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleMasterImageEntity_o *BattleMasterImageEntity; // x0
  int32_t OverwriteMasterBackgroundId; // w0
  int v6; // w20
  BattleDataDefine_c *v7; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v9; // x19
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int v15; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF5D1 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_19957/*"frame_master_bg_{0}"*/);
    sub_1C21E38(&StringLiteral_3274/*"BattleAssetUIAtlas"*/);
    byte_4BDF5D1 = 1;
  }
  atlas = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  BattleMasterImageEntity = BattleData__GetBattleMasterImageEntity(data, 0LL);
  if ( BattleMasterImageEntity )
  {
    OverwriteMasterBackgroundId = BattleMasterImageEntity__GetOverwriteMasterBackgroundId(BattleMasterImageEntity, 0LL);
    if ( OverwriteMasterBackgroundId >= 1 )
    {
      v6 = OverwriteMasterBackgroundId;
      v7 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v7 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v7->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3274/*"BattleAssetUIAtlas"*/, 0LL) )
      {
        data = (BattleData_o *)this->fields.master_root;
        if ( data )
        {
          data = (BattleData_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            v9 = (UISprite_o *)data;
            UISprite__set_atlas((UISprite_o *)data, atlas, 0LL);
            v15 = v6;
            v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
            v14 = System_String__Format((System_String_o *)StringLiteral_19957/*"frame_master_bg_{0}"*/, v13, 0LL);
            UISprite__set_spriteName(v9, v14, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1C22094(data, method);
      }
    }
  }
}


void __fastcall BattlePerformanceMaster__PlayInterruption(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C22094(0LL, method);
  BattleLogic__PlayInterruption(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__PlayPartyReorganization(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C22094(0LL, method);
  BattleLogic__PlayPartyReorganization(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BDF61A & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__172_0__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF61A = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v4 = this->fields.fieldConf;
    v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__172_0__,
      0LL);
    if ( !v4 )
      sub_1C22094(v6, v7);
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

  if ( (byte_4BDF619 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__171_0__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF619 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_13;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v7 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
        BattleWindowComponent_EndCall___ctor(
          v7,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__171_0__,
          0LL);
        if ( v6 )
        {
          BattleFieldConfConponent__Open(v6, v7, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1C22094(perf, method);
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
    sub_1C22094(win_Menu, v4);
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
  UIAtlas_o *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *klass; // x20
  System_String_o *v7; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v9; // x20

  if ( (byte_4BDF5D2 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattlePerformanceMaster_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C21E38(&StringLiteral_3256/*"Battle/Common"*/);
    sub_1C21E38(&StringLiteral_3274/*"BattleAssetUIAtlas"*/);
    byte_4BDF5D2 = 1;
  }
  mAtlas = (UIAtlas_o *)BattlePerformanceMaster_TypeInfo;
  if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
    mAtlas = (UIAtlas_o *)BattlePerformanceMaster_TypeInfo;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_18;
  klass = (System_String_o *)mAtlas[1].fields.mSpriteIndices->klass;
  v7 = System_Int32__ToString((int)data + 112, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_63115476(klass, v7, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_18;
  v9 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_18;
  if ( UIAtlas__GetSprite(mAtlas, v9, 0LL) )
    goto LABEL_16;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mAtlas = (UIAtlas_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3256/*"Battle/Common"*/, 0LL);
  if ( !mAtlas
    || (mAtlas = (UIAtlas_o *)AssetData__GetObject_object__49880776(
                                (AssetData_o *)mAtlas,
                                (System_String_o *)StringLiteral_3274/*"BattleAssetUIAtlas"*/,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288)) == 0LL
    || (mAtlas = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)mAtlas,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_18:
    sub_1C22094(mAtlas, method);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, mAtlas, 0LL);
LABEL_16:
  mAtlas = (UIAtlas_o *)this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_18;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v9, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF618 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3598/*"CLICK_FIELD"*/);
    byte_4BDF618 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3598/*"CLICK_FIELD"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDF625 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_OnCompShowRetireSA__);
    sub_1C21E38(&Method_BattlePerformanceMaster_ShowRetireSA__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF625 = 1;
  }
  v3 = Method_BattlePerformanceMaster_ShowRetireSA__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_ShowRetireSA__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_ShowRetireSA__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  win_Retire = this->fields.win_Retire;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_1C22094(v7, v8);
  BattleRetireWindowComponent__Open(win_Retire, v6, 0LL);
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
  if ( (byte_4BDF5F6 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_3446/*"CANCEL"*/);
    byte_4BDF5F6 = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3446/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformanceMaster__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v7);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_16;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_16:
        sub_1C22094(this, skillInfo);
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
  System_Collections_Generic_Dictionary_int__object__o *battleItemEffectObject; // x0
  Il2CppObject *v6; // x21
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_Object_o *battleItemIcon; // x22
  const MethodInfo *v9; // x4
  struct System_Collections_Generic_Dictionary_int__Coroutine__o *battleItemEffectCoroutines; // x22
  System_Collections_IEnumerator_o *v11; // x0
  Il2CppObject *v12; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF62F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF62F = 1;
  }
  v12 = 0LL;
  value = 0LL;
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectObject;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
  {
    v6 = value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
    {
      battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)value;
      if ( !value )
        goto LABEL_29;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)value, 0LL) )
        return;
    }
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectObject;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_32B6ED4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_32B6ED4 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
  }
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &v12,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
  {
    return;
  }
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleItemIcon, 0LL, 0LL) )
  {
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemIcon;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    battleItemUi = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)battleItemEffectObject,
                                             0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(battleItemUi, 0LL, 0LL) )
    battleItemUi = (UnityEngine_Object_o *)this->fields.master_root;
  battleItemEffectCoroutines = this->fields.battleItemEffectCoroutines;
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  v11 = BattlePerformanceMaster__DelayEffect(
          this,
          id,
          (UnityEngine_GameObject_o *)battleItemUi,
          1,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v9);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                                                     (UnityEngine_MonoBehaviour_o *)this,
                                                                                     v11,
                                                                                     0LL);
  if ( !battleItemEffectCoroutines )
LABEL_29:
    sub_1C22094(battleItemEffectObject, *(_QWORD *)&id);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)battleItemEffectCoroutines,
    id,
    (Il2CppObject *)battleItemEffectObject,
    (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
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
  Il2CppObject *Component_object; // x20
  const MethodInfo *v10; // x4
  int v11; // s0
  float v13; // s1
  float v14; // s1
  System_Collections_IEnumerator_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *klass; // x20
  System_Collections_IEnumerator_o *v18; // x1

  v8 = this;
  if ( (byte_4BDF631 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_24485/*"treasure"*/);
    byte_4BDF631 = 1;
  }
  if ( id )
  {
    if ( !parentObj )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         parentObj,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_24;
      this = (BattlePerformanceMaster_o *)Component_object[2].klass;
      if ( !this )
        goto LABEL_24;
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v14 = v13 + 0.22;
    }
    else
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(parentObj, 0LL);
      if ( !this )
        goto LABEL_24;
      this = (BattlePerformanceMaster_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)this,
                                            (System_String_o *)StringLiteral_24485/*"treasure"*/,
                                            0LL);
      if ( !this )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    }
    v15 = BattlePerformanceMaster__DelayEffect(v8, id, parentObj, 0, *(UnityEngine_Vector3_o *)&v11, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v8, v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( Component_object )
      {
        this = (BattlePerformanceMaster_o *)Component_object[2].klass;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          klass = (UnityEngine_GameObject_o *)Component_object[2].klass;
          if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo);
          v18 = BattlePerformanceMaster__DelayShowItem(klass, waitTime, v16);
          UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v8, v18, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1C22094(this, parentObj);
    }
  }
}


void __fastcall BattlePerformanceMaster__StartNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *effectAfterNoblePhantasmCoroutine; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  int32_t size; // w2
  int v14; // w9

  if ( (byte_4BDF62D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    byte_4BDF62D = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70855504(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0LL);
    this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    delayAfterNoblePhantasmBuffData = this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_1C22094(v10, v11);
    size = delayAfterNoblePhantasmBuffData->fields._size;
    v14 = delayAfterNoblePhantasmBuffData->fields._version + 1;
    delayAfterNoblePhantasmBuffData->fields._size = 0;
    delayAfterNoblePhantasmBuffData->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)delayAfterNoblePhantasmBuffData->fields._items, 0, size, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__UpdateBattleItemUi(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v5; // x19
  System_String_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BDF62B & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    byte_4BDF62B = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v3);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0LL, 0LL) )
  {
    v5 = this->fields.battleItemCountLabel;
    Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !Instance || (Instance = BasicHelper__ToCommaString(*(_DWORD *)&Instance->fields._firstChar, 0LL), !v5) )
      sub_1C22094(Instance, v7);
    UILabel__set_text(v5, Instance, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  PlayMakerFSM_o *perf; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDF5F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_UseSkill__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3446/*"CANCEL"*/);
    byte_4BDF5F3 = 1;
  }
  isOpenOtherWindow = 0;
  perf = (PlayMakerFSM_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_23;
  if ( BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0LL) )
  {
    perf = this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_3446/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_23:
    sub_1C22094(perf, playSe);
  }
  if ( playSe )
  {
    v12 = Method_BattlePerformanceMaster_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_UseSkill__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_UseSkill__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.actSkillObject,
    (int64_t)useSkillObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_23;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v17) )
  {
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v18);
    if ( isOpenOtherWindow )
    {
      perf = (PlayMakerFSM_o *)this->fields.perf;
      if ( !perf )
        goto LABEL_23;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)perf,
                                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0LL, 0LL) )
      {
        perf = (PlayMakerFSM_o *)this->fields.perf;
        if ( !perf )
          goto LABEL_23;
        perf = (PlayMakerFSM_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow((BattlePerformance_o *)perf, 0LL);
        if ( !perf )
          goto LABEL_23;
        LOBYTE(perf[2].fields.m_CancellationTokenSource) = 0;
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF62C & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_TypeInfo);
    byte_4BDF62C = 1;
  }
  v3 = sub_1C22084(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_TypeInfo);
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191___ctor(
    (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  BattleSelectServantWindow_o *SelectSvtWindow; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  System_Func_int__bool__o *v17; // x23
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int32_t v25; // w0
  const MethodInfo *v26; // x2
  bool v27; // w8

  v6 = this;
  if ( (byte_4BDF5F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    sub_1C21E38(&Method_Target_isChoose__);
    sub_1C21E38(&Method_Target_isSubChoose__);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5F4 = 1;
  }
  if ( !skillInfo )
    goto LABEL_19;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v8 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v8, 0LL, Method_Target_isSubChoose__, 0LL);
  if ( !BasicHelper__Any_int__49916656(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760) )
  {
    v17 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v17, 0LL, Method_Target_isChoose__, 0LL);
    if ( BasicHelper__Any_int__49916656(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760) )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( this )
      {
        BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
        this = (BattlePerformanceMaster_o *)v6->fields.perf;
        if ( this )
        {
          SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)this, 0LL);
          v6->fields.selectMSWindow = SelectMainSubSvtWindow;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v6->fields.selectMSWindow,
            (int64_t)SelectMainSubSvtWindow,
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
          v27 = 0;
          goto LABEL_18;
        }
      }
    }
LABEL_19:
    sub_1C22094(this, skillInfo);
  }
  this = (BattlePerformanceMaster_o *)v6->fields.perf;
  if ( !this )
    goto LABEL_19;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)this, 0LL);
  this = (BattlePerformanceMaster_o *)v6->fields.perf;
  if ( !this )
    goto LABEL_19;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow((BattlePerformance_o *)this, 0LL);
  v6->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v6->fields.skillselectSvtWindow,
    (int64_t)SelectSvtWindow,
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


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__172_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF636 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF636 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__171_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF635 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF635 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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

  if ( (byte_4BDF5FC & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5FC = 1;
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
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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
    sub_1C22094(selectMSWindow, flg);
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
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BDF602 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_changeShortSkill__);
    byte_4BDF602 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_1C22094(data, method);
  v4 = Method_BattlePerformanceMaster_changeShortSkill__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeShortSkill__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_changeShortSkill__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v6);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BDF606 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_changeSkipDead__);
    byte_4BDF606 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_1C22094(data, method);
  v4 = Method_BattlePerformanceMaster_changeSkipDead__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeSkipDead__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_changeSkipDead__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
  BattlePerformanceMaster__updateSkipDead(this, v6);
}


void __fastcall BattlePerformanceMaster__changeTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4BDF604 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_changeTdConstantVelocity__);
    byte_4BDF604 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_1C22094(data, method);
  v4 = Method_BattlePerformanceMaster_changeTdConstantVelocity__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeTdConstantVelocity__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_changeTdConstantVelocity__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v6);
}


void __fastcall BattlePerformanceMaster__checkCommandSpellTarget(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4BDF5E5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v4);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL),
        (Instance = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_1C22094(Instance, v4);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 *v13; // x8
  int64_t v14; // x1

  v2 = this;
  if ( (byte_4BDF5E8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_9435/*"NG"*/);
    byte_4BDF5E8 = 1;
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
      v13 = &StringLiteral_9435/*"NG"*/;
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
        v14 = (int64_t)v2->fields.tmp_useSkill;
        v2->fields.useSkillObject = (struct BattleLogic_UseSkillObject_o *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.useSkillObject, v14, v7, v8, v9, v10, v11, v12);
        this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
        if ( this )
        {
          v13 = &StringLiteral_12392/*"SKIP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1C22094(this, method);
  }
LABEL_15:
  this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
  if ( !this )
    goto LABEL_22;
  v13 = &StringLiteral_5604/*"END_PROC"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v13, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v5; // x9

  if ( (byte_4BDF611 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_9811/*"OK"*/);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    byte_4BDF611 = 1;
  }
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(logic, method);
  }
  v5 = &StringLiteral_9811/*"OK"*/;
  if ( ((unsigned __int8)logic & 1) == 0 )
    v5 = &StringLiteral_12392/*"SKIP"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5ED & 1) == 0 )
  {
    sub_1C21E38(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C21E38(&StringLiteral_3582/*"CLICK_BOOST"*/);
    byte_4BDF5ED = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C22084(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.tmp_useSkill = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tmp_useSkill, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3582/*"CLICK_BOOST"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  BattleLogic_UseSkillObject_o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  PlayMakerFSM_o *logic; // x0

  v6 = isLong;
  if ( (byte_4BDF5F2 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C21E38(&StringLiteral_3618/*"CLICK_SKILLICON"*/);
    byte_4BDF5F2 = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_1C22084(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0LL);
  this->fields.tmp_useSkill = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tmp_useSkill, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = v6;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0LL) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3618/*"CLICK_SKILLICON"*/, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(logic, v14);
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5DD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5586/*"END_CLOSEALL"*/);
    byte_4BDF5DD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5586/*"END_CLOSEALL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF617 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF617 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4BDF601 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF601 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5DE & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5DE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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
  if ( (byte_4BDF5DA & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5DA = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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
  if ( (byte_4BDF5E2 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5E2 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF614 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF614 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF623 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF623 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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
  if ( (byte_4BDF5DC & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5DC = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4BDF5FF & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5FF = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4BDF5D8 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5D8 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5E0 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5E0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
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

  if ( (byte_4BDF620 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF620 = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL);
  if ( !closeBuffData && v8 )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !perf )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(perf, 0, 0LL);
  }
  if ( closeBuffData )
  {
    this->fields.isMasterBuffEffectPlaying = 0;
  }
  else
  {
    closeBuffData = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_1C22084(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    System_Object___ctor((Il2CppObject *)closeBuffData, 0LL);
    perf = (UnityEngine_Behaviour_o *)this->fields.perf;
    if ( !perf )
      goto LABEL_26;
    perf = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)perf, 0LL);
    if ( !closeBuffData )
      goto LABEL_26;
    closeBuffData->fields.isRootActive = (unsigned __int8)perf & 1;
    *(_WORD *)&closeBuffData->fields.isMenuBtnActive = 257;
    closeBuffData->fields.isSkillBtnActive = 1;
  }
  perf = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isMenuBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSpellBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.skillBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isSkillBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, closeBuffData->fields.isRootActive, 0LL);
  if ( !widget )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_26;
    widget = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)perf,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_26:
    sub_1C22094(perf, v9);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF621 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_TypeInfo);
    byte_4BDF621 = 1;
  }
  v3 = sub_1C22084(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_TypeInfo);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDF5FD & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF5FD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_1C22094(Instance, v5);
  }
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF609 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12493/*"START_TAC"*/);
    byte_4BDF609 = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12493/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_1C22094(0LL, method);
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
    sub_1C22094(data, method);
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
    sub_1C22094(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_1C22094(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL);
}


void __fastcall BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 data; // x0
  struct BattleData_o *v4; // x8
  int32_t v5; // w20
  int32_t v6; // w8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleData_o *v13; // x8
  const MethodInfo *v14; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v16; // x9
  struct BattleData_o *v17; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w26
  int max_length; // w8
  __int64 v22; // x22
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t v28; // w22
  UnityEngine_Component_o *v29; // x27
  int v30; // w28
  Il2CppObject *skillIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *v33; // x24
  UnityEngine_Transform_o *v34; // x25
  UnityEngine_Transform_o *v35; // x25
  struct BattlePerformance_o *v36; // x8
  struct BattleData_o *v37; // x8
  float skillIconOffset; // s11
  float v39; // s11
  struct BattleData_o *v40; // x8
  UISprite_o *skillIconSplit; // x24
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  int64_t v51; // x1
  Il2CppClass **v52; // x0
  System_Object_array *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct BattleData_o *v60; // x8
  struct BattleData_o *v61; // x8
  struct BattleData_o *v62; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v64; // x1
  int32_t v65; // w20
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x1
  char v68; // [xsp+8h] [xbp-88h]
  int32_t overwriteImageId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF5D0 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_BattleItemData__get_Instance__);
    sub_1C21E38(&StringLiteral_23778/*"skill_partition"*/);
    sub_1C21E38(&StringLiteral_19956/*"frame_master_bg_disable"*/);
    byte_4BDF5D0 = 1;
  }
  overwriteImageId = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_99;
  data = BattleData__getMasterEquipId((BattleData_o *)data, 0LL);
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_99;
  v5 = data;
  data = (__int64)v4->fields.quest_ent;
  if ( !data )
    goto LABEL_99;
  if ( QuestEntity__HasFlag((QuestEntity_o *)data, 0x100000000LL, 0LL) )
  {
    data = (__int64)this->fields.userGrade;
    if ( !data )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    goto LABEL_22;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_99;
  overwriteImageId = BattleData__GetMasterIconImageId((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_99;
  BattleData__GetEquipAddImageId((BattleData_o *)data, &overwriteImageId, 0LL);
  v6 = overwriteImageId;
  if ( !overwriteImageId )
  {
    data = (__int64)this->fields.data;
    if ( !data )
      goto LABEL_99;
    overwriteImageId = BattleData__GetOverWriteMasterImageId((BattleData_o *)data, 0LL);
    if ( !overwriteImageId )
      goto LABEL_17;
    data = (__int64)this->fields.userGrade;
    if ( !data )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
    v6 = overwriteImageId;
  }
  if ( v6 == -1 )
  {
LABEL_22:
    data = (__int64)this->fields.master_root;
    if ( !data )
      goto LABEL_99;
    data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)data,
                      (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_99;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19956/*"frame_master_bg_disable"*/, 0LL);
    goto LABEL_25;
  }
LABEL_17:
  data = (__int64)this->fields.face_root;
  if ( !data )
    goto LABEL_99;
  data = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)data, 0LL);
  if ( !data )
    goto LABEL_99;
  data = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)data, 0LL);
  if ( !(_DWORD)data )
  {
    v13 = this->fields.data;
    if ( !v13 )
      goto LABEL_99;
    MasterFaceManager__CreatePrefab_39162716(
      this->fields.face_root,
      1,
      v13->fields.battleGenderType,
      v5,
      2,
      0LL,
      overwriteImageId,
      0LL);
    BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v14);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_99;
  v16 = perf->fields.data;
  if ( !v16 )
    goto LABEL_99;
  if ( v16->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_99;
  }
  v17 = perf->fields.data;
  if ( !v17 )
    goto LABEL_99;
  masterSkillInfo = v17->fields.masterSkillInfo;
  if ( !masterSkillInfo )
    goto LABEL_99;
  skillIcon = this->fields.skillIcon;
  size = masterSkillInfo->fields._size;
  if ( skillIcon )
  {
    max_length = skillIcon->max_length;
    if ( size == max_length )
      goto LABEL_88;
    if ( max_length >= 1 )
    {
      v22 = 0LL;
      do
      {
        if ( (unsigned int)v22 >= max_length )
          sub_1C2209C(data, method);
        data = (__int64)skillIcon->m_Items[v22];
        if ( !data )
          goto LABEL_99;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v22 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillIcon, 0LL, v7, v8, v9, v10, v11, v12);
  }
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_99;
  data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
  data = (__int64)this->fields.skillIconSplit;
  if ( !data )
    goto LABEL_99;
  data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data )
    goto LABEL_99;
  data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
  if ( !data )
    goto LABEL_99;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)data, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v27 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  if ( size >= 1 )
  {
    v68 = 0;
    v28 = 0;
    v29 = 0LL;
    v30 = -1;
    while ( 1 )
    {
      data = (__int64)this->fields.win_Skill;
      if ( !data )
        goto LABEL_99;
      skillIconPrefab = (Il2CppObject *)this->fields.skillIconPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (__int64)UnityEngine_Object__Instantiate_object__50551272(
                        skillIconPrefab,
                        transform,
                        (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_99;
      v33 = (UnityEngine_Component_o *)data;
      data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      v34 = (UnityEngine_Transform_o *)data;
      if ( !byte_4BD6BB6 )
      {
        data = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v34 )
        goto LABEL_99;
      UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      data = (__int64)UnityEngine_Component__get_transform(v33, 0LL);
      v35 = (UnityEngine_Transform_o *)data;
      if ( !byte_4BD6BB1 )
      {
        data = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      if ( !v35 )
        goto LABEL_99;
      UnityEngine_Transform__set_localEulerAngles(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v36 = this->fields.perf;
      if ( !v36 )
        goto LABEL_99;
      v37 = v36->fields.data;
      if ( !v37 )
        goto LABEL_99;
      data = (__int64)v37->fields.masterSkillInfo;
      if ( !data )
        goto LABEL_99;
      skillIconOffset = this->fields.skillIconOffset;
      data = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)data,
                        v28,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !data )
        goto LABEL_99;
      v39 = x + (float)(skillIconOffset * (float)(size + v30));
      if ( *(_BYTE *)(data + 84) )
        v29 = v33;
      if ( *(_BYTE *)(data + 84) )
      {
        v40 = this->fields.data;
        if ( !v40 )
          goto LABEL_99;
        if ( !v40->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v68 & 1) == 0 )
          {
            data = (__int64)this->fields.skillIconSplit;
            if ( !data )
              goto LABEL_99;
            data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
            if ( !data )
              goto LABEL_99;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
            skillIconSplit = this->fields.skillIconSplit;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            data = AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_23778/*"skill_partition"*/, 0LL);
          }
          v33 = v29;
          v68 = 1;
          v39 = v39 - this->fields.skillIconSplitSpace;
        }
      }
      if ( !v33 )
        goto LABEL_99;
      data = (__int64)UnityEngine_Component__get_transform(v33, 0LL);
      if ( !data )
        goto LABEL_99;
      v71.fields.x = v39;
      v71.fields.y = y;
      v71.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v71, 0LL);
      data = (__int64)UnityEngine_Component__GetComponent_object_(
                        v33,
                        (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v27 )
        goto LABEL_99;
      items = v27->fields._items;
      v49 = Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__;
      ++v27->fields._version;
      if ( !items )
        goto LABEL_99;
      v50 = v27->fields._size;
      v51 = data;
      if ( (unsigned int)v50 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          (Il2CppObject *)data,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + v50;
        v27->fields._size = v50 + 1;
        v52[4] = (Il2CppClass *)v51;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v52 + 4), v51, v42, v43, v44, v45, v46, v47);
      }
      ++v28;
      --v30;
      if ( size == v28 )
        goto LABEL_85;
    }
  }
  if ( !v27 )
    goto LABEL_99;
LABEL_85:
  v53 = System_Collections_Generic_List_object___ToArray(
          v27,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = (struct BattleServantSkillIConComponent_array *)v53;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.skillIcon, (int64_t)v53, v54, v55, v56, v57, v58, v59);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data || (data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL)) == 0 )
LABEL_99:
    sub_1C22094(data, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
LABEL_88:
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_99;
  data = (__int64)v60->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  data = QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0LL);
  v61 = this->fields.data;
  this->fields.iconItemNumberDispType = data;
  if ( !v61 )
    goto LABEL_99;
  data = (__int64)v61->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  data = QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0LL);
  v62 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = data;
  if ( !v62 )
    goto LABEL_99;
  data = (__int64)v62->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0LL);
  if ( BattleItemObjectId >= 1 )
  {
    v65 = BattleItemObjectId;
    data = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_99;
    BattleItemData__SetItemId((BattleItemData_o *)data, v65, 0LL);
    BattlePerformanceMaster__InitializeBattleItem(this, v65, v66);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v64);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v67);
  data = (__int64)this->fields.master_root;
  if ( !data )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int64_t v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4BDF60F & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF60F = 1;
  }
  v3 = sub_1C22084(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v3, v4, v5, v6, v7, v8, v9);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v10);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_17;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v13);
  BattlePerformanceMaster__procCloseSkill(this, v14);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Spell;
  if ( !master_root )
    goto LABEL_17;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Menu;
  if ( !master_root )
    goto LABEL_17;
  BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)master_root, 0LL, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_Retire;
  if ( !master_root )
    goto LABEL_17;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
  master_root = (UnityEngine_GameObject_o *)this->fields.warBoard_win_EnemyConf;
  if ( !master_root )
    goto LABEL_17;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0LL, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.win_EnemyConf;
  if ( !master_root )
    goto LABEL_17;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)master_root, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    master_root = (UnityEngine_GameObject_o *)this->fields.fieldConf;
    if ( !master_root )
      goto LABEL_17;
    BattleFieldConfConponent__Close((BattleFieldConfConponent_o *)master_root, 0LL, 0LL);
  }
  master_root = (UnityEngine_GameObject_o *)this->fields.itemListWindow;
  if ( !master_root )
LABEL_17:
    sub_1C22094(master_root, v11);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  int64_t v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1

  if ( (byte_4BDF5D6 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF5D6 = 1;
  }
  v3 = sub_1C22084(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v3, v4, v5, v6, v7, v8, v9);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v10);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v13),
        BattlePerformanceMaster__updateSkillIcon(this, v14),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(master_root, v11);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_4BDF61D & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3608/*"CLICK_MENU"*/);
    byte_4BDF61D = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_1C22094(perf, method);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3608/*"CLICK_MENU"*/, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5F9 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3446/*"CANCEL"*/);
    byte_4BDF5F9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3446/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5F8 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C21E38(&StringLiteral_9811/*"OK"*/);
    byte_4BDF5F8 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C22084(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0LL);
  this->fields.useSkillObject = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.useSkillObject, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, v12);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9811/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v5; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_4BDF61C & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_onClickSpellButton__);
    sub_1C21E38(&StringLiteral_3620/*"CLICK_SPELL"*/);
    byte_4BDF61C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_19;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
    goto LABEL_19;
  perf = (BattlePerformance_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return;
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  perf = (BattlePerformance_o *)data->fields.quest_ent;
  if ( !perf )
    goto LABEL_19;
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3620/*"CLICK_SPELL"*/, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1C22094(perf, method);
  }
LABEL_14:
  v6 = Method_BattlePerformanceMaster_onClickSpellButton__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_onClickSpellButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_onClickSpellButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__onCloseEnemyServantConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF615 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3638/*"CLOSE_CONF"*/);
    byte_4BDF615 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3638/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  BattleSelectServantWindow_o *v13; // x0
  struct BattleSelectServantWindow_o *v14; // x21
  BattleSelectServantWindow_SelectServantCallBack_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v26; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v28; // x1

  if ( (byte_4BDF5E6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_selectedSvt__);
    sub_1C21E38(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4BDF5E6 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_1C22094(0LL, method);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.selectSvtWindow,
    (int64_t)SelectSvtWindow,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v13 = this->fields.selectSvtWindow;
  if ( !v13 )
    sub_1C22094(0LL, v12);
  BattleSelectServantWindow__setUseClose(v13, 1, 0LL);
  v14 = *p_selectSvtWindow;
  v15 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C22084(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v14 )
    sub_1C22094(v16, v17);
  v14->fields.selectCallBack = v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.selectCallBack, (int64_t)v15, v18, v19, v20, v21, v22, v23);
  data = this->fields.data;
  if ( !data )
    sub_1C22094(0LL, v24);
  v26 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v26 )
    sub_1C22094(FieldPlayerServantList, FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v26,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_1C22094(0LL, v28);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleData_o *v26; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v28; // x21
  System_String_o *v29; // x22
  NotificationDialog_ClickDelegate_o *v30; // x23

  if ( (byte_4BDF5FB & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_callBackSelectedMainSub__);
    sub_1C21E38(&Method_BattlePerformanceMaster_endSelectSvtError__);
    sub_1C21E38(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_3023/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/);
    sub_1C21E38(&StringLiteral_3024/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/);
    byte_4BDF5FB = 1;
  }
  data = (char *)this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (char *)BattleData__getSubPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_15;
  if ( *((_QWORD *)data + 3) )
  {
    data = (char *)this->fields.perf;
    if ( data )
    {
      SelectMainSubSvtWindow = BattlePerformance__getSelectMainSubSvtWindow((BattlePerformance_o *)data, 0LL);
      p_selectMSWindow = &this->fields.selectMSWindow;
      this->fields.selectMSWindow = SelectMainSubSvtWindow;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.selectMSWindow,
        (int64_t)SelectMainSubSvtWindow,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      selectMSWindow = this->fields.selectMSWindow;
      v13 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_1C22084(BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v13;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&selectMSWindow->fields.callBack,
          (int64_t)v13,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v26 = this->fields.data;
          *((_QWORD *)data + 19) = v26;
          sub_1C21DDC((PartyOrganizationUtility_o *)(data + 152), (int64_t)v26, v20, v21, v22, v23, v24, v25);
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
LABEL_15:
    sub_1C22094(data, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3024/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3023/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0LL);
  v30 = (NotificationDialog_ClickDelegate_o *)sub_1C22084(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog_31130684(
    (CommonUI_o *)Instance,
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v15; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleSelectServantWindow_o *v22; // x20

  if ( (byte_4BDF5F7 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_selectedSkillSvt__);
    sub_1C21E38(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4BDF5F7 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillselectSvtWindow,
    (int64_t)SelectSvtWindow,
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
  v15 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C22084(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v15,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&skillselectSvtWindow->fields.selectCallBack,
          (int64_t)v15,
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
    sub_1C22094(perf, *(_QWORD *)&skillId);
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
  if ( (byte_4BDF60D & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compCloseALL__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF60D = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  win_Menu = v3->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_19;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_Retire;
  if ( !win_Menu )
    goto LABEL_19;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Skill = v3->fields.win_Skill;
  v9 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v9, (Il2CppObject *)v3, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_19;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v9,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_Spell;
  if ( !win_Menu )
    goto LABEL_19;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.warBoard_win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_19;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v3->fields.win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_19;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)v3->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    win_Menu = (BattleMenuWindowComponent_o *)v3->fields.fieldConf;
    if ( !win_Menu )
      goto LABEL_19;
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
LABEL_19:
    sub_1C22094(win_Menu, v6);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDF5F0 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF5F0 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseBoostSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseBoostSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_1C22094(v7, v8);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v6,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5E3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3655/*"CLOSE_SPELL"*/);
    byte_4BDF5E3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3655/*"CLOSE_SPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v5; // x21

  if ( (byte_4BDF616 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compCloseEnemyConf__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF616 = 1;
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
    v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_1C22094(data, method);
  }
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BDF600 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compCloseMenu__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procCloseMenuWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF600 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseMenuWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procCloseMenuWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0LL);
  BattlePerformanceMaster__proclight(v5, this->fields.menuBtn, 0, v6);
  win_Menu = this->fields.win_Menu;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v8, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_1C22094(v9, v10);
  BattleMenuWindowComponent__Close(win_Menu, v8, 0LL);
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
    sub_1C22094(0LL, v6);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1

  if ( (byte_4BDF5EB & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_CloseSkillConfComp__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procCloseSkillConf__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF5EB = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procCloseSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v6,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_1C22094(perf, v8);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BDF5D9 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compCloseSkillWindow__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procCloseSkillWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF5D9 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procCloseSkillWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0LL);
  BattlePerformanceMaster__proclight(v5, this->fields.skillBtn, 0, v6);
  win_Skill = this->fields.win_Skill;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_1C22094(v9, v10);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v8,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDF5E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compCloseSpellWindow__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procCloseSpellWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF5E1 = 1;
  }
  v3 = Method_BattlePerformanceMaster_procCloseSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSpellWindow__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procCloseSpellWindow__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0LL);
  win_Spell = this->fields.win_Spell;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_1C22094(v7, v8);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v6,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleSkillConfComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4BDF5EE & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF5EE = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&boostSkillConfWindow->fields.target,
          (int64_t)gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v13 = this->fields.boostSkillConfWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v13) )
  {
    sub_1C22094(gameObject, v6);
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

  if ( (byte_4BDF613 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compOpenEnemyConf__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF613 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
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
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_1C22094(perf, method);
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
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  v3 = this;
  if ( (byte_4BDF622 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compOpenItemListWindow__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procOpenItemListWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF622 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)v3->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
  v8 = Method_BattlePerformanceMaster_procOpenItemListWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenItemListWindow__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procOpenItemListWindow__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
  OverwriteAssetSoundName__PlayCommonSe(v9, 9, 0, 0LL);
  perf = (BattlePerformance_o *)v3->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        itemListWindow = v3->fields.itemListWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)v3,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_10:
    sub_1C22094(perf, v6);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v11, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4BDF5DB & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_procOpenMasterMenu__);
    sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF5DB = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
  v4 = Method_BattlePerformanceMaster_procOpenMasterMenu__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMasterMenu__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procOpenMasterMenu__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_9:
    sub_1C22094(perf, method);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  BattlePerformanceMaster_o *v8; // x0
  const MethodInfo *v9; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4BDF5FE & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compOpenMenu__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procOpenMenuWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF5FE = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
  v4 = Method_BattlePerformanceMaster_procOpenMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMenuWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procOpenMenuWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
  BattlePerformanceMaster__proclight(v6, this->fields.skillBtn, 0, v7);
  BattlePerformanceMaster__proclight(v8, this->fields.menuBtn, 1, v9);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        win_Menu = this->fields.win_Menu,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_10:
    sub_1C22094(perf, method);
  }
  BattleMenuWindowComponent__Open(win_Menu, v11, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct BattleSkillConfComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4BDF5E9 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_OpenSkillConfComplete__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF5E9 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&skillConfWindow->fields.target,
          (int64_t)gameObject,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !tmp_useSkill)
    || (gameObject = this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v13 = this->fields.skillConfWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v13) )
  {
    sub_1C22094(gameObject, v6);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v13->klass->vtable._10_Open.method)(
    v13,
    v14,
    v13->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  BattlePerformanceMaster_o *v8; // x0
  const MethodInfo *v9; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4BDF5D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compOpenSkillWindow__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procOpenSkillWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF5D7 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
  v4 = Method_BattlePerformanceMaster_procOpenSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSkillWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procOpenSkillWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
  BattlePerformanceMaster__proclight(v6, this->fields.skillBtn, 1, v7);
  BattlePerformanceMaster__proclight(v8, this->fields.menuBtn, 0, v9);
  win_Skill = this->fields.win_Skill;
  v11 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_9:
    sub_1C22094(perf, method);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v11,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  void *perf; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  BattlePerformanceMaster_o *v8; // x0
  const MethodInfo *v9; // x3
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  struct CommandSpellWindowComponent_o *v11; // x20
  BattleWindowComponent_EndCall_o *v12; // x21

  if ( (byte_4BDF5DF & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_compOpenSpellWindow__);
    sub_1C21E38(&Method_BattlePerformanceMaster_procOpenSpellWindow__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C21E38(&StringLiteral_12468/*"START_CLOSE"*/);
    byte_4BDF5DF = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag((BattlePerformance_o *)perf, 0, 0LL);
  v4 = Method_BattlePerformanceMaster_procOpenSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSpellWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_procOpenSpellWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0, 0LL);
  perf = this->fields.otherFsm;
  if ( !perf )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12468/*"START_CLOSE"*/, 0LL);
  BattlePerformanceMaster__proclight(v6, this->fields.skillBtn, 0, v7);
  BattlePerformanceMaster__proclight(v8, this->fields.menuBtn, 0, v9);
  perf = this->fields.data;
  if ( !perf )
    goto LABEL_12;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell
    || (win_Spell->fields.temporarySpell = *((_DWORD *)perf + 200),
        win_Spell->fields.isUseTemporarySpell = BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0LL),
        v11 = this->fields.win_Spell,
        v12 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo),
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
        (perf = this->fields.win_Skill) == 0LL) )
  {
LABEL_12:
    sub_1C22094(perf, method);
  }
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)perf + 504LL))(
    perf,
    0LL,
    *(_QWORD *)(*(_QWORD *)perf + 512LL));
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__procUseCommandSpell(
        BattlePerformanceMaster_o *this,
        int32_t commandSpellId,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5E4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3630/*"CLICK_USESPELL"*/);
    byte_4BDF5E4 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_1C22094(0LL, *(_QWORD *)&commandSpellId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3630/*"CLICK_USESPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20

  if ( (byte_4BDF610 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF610 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, flg, 0LL);
      return;
    }
LABEL_10:
    sub_1C22094(this, obj);
  }
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  SkillEntity_o *v9; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  BattlePerformanceMaster___c_c *v12; // x8
  System_Action_o *_9__134_0; // x23
  System_String_o *v14; // x22
  Il2CppObject *v15; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDF5FA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__134_0__);
    sub_1C21E38(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_2952/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4BDF5FA = 1;
  }
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  if ( !skillselectSvtWindow )
    goto LABEL_28;
  skillselectSvtWindow = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)skillselectSvtWindow
                                                                                   + 504LL))(
                                   skillselectSvtWindow,
                                   0LL,
                                   *(_QWORD *)(*(_QWORD *)skillselectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_28;
    skillInfo = actSkillObject->fields.skillInfo;
    skillselectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_28;
    skillselectSvtWindow = DataManager__GetMasterData_object_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_28;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v8 )
      goto LABEL_28;
    skillselectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                             v8,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_28;
    v9 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !skillselectSvtWindow || !v9 )
      goto LABEL_28;
    if ( SkillEntity__checkUseTreasure(v9, *((_DWORD *)skillselectSvtWindow + 83), 0LL) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1C22094(skillselectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v11 = (System_String_o *)skillselectSvtWindow;
    v12 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v12 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__134_0 = v12->static_fields->__9__134_0;
    v14 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__134_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattlePerformanceMaster___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__134_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__134_0, v15, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__134_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__134_0 = _9__134_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__134_0,
        (int64_t)_9__134_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( !Instance )
      goto LABEL_28;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v14,
      v11,
      _9__134_0,
      -1,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0LL,
      0.0,
      0LL);
  }
  skillselectSvtWindow = this->fields.perf;
  if ( !skillselectSvtWindow )
    goto LABEL_28;
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
  Il2CppObject *Instance; // x20
  System_String_o *v8; // x21
  BattlePerformanceMaster___c_c *v9; // x8
  System_Action_o *_9__110_0; // x23
  System_String_o *v11; // x22
  Il2CppObject *v12; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDF5E7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_CommandSpellMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__selectedSvt_b__110_0__);
    sub_1C21E38(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3446/*"CANCEL"*/);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_2952/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4BDF5E7 = 1;
  }
  selectSvtWindow = this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_27;
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
    selectSvtWindow,
    0LL,
    *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  selectSvtWindow = this->fields.perf;
  if ( !selectSvtWindow )
    goto LABEL_27;
  BattlePerformance__SetCloseCommandTypeWindow((BattlePerformance_o *)selectSvtWindow, 0LL);
  if ( uniqueId != -1 )
  {
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_27;
    v6 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v6 )
      goto LABEL_27;
    if ( CommandSpellEntity__checkUseTreasure(v6, *((_DWORD *)selectSvtWindow + 83), 0LL) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1C22094(selectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v8 = (System_String_o *)selectSvtWindow;
    v9 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v9 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__110_0 = v9->static_fields->__9__110_0;
    v11 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__110_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattlePerformanceMaster___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v9->static_fields->__9;
      _9__110_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(_9__110_0, v12, Method_BattlePerformanceMaster___c__selectedSvt_b__110_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__110_0 = _9__110_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
        (int64_t)_9__110_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !Instance )
      goto LABEL_27;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v8, _9__110_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
  }
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_3446/*"CANCEL"*/, 0LL);
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

  if ( (byte_4BDF612 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8482/*"LONGPRESS_ENEMY"*/);
    byte_4BDF612 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_1C22094(0LL, *(_QWORD *)&index);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8482/*"LONGPRESS_ENEMY"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  BattlePerformance_o *perf; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4BDF60A & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_showRetireDialog__);
    byte_4BDF60A = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_15;
  BattleLogic__playRetire(logic, 0LL);
  v4 = Method_BattlePerformanceMaster_showRetireDialog__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_showRetireDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
  logic = (BattleLogic_o *)this->fields.win_Menu;
  if ( !logic
    || (BattleMenuWindowComponent__Close((BattleMenuWindowComponent_o *)logic, 0LL, 0LL),
        (logic = (BattleLogic_o *)this->fields.win_Retire) == 0LL)
    || (((void (__fastcall *)(BattleLogic_o *, _QWORD, void *))logic->klass[1]._1.events)(
          logic,
          0LL,
          logic->klass[1]._1.properties),
        (logic = (BattleLogic_o *)this->fields.data) == 0LL)
    || (logic = (BattleLogic_o *)BattleData__isBattleRetreatQuestClear((BattleData_o *)logic, 0LL),
        (perf = this->fields.perf) == 0LL) )
  {
LABEL_15:
    sub_1C22094(logic, method);
  }
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    BattlePerformance__SetScreenEffectMode(perf, 0, 0LL);
  }
  else
  {
    BattlePerformance__effectFadeOut(this->fields.perf, 0LL);
    v7 = Method_BattlePerformanceMaster_showRetireDialog__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster_showRetireDialog__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, 3, 0, 0LL);
    v10 = BattlePerformanceMaster__OpenRetireDialog(this, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF60E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12469/*"START_COM"*/);
    byte_4BDF60E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12469/*"START_COM"*/, 0LL);
}


float __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 delayAfterNoblePhantasmBuffData; // x0
  Il2CppObject *v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject **v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  float v27; // s8
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UnityEngine_Object_o *v38; // x24
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x24
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UnityEngine_Transform_o *v56; // x24
  BattleUIRangeLabel_o *v57; // x24
  BattleServantBuffIconComponent_o *v58; // x24
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  TrackingMoveCtCComponent_o *v62; // x23
  int64_t v63; // x23
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Collections_Generic_List_GameObject__o *masterBuffEffectObjectList; // x8
  int32_t size; // w2
  int v72; // w9
  __int64 v73; // x8
  System_Collections_Generic_IEnumerable_T__o *v74; // x23
  System_Action_int__o *v75; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  Il2CppObject *v78; // x8
  struct UnityEngine_Coroutine_o *v79; // x8
  const MethodInfo *v80; // x1
  System_Collections_IEnumerator_o *v81; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v90; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  UITweener_o *v100; // x19
  EventDelegate_Callback_o *v101; // x21
  int klass_high; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF61E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_int___);
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__1__);
    sub_1C21E38(&BattlePerformanceMaster___c__DisplayClass176_0_TypeInfo);
    sub_1C21E38(&StringLiteral_19226/*"effect/ef_poplabel{0:00}"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF61E = 1;
  }
  v5 = sub_1C22084(BattlePerformanceMaster___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_80;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = masterBuffData;
  v14 = (Il2CppObject **)(v5 + 32);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)masterBuffData, v15, v16, v17, v18, v19, v20);
  delayAfterNoblePhantasmBuffData = *(_QWORD *)(v5 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  v27 = 0.0;
  if ( !BattleActionData_MasterBuffData__IsEffectEnable(
          (BattleActionData_MasterBuffData_o *)delayAfterNoblePhantasmBuffData,
          0LL) )
    return v27;
  if ( this->fields._IsNoblePhantasm_k__BackingField )
  {
    delayAfterNoblePhantasmBuffData = (__int64)this->fields.delayAfterNoblePhantasmBuffData;
    if ( delayAfterNoblePhantasmBuffData )
    {
      v7 = *v14;
      v28 = *(_QWORD *)(delayAfterNoblePhantasmBuffData + 16);
      v29 = Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__;
      ++*(_DWORD *)(delayAfterNoblePhantasmBuffData + 28);
      if ( v28 )
      {
        v30 = *(int *)(delayAfterNoblePhantasmBuffData + 24);
        if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)delayAfterNoblePhantasmBuffData,
            v7,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * v30;
          *(_DWORD *)(delayAfterNoblePhantasmBuffData + 24) = v30 + 1;
          *(_QWORD *)(v31 + 32) = v7;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v7, v21, v22, v23, v24, v25, v26);
        }
        return v27;
      }
    }
    goto LABEL_80;
  }
  delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    masterBuffPopLabelEffect = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_masterBuffPopLabelEffect = &this->fields.masterBuffPopLabelEffect;
    delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(masterBuffPopLabelEffect, 0LL, 0LL);
    if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
    {
      v38 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v38, 0LL);
      *p_masterBuffPopLabelEffect = 0LL;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.masterBuffPopLabelEffect,
        0LL,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    if ( *v14 )
    {
      klass_high = HIDWORD((*v14)[4].klass);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v35, v36, v37);
      v46 = System_String__Format((System_String_o *)StringLiteral_19226/*"effect/ef_poplabel{0:00}"*/, v45, 0LL);
      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Resources__Load_object_(
                                                   v46,
                                                   (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( this->fields.masterBtn )
      {
        v47 = (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData;
        transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v47, transform, 0LL, 0LL);
        this->fields.masterBuffPopLabelEffect = Object;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.masterBuffPopLabelEffect,
          (int64_t)Object,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        delayAfterNoblePhantasmBuffData = (__int64)this->fields.masterBuffPopLabelEffect;
        if ( delayAfterNoblePhantasmBuffData )
        {
          delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                       0LL);
          if ( delayAfterNoblePhantasmBuffData )
          {
            v103.fields.x = 0.0;
            v103.fields.z = 0.0;
            v103.fields.y = -42.0;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
              v103,
              0LL);
            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
            if ( *p_masterBuffPopLabelEffect )
            {
              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                           0LL);
              if ( this->fields.master_root )
              {
                v56 = (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData;
                delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                             this->fields.master_root,
                                                             0LL);
                if ( delayAfterNoblePhantasmBuffData )
                {
                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                                                               0LL);
                  if ( v56 )
                  {
                    UnityEngine_Transform__set_parent(
                      v56,
                      (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                      0LL);
                    delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                    if ( *p_masterBuffPopLabelEffect )
                    {
                      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
                      if ( delayAfterNoblePhantasmBuffData )
                      {
                        v57 = (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData;
                        BattleUIRangeLabel__ParentHasChanged(
                          (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData,
                          0LL);
                        if ( *v14 )
                        {
                          BattleUIRangeLabel__SetAdjustLabelOffset(
                            v57,
                            (System_String_o *)(*v14)[3].monitor,
                            (System_String_o *)StringLiteral_1/*""*/,
                            1,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                          BattleUIRangeLabel__AddLabelDepth(v57, 20, 0LL);
                          if ( *v14 )
                          {
                            BattleUIRangeLabel__CondensedScaleLabel(
                              v57,
                              (int32_t)(*v14)[13].klass,
                              HIDWORD((*v14)[13].klass),
                              0LL);
                            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                            if ( *p_masterBuffPopLabelEffect )
                            {
                              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponentInChildren_object__50333916(
                                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                           1,
                                                                           (const MethodInfo_30008DC *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
                              if ( delayAfterNoblePhantasmBuffData )
                              {
                                v58 = (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData;
                                BattleServantBuffIconComponent__ParentHasChanged(
                                  (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData,
                                  0LL);
                                BattleServantBuffIconComponent__setImageId(v58, 0, 0LL);
                                delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                                if ( *p_masterBuffPopLabelEffect )
                                {
                                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
                                  perf = this->fields.perf;
                                  if ( perf )
                                  {
                                    actorcamera = perf->fields.actorcamera;
                                    uicamera = perf->fields.uicamera;
                                    v62 = (TrackingMoveCtCComponent_o *)delayAfterNoblePhantasmBuffData;
                                    if ( !byte_4BD6BB1 )
                                    {
                                      delayAfterNoblePhantasmBuffData = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                                      byte_4BD6BB1 = 1;
                                    }
                                    if ( v62 )
                                    {
                                      TrackingMoveCtCComponent__Set(
                                        v62,
                                        actorcamera,
                                        uicamera,
                                        0LL,
                                        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                                        0,
                                        0LL);
                                      TrackingMoveCtCComponent__startAct(v62, 0LL);
                                      if ( !this->fields.isMasterBuffEffectPlaying )
                                      {
                                        v63 = sub_1C22084(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
                                        System_Object___ctor((Il2CppObject *)v63, 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        delayAfterNoblePhantasmBuffData = UnityEngine_GameObject__get_activeSelf(
                                                                            (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                            0LL);
                                        if ( !v63 )
                                          goto LABEL_80;
                                        *(_BYTE *)(v63 + 16) = delayAfterNoblePhantasmBuffData & 1;
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v63 + 17) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v63 + 18) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v63 + 19) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0LL);
                                        this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v63;
                                        sub_1C21DDC(
                                          (PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose,
                                          v63,
                                          v64,
                                          v65,
                                          v66,
                                          v67,
                                          v68,
                                          v69);
                                      }
                                      masterBuffEffectObjectList = this->fields.masterBuffEffectObjectList;
                                      if ( masterBuffEffectObjectList )
                                      {
                                        size = masterBuffEffectObjectList->fields._size;
                                        v72 = masterBuffEffectObjectList->fields._version + 1;
                                        masterBuffEffectObjectList->fields._size = 0;
                                        masterBuffEffectObjectList->fields._version = v72;
                                        if ( size >= 1 )
                                          System_Array__Clear(
                                            (System_Array_o *)masterBuffEffectObjectList->fields._items,
                                            0,
                                            size,
                                            0LL);
                                        v73 = *(_QWORD *)(v5 + 32);
                                        *(_DWORD *)(v5 + 24) = 1065353216;
                                        if ( v73 )
                                        {
                                          v74 = *(System_Collections_Generic_IEnumerable_T__o **)(v73 + 72);
                                          v75 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v75,
                                            (Il2CppObject *)v5,
                                            (intptr_t)Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__,
                                            0LL);
                                          BasicHelper__ForEach_int_(
                                            v74,
                                            (System_Action_T__o *)v75,
                                            (const MethodInfo_2F9C448 *)Method_BasicHelper_ForEach_int___);
                                          masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
                                          if ( masterBuffEffectDataClose )
                                          {
                                            if ( masterBuffEffectDataClose->fields.isRootActive )
                                              return *(float *)(v5 + 24);
                                            v78 = *v14;
                                            if ( !*v14 )
                                              goto LABEL_80;
                                            if ( !LOBYTE(v78[13].monitor) )
                                            {
                                              if ( BYTE1(v78[13].monitor) )
                                              {
                                                masterIconFadeCoroutine = this->fields.masterIconFadeCoroutine;
                                                if ( masterIconFadeCoroutine )
                                                  UnityEngine_MonoBehaviour__StopCoroutine_70855504(
                                                    (UnityEngine_MonoBehaviour_o *)this,
                                                    masterIconFadeCoroutine,
                                                    0LL);
                                                v90 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                        this,
                                                        *(float *)(v5 + 24),
                                                        (const MethodInfo *)masterIconFadeCoroutine);
                                                UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                  (UnityEngine_MonoBehaviour_o *)this,
                                                  v90,
                                                  0LL);
                                              }
                                              return *(float *)(v5 + 24);
                                            }
                                            v79 = this->fields.masterIconFadeCoroutine;
                                            this->fields.isMasterBuffEffectPlaying = 1;
                                            if ( v79 )
                                            {
                                              if ( !Component_object )
                                                goto LABEL_80;
                                              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
                                                Component_object,
                                                Component_object->klass->vtable[9].methodPtr,
                                                1.0);
                                              UnityEngine_MonoBehaviour__StopCoroutine_70855504(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                this->fields.masterIconFadeCoroutine,
                                                0LL);
                                              v81 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                      this,
                                                      *(float *)(v5 + 24),
                                                      v80);
                                              started = UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                          (UnityEngine_MonoBehaviour_o *)this,
                                                          v81,
                                                          0LL);
                                              this->fields.masterIconFadeCoroutine = started;
                                              sub_1C21DDC(
                                                (PartyOrganizationUtility_o *)&this->fields.masterIconFadeCoroutine,
                                                (int64_t)started,
                                                v83,
                                                v84,
                                                v85,
                                                v86,
                                                v87,
                                                v88);
                                              return *(float *)(v5 + 24);
                                            }
                                            effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                            p_effectTween = &this->fields.effectTween;
                                            delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(
                                                                                effectTween,
                                                                                0LL,
                                                                                0LL);
                                            if ( (delayAfterNoblePhantasmBuffData & 1) == 0 )
                                              goto LABEL_72;
                                            delayAfterNoblePhantasmBuffData = (__int64)*p_effectTween;
                                            if ( !*p_effectTween )
                                              goto LABEL_80;
                                            delayAfterNoblePhantasmBuffData = UnityEngine_Behaviour__get_enabled(
                                                                                (UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData,
                                                                                0LL);
                                            if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
                                            {
                                              delayAfterNoblePhantasmBuffData = (__int64)*p_effectTween;
                                              if ( !*p_effectTween )
                                                goto LABEL_80;
                                              UnityEngine_Behaviour__set_enabled(
                                                (UnityEngine_Behaviour_o *)delayAfterNoblePhantasmBuffData,
                                                0,
                                                0LL);
                                            }
                                            else
                                            {
LABEL_72:
                                              if ( !Component_object )
                                                goto LABEL_80;
                                              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
                                                Component_object,
                                                Component_object->klass->vtable[9].methodPtr,
                                                0.01);
                                            }
                                            delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
                                            if ( delayAfterNoblePhantasmBuffData )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                0,
                                                0LL);
                                              delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                                              if ( delayAfterNoblePhantasmBuffData )
                                              {
                                                UnityEngine_GameObject__SetActive(
                                                  (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                  0,
                                                  0LL);
                                                delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
                                                if ( delayAfterNoblePhantasmBuffData )
                                                {
                                                  UnityEngine_GameObject__SetActive(
                                                    (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                    0,
                                                    0LL);
                                                  delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
                                                  if ( delayAfterNoblePhantasmBuffData )
                                                  {
                                                    UnityEngine_GameObject__SetActive(
                                                      (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                      1,
                                                      0LL);
                                                    v93 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
                                                    this->fields.effectTween = v93;
                                                    sub_1C21DDC(
                                                      (PartyOrganizationUtility_o *)&this->fields.effectTween,
                                                      (int64_t)v93,
                                                      v94,
                                                      v95,
                                                      v96,
                                                      v97,
                                                      v98,
                                                      v99);
                                                    v100 = (UITweener_o *)this->fields.effectTween;
                                                    if ( v100 )
                                                    {
                                                      v100->fields.method = 6;
                                                      v101 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
                                                      EventDelegate_Callback___ctor(
                                                        v101,
                                                        (Il2CppObject *)v5,
                                                        Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__1__,
                                                        0LL);
                                                      UITweener__SetOnFinished(v100, v101, 0LL);
                                                      return *(float *)(v5 + 24);
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
                }
              }
            }
          }
        }
      }
    }
LABEL_80:
    sub_1C22094(delayAfterNoblePhantasmBuffData, v7);
  }
  return v27;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_4BDF608 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12489/*"START_SKILL"*/);
    byte_4BDF608 = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.typeMetadataHandle)(
          win_Spell,
          0LL,
          win_Spell->klass[1]._1.interopData),
        (win_Spell = this->fields.myFsm) == 0LL) )
  {
    sub_1C22094(win_Spell, *(_QWORD *)&type);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12489/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4BDF5D5 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12493/*"START_TAC"*/);
    byte_4BDF5D5 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12493/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  struct BattleData_o *v4; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x8

  v2 = this;
  if ( (byte_4BDF5D3 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_19951/*"frame_cs_bg_disable"*/);
    byte_4BDF5D3 = 1;
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
    commandSpellIcon = v2->fields.commandSpellIcon;
    if ( commandSpellIcon )
    {
      CommandSpellIconComponent__SetDataBattle(commandSpellIcon, (UserGameEntity_o *)this, v2->fields.data, 0LL);
      return;
    }
LABEL_17:
    sub_1C22094(this, method);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_17;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19951/*"frame_cs_bg_disable"*/, 0LL);
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
  if ( (byte_4BDF603 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BDF603 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skillSkipBtn) == 0LL )
    sub_1C22094(this, method);
  if ( data->fields.systemflg_skipskillconf )
    v4 = &StringLiteral_17818/*"btn_off"*/;
  else
    v4 = &StringLiteral_17819/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v4; // x8
  System_Object_array *v5; // x21
  struct BattleServantSkillIConComponent_array *v6; // x8
  System_Object_array *v7; // x20
  __int64 v8; // x22
  char v9; // w28
  il2cpp_array_size_t v10; // w26
  int v11; // w29
  char v12; // w25
  unsigned __int8 v13; // w27
  struct BattleServantSkillIConComponent_array *v14; // x8
  BattleSkillInfoData_o *v15; // x23
  bool isChargeOK; // w24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppClass **v23; // x0
  struct BattleServantSkillIConComponent_array *v24; // x8
  int m_CancellationTokenSource; // w8
  BattlePerformanceMaster_o *v26; // x22
  unsigned int v27; // w23
  int v28; // w24
  char v29; // w26
  struct System_Threading_CancellationTokenSource_o *v30; // x8
  int v31; // w9
  __int64 v32; // x10
  int v33; // w10
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  BattlePerformanceMaster___c_c *v35; // x0
  System_Predicate_object__o *_9__88_0; // x23
  System_String_o *v37; // x22
  Il2CppObject *v38; // x28
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_array *All_object; // x0
  struct BattleData_o *data; // x8
  BattlePerformanceMaster_o *v48; // x21
  BattlePerformanceMaster_o *v49; // x22
  System_String_o *v50; // x1
  System_String_o *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  BattlePerformanceMaster_o *v56; // x22
  System_String_o *v57; // x1
  float v58; // s8
  BattlePerformanceMaster___c_c *v59; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  System_Predicate_object__o *_9__88_1; // x24
  System_String_o *v62; // x23
  Il2CppObject *v63; // x25
  struct BattlePerformanceMaster___c_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_String_array *v71; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  BattlePerformanceMaster_o *v73; // x20
  unsigned int localPosition; // s0
  unsigned int v75; // s9
  int v76; // s2
  unsigned int v77; // s0
  float v78; // s1
  struct BattleData_o *v79; // x8
  struct BattleData_o *v80; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x1
  int v89; // [xsp+8h] [xbp-78h] BYREF
  int v90; // [xsp+Ch] [xbp-74h] BYREF

  v2 = this;
  if ( (byte_4BDF5D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_FindAll_string___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_string__TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_0__);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_1__);
    sub_1C21E38(&BattlePerformanceMaster___c_TypeInfo);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_2959/*"BATTLE_MASTER_SKILL_CHARGE"*/);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    sub_1C21E38(&StringLiteral_17812/*"btn_master_skill_disable"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_2958/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_9435/*"NG"*/);
    byte_4BDF5D4 = 1;
  }
  v90 = 0;
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)sub_1C21EE0(string___TypeInfo, skillIcon->max_length);
  v4 = v2->fields.skillIcon;
  if ( !v4 )
    goto LABEL_145;
  v5 = (System_Object_array *)this;
  this = (BattlePerformanceMaster_o *)sub_1C21EE0(string___TypeInfo, v4->max_length);
  v6 = v2->fields.skillIcon;
  if ( !v6 )
    goto LABEL_145;
  v7 = (System_Object_array *)this;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.data;
    if ( !this )
      goto LABEL_145;
    if ( (int)v8 >= (signed int)v6->max_length )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v8, 0LL);
    if ( this )
    {
      v14 = v2->fields.skillIcon;
      if ( !v14 )
        goto LABEL_145;
      if ( (unsigned int)v8 >= v14->max_length )
        goto LABEL_146;
      v15 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v14->m_Items[(int)v8];
      if ( !this )
        goto LABEL_145;
      if ( v15->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v15, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
      isChargeOK = BattleSkillInfoData__isChargeOK(v15, 0LL);
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v15, 0LL);
      v90 = (int)this;
      if ( v15->fields.isAdd )
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_918/*"-"*/;
          if ( !v7 )
            goto LABEL_145;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v90, 0LL);
          method = (const MethodInfo *)this;
          if ( !v7 )
            goto LABEL_145;
        }
        if ( v11 >= v7->max_length )
          goto LABEL_146;
        v23 = &v7->obj.klass + v11++;
      }
      else
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_918/*"-"*/;
          if ( !v5 )
            goto LABEL_145;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v90, 0LL);
          method = (const MethodInfo *)this;
          if ( !v5 )
            goto LABEL_145;
        }
        if ( v10 >= v5->max_length )
LABEL_146:
          sub_1C2209C(this, method);
        v23 = &v5->obj.klass + (int)v10++;
      }
      v23[4] = (Il2CppClass *)method;
      v9 |= isChargeOK;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)method, v17, v18, v19, v20, v21, v22);
      v12 |= v90 > 0;
      v13 |= v15->fields.sealedTurn > 0;
    }
    v24 = v2->fields.skillIcon;
    if ( !v24 )
      goto LABEL_145;
    if ( (unsigned int)v8 >= v24->max_length )
      goto LABEL_146;
    this = (BattlePerformanceMaster_o *)v24->m_Items[v8];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0LL);
      v6 = v2->fields.skillIcon;
      ++v8;
      if ( v6 )
        continue;
    }
    goto LABEL_145;
  }
  this = (BattlePerformanceMaster_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_145;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v26 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    while ( 1 )
    {
      if ( v27 >= m_CancellationTokenSource )
        goto LABEL_146;
      this = (BattlePerformanceMaster_o *)*((_QWORD *)&v26->fields.myFsm + (int)v27);
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)BattleServantData__getShortenUserEquipSkill((BattleServantData_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      v30 = this->fields.m_CancellationTokenSource;
      if ( v30 )
      {
        if ( (int)v30 >= 1 )
        {
          v31 = 0;
          do
          {
            v32 = *((_QWORD *)&this->fields.myFsm + v31);
            if ( !v32 )
              goto LABEL_145;
            v33 = *(_DWORD *)(v32 + 28);
            ++v31;
            if ( v28 <= v33 )
              v28 = v33;
          }
          while ( (_DWORD)v30 != v31 );
        }
        v29 = 1;
      }
      m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource;
      if ( (int)++v27 >= m_CancellationTokenSource )
        goto LABEL_52;
    }
  }
  v29 = 0;
  v28 = 0;
LABEL_52:
  skillBtnFlashObject = (UnityEngine_Object_o *)v2->fields.skillBtnFlashObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_145;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9 & 1, 0LL);
  }
  if ( v2->fields.notDispEquipSkillChargeTurn )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatus;
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeRoot;
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    v35 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v35 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__88_0 = (System_Predicate_object__o *)v35->static_fields->__9__88_0;
    v37 = (System_String_o *)StringLiteral_1123/*"/"*/;
    if ( !_9__88_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = BattlePerformanceMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__88_0 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(_9__88_0, v38, Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__88_0 = (struct System_Predicate_string__o *)_9__88_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__88_0,
        (int64_t)_9__88_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    All_object = (System_String_array *)System_Array__FindAll_object_(
                                          v5,
                                          (System_Predicate_T__o *)_9__88_0,
                                          (const MethodInfo_30AB2C0 *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v37, All_object, 0LL);
    data = v2->fields.data;
    if ( !data )
      goto LABEL_145;
    v48 = this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0LL);
    if ( !v2->fields.masterSkillBadStatus )
      goto LABEL_145;
    v49 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillBadStatus, v13 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_145;
    if ( (v13 & 1) != 0 )
      v50 = (System_String_o *)v49;
    else
      v50 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v50, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_2959/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0LL);
    v89 = v28 + 1;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89, v52, v53, v54);
    this = (BattlePerformanceMaster_o *)System_String__Format(v51, v55, 0LL);
    if ( !v2->fields.masterSkillChargeRoot )
      goto LABEL_145;
    v56 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillChargeRoot, v29 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_145;
    v57 = (v29 & 1) != 0 ? (System_String_o *)v56 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v57, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    v58 = ((v13 | (unsigned __int8)v29) & 1) != 0 ? -58.0 : -38.0;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    if ( v11 < 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeLabel;
      if ( !this )
        goto LABEL_145;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v48, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v2->fields.chargeTimeRoot )
        goto LABEL_145;
      v73 = this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v2->fields.chargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_145;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v59 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v2->fields.addSkillAddChargeTimeLabel;
      if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
        v59 = BattlePerformanceMaster___c_TypeInfo;
      }
      _9__88_1 = (System_Predicate_object__o *)v59->static_fields->__9__88_1;
      v62 = (System_String_o *)StringLiteral_1123/*"/"*/;
      if ( !_9__88_1 )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = BattlePerformanceMaster___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v59->static_fields->__9;
        _9__88_1 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_string__TypeInfo);
        System_Predicate_object____ctor(
          _9__88_1,
          v63,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_1__,
          0LL);
        v64 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v64->__9__88_1 = (struct System_Predicate_string__o *)_9__88_1;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v64->__9__88_1, (int64_t)_9__88_1, v65, v66, v67, v68, v69, v70);
      }
      v71 = (System_String_array *)System_Array__FindAll_object_(
                                     v7,
                                     (System_Predicate_T__o *)_9__88_1,
                                     (const MethodInfo_30AB2C0 *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v62, v71, 0LL);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_145;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0LL);
      addSkillAddChargeTimeSplitLabel = v2->fields.addSkillAddChargeTimeSplitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2958/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0LL);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_145;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_145;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v48, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v2->fields.addSkillChargeTimeRoot )
        goto LABEL_145;
      v73 = this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v2->fields.addSkillChargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_145;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_145;
    }
    v75 = localPosition;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    *(UnityEngine_Vector3_o *)(&v76 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    if ( !v73 )
      goto LABEL_145;
    v77 = v75;
    v78 = v58;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v73, *(UnityEngine_Vector3_o *)(&v76 - 2), 0LL);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.data;
  if ( !this )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)BattleData__getBoostSkillInfo((BattleData_o *)this, 0, 0LL);
  if ( !v2->fields.boostSkillIcon )
    goto LABEL_145;
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
  v79 = v2->fields.data;
  if ( !v79 )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)v79->fields.quest_ent;
  if ( !this )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_135;
  v80 = v2->fields.data;
  if ( !v80 )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)v80->fields.quest_ent;
  if ( !this )
    goto LABEL_145;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
  {
LABEL_135:
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17812/*"btn_master_skill_disable"*/, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtn;
      if ( this )
      {
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                              0LL,
                                              0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !ComponentInChildren_object )
            goto LABEL_145;
          v88 = StringLiteral_9435/*"NG"*/;
          ComponentInChildren_object[2].monitor = (void *)StringLiteral_9435/*"NG"*/;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&ComponentInChildren_object[2].monitor,
            v88,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
        }
        this = (BattlePerformanceMaster_o *)v2->fields.skillBtnFlashObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
    }
LABEL_145:
    sub_1C22094(this, method);
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  struct BattleData_o *data; // x8
  __int64 *v4; // x8

  v2 = this;
  if ( (byte_4BDF607 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BDF607 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skipDeadBtn) == 0LL )
    sub_1C22094(this, method);
  if ( data->fields.systemflg_skipDead )
    v4 = &StringLiteral_17819/*"btn_on"*/;
  else
    v4 = &StringLiteral_17818/*"btn_off"*/;
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
  if ( (byte_4BDF605 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17819/*"btn_on"*/);
    this = (BattlePerformanceMaster_o *)sub_1C21E38(&StringLiteral_17818/*"btn_off"*/);
    byte_4BDF605 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.tdConstBtn) == 0LL )
    sub_1C22094(this, method);
  if ( data->fields.systemflg_TdConstantvelocity )
    v4 = &StringLiteral_17819/*"btn_on"*/;
  else
    v4 = &StringLiteral_17818/*"btn_off"*/;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF61F & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster__waitMasterBuffEffect_d__177_TypeInfo);
    byte_4BDF61F = 1;
  }
  v5 = sub_1C22084(BattlePerformanceMaster__waitMasterBuffEffect_d__177_TypeInfo);
  BattlePerformanceMaster__waitMasterBuffEffect_d__177___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor_45268960(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields = (BattlePerformanceMaster_MasterBuffEffectData_Fields)(16843009 * value);
}


void __fastcall BattlePerformanceMaster__DelayEffect_d__194___ctor(
        BattlePerformanceMaster__DelayEffect_d__194_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattlePerformanceMaster__DelayEffect_d__194__MoveNext(
        BattlePerformanceMaster__DelayEffect_d__194_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  float v8; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  bool result; // w0
  int32_t id; // w20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_Transform_o *v24; // x21
  UnityEngine_Transform_o *v25; // x21
  float v26; // s0
  float v27; // s1
  float v28; // s2
  _QWORD *v29; // x0
  struct EffectEntity_o *effectEnt_5__2; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF639 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattlePerformanceMaster__DelayEffect_d__194_MoveNext__);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C21E38(&StringLiteral_3253/*"Battle"*/);
    byte_4BDF639 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_36;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_325BE14 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_36;
    v8 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v8 > 0.0 )
    {
      v9 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v9, v8, 0LL);
      this->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v9, v11, v12, v13, v14, v15, v16);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  id = this->fields.id;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  Instance = (DataManager_o *)BattleEffectUtility__getEffectObjectSafe(id, 0LL, 1, 1.0, 0LL);
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
  v31.fields.z = v28 + this->fields.pos.fields.z;
  v31.fields.y = v27 + this->fields.pos.fields.y;
  v31.fields.x = v26 + this->fields.pos.fields.x;
  UnityEngine_Transform__set_localPosition(v25, v31, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v32, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v33.fields.x = 1.0;
  v33.fields.y = 1.0;
  v33.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v33, 0LL);
  UnityEngine_GameObject__SetActive(v23, 1, 0LL);
  Instance = (DataManager_o *)this->fields._effectEnt_5__2;
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v29 = Method_BattlePerformanceMaster__DelayEffect_d__194_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster__DelayEffect_d__194_MoveNext__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster__DelayEffect_d__194_MoveNext__);
    Instance = (DataManager_o *)sub_1C21E1C(v29, v29[4]);
    effectEnt_5__2 = this->fields._effectEnt_5__2;
    if ( !effectEnt_5__2 )
      goto LABEL_36;
    Instance = (DataManager_o *)OverwriteAssetSoundName__PlaySe_39859480(
                                  (System_Reflection_MethodBase_o *)Instance,
                                  (System_String_o *)StringLiteral_3253/*"Battle"*/,
                                  effectEnt_5__2->fields.se,
                                  1.0,
                                  0LL,
                                  0,
                                  0LL);
  }
  if ( this->fields.checkObject )
  {
    if ( _4__this )
    {
      Instance = (DataManager_o *)_4__this->fields.battleItemEffectObject;
      if ( Instance )
      {
        System_Collections_Generic_Dictionary_int__object___set_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)Instance,
          this->fields.id,
          (Il2CppObject *)v23,
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_36:
    sub_1C22094(Instance, v6);
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayEffect_d__194__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayEffect_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__DelayEffect_d__194__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayEffect_d__194_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceMaster__DelayEffect_d__194_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayEffect_d__194__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayEffect_d__194_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__DelayEffect_d__194__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayEffect_d__194_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__DelayShowItem_d__196___ctor(
        BattlePerformanceMaster__DelayShowItem_d__196_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__DelayShowItem_d__196__MoveNext(
        BattlePerformanceMaster__DelayShowItem_d__196_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v5; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  UnityEngine_GameObject_o *obj; // x0

  if ( (byte_4BDF63A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDF63A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = this->fields.obj;
    if ( !obj )
      sub_1C22094(0LL, method);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    goto LABEL_8;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayShowItem_d__196__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__DelayShowItem_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__DelayShowItem_d__196__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__DelayShowItem_d__196_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceMaster__DelayShowItem_d__196_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__DelayShowItem_d__196__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__DelayShowItem_d__196_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__DelayShowItem_d__196__System_IDisposable_Dispose(
        BattlePerformanceMaster__DelayShowItem_d__196_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__OpenRetireDialog_d__152___ctor(
        BattlePerformanceMaster__OpenRetireDialog_d__152_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__OpenRetireDialog_d__152__MoveNext(
        BattlePerformanceMaster__OpenRetireDialog_d__152_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceMaster__OpenRetireDialog_d__152_o *v8; // x19
  int32_t _1__state; // w8
  DefCoroutine_c *v10; // x0
  int64_t milliSecSeven; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v16; // x21

  v8 = this;
  if ( (byte_4BDF63B & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_OnRetireDialog__);
    sub_1C21E38(&NotificationDialog_ClickDelegate_TypeInfo);
    this = (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)sub_1C21E38(&DefCoroutine_TypeInfo);
    byte_4BDF63B = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this
      || (logic = _4__this->fields.logic,
          v16 = (NotificationDialog_ClickDelegate_o *)sub_1C22084(NotificationDialog_ClickDelegate_TypeInfo),
          NotificationDialog_ClickDelegate___ctor(
            v16,
            (Il2CppObject *)_4__this,
            Method_BattlePerformanceMaster_OnRetireDialog__,
            0LL),
          !logic)
      || (BattleLogic__OpenBattleLoseDlg(logic, 1, 1, v16, 0, 0LL),
          (this = (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)_4__this->fields.perf) == 0LL) )
    {
      sub_1C22094(this, method);
    }
    BattlePerformance__SetScreenEffectMode((BattlePerformance_o *)this, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v10 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v10 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (int64_t)v10->static_fields->milliSecSeven;
  v8->fields.__2__current = (Il2CppObject *)milliSecSeven;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(p__2__current, milliSecSeven, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceMaster__OpenRetireDialog_d__152__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__OpenRetireDialog_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__OpenRetireDialog_d__152__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__OpenRetireDialog_d__152_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceMaster__OpenRetireDialog_d__152_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__OpenRetireDialog_d__152__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__OpenRetireDialog_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__OpenRetireDialog_d__152__System_IDisposable_Dispose(
        BattlePerformanceMaster__OpenRetireDialog_d__152_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191___ctor(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191__MoveNext(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *v2; // x20
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x19
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  UnityEngine_WaitForSeconds_o *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_T__TResult__o *v15; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_float__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  const MethodInfo *v35; // x1
  struct System_Collections_Generic_IEnumerator_float__o *v36; // x19
  System_Collections_Generic_IEnumerator_float__c *v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *v54; // x8
  int64_t size; // x2
  int v56; // w9
  UnityEngine_WaitForSeconds_o *v57; // x19
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *v64; // [xsp+18h] [xbp-28h]

  v2 = this;
  v64 = this;
  if ( (byte_4BDF63C & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePerformanceMaster_startMasterBuffEffect__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    sub_1C21E38(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_float__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_float__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *)sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDF63C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1C22094(this, method);
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1C22094(this, method);
      delayAfterNoblePhantasmBuffData = _4__this->fields.delayAfterNoblePhantasmBuffData;
      if ( !delayAfterNoblePhantasmBuffData )
        sub_1C22094(this, method);
      if ( delayAfterNoblePhantasmBuffData->fields._size >= 1 )
      {
        v6 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v6, 0.25, 0LL);
        v64->fields.__2__current = (Il2CppObject *)v6;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v64->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
        result = 1;
        v64->fields.__1__state = 1;
        return result;
      }
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    v15 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    System_Func_object__float____ctor(
      v15,
      (Il2CppObject *)_4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      0LL);
    v16 = System_Linq_Enumerable__Select_object__float_(
            v14,
            (System_Func_TSource__TResult__o *)v15,
            (const MethodInfo_2FE191C *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v18 = v16;
    if ( !v16 )
      sub_1C22094(0LL, v17);
    klass = v16->klass;
    v20 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C73E18(v16, System_Collections_Generic_IEnumerable_float__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
            v18,
            *(_QWORD *)(p_method + 8));
    v64->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v64->fields.__7__wrap1, v23, v24, v25, v26, v27, v28, v29);
    v2 = v64;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1C22094(this, method);
  v31 = _7__wrap1->klass;
  v32 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_24;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_24:
    v34 = sub_1C73E18(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v34)(
          _7__wrap1,
          *(_QWORD *)(v34 + 8)) & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191____m__Finally1(v64, v35);
    v64->fields.__7__wrap1 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v64->fields.__7__wrap1, 0LL, v41, v42, v43, v44, v45, v46);
    if ( !_4__this )
      sub_1C22094(v47, v48);
    v54 = _4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !v54 )
      sub_1C22094(v47, v48);
    size = (unsigned int)v54->fields._size;
    v56 = v54->fields._version + 1;
    v54->fields._size = 0;
    v54->fields._version = v56;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v54->fields._items, 0, size, 0LL);
    _4__this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      size,
      v49,
      v50,
      v51,
      v52,
      v53);
    return 0;
  }
  v36 = v64->fields.__7__wrap1;
  if ( !v36 )
    sub_1C22094(v64, v35);
  v37 = v36->klass;
  v38 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
  {
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v39 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_32:
    v40 = sub_1C73E18(v64->fields.__7__wrap1, System_Collections_Generic_IEnumerator_float__TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v40)(
    v36,
    *(_QWORD *)(v40 + 8));
  v57 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v57, 0.25, 0LL);
  v64->fields.__2__current = (Il2CppObject *)v57;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v64->fields.__2__current, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  result = 1;
  v64->fields.__1__state = 2;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191__System_IDisposable_Dispose(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 2 || _1__state == -3 )
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191____m__Finally1(this, method);
}


void __fastcall BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191____m__Finally1(
        BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_float__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BDF63D & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    byte_4BDF63D = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C73E18(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF637 & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformanceMaster___c_TypeInfo);
    byte_4BDF637 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattlePerformanceMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattlePerformanceMaster___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattlePerformanceMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceMaster___c___ctor(BattlePerformanceMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c___selectedSkillSvt_b__134_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster___c___selectedSvt_b__110_0(
        BattlePerformanceMaster___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattlePerformanceMaster___c___updateSkillIcon_b__88_0(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


bool __fastcall BattlePerformanceMaster___c___updateSkillIcon_b__88_1(
        BattlePerformanceMaster___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass176_0___ctor(
        BattlePerformanceMaster___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass176_0___startMasterBuffEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass176_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v6; // x1
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x20
  struct BattlePerformanceMaster_o *v11; // x8
  UnityEngine_Transform_o *v12; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x21
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Component_object; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  float v24; // s0
  struct BattlePerformanceMaster_o *v25; // x8
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  __int64 v29; // x8

  if ( (byte_4BDF638 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__);
    sub_1C21E38(&StringLiteral_3253/*"Battle"*/);
    byte_4BDF638 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(x, 0LL, 1, 1.0, 0LL);
  _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v8 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[5].klass;
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
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)EffectObjectSafe,
             x,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( EffectEntity__isSe((EffectEntity_o *)Entity, 0LL) )
    {
      v15 = Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__;
      if ( (*((_BYTE *)Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1C21E50(Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__);
      v16 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v15, v15[4]);
      OverwriteAssetSoundName__PlaySe_39859480(
        v16,
        (System_String_o *)StringLiteral_3253/*"Battle"*/,
        (System_String_o *)v14[2].klass,
        1.0,
        0LL,
        0,
        0LL);
    }
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v10,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)EffectObjectSafe & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    v24 = *(float *)&Component_object[2].klass;
    if ( this->fields.waitTime < v24 )
      this->fields.waitTime = v24;
  }
  v25 = this->fields.__4__this;
  if ( !v25
    || (EffectObjectSafe = (UnityEngine_GameObject_o *)v25->fields.masterBuffEffectObjectList) == 0LL
    || (v26 = *(_QWORD *)&EffectObjectSafe->fields.m_CachedPtr,
        v27 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(EffectObjectSafe[1].klass),
        !v26) )
  {
LABEL_31:
    sub_1C22094(EffectObjectSafe, v6);
  }
  klass_low = SLODWORD(EffectObjectSafe[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v26 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)EffectObjectSafe,
      (Il2CppObject *)v10,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = v26 + 8 * klass_low;
    LODWORD(EffectObjectSafe[1].klass) = klass_low + 1;
    *(_QWORD *)(v29 + 32) = v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v10, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall BattlePerformanceMaster___c__DisplayClass176_0___startMasterBuffEffect_b__1(
        BattlePerformanceMaster___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_MasterBuffData_o *masterBuffData; // x8
  struct BattlePerformanceMaster_o *_4__this; // x19
  System_Collections_IEnumerator_o *v5; // x0
  UnityEngine_Coroutine_o *started; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  masterBuffData = this->fields.masterBuffData;
  if ( !masterBuffData )
    goto LABEL_8;
  if ( masterBuffData->fields._IsEnd_k__BackingField )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      method = (const MethodInfo *)_4__this->fields.masterIconFadeCoroutine;
      if ( !method
        || (UnityEngine_MonoBehaviour__StopCoroutine_70855504(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              (UnityEngine_Coroutine_o *)method,
              0LL),
            (_4__this = this->fields.__4__this) != 0LL) )
      {
        v5 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, method);
        started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
        _4__this->fields.masterIconFadeCoroutine = started;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.masterIconFadeCoroutine,
          (int64_t)started,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        return;
      }
    }
LABEL_8:
    sub_1C22094(this, method);
  }
}


void __fastcall BattlePerformanceMaster___c__DisplayClass179_0___ctor(
        BattlePerformanceMaster___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster___c__DisplayClass179_0___endMasterBuffEffectFadeOut_b__0(
        BattlePerformanceMaster___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *_4__this; // x8
  BattlePerformanceMaster___c__DisplayClass179_0_o *v9; // x19

  _4__this = (PartyOrganizationUtility_o *)this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        _4__this[3].klass = 0LL,
        sub_1C21DDC(_4__this + 3, 0LL, v2, v3, v4, v5, v6, v7),
        (this = (BattlePerformanceMaster___c__DisplayClass179_0_o *)v9->fields.__4__this) == 0LL) )
  {
    sub_1C22094(this, method);
  }
  BattlePerformanceMaster__endMasterBuffEffect(
    (BattlePerformanceMaster_o *)this,
    v9->fields.widget,
    (BattlePerformanceMaster_MasterBuffEffectData_o *)this[16].fields.widget,
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
    sub_1C22094(this, x);
  }
  return System_String__StartsWith((System_String_o *)this, v3->fields.flashPrefabName, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179___ctor(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179__MoveNext(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *v2; // x19
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *_8__1; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *v34; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *v36; // x8
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  UnityEngine_Object_o *effectTween; // x19
  TweenAlpha_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  UITweener_o *v51; // x20
  Il2CppObject *v52; // x19
  EventDelegate_Callback_o *v53; // x21

  v2 = this;
  if ( (byte_4BDF63E & 1) == 0 )
  {
    sub_1C21E38(&EventDelegate_Callback_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattlePerformanceMaster___c__DisplayClass179_0__endMasterBuffEffectFadeOut_b__0__);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)sub_1C21E38(&BattlePerformanceMaster___c__DisplayClass179_0_TypeInfo);
    byte_4BDF63E = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)_4__this->fields.master_root;
    if ( !this )
      goto LABEL_26;
    _8__1 = v2->fields.__8__1;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_26;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&_8__1->fields.widget, (int64_t)this, v28, v29, v30, v31, v32, v33);
    v34 = v2->fields.__8__1;
    if ( !v34 )
      goto LABEL_26;
    widget = (UnityEngine_Object_o *)v34->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)UnityEngine_Object__op_Equality(
                                                                             widget,
                                                                             0LL,
                                                                             0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v36 = v2->fields.__8__1;
      if ( !v36 )
        goto LABEL_26;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v36->fields.widget;
      if ( !this )
        goto LABEL_26;
      ((void (__fastcall *)(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_26;
      if ( BattlePerformance__isPositionTactical((BattlePerformance_o *)this, 0LL) )
      {
        _4__this->fields.isMasterBuffEffectPlaying = 0;
        _4__this->fields.masterIconFadeCoroutine = 0LL;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.masterIconFadeCoroutine,
          0LL,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42);
        effectTween = (UnityEngine_Object_o *)_4__this->fields.effectTween;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL) )
        {
          this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)_4__this->fields.effectTween;
          if ( !this )
            goto LABEL_26;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
        }
      }
      else
      {
        v44 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        _4__this->fields.effectTween = v44;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.effectTween,
          (int64_t)v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        v51 = (UITweener_o *)_4__this->fields.effectTween;
        if ( !v51 )
          goto LABEL_26;
        v51->fields.method = 6;
        v52 = (Il2CppObject *)v2->fields.__8__1;
        v53 = (EventDelegate_Callback_o *)sub_1C22084(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v53,
          v52,
          Method_BattlePerformanceMaster___c__DisplayClass179_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        UITweener__SetOnFinished(v51, v53, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (Il2CppObject *)sub_1C22084(BattlePerformanceMaster___c__DisplayClass179_0_TypeInfo);
    System_Object___ctor(v4, 0LL);
    v2->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass179_0_o *)v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v2->fields.__8__1;
    if ( this )
    {
      v17 = (int64_t)v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v17;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, v17, v11, v12, v13, v14, v15, v16);
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v19, v20, v21, v22, v23, v24);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_26:
    sub_1C22094(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179__System_IDisposable_Dispose(
        BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__177___ctor(
        BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__177__MoveNext(
        BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *this,
        const MethodInfo *method)
{
  unsigned int _1__state; // w8
  bool v4; // cf
  bool v5; // zf
  int32_t v6; // w8
  float waitTime; // s8
  BattlePerformanceMaster_o *_4__this; // x0
  Il2CppObject *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  float deltaTime; // s0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

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
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v18, v19, v20, v21, v22, v23);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_1C22094(0LL, method);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      this->fields.__2__current = v9;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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


Il2CppObject *__fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__177__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceMaster__waitMasterBuffEffect_d__177__System_Collections_IEnumerator_Reset(
        BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__177_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__177__System_Collections_IEnumerator_get_Current(
        BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceMaster__waitMasterBuffEffect_d__177__System_IDisposable_Dispose(
        BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *this,
        const MethodInfo *method)
{
  ;
}