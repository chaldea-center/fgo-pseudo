void __fastcall BattlePerformanceMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B191F7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17695/*"btn_master_skill"*/, v8, v9);
    byte_4B191F7 = 1;
  }
  BattlePerformanceMaster_TypeInfo->static_fields->MASTER_SKILL_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_17695/*"btn_master_skill"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePerformanceMaster_TypeInfo->static_fields,
    StringLiteral_17695/*"btn_master_skill"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_Dictionary_int__object__o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_Dictionary_int__object__o *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  int64_t v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  if ( (byte_4B191F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v19, v20);
    byte_4B191F6 = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.masterBuffEffectObjectList,
    (int64_t)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.delayAfterNoblePhantasmBuffData,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v41 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                  v38,
                                                                  v39,
                                                                  v40);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v41,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v41;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleItemEffectObject,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v51 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo,
                                                                  v48,
                                                                  v49,
                                                                  v50);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v51,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v51;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleItemEffectCoroutines,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v61 = sub_1BCAA2C(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v58, v59, v60);
  System_Object___ctor((Il2CppObject *)v61, 0LL);
  *(_DWORD *)(v61 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v61;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v61, v62, v63, v64, v65, v66, v67);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseBoostSkillConfComp(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191B4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191B4 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B191EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    byte_4B191EA = 1;
  }
  win_Retire = this->fields.win_Retire;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v2, v3);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_1BCAA3C(v9, v10);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v8,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191AF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191AF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
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
  if ( (byte_4B191F1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster__DelayEffect_d__194_TypeInfo, *(_QWORD *)&id, parentObj);
    byte_4B191F1 = 1;
  }
  v13 = sub_1BCAA2C(BattlePerformanceMaster__DelayEffect_d__194_TypeInfo, *(_QWORD *)&id, parentObj, checkObject);
  BattlePerformanceMaster__DelayEffect_d__194___ctor((BattlePerformanceMaster__DelayEffect_d__194_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 64) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = id;
  *(_QWORD *)(v13 + 40) = parentObj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)parentObj, v22, v23, v24, v25, v26, v27);
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
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B191F3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster__DelayShowItem_d__196_TypeInfo, method, v3);
    byte_4B191F3 = 1;
  }
  v7 = sub_1BCAA2C(BattlePerformanceMaster__DelayShowItem_d__196_TypeInfo, method, v3, v4);
  BattlePerformanceMaster__DelayShowItem_d__196___ctor((BattlePerformanceMaster__DelayShowItem_d__196_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 40) = obj;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)obj, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v7;
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
  started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_1BCA784(
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

  if ( (byte_4B191F5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, outVector, method);
    byte_4B191F5 = 1;
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, outVector, method);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&outVector->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  outVector->fields.z = z;
  battleItemTr = (UnityEngine_Object_o *)this->fields.battleItemTr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, outVector);
  v9 = UnityEngine_Object__op_Equality(battleItemTr, 0LL, 0LL);
  if ( !v9 )
  {
    v10 = this->fields.battleItemTr;
    if ( !v10 )
      sub_1BCAA3C(0LL, v8);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  __int64 v60; // x1
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  CommandSpellWindowComponent_CloseButtonCallBack_o *v67; // x22
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  struct CommandSpellWindowComponent_o *v74; // x21
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v78; // x22
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct BattleData_o *v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct BattleData_o *v98; // x1
  UnityEngine_Transform_o *v99; // x21
  int v100; // s1
  int v101; // s0
  int v102; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  BattleServantConfConponent_CloseButtonCallBack_o *v107; // x22
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  BattleServantConfConponent_CloseButtonCallBack_o *v118; // x22
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  __int64 v125; // x1
  UnityEngine_Object_o *fieldConf; // x21
  __int64 v127; // x2
  __int64 v128; // x3
  BattleFieldConfConponent_o *v129; // x21
  System_Action_o *v130; // x22
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  struct BattleData_o *v137; // x1
  const MethodInfo *v138; // x1
  const MethodInfo *v139; // x1
  const MethodInfo *v140; // x1
  __int64 v141; // x1
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  AssetData_o *v148; // x21
  int64_t v149; // x1
  UnityEngine_GameObject_o *v150; // x21
  __int64 v151; // x1
  __int64 v152; // x1
  UnityEngine_GameObject_array *Children; // x22
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  System_Func_object__bool__o *v157; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  UnityEngine_Object_o *battleItemUi; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v168; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19192 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, inperf, indata);
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, v9, v10);
    sub_1BCA7E0(&AssetManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BasicHelper_Any_GameObject___, v13, v14);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_OnCloseFieldConf__, v15, v16);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__, v17, v18);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__, v19, v20);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procUseCommandSpell__, v21, v22);
    sub_1BCA7E0(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, v23, v24);
    sub_1BCA7E0(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__, v31, v32);
    sub_1BCA7E0(&BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo, v33, v34);
    sub_1BCA7E0(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_19036/*"ef_masterskill_flash"*/, v39, v40);
    byte_4B19192 = 1;
  }
  v41 = sub_1BCAA2C(BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo, inperf, indata, inlogic);
  BattlePerformanceMaster___c__DisplayClass83_0___ctor((BattlePerformanceMaster___c__DisplayClass83_0_o *)v41, 0LL);
  this->fields.perf = inperf;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inperf, v42, v43, v44, v45, v46, v47);
  this->fields.data = indata;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v48, v49, v50, v51, v52, v53);
  this->fields.logic = inlogic;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v54, v55, v56, v57, v58, v59);
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
  v168 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v168;
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
  win_Spell = this->fields.win_Spell;
  v67 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1BCAA2C(
                                                               CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                               v64,
                                                               v65,
                                                               v66);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v67,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !win_Spell )
    goto LABEL_59;
  win_Spell->fields.callback_close = v67;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&win_Spell->fields.callback_close,
    (int64_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v74 = this->fields.win_Spell;
  v78 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_1BCAA2C(
                                                                   CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo,
                                                                   v75,
                                                                   v76,
                                                                   v77);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v78,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v74 )
    goto LABEL_59;
  v74->fields.callback_use = v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&v74->fields.callback_use, (int64_t)v78, v79, v80, v81, v82, v83, v84);
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
  v91 = this->fields.data;
  *((_QWORD *)skillBtn + 11) = v91;
  sub_1BCA784((PartyOrganizationUtility_o *)(skillBtn + 88), (int64_t)v91, v85, v86, v87, v88, v89, v90);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  v98 = this->fields.data;
  *((_QWORD *)skillBtn + 19) = v98;
  sub_1BCA784((PartyOrganizationUtility_o *)(skillBtn + 152), (int64_t)v98, v92, v93, v94, v95, v96, v97);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_59;
  v99 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0LL);
  if ( !skillBtn )
    goto LABEL_59;
  *(UnityEngine_Vector3_o *)(&v100 - 1) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)skillBtn,
                                            0LL);
  if ( !v99 )
    goto LABEL_59;
  v101 = 0;
  v102 = 0;
  UnityEngine_Transform__set_localPosition(v99, *(UnityEngine_Vector3_o *)(&v100 - 1), 0LL);
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
  v107 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1BCAA2C(
                                                               BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                               v104,
                                                               v105,
                                                               v106);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v107,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_59;
  warBoard_win_EnemyConf->fields.callback_close = v107;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (int64_t)v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
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
  v118 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1BCAA2C(
                                                               BattleServantConfConponent_CloseButtonCallBack_TypeInfo,
                                                               v115,
                                                               v116,
                                                               v117);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v118,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !win_EnemyConf )
    goto LABEL_59;
  win_EnemyConf->fields.callback_close = v118;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&win_EnemyConf->fields.callback_close,
    (int64_t)v118,
    v119,
    v120,
    v121,
    v122,
    v123,
    v124);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v125);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v129 = this->fields.fieldConf;
    v130 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v127, v128);
    System_Action___ctor(v130, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v129 )
      goto LABEL_59;
    BattleFieldConfConponent__Initialize(v129, v130, 0LL);
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
  v137 = this->fields.data;
  *((_QWORD *)skillBtn + 13) = v137;
  sub_1BCA784((PartyOrganizationUtility_o *)(skillBtn + 104), (int64_t)v137, v131, v132, v133, v134, v135, v136);
  BattlePerformanceMaster__updateShortSkill(this, v138);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v139);
  BattlePerformanceMaster__updateSkipDead(this, v140);
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
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v141);
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  if ( !v41 )
    goto LABEL_59;
  v148 = (AssetData_o *)skillBtn;
  v149 = StringLiteral_19036/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v41 + 16) = StringLiteral_19036/*"ef_masterskill_flash"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), v149, v142, v143, v144, v145, v146, v147);
  if ( !v148 )
    goto LABEL_59;
  skillBtn = (char *)AssetData__GetObject_object__49237568(
                       v148,
                       *(System_String_o **)(v41 + 16),
                       (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !this->fields.win_Menu )
    goto LABEL_59;
  v150 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v151);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v150, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v157 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v154, v155, v156);
    System_Func_object__bool____ctor(
      v157,
      (Il2CppObject *)v41,
      Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__,
      0LL);
    if ( !BasicHelper__Any_object__49274176(
            (System_Object_array *)Children,
            (System_Func_T__bool__o *)v157,
            (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_GameObject___) )
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_59;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v150, transform, 0LL, 0LL);
      this->fields.skillBtnFlashObject = Object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.skillBtnFlashObject,
        (int64_t)Object,
        v160,
        v161,
        v162,
        v163,
        v164,
        v165);
    }
    skillBtn = (char *)this->fields.skillBtnFlashObject;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      goto LABEL_53;
    }
LABEL_59:
    sub_1BCAA3C(skillBtn, v60);
  }
LABEL_53:
  this->fields._IsNoblePhantasm_k__BackingField = 0;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v152);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__InitializeBattleItem(
        BattlePerformanceMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *battleItemUi; // x21
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *Instance; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *battleItemIcon; // x20
  UISprite_o *v18; // x20
  int32_t monitor; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B191ED & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&itemId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B191ED = 1;
  }
  entity = 0LL;
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&itemId);
  if ( UnityEngine_Object__op_Inequality(battleItemUi, 0LL, 0LL) )
  {
    Instance = this->fields.battleItemUi;
    if ( !Instance )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(Instance, 1, 0LL);
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(Instance, v14);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleItemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      v18 = this->fields.battleItemIcon;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
      AtlasManager__SetItem(v18, monitor, 0LL);
      goto LABEL_18;
    }
    goto LABEL_20;
  }
LABEL_18:
  BattlePerformanceMaster__UpdateBattleItemUi(this, v14);
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_1BCAA3C(0LL, method);
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191EC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15729/*"Wait"*/, method, v2);
    byte_4B191EC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_1BCAA3C(myFsm, method);
  return System_String__IndexOf_62432796((System_String_o *)myFsm, (System_String_o *)StringLiteral_15729/*"Wait"*/, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191DE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3614/*"CLOSE_CONF"*/, method, v2);
    byte_4B191DE = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3614/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191EB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191EB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191E9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191E9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__OnRetireDialog(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B191CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, method);
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, v4, v5);
    byte_4B191CF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL)
    || (BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9747/*"OK"*/, 0LL),
        (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  BattlePerformance__ResetSoundMask((BattlePerformance_o *)Instance, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191B2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191B2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__OpenRetireDialog(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B191CE & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster__OpenRetireDialog_d__152_TypeInfo, method, v2);
    byte_4B191CE = 1;
  }
  v5 = sub_1BCAA2C(BattlePerformanceMaster__OpenRetireDialog_d__152_TypeInfo, method, v2, v3);
  BattlePerformanceMaster__OpenRetireDialog_d__152___ctor(
    (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191E7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3562/*"CLICK_CKRETIRE"*/, method, v2);
    byte_4B191E7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3562/*"CLICK_CKRETIRE"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191AD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191AD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


bool __fastcall BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattlePerformance_o *perf; // x0
  __int64 v10; // x1
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B191B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__, skillInfo, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v7, v8);
    byte_4B191B8 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_11:
    sub_1BCAA3C(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v15 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1BCAA2C(
                                                                      BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo,
                                                                      v12,
                                                                      v13,
                                                                      v14);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v15;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (int64_t)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  BattleData_o *data; // x0
  BattleMasterImageEntity_o *BattleMasterImageEntity; // x0
  int32_t OverwriteMasterBackgroundId; // w0
  __int64 v17; // x1
  int v18; // w20
  BattleDataDefine_c *v19; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v21; // x19
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int v24; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19194 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_19825/*"frame_master_bg_{0}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v12, v13);
    byte_4B19194 = 1;
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
      v18 = OverwriteMasterBackgroundId;
      v19 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v17);
        v19 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v19->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
      if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/, 0LL) )
      {
        data = (BattleData_o *)this->fields.master_root;
        if ( data )
        {
          data = (BattleData_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            v21 = (UISprite_o *)data;
            UISprite__set_atlas((UISprite_o *)data, atlas, 0LL);
            v24 = v18;
            v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
            v23 = System_String__Format((System_String_o *)StringLiteral_19825/*"frame_master_bg_{0}"*/, v22, 0LL);
            UISprite__set_spriteName(v21, v23, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1BCAA3C(data, method);
      }
    }
  }
}


void __fastcall BattlePerformanceMaster__PlayInterruption(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__PlayInterruption(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__PlayPartyReorganization(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1BCAA3C(0LL, method);
  BattleLogic__PlayPartyReorganization(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *fieldConf; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  BattleFieldConfConponent_o *v12; // x20
  BattleWindowComponent_EndCall_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B191DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__172_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B191DD = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v12 = this->fields.fieldConf;
    v13 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v9, v10, v11);
    BattleWindowComponent_EndCall___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__172_0__,
      0LL);
    if ( !v12 )
      sub_1BCAA3C(v14, v15);
    BattleFieldConfConponent__Close(v12, v13, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattlePerformance_o *perf; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BattleWindowComponent_EndCall_o *v18; // x21

  if ( (byte_4B191DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__171_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v8, v9);
    byte_4B191DC = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_13;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
        v14 = this->fields.fieldConf;
        v18 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v15, v16, v17);
        BattleWindowComponent_EndCall___ctor(
          v18,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__171_0__,
          0LL);
        if ( v14 )
        {
          BattleFieldConfConponent__Open(v14, v18, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(perf, method);
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
    sub_1BCAA3C(win_Menu, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UIAtlas_o *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *klass; // x20
  System_String_o *v18; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v20; // x20

  if ( (byte_4B19195 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattlePerformanceMaster_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v8, v9);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v12, v13);
    byte_4B19195 = 1;
  }
  mAtlas = (UIAtlas_o *)BattlePerformanceMaster_TypeInfo;
  if ( !BattlePerformanceMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo, method);
    mAtlas = (UIAtlas_o *)BattlePerformanceMaster_TypeInfo;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_18;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_18;
  klass = (System_String_o *)mAtlas[1].fields.mSpriteIndices->klass;
  v18 = System_Int32__ToString((int)data + 112, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_62401220(klass, v18, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_18;
  v20 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_18;
  if ( UIAtlas__GetSprite(mAtlas, v20, 0LL) )
    goto LABEL_16;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  mAtlas = (UIAtlas_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  if ( !mAtlas
    || (mAtlas = (UIAtlas_o *)AssetData__GetObject_object__49237568(
                                (AssetData_o *)mAtlas,
                                (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696)) == 0LL
    || (mAtlas = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)mAtlas,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_18:
    sub_1BCAA3C(mAtlas, method);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, mAtlas, 0LL);
LABEL_16:
  mAtlas = (UIAtlas_o *)this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_18;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v20, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191DB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3572/*"CLICK_FIELD"*/, method, v2);
    byte_4B191DB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3572/*"CLICK_FIELD"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BattleRetireWindowComponent_o *win_Retire; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleWindowComponent_EndCall_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B191E8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_OnCompShowRetireSA__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_ShowRetireSA__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B191E8 = 1;
  }
  v8 = Method_BattlePerformanceMaster_ShowRetireSA__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_ShowRetireSA__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_ShowRetireSA__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  win_Retire = this->fields.win_Retire;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_1BCAA3C(v15, v16);
  BattleRetireWindowComponent__Open(win_Retire, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4B191B9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, skillInfo, *(_QWORD *)&selIndex);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v7, v8);
    byte_4B191B9 = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformanceMaster__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v9);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformanceMaster_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_16;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
        sub_1BCAA3C(this, skillInfo);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_int__object__o *battleItemEffectObject; // x0
  Il2CppObject *v16; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_Object_o *battleItemIcon; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x4
  struct System_Collections_Generic_Dictionary_int__Coroutine__o *battleItemEffectCoroutines; // x22
  System_Collections_IEnumerator_o *v24; // x0
  Il2CppObject *v25; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B191F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B191F2 = 1;
  }
  v25 = 0LL;
  value = 0LL;
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectObject;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &value,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
  {
    v16 = value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
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
      (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
  }
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &v25,
         (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
  {
    return;
  }
  battleItemUi = (UnityEngine_Object_o *)this->fields.battleItemUi;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
  if ( UnityEngine_Object__op_Equality(battleItemUi, 0LL, 0LL) )
    battleItemUi = (UnityEngine_Object_o *)this->fields.master_root;
  battleItemEffectCoroutines = this->fields.battleItemEffectCoroutines;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    byte_4B109C1 = 1;
  }
  v24 = BattlePerformanceMaster__DelayEffect(
          this,
          id,
          (UnityEngine_GameObject_o *)battleItemUi,
          1,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v22);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                                                     (UnityEngine_MonoBehaviour_o *)this,
                                                                                     v24,
                                                                                     0LL);
  if ( !battleItemEffectCoroutines )
LABEL_29:
    sub_1BCAA3C(battleItemEffectObject, *(_QWORD *)&id);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)battleItemEffectCoroutines,
    id,
    (Il2CppObject *)battleItemEffectObject,
    (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v17; // x4
  int v18; // s0
  float v20; // s1
  float v21; // s1
  System_Collections_IEnumerator_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *klass; // x20
  System_Collections_IEnumerator_o *v26; // x1

  v8 = this;
  if ( (byte_4B191F4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster_TypeInfo, parentObj, *(_QWORD *)&id);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_24303/*"treasure"*/, v13, v14);
    byte_4B191F4 = 1;
  }
  if ( id )
  {
    if ( !parentObj )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         parentObj,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
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
      *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v21 = v20 + 0.22;
    }
    else
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(parentObj, 0LL);
      if ( !this )
        goto LABEL_24;
      this = (BattlePerformanceMaster_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)this,
                                            (System_String_o *)StringLiteral_24303/*"treasure"*/,
                                            0LL);
      if ( !this )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    }
    v22 = BattlePerformanceMaster__DelayEffect(v8, id, parentObj, 0, *(UnityEngine_Vector3_o *)&v18, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v8, v22, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
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
            j_il2cpp_runtime_class_init_0(BattlePerformanceMaster_TypeInfo, v24);
          v26 = BattlePerformanceMaster__DelayShowItem(klass, waitTime, v24);
          UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v8, v26, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1BCAA3C(this, parentObj);
    }
  }
}


void __fastcall BattlePerformanceMaster__StartNoblePhantasm(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Coroutine_o *effectAfterNoblePhantasmCoroutine; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  int32_t size; // w2
  int v15; // w9

  if ( (byte_4B191F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__, method, v2);
    byte_4B191F0 = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70140136(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0LL);
    this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    delayAfterNoblePhantasmBuffData = this->fields.delayAfterNoblePhantasmBuffData;
    if ( !delayAfterNoblePhantasmBuffData )
      sub_1BCAA3C(v11, v12);
    size = delayAfterNoblePhantasmBuffData->fields._size;
    v15 = delayAfterNoblePhantasmBuffData->fields._version + 1;
    delayAfterNoblePhantasmBuffData->fields._size = 0;
    delayAfterNoblePhantasmBuffData->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)delayAfterNoblePhantasmBuffData->fields._items, 0, size, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__UpdateBattleItemUi(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v9; // x19
  System_String_o *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B191EE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v4, v5);
    byte_4B191EE = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v6);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0LL, 0LL) )
  {
    v9 = this->fields.battleItemCountLabel;
    Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !Instance || (Instance = BasicHelper__ToCommaString(*(_DWORD *)&Instance->fields._firstChar, 0LL), !v9) )
      sub_1BCAA3C(Instance, v11);
    UILabel__set_text(v9, Instance, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  PlayMakerFSM_o *perf; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B191B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_UseSkill__, playSe, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v7, v8);
    byte_4B191B6 = 1;
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
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(perf, playSe);
  }
  if ( playSe )
  {
    v16 = Method_BattlePerformanceMaster_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_UseSkill__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_UseSkill__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 8, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actSkillObject,
    (int64_t)useSkillObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_23;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v21) )
  {
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v22);
    if ( isOpenOtherWindow )
    {
      perf = (PlayMakerFSM_o *)this->fields.perf;
      if ( !perf )
        goto LABEL_23;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)perf,
                                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B191EF & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_TypeInfo, method, v2);
    byte_4B191EF = 1;
  }
  v5 = sub_1BCAA2C(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_TypeInfo, method, v2, v3);
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191___ctor(
    (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Int32_array *ValidTargetTypeArray; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_int__bool__o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  BattleSelectServantWindow_o *SelectSvtWindow; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1
  System_Func_int__bool__o *v30; // x23
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t v38; // w0
  const MethodInfo *v39; // x2
  bool v40; // w8

  v6 = this;
  if ( (byte_4B191B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, skillInfo, isOpenOtherWindow);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_Target_isChoose__, v9, v10);
    sub_1BCA7E0(&Method_Target_isSubChoose__, v11, v12);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v13, v14);
    byte_4B191B7 = 1;
  }
  if ( !skillInfo )
    goto LABEL_19;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v19 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v16, v17, v18);
  System_Func_int__bool____ctor(v19, 0LL, Method_Target_isSubChoose__, 0LL);
  if ( !BasicHelper__Any_int__49273364(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v19,
          (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
  {
    v30 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, skillInfo, v20, v21);
    System_Func_int__bool____ctor(v30, 0LL, Method_Target_isChoose__, 0LL);
    if ( BasicHelper__Any_int__49273364(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v30,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176) )
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
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v6->fields.selectMSWindow,
            (int64_t)SelectMainSubSvtWindow,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
          this = (BattlePerformanceMaster_o *)v6->fields.selectMSWindow;
          if ( this )
          {
            ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
              this,
              this->klass[1]._1.generic_class);
            v38 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
            BattlePerformanceMaster__openSkillSelectSvtWindow(v6, v38, v39);
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
          v40 = 0;
          goto LABEL_18;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(this, skillInfo);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v6->fields.skillselectSvtWindow,
    (int64_t)SelectSvtWindow,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this = (BattlePerformanceMaster_o *)v6->fields.skillselectSvtWindow;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
    this,
    this->klass[1]._1.generic_class);
  BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v6, v29);
LABEL_14:
  v40 = 1;
LABEL_18:
  *isOpenOtherWindow = v40;
}


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__172_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191F9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191F9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__171_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191F8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191F8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
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

  if ( (byte_4B191BF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, flg, *(_QWORD *)&mainUniqueId);
    byte_4B191BF = 1;
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
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
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
    sub_1BCAA3C(selectMSWindow, flg);
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
  __int64 v2; // x2
  BattleData_o *data; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B191C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_changeShortSkill__, method, v2);
    byte_4B191C5 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_1BCAA3C(data, method);
  v5 = Method_BattlePerformanceMaster_changeShortSkill__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeShortSkill__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_changeShortSkill__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v7);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleData_o *data; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B191C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_changeSkipDead__, method, v2);
    byte_4B191C9 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_1BCAA3C(data, method);
  v5 = Method_BattlePerformanceMaster_changeSkipDead__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeSkipDead__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_changeSkipDead__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0LL);
  BattlePerformanceMaster__updateSkipDead(this, v7);
}


void __fastcall BattlePerformanceMaster__changeTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleData_o *data; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B191C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_changeTdConstantVelocity__, method, v2);
    byte_4B191C7 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_1BCAA3C(data, method);
  v5 = Method_BattlePerformanceMaster_changeTdConstantVelocity__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeTdConstantVelocity__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_changeTdConstantVelocity__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 9, 0LL);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v7);
}


void __fastcall BattlePerformanceMaster__checkCommandSpellTarget(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Instance; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B191A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v8, v9);
    byte_4B191A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v11);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL),
        (Instance = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0LL);
}


void __fastcall BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v9; // x8
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v11; // x8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 *v18; // x8
  int64_t v19; // x1

  v3 = this;
  if ( (byte_4B191AB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v4, v5);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v6, v7);
    byte_4B191AB = 1;
  }
  tmp_useSkill = v3->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)tmp_useSkill->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_17;
  v9 = v3->fields.tmp_useSkill;
  if ( !v9 )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)v9->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    this = (BattlePerformanceMaster_o *)v3->fields.myFsm;
    if ( this )
    {
      v18 = &StringLiteral_9373/*"NG"*/;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.systemflg_skipskillconf )
  {
    v11 = v3->fields.tmp_useSkill;
    if ( v11 )
    {
      this = (BattlePerformanceMaster_o *)v11->fields.skillInfo;
      if ( this )
      {
        if ( BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0LL) || v3->fields.isLongTap )
          goto LABEL_15;
        v19 = (int64_t)v3->fields.tmp_useSkill;
        v3->fields.useSkillObject = (struct BattleLogic_UseSkillObject_o *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.useSkillObject, v19, v12, v13, v14, v15, v16, v17);
        this = (BattlePerformanceMaster_o *)v3->fields.myFsm;
        if ( this )
        {
          v18 = &StringLiteral_12310/*"SKIP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1BCAA3C(this, method);
  }
LABEL_15:
  this = (BattlePerformanceMaster_o *)v3->fields.myFsm;
  if ( !this )
    goto LABEL_22;
  v18 = &StringLiteral_5565/*"END_PROC"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v18, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v8; // x9

  if ( (byte_4B191D4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v4, v5);
    byte_4B191D4 = 1;
  }
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(logic, method);
  }
  v8 = &StringLiteral_9747/*"OK"*/;
  if ( ((unsigned __int8)logic & 1) == 0 )
    v8 = &StringLiteral_12310/*"SKIP"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v8, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  BattleLogic_UseSkillObject_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191B0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogic_UseSkillObject_TypeInfo, skillInfo, method);
    sub_1BCA7E0(&StringLiteral_3558/*"CLICK_BOOST"*/, v6, v7);
    byte_4B191B0 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_1BCAA2C(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method, v3);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.tmp_useSkill = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tmp_useSkill, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v15);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3558/*"CLICK_BOOST"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  BattleLogic_UseSkillObject_o *v9; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  PlayMakerFSM_o *logic; // x0

  v6 = isLong;
  if ( (byte_4B191B5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogic_UseSkillObject_TypeInfo, skillInfo, isLong);
    sub_1BCA7E0(&StringLiteral_3594/*"CLICK_SKILLICON"*/, v7, v8);
    byte_4B191B5 = 1;
  }
  v9 = (BattleLogic_UseSkillObject_o *)sub_1BCAA2C(BattleLogic_UseSkillObject_TypeInfo, skillInfo, isLong, method);
  BattleLogic_UseSkillObject___ctor(v9, skillInfo, 0LL);
  this->fields.tmp_useSkill = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.tmp_useSkill, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = v6;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0LL) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3594/*"CLICK_SKILLICON"*/, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(logic, v16);
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191A0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5547/*"END_CLOSEALL"*/, method, v2);
    byte_4B191A0 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5547/*"END_CLOSEALL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191DA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191DA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_4B191C4 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191C4 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191A1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191A1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_4B1919D & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1919D = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_4B191A5 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191A5 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191D7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191D7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191E6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191E6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  BattlePerformanceMaster_o *v5; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_4B1919F & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1919F = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 1, v3);
  BattlePerformanceMaster__proclight(v5, v4->fields.menuBtn, 0, v6);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v7);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_4B191C2 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191C2 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.menuBtn, 1, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  PlayMakerFSM_o *myFsm; // x0

  v4 = this;
  if ( (byte_4B1919B & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B1919B = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 1, v3);
  myFsm = v4->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v5);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191A3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B191A3 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        BattlePerformanceMaster_MasterBuffEffectData_o *closeBuffData,
        const MethodInfo *method)
{
  BattlePerformanceMaster_MasterBuffEffectData_o *v4; // x21
  UnityEngine_Object_o *Component_object; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *effectTween; // x22
  bool v12; // w0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  UnityEngine_Behaviour_o *perf; // x0

  v4 = closeBuffData;
  Component_object = (UnityEngine_Object_o *)widget;
  if ( (byte_4B191E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, widget, closeBuffData);
    sub_1BCA7E0(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B191E3 = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, widget);
  v12 = UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL);
  if ( !v4 && v12 )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.effectTween;
    if ( !perf )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(perf, 0, 0LL);
  }
  if ( v4 )
  {
    this->fields.isMasterBuffEffectPlaying = 0;
  }
  else
  {
    v4 = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_1BCAA2C(
                                                             BattlePerformanceMaster_MasterBuffEffectData_TypeInfo,
                                                             v13,
                                                             v14,
                                                             v15);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    perf = (UnityEngine_Behaviour_o *)this->fields.perf;
    if ( !perf )
      goto LABEL_26;
    perf = (UnityEngine_Behaviour_o *)BattlePerformance__isPositionTactical((BattlePerformance_o *)perf, 0LL);
    if ( !v4 )
      goto LABEL_26;
    v4->fields.isRootActive = (unsigned __int8)perf & 1;
    *(_WORD *)&v4->fields.isMenuBtnActive = 257;
    v4->fields.isSkillBtnActive = 1;
  }
  perf = (UnityEngine_Behaviour_o *)this->fields.menuBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isMenuBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.spellBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isSpellBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.skillBtn;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isSkillBtnActive, 0LL);
  perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
  if ( !perf )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)perf, v4->fields.isRootActive, 0LL);
  if ( !Component_object )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_26;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)perf,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  perf = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
  {
    if ( Component_object )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))Component_object->klass[1]._1.castClass)(
        Component_object,
        Component_object->klass[1]._1.declaringType,
        1.0);
      return;
    }
LABEL_26:
    sub_1BCAA3C(perf, v13);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__endMasterBuffEffectFadeOut(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B191E4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_TypeInfo, method, v2);
    byte_4B191E4 = 1;
  }
  v5 = sub_1BCAA2C(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_TypeInfo, method, v2, v3);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B191C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, method);
    byte_4B191C0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191CC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12411/*"START_TAC"*/, method, v2);
    byte_4B191CC = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12411/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(data, method);
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
    sub_1BCAA3C(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_1BCAA3C(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL);
}


void __fastcall BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 data; // x0
  struct BattleData_o *v31; // x8
  int32_t v32; // w20
  int32_t v33; // w8
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct BattleData_o *v40; // x8
  const MethodInfo *v41; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v43; // x9
  struct BattleData_o *v44; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w26
  int max_length; // w8
  __int64 v49; // x22
  __int64 v50; // x1
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_List_object__o *v58; // x21
  int32_t v59; // w22
  UnityEngine_Component_o *v60; // x27
  int v61; // w28
  Il2CppObject *skillIconPrefab; // x24
  __int64 v63; // x1
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *v65; // x24
  __int64 v66; // x2
  UnityEngine_Transform_o *v67; // x25
  __int64 v68; // x2
  UnityEngine_Transform_o *v69; // x25
  struct BattlePerformance_o *v70; // x8
  struct BattleData_o *v71; // x8
  float skillIconOffset; // s11
  float v73; // s11
  struct BattleData_o *v74; // x8
  __int64 v75; // x1
  UISprite_o *skillIconSplit; // x24
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  int64_t v86; // x1
  Il2CppClass **v87; // x0
  System_Object_array *v88; // x0
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  struct BattleData_o *v95; // x8
  struct BattleData_o *v96; // x8
  struct BattleData_o *v97; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v99; // x1
  int32_t v100; // w20
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x1
  char v103; // [xsp+8h] [xbp-88h]
  int32_t overwriteImageId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19193 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonTemplate_BattleItemData__get_Instance__, v24, v25);
    sub_1BCA7E0(&StringLiteral_23598/*"skill_partition"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_19824/*"frame_master_bg_disable"*/, v28, v29);
    byte_4B19193 = 1;
  }
  overwriteImageId = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_99;
  data = BattleData__getMasterEquipId((BattleData_o *)data, 0LL);
  v31 = this->fields.data;
  if ( !v31 )
    goto LABEL_99;
  v32 = data;
  data = (__int64)v31->fields.quest_ent;
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
  v33 = overwriteImageId;
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
    v33 = overwriteImageId;
  }
  if ( v33 == -1 )
  {
LABEL_22:
    data = (__int64)this->fields.master_root;
    if ( !data )
      goto LABEL_99;
    data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)data,
                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_99;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19824/*"frame_master_bg_disable"*/, 0LL);
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
    v40 = this->fields.data;
    if ( !v40 )
      goto LABEL_99;
    MasterFaceManager__CreatePrefab_38632128(
      this->fields.face_root,
      1,
      v40->fields.battleGenderType,
      v32,
      2,
      0LL,
      overwriteImageId,
      0LL);
    BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v41);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_99;
  v43 = perf->fields.data;
  if ( !v43 )
    goto LABEL_99;
  if ( v43->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_99;
  }
  v44 = perf->fields.data;
  if ( !v44 )
    goto LABEL_99;
  masterSkillInfo = v44->fields.masterSkillInfo;
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
      v49 = 0LL;
      do
      {
        if ( (unsigned int)v49 >= max_length )
          sub_1BCAA44(data, method);
        data = (__int64)skillIcon->m_Items[v49];
        if ( !data )
          goto LABEL_99;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v49 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillIcon, 0LL, v34, v35, v36, v37, v38, v39);
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
  v58 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo,
                                                       v55,
                                                       v56,
                                                       v57);
  System_Collections_Generic_List_object____ctor(
    v58,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  if ( size >= 1 )
  {
    v103 = 0;
    v59 = 0;
    v60 = 0LL;
    v61 = -1;
    while ( 1 )
    {
      data = (__int64)this->fields.win_Skill;
      if ( !data )
        goto LABEL_99;
      skillIconPrefab = (Il2CppObject *)this->fields.skillIconPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
      data = (__int64)UnityEngine_Object__Instantiate_object__49903816(
                        skillIconPrefab,
                        transform,
                        (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_99;
      v65 = (UnityEngine_Component_o *)data;
      data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      v67 = (UnityEngine_Transform_o *)data;
      if ( !byte_4B109C6 )
      {
        data = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v66);
        byte_4B109C6 = 1;
      }
      if ( !v67 )
        goto LABEL_99;
      UnityEngine_Transform__set_localScale(v67, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      data = (__int64)UnityEngine_Component__get_transform(v65, 0LL);
      v69 = (UnityEngine_Transform_o *)data;
      if ( !byte_4B109C1 )
      {
        data = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v68);
        byte_4B109C1 = 1;
      }
      if ( !v69 )
        goto LABEL_99;
      UnityEngine_Transform__set_localEulerAngles(v69, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v70 = this->fields.perf;
      if ( !v70 )
        goto LABEL_99;
      v71 = v70->fields.data;
      if ( !v71 )
        goto LABEL_99;
      data = (__int64)v71->fields.masterSkillInfo;
      if ( !data )
        goto LABEL_99;
      skillIconOffset = this->fields.skillIconOffset;
      data = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)data,
                        v59,
                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !data )
        goto LABEL_99;
      v73 = x + (float)(skillIconOffset * (float)(size + v61));
      if ( *(_BYTE *)(data + 84) )
        v60 = v65;
      if ( *(_BYTE *)(data + 84) )
      {
        v74 = this->fields.data;
        if ( !v74 )
          goto LABEL_99;
        if ( !v74->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v103 & 1) == 0 )
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
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v75);
            data = AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_23598/*"skill_partition"*/, 0LL);
          }
          v65 = v60;
          v103 = 1;
          v73 = v73 - this->fields.skillIconSplitSpace;
        }
      }
      if ( !v65 )
        goto LABEL_99;
      data = (__int64)UnityEngine_Component__get_transform(v65, 0LL);
      if ( !data )
        goto LABEL_99;
      v106.fields.x = v73;
      v106.fields.y = y;
      v106.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v106, 0LL);
      data = (__int64)UnityEngine_Component__GetComponent_object_(
                        v65,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v58 )
        goto LABEL_99;
      items = v58->fields._items;
      v84 = Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__;
      ++v58->fields._version;
      if ( !items )
        goto LABEL_99;
      v85 = v58->fields._size;
      v86 = data;
      if ( (unsigned int)v85 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v58,
          (Il2CppObject *)data,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &items->obj.klass + v85;
        v58->fields._size = v85 + 1;
        v87[4] = (Il2CppClass *)v86;
        sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 4), v86, v77, v78, v79, v80, v81, v82);
      }
      ++v59;
      --v61;
      if ( size == v59 )
        goto LABEL_85;
    }
  }
  if ( !v58 )
    goto LABEL_99;
LABEL_85:
  v88 = System_Collections_Generic_List_object___ToArray(
          v58,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = (struct BattleServantSkillIConComponent_array *)v88;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.skillIcon, (int64_t)v88, v89, v90, v91, v92, v93, v94);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data || (data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL)) == 0 )
LABEL_99:
    sub_1BCAA3C(data, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
LABEL_88:
  v95 = this->fields.data;
  if ( !v95 )
    goto LABEL_99;
  data = (__int64)v95->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  data = QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0LL);
  v96 = this->fields.data;
  this->fields.iconItemNumberDispType = data;
  if ( !v96 )
    goto LABEL_99;
  data = (__int64)v96->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  data = QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0LL);
  v97 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = data;
  if ( !v97 )
    goto LABEL_99;
  data = (__int64)v97->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0LL);
  if ( BattleItemObjectId >= 1 )
  {
    v100 = BattleItemObjectId;
    data = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_99;
    BattleItemData__SetItemId((BattleItemData_o *)data, v100, 0LL);
    BattlePerformanceMaster__InitializeBattleItem(this, v100, v101);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v99);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v102);
  data = (__int64)this->fields.master_root;
  if ( !data )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4B191D2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B191D2 = 1;
  }
  v7 = sub_1BCAA2C(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v7, v8, v9, v10, v11, v12, v13);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v14);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_17;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v17);
  BattlePerformanceMaster__procCloseSkill(this, v18);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
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
    sub_1BCAA3C(master_root, v15);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  if ( (byte_4B19199 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v5, v6);
    byte_4B19199 = 1;
  }
  v7 = sub_1BCAA2C(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v7, v8, v9, v10, v11, v12, v13);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v14);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v17),
        BattlePerformanceMaster__updateSkillIcon(this, v18),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(master_root, v15);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformance_o *perf; // x0

  if ( (byte_4B191E0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3582/*"CLICK_MENU"*/, method, v2);
    byte_4B191E0 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_1BCAA3C(perf, method);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3582/*"CLICK_MENU"*/, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191BC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, method, v2);
    byte_4B191BC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  BattleLogic_UseSkillObject_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191BB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleLogic_UseSkillObject_TypeInfo, skillInfo, method);
    sub_1BCA7E0(&StringLiteral_9747/*"OK"*/, v6, v7);
    byte_4B191BB = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_1BCAA2C(BattleLogic_UseSkillObject_TypeInfo, skillInfo, method, v3);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.useSkillObject = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.useSkillObject, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, v15);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9747/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4B191DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_onClickSpellButton__, method, v2);
    sub_1BCA7E0(&StringLiteral_3596/*"CLICK_SPELL"*/, v4, v5);
    byte_4B191DF = 1;
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
    v8 = this->fields.data;
    if ( v8 )
    {
      perf = (BattlePerformance_o *)v8->fields.quest_ent;
      if ( perf )
      {
        if ( QuestEntity__HasFlag((QuestEntity_o *)perf, 0x100000000LL, 0LL) )
          goto LABEL_14;
        perf = (BattlePerformance_o *)this->fields.myFsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3596/*"CLICK_SPELL"*/, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(perf, method);
  }
LABEL_14:
  v9 = Method_BattlePerformanceMaster_onClickSpellButton__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_onClickSpellButton__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_onClickSpellButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
}


void __fastcall BattlePerformanceMaster__onCloseEnemyServantConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191D8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3614/*"CLOSE_CONF"*/, method, v2);
    byte_4B191D8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3614/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  BattleSelectServantWindow_o *v16; // x0
  struct BattleSelectServantWindow_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleSelectServantWindow_SelectServantCallBack_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v32; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v34; // x1

  if ( (byte_4B191A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_selectedSvt__, method, v2);
    sub_1BCA7E0(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v4, v5);
    byte_4B191A9 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_1BCAA3C(0LL, method);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectSvtWindow,
    (int64_t)SelectSvtWindow,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v16 = this->fields.selectSvtWindow;
  if ( !v16 )
    sub_1BCAA3C(0LL, v15);
  BattleSelectServantWindow__setUseClose(v16, 1, 0LL);
  v17 = *p_selectSvtWindow;
  v21 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1BCAA2C(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v18,
                                                               v19,
                                                               v20);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v17 )
    sub_1BCAA3C(v22, v23);
  v17->fields.selectCallBack = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.selectCallBack, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  data = this->fields.data;
  if ( !data )
    sub_1BCAA3C(0LL, v30);
  v32 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v32 )
    sub_1BCAA3C(FieldPlayerServantList, FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v32,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_1BCAA3C(0LL, v34);
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectSvtWindow)->klass->vtable._10_Open.method)(
    *p_selectSvtWindow,
    0LL,
    (*p_selectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  char *data; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v31; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct BattleData_o *v44; // x1
  __int64 v45; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  NotificationDialog_ClickDelegate_o *v52; // x23

  if ( (byte_4B191BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_callBackSelectedMainSub__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_endSelectSvtError__, v4, v5);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_3002/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3003/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, v16, v17);
    byte_4B191BE = 1;
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
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.selectMSWindow,
        (int64_t)SelectMainSubSvtWindow,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      selectMSWindow = this->fields.selectMSWindow;
      v31 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_1BCAA2C(
                                                                     BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo,
                                                                     v28,
                                                                     v29,
                                                                     v30);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v31,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v31;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&selectMSWindow->fields.callBack,
          (int64_t)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v44 = this->fields.data;
          *((_QWORD *)data + 19) = v44;
          sub_1BCA784((PartyOrganizationUtility_o *)(data + 152), (int64_t)v44, v38, v39, v40, v41, v42, v43);
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
    sub_1BCAA3C(data, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0LL);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0LL);
  v52 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v49, v50, v51);
  NotificationDialog_ClickDelegate___ctor(
    v52,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog_30768824(
    (CommonUI_o *)Instance,
    v47,
    v48,
    v52,
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
  __int64 v5; // x1
  __int64 v6; // x2
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_skillselectSvtWindow; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  BattleSelectServantWindow_SelectServantCallBack_o *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleSelectServantWindow_o *v27; // x20

  if ( (byte_4B191BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_selectedSkillSvt__, *(_QWORD *)&skillId, method);
    sub_1BCA7E0(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5, v6);
    byte_4B191BA = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillselectSvtWindow,
    (int64_t)SelectSvtWindow,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0LL);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v20 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1BCAA2C(
                                                               BattleSelectServantWindow_SelectServantCallBack_TypeInfo,
                                                               v17,
                                                               v18,
                                                               v19);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v20,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&skillselectSvtWindow->fields.selectCallBack,
          (int64_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v27 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v27)
    || (BattleSelectServantWindow__SetServantData(v27, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(perf, *(_QWORD *)&skillId);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procCloseAll(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  BattleWindowComponent_EndCall_o *v17; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *fieldConf; // x20

  v4 = this;
  if ( (byte_4B191D0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compCloseALL__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v5, v6);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B191D0 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  BattlePerformanceMaster__proclight(v9, v4->fields.menuBtn, 0, v10);
  win_Menu = v4->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_19;
  BattleMenuWindowComponent__Close(win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.win_Retire;
  if ( !win_Menu )
    goto LABEL_19;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Skill = v4->fields.win_Skill;
  v17 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v14, v15, v16);
  BattleWindowComponent_EndCall___ctor(v17, (Il2CppObject *)v4, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_19;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v17,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.win_Spell;
  if ( !win_Menu )
    goto LABEL_19;
  ((void (__fastcall *)(BattleMenuWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Menu->klass->vtable._12_Close.method)(
    win_Menu,
    0LL,
    win_Menu->klass->vtable._13_CompClose.methodPtr);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.warBoard_win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_19;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  win_Menu = (BattleMenuWindowComponent_o *)v4->fields.win_EnemyConf;
  if ( !win_Menu )
    goto LABEL_19;
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)win_Menu, 0LL, 0LL);
  fieldConf = (UnityEngine_Object_o *)v4->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    win_Menu = (BattleMenuWindowComponent_o *)v4->fields.fieldConf;
    if ( !win_Menu )
      goto LABEL_19;
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
LABEL_19:
    sub_1BCAA3C(win_Menu, v11);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleWindowComponent_EndCall_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B191B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procCloseBoostSkillConf__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B191B3 = 1;
  }
  v8 = Method_BattlePerformanceMaster_procCloseBoostSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseBoostSkillConf__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlayCommonSe(v9, 10, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_1BCAA3C(v15, v16);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v14,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191A6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3631/*"CLOSE_SPELL"*/, method, v2);
    byte_4B191A6 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3631/*"CLOSE_SPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleData_o *data; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_4B191D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compCloseEnemyConf__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B191D9 = 1;
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
    v10 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v7, v8);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_1BCAA3C(data, method);
  }
  v10 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v7, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BattlePerformanceMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleWindowComponent_EndCall_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B191C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compCloseMenu__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procCloseMenuWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B191C3 = 1;
  }
  v8 = Method_BattlePerformanceMaster_procCloseMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseMenuWindow__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procCloseMenuWindow__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlayCommonSe(v9, 10, 0LL);
  BattlePerformanceMaster__proclight(v10, this->fields.menuBtn, 0, v11);
  win_Menu = this->fields.win_Menu;
  v16 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v13, v14, v15);
  BattleWindowComponent_EndCall___ctor(v16, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_1BCAA3C(v17, v18);
  BattleMenuWindowComponent__Close(win_Menu, v16, 0LL);
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
    sub_1BCAA3C(0LL, v6);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleWindowComponent_EndCall_o *v14; // x21
  BattlePerformance_o *perf; // x0
  __int64 v16; // x1

  if ( (byte_4B191AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_CloseSkillConfComp__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procCloseSkillConf__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B191AE = 1;
  }
  v8 = Method_BattlePerformanceMaster_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillConf__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procCloseSkillConf__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlayCommonSe(v9, 10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v14,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_1BCAA3C(perf, v16);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  BattlePerformanceMaster_o *v10; // x0
  const MethodInfo *v11; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  BattleWindowComponent_EndCall_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4B1919C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compCloseSkillWindow__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procCloseSkillWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B1919C = 1;
  }
  v8 = Method_BattlePerformanceMaster_procCloseSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillWindow__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procCloseSkillWindow__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlayCommonSe(v9, 10, 0LL);
  BattlePerformanceMaster__proclight(v10, this->fields.skillBtn, 0, v11);
  win_Skill = this->fields.win_Skill;
  v16 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v13, v14, v15);
  BattleWindowComponent_EndCall___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_1BCAA3C(v17, v18);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v16,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleWindowComponent_EndCall_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B191A4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compCloseSpellWindow__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procCloseSpellWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    byte_4B191A4 = 1;
  }
  v8 = Method_BattlePerformanceMaster_procCloseSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSpellWindow__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procCloseSpellWindow__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlayCommonSe(v9, 10, 0LL);
  win_Spell = this->fields.win_Spell;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v11, v12, v13);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_1BCAA3C(v15, v16);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v14,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleSkillConfComponent_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_4B191B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B191B1 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&boostSkillConfWindow->fields.target,
          (int64_t)gameObject,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !tmp_useSkill)
    || (gameObject = this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v16 = this->fields.boostSkillConfWindow,
        v20 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v17, v18, v19),
        BattleWindowComponent_EndCall___ctor(
          v20,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v16) )
  {
    sub_1BCAA3C(gameObject, v9);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v16->klass->vtable._10_Open.method)(
    v16,
    v20,
    v16->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4B191D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compOpenEnemyConf__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v6, v7);
    byte_4B191D6 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_16;
  perf = (BattlePerformance_o *)BattleData__getEnemyServantDataIndex((BattleData_o *)perf, this->fields.tmp_index, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v9 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)BattleData__IsWarBoard(this->fields.data, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
    goto LABEL_12;
  if ( !v9 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v9, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.warBoard_win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v9, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    perf = (BattlePerformance_o *)this->fields.win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v9, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
  }
  v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v10, v11, v12);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_1BCAA3C(perf, method);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v14, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattlePerformanceMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleWindowComponent_EndCall_o *v21; // x21

  v4 = this;
  if ( (byte_4B191E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compOpenItemListWindow__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procOpenItemListWindow__, v5, v6);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v7, v8);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v9, v10);
    byte_4B191E5 = 1;
  }
  BattlePerformanceMaster__proclight(this, v4->fields.skillBtn, 0, v3);
  BattlePerformanceMaster__proclight(v11, v4->fields.menuBtn, 0, v12);
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)v4->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  v15 = Method_BattlePerformanceMaster_procOpenItemListWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenItemListWindow__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procOpenItemListWindow__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
  OverwriteAssetSoundName__PlayCommonSe(v16, 9, 0LL);
  perf = (BattlePerformance_o *)v4->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        itemListWindow = v4->fields.itemListWindow,
        v21 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v18, v19, v20),
        BattleWindowComponent_EndCall___ctor(
          v21,
          (Il2CppObject *)v4,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_10:
    sub_1BCAA3C(perf, v13);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v21, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformance_o *perf; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B1919E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procOpenMasterMenu__, method, v2);
    sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v4, v5);
    byte_4B1919E = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  v7 = Method_BattlePerformanceMaster_procOpenMasterMenu__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMasterMenu__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procOpenMasterMenu__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 7, 0LL);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_9:
    sub_1BCAA3C(perf, method);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattlePerformance_o *perf; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  BattlePerformanceMaster_o *v13; // x0
  const MethodInfo *v14; // x3
  BattlePerformanceMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleWindowComponent_EndCall_o *v21; // x21

  if ( (byte_4B191C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compOpenMenu__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procOpenMenuWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v8, v9);
    byte_4B191C1 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  v11 = Method_BattlePerformanceMaster_procOpenMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMenuWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procOpenMenuWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 9, 0LL);
  BattlePerformanceMaster__proclight(v13, this->fields.skillBtn, 0, v14);
  BattlePerformanceMaster__proclight(v15, this->fields.menuBtn, 1, v16);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        win_Menu = this->fields.win_Menu,
        v21 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v18, v19, v20),
        BattleWindowComponent_EndCall___ctor(
          v21,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_10:
    sub_1BCAA3C(perf, method);
  }
  BattleMenuWindowComponent__Open(win_Menu, v21, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleSkillConfComponent_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  BattleWindowComponent_EndCall_o *v20; // x21

  if ( (byte_4B191AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_OpenSkillConfComplete__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    byte_4B191AC = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&skillConfWindow->fields.target,
          (int64_t)gameObject,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !tmp_useSkill)
    || (gameObject = this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v16 = this->fields.skillConfWindow,
        v20 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v17, v18, v19),
        BattleWindowComponent_EndCall___ctor(
          v20,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v16) )
  {
    sub_1BCAA3C(gameObject, v9);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v16->klass->vtable._10_Open.method)(
    v16,
    v20,
    v16->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattlePerformance_o *perf; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  BattlePerformanceMaster_o *v13; // x0
  const MethodInfo *v14; // x3
  BattlePerformanceMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  BattleWindowComponent_EndCall_o *v21; // x21

  if ( (byte_4B1919A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compOpenSkillWindow__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procOpenSkillWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v8, v9);
    byte_4B1919A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  v11 = Method_BattlePerformanceMaster_procOpenSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSkillWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procOpenSkillWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 9, 0LL);
  BattlePerformanceMaster__proclight(v13, this->fields.skillBtn, 1, v14);
  BattlePerformanceMaster__proclight(v15, this->fields.menuBtn, 0, v16);
  win_Skill = this->fields.win_Skill;
  v21 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v18, v19, v20);
  BattleWindowComponent_EndCall___ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_9:
    sub_1BCAA3C(perf, method);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v21,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattlePerformance_o *perf; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  BattlePerformanceMaster_o *v13; // x0
  const MethodInfo *v14; // x3
  BattlePerformanceMaster_o *v15; // x0
  const MethodInfo *v16; // x3
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  struct CommandSpellWindowComponent_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleWindowComponent_EndCall_o *v22; // x21

  if ( (byte_4B191A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_compOpenSpellWindow__, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceMaster_procOpenSpellWindow__, v4, v5);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_12386/*"START_CLOSE"*/, v8, v9);
    byte_4B191A2 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  v11 = Method_BattlePerformanceMaster_procOpenSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSpellWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_procOpenSpellWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 9, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12386/*"START_CLOSE"*/, 0LL);
  BattlePerformanceMaster__proclight(v13, this->fields.skillBtn, 0, v14);
  BattlePerformanceMaster__proclight(v15, this->fields.menuBtn, 0, v16);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_12;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell
    || (win_Spell->fields.temporarySpell = perf->fields.screenEffect,
        win_Spell->fields.isUseTemporarySpell = BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0LL),
        v18 = this->fields.win_Spell,
        v22 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, v19, v20, v21),
        BattleWindowComponent_EndCall___ctor(
          v22,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0LL),
        !v18)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v18->klass->vtable._10_Open.method)(
          v18,
          v22,
          v18->klass->vtable._11_CompOpen.methodPtr),
        (perf = (BattlePerformance_o *)this->fields.win_Skill) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(perf, method);
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

  if ( (byte_4B191A7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3606/*"CLICK_USESPELL"*/, *(_QWORD *)&commandSpellId, method);
    byte_4B191A7 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&commandSpellId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3606/*"CLICK_USESPELL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B191D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj, flg);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B191D3 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSkillSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x22
  SkillEntity_o *v29; // x22
  __int64 v30; // x1
  Il2CppObject *Instance; // x20
  __int64 v32; // x2
  __int64 v33; // x3
  System_String_o *v34; // x21
  BattlePerformanceMaster___c_c *v35; // x8
  System_Action_o *_9__134_0; // x23
  System_String_o *v37; // x22
  Il2CppObject *v38; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B191BD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__134_0__, v15, v16);
    sub_1BCA7E0(&BattlePerformanceMaster___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_2933/*"BATTLE_INVALID_SELECT_TARGET"*/, v23, v24);
    byte_4B191BD = 1;
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
    skillselectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_28;
    skillselectSvtWindow = DataManager__GetMasterData_object_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_28;
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v28 )
      goto LABEL_28;
    skillselectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                             v28,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_28;
    v29 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !skillselectSvtWindow || !v29 )
      goto LABEL_28;
    if ( SkillEntity__checkUseTreasure(v29, *((_DWORD *)skillselectSvtWindow + 83), 0LL) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1BCAA3C(skillselectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v34 = (System_String_o *)skillselectSvtWindow;
    v35 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo, *(_QWORD *)&uniqueId);
      v35 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__134_0 = v35->static_fields->__9__134_0;
    v37 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__134_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35, *(_QWORD *)&uniqueId);
        v35 = BattlePerformanceMaster___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__134_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&uniqueId, v32, v33);
      System_Action___ctor(_9__134_0, v38, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__134_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__134_0 = _9__134_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__134_0,
        (int64_t)_9__134_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    if ( !Instance )
      goto LABEL_28;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v37,
      v34,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v28; // x21
  __int64 v29; // x1
  Il2CppObject *Instance; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  System_String_o *v33; // x21
  BattlePerformanceMaster___c_c *v34; // x8
  System_Action_o *_9__110_0; // x23
  System_String_o *v36; // x22
  Il2CppObject *v37; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B191AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&uniqueId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandSpellMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__selectedSvt_b__110_0__, v15, v16);
    sub_1BCA7E0(&BattlePerformanceMaster___c_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3423/*"CANCEL"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_2933/*"BATTLE_INVALID_SELECT_TARGET"*/, v25, v26);
    byte_4B191AA = 1;
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
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_27;
    v28 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v28 )
      goto LABEL_27;
    if ( CommandSpellEntity__checkUseTreasure(v28, *((_DWORD *)selectSvtWindow + 83), 0LL) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BCAA3C(selectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2933/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v33 = (System_String_o *)selectSvtWindow;
    v34 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo, *(_QWORD *)&uniqueId);
      v34 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__110_0 = v34->static_fields->__9__110_0;
    v36 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__110_0 )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34, *(_QWORD *)&uniqueId);
        v34 = BattlePerformanceMaster___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v34->static_fields->__9;
      _9__110_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&uniqueId, v31, v32);
      System_Action___ctor(_9__110_0, v37, Method_BattlePerformanceMaster___c__selectedSvt_b__110_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__110_0 = _9__110_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
        (int64_t)_9__110_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
    }
    if ( !Instance )
      goto LABEL_27;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v36,
      v33,
      _9__110_0,
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
  selectSvtWindow = this->fields.myFsm;
  if ( !selectSvtWindow )
    goto LABEL_27;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_3423/*"CANCEL"*/, 0LL);
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

  if ( (byte_4B191D5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8429/*"LONGPRESS_ENEMY"*/, *(_QWORD *)&index, method);
    byte_4B191D5 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8429/*"LONGPRESS_ENEMY"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__showRetireDialog(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogic_o *logic; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattlePerformance_o *perf; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4B191CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_showRetireDialog__, method, v2);
    byte_4B191CD = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_15;
  BattleLogic__playRetire(logic, 0LL);
  v5 = Method_BattlePerformanceMaster_showRetireDialog__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_showRetireDialog__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
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
    sub_1BCAA3C(logic, method);
  }
  if ( ((unsigned __int8)logic & 1) != 0 )
  {
    BattlePerformance__SetScreenEffectMode(perf, 0, 0LL);
  }
  else
  {
    BattlePerformance__effectFadeOut(this->fields.perf, 0LL);
    v8 = Method_BattlePerformanceMaster_showRetireDialog__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster_showRetireDialog__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlayCommonSe(v9, 3, 0LL);
    v11 = BattlePerformanceMaster__OpenRetireDialog(this, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B191D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12387/*"START_COM"*/, method, v2);
    byte_4B191D1 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12387/*"START_COM"*/, 0LL);
}


float __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x20
  __int64 delayAfterNoblePhantasmBuffData; // x0
  Il2CppObject *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject **v49; // x22
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  float v62; // s8
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  __int64 v67; // x1
  Il2CppObject *Component_object; // x21
  __int64 v69; // x1
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  UnityEngine_Object_o *v72; // x24
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x24
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  UnityEngine_Transform_o *v90; // x24
  BattleUIRangeLabel_o *v91; // x24
  BattleServantBuffIconComponent_o *v92; // x24
  __int64 v93; // x2
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  TrackingMoveCtCComponent_o *v97; // x23
  __int64 v98; // x2
  __int64 v99; // x3
  int64_t v100; // x23
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Collections_Generic_List_GameObject__o *masterBuffEffectObjectList; // x8
  __int64 size; // x2
  int v109; // w9
  __int64 v110; // x8
  System_Collections_Generic_IEnumerable_T__o *v111; // x23
  System_Action_int__o *v112; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  Il2CppObject *v115; // x8
  struct UnityEngine_Coroutine_o *v116; // x8
  const MethodInfo *v117; // x1
  System_Collections_IEnumerator_o *v118; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v127; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v130; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  __int64 v137; // x2
  __int64 v138; // x3
  UITweener_o *v139; // x19
  EventDelegate_Callback_o *v140; // x21
  int klass_high; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B191E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, masterBuffData, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_int___, v6, v7);
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v22, v23);
    sub_1BCA7E0(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v24, v25);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v28, v29);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__, v30, v31);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__1__, v32, v33);
    sub_1BCA7E0(&BattlePerformanceMaster___c__DisplayClass176_0_TypeInfo, v34, v35);
    sub_1BCA7E0(&StringLiteral_19096/*"effect/ef_poplabel{0:00}"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v38, v39);
    byte_4B191E1 = 1;
  }
  v40 = sub_1BCAA2C(BattlePerformanceMaster___c__DisplayClass176_0_TypeInfo, masterBuffData, method, v3);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  if ( !v40 )
    goto LABEL_80;
  *(_QWORD *)(v40 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 16), (int64_t)this, v43, v44, v45, v46, v47, v48);
  *(_QWORD *)(v40 + 32) = masterBuffData;
  v49 = (Il2CppObject **)(v40 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)masterBuffData, v50, v51, v52, v53, v54, v55);
  delayAfterNoblePhantasmBuffData = *(_QWORD *)(v40 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  v62 = 0.0;
  if ( !BattleActionData_MasterBuffData__IsEffectEnable(
          (BattleActionData_MasterBuffData_o *)delayAfterNoblePhantasmBuffData,
          0LL) )
    return v62;
  if ( this->fields._IsNoblePhantasm_k__BackingField )
  {
    delayAfterNoblePhantasmBuffData = (__int64)this->fields.delayAfterNoblePhantasmBuffData;
    if ( delayAfterNoblePhantasmBuffData )
    {
      v42 = *v49;
      v63 = *(_QWORD *)(delayAfterNoblePhantasmBuffData + 16);
      v64 = Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__;
      ++*(_DWORD *)(delayAfterNoblePhantasmBuffData + 28);
      if ( v63 )
      {
        v65 = *(int *)(delayAfterNoblePhantasmBuffData + 24);
        if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)delayAfterNoblePhantasmBuffData,
            v42,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = v63 + 8 * v65;
          *(_DWORD *)(delayAfterNoblePhantasmBuffData + 24) = v65 + 1;
          *(_QWORD *)(v66 + 32) = v42;
          sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 32), (int64_t)v42, v56, v57, v58, v59, v60, v61);
        }
        return v62;
      }
    }
    goto LABEL_80;
  }
  delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    masterBuffPopLabelEffect = (UnityEngine_Object_o *)this->fields.masterBuffPopLabelEffect;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v69);
    p_masterBuffPopLabelEffect = &this->fields.masterBuffPopLabelEffect;
    delayAfterNoblePhantasmBuffData = UnityEngine_Object__op_Inequality(masterBuffPopLabelEffect, 0LL, 0LL);
    if ( (delayAfterNoblePhantasmBuffData & 1) != 0 )
    {
      v72 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
      UnityEngine_Object__Destroy_70154244(v72, 0LL);
      *p_masterBuffPopLabelEffect = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.masterBuffPopLabelEffect,
        0LL,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    if ( *v49 )
    {
      klass_high = HIDWORD((*v49)[4].klass);
      v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high);
      v80 = System_String__Format((System_String_o *)StringLiteral_19096/*"effect/ef_poplabel{0:00}"*/, v79, 0LL);
      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Resources__Load_object_(
                                                   v80,
                                                   (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( this->fields.masterBtn )
      {
        v81 = (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData;
        transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v81, transform, 0LL, 0LL);
        this->fields.masterBuffPopLabelEffect = Object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.masterBuffPopLabelEffect,
          (int64_t)Object,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
        delayAfterNoblePhantasmBuffData = (__int64)this->fields.masterBuffPopLabelEffect;
        if ( delayAfterNoblePhantasmBuffData )
        {
          delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                       0LL);
          if ( delayAfterNoblePhantasmBuffData )
          {
            v142.fields.x = 0.0;
            v142.fields.z = 0.0;
            v142.fields.y = -42.0;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
              v142,
              0LL);
            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
            if ( *p_masterBuffPopLabelEffect )
            {
              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                           0LL);
              if ( this->fields.master_root )
              {
                v90 = (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData;
                delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                             this->fields.master_root,
                                                             0LL);
                if ( delayAfterNoblePhantasmBuffData )
                {
                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                                                               0LL);
                  if ( v90 )
                  {
                    UnityEngine_Transform__set_parent(
                      v90,
                      (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                      0LL);
                    delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                    if ( *p_masterBuffPopLabelEffect )
                    {
                      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
                      if ( delayAfterNoblePhantasmBuffData )
                      {
                        v91 = (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData;
                        BattleUIRangeLabel__ParentHasChanged(
                          (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData,
                          0LL);
                        if ( *v49 )
                        {
                          BattleUIRangeLabel__SetAdjustLabelOffset(
                            v91,
                            (System_String_o *)(*v49)[3].monitor,
                            (System_String_o *)StringLiteral_1/*""*/,
                            1,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                          BattleUIRangeLabel__AddLabelDepth(v91, 20, 0LL);
                          if ( *v49 )
                          {
                            BattleUIRangeLabel__CondensedScaleLabel(
                              v91,
                              HIDWORD((*v49)[12].klass),
                              (int32_t)(*v49)[12].monitor,
                              0LL);
                            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                            if ( *p_masterBuffPopLabelEffect )
                            {
                              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponentInChildren_object__49687160(
                                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                           1,
                                                                           (const MethodInfo_2F62A78 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
                              if ( delayAfterNoblePhantasmBuffData )
                              {
                                v92 = (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData;
                                BattleServantBuffIconComponent__ParentHasChanged(
                                  (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData,
                                  0LL);
                                BattleServantBuffIconComponent__setImageId(v92, 0, 0LL);
                                delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                                if ( *p_masterBuffPopLabelEffect )
                                {
                                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
                                  perf = this->fields.perf;
                                  if ( perf )
                                  {
                                    actorcamera = perf->fields.actorcamera;
                                    uicamera = perf->fields.uicamera;
                                    v97 = (TrackingMoveCtCComponent_o *)delayAfterNoblePhantasmBuffData;
                                    if ( !byte_4B109C1 )
                                    {
                                      delayAfterNoblePhantasmBuffData = sub_1BCA7E0(
                                                                          &UnityEngine_Vector3_TypeInfo,
                                                                          v42,
                                                                          v93);
                                      byte_4B109C1 = 1;
                                    }
                                    if ( v97 )
                                    {
                                      TrackingMoveCtCComponent__Set(
                                        v97,
                                        actorcamera,
                                        uicamera,
                                        0LL,
                                        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                                        0,
                                        0LL);
                                      TrackingMoveCtCComponent__startAct(v97, 0LL);
                                      if ( !this->fields.isMasterBuffEffectPlaying )
                                      {
                                        v100 = sub_1BCAA2C(
                                                 BattlePerformanceMaster_MasterBuffEffectData_TypeInfo,
                                                 v42,
                                                 v98,
                                                 v99);
                                        System_Object___ctor((Il2CppObject *)v100, 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        delayAfterNoblePhantasmBuffData = UnityEngine_GameObject__get_activeSelf(
                                                                            (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                            0LL);
                                        if ( !v100 )
                                          goto LABEL_80;
                                        *(_BYTE *)(v100 + 16) = delayAfterNoblePhantasmBuffData & 1;
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v100 + 17) = UnityEngine_GameObject__get_activeSelf(
                                                                  (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                  0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v100 + 18) = UnityEngine_GameObject__get_activeSelf(
                                                                  (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                  0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v100 + 19) = UnityEngine_GameObject__get_activeSelf(
                                                                  (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                  0LL);
                                        this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v100;
                                        sub_1BCA784(
                                          (PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose,
                                          v100,
                                          v101,
                                          v102,
                                          v103,
                                          v104,
                                          v105,
                                          v106);
                                      }
                                      masterBuffEffectObjectList = this->fields.masterBuffEffectObjectList;
                                      if ( masterBuffEffectObjectList )
                                      {
                                        size = (unsigned int)masterBuffEffectObjectList->fields._size;
                                        v109 = masterBuffEffectObjectList->fields._version + 1;
                                        masterBuffEffectObjectList->fields._size = 0;
                                        masterBuffEffectObjectList->fields._version = v109;
                                        if ( (int)size >= 1 )
                                          System_Array__Clear(
                                            (System_Array_o *)masterBuffEffectObjectList->fields._items,
                                            0,
                                            size,
                                            0LL);
                                        v110 = *(_QWORD *)(v40 + 32);
                                        *(_DWORD *)(v40 + 24) = 1065353216;
                                        if ( v110 )
                                        {
                                          v111 = *(System_Collections_Generic_IEnumerable_T__o **)(v110 + 72);
                                          v112 = (System_Action_int__o *)sub_1BCAA2C(
                                                                           System_Action_int__TypeInfo,
                                                                           v42,
                                                                           size,
                                                                           v99);
                                          System_Action_int____ctor(
                                            v112,
                                            (Il2CppObject *)v40,
                                            (intptr_t)Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__,
                                            0LL);
                                          BasicHelper__ForEach_int_(
                                            v111,
                                            (System_Action_T__o *)v112,
                                            (const MethodInfo_2EFF36C *)Method_BasicHelper_ForEach_int___);
                                          masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
                                          if ( masterBuffEffectDataClose )
                                          {
                                            if ( masterBuffEffectDataClose->fields.isRootActive )
                                              return *(float *)(v40 + 24);
                                            v115 = *v49;
                                            if ( !*v49 )
                                              goto LABEL_80;
                                            if ( !BYTE4(v115[12].monitor) )
                                            {
                                              if ( BYTE5(v115[12].monitor) )
                                              {
                                                masterIconFadeCoroutine = this->fields.masterIconFadeCoroutine;
                                                if ( masterIconFadeCoroutine )
                                                  UnityEngine_MonoBehaviour__StopCoroutine_70140136(
                                                    (UnityEngine_MonoBehaviour_o *)this,
                                                    masterIconFadeCoroutine,
                                                    0LL);
                                                v127 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                         this,
                                                         *(float *)(v40 + 24),
                                                         (const MethodInfo *)masterIconFadeCoroutine);
                                                UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                  (UnityEngine_MonoBehaviour_o *)this,
                                                  v127,
                                                  0LL);
                                              }
                                              return *(float *)(v40 + 24);
                                            }
                                            v116 = this->fields.masterIconFadeCoroutine;
                                            this->fields.isMasterBuffEffectPlaying = 1;
                                            if ( v116 )
                                            {
                                              if ( !Component_object )
                                                goto LABEL_80;
                                              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
                                                Component_object,
                                                Component_object->klass->vtable[9].methodPtr,
                                                1.0);
                                              UnityEngine_MonoBehaviour__StopCoroutine_70140136(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                this->fields.masterIconFadeCoroutine,
                                                0LL);
                                              v118 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                       this,
                                                       *(float *)(v40 + 24),
                                                       v117);
                                              started = UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                                                          (UnityEngine_MonoBehaviour_o *)this,
                                                          v118,
                                                          0LL);
                                              this->fields.masterIconFadeCoroutine = started;
                                              sub_1BCA784(
                                                (PartyOrganizationUtility_o *)&this->fields.masterIconFadeCoroutine,
                                                (int64_t)started,
                                                v120,
                                                v121,
                                                v122,
                                                v123,
                                                v124,
                                                v125);
                                              return *(float *)(v40 + 24);
                                            }
                                            effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
                                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
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
                                                    v130 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
                                                    this->fields.effectTween = v130;
                                                    sub_1BCA784(
                                                      (PartyOrganizationUtility_o *)&this->fields.effectTween,
                                                      (int64_t)v130,
                                                      v131,
                                                      v132,
                                                      v133,
                                                      v134,
                                                      v135,
                                                      v136);
                                                    v139 = (UITweener_o *)this->fields.effectTween;
                                                    if ( v139 )
                                                    {
                                                      v139->fields.method = 6;
                                                      v140 = (EventDelegate_Callback_o *)sub_1BCAA2C(
                                                                                           EventDelegate_Callback_TypeInfo,
                                                                                           v42,
                                                                                           v137,
                                                                                           v138);
                                                      EventDelegate_Callback___ctor(
                                                        v140,
                                                        (Il2CppObject *)v40,
                                                        Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__1__,
                                                        0LL);
                                                      UITweener__SetOnFinished(v139, v140, 0LL);
                                                      return *(float *)(v40 + 24);
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
    sub_1BCAA3C(delayAfterNoblePhantasmBuffData, v42);
  }
  return v62;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_4B191CB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12407/*"START_SKILL"*/, *(_QWORD *)&type, method);
    byte_4B191CB = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.typeMetadataHandle)(
          win_Spell,
          0LL,
          win_Spell->klass[1]._1.interopData),
        (win_Spell = this->fields.myFsm) == 0LL) )
  {
    sub_1BCAA3C(win_Spell, *(_QWORD *)&type);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12407/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B19198 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12411/*"START_TAC"*/, method, v2);
    byte_4B19198 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12411/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleData_o *data; // x8
  struct BattleData_o *v7; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x8

  v3 = this;
  if ( (byte_4B19196 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_19819/*"frame_cs_bg_disable"*/, v4, v5);
    byte_4B19196 = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)data->fields.quest_ent;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x400000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v7 = v3->fields.data;
    if ( !v7 )
      goto LABEL_17;
    this = (BattlePerformanceMaster_o *)v7->fields.quest_ent;
    if ( !this )
      goto LABEL_17;
    if ( !QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
      goto LABEL_11;
  }
  this = (BattlePerformanceMaster_o *)v3->fields.data;
  if ( !this )
    goto LABEL_17;
  if ( BattleData__GetOverwriteCommandSpellIcon((BattleData_o *)this, 0LL) )
  {
LABEL_11:
    this = (BattlePerformanceMaster_o *)UserGameMaster__getSelfUserGame(0LL);
    commandSpellIcon = v3->fields.commandSpellIcon;
    if ( commandSpellIcon )
    {
      CommandSpellIconComponent__SetDataBattle(commandSpellIcon, (UserGameEntity_o *)this, v3->fields.data, 0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(this, method);
  }
  this = (BattlePerformanceMaster_o *)v3->fields.spellBtn;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_17;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19819/*"frame_cs_bg_disable"*/, 0LL);
  this = (BattlePerformanceMaster_o *)v3->fields.spellSpr;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleData_o *data; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4B191C6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B191C6 = 1;
  }
  data = v3->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v3->fields.skillSkipBtn) == 0LL )
    sub_1BCAA3C(this, method);
  if ( data->fields.systemflg_skipskillconf )
    v7 = &StringLiteral_17702/*"btn_off"*/;
  else
    v7 = &StringLiteral_17703/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v37; // x8
  System_Object_array *v38; // x21
  struct BattleServantSkillIConComponent_array *v39; // x8
  System_Object_array *v40; // x20
  __int64 v41; // x22
  char v42; // w28
  il2cpp_array_size_t v43; // w26
  int v44; // w29
  char v45; // w25
  unsigned __int8 v46; // w27
  struct BattleServantSkillIConComponent_array *v47; // x8
  BattleSkillInfoData_o *v48; // x23
  bool isChargeOK; // w24
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  Il2CppClass **v56; // x0
  struct BattleServantSkillIConComponent_array *v57; // x8
  int m_CancellationTokenSource; // w8
  BattlePerformanceMaster_o *v59; // x22
  unsigned int v60; // w23
  int v61; // w24
  char v62; // w26
  struct System_Threading_CancellationTokenSource_o *v63; // x8
  int v64; // w9
  __int64 v65; // x10
  int v66; // w10
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  BattlePerformanceMaster___c_c *v70; // x0
  System_Predicate_object__o *_9__88_0; // x23
  System_String_o *v72; // x22
  Il2CppObject *v73; // x28
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_String_array *All_object; // x0
  struct BattleData_o *data; // x8
  BattlePerformanceMaster_o *v83; // x21
  BattlePerformanceMaster_o *v84; // x22
  System_String_o *v85; // x1
  __int64 v86; // x1
  System_String_o *v87; // x22
  Il2CppObject *v88; // x0
  BattlePerformanceMaster_o *v89; // x22
  System_String_o *v90; // x1
  float v91; // s8
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  BattlePerformanceMaster___c_c *v95; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  System_Predicate_object__o *_9__88_1; // x24
  System_String_o *v98; // x23
  Il2CppObject *v99; // x25
  struct BattlePerformanceMaster___c_StaticFields *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_String_array *v107; // x0
  __int64 v108; // x1
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  BattlePerformanceMaster_o *v110; // x20
  unsigned int localPosition; // s0
  unsigned int v112; // s9
  int v113; // s2
  unsigned int v114; // s0
  float v115; // s1
  struct BattleData_o *v116; // x8
  struct BattleData_o *v117; // x8
  __int64 v118; // x1
  Il2CppObject *ComponentInChildren_object; // x20
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x1
  int v127; // [xsp+8h] [xbp-78h] BYREF
  int v128; // [xsp+Ch] [xbp-74h] BYREF

  v3 = this;
  if ( (byte_4B19197 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_string___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___, v4, v5);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Predicate_string__TypeInfo, v12, v13);
    sub_1BCA7E0(&string___TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_0__, v16, v17);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_1__, v18, v19);
    sub_1BCA7E0(&BattlePerformanceMaster___c_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2940/*"BATTLE_MASTER_SKILL_CHARGE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_17696/*"btn_master_skill_disable"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_2939/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, v32, v33);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_9373/*"NG"*/, v34, v35);
    byte_4B19197 = 1;
  }
  v128 = 0;
  skillIcon = v3->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)sub_1BCA888(string___TypeInfo, skillIcon->max_length);
  v37 = v3->fields.skillIcon;
  if ( !v37 )
    goto LABEL_145;
  v38 = (System_Object_array *)this;
  this = (BattlePerformanceMaster_o *)sub_1BCA888(string___TypeInfo, v37->max_length);
  v39 = v3->fields.skillIcon;
  if ( !v39 )
    goto LABEL_145;
  v40 = (System_Object_array *)this;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v3->fields.data;
    if ( !this )
      goto LABEL_145;
    if ( (int)v41 >= (signed int)v39->max_length )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v41, 0LL);
    if ( this )
    {
      v47 = v3->fields.skillIcon;
      if ( !v47 )
        goto LABEL_145;
      if ( (unsigned int)v41 >= v47->max_length )
        goto LABEL_146;
      v48 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v47->m_Items[(int)v41];
      if ( !this )
        goto LABEL_145;
      if ( v48->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v48, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
      isChargeOK = BattleSkillInfoData__isChargeOK(v48, 0LL);
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v48, 0LL);
      v128 = (int)this;
      if ( v48->fields.isAdd )
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_915/*"-"*/;
          if ( !v40 )
            goto LABEL_145;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v128, 0LL);
          method = (const MethodInfo *)this;
          if ( !v40 )
            goto LABEL_145;
        }
        if ( v44 >= v40->max_length )
          goto LABEL_146;
        v56 = &v40->obj.klass + v44++;
      }
      else
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_915/*"-"*/;
          if ( !v38 )
            goto LABEL_145;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v128, 0LL);
          method = (const MethodInfo *)this;
          if ( !v38 )
            goto LABEL_145;
        }
        if ( v43 >= v38->max_length )
LABEL_146:
          sub_1BCAA44(this, method);
        v56 = &v38->obj.klass + (int)v43++;
      }
      v56[4] = (Il2CppClass *)method;
      v42 |= isChargeOK;
      sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 4), (int64_t)method, v50, v51, v52, v53, v54, v55);
      v45 |= v128 > 0;
      v46 |= v48->fields.sealedTurn > 0;
    }
    v57 = v3->fields.skillIcon;
    if ( !v57 )
      goto LABEL_145;
    if ( (unsigned int)v41 >= v57->max_length )
      goto LABEL_146;
    this = (BattlePerformanceMaster_o *)v57->m_Items[v41];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0LL);
      v39 = v3->fields.skillIcon;
      ++v41;
      if ( v39 )
        continue;
    }
    goto LABEL_145;
  }
  this = (BattlePerformanceMaster_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_145;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v59 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v60 = 0;
    v61 = 0;
    v62 = 0;
    while ( 1 )
    {
      if ( v60 >= m_CancellationTokenSource )
        goto LABEL_146;
      this = (BattlePerformanceMaster_o *)*((_QWORD *)&v59->fields.myFsm + (int)v60);
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)BattleServantData__getShortenUserEquipSkill((BattleServantData_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      v63 = this->fields.m_CancellationTokenSource;
      if ( v63 )
      {
        if ( (int)v63 >= 1 )
        {
          v64 = 0;
          do
          {
            v65 = *((_QWORD *)&this->fields.myFsm + v64);
            if ( !v65 )
              goto LABEL_145;
            v66 = *(_DWORD *)(v65 + 28);
            ++v64;
            if ( v61 <= v66 )
              v61 = v66;
          }
          while ( (_DWORD)v63 != v64 );
        }
        v62 = 1;
      }
      m_CancellationTokenSource = (int)v59->fields.m_CancellationTokenSource;
      if ( (int)++v60 >= m_CancellationTokenSource )
        goto LABEL_52;
    }
  }
  v62 = 0;
  v61 = 0;
LABEL_52:
  skillBtnFlashObject = (UnityEngine_Object_o *)v3->fields.skillBtnFlashObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(skillBtnFlashObject, 0LL, 0LL) )
  {
    this = (BattlePerformanceMaster_o *)v3->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_145;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (BattlePerformanceMaster_o *)v3->fields.skillBtnFlashObject;
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    this = (BattlePerformanceMaster_o *)v3->fields.skillBtnFlashObject;
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v42 & 1, 0LL);
  }
  if ( v3->fields.notDispEquipSkillChargeTurn )
  {
    this = (BattlePerformanceMaster_o *)v3->fields.masterSkillBadStatus;
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v3->fields.masterSkillChargeRoot;
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v3->fields.addSkillChargeTimeRoot;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattlePerformanceMaster_o *)v3->fields.chargeTimeRoot;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  else
  {
    v70 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo, method);
      v70 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__88_0 = (System_Predicate_object__o *)v70->static_fields->__9__88_0;
    v72 = (System_String_o *)StringLiteral_1120/*"/"*/;
    if ( !_9__88_0 )
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70, method);
        v70 = BattlePerformanceMaster___c_TypeInfo;
      }
      v73 = (Il2CppObject *)v70->static_fields->__9;
      _9__88_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, method, v68, v69);
      System_Predicate_object____ctor(_9__88_0, v73, Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__88_0 = (struct System_Predicate_string__o *)_9__88_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__88_0,
        (int64_t)_9__88_0,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    All_object = (System_String_array *)System_Array__FindAll_object_(
                                          v38,
                                          (System_Predicate_T__o *)_9__88_0,
                                          (const MethodInfo_300CF94 *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v72, All_object, 0LL);
    data = v3->fields.data;
    if ( !data )
      goto LABEL_145;
    v83 = this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0LL);
    if ( !v3->fields.masterSkillBadStatus )
      goto LABEL_145;
    v84 = this;
    UnityEngine_GameObject__SetActive(v3->fields.masterSkillBadStatus, v46 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v3->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_145;
    if ( (v46 & 1) != 0 )
      v85 = (System_String_o *)v84;
    else
      v85 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v85, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2940/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0LL);
    v127 = v61 + 1;
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
    this = (BattlePerformanceMaster_o *)System_String__Format(v87, v88, 0LL);
    if ( !v3->fields.masterSkillChargeRoot )
      goto LABEL_145;
    v89 = this;
    UnityEngine_GameObject__SetActive(v3->fields.masterSkillChargeRoot, v62 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v3->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_145;
    v90 = (v62 & 1) != 0 ? (System_String_o *)v89 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v90, 0LL);
    this = (BattlePerformanceMaster_o *)v3->fields.addSkillChargeTimeRoot;
    v91 = ((v46 | (unsigned __int8)v62) & 1) != 0 ? -58.0 : -38.0;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    if ( v44 < 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v45 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.chargeTimeLabel;
      if ( !this )
        goto LABEL_145;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v83, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v3->fields.chargeTimeRoot )
        goto LABEL_145;
      v110 = this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v3->fields.chargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_145;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v45 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v95 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v3->fields.addSkillAddChargeTimeLabel;
      if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo, v92);
        v95 = BattlePerformanceMaster___c_TypeInfo;
      }
      _9__88_1 = (System_Predicate_object__o *)v95->static_fields->__9__88_1;
      v98 = (System_String_o *)StringLiteral_1120/*"/"*/;
      if ( !_9__88_1 )
      {
        if ( !v95->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v95, v92);
          v95 = BattlePerformanceMaster___c_TypeInfo;
        }
        v99 = (Il2CppObject *)v95->static_fields->__9;
        _9__88_1 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_string__TypeInfo, v92, v93, v94);
        System_Predicate_object____ctor(
          _9__88_1,
          v99,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_1__,
          0LL);
        v100 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v100->__9__88_1 = (struct System_Predicate_string__o *)_9__88_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v100->__9__88_1,
          (int64_t)_9__88_1,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
      }
      v107 = (System_String_array *)System_Array__FindAll_object_(
                                      v40,
                                      (System_Predicate_T__o *)_9__88_1,
                                      (const MethodInfo_300CF94 *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v98, v107, 0LL);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_145;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0LL);
      addSkillAddChargeTimeSplitLabel = v3->fields.addSkillAddChargeTimeSplitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2939/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0LL);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_145;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_145;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v83, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v3->fields.addSkillChargeTimeRoot )
        goto LABEL_145;
      v110 = this;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform(
                                            (UnityEngine_Component_o *)v3->fields.addSkillChargeTimeRoot,
                                            0LL);
      if ( !this )
        goto LABEL_145;
      localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_145;
    }
    v112 = localPosition;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    *(UnityEngine_Vector3_o *)(&v113 - 2) = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)this,
                                              0LL);
    if ( !v110 )
      goto LABEL_145;
    v114 = v112;
    v115 = v91;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)v110,
      *(UnityEngine_Vector3_o *)(&v113 - 2),
      0LL);
  }
  this = (BattlePerformanceMaster_o *)v3->fields.data;
  if ( !this )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)BattleData__getBoostSkillInfo((BattleData_o *)this, 0, 0LL);
  if ( !v3->fields.boostSkillIcon )
    goto LABEL_145;
  if ( this )
    BattleServantSkillIConComponent__SetSkillInfo(
      (BattleServantSkillIConComponent_o *)v3->fields.boostSkillIcon,
      (BattleSkillInfoData_o *)this,
      1,
      0,
      0,
      0,
      0LL);
  else
    BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)v3->fields.boostSkillIcon, 0, 0LL);
  v116 = v3->fields.data;
  if ( !v116 )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)v116->fields.quest_ent;
  if ( !this )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_135;
  v117 = v3->fields.data;
  if ( !v117 )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)v117->fields.quest_ent;
  if ( !this )
    goto LABEL_145;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
  {
LABEL_135:
    this = (BattlePerformanceMaster_o *)v3->fields.skillBtnSp;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17696/*"btn_master_skill_disable"*/, 0LL);
      this = (BattlePerformanceMaster_o *)v3->fields.skillBtn;
      if ( this )
      {
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v118);
        this = (BattlePerformanceMaster_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                              0LL,
                                              0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !ComponentInChildren_object )
            goto LABEL_145;
          v126 = StringLiteral_9373/*"NG"*/;
          ComponentInChildren_object[2].monitor = (void *)StringLiteral_9373/*"NG"*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&ComponentInChildren_object[2].monitor,
            v126,
            v120,
            v121,
            v122,
            v123,
            v124,
            v125);
        }
        this = (BattlePerformanceMaster_o *)v3->fields.skillBtnFlashObject;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          return;
        }
      }
    }
LABEL_145:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleData_o *data; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4B191CA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B191CA = 1;
  }
  data = v3->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v3->fields.skipDeadBtn) == 0LL )
    sub_1BCAA3C(this, method);
  if ( data->fields.systemflg_skipDead )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall BattlePerformanceMaster__updateTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleData_o *data; // x8
  __int64 *v7; // x8

  v3 = this;
  if ( (byte_4B191C8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    this = (BattlePerformanceMaster_o *)sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B191C8 = 1;
  }
  data = v3->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v3->fields.tdConstBtn) == 0LL )
    sub_1BCAA3C(this, method);
  if ( data->fields.systemflg_TdConstantvelocity )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v7, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceMaster__waitMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B191E2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster__waitMasterBuffEffect_d__177_TypeInfo, method, v3);
    byte_4B191E2 = 1;
  }
  v7 = sub_1BCAA2C(BattlePerformanceMaster__waitMasterBuffEffect_d__177_TypeInfo, method, v3, v4);
  BattlePerformanceMaster__waitMasterBuffEffect_d__177___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BCAA3C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor_44683772(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  __int64 v22; // x3
  float v23; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool result; // w0
  int32_t id; // w20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v38; // x20
  UnityEngine_Transform_o *v39; // x21
  UnityEngine_Transform_o *v40; // x21
  float v41; // s0
  float v42; // s1
  float v43; // s2
  struct EffectEntity_o *effectEnt_5__2; // x8
  System_String_o *se; // x21
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B191FC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&SoundManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_3230/*"Battle"*/, v16, v17);
    byte_4B191FC = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_36;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_36;
    v23 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v23 > 0.0 )
    {
      v24 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v22);
      UnityEngine_WaitForSeconds___ctor(v24, v23, 0LL);
      this->fields.__2__current = (Il2CppObject *)v24;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v24, v26, v27, v28, v29, v30, v31);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  id = this->fields.id;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
  Instance = (DataManager_o *)BattleEffectUtility__getEffectObjectSafe(id, 0LL, 1, 1.0, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v38 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v39 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v39 )
    goto LABEL_36;
  UnityEngine_Transform__set_parent(v39, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v40 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v40 )
    goto LABEL_36;
  v46.fields.z = v43 + this->fields.pos.fields.z;
  v46.fields.y = v42 + this->fields.pos.fields.y;
  v46.fields.x = v41 + this->fields.pos.fields.x;
  UnityEngine_Transform__set_localPosition(v40, v46, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v47.fields.x = x;
  v47.fields.y = y;
  v47.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v47, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v38, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v48.fields.x = 1.0;
  v48.fields.y = 1.0;
  v48.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v48, 0LL);
  UnityEngine_GameObject__SetActive(v38, 1, 0LL);
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
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    Instance = (DataManager_o *)SoundManager__playSe_39417204((System_String_o *)StringLiteral_3230/*"Battle"*/, se, 0LL);
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
          (Il2CppObject *)v38,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_36:
    sub_1BCAA3C(Instance, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattlePerformanceMaster__DelayEffect_d__194_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  UnityEngine_GameObject_o *obj; // x0

  if ( (byte_4B191FD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    byte_4B191FD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = this->fields.obj;
    if ( !obj )
      sub_1BCAA3C(0LL, method);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v7 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
      UnityEngine_WaitForSeconds___ctor(v7, waitTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v7, v9, v10, v11, v12, v13, v14);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattlePerformanceMaster__DelayShowItem_d__196_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattlePerformanceMaster__OpenRetireDialog_d__152_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t _1__state; // w8
  DefCoroutine_c *v14; // x0
  int64_t milliSecSeven; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v20; // x21

  v8 = this;
  if ( (byte_4B191FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_OnRetireDialog__, method, v2);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v9, v10);
    this = (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)sub_1BCA7E0(&DefCoroutine_TypeInfo, v11, v12);
    byte_4B191FE = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this
      || (logic = _4__this->fields.logic,
          v20 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                        NotificationDialog_ClickDelegate_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3),
          NotificationDialog_ClickDelegate___ctor(
            v20,
            (Il2CppObject *)_4__this,
            Method_BattlePerformanceMaster_OnRetireDialog__,
            0LL),
          !logic)
      || (BattleLogic__OpenBattleLoseDlg(logic, 1, 1, v20, 0, 0LL),
          (this = (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)_4__this->fields.perf) == 0LL) )
    {
      sub_1BCAA3C(this, method);
    }
    BattlePerformance__SetScreenEffectMode((BattlePerformance_o *)this, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v14 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
    v14 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (int64_t)v14->static_fields->milliSecSeven;
  v8->fields.__2__current = (Il2CppObject *)milliSecSeven;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(p__2__current, milliSecSeven, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattlePerformanceMaster__OpenRetireDialog_d__152_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x19
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  UnityEngine_WaitForSeconds_o *v24; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_T__TResult__o *v33; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v36; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_float__c *v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  const MethodInfo *v53; // x1
  struct System_Collections_Generic_IEnumerator_float__o *v54; // x19
  System_Collections_Generic_IEnumerator_float__c *v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x0
  __int64 v66; // x1
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *v72; // x8
  int64_t size; // x2
  int v74; // w9
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  UnityEngine_WaitForSeconds_o *v78; // x19
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *v85; // [xsp+18h] [xbp-28h]

  v4 = this;
  v85 = this;
  if ( (byte_4B191FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePerformanceMaster_startMasterBuffEffect__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___, v5, v6);
    sub_1BCA7E0(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_float__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_float__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__, v17, v18);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *)sub_1BCA7E0(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v19,
                                                                           v20);
    byte_4B191FF = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        sub_1BCAA3C(this, method);
    }
    else
    {
      if ( _1__state )
        return 0;
      v4->fields.__1__state = -1;
      if ( !_4__this )
        sub_1BCAA3C(this, method);
      delayAfterNoblePhantasmBuffData = _4__this->fields.delayAfterNoblePhantasmBuffData;
      if ( !delayAfterNoblePhantasmBuffData )
        sub_1BCAA3C(this, method);
      if ( delayAfterNoblePhantasmBuffData->fields._size >= 1 )
      {
        v24 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
        UnityEngine_WaitForSeconds___ctor(v24, 0.25, 0LL);
        v85->fields.__2__current = (Il2CppObject *)v24;
        sub_1BCA784((PartyOrganizationUtility_o *)&v85->fields.__2__current, (int64_t)v24, v25, v26, v27, v28, v29, v30);
        result = 1;
        v85->fields.__1__state = 1;
        return result;
      }
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    v33 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                         System_Func_BattleActionData_MasterBuffData__float__TypeInfo,
                                         method,
                                         v2,
                                         v3);
    System_Func_object__float____ctor(
      v33,
      (Il2CppObject *)_4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      0LL);
    v34 = System_Linq_Enumerable__Select_object__float_(
            v32,
            (System_Func_TSource__TResult__o *)v33,
            (const MethodInfo_2F43DD4 *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v36 = v34;
    if ( !v34 )
      sub_1BCAA3C(0LL, v35);
    klass = v34->klass;
    v38 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        --v38;
        p_offset += 4;
        if ( !v38 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C1C7C0(v34, System_Collections_Generic_IEnumerable_float__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
            v36,
            *(_QWORD *)(p_method + 8));
    v85->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)v41;
    sub_1BCA784((PartyOrganizationUtility_o *)&v85->fields.__7__wrap1, v41, v42, v43, v44, v45, v46, v47);
    v4 = v85;
  }
  _7__wrap1 = v4->fields.__7__wrap1;
  v4->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1BCAA3C(this, method);
  v49 = _7__wrap1->klass;
  v50 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_24;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_24:
    v52 = sub_1C1C7C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v52)(
          _7__wrap1,
          *(_QWORD *)(v52 + 8)) & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191____m__Finally1(v85, v53);
    v85->fields.__7__wrap1 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v85->fields.__7__wrap1, 0LL, v59, v60, v61, v62, v63, v64);
    if ( !_4__this )
      sub_1BCAA3C(v65, v66);
    v72 = _4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !v72 )
      sub_1BCAA3C(v65, v66);
    size = (unsigned int)v72->fields._size;
    v74 = v72->fields._version + 1;
    v72->fields._size = 0;
    v72->fields._version = v74;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v72->fields._items, 0, size, 0LL);
    _4__this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&_4__this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      size,
      v67,
      v68,
      v69,
      v70,
      v71);
    return 0;
  }
  v54 = v85->fields.__7__wrap1;
  if ( !v54 )
    sub_1BCAA3C(v85, v53);
  v55 = v54->klass;
  v56 = *(unsigned __int16 *)(&v54->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v54->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v57 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_32;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_32:
    v58 = sub_1C1C7C0(v85->fields.__7__wrap1, System_Collections_Generic_IEnumerator_float__TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v58)(
    v54,
    *(_QWORD *)(v58 + 8));
  v78 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v75, v76, v77);
  UnityEngine_WaitForSeconds___ctor(v78, 0.25, 0LL);
  v85->fields.__2__current = (Il2CppObject *)v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&v85->fields.__2__current, (int64_t)v78, v79, v80, v81, v82, v83, v84);
  result = 1;
  v85->fields.__1__state = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_float__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B19200 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B19200 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v6 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B191FA & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceMaster___c_TypeInfo, v1, v2);
    byte_4B191FA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattlePerformanceMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattlePerformanceMaster___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePerformanceMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster___c__DisplayClass176_0___startMasterBuffEffect_b__0(
        BattlePerformanceMaster___c__DisplayClass176_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v22; // x1
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x20
  struct BattlePerformanceMaster_o *v27; // x8
  UnityEngine_Transform_o *v28; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v30; // x21
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  __int64 v33; // x1
  Il2CppObject *Component_object; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  float v41; // s0
  struct BattlePerformanceMaster_o *v42; // x8
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 klass_low; // x10
  __int64 v46; // x8

  if ( (byte_4B191FB & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__, v17, v18);
    sub_1BCA7E0(&StringLiteral_3230/*"Battle"*/, v19, v20);
    byte_4B191FB = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(x, 0LL, 1, 1.0, 0LL);
  _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v24 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[5].klass;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  EffectObjectSafe = BaseMonoBehaviour__createObject(_4__this, v24, transform, 0LL, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  v26 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_31;
  v28 = (UnityEngine_Transform_o *)EffectObjectSafe;
  EffectObjectSafe = v27->fields.master_root;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)EffectObjectSafe,
                                                   0LL);
  if ( !v28 )
    goto LABEL_31;
  UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)EffectObjectSafe, 0LL);
  UnityEngine_GameObject__SetActive(v26, 1, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)EffectObjectSafe,
             x,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v30 = Entity;
    if ( EffectEntity__isSe((EffectEntity_o *)Entity, 0LL) )
    {
      v31 = Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__;
      if ( (*((_BYTE *)Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__ + 83) & 2) != 0 )
        v31 = (_QWORD *)sub_1BCA7F8(Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__);
      v32 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v31, v31[4]);
      OverwriteAssetSoundName__PlaySe_39322196(
        v32,
        (System_String_o *)StringLiteral_3230/*"Battle"*/,
        (System_String_o *)v30[2].klass,
        1.0,
        0LL,
        0LL);
    }
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v26,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)EffectObjectSafe & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_31;
    v41 = *(float *)&Component_object[2].klass;
    if ( this->fields.waitTime < v41 )
      this->fields.waitTime = v41;
  }
  v42 = this->fields.__4__this;
  if ( !v42
    || (EffectObjectSafe = (UnityEngine_GameObject_o *)v42->fields.masterBuffEffectObjectList) == 0LL
    || (v43 = *(_QWORD *)&EffectObjectSafe->fields.m_CachedPtr,
        v44 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(EffectObjectSafe[1].klass),
        !v43) )
  {
LABEL_31:
    sub_1BCAA3C(EffectObjectSafe, v22);
  }
  klass_low = SLODWORD(EffectObjectSafe[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v43 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)EffectObjectSafe,
      (Il2CppObject *)v26,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = v43 + 8 * klass_low;
    LODWORD(EffectObjectSafe[1].klass) = klass_low + 1;
    *(_QWORD *)(v46 + 32) = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v26, v35, v36, v37, v38, v39, v40);
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
        || (UnityEngine_MonoBehaviour__StopCoroutine_70140136(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              (UnityEngine_Coroutine_o *)method,
              0LL),
            (_4__this = this->fields.__4__this) != 0LL) )
      {
        v5 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, method);
        started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
        _4__this->fields.masterIconFadeCoroutine = started;
        sub_1BCA784(
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
    sub_1BCAA3C(this, method);
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
  struct BattlePerformanceMaster_o *_4__this; // x8
  BattlePerformanceMaster___c__DisplayClass179_0_o *v9; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v9 = this,
        _4__this->fields.masterIconFadeCoroutine = 0LL,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.masterIconFadeCoroutine,
          0LL,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (this = (BattlePerformanceMaster___c__DisplayClass179_0_o *)v9->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, x);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t _1__state; // w8
  Il2CppObject *v14; // x21
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
  int64_t v27; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *_8__1; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *v44; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *v46; // x8
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  UnityEngine_Object_o *effectTween; // x19
  TweenAlpha_o *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x2
  __int64 v63; // x3
  UITweener_o *v64; // x20
  Il2CppObject *v65; // x19
  EventDelegate_Callback_o *v66; // x21

  v4 = this;
  if ( (byte_4B19201 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattlePerformanceMaster___c__DisplayClass179_0__endMasterBuffEffectFadeOut_b__0__, v9, v10);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)sub_1BCA7E0(
                                                                             &BattlePerformanceMaster___c__DisplayClass179_0_TypeInfo,
                                                                             v11,
                                                                             v12);
    byte_4B19201 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)_4__this->fields.master_root;
    if ( !this )
      goto LABEL_26;
    _8__1 = v4->fields.__8__1;
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                             (UnityEngine_GameObject_o *)this,
                                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_26;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_1BCA784((PartyOrganizationUtility_o *)&_8__1->fields.widget, (int64_t)this, v38, v39, v40, v41, v42, v43);
    v44 = v4->fields.__8__1;
    if ( !v44 )
      goto LABEL_26;
    widget = (UnityEngine_Object_o *)v44->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)UnityEngine_Object__op_Equality(
                                                                             widget,
                                                                             0LL,
                                                                             0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v46 = v4->fields.__8__1;
      if ( !v46 )
        goto LABEL_26;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v46->fields.widget;
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
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.masterIconFadeCoroutine,
          0LL,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        effectTween = (UnityEngine_Object_o *)_4__this->fields.effectTween;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
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
        v55 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        _4__this->fields.effectTween = v55;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.effectTween,
          (int64_t)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        v64 = (UITweener_o *)_4__this->fields.effectTween;
        if ( !v64 )
          goto LABEL_26;
        v64->fields.method = 6;
        v65 = (Il2CppObject *)v4->fields.__8__1;
        v66 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, method, v62, v63);
        EventDelegate_Callback___ctor(
          v66,
          v65,
          Method_BattlePerformanceMaster___c__DisplayClass179_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        UITweener__SetOnFinished(v64, v66, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v14 = (Il2CppObject *)sub_1BCAA2C(BattlePerformanceMaster___c__DisplayClass179_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v14, 0LL);
    v4->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass179_0_o *)v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__8__1, (int64_t)v14, v15, v16, v17, v18, v19, v20);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v4->fields.__8__1;
    if ( this )
    {
      v27 = (int64_t)v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v27;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, v27, v21, v22, v23, v24, v25, v26);
      v4->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v29, v30, v31, v32, v33, v34);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_26:
    sub_1BCAA3C(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v18, v19, v20, v21, v22, v23);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_1BCAA3C(0LL, method);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      this->fields.__2__current = v9;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattlePerformanceMaster__waitMasterBuffEffect_d__177_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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