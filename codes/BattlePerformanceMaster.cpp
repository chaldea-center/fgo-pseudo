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

  if ( (byte_4B3A1D8 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_17721/*"btn_master_skill"*/, v8);
    byte_4B3A1D8 = 1;
  }
  BattlePerformanceMaster_TypeInfo->static_fields->MASTER_SKILL_BUTTON_SP_NAME = (struct System_String_o *)StringLiteral_17721/*"btn_master_skill"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)BattlePerformanceMaster_TypeInfo->static_fields,
    StringLiteral_17721/*"btn_master_skill"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattlePerformanceMaster___ctor(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_Dictionary_int__object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_Dictionary_int__object__o *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B3A1D7 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__, method);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo, v4);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject___ctor__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__, v7);
    sub_1BD3458(&System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo, v8);
    sub_1BD3458(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_1BD3458(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v10);
    byte_4B3A1D7 = 1;
  }
  *(_QWORD *)&this->fields.skillIconOffset = 0x41900000C28E0000LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.masterBuffEffectObjectList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.masterBuffEffectObjectList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleActionData_MasterBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleActionData_MasterBuffData___ctor__);
  this->fields.delayAfterNoblePhantasmBuffData = (struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *)v18;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.delayAfterNoblePhantasmBuffData,
    (int64_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v25,
    (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.battleItemEffectObject = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v25;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.battleItemEffectObject,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__Coroutine__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v32,
    (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__Coroutine___ctor__);
  this->fields.battleItemEffectCoroutines = (struct System_Collections_Generic_Dictionary_int__Coroutine__o *)v32;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.battleItemEffectCoroutines,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = sub_1BD36A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  *(_DWORD *)(v39 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v39;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v39, v40, v41, v42, v43, v44, v45);
  this->fields.tmp_index = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseBoostSkillConfComp(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A195 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A195 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__CloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B3A1CB & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_OnCompCloseRetireSA__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B3A1CB = 1;
  }
  win_Retire = this->fields.win_Retire;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompCloseRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_1BD36B4(v6, v7);
  ((void (__fastcall *)(struct BattleRetireWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Retire->klass->vtable._12_Close.method)(
    win_Retire,
    v5,
    win_Retire->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__CloseSkillConfComp(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A190 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A190 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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
  if ( (byte_4B3A1D2 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster__DelayEffect_d__194_TypeInfo, *(_QWORD *)&id);
    byte_4B3A1D2 = 1;
  }
  v13 = sub_1BD36A4(BattlePerformanceMaster__DelayEffect_d__194_TypeInfo);
  BattlePerformanceMaster__DelayEffect_d__194___ctor((BattlePerformanceMaster__DelayEffect_d__194_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_1BD36B4(v14, v15);
  *(_QWORD *)(v13 + 64) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 64), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = id;
  *(_QWORD *)(v13 + 40) = parentObj;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)parentObj, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4B3A1D4 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster__DelayShowItem_d__196_TypeInfo, method);
    byte_4B3A1D4 = 1;
  }
  v5 = sub_1BD36A4(BattlePerformanceMaster__DelayShowItem_d__196_TypeInfo);
  BattlePerformanceMaster__DelayShowItem_d__196___ctor((BattlePerformanceMaster__DelayShowItem_d__196_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BD36B4(v6, v7);
  *(_QWORD *)(v5 + 40) = obj;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)obj, v8, v9, v10, v11, v12, v13);
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
  started = UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
  this->fields.effectAfterNoblePhantasmCoroutine = started;
  sub_1BD33FC(
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

  if ( (byte_4B3A1D6 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, outVector);
    byte_4B3A1D6 = 1;
  }
  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, outVector);
    byte_4B31941 = 1;
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
      sub_1BD36B4(0LL, v8);
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
  __int64 v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
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
  __int64 v44; // x1
  char *skillBtn; // x0
  struct BattleData_o *data; // x8
  struct CommandSpellWindowComponent_o *win_Spell; // x21
  CommandSpellWindowComponent_CloseButtonCallBack_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct CommandSpellWindowComponent_o *v55; // x21
  CommandSpellWindowComponent_UseCommandSpellCallBack_o *v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct BattleData_o *v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct BattleData_o *v76; // x1
  UnityEngine_Transform_o *v77; // x21
  int v78; // s1
  int v79; // s0
  int v80; // s2
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v82; // x22
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct BattleServantConfConponent_o *win_EnemyConf; // x21
  BattleServantConfConponent_CloseButtonCallBack_o *v90; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  UnityEngine_Object_o *fieldConf; // x21
  BattleFieldConfConponent_o *v98; // x21
  System_Action_o *v99; // x22
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct BattleData_o *v106; // x1
  const MethodInfo *v107; // x1
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  AssetData_o *v116; // x21
  int64_t v117; // x1
  UnityEngine_GameObject_o *v118; // x21
  UnityEngine_GameObject_array *Children; // x22
  System_Func_object__bool__o *v120; // x23
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  UnityEngine_Object_o *battleItemUi; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3A173 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, inperf);
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, v9);
    sub_1BD3458(&AssetManager_TypeInfo, v10);
    sub_1BD3458(&Method_BasicHelper_Any_GameObject___, v11);
    sub_1BD3458(&Method_BattlePerformanceMaster_OnCloseFieldConf__, v12);
    sub_1BD3458(&Method_BattlePerformanceMaster_onCloseEnemyServantConf__, v13);
    sub_1BD3458(&Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__, v14);
    sub_1BD3458(&Method_BattlePerformanceMaster_procUseCommandSpell__, v15);
    sub_1BD3458(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, v16);
    sub_1BD3458(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo, v17);
    sub_1BD3458(&System_Func_GameObject__bool__TypeInfo, v18);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v19);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__, v20);
    sub_1BD3458(&BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo, v21);
    sub_1BD3458(&CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo, v22);
    sub_1BD3458(&StringLiteral_3240/*"Battle/Common"*/, v23);
    sub_1BD3458(&StringLiteral_19065/*"ef_masterskill_flash"*/, v24);
    byte_4B3A173 = 1;
  }
  v25 = sub_1BD36A4(BattlePerformanceMaster___c__DisplayClass83_0_TypeInfo);
  BattlePerformanceMaster___c__DisplayClass83_0___ctor((BattlePerformanceMaster___c__DisplayClass83_0_o *)v25, 0LL);
  this->fields.perf = inperf;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.perf, (int64_t)inperf, v26, v27, v28, v29, v30, v31);
  this->fields.data = indata;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v32, v33, v34, v35, v36, v37);
  this->fields.logic = inlogic;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v38, v39, v40, v41, v42, v43);
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
  v131 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillBtn, 0LL);
  skillBtn = (char *)this->fields.win_Skill;
  this->fields.pos_menubtn = v131;
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
  v48 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1BD36A4(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v48,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procCloseButtonCommandSpellWindow__,
    0LL);
  if ( !win_Spell )
    goto LABEL_59;
  win_Spell->fields.callback_close = v48;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&win_Spell->fields.callback_close,
    (int64_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = this->fields.win_Spell;
  v56 = (CommandSpellWindowComponent_UseCommandSpellCallBack_o *)sub_1BD36A4(CommandSpellWindowComponent_UseCommandSpellCallBack_TypeInfo);
  CommandSpellWindowComponent_UseCommandSpellCallBack___ctor(
    v56,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_procUseCommandSpell__,
    0LL);
  if ( !v55 )
    goto LABEL_59;
  v55->fields.callback_use = v56;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v55->fields.callback_use, (int64_t)v56, v57, v58, v59, v60, v61, v62);
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
  v69 = this->fields.data;
  *((_QWORD *)skillBtn + 11) = v69;
  sub_1BD33FC((PartyOrganizationUtility_o *)(skillBtn + 88), (int64_t)v69, v63, v64, v65, v66, v67, v68);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)skillBtn, 2, 0.15, 0, 0LL);
  skillBtn = (char *)this->fields.win_Retire;
  if ( !skillBtn )
    goto LABEL_59;
  v76 = this->fields.data;
  *((_QWORD *)skillBtn + 19) = v76;
  sub_1BD33FC((PartyOrganizationUtility_o *)(skillBtn + 152), (int64_t)v76, v70, v71, v72, v73, v74, v75);
  skillBtn = (char *)this->fields.warBoard_win_EnemyConf;
  if ( !skillBtn )
    goto LABEL_59;
  skillBtn = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillBtn, 0LL);
  if ( !this->fields.warBoard_win_EnemyConf )
    goto LABEL_59;
  v77 = (UnityEngine_Transform_o *)skillBtn;
  skillBtn = (char *)UnityEngine_Component__get_transform(
                       (UnityEngine_Component_o *)this->fields.warBoard_win_EnemyConf,
                       0LL);
  if ( !skillBtn )
    goto LABEL_59;
  *(UnityEngine_Vector3_o *)(&v78 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillBtn,
                                           0LL);
  if ( !v77 )
    goto LABEL_59;
  v79 = 0;
  v80 = 0;
  UnityEngine_Transform__set_localPosition(v77, *(UnityEngine_Vector3_o *)(&v78 - 1), 0LL);
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
  v82 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1BD36A4(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v82,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
    goto LABEL_59;
  warBoard_win_EnemyConf->fields.callback_close = v82;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&warBoard_win_EnemyConf->fields.callback_close,
    (int64_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
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
  v90 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1BD36A4(BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
  BattleServantConfConponent_CloseButtonCallBack___ctor(
    v90,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_onCloseEnemyServantConf__,
    0LL);
  if ( !win_EnemyConf )
    goto LABEL_59;
  win_EnemyConf->fields.callback_close = v90;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&win_EnemyConf->fields.callback_close,
    (int64_t)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v98 = this->fields.fieldConf;
    v99 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(v99, (Il2CppObject *)this, Method_BattlePerformanceMaster_OnCloseFieldConf__, 0LL);
    if ( !v98 )
      goto LABEL_59;
    BattleFieldConfConponent__Initialize(v98, v99, 0LL);
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
  v106 = this->fields.data;
  *((_QWORD *)skillBtn + 13) = v106;
  sub_1BD33FC((PartyOrganizationUtility_o *)(skillBtn + 104), (int64_t)v106, v100, v101, v102, v103, v104, v105);
  BattlePerformanceMaster__updateShortSkill(this, v107);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v108);
  BattlePerformanceMaster__updateSkipDead(this, v109);
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
  skillBtn = (char *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3240/*"Battle/Common"*/, 0LL);
  if ( !v25 )
    goto LABEL_59;
  v116 = (AssetData_o *)skillBtn;
  v117 = StringLiteral_19065/*"ef_masterskill_flash"*/;
  *(_QWORD *)(v25 + 16) = StringLiteral_19065/*"ef_masterskill_flash"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 16), v117, v110, v111, v112, v113, v114, v115);
  if ( !v116 )
    goto LABEL_59;
  skillBtn = (char *)AssetData__GetObject_object__49362760(
                       v116,
                       *(System_String_o **)(v25 + 16),
                       (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  if ( !this->fields.win_Menu )
    goto LABEL_59;
  v118 = (UnityEngine_GameObject_o *)skillBtn;
  BattleMenuWindowComponent__Init(this->fields.win_Menu, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v118, 0LL, 0LL) )
  {
    Children = GameObjectExtensions__GetChildren(this->fields.skillBtn, 1, 0LL);
    v120 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v120,
      (Il2CppObject *)v25,
      Method_BattlePerformanceMaster___c__DisplayClass83_0__Initialize_b__0__,
      0LL);
    if ( !BasicHelper__Any_object__49399452(
            (System_Object_array *)Children,
            (System_Func_T__bool__o *)v120,
            (const MethodInfo_2F1C69C *)Method_BasicHelper_Any_GameObject___) )
    {
      skillBtn = (char *)this->fields.skillBtn;
      if ( !skillBtn )
        goto LABEL_59;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)skillBtn, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v118, transform, 0LL, 0LL);
      this->fields.skillBtnFlashObject = Object;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.skillBtnFlashObject,
        (int64_t)Object,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
    }
    skillBtn = (char *)this->fields.skillBtnFlashObject;
    if ( skillBtn )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillBtn, 0, 0LL);
      goto LABEL_53;
    }
LABEL_59:
    sub_1BD36B4(skillBtn, v44);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__InitializeBattleItem(
        BattlePerformanceMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *battleItemUi; // x21
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *Instance; // x0
  UnityEngine_Object_o *battleItemIcon; // x20
  UISprite_o *v13; // x20
  int32_t monitor; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3A1CE & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, *(_QWORD *)&itemId);
    sub_1BD3458(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B3A1CE = 1;
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
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___)) == 0LL )
  {
LABEL_20:
    sub_1BD36B4(Instance, v10);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          itemId,
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    return;
  battleItemIcon = (UnityEngine_Object_o *)this->fields.battleItemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(battleItemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      v13 = this->fields.battleItemIcon;
      monitor = (int32_t)entity[2].monitor;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v13, monitor, 0LL);
      goto LABEL_18;
    }
    goto LABEL_20;
  }
LABEL_18:
  BattlePerformanceMaster__UpdateBattleItemUi(this, v10);
}


bool __fastcall BattlePerformanceMaster__IsCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *fieldConf; // x0

  fieldConf = (BattleWindowComponent_o *)this->fields.fieldConf;
  if ( !fieldConf )
    sub_1BD36B4(0LL, method);
  return BattleWindowComponent__isClose(fieldConf, 0LL);
}


bool __fastcall BattlePerformanceMaster__IsTacticalPhaseWait(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1CD & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_15748/*"Wait"*/, method);
    byte_4B3A1CD = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm || (myFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_ActiveStateName(myFsm, 0LL)) == 0LL )
    sub_1BD36B4(myFsm, method);
  return System_String__IndexOf_62556824((System_String_o *)myFsm, (System_String_o *)StringLiteral_15748/*"Wait"*/, 0LL) >= 0;
}


void __fastcall BattlePerformanceMaster__OnCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1BF & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3621/*"CLOSE_CONF"*/, method);
    byte_4B3A1BF = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3621/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompCloseRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1CC & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1CC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OnCompShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1CA & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1CA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__OnRetireDialog(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B3A1B0 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    sub_1BD3458(&StringLiteral_9761/*"OK"*/, v4);
    byte_4B3A1B0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.logic) == 0LL)
    || (BattleLogic__sendFsmEvent((BattleLogic_o *)Instance, (System_String_o *)StringLiteral_9761/*"OK"*/, 0LL),
        (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_1BD36B4(Instance, v6);
  }
  BattlePerformance__ResetSoundMask((BattlePerformance_o *)Instance, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenBoostSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A193 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A193 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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

  if ( (byte_4B3A1AF & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster__OpenRetireDialog_d__152_TypeInfo, method);
    byte_4B3A1AF = 1;
  }
  v3 = sub_1BD36A4(BattlePerformanceMaster__OpenRetireDialog_d__152_TypeInfo);
  BattlePerformanceMaster__OpenRetireDialog_d__152___ctor(
    (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BD36B4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__OpenRetireWindowSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1C8 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3569/*"CLICK_CKRETIRE"*/, method);
    byte_4B3A1C8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3569/*"CLICK_CKRETIRE"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__OpenSkillConfComplete(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A18E & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A18E = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


bool __fastcall BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B3A199 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_SkillSelectedAddFunc__, skillInfo);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo, v6);
    byte_4B3A199 = 1;
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
    sub_1BD36B4(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0LL) )
  {
    v9 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1BD36A4(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v9,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_SkillSelectedAddFunc__,
      0LL);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v9;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack,
      (int64_t)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleData_o *data; // x0
  BattleMasterImageEntity_o *BattleMasterImageEntity; // x0
  int32_t OverwriteMasterBackgroundId; // w0
  int v11; // w20
  BattleDataDefine_c *v12; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int v20; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3A175 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&BattleDataDefine_TypeInfo, v3);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1BD3458(&int_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_19855/*"frame_master_bg_{0}"*/, v6);
    sub_1BD3458(&StringLiteral_3258/*"BattleAssetUIAtlas"*/, v7);
    byte_4B3A175 = 1;
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
      v11 = OverwriteMasterBackgroundId;
      v12 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v12 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v12->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3258/*"BattleAssetUIAtlas"*/, 0LL) )
      {
        data = (BattleData_o *)this->fields.master_root;
        if ( data )
        {
          data = (BattleData_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)data,
                                   (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( data )
          {
            v14 = (UISprite_o *)data;
            UISprite__set_atlas((UISprite_o *)data, atlas, 0LL);
            v20 = v11;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v15, v16, v17);
            v19 = System_String__Format((System_String_o *)StringLiteral_19855/*"frame_master_bg_{0}"*/, v18, 0LL);
            UISprite__set_spriteName(v14, v19, 0LL);
            return;
          }
        }
LABEL_15:
        sub_1BD36B4(data, method);
      }
    }
  }
}


void __fastcall BattlePerformanceMaster__PlayInterruption(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1BD36B4(0LL, method);
  BattleLogic__PlayInterruption(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__PlayPartyReorganization(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0

  logic = this->fields.logic;
  if ( !logic )
    sub_1BD36B4(0LL, method);
  BattleLogic__PlayPartyReorganization(logic, 0LL);
}


void __fastcall BattlePerformanceMaster__ProcCloseFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *fieldConf; // x20
  BattleFieldConfConponent_o *v6; // x20
  BattleWindowComponent_EndCall_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B3A1BE & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster__ProcCloseFieldConf_b__172_0__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v4);
    byte_4B3A1BE = 1;
  }
  fieldConf = (UnityEngine_Object_o *)this->fields.fieldConf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fieldConf, 0LL, 0LL) )
  {
    v6 = this->fields.fieldConf;
    v7 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster__ProcCloseFieldConf_b__172_0__,
      0LL);
    if ( !v6 )
      sub_1BD36B4(v8, v9);
    BattleFieldConfConponent__Close(v6, v7, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__ProcOpenFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  UnityEngine_Object_o *fieldConf; // x20
  struct BattleData_o *data; // x8
  BattleFieldConfConponent_o *v9; // x20
  BattleWindowComponent_EndCall_o *v10; // x21

  if ( (byte_4B3A1BD & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster__ProcOpenFieldConf_b__171_0__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v5);
    byte_4B3A1BD = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_13;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
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
        v9 = this->fields.fieldConf;
        v10 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
        BattleWindowComponent_EndCall___ctor(
          v10,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster__ProcOpenFieldConf_b__171_0__,
          0LL);
        if ( v9 )
        {
          BattleFieldConfConponent__Open(v9, v10, 0LL);
          return;
        }
      }
    }
LABEL_13:
    sub_1BD36B4(perf, method);
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
    sub_1BD36B4(win_Menu, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UIAtlas_o *mAtlas; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *data; // x8
  System_String_o *klass; // x20
  System_String_o *v12; // x0
  struct UISprite_o *skillBtnSp; // x8
  System_String_o *v14; // x20

  if ( (byte_4B3A176 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, method);
    sub_1BD3458(&AssetManager_TypeInfo, v3);
    sub_1BD3458(&BattlePerformanceMaster_TypeInfo, v4);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1BD3458(&StringLiteral_3240/*"Battle/Common"*/, v6);
    sub_1BD3458(&StringLiteral_3258/*"BattleAssetUIAtlas"*/, v7);
    byte_4B3A176 = 1;
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
  v12 = System_Int32__ToString((int)data + 112, 0LL);
  mAtlas = (UIAtlas_o *)System_String__Concat_62525248(klass, v12, 0LL);
  skillBtnSp = this->fields.skillBtnSp;
  if ( !skillBtnSp )
    goto LABEL_18;
  v14 = (System_String_o *)mAtlas;
  mAtlas = skillBtnSp->fields.mAtlas;
  if ( !mAtlas )
    goto LABEL_18;
  if ( UIAtlas__GetSprite(mAtlas, v14, 0LL) )
    goto LABEL_16;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  mAtlas = (UIAtlas_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_3240/*"Battle/Common"*/, 0LL);
  if ( !mAtlas
    || (mAtlas = (UIAtlas_o *)AssetData__GetObject_object__49362760(
                                (AssetData_o *)mAtlas,
                                (System_String_o *)StringLiteral_3258/*"BattleAssetUIAtlas"*/,
                                (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040)) == 0LL
    || (mAtlas = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                (UnityEngine_GameObject_o *)mAtlas,
                                (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.skillBtnSp) )
  {
LABEL_18:
    sub_1BD36B4(mAtlas, method);
  }
  UISprite__set_atlas(this->fields.skillBtnSp, mAtlas, 0LL);
LABEL_16:
  mAtlas = (UIAtlas_o *)this->fields.skillBtnSp;
  if ( !mAtlas )
    goto LABEL_18;
  UISprite__set_spriteName((UISprite_o *)mAtlas, v14, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowFieldConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1BC & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3581/*"CLICK_FIELD"*/, method);
    byte_4B3A1BC = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3581/*"CLICK_FIELD"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__ShowRetireSA(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattleRetireWindowComponent_o *win_Retire; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B3A1C9 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_OnCompShowRetireSA__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_ShowRetireSA__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4B3A1C9 = 1;
  }
  v5 = Method_BattlePerformanceMaster_ShowRetireSA__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_ShowRetireSA__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_ShowRetireSA__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  win_Retire = this->fields.win_Retire;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_OnCompShowRetireSA__,
    0LL);
  if ( !win_Retire )
    sub_1BD36B4(v9, v10);
  BattleRetireWindowComponent__Open(win_Retire, v8, 0LL);
}


void __fastcall BattlePerformanceMaster__SkillSelectedAddFunc(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x19
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4B3A19A & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, skillInfo);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_3430/*"CANCEL"*/, v7);
    byte_4B3A19A = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformanceMaster_o *)v6->fields.myFsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3430/*"CANCEL"*/, 0LL);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0LL);
    BattlePerformanceMaster__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v8);
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
        sub_1BD36B4(this, skillInfo);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__object__o *battleItemEffectObject; // x0
  Il2CppObject *v11; // x21
  UnityEngine_Object_o *battleItemUi; // x21
  UnityEngine_Object_o *battleItemIcon; // x22
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  struct System_Collections_Generic_Dictionary_int__Coroutine__o *battleItemEffectCoroutines; // x22
  System_Collections_IEnumerator_o *v17; // x0
  Il2CppObject *v18; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B3A1D3 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, *(_QWORD *)&id);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    byte_4B3A1D3 = 1;
  }
  v18 = 0LL;
  value = 0LL;
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectObject;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &value,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
  {
    v11 = value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
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
      (const MethodInfo_322641C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
    if ( !battleItemEffectObject )
      goto LABEL_29;
    System_Collections_Generic_Dictionary_int__object___Remove(
      battleItemEffectObject,
      id,
      (const MethodInfo_322641C *)Method_System_Collections_Generic_Dictionary_int__Coroutine__Remove__);
  }
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.battleItemEffectCoroutines;
  if ( !battleItemEffectObject )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         battleItemEffectObject,
         id,
         &v18,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__TryGetValue__) )
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
  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4B31941 = 1;
  }
  v17 = BattlePerformanceMaster__DelayEffect(
          this,
          id,
          (UnityEngine_GameObject_o *)battleItemUi,
          1,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          v15);
  battleItemEffectObject = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_MonoBehaviour__StartCoroutine_70263544(
                                                                                     (UnityEngine_MonoBehaviour_o *)this,
                                                                                     v17,
                                                                                     0LL);
  if ( !battleItemEffectCoroutines )
LABEL_29:
    sub_1BD36B4(battleItemEffectObject, *(_QWORD *)&id);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)battleItemEffectCoroutines,
    id,
    (Il2CppObject *)battleItemEffectObject,
    (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__Coroutine__set_Item__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v13; // x4
  int v14; // s0
  float v16; // s1
  float v17; // s1
  System_Collections_IEnumerator_o *v18; // x0
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *klass; // x20
  System_Collections_IEnumerator_o *v21; // x1

  v8 = this;
  if ( (byte_4B3A1D5 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster_TypeInfo, parentObj);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_24338/*"treasure"*/, v11);
    byte_4B3A1D5 = 1;
  }
  if ( id )
  {
    if ( !parentObj )
      goto LABEL_24;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         parentObj,
                         (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BattleDropHighPosition___);
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
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v17 = v16 + 0.22;
    }
    else
    {
      this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__get_transform(parentObj, 0LL);
      if ( !this )
        goto LABEL_24;
      this = (BattlePerformanceMaster_o *)UnityEngine_Transform__Find(
                                            (UnityEngine_Transform_o *)this,
                                            (System_String_o *)StringLiteral_24338/*"treasure"*/,
                                            0LL);
      if ( !this )
        goto LABEL_24;
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    }
    v18 = BattlePerformanceMaster__DelayEffect(v8, id, parentObj, 0, *(UnityEngine_Vector3_o *)&v14, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)v8, v18, 0LL);
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
          v21 = BattlePerformanceMaster__DelayShowItem(klass, waitTime, v19);
          UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)v8, v21, 0LL);
          return;
        }
      }
LABEL_24:
      sub_1BD36B4(this, parentObj);
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

  if ( (byte_4B3A1D1 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__, method);
    byte_4B3A1D1 = 1;
  }
  effectAfterNoblePhantasmCoroutine = this->fields.effectAfterNoblePhantasmCoroutine;
  this->fields._IsNoblePhantasm_k__BackingField = 1;
  if ( effectAfterNoblePhantasmCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_70264164(
      (UnityEngine_MonoBehaviour_o *)this,
      effectAfterNoblePhantasmCoroutine,
      0LL);
    this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_1BD33FC(
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
      sub_1BD36B4(v10, v11);
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
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *battleItemCountLabel; // x20
  UILabel_o *v6; // x19
  System_String_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B3A1CF & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    sub_1BD3458(&Method_SingletonTemplate_BattleItemData__get_Instance__, v3);
    byte_4B3A1CF = 1;
  }
  BattlePerformanceMaster__updateSkillIcon(this, method);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v4);
  battleItemCountLabel = (UnityEngine_Object_o *)this->fields.battleItemCountLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleItemCountLabel, 0LL, 0LL) )
  {
    v6 = this->fields.battleItemCountLabel;
    Instance = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !Instance || (Instance = BasicHelper__ToCommaString(*(_DWORD *)&Instance->fields._firstChar, 0LL), !v6) )
      sub_1BD36B4(Instance, v8);
    UILabel__set_text(v6, Instance, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__UseSkill(
        BattlePerformanceMaster_o *this,
        bool playSe,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PlayMakerFSM_o *perf; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B3A197 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_UseSkill__, playSe);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&StringLiteral_3430/*"CANCEL"*/, v6);
    byte_4B3A197 = 1;
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
      PlayMakerFSM__SendEvent(perf, (System_String_o *)StringLiteral_3430/*"CANCEL"*/, 0LL);
      return;
    }
LABEL_23:
    sub_1BD36B4(perf, playSe);
  }
  if ( playSe )
  {
    v14 = Method_BattlePerformanceMaster_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformanceMaster_UseSkill__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_UseSkill__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BD343C(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 8, 0LL);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.actSkillObject,
    (int64_t)useSkillObject,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_23;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0LL);
  if ( !BattlePerformanceMaster__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v19) )
  {
    BattlePerformanceMaster__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v20);
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

  if ( (byte_4B3A1D0 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_TypeInfo, method);
    byte_4B3A1D0 = 1;
  }
  v3 = sub_1BD36A4(BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_TypeInfo);
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191___ctor(
    (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BD36B4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattlePerformanceMaster__WantUseSkill(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *ValidTargetTypeArray; // x22
  System_Func_int__bool__o *v12; // x23
  BattleSelectServantWindow_o *SelectSvtWindow; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1
  System_Func_int__bool__o *v21; // x23
  BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t v29; // w0
  const MethodInfo *v30; // x2
  bool v31; // w8

  v6 = this;
  if ( (byte_4B3A198 & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_Any_int____76972496, skillInfo);
    sub_1BD3458(&System_Func_int__bool__TypeInfo, v7);
    sub_1BD3458(&Method_Target_isChoose__, v8);
    sub_1BD3458(&Method_Target_isSubChoose__, v9);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, v10);
    byte_4B3A198 = 1;
  }
  if ( !skillInfo )
    goto LABEL_19;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0LL);
  v12 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v12, 0LL, Method_Target_isSubChoose__, 0LL);
  if ( !BasicHelper__Any_int__49398640(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v12,
          (const MethodInfo_2F1C370 *)Method_BasicHelper_Any_int____76972496) )
  {
    v21 = (System_Func_int__bool__o *)sub_1BD36A4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(v21, 0LL, Method_Target_isChoose__, 0LL);
    if ( BasicHelper__Any_int__49398640(
           ValidTargetTypeArray,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_2F1C370 *)Method_BasicHelper_Any_int____76972496) )
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
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v6->fields.selectMSWindow,
            (int64_t)SelectMainSubSvtWindow,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          this = (BattlePerformanceMaster_o *)v6->fields.selectMSWindow;
          if ( this )
          {
            ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
              this,
              this->klass[1]._1.generic_class);
            v29 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                    skillInfo,
                    skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
            BattlePerformanceMaster__openSkillSelectSvtWindow(v6, v29, v30);
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
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
          v31 = 0;
          goto LABEL_18;
        }
      }
    }
LABEL_19:
    sub_1BD36B4(this, skillInfo);
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v6->fields.skillselectSvtWindow,
    (int64_t)SelectSvtWindow,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (BattlePerformanceMaster_o *)v6->fields.skillselectSvtWindow;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattlePerformanceMaster_o *, void *))this->klass[1]._1.parent)(
    this,
    this->klass[1]._1.generic_class);
  BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(v6, v20);
LABEL_14:
  v31 = 1;
LABEL_18:
  *isOpenOtherWindow = v31;
}


void __fastcall BattlePerformanceMaster___ProcCloseFieldConf_b__172_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1DA & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1DA = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster___ProcOpenFieldConf_b__171_0(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1D9 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1D9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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

  if ( (byte_4B3A1A0 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, flg);
    byte_4B3A1A0 = 1;
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
      PlayMakerFSM__SendEvent(selectMSWindow, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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
    sub_1BD36B4(selectMSWindow, flg);
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

  if ( (byte_4B3A1A6 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_changeShortSkill__, method);
    byte_4B3A1A6 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipSkillConf(data, 0LL), !this->fields.data) )
    sub_1BD36B4(data, method);
  v4 = Method_BattlePerformanceMaster_changeShortSkill__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeShortSkill__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_changeShortSkill__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0LL);
  BattlePerformanceMaster__updateShortSkill(this, v6);
}


void __fastcall BattlePerformanceMaster__changeSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B3A1AA & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_changeSkipDead__, method);
    byte_4B3A1AA = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleSkipDead(data, 0LL), !this->fields.data) )
    sub_1BD36B4(data, method);
  v4 = Method_BattlePerformanceMaster_changeSkipDead__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeSkipDead__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_changeSkipDead__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0LL);
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

  if ( (byte_4B3A1A8 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_changeTdConstantVelocity__, method);
    byte_4B3A1A8 = 1;
  }
  data = this->fields.data;
  if ( !data || (BattleData__toggleTdConstantVelocity(data, 0LL), !this->fields.data) )
    sub_1BD36B4(data, method);
  v4 = Method_BattlePerformanceMaster_changeTdConstantVelocity__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_changeTdConstantVelocity__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_changeTdConstantVelocity__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlayCommonSe(v5, 9, 0LL);
  BattlePerformanceMaster__updateTdConstantVelocity(this, v6);
}


void __fastcall BattlePerformanceMaster__checkCommandSpellTarget(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B3A189 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_CommandSpellMaster___, method);
    sub_1BD3458(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, v5);
    byte_4B3A189 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.tmp_commandSpellId,
               (const MethodInfo_31D1EF0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
  if ( !Instance || !this->fields.logic )
    goto LABEL_12;
  if ( BattleLogic__checkSelectFunctionTarget(this->fields.logic, *((System_Int32_array **)Instance + 6), 0, 0LL) )
  {
    BattlePerformanceMaster__openSelectSvtWindow(this, v7);
    return;
  }
  Instance = this->fields.myFsm;
  if ( !Instance
    || (PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL),
        (Instance = this->fields.logic) == 0LL) )
  {
LABEL_12:
    sub_1BD36B4(Instance, v7);
  }
  BattleLogic__useCommandSpell((BattleLogic_o *)Instance, this->fields.tmp_commandSpellId, -1, 0LL);
}


void __fastcall BattlePerformanceMaster__checkSkipFlg(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleLogic_UseSkillObject_o *v6; // x8
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v8; // x8
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 *v15; // x8
  int64_t v16; // x1

  v2 = this;
  if ( (byte_4B3A18C & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    sub_1BD3458(&StringLiteral_12329/*"SKIP"*/, v3);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_9387/*"NG"*/, v4);
    byte_4B3A18C = 1;
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
  v6 = v2->fields.tmp_useSkill;
  if ( !v6 )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)v6->fields.skillInfo;
  if ( !this )
    goto LABEL_22;
  this = (BattlePerformanceMaster_o *)BattleSkillInfoData__IsOpenCond((BattleSkillInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_17:
    this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
    if ( this )
    {
      v15 = &StringLiteral_9387/*"NG"*/;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.systemflg_skipskillconf )
  {
    v8 = v2->fields.tmp_useSkill;
    if ( v8 )
    {
      this = (BattlePerformanceMaster_o *)v8->fields.skillInfo;
      if ( this )
      {
        if ( BattleSkillInfoData__HasCond((BattleSkillInfoData_o *)this, 0LL) || v2->fields.isLongTap )
          goto LABEL_15;
        v16 = (int64_t)v2->fields.tmp_useSkill;
        v2->fields.useSkillObject = (struct BattleLogic_UseSkillObject_o *)v16;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.useSkillObject, v16, v9, v10, v11, v12, v13, v14);
        this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
        if ( this )
        {
          v15 = &StringLiteral_12329/*"SKIP"*/;
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_1BD36B4(this, method);
  }
LABEL_15:
  this = (BattlePerformanceMaster_o *)v2->fields.myFsm;
  if ( !this )
    goto LABEL_22;
  v15 = &StringLiteral_5574/*"END_PROC"*/;
LABEL_19:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v15, 0LL);
}


void __fastcall BattlePerformanceMaster__checkTutorial(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *logic; // x0
  PlayMakerFSM_o *myFsm; // x8
  __int64 *v6; // x9

  if ( (byte_4B3A1B5 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_9761/*"OK"*/, method);
    sub_1BD3458(&StringLiteral_12329/*"SKIP"*/, v3);
    byte_4B3A1B5 = 1;
  }
  logic = this->fields.logic;
  if ( !logic
    || (logic = (BattleLogic_o *)BattleLogic__isTutorialMasterStatus(logic, 0LL), (myFsm = this->fields.myFsm) == 0LL) )
  {
    sub_1BD36B4(logic, method);
  }
  v6 = &StringLiteral_9761/*"OK"*/;
  if ( ((unsigned __int8)logic & 1) == 0 )
    v6 = &StringLiteral_12329/*"SKIP"*/;
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattlePerformanceMaster__clickBoostSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A191 & 1) == 0 )
  {
    sub_1BD3458(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_1BD3458(&StringLiteral_3565/*"CLICK_BOOST"*/, v5);
    byte_4B3A191 = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_1BD36A4(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.tmp_useSkill = v6;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tmp_useSkill, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v13);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3565/*"CLICK_BOOST"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__clickSkillIcon(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  __int64 v7; // x1
  BattleLogic_UseSkillObject_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  PlayMakerFSM_o *logic; // x0

  v6 = isLong;
  if ( (byte_4B3A196 & 1) == 0 )
  {
    sub_1BD3458(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_1BD3458(&StringLiteral_3601/*"CLICK_SKILLICON"*/, v7);
    byte_4B3A196 = 1;
  }
  v8 = (BattleLogic_UseSkillObject_o *)sub_1BD36A4(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v8, skillInfo, 0LL);
  this->fields.tmp_useSkill = v8;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.tmp_useSkill, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  logic = (PlayMakerFSM_o *)this->fields.logic;
  this->fields.isLongTap = v6;
  if ( !logic )
    goto LABEL_8;
  if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)logic, 0LL) )
  {
    logic = this->fields.myFsm;
    if ( logic )
    {
      PlayMakerFSM__SendEvent(logic, (System_String_o *)StringLiteral_3601/*"CLICK_SKILLICON"*/, 0LL);
      return;
    }
LABEL_8:
    sub_1BD36B4(logic, v15);
  }
}


void __fastcall BattlePerformanceMaster__compCloseALL(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A181 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5556/*"END_CLOSEALL"*/, method);
    byte_4B3A181 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5556/*"END_CLOSEALL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1BB & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1BB = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4B3A1A5 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1A5 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compCloseSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A182 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A182 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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
  if ( (byte_4B3A17E & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A17E = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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
  if ( (byte_4B3A186 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A186 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1B8 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1B8 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1C7 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1C7 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
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
  if ( (byte_4B3A180 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A180 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  BattlePerformanceMaster__proclight(v4, v3->fields.menuBtn, 0, v5);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v6);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4B3A1A3 & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A1A3 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.menuBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  PlayMakerFSM_o *myFsm; // x0

  v3 = this;
  if ( (byte_4B3A17C & 1) == 0 )
  {
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A17C = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 1, v2);
  myFsm = v3->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v4);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__compOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A184 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, method);
    byte_4B3A184 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__endMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        UIWidget_o *widget,
        BattlePerformanceMaster_MasterBuffEffectData_o *closeBuffData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Component_object; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *effectTween; // x22
  bool v10; // w0
  __int64 v11; // x1
  UnityEngine_Behaviour_o *perf; // x0

  Component_object = (UnityEngine_Object_o *)widget;
  if ( (byte_4B3A1C4 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, widget);
    sub_1BD3458(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    byte_4B3A1C4 = 1;
  }
  effectTween = (UnityEngine_Object_o *)this->fields.effectTween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(effectTween, 0LL, 0LL);
  if ( !closeBuffData && v10 )
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
    closeBuffData = (BattlePerformanceMaster_MasterBuffEffectData_o *)sub_1BD36A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
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
  if ( !Component_object )
  {
    perf = (UnityEngine_Behaviour_o *)this->fields.master_root;
    if ( !perf )
      goto LABEL_26;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)perf,
                                                 (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BD36B4(perf, v11);
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

  if ( (byte_4B3A1C5 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_TypeInfo, method);
    byte_4B3A1C5 = 1;
  }
  v3 = sub_1BD36A4(BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_TypeInfo);
  BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179___ctor(
    (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BD36B4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__endSelectSvtError(
        BattlePerformanceMaster_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B3A1A1 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_4B3A1A1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.perf) == 0LL) )
  {
    sub_1BD36B4(Instance, v5);
  }
  BattlePerformance__SendCancelIfAllClosePreSkillSelWindows((BattlePerformance_o *)Instance, this->fields.myFsm, 0LL);
}


void __fastcall BattlePerformanceMaster__endSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1AD & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_12430/*"START_TAC"*/, method);
    byte_4B3A1AD = 1;
  }
  BattlePerformanceMaster__updateCommandSpellIcon(this, method);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v3);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12430/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__flashBoostSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattleBoostSkillIconComponent_o *boostSkillIcon; // x0

  boostSkillIcon = this->fields.boostSkillIcon;
  if ( !boostSkillIcon )
    sub_1BD36B4(0LL, method);
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
    sub_1BD36B4(data, method);
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
    sub_1BD36B4(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL);
}


bool __fastcall BattlePerformanceMaster__isWinSpellWindowOpenOrOpening(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent_o *win_Spell; // x0

  win_Spell = (BattleWindowComponent_o *)this->fields.win_Spell;
  if ( !win_Spell )
    sub_1BD36B4(0LL, method);
  return BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL);
}


void __fastcall BattlePerformanceMaster__loadData(BattlePerformanceMaster_o *this, const MethodInfo *method)
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
  __int64 data; // x0
  struct BattleData_o *v17; // x8
  int32_t v18; // w20
  int32_t v19; // w8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleData_o *v26; // x8
  const MethodInfo *v27; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattleData_o *v29; // x9
  struct BattleData_o *v30; // x8
  struct System_Collections_Generic_List_BattleSkillInfoData__o *masterSkillInfo; // x8
  struct BattleServantSkillIConComponent_array *skillIcon; // x20
  int size; // w26
  int max_length; // w8
  __int64 v35; // x22
  UnityEngine_Object_o *gameObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_Collections_Generic_List_object__o *v40; // x21
  int32_t v41; // w22
  UnityEngine_Component_o *v42; // x27
  int v43; // w28
  Il2CppObject *skillIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *v46; // x24
  UnityEngine_Transform_o *v47; // x25
  UnityEngine_Transform_o *v48; // x25
  struct BattlePerformance_o *v49; // x8
  struct BattleData_o *v50; // x8
  float skillIconOffset; // s11
  float v52; // s11
  struct BattleData_o *v53; // x8
  UISprite_o *skillIconSplit; // x24
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  System_Object_array *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct BattleData_o *v73; // x8
  struct BattleData_o *v74; // x8
  struct BattleData_o *v75; // x8
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v77; // x1
  int32_t v78; // w20
  const MethodInfo *v79; // x2
  const MethodInfo *v80; // x1
  char v81; // [xsp+8h] [xbp-88h]
  int32_t overwriteImageId; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3A174 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___, v3);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Count__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__, v9);
    sub_1BD3458(&System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo, v10);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___, v11);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v12);
    sub_1BD3458(&Method_SingletonTemplate_BattleItemData__get_Instance__, v13);
    sub_1BD3458(&StringLiteral_23633/*"skill_partition"*/, v14);
    sub_1BD3458(&StringLiteral_19854/*"frame_master_bg_disable"*/, v15);
    byte_4B3A174 = 1;
  }
  overwriteImageId = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_99;
  data = BattleData__getMasterEquipId((BattleData_o *)data, 0LL);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_99;
  v18 = data;
  data = (__int64)v17->fields.quest_ent;
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
  v19 = overwriteImageId;
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
    v19 = overwriteImageId;
  }
  if ( v19 == -1 )
  {
LABEL_22:
    data = (__int64)this->fields.master_root;
    if ( !data )
      goto LABEL_99;
    data = (__int64)UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)data,
                      (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !data )
      goto LABEL_99;
    UISprite__set_spriteName((UISprite_o *)data, (System_String_o *)StringLiteral_19854/*"frame_master_bg_disable"*/, 0LL);
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
    v26 = this->fields.data;
    if ( !v26 )
      goto LABEL_99;
    MasterFaceManager__CreatePrefab_38700440(
      this->fields.face_root,
      1,
      v26->fields.battleGenderType,
      v18,
      2,
      0LL,
      overwriteImageId,
      0LL);
    BattlePerformanceMaster__OverwriteMasterBackgroundImage(this, v27);
  }
LABEL_25:
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_99;
  v29 = perf->fields.data;
  if ( !v29 )
    goto LABEL_99;
  if ( v29->fields.masterSkillIconId >= 1 )
  {
    BattlePerformanceMaster__SetupMasterSkillBtn(this, method);
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_99;
  }
  v30 = perf->fields.data;
  if ( !v30 )
    goto LABEL_99;
  masterSkillInfo = v30->fields.masterSkillInfo;
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
      v35 = 0LL;
      do
      {
        if ( (unsigned int)v35 >= max_length )
          sub_1BD36BC(data, method);
        data = (__int64)skillIcon->m_Items[v35];
        if ( !data )
          goto LABEL_99;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
        max_length = skillIcon->max_length;
      }
      while ( (int)++v35 < max_length );
    }
    this->fields.skillIcon = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.skillIcon, 0LL, v20, v21, v22, v23, v24, v25);
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
  v40 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_BattleServantSkillIConComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent___ctor__);
  if ( size >= 1 )
  {
    v81 = 0;
    v41 = 0;
    v42 = 0LL;
    v43 = -1;
    while ( 1 )
    {
      data = (__int64)this->fields.win_Skill;
      if ( !data )
        goto LABEL_99;
      skillIconPrefab = (Il2CppObject *)this->fields.skillIconPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (__int64)UnityEngine_Object__Instantiate_object__50031952(
                        skillIconPrefab,
                        transform,
                        (const MethodInfo_2FB6D50 *)Method_UnityEngine_Object_Instantiate_BattleServantSkillIConComponent___);
      if ( !data )
        goto LABEL_99;
      v46 = (UnityEngine_Component_o *)data;
      data = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)data, 0LL);
      v47 = (UnityEngine_Transform_o *)data;
      if ( !byte_4B31946 )
      {
        data = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
        byte_4B31946 = 1;
      }
      if ( !v47 )
        goto LABEL_99;
      UnityEngine_Transform__set_localScale(v47, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      data = (__int64)UnityEngine_Component__get_transform(v46, 0LL);
      v48 = (UnityEngine_Transform_o *)data;
      if ( !byte_4B31941 )
      {
        data = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
        byte_4B31941 = 1;
      }
      if ( !v48 )
        goto LABEL_99;
      UnityEngine_Transform__set_localEulerAngles(v48, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
      v49 = this->fields.perf;
      if ( !v49 )
        goto LABEL_99;
      v50 = v49->fields.data;
      if ( !v50 )
        goto LABEL_99;
      data = (__int64)v50->fields.masterSkillInfo;
      if ( !data )
        goto LABEL_99;
      skillIconOffset = this->fields.skillIconOffset;
      data = (__int64)System_Collections_Generic_List_object___get_Item(
                        (System_Collections_Generic_List_object__o *)data,
                        v41,
                        (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_BattleSkillInfoData__get_Item__);
      if ( !data )
        goto LABEL_99;
      v52 = x + (float)(skillIconOffset * (float)(size + v43));
      if ( *(_BYTE *)(data + 84) )
        v42 = v46;
      if ( *(_BYTE *)(data + 84) )
      {
        v53 = this->fields.data;
        if ( !v53 )
          goto LABEL_99;
        if ( !v53->fields._notDispEquipSkillIconSplit_k__BackingField )
        {
          if ( (v81 & 1) == 0 )
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
            data = AtlasManager__SetEventSprite(skillIconSplit, (System_String_o *)StringLiteral_23633/*"skill_partition"*/, 0LL);
          }
          v46 = v42;
          v81 = 1;
          v52 = v52 - this->fields.skillIconSplitSpace;
        }
      }
      if ( !v46 )
        goto LABEL_99;
      data = (__int64)UnityEngine_Component__get_transform(v46, 0LL);
      if ( !data )
        goto LABEL_99;
      v84.fields.x = v52;
      v84.fields.y = y;
      v84.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)data, v84, 0LL);
      data = (__int64)UnityEngine_Component__GetComponent_object_(
                        v46,
                        (const MethodInfo_2F28128 *)Method_UnityEngine_Component_GetComponent_BattleServantSkillIConComponent___);
      if ( !v40 )
        goto LABEL_99;
      items = v40->fields._items;
      v62 = Method_System_Collections_Generic_List_BattleServantSkillIConComponent__Add__;
      ++v40->fields._version;
      if ( !items )
        goto LABEL_99;
      v63 = v40->fields._size;
      v64 = data;
      if ( (unsigned int)v63 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)data,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + v63;
        v40->fields._size = v63 + 1;
        v65[4] = (Il2CppClass *)v64;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
      }
      ++v41;
      --v43;
      if ( size == v41 )
        goto LABEL_85;
    }
  }
  if ( !v40 )
    goto LABEL_99;
LABEL_85:
  v66 = System_Collections_Generic_List_object___ToArray(
          v40,
          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_BattleServantSkillIConComponent__ToArray__);
  this->fields.skillIcon = (struct BattleServantSkillIConComponent_array *)v66;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.skillIcon, (int64_t)v66, v67, v68, v69, v70, v71, v72);
  data = (__int64)this->fields.skillIconPrefab;
  if ( !data || (data = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL)) == 0 )
LABEL_99:
    sub_1BD36B4(data, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
LABEL_88:
  v73 = this->fields.data;
  if ( !v73 )
    goto LABEL_99;
  data = (__int64)v73->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  data = QuestPhaseEntity__GetIconItemNumberDispType((QuestPhaseEntity_o *)data, 0LL);
  v74 = this->fields.data;
  this->fields.iconItemNumberDispType = data;
  if ( !v74 )
    goto LABEL_99;
  data = (__int64)v74->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  data = QuestPhaseEntity__GetNotDispEquipSkillChargeTurn((QuestPhaseEntity_o *)data, 0LL);
  v75 = this->fields.data;
  this->fields.notDispEquipSkillChargeTurn = data;
  if ( !v75 )
    goto LABEL_99;
  data = (__int64)v75->fields.questphase_ent;
  if ( !data )
    goto LABEL_99;
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)data, 0LL);
  if ( BattleItemObjectId >= 1 )
  {
    v78 = BattleItemObjectId;
    data = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_BattleItemData__get_Instance__);
    if ( !data )
      goto LABEL_99;
    BattleItemData__SetItemId((BattleItemData_o *)data, v78, 0LL);
    BattlePerformanceMaster__InitializeBattleItem(this, v78, v79);
  }
  BattlePerformanceMaster__updateSkillIcon(this, v77);
  BattlePerformanceMaster__updateCommandSpellIcon(this, v80);
  data = (__int64)this->fields.master_root;
  if ( !data )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
}


void __fastcall BattlePerformanceMaster__modeCom(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  UnityEngine_Object_o *fieldConf; // x20

  if ( (byte_4B3A1B3 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    byte_4B3A1B3 = 1;
  }
  v4 = sub_1BD36A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v4, v5, v6, v7, v8, v9, v10);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v11);
  master_root = this->fields.master_root;
  if ( !master_root )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(master_root, 0, 0LL);
  master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf;
  if ( !master_root )
    goto LABEL_17;
  BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 0, v14);
  BattlePerformanceMaster__procCloseSkill(this, v15);
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
    sub_1BD36B4(master_root, v12);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))master_root->klass[1]._1.events)(
    master_root,
    0LL,
    master_root->klass[1]._1.properties);
}


void __fastcall BattlePerformanceMaster__modeTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_GameObject_o *master_root; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  if ( (byte_4B3A17A & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, method);
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, v3);
    byte_4B3A17A = 1;
  }
  v4 = sub_1BD36A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 16843009;
  this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose, v4, v5, v6, v7, v8, v9, v10);
  BattlePerformanceMaster__endMasterBuffEffect(this, 0LL, 0LL, v11);
  master_root = this->fields.master_root;
  if ( !master_root
    || (UnityEngine_GameObject__SetActive(master_root, 1, 0LL),
        (master_root = (UnityEngine_GameObject_o *)this->fields.enemyMasterPerf) == 0LL)
    || (BattlePerformanceEnemyMst__SetRootActive((BattlePerformanceEnemyMst_o *)master_root, 1, v14),
        BattlePerformanceMaster__updateSkillIcon(this, v15),
        (master_root = (UnityEngine_GameObject_o *)this->fields.myFsm) == 0LL) )
  {
    sub_1BD36B4(master_root, v12);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)master_root, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickMenuButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  if ( (byte_4B3A1C1 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3591/*"CLICK_MENU"*/, method);
    byte_4B3A1C1 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  if ( BattlePerformance__isOpenOrOpeningMainWindow(perf, 0LL) )
    return;
  perf = (BattlePerformance_o *)this->fields.skillConfWindow;
  if ( !perf )
LABEL_10:
    sub_1BD36B4(perf, method);
  if ( !BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)perf, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.myFsm;
    if ( perf )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3591/*"CLICK_MENU"*/, 0LL);
      return;
    }
    goto LABEL_10;
  }
}


void __fastcall BattlePerformanceMaster__onClickSkillCancel(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A19D & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3430/*"CANCEL"*/, method);
    byte_4B3A19D = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3430/*"CANCEL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSkillOK(
        BattlePerformanceMaster_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleLogic_UseSkillObject_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A19C & 1) == 0 )
  {
    sub_1BD3458(&BattleLogic_UseSkillObject_TypeInfo, skillInfo);
    sub_1BD3458(&StringLiteral_9761/*"OK"*/, v5);
    byte_4B3A19C = 1;
  }
  v6 = (BattleLogic_UseSkillObject_o *)sub_1BD36A4(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v6, skillInfo, 0LL);
  this->fields.useSkillObject = v6;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.useSkillObject, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, v13);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_9761/*"OK"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__onClickSpellButton(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  struct BattleData_o *data; // x8
  struct BattleData_o *v6; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B3A1C0 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_onClickSpellButton__, method);
    sub_1BD3458(&StringLiteral_3603/*"CLICK_SPELL"*/, v3);
    byte_4B3A1C0 = 1;
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
    v6 = this->fields.data;
    if ( v6 )
    {
      perf = (BattlePerformance_o *)v6->fields.quest_ent;
      if ( perf )
      {
        if ( QuestEntity__HasFlag((QuestEntity_o *)perf, 0x100000000LL, 0LL) )
          goto LABEL_14;
        perf = (BattlePerformance_o *)this->fields.myFsm;
        if ( perf )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_3603/*"CLICK_SPELL"*/, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BD36B4(perf, method);
  }
LABEL_14:
  v7 = Method_BattlePerformanceMaster_onClickSpellButton__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_onClickSpellButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_onClickSpellButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
}


void __fastcall BattlePerformanceMaster__onCloseEnemyServantConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1B9 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3621/*"CLOSE_CONF"*/, method);
    byte_4B3A1B9 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3621/*"CLOSE_CONF"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__openSelectSvtWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  BattleSelectServantWindow_o *v14; // x0
  struct BattleSelectServantWindow_o *v15; // x21
  BattleSelectServantWindow_SelectServantCallBack_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  BattleData_o *data; // x0
  BattleSelectServantWindow_o *v27; // x21
  BattleServantData_array *FieldPlayerServantList; // x0
  __int64 v29; // x1

  if ( (byte_4B3A18A & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_selectedSvt__, method);
    sub_1BD3458(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v3);
    byte_4B3A18A = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    sub_1BD36B4(0LL, method);
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  this->fields.selectSvtWindow = SelectSvtWindow;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.selectSvtWindow,
    (int64_t)SelectSvtWindow,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = this->fields.selectSvtWindow;
  if ( !v14 )
    sub_1BD36B4(0LL, v13);
  BattleSelectServantWindow__setUseClose(v14, 1, 0LL);
  v15 = *p_selectSvtWindow;
  v16 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1BD36A4(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSvt__,
    0LL);
  if ( !v15 )
    sub_1BD36B4(v17, v18);
  v15->fields.selectCallBack = v16;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v15->fields.selectCallBack, (int64_t)v16, v19, v20, v21, v22, v23, v24);
  data = this->fields.data;
  if ( !data )
    sub_1BD36B4(0LL, v25);
  v27 = this->fields.selectSvtWindow;
  FieldPlayerServantList = BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !v27 )
    sub_1BD36B4(FieldPlayerServantList, FieldPlayerServantList);
  BattleSelectServantWindow__SetServantData(
    v27,
    FieldPlayerServantList,
    0,
    this->fields.tmp_commandSpellId,
    this->fields.data,
    0LL);
  if ( !*p_selectSvtWindow )
    sub_1BD36B4(0LL, v29);
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, _QWORD, Il2CppMethodPointer))(*p_selectSvtWindow)->klass->vtable._10_Open.method)(
    *p_selectSvtWindow,
    0LL,
    (*p_selectSvtWindow)->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__openSkillSelectMainSubSvtWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  char *data; // x0
  struct BattleSelectMainSubServantWindow_o *SelectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o **p_selectMSWindow; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct BattleSelectMainSubServantWindow_o *selectMSWindow; // x21
  BattleSelectMainSubServantWindow_SelectedCallBack_o *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleData_o *v33; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v35; // x21
  System_String_o *v36; // x22
  NotificationDialog_ClickDelegate_o *v37; // x23

  if ( (byte_4B3A19F & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_callBackSelectedMainSub__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_endSelectSvtError__, v3);
    sub_1BD3458(&NotificationDialog_ClickDelegate_TypeInfo, v4);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BD3458(&StringLiteral_3007/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, v8);
    sub_1BD3458(&StringLiteral_3008/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, v9);
    byte_4B3A19F = 1;
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
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.selectMSWindow,
        (int64_t)SelectMainSubSvtWindow,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      selectMSWindow = this->fields.selectMSWindow;
      v20 = (BattleSelectMainSubServantWindow_SelectedCallBack_o *)sub_1BD36A4(BattleSelectMainSubServantWindow_SelectedCallBack_TypeInfo);
      BattleSelectMainSubServantWindow_SelectedCallBack___ctor(
        v20,
        (Il2CppObject *)this,
        Method_BattlePerformanceMaster_callBackSelectedMainSub__,
        0LL);
      if ( selectMSWindow )
      {
        selectMSWindow->fields.callBack = v20;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&selectMSWindow->fields.callBack,
          (int64_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        data = (char *)this->fields.selectMSWindow;
        if ( data )
        {
          v33 = this->fields.data;
          *((_QWORD *)data + 19) = v33;
          sub_1BD33FC((PartyOrganizationUtility_o *)(data + 152), (int64_t)v33, v27, v28, v29, v30, v31, v32);
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
    sub_1BD36B4(data, method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"BATTLE_SELECTSUBERROR_NOSUB_TITLE"*/, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"BATTLE_SELECTSUBERROR_NOSUB_CONF"*/, 0LL);
  v37 = (NotificationDialog_ClickDelegate_o *)sub_1BD36A4(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(
    v37,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_endSelectSvtError__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog_30804932(
    (CommonUI_o *)Instance,
    v35,
    v36,
    v37,
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
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_skillselectSvtWindow; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct BattleSelectServantWindow_o *skillselectSvtWindow; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  BattleSelectServantWindow_o *v23; // x20

  if ( (byte_4B3A19B & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_selectedSkillSvt__, *(_QWORD *)&skillId);
    sub_1BD3458(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo, v5);
    byte_4B3A19B = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0LL);
  p_skillselectSvtWindow = &this->fields.skillselectSvtWindow;
  this->fields.skillselectSvtWindow = SelectSvtWindow;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.skillselectSvtWindow,
    (int64_t)SelectSvtWindow,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  perf = (BattlePerformance_o *)this->fields.skillselectSvtWindow;
  if ( !perf )
    goto LABEL_10;
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, 1, 0LL);
  skillselectSvtWindow = this->fields.skillselectSvtWindow;
  v16 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1BD36A4(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_selectedSkillSvt__,
    0LL);
  if ( !skillselectSvtWindow
    || (skillselectSvtWindow->fields.selectCallBack = v16,
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&skillselectSvtWindow->fields.selectCallBack,
          (int64_t)v16,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL)
    || (v23 = this->fields.skillselectSvtWindow,
        perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0LL),
        !v23)
    || (BattleSelectServantWindow__SetServantData(v23, (BattleServantData_array *)perf, skillId, -1, 0LL, 0LL),
        (perf = (BattlePerformance_o *)*p_skillselectSvtWindow) == 0LL) )
  {
LABEL_10:
    sub_1BD36B4(perf, *(_QWORD *)&skillId);
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
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformanceMaster_o *v6; // x0
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  BattleMenuWindowComponent_o *win_Menu; // x0
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v11; // x21
  UnityEngine_Object_o *fieldConf; // x20

  v3 = this;
  if ( (byte_4B3A1B1 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compCloseALL__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    byte_4B3A1B1 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v6, v3->fields.menuBtn, 0, v7);
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
  v11 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v11, (Il2CppObject *)v3, Method_BattlePerformanceMaster_compCloseALL__, 0LL);
  if ( !win_Skill )
    goto LABEL_19;
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v11,
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
    sub_1BD36B4(win_Menu, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B3A194 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_CloseBoostSkillConfComp__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procCloseBoostSkillConf__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4B3A194 = 1;
  }
  v5 = Method_BattlePerformanceMaster_procCloseBoostSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseBoostSkillConf__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procCloseBoostSkillConf__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 10, 0LL);
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseBoostSkillConfComp__,
    0LL);
  if ( !boostSkillConfWindow )
    sub_1BD36B4(v9, v10);
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))boostSkillConfWindow->klass->vtable._12_Close.method)(
    boostSkillConfWindow,
    v8,
    boostSkillConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseButtonCommandSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A187 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3638/*"CLOSE_SPELL"*/, method);
    byte_4B3A187 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3638/*"CLOSE_SPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleData_o *data; // x0
  struct BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v6; // x21

  if ( (byte_4B3A1BA & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compCloseEnemyConf__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B3A1BA = 1;
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
    v6 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v6,
      (Il2CppObject *)this,
      Method_BattlePerformanceMaster_compCloseEnemyConf__,
      0LL);
    if ( warBoard_win_EnemyConf )
      goto LABEL_9;
LABEL_10:
    sub_1BD36B4(data, method);
  }
  v6 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseEnemyConf__,
    0LL);
LABEL_9:
  BattleServantConfConponent__Close(warBoard_win_EnemyConf, v6, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B3A1A4 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compCloseMenu__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procCloseMenuWindow__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4B3A1A4 = 1;
  }
  v5 = Method_BattlePerformanceMaster_procCloseMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseMenuWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procCloseMenuWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 10, 0LL);
  BattlePerformanceMaster__proclight(v7, this->fields.menuBtn, 0, v8);
  win_Menu = this->fields.win_Menu;
  v10 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v10, (Il2CppObject *)this, Method_BattlePerformanceMaster_compCloseMenu__, 0LL);
  if ( !win_Menu )
    sub_1BD36B4(v11, v12);
  BattleMenuWindowComponent__Close(win_Menu, v10, 0LL);
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
    sub_1BD36B4(0LL, v6);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, _QWORD, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    0LL,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  BattlePerformance_o *perf; // x0
  __int64 v10; // x1

  if ( (byte_4B3A18F & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_CloseSkillConfComp__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procCloseSkillConf__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4B3A18F = 1;
  }
  v5 = Method_BattlePerformanceMaster_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillConf__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procCloseSkillConf__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 10, 0LL);
  skillConfWindow = this->fields.skillConfWindow;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_CloseSkillConfComp__,
    0LL);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))skillConfWindow->klass->vtable._12_Close.method)(
          skillConfWindow,
          v8,
          skillConfWindow->klass->vtable._13_CompClose.methodPtr),
        (perf = this->fields.perf) == 0LL) )
  {
    sub_1BD36B4(perf, v10);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0LL, 0LL);
}


void __fastcall BattlePerformanceMaster__procCloseSkillWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B3A17D & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compCloseSkillWindow__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procCloseSkillWindow__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4B3A17D = 1;
  }
  v5 = Method_BattlePerformanceMaster_procCloseSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSkillWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procCloseSkillWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 10, 0LL);
  BattlePerformanceMaster__proclight(v7, this->fields.skillBtn, 0, v8);
  win_Skill = this->fields.win_Skill;
  v10 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSkillWindow__,
    0LL);
  if ( !win_Skill )
    sub_1BD36B4(v11, v12);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._12_Close.method)(
    win_Skill,
    v10,
    win_Skill->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procCloseSpellWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B3A185 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compCloseSpellWindow__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procCloseSpellWindow__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    byte_4B3A185 = 1;
  }
  v5 = Method_BattlePerformanceMaster_procCloseSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procCloseSpellWindow__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procCloseSpellWindow__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlayCommonSe(v6, 10, 0LL);
  win_Spell = this->fields.win_Spell;
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compCloseSpellWindow__,
    0LL);
  if ( !win_Spell )
    sub_1BD36B4(v9, v10);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Spell->klass->vtable._12_Close.method)(
    win_Spell,
    v8,
    win_Spell->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenBoostSkillConf(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *boostSkillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleSkillConfComponent_o *v14; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4B3A192 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B3A192 = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  boostSkillConfWindow = this->fields.boostSkillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !boostSkillConfWindow
    || (boostSkillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&boostSkillConfWindow->fields.target,
          (int64_t)gameObject,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        !tmp_useSkill)
    || (gameObject = this->fields.boostSkillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v14 = this->fields.boostSkillConfWindow,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenBoostSkillConfComplete__,
          0LL),
        !v14) )
  {
    sub_1BD36B4(gameObject, v7);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
    v14,
    v15,
    v14->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenEnemyConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattlePerformance_o *perf; // x0
  BattleServantData_o *v6; // x20
  BattleServantConfConponent_o *warBoard_win_EnemyConf; // x20
  BattleWindowComponent_EndCall_o *v8; // x21

  if ( (byte_4B3A1B7 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compOpenEnemyConf__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v4);
    byte_4B3A1B7 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_16;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_16;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_16;
  perf = (BattlePerformance_o *)BattleData__getEnemyServantDataIndex((BattleData_o *)perf, this->fields.tmp_index, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v6 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)BattleData__IsWarBoard(this->fields.data, 0LL);
  if ( ((unsigned __int8)perf & 1) == 0 )
    goto LABEL_12;
  if ( !v6 )
    goto LABEL_16;
  if ( BattleServantData__IsEquip(v6, 0LL) )
  {
    perf = (BattlePerformance_o *)this->fields.warBoard_win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v6, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.warBoard_win_EnemyConf;
  }
  else
  {
LABEL_12:
    perf = (BattlePerformance_o *)this->fields.win_EnemyConf;
    if ( !perf )
      goto LABEL_16;
    BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)perf, v6, 1, 0LL, 0, 0LL);
    warBoard_win_EnemyConf = this->fields.win_EnemyConf;
  }
  v8 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenEnemyConf__,
    0LL);
  if ( !warBoard_win_EnemyConf )
LABEL_16:
    sub_1BD36B4(perf, method);
  BattleServantConfConponent__Open(warBoard_win_EnemyConf, v8, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenItemListWindow(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattlePerformanceMaster_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformanceMaster_o *v7; // x0
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  BattleItemListWindowComponent_o *itemListWindow; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  v3 = this;
  if ( (byte_4B3A1C6 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compOpenItemListWindow__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procOpenItemListWindow__, v4);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v5);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v6);
    byte_4B3A1C6 = 1;
  }
  BattlePerformanceMaster__proclight(this, v3->fields.skillBtn, 0, v2);
  BattlePerformanceMaster__proclight(v7, v3->fields.menuBtn, 0, v8);
  perf = v3->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)v3->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
  v11 = Method_BattlePerformanceMaster_procOpenItemListWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenItemListWindow__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procOpenItemListWindow__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BD343C(v11, v11[4]);
  OverwriteAssetSoundName__PlayCommonSe(v12, 9, 0LL);
  perf = (BattlePerformance_o *)v3->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        itemListWindow = v3->fields.itemListWindow,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)v3,
          Method_BattlePerformanceMaster_compOpenItemListWindow__,
          0LL),
        !itemListWindow) )
  {
LABEL_10:
    sub_1BD36B4(perf, v9);
  }
  BattleItemListWindowComponent__Open(itemListWindow, 0, v14, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenMasterMenu(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B3A17F & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_procOpenMasterMenu__, method);
    sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v3);
    byte_4B3A17F = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
  v5 = Method_BattlePerformanceMaster_procOpenMasterMenu__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMasterMenu__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procOpenMasterMenu__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BD343C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0LL);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf )
LABEL_9:
    sub_1BD36B4(perf, method);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.typeMetadataHandle)(
    perf,
    0LL,
    perf->klass[1]._1.interopData);
}


void __fastcall BattlePerformanceMaster__procOpenMenuWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  BattleMenuWindowComponent_o *win_Menu; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4B3A1A2 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compOpenMenu__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procOpenMenuWindow__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v5);
    byte_4B3A1A2 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_10;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_10;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
  v7 = Method_BattlePerformanceMaster_procOpenMenuWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenMenuWindow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procOpenMenuWindow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe(v8, 9, 0LL);
  BattlePerformanceMaster__proclight(v9, this->fields.skillBtn, 0, v10);
  BattlePerformanceMaster__proclight(v11, this->fields.menuBtn, 1, v12);
  perf = (BattlePerformance_o *)this->fields.win_Skill;
  if ( !perf
    || (((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.events)(
          perf,
          0LL,
          perf->klass[1]._1.properties),
        win_Menu = this->fields.win_Menu,
        v14 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v14,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenMenu__,
          0LL),
        !win_Menu) )
  {
LABEL_10:
    sub_1BD36B4(perf, method);
  }
  BattleMenuWindowComponent__Open(win_Menu, v14, 0LL);
}


void __fastcall BattlePerformanceMaster__procOpenSkillConf(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x21
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleSkillConfComponent_o *gameObject; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattleSkillConfComponent_o *v14; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4B3A18D & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_OpenSkillConfComplete__, method);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4B3A18D = 1;
  }
  tmp_useSkill = this->fields.tmp_useSkill;
  skillConfWindow = this->fields.skillConfWindow;
  gameObject = (BattleSkillConfComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)gameObject,
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&skillConfWindow->fields.target,
          (int64_t)gameObject,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13),
        !tmp_useSkill)
    || (gameObject = this->fields.skillConfWindow) == 0LL
    || (BattleSkillConfComponent__SetSkillConf(gameObject, tmp_useSkill->fields.skillInfo, 1, 0, 0LL),
        v14 = this->fields.skillConfWindow,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_OpenSkillConfComplete__,
          0LL),
        !v14) )
  {
    sub_1BD36B4(gameObject, v7);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
    v14,
    v15,
    v14->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSkillWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  struct BattleMasterSkillWindowComponent_o *win_Skill; // x20
  BattleWindowComponent_EndCall_o *v14; // x21

  if ( (byte_4B3A17B & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compOpenSkillWindow__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procOpenSkillWindow__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v5);
    byte_4B3A17B = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
  v7 = Method_BattlePerformanceMaster_procOpenSkillWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSkillWindow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procOpenSkillWindow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe(v8, 9, 0LL);
  BattlePerformanceMaster__proclight(v9, this->fields.skillBtn, 1, v10);
  BattlePerformanceMaster__proclight(v11, this->fields.menuBtn, 0, v12);
  win_Skill = this->fields.win_Skill;
  v14 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattlePerformanceMaster_compOpenSkillWindow__,
    0LL);
  if ( !win_Skill )
LABEL_9:
    sub_1BD36B4(perf, method);
  ((void (__fastcall *)(struct BattleMasterSkillWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))win_Skill->klass->vtable._10_Open.method)(
    win_Skill,
    v14,
    win_Skill->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall BattlePerformanceMaster__procOpenSpellWindow(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *perf; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  BattlePerformanceMaster_o *v9; // x0
  const MethodInfo *v10; // x3
  BattlePerformanceMaster_o *v11; // x0
  const MethodInfo *v12; // x3
  struct CommandSpellWindowComponent_o *win_Spell; // x20
  struct CommandSpellWindowComponent_o *v14; // x20
  BattleWindowComponent_EndCall_o *v15; // x21

  if ( (byte_4B3A183 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_compOpenSpellWindow__, method);
    sub_1BD3458(&Method_BattlePerformanceMaster_procOpenSpellWindow__, v3);
    sub_1BD3458(&BattleWindowComponent_EndCall_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_12405/*"START_CLOSE"*/, v5);
    byte_4B3A183 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_12;
  BattlePerformance__SetCommandSpellEffectStartAnimPlayFlag(perf, 0, 0LL);
  v7 = Method_BattlePerformanceMaster_procOpenSpellWindow__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_procOpenSpellWindow__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_procOpenSpellWindow__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlayCommonSe(v8, 9, 0LL);
  perf = (BattlePerformance_o *)this->fields.otherFsm;
  if ( !perf )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)StringLiteral_12405/*"START_CLOSE"*/, 0LL);
  BattlePerformanceMaster__proclight(v9, this->fields.skillBtn, 0, v10);
  BattlePerformanceMaster__proclight(v11, this->fields.menuBtn, 0, v12);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_12;
  win_Spell = this->fields.win_Spell;
  if ( !win_Spell
    || (win_Spell->fields.temporarySpell = perf->fields.screenEffect,
        win_Spell->fields.isUseTemporarySpell = BattleData__IsUseTemporaryCommandSpell((BattleData_o *)perf, 0LL),
        v14 = this->fields.win_Spell,
        v15 = (BattleWindowComponent_EndCall_o *)sub_1BD36A4(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattlePerformanceMaster_compOpenSpellWindow__,
          0LL),
        !v14)
    || (((void (__fastcall *)(struct CommandSpellWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))v14->klass->vtable._10_Open.method)(
          v14,
          v15,
          v14->klass->vtable._11_CompOpen.methodPtr),
        (perf = (BattlePerformance_o *)this->fields.win_Skill) == 0LL) )
  {
LABEL_12:
    sub_1BD36B4(perf, method);
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

  if ( (byte_4B3A188 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_3613/*"CLICK_USESPELL"*/, *(_QWORD *)&commandSpellId);
    byte_4B3A188 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_commandSpellId = commandSpellId;
  if ( !myFsm )
    sub_1BD36B4(0LL, *(_QWORD *)&commandSpellId);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_3613/*"CLICK_USESPELL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__proclight(
        BattlePerformanceMaster_o *this,
        UnityEngine_GameObject_o *obj,
        bool flg,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B3A1B4 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    byte_4B3A1B4 = 1;
  }
  if ( !obj )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1BD36B4(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__selectedSkillSvt(
        BattlePerformanceMaster_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
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
  void *skillselectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  SkillEntity_o *v19; // x22
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x21
  BattlePerformanceMaster___c_c *v22; // x8
  System_Action_o *_9__134_0; // x23
  System_String_o *v24; // x22
  Il2CppObject *v25; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B3A19E & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BD3458(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__selectedSkillSvt_b__134_0__, v10);
    sub_1BD3458(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, v12);
    sub_1BD3458(&StringLiteral_1/*""*/, v13);
    sub_1BD3458(&StringLiteral_2938/*"BATTLE_INVALID_SELECT_TARGET"*/, v14);
    byte_4B3A19E = 1;
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
    skillselectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !skillselectSvtWindow )
      goto LABEL_28;
    skillselectSvtWindow = DataManager__GetMasterData_object_(
                             (DataManager_o *)skillselectSvtWindow,
                             (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !skillInfo )
      goto LABEL_28;
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)skillselectSvtWindow;
    skillselectSvtWindow = (void *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                     skillInfo,
                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v18 )
      goto LABEL_28;
    skillselectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                             v18,
                             (int32_t)skillselectSvtWindow,
                             (const MethodInfo_31D1EF0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_28;
    v19 = (SkillEntity_o *)skillselectSvtWindow;
    skillselectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !skillselectSvtWindow || !v19 )
      goto LABEL_28;
    if ( SkillEntity__checkUseTreasure(v19, *((_DWORD *)skillselectSvtWindow + 83), 0LL) )
    {
      skillselectSvtWindow = this->fields.myFsm;
      if ( skillselectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)skillselectSvtWindow, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
        skillselectSvtWindow = this->fields.logic;
        if ( skillselectSvtWindow )
        {
          BattleLogic__wantUseSkill((BattleLogic_o *)skillselectSvtWindow, skillInfo, uniqueId, 4, 0LL);
          return;
        }
      }
LABEL_28:
      sub_1BD36B4(skillselectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillselectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v21 = (System_String_o *)skillselectSvtWindow;
    v22 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v22 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__134_0 = v22->static_fields->__9__134_0;
    v24 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__134_0 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BattlePerformanceMaster___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v22->static_fields->__9;
      _9__134_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(_9__134_0, v25, Method_BattlePerformanceMaster___c__selectedSkillSvt_b__134_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__134_0 = _9__134_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__134_0,
        (int64_t)_9__134_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( !Instance )
      goto LABEL_28;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v24,
      v21,
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
  void *selectSvtWindow; // x0
  CommandSpellEntity_o *v17; // x21
  Il2CppObject *Instance; // x20
  System_String_o *v19; // x21
  BattlePerformanceMaster___c_c *v20; // x8
  System_Action_o *_9__110_0; // x23
  System_String_o *v22; // x22
  Il2CppObject *v23; // x24
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B3A18B & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1BD3458(&Method_DataManager_GetMasterData_CommandSpellMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__, v6);
    sub_1BD3458(&LocalizationManager_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__selectedSvt_b__110_0__, v10);
    sub_1BD3458(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_3430/*"CANCEL"*/, v12);
    sub_1BD3458(&StringLiteral_5574/*"END_PROC"*/, v13);
    sub_1BD3458(&StringLiteral_1/*""*/, v14);
    sub_1BD3458(&StringLiteral_2938/*"BATTLE_INVALID_SELECT_TARGET"*/, v15);
    byte_4B3A18B = 1;
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
    selectSvtWindow = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataManager__GetMasterData_object_(
                        (DataManager_o *)selectSvtWindow,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_CommandSpellMaster___);
    if ( !selectSvtWindow )
      goto LABEL_27;
    selectSvtWindow = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow,
                        this->fields.tmp_commandSpellId,
                        (const MethodInfo_31D1EF0 *)Method_DataMasterBase_CommandSpellMaster__CommandSpellEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_27;
    v17 = (CommandSpellEntity_o *)selectSvtWindow;
    selectSvtWindow = BattleData__getServantData(this->fields.data, uniqueId, 0LL);
    if ( !selectSvtWindow || !v17 )
      goto LABEL_27;
    if ( CommandSpellEntity__checkUseTreasure(v17, *((_DWORD *)selectSvtWindow + 83), 0LL) )
    {
      selectSvtWindow = this->fields.myFsm;
      if ( selectSvtWindow )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_5574/*"END_PROC"*/, 0LL);
        selectSvtWindow = this->fields.logic;
        if ( selectSvtWindow )
        {
          BattleLogic__useCommandSpell((BattleLogic_o *)selectSvtWindow, this->fields.tmp_commandSpellId, uniqueId, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BD36B4(selectSvtWindow, *(_QWORD *)&uniqueId);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = LocalizationManager__Get((System_String_o *)StringLiteral_2938/*"BATTLE_INVALID_SELECT_TARGET"*/, 0LL);
    v19 = (System_String_o *)selectSvtWindow;
    v20 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v20 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__110_0 = v20->static_fields->__9__110_0;
    v22 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__110_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattlePerformanceMaster___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v20->static_fields->__9;
      _9__110_0 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
      System_Action___ctor(_9__110_0, v23, Method_BattlePerformanceMaster___c__selectedSvt_b__110_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__110_0 = _9__110_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__110_0,
        (int64_t)_9__110_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    if ( !Instance )
      goto LABEL_27;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v22,
      v19,
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
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)StringLiteral_3430/*"CANCEL"*/, 0LL);
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

  if ( (byte_4B3A1B6 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_8443/*"LONGPRESS_ENEMY"*/, *(_QWORD *)&index);
    byte_4B3A1B6 = 1;
  }
  myFsm = this->fields.myFsm;
  this->fields.tmp_index = index;
  if ( !myFsm )
    sub_1BD36B4(0LL, *(_QWORD *)&index);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_8443/*"LONGPRESS_ENEMY"*/, 0LL);
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

  if ( (byte_4B3A1AE & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_showRetireDialog__, method);
    byte_4B3A1AE = 1;
  }
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_15;
  BattleLogic__playRetire(logic, 0LL);
  v4 = Method_BattlePerformanceMaster_showRetireDialog__;
  if ( (*((_BYTE *)Method_BattlePerformanceMaster_showRetireDialog__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_showRetireDialog__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
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
    sub_1BD36B4(logic, method);
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
      v7 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster_showRetireDialog__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
    OverwriteAssetSoundName__PlayCommonSe(v8, 3, 0LL);
    v10 = BattlePerformanceMaster__OpenRetireDialog(this, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
}


void __fastcall BattlePerformanceMaster__startCommand(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A1B2 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_12406/*"START_COM"*/, method);
    byte_4B3A1B2 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12406/*"START_COM"*/, 0LL);
}


float __fastcall BattlePerformanceMaster__startMasterBuffEffect(
        BattlePerformanceMaster_o *this,
        BattleActionData_MasterBuffData_o *masterBuffData,
        const MethodInfo *method)
{
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
  __int64 v22; // x20
  __int64 delayAfterNoblePhantasmBuffData; // x0
  Il2CppObject *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject **v31; // x22
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
  float v44; // s8
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *masterBuffPopLabelEffect; // x24
  struct UnityEngine_GameObject_o **p_masterBuffPopLabelEffect; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  UnityEngine_Object_o *v55; // x24
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x24
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  UnityEngine_Transform_o *v73; // x24
  BattleUIRangeLabel_o *v74; // x24
  BattleServantBuffIconComponent_o *v75; // x24
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  TrackingMoveCtCComponent_o *v79; // x23
  int64_t v80; // x23
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Collections_Generic_List_GameObject__o *masterBuffEffectObjectList; // x8
  int32_t size; // w2
  int v89; // w9
  __int64 v90; // x8
  System_Collections_Generic_IEnumerable_T__o *v91; // x23
  System_Action_int__o *v92; // x24
  struct BattlePerformanceMaster_MasterBuffEffectData_o *masterBuffEffectDataClose; // x8
  Il2CppObject *v95; // x8
  struct UnityEngine_Coroutine_o *v96; // x8
  const MethodInfo *v97; // x1
  System_Collections_IEnumerator_o *v98; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  UnityEngine_Coroutine_o *masterIconFadeCoroutine; // x1
  System_Collections_IEnumerator_o *v107; // x0
  UnityEngine_Object_o *effectTween; // x23
  struct TweenAlpha_o **p_effectTween; // x22
  struct TweenAlpha_o *v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  UITweener_o *v117; // x19
  EventDelegate_Callback_o *v118; // x21
  int klass_high; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3A1C2 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_int__TypeInfo, masterBuffData);
    sub_1BD3458(&Method_BasicHelper_ForEach_int___, v5);
    sub_1BD3458(&EventDelegate_Callback_TypeInfo, v6);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___, v7);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___, v8);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___, v9);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v10);
    sub_1BD3458(&int_TypeInfo, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Clear__, v13);
    sub_1BD3458(&BattlePerformanceMaster_MasterBuffEffectData_TypeInfo, v14);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v15);
    sub_1BD3458(&Method_UnityEngine_Resources_Load_GameObject___, v16);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__, v17);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__1__, v18);
    sub_1BD3458(&BattlePerformanceMaster___c__DisplayClass176_0_TypeInfo, v19);
    sub_1BD3458(&StringLiteral_19125/*"effect/ef_poplabel{0:00}"*/, v20);
    sub_1BD3458(&StringLiteral_1/*""*/, v21);
    byte_4B3A1C2 = 1;
  }
  v22 = sub_1BD36A4(BattlePerformanceMaster___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_80;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 32) = masterBuffData;
  v31 = (Il2CppObject **)(v22 + 32);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v22 + 32), (int64_t)masterBuffData, v32, v33, v34, v35, v36, v37);
  delayAfterNoblePhantasmBuffData = *(_QWORD *)(v22 + 32);
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  v44 = 0.0;
  if ( !BattleActionData_MasterBuffData__IsEffectEnable(
          (BattleActionData_MasterBuffData_o *)delayAfterNoblePhantasmBuffData,
          0LL) )
    return v44;
  if ( this->fields._IsNoblePhantasm_k__BackingField )
  {
    delayAfterNoblePhantasmBuffData = (__int64)this->fields.delayAfterNoblePhantasmBuffData;
    if ( delayAfterNoblePhantasmBuffData )
    {
      v24 = *v31;
      v45 = *(_QWORD *)(delayAfterNoblePhantasmBuffData + 16);
      v46 = Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Add__;
      ++*(_DWORD *)(delayAfterNoblePhantasmBuffData + 28);
      if ( v45 )
      {
        v47 = *(int *)(delayAfterNoblePhantasmBuffData + 24);
        if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)delayAfterNoblePhantasmBuffData,
            v24,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
        }
        else
        {
          v48 = v45 + 8 * v47;
          *(_DWORD *)(delayAfterNoblePhantasmBuffData + 24) = v47 + 1;
          *(_QWORD *)(v48 + 32) = v24;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v48 + 32), (int64_t)v24, v38, v39, v40, v41, v42, v43);
        }
        return v44;
      }
    }
    goto LABEL_80;
  }
  delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
  if ( !delayAfterNoblePhantasmBuffData )
    goto LABEL_80;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      v55 = (UnityEngine_Object_o *)*p_masterBuffPopLabelEffect;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70278272(v55, 0LL);
      *p_masterBuffPopLabelEffect = 0LL;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&this->fields.masterBuffPopLabelEffect,
        0LL,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    if ( *v31 )
    {
      klass_high = HIDWORD((*v31)[4].klass);
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass_high, v52, v53, v54);
      v63 = System_String__Format((System_String_o *)StringLiteral_19125/*"effect/ef_poplabel{0:00}"*/, v62, 0LL);
      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Resources__Load_object_(
                                                   v63,
                                                   (const MethodInfo_2FC6478 *)Method_UnityEngine_Resources_Load_GameObject___);
      if ( this->fields.masterBtn )
      {
        v64 = (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData;
        transform = UnityEngine_GameObject__get_transform(this->fields.masterBtn, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v64, transform, 0LL, 0LL);
        this->fields.masterBuffPopLabelEffect = Object;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&this->fields.masterBuffPopLabelEffect,
          (int64_t)Object,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72);
        delayAfterNoblePhantasmBuffData = (__int64)this->fields.masterBuffPopLabelEffect;
        if ( delayAfterNoblePhantasmBuffData )
        {
          delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                       0LL);
          if ( delayAfterNoblePhantasmBuffData )
          {
            v120.fields.x = 0.0;
            v120.fields.z = 0.0;
            v120.fields.y = -42.0;
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
              v120,
              0LL);
            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
            if ( *p_masterBuffPopLabelEffect )
            {
              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                           0LL);
              if ( this->fields.master_root )
              {
                v73 = (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData;
                delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__get_transform(
                                                             this->fields.master_root,
                                                             0LL);
                if ( delayAfterNoblePhantasmBuffData )
                {
                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                                                               0LL);
                  if ( v73 )
                  {
                    UnityEngine_Transform__set_parent(
                      v73,
                      (UnityEngine_Transform_o *)delayAfterNoblePhantasmBuffData,
                      0LL);
                    delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                    if ( *p_masterBuffPopLabelEffect )
                    {
                      delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                   (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_BattleUIRangeLabel___);
                      if ( delayAfterNoblePhantasmBuffData )
                      {
                        v74 = (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData;
                        BattleUIRangeLabel__ParentHasChanged(
                          (BattleUIRangeLabel_o *)delayAfterNoblePhantasmBuffData,
                          0LL);
                        if ( *v31 )
                        {
                          BattleUIRangeLabel__SetAdjustLabelOffset(
                            v74,
                            (System_String_o *)(*v31)[3].monitor,
                            (System_String_o *)StringLiteral_1/*""*/,
                            1,
                            0LL,
                            0,
                            0,
                            0,
                            0LL);
                          BattleUIRangeLabel__AddLabelDepth(v74, 20, 0LL);
                          if ( *v31 )
                          {
                            BattleUIRangeLabel__CondensedScaleLabel(
                              v74,
                              HIDWORD((*v31)[12].klass),
                              (int32_t)(*v31)[12].monitor,
                              0LL);
                            delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                            if ( *p_masterBuffPopLabelEffect )
                            {
                              delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponentInChildren_object__49815076(
                                                                           (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                           1,
                                                                           (const MethodInfo_2F81E24 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleServantBuffIconComponent___);
                              if ( delayAfterNoblePhantasmBuffData )
                              {
                                v75 = (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData;
                                BattleServantBuffIconComponent__ParentHasChanged(
                                  (BattleServantBuffIconComponent_o *)delayAfterNoblePhantasmBuffData,
                                  0LL);
                                BattleServantBuffIconComponent__setImageId(v75, 0, 0LL);
                                delayAfterNoblePhantasmBuffData = (__int64)*p_masterBuffPopLabelEffect;
                                if ( *p_masterBuffPopLabelEffect )
                                {
                                  delayAfterNoblePhantasmBuffData = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                               (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_TrackingMoveCtCComponent___);
                                  perf = this->fields.perf;
                                  if ( perf )
                                  {
                                    actorcamera = perf->fields.actorcamera;
                                    uicamera = perf->fields.uicamera;
                                    v79 = (TrackingMoveCtCComponent_o *)delayAfterNoblePhantasmBuffData;
                                    if ( !byte_4B31941 )
                                    {
                                      delayAfterNoblePhantasmBuffData = sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v24);
                                      byte_4B31941 = 1;
                                    }
                                    if ( v79 )
                                    {
                                      TrackingMoveCtCComponent__Set(
                                        v79,
                                        actorcamera,
                                        uicamera,
                                        0LL,
                                        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                                        0,
                                        0LL);
                                      TrackingMoveCtCComponent__startAct(v79, 0LL);
                                      if ( !this->fields.isMasterBuffEffectPlaying )
                                      {
                                        v80 = sub_1BD36A4(BattlePerformanceMaster_MasterBuffEffectData_TypeInfo);
                                        System_Object___ctor((Il2CppObject *)v80, 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.master_root;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        delayAfterNoblePhantasmBuffData = UnityEngine_GameObject__get_activeSelf(
                                                                            (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                            0LL);
                                        if ( !v80 )
                                          goto LABEL_80;
                                        *(_BYTE *)(v80 + 16) = delayAfterNoblePhantasmBuffData & 1;
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.menuBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v80 + 17) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.spellBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v80 + 18) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0LL);
                                        delayAfterNoblePhantasmBuffData = (__int64)this->fields.skillBtn;
                                        if ( !delayAfterNoblePhantasmBuffData )
                                          goto LABEL_80;
                                        *(_BYTE *)(v80 + 19) = UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)delayAfterNoblePhantasmBuffData,
                                                                 0LL);
                                        this->fields.masterBuffEffectDataClose = (struct BattlePerformanceMaster_MasterBuffEffectData_o *)v80;
                                        sub_1BD33FC(
                                          (PartyOrganizationUtility_o *)&this->fields.masterBuffEffectDataClose,
                                          v80,
                                          v81,
                                          v82,
                                          v83,
                                          v84,
                                          v85,
                                          v86);
                                      }
                                      masterBuffEffectObjectList = this->fields.masterBuffEffectObjectList;
                                      if ( masterBuffEffectObjectList )
                                      {
                                        size = masterBuffEffectObjectList->fields._size;
                                        v89 = masterBuffEffectObjectList->fields._version + 1;
                                        masterBuffEffectObjectList->fields._size = 0;
                                        masterBuffEffectObjectList->fields._version = v89;
                                        if ( size >= 1 )
                                          System_Array__Clear(
                                            (System_Array_o *)masterBuffEffectObjectList->fields._items,
                                            0,
                                            size,
                                            0LL);
                                        v90 = *(_QWORD *)(v22 + 32);
                                        *(_DWORD *)(v22 + 24) = 1065353216;
                                        if ( v90 )
                                        {
                                          v91 = *(System_Collections_Generic_IEnumerable_T__o **)(v90 + 72);
                                          v92 = (System_Action_int__o *)sub_1BD36A4(System_Action_int__TypeInfo);
                                          System_Action_int____ctor(
                                            v92,
                                            (Il2CppObject *)v22,
                                            (intptr_t)Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__,
                                            0LL);
                                          BasicHelper__ForEach_int_(
                                            v91,
                                            (System_Action_T__o *)v92,
                                            (const MethodInfo_2F1DCC8 *)Method_BasicHelper_ForEach_int___);
                                          masterBuffEffectDataClose = this->fields.masterBuffEffectDataClose;
                                          if ( masterBuffEffectDataClose )
                                          {
                                            if ( masterBuffEffectDataClose->fields.isRootActive )
                                              return *(float *)(v22 + 24);
                                            v95 = *v31;
                                            if ( !*v31 )
                                              goto LABEL_80;
                                            if ( !BYTE4(v95[12].monitor) )
                                            {
                                              if ( BYTE5(v95[12].monitor) )
                                              {
                                                masterIconFadeCoroutine = this->fields.masterIconFadeCoroutine;
                                                if ( masterIconFadeCoroutine )
                                                  UnityEngine_MonoBehaviour__StopCoroutine_70264164(
                                                    (UnityEngine_MonoBehaviour_o *)this,
                                                    masterIconFadeCoroutine,
                                                    0LL);
                                                v107 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                         this,
                                                         *(float *)(v22 + 24),
                                                         (const MethodInfo *)masterIconFadeCoroutine);
                                                UnityEngine_MonoBehaviour__StartCoroutine_70263544(
                                                  (UnityEngine_MonoBehaviour_o *)this,
                                                  v107,
                                                  0LL);
                                              }
                                              return *(float *)(v22 + 24);
                                            }
                                            v96 = this->fields.masterIconFadeCoroutine;
                                            this->fields.isMasterBuffEffectPlaying = 1;
                                            if ( v96 )
                                            {
                                              if ( !Component_object )
                                                goto LABEL_80;
                                              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, float))Component_object->klass->vtable[8].method)(
                                                Component_object,
                                                Component_object->klass->vtable[9].methodPtr,
                                                1.0);
                                              UnityEngine_MonoBehaviour__StopCoroutine_70264164(
                                                (UnityEngine_MonoBehaviour_o *)this,
                                                this->fields.masterIconFadeCoroutine,
                                                0LL);
                                              v98 = BattlePerformanceMaster__waitMasterBuffEffect(
                                                      this,
                                                      *(float *)(v22 + 24),
                                                      v97);
                                              started = UnityEngine_MonoBehaviour__StartCoroutine_70263544(
                                                          (UnityEngine_MonoBehaviour_o *)this,
                                                          v98,
                                                          0LL);
                                              this->fields.masterIconFadeCoroutine = started;
                                              sub_1BD33FC(
                                                (PartyOrganizationUtility_o *)&this->fields.masterIconFadeCoroutine,
                                                (int64_t)started,
                                                v100,
                                                v101,
                                                v102,
                                                v103,
                                                v104,
                                                v105);
                                              return *(float *)(v22 + 24);
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
                                                    v110 = TweenAlpha__Begin(this->fields.master_root, 0.25, 1.0, 0LL);
                                                    this->fields.effectTween = v110;
                                                    sub_1BD33FC(
                                                      (PartyOrganizationUtility_o *)&this->fields.effectTween,
                                                      (int64_t)v110,
                                                      v111,
                                                      v112,
                                                      v113,
                                                      v114,
                                                      v115,
                                                      v116);
                                                    v117 = (UITweener_o *)this->fields.effectTween;
                                                    if ( v117 )
                                                    {
                                                      v117->fields.method = 6;
                                                      v118 = (EventDelegate_Callback_o *)sub_1BD36A4(EventDelegate_Callback_TypeInfo);
                                                      EventDelegate_Callback___ctor(
                                                        v118,
                                                        (Il2CppObject *)v22,
                                                        Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__1__,
                                                        0LL);
                                                      UITweener__SetOnFinished(v117, v118, 0LL);
                                                      return *(float *)(v22 + 24);
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
    sub_1BD36B4(delayAfterNoblePhantasmBuffData, v24);
  }
  return v44;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__startSkill(
        BattlePerformanceMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  PlayMakerFSM_o *win_Spell; // x0

  if ( (byte_4B3A1AC & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_12426/*"START_SKILL"*/, *(_QWORD *)&type);
    byte_4B3A1AC = 1;
  }
  win_Spell = (PlayMakerFSM_o *)this->fields.win_Spell;
  if ( !win_Spell
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))win_Spell->klass[1]._1.typeMetadataHandle)(
          win_Spell,
          0LL,
          win_Spell->klass[1]._1.interopData),
        (win_Spell = this->fields.myFsm) == 0LL) )
  {
    sub_1BD36B4(win_Spell, *(_QWORD *)&type);
  }
  PlayMakerFSM__SendEvent(win_Spell, (System_String_o *)StringLiteral_12426/*"START_SKILL"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__startTac(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFsm; // x0

  if ( (byte_4B3A179 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_12430/*"START_TAC"*/, method);
    byte_4B3A179 = 1;
  }
  myFsm = this->fields.myFsm;
  if ( !myFsm )
    sub_1BD36B4(0LL, method);
  PlayMakerFSM__SendEvent(myFsm, (System_String_o *)StringLiteral_12430/*"START_TAC"*/, 0LL);
}


void __fastcall BattlePerformanceMaster__updateCommandSpellIcon(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v5; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x8

  v2 = this;
  if ( (byte_4B3A177 & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_19849/*"frame_cs_bg_disable"*/, v3);
    byte_4B3A177 = 1;
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
    v5 = v2->fields.data;
    if ( !v5 )
      goto LABEL_17;
    this = (BattlePerformanceMaster_o *)v5->fields.quest_ent;
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
    sub_1BD36B4(this, method);
  }
  this = (BattlePerformanceMaster_o *)v2->fields.spellBtn;
  if ( !this )
    goto LABEL_17;
  this = (BattlePerformanceMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)this,
                                        (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !this )
    goto LABEL_17;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_19849/*"frame_cs_bg_disable"*/, 0LL);
  this = (BattlePerformanceMaster_o *)v2->fields.spellSpr;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattlePerformanceMaster__updateShortSkill(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4B3A1A7 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_17729/*"btn_on"*/, method);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_17728/*"btn_off"*/, v3);
    byte_4B3A1A7 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skillSkipBtn) == 0LL )
    sub_1BD36B4(this, method);
  if ( data->fields.systemflg_skipskillconf )
    v5 = &StringLiteral_17728/*"btn_off"*/;
  else
    v5 = &StringLiteral_17729/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceMaster__updateSkillIcon(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
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
  struct BattleServantSkillIConComponent_array *skillIcon; // x8
  struct BattleServantSkillIConComponent_array *v20; // x8
  System_Object_array *v21; // x21
  struct BattleServantSkillIConComponent_array *v22; // x8
  System_Object_array *v23; // x20
  __int64 v24; // x22
  char v25; // w28
  il2cpp_array_size_t v26; // w26
  int v27; // w29
  char v28; // w25
  unsigned __int8 v29; // w27
  struct BattleServantSkillIConComponent_array *v30; // x8
  BattleSkillInfoData_o *v31; // x23
  bool isChargeOK; // w24
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Il2CppClass **v39; // x0
  struct BattleServantSkillIConComponent_array *v40; // x8
  int m_CancellationTokenSource; // w8
  BattlePerformanceMaster_o *v42; // x22
  unsigned int v43; // w23
  int v44; // w24
  char v45; // w26
  struct System_Threading_CancellationTokenSource_o *v46; // x8
  int v47; // w9
  __int64 v48; // x10
  int v49; // w10
  UnityEngine_Object_o *skillBtnFlashObject; // x22
  BattlePerformanceMaster___c_c *v51; // x0
  System_Predicate_object__o *_9__88_0; // x23
  System_String_o *v53; // x22
  Il2CppObject *v54; // x28
  struct BattlePerformanceMaster___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_String_array *All_object; // x0
  struct BattleData_o *data; // x8
  BattlePerformanceMaster_o *v64; // x21
  BattlePerformanceMaster_o *v65; // x22
  System_String_o *v66; // x1
  System_String_o *v67; // x22
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  BattlePerformanceMaster_o *v72; // x22
  System_String_o *v73; // x1
  float v74; // s8
  BattlePerformanceMaster___c_c *v75; // x0
  UILabel_o *addSkillAddChargeTimeLabel; // x22
  System_Predicate_object__o *_9__88_1; // x24
  System_String_o *v78; // x23
  Il2CppObject *v79; // x25
  struct BattlePerformanceMaster___c_StaticFields *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  System_String_array *v87; // x0
  UILabel_o *addSkillAddChargeTimeSplitLabel; // x20
  BattlePerformanceMaster_o *v89; // x20
  unsigned int localPosition; // s0
  unsigned int v91; // s9
  int v92; // s2
  unsigned int v93; // s0
  float v94; // s1
  struct BattleData_o *v95; // x8
  struct BattleData_o *v96; // x8
  Il2CppObject *ComponentInChildren_object; // x20
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x1
  int v105; // [xsp+8h] [xbp-78h] BYREF
  int v106; // [xsp+Ch] [xbp-74h] BYREF

  v2 = this;
  if ( (byte_4B3A178 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Array_FindAll_string___, method);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___, v3);
    sub_1BD3458(&int_TypeInfo, v4);
    sub_1BD3458(&LocalizationManager_TypeInfo, v5);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    sub_1BD3458(&System_Predicate_string__TypeInfo, v7);
    sub_1BD3458(&string___TypeInfo, v8);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_0__, v9);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_1__, v10);
    sub_1BD3458(&BattlePerformanceMaster___c_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_915/*"-"*/, v12);
    sub_1BD3458(&StringLiteral_2945/*"BATTLE_MASTER_SKILL_CHARGE"*/, v13);
    sub_1BD3458(&StringLiteral_1120/*"/"*/, v14);
    sub_1BD3458(&StringLiteral_17722/*"btn_master_skill_disable"*/, v15);
    sub_1BD3458(&StringLiteral_1/*""*/, v16);
    sub_1BD3458(&StringLiteral_2944/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, v17);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_9387/*"NG"*/, v18);
    byte_4B3A178 = 1;
  }
  v106 = 0;
  skillIcon = v2->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)sub_1BD3500(string___TypeInfo, skillIcon->max_length);
  v20 = v2->fields.skillIcon;
  if ( !v20 )
    goto LABEL_145;
  v21 = (System_Object_array *)this;
  this = (BattlePerformanceMaster_o *)sub_1BD3500(string___TypeInfo, v20->max_length);
  v22 = v2->fields.skillIcon;
  if ( !v22 )
    goto LABEL_145;
  v23 = (System_Object_array *)this;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  while ( 1 )
  {
    this = (BattlePerformanceMaster_o *)v2->fields.data;
    if ( !this )
      goto LABEL_145;
    if ( (int)v24 >= (signed int)v22->max_length )
      break;
    this = (BattlePerformanceMaster_o *)BattleData__getMasterSkillInfo((BattleData_o *)this, v24, 0LL);
    if ( this )
    {
      v30 = v2->fields.skillIcon;
      if ( !v30 )
        goto LABEL_145;
      if ( (unsigned int)v24 >= v30->max_length )
        goto LABEL_146;
      v31 = (BattleSkillInfoData_o *)this;
      this = (BattlePerformanceMaster_o *)v30->m_Items[(int)v24];
      if ( !this )
        goto LABEL_145;
      if ( v31->fields.isUseSkill )
        BattleServantSkillIConComponent__SetSkillInfo((BattleServantSkillIConComponent_o *)this, v31, 1, 0, 0, 0, 0LL);
      else
        BattleServantSkillIConComponent__setNoSkill((BattleServantSkillIConComponent_o *)this, 0, 0LL);
      isChargeOK = BattleSkillInfoData__isChargeOK(v31, 0LL);
      this = (BattlePerformanceMaster_o *)BattleSkillInfoData__getChargeTurn(v31, 0LL);
      v106 = (int)this;
      if ( v31->fields.isAdd )
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_915/*"-"*/;
          if ( !v23 )
            goto LABEL_145;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v106, 0LL);
          method = (const MethodInfo *)this;
          if ( !v23 )
            goto LABEL_145;
        }
        if ( v27 >= v23->max_length )
          goto LABEL_146;
        v39 = &v23->obj.klass + v27++;
      }
      else
      {
        if ( (int)this <= 0 )
        {
          method = (const MethodInfo *)StringLiteral_915/*"-"*/;
          if ( !v21 )
            goto LABEL_145;
        }
        else
        {
          this = (BattlePerformanceMaster_o *)System_Int32__ToString((int32_t)&v106, 0LL);
          method = (const MethodInfo *)this;
          if ( !v21 )
            goto LABEL_145;
        }
        if ( v26 >= v21->max_length )
LABEL_146:
          sub_1BD36BC(this, method);
        v39 = &v21->obj.klass + (int)v26++;
      }
      v39[4] = (Il2CppClass *)method;
      v25 |= isChargeOK;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)method, v33, v34, v35, v36, v37, v38);
      v28 |= v106 > 0;
      v29 |= v31->fields.sealedTurn > 0;
    }
    v40 = v2->fields.skillIcon;
    if ( !v40 )
      goto LABEL_145;
    if ( (unsigned int)v24 >= v40->max_length )
      goto LABEL_146;
    this = (BattlePerformanceMaster_o *)v40->m_Items[v24];
    if ( this )
    {
      BattleServantSkillIConComponent__setflashFlg((BattleServantSkillIConComponent_o *)this, 1, 0LL);
      v22 = v2->fields.skillIcon;
      ++v24;
      if ( v22 )
        continue;
    }
    goto LABEL_145;
  }
  this = (BattlePerformanceMaster_o *)BattleData__getFieldPlayerServantList((BattleData_o *)this, 0LL);
  if ( !this )
    goto LABEL_145;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v42 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v43 = 0;
    v44 = 0;
    v45 = 0;
    while ( 1 )
    {
      if ( v43 >= m_CancellationTokenSource )
        goto LABEL_146;
      this = (BattlePerformanceMaster_o *)*((_QWORD *)&v42->fields.myFsm + (int)v43);
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)BattleServantData__getShortenUserEquipSkill((BattleServantData_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      v46 = this->fields.m_CancellationTokenSource;
      if ( v46 )
      {
        if ( (int)v46 >= 1 )
        {
          v47 = 0;
          do
          {
            v48 = *((_QWORD *)&this->fields.myFsm + v47);
            if ( !v48 )
              goto LABEL_145;
            v49 = *(_DWORD *)(v48 + 28);
            ++v47;
            if ( v44 <= v49 )
              v44 = v49;
          }
          while ( (_DWORD)v46 != v47 );
        }
        v45 = 1;
      }
      m_CancellationTokenSource = (int)v42->fields.m_CancellationTokenSource;
      if ( (int)++v43 >= m_CancellationTokenSource )
        goto LABEL_52;
    }
  }
  v45 = 0;
  v44 = 0;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25 & 1, 0LL);
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
    v51 = BattlePerformanceMaster___c_TypeInfo;
    if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
      v51 = BattlePerformanceMaster___c_TypeInfo;
    }
    _9__88_0 = (System_Predicate_object__o *)v51->static_fields->__9__88_0;
    v53 = (System_String_o *)StringLiteral_1120/*"/"*/;
    if ( !_9__88_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = BattlePerformanceMaster___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__88_0 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_string__TypeInfo);
      System_Predicate_object____ctor(_9__88_0, v54, Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_0__, 0LL);
      static_fields = BattlePerformanceMaster___c_TypeInfo->static_fields;
      static_fields->__9__88_0 = (struct System_Predicate_string__o *)_9__88_0;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&static_fields->__9__88_0,
        (int64_t)_9__88_0,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
    }
    All_object = (System_String_array *)System_Array__FindAll_object_(
                                          v21,
                                          (System_Predicate_T__o *)_9__88_0,
                                          (const MethodInfo_302C5CC *)Method_System_Array_FindAll_string___);
    this = (BattlePerformanceMaster_o *)System_String__Join(v53, All_object, 0LL);
    data = v2->fields.data;
    if ( !data )
      goto LABEL_145;
    v64 = this;
    this = (BattlePerformanceMaster_o *)data->fields.battle_ent;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)BattleEntity__GetQuestPhaseEntity((BattleEntity_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)QuestPhaseEntity__GetMasterSkillDelayInfo((QuestPhaseEntity_o *)this, 0LL);
    if ( !v2->fields.masterSkillBadStatus )
      goto LABEL_145;
    v65 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillBadStatus, v29 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillBadStatusLabel;
    if ( !this )
      goto LABEL_145;
    if ( (v29 & 1) != 0 )
      v66 = (System_String_o *)v65;
    else
      v66 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v66, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2945/*"BATTLE_MASTER_SKILL_CHARGE"*/, 0LL);
    v105 = v44 + 1;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105, v68, v69, v70);
    this = (BattlePerformanceMaster_o *)System_String__Format(v67, v71, 0LL);
    if ( !v2->fields.masterSkillChargeRoot )
      goto LABEL_145;
    v72 = this;
    UnityEngine_GameObject__SetActive(v2->fields.masterSkillChargeRoot, v45 & 1, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.masterSkillChargeLabel;
    if ( !this )
      goto LABEL_145;
    v73 = (v45 & 1) != 0 ? (System_String_o *)v72 : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)this, v73, 0LL);
    this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
    v74 = ((v29 | (unsigned __int8)v45) & 1) != 0 ? -58.0 : -38.0;
    if ( !this )
      goto LABEL_145;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    if ( v27 < 1 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeLabel;
      if ( !this )
        goto LABEL_145;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v64, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v2->fields.chargeTimeRoot )
        goto LABEL_145;
      v89 = this;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28 & 1, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.chargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_145;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v75 = BattlePerformanceMaster___c_TypeInfo;
      addSkillAddChargeTimeLabel = v2->fields.addSkillAddChargeTimeLabel;
      if ( !BattlePerformanceMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattlePerformanceMaster___c_TypeInfo);
        v75 = BattlePerformanceMaster___c_TypeInfo;
      }
      _9__88_1 = (System_Predicate_object__o *)v75->static_fields->__9__88_1;
      v78 = (System_String_o *)StringLiteral_1120/*"/"*/;
      if ( !_9__88_1 )
      {
        if ( !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v75 = BattlePerformanceMaster___c_TypeInfo;
        }
        v79 = (Il2CppObject *)v75->static_fields->__9;
        _9__88_1 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_string__TypeInfo);
        System_Predicate_object____ctor(
          _9__88_1,
          v79,
          Method_BattlePerformanceMaster___c__updateSkillIcon_b__88_1__,
          0LL);
        v80 = BattlePerformanceMaster___c_TypeInfo->static_fields;
        v80->__9__88_1 = (struct System_Predicate_string__o *)_9__88_1;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v80->__9__88_1, (int64_t)_9__88_1, v81, v82, v83, v84, v85, v86);
      }
      v87 = (System_String_array *)System_Array__FindAll_object_(
                                     v23,
                                     (System_Predicate_T__o *)_9__88_1,
                                     (const MethodInfo_302C5CC *)Method_System_Array_FindAll_string___);
      this = (BattlePerformanceMaster_o *)System_String__Join(v78, v87, 0LL);
      if ( !addSkillAddChargeTimeLabel )
        goto LABEL_145;
      UILabel__set_text(addSkillAddChargeTimeLabel, (System_String_o *)this, 0LL);
      addSkillAddChargeTimeSplitLabel = v2->fields.addSkillAddChargeTimeSplitLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (BattlePerformanceMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2944/*"BATTLE_MASTER_SKILL_ADD_SPLIT"*/, 0LL);
      if ( !addSkillAddChargeTimeSplitLabel )
        goto LABEL_145;
      UILabel__set_text(addSkillAddChargeTimeSplitLabel, (System_String_o *)this, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeLabel;
      if ( !this )
        goto LABEL_145;
      UILabel__set_text((UILabel_o *)this, (System_String_o *)v64, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.addSkillChargeTimeRoot;
      if ( !this )
        goto LABEL_145;
      this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v2->fields.addSkillChargeTimeRoot )
        goto LABEL_145;
      v89 = this;
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
    v91 = localPosition;
    this = (BattlePerformanceMaster_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_145;
    *(UnityEngine_Vector3_o *)(&v92 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    if ( !v89 )
      goto LABEL_145;
    v93 = v91;
    v94 = v74;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v89, *(UnityEngine_Vector3_o *)(&v92 - 2), 0LL);
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
  v95 = v2->fields.data;
  if ( !v95 )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)v95->fields.quest_ent;
  if ( !this )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x200000000LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_135;
  v96 = v2->fields.data;
  if ( !v96 )
    goto LABEL_145;
  this = (BattlePerformanceMaster_o *)v96->fields.quest_ent;
  if ( !this )
    goto LABEL_145;
  if ( QuestEntity__HasFlag((QuestEntity_o *)this, 0x100000000LL, 0LL) )
  {
LABEL_135:
    this = (BattlePerformanceMaster_o *)v2->fields.skillBtnSp;
    if ( this )
    {
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17722/*"btn_master_skill_disable"*/, 0LL);
      this = (BattlePerformanceMaster_o *)v2->fields.skillBtn;
      if ( this )
      {
        ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_2F81CE0 *)Method_UnityEngine_GameObject_GetComponentInChildren_SendEventToFsm___);
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
          v104 = StringLiteral_9387/*"NG"*/;
          ComponentInChildren_object[2].monitor = (void *)StringLiteral_9387/*"NG"*/;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&ComponentInChildren_object[2].monitor,
            v104,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
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
    sub_1BD36B4(this, method);
  }
}


void __fastcall BattlePerformanceMaster__updateSkipDead(BattlePerformanceMaster_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4B3A1AB & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_17729/*"btn_on"*/, method);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_17728/*"btn_off"*/, v3);
    byte_4B3A1AB = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.skipDeadBtn) == 0LL )
    sub_1BD36B4(this, method);
  if ( data->fields.systemflg_skipDead )
    v5 = &StringLiteral_17729/*"btn_on"*/;
  else
    v5 = &StringLiteral_17728/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
}


void __fastcall BattlePerformanceMaster__updateTdConstantVelocity(
        BattlePerformanceMaster_o *this,
        const MethodInfo *method)
{
  BattlePerformanceMaster_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x8
  __int64 *v5; // x8

  v2 = this;
  if ( (byte_4B3A1A9 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_17729/*"btn_on"*/, method);
    this = (BattlePerformanceMaster_o *)sub_1BD3458(&StringLiteral_17728/*"btn_off"*/, v3);
    byte_4B3A1A9 = 1;
  }
  data = v2->fields.data;
  if ( !data || (this = (BattlePerformanceMaster_o *)v2->fields.tdConstBtn) == 0LL )
    sub_1BD36B4(this, method);
  if ( data->fields.systemflg_TdConstantvelocity )
    v5 = &StringLiteral_17729/*"btn_on"*/;
  else
    v5 = &StringLiteral_17728/*"btn_off"*/;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v5, 0LL);
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

  if ( (byte_4B3A1C3 & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster__waitMasterBuffEffect_d__177_TypeInfo, method);
    byte_4B3A1C3 = 1;
  }
  v5 = sub_1BD36A4(BattlePerformanceMaster__waitMasterBuffEffect_d__177_TypeInfo);
  BattlePerformanceMaster__waitMasterBuffEffect_d__177___ctor(
    (BattlePerformanceMaster__waitMasterBuffEffect_d__177_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BD36B4(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor(
        BattlePerformanceMaster_MasterBuffEffectData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceMaster_MasterBuffEffectData___ctor_44794248(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x22
  DataManager_o *Instance; // x0
  struct EffectEntity_o **p_effectEnt_5__2; // x20
  float v14; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  int32_t id; // w20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_Transform_o *v30; // x21
  UnityEngine_Transform_o *v31; // x21
  float v32; // s0
  float v33; // s1
  float v34; // s2
  struct EffectEntity_o *effectEnt_5__2; // x8
  System_String_o *se; // x21
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3A1DD & 1) == 0 )
  {
    sub_1BD3458(&BattleEffectUtility_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_1BD3458(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BD3458(&SoundManager_TypeInfo, v7);
    sub_1BD3458(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    sub_1BD3458(&StringLiteral_3237/*"Battle"*/, v9);
    byte_4B3A1DD = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_36;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !Instance )
      goto LABEL_36;
    p_effectEnt_5__2 = &this->fields._effectEnt_5__2;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  (Il2CppObject **)&this->fields._effectEnt_5__2,
                                  this->fields.id,
                                  (const MethodInfo_31D1F44 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return 0;
    if ( !*p_effectEnt_5__2 )
      goto LABEL_36;
    v14 = (float)(*p_effectEnt_5__2)->fields.delayTime / 1000.0;
    if ( v14 > 0.0 )
    {
      v15 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, v14, 0LL);
      this->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = &this->fields.__2__current;
      sub_1BD33FC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
  }
  if ( !byte_4B31941 )
  {
    sub_1BD3458(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B31941 = 1;
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
  v29 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v30 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v30 )
    goto LABEL_36;
  UnityEngine_Transform__set_parent(v30, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !this->fields.parentObj )
    goto LABEL_36;
  v31 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.parentObj, 0LL);
  if ( !Instance )
    goto LABEL_36;
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !v31 )
    goto LABEL_36;
  v37.fields.z = v34 + this->fields.pos.fields.z;
  v37.fields.y = v33 + this->fields.pos.fields.y;
  v37.fields.x = v32 + this->fields.pos.fields.x;
  UnityEngine_Transform__set_localPosition(v31, v37, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  UnityEngine_Transform__set_eulerAngles((UnityEngine_Transform_o *)Instance, v38, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v39.fields.x = 1.0;
  v39.fields.y = 1.0;
  v39.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)Instance, v39, 0LL);
  UnityEngine_GameObject__SetActive(v29, 1, 0LL);
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
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    Instance = (DataManager_o *)SoundManager__playSe_39488968((System_String_o *)StringLiteral_3237/*"Battle"*/, se, 0LL);
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
          (Il2CppObject *)v29,
          (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
        return 0;
      }
    }
LABEL_36:
    sub_1BD36B4(Instance, method);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattlePerformanceMaster__DelayEffect_d__194_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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

  if ( (byte_4B3A1DE & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_4B3A1DE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
LABEL_8:
    obj = this->fields.obj;
    if ( !obj )
      sub_1BD36B4(0LL, method);
    UnityEngine_GameObject__SetActive(obj, 1, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    waitTime = this->fields.waitTime;
    this->fields.__1__state = -1;
    if ( waitTime > 0.0 )
    {
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, waitTime, 0LL);
      this->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = &this->fields.__2__current;
      sub_1BD33FC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattlePerformanceMaster__DelayShowItem_d__196_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  DefCoroutine_c *v12; // x0
  int64_t milliSecSeven; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x20
  BattleLogic_o *logic; // x19
  NotificationDialog_ClickDelegate_o *v18; // x21

  v8 = this;
  if ( (byte_4B3A1DF & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_OnRetireDialog__, method);
    sub_1BD3458(&NotificationDialog_ClickDelegate_TypeInfo, v9);
    this = (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)sub_1BD3458(&DefCoroutine_TypeInfo, v10);
    byte_4B3A1DF = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this
      || (logic = _4__this->fields.logic,
          v18 = (NotificationDialog_ClickDelegate_o *)sub_1BD36A4(NotificationDialog_ClickDelegate_TypeInfo),
          NotificationDialog_ClickDelegate___ctor(
            v18,
            (Il2CppObject *)_4__this,
            Method_BattlePerformanceMaster_OnRetireDialog__,
            0LL),
          !logic)
      || (BattleLogic__OpenBattleLoseDlg(logic, 1, 1, v18, 0, 0LL),
          (this = (BattlePerformanceMaster__OpenRetireDialog_d__152_o *)_4__this->fields.perf) == 0LL) )
    {
      sub_1BD36B4(this, method);
    }
    BattlePerformance__SetScreenEffectMode((BattlePerformance_o *)this, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  v12 = DefCoroutine_TypeInfo;
  if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
    v12 = DefCoroutine_TypeInfo;
  }
  milliSecSeven = (int64_t)v12->static_fields->milliSecSeven;
  v8->fields.__2__current = (Il2CppObject *)milliSecSeven;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BD33FC(p__2__current, milliSecSeven, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattlePerformanceMaster__OpenRetireDialog_d__152_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct BattlePerformanceMaster_o *_4__this; // x19
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *delayAfterNoblePhantasmBuffData; // x8
  UnityEngine_WaitForSeconds_o *v14; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  bool result; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_T__TResult__o *v23; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x20
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Collections_Generic_IEnumerator_float__o *_7__wrap1; // x21
  System_Collections_Generic_IEnumerator_float__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  const MethodInfo *v43; // x1
  struct System_Collections_Generic_IEnumerator_float__o *v44; // x19
  System_Collections_Generic_IEnumerator_float__c *v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Collections_Generic_List_BattleActionData_MasterBuffData__o *v62; // x8
  int64_t size; // x2
  int v64; // w9
  UnityEngine_WaitForSeconds_o *v65; // x19
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *v72; // [xsp+18h] [xbp-28h]

  v2 = this;
  v72 = this;
  if ( (byte_4B3A1E0 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattlePerformanceMaster_startMasterBuffEffect__, method);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___, v3);
    sub_1BD3458(&System_Func_BattleActionData_MasterBuffData__float__TypeInfo, v4);
    sub_1BD3458(&System_Collections_Generic_IEnumerable_float__TypeInfo, v5);
    sub_1BD3458(&System_Collections_Generic_IEnumerator_float__TypeInfo, v6);
    sub_1BD3458(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__Clear__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleActionData_MasterBuffData__get_Count__, v9);
    this = (BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_o *)sub_1BD3458(
                                                                           &UnityEngine_WaitForSeconds_TypeInfo,
                                                                           v10);
    byte_4B3A1E0 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1BD36B4(this, method);
    }
    else
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1BD36B4(this, method);
      delayAfterNoblePhantasmBuffData = _4__this->fields.delayAfterNoblePhantasmBuffData;
      if ( !delayAfterNoblePhantasmBuffData )
        sub_1BD36B4(this, method);
      if ( delayAfterNoblePhantasmBuffData->fields._size >= 1 )
      {
        v14 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v14, 0.25, 0LL);
        v72->fields.__2__current = (Il2CppObject *)v14;
        sub_1BD33FC((PartyOrganizationUtility_o *)&v72->fields.__2__current, (int64_t)v14, v15, v16, v17, v18, v19, v20);
        result = 1;
        v72->fields.__1__state = 1;
        return result;
      }
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)_4__this->fields.delayAfterNoblePhantasmBuffData;
    v23 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_BattleActionData_MasterBuffData__float__TypeInfo);
    System_Func_object__float____ctor(
      v23,
      (Il2CppObject *)_4__this,
      Method_BattlePerformanceMaster_startMasterBuffEffect__,
      0LL);
    v24 = System_Linq_Enumerable__Select_object__float_(
            v22,
            (System_Func_TSource__TResult__o *)v23,
            (const MethodInfo_2F63180 *)Method_System_Linq_Enumerable_Select_BattleActionData_MasterBuffData__float___);
    v26 = v24;
    if ( !v24 )
      sub_1BD36B4(0LL, v25);
    klass = v24->klass;
    v28 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_float__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_float__TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C25438(v24, System_Collections_Generic_IEnumerable_float__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
            v26,
            *(_QWORD *)(p_method + 8));
    v72->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_float__o *)v31;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v72->fields.__7__wrap1, v31, v32, v33, v34, v35, v36, v37);
    v2 = v72;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1BD36B4(this, method);
  v39 = _7__wrap1->klass;
  v40 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_24;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_24:
    v42 = sub_1C25438(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v42)(
          _7__wrap1,
          *(_QWORD *)(v42 + 8)) & 1) == 0 )
  {
    BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191____m__Finally1(v72, v43);
    v72->fields.__7__wrap1 = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v72->fields.__7__wrap1, 0LL, v49, v50, v51, v52, v53, v54);
    if ( !_4__this )
      sub_1BD36B4(v55, v56);
    v62 = _4__this->fields.delayAfterNoblePhantasmBuffData;
    if ( !v62 )
      sub_1BD36B4(v55, v56);
    size = (unsigned int)v62->fields._size;
    v64 = v62->fields._version + 1;
    v62->fields._size = 0;
    v62->fields._version = v64;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v62->fields._items, 0, size, 0LL);
    _4__this->fields.effectAfterNoblePhantasmCoroutine = 0LL;
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&_4__this->fields.effectAfterNoblePhantasmCoroutine,
      0LL,
      size,
      v57,
      v58,
      v59,
      v60,
      v61);
    return 0;
  }
  v44 = v72->fields.__7__wrap1;
  if ( !v44 )
    sub_1BD36B4(v72, v43);
  v45 = v44->klass;
  v46 = *(unsigned __int16 *)(&v44->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v44->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_float__c **)v47 - 1) != System_Collections_Generic_IEnumerator_float__TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_32;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_32:
    v48 = sub_1C25438(v72->fields.__7__wrap1, System_Collections_Generic_IEnumerator_float__TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))v48)(
    v44,
    *(_QWORD *)(v48 + 8));
  v65 = (UnityEngine_WaitForSeconds_o *)sub_1BD36A4(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v65, 0.25, 0LL);
  v72->fields.__2__current = (Il2CppObject *)v65;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v72->fields.__2__current, (int64_t)v65, v66, v67, v68, v69, v70, v71);
  result = 1;
  v72->fields.__1__state = 2;
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattlePerformanceMaster__WaitTimeMasterBuffEffect_d__191_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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

  if ( (byte_4B3A1E1 & 1) == 0 )
  {
    sub_1BD3458(&System_IDisposable_TypeInfo, method);
    byte_4B3A1E1 = 1;
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
      p_method = sub_1C25438(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_float__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattlePerformanceMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3A1DB & 1) == 0 )
  {
    sub_1BD3458(&BattlePerformanceMaster___c_TypeInfo, v1);
    byte_4B3A1DB = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(BattlePerformanceMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattlePerformanceMaster___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)BattlePerformanceMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *EffectObjectSafe; // x0
  __int64 v14; // x1
  BaseMonoBehaviour_o *_4__this; // x22
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x20
  struct BattlePerformanceMaster_o *v19; // x8
  UnityEngine_Transform_o *v20; // x22
  Il2CppObject *Entity; // x0
  Il2CppObject *v22; // x21
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  Il2CppObject *Component_object; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  float v32; // s0
  struct BattlePerformanceMaster_o *v33; // x8
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 klass_low; // x10
  __int64 v37; // x8

  if ( (byte_4B3A1DC & 1) == 0 )
  {
    sub_1BD3458(&BattleEffectUtility_TypeInfo, *(_QWORD *)&x);
    sub_1BD3458(&Method_DataManager_GetMasterData_EffectMaster___, v5);
    sub_1BD3458(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__, v11);
    sub_1BD3458(&StringLiteral_3237/*"Battle"*/, v12);
    byte_4B3A1DC = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObjectSafe = BattleEffectUtility__getEffectObjectSafe(x, 0LL, 1, 1.0, 0LL);
  _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_31;
  v16 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)_4__this[5].klass;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  EffectObjectSafe = BaseMonoBehaviour__createObject(_4__this, v16, transform, 0LL, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  v18 = EffectObjectSafe;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_31;
  v20 = (UnityEngine_Transform_o *)EffectObjectSafe;
  EffectObjectSafe = v19->fields.master_root;
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(EffectObjectSafe, 0LL);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)EffectObjectSafe,
                                                   0LL);
  if ( !v20 )
    goto LABEL_31;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)EffectObjectSafe, 0LL);
  UnityEngine_GameObject__SetActive(v18, 1, 0LL);
  EffectObjectSafe = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  EffectObjectSafe = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)EffectObjectSafe,
                                                   (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !EffectObjectSafe )
    goto LABEL_31;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)EffectObjectSafe,
             x,
             (const MethodInfo_31D1EF0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    v22 = Entity;
    if ( EffectEntity__isSe((EffectEntity_o *)Entity, 0LL) )
    {
      v23 = Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__;
      if ( (*((_BYTE *)Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__ + 83) & 2) != 0 )
        v23 = (_QWORD *)sub_1BD3470(Method_BattlePerformanceMaster___c__DisplayClass176_0__startMasterBuffEffect_b__0__);
      v24 = (System_Reflection_MethodBase_o *)sub_1BD343C(v23, v23[4]);
      OverwriteAssetSoundName__PlaySe_39393680(
        v24,
        (System_String_o *)StringLiteral_3237/*"Battle"*/,
        (System_String_o *)v22[2].klass,
        1.0,
        0LL,
        0LL);
    }
  }
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v18,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    v32 = *(float *)&Component_object[2].klass;
    if ( this->fields.waitTime < v32 )
      this->fields.waitTime = v32;
  }
  v33 = this->fields.__4__this;
  if ( !v33
    || (EffectObjectSafe = (UnityEngine_GameObject_o *)v33->fields.masterBuffEffectObjectList) == 0LL
    || (v34 = *(_QWORD *)&EffectObjectSafe->fields.m_CachedPtr,
        v35 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(EffectObjectSafe[1].klass),
        !v34) )
  {
LABEL_31:
    sub_1BD36B4(EffectObjectSafe, v14);
  }
  klass_low = SLODWORD(EffectObjectSafe[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)EffectObjectSafe,
      (Il2CppObject *)v18,
      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * klass_low;
    LODWORD(EffectObjectSafe[1].klass) = klass_low + 1;
    *(_QWORD *)(v37 + 32) = v18;
    sub_1BD33FC((PartyOrganizationUtility_o *)(v37 + 32), (int64_t)v18, v26, v27, v28, v29, v30, v31);
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
        || (UnityEngine_MonoBehaviour__StopCoroutine_70264164(
              (UnityEngine_MonoBehaviour_o *)this->fields.__4__this,
              (UnityEngine_Coroutine_o *)method,
              0LL),
            (_4__this = this->fields.__4__this) != 0LL) )
      {
        v5 = BattlePerformanceMaster__waitMasterBuffEffect(_4__this, this->fields.waitTime, method);
        started = UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)_4__this, v5, 0LL);
        _4__this->fields.masterIconFadeCoroutine = started;
        sub_1BD33FC(
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
    sub_1BD36B4(this, method);
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
        sub_1BD33FC(
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
    sub_1BD36B4(this, method);
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
    sub_1BD36B4(this, x);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool result; // w0
  struct BattlePerformanceMaster_o *_4__this; // x21
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *_8__1; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *v38; // x8
  UnityEngine_Object_o *widget; // x20
  struct BattlePerformanceMaster___c__DisplayClass179_0_o *v40; // x8
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Object_o *effectTween; // x19
  TweenAlpha_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UITweener_o *v55; // x20
  Il2CppObject *v56; // x19
  EventDelegate_Callback_o *v57; // x21

  v2 = this;
  if ( (byte_4B3A1E2 & 1) == 0 )
  {
    sub_1BD3458(&EventDelegate_Callback_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v4);
    sub_1BD3458(&Method_BattlePerformanceMaster___c__DisplayClass179_0__endMasterBuffEffectFadeOut_b__0__, v5);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)sub_1BD3458(
                                                                             &BattlePerformanceMaster___c__DisplayClass179_0_TypeInfo,
                                                                             v6);
    byte_4B3A1E2 = 1;
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
                                                                             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    if ( !_8__1 )
      goto LABEL_26;
    _8__1->fields.widget = (struct UIWidget_o *)this;
    sub_1BD33FC((PartyOrganizationUtility_o *)&_8__1->fields.widget, (int64_t)this, v32, v33, v34, v35, v36, v37);
    v38 = v2->fields.__8__1;
    if ( !v38 )
      goto LABEL_26;
    widget = (UnityEngine_Object_o *)v38->fields.widget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)UnityEngine_Object__op_Equality(
                                                                             widget,
                                                                             0LL,
                                                                             0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v40 = v2->fields.__8__1;
      if ( !v40 )
        goto LABEL_26;
      this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v40->fields.widget;
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
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&_4__this->fields.masterIconFadeCoroutine,
          0LL,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
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
        v48 = TweenAlpha__Begin(_4__this->fields.master_root, 0.25, 0.01, 0LL);
        _4__this->fields.effectTween = v48;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&_4__this->fields.effectTween,
          (int64_t)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v55 = (UITweener_o *)_4__this->fields.effectTween;
        if ( !v55 )
          goto LABEL_26;
        v55->fields.method = 6;
        v56 = (Il2CppObject *)v2->fields.__8__1;
        v57 = (EventDelegate_Callback_o *)sub_1BD36A4(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(
          v57,
          v56,
          Method_BattlePerformanceMaster___c__DisplayClass179_0__endMasterBuffEffectFadeOut_b__0__,
          0LL);
        UITweener__SetOnFinished(v55, v57, 0LL);
      }
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v8 = (Il2CppObject *)sub_1BD36A4(BattlePerformanceMaster___c__DisplayClass179_0_TypeInfo);
    System_Object___ctor(v8, 0LL);
    v2->fields.__8__1 = (struct BattlePerformanceMaster___c__DisplayClass179_0_o *)v8;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.__8__1, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    this = (BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_o *)v2->fields.__8__1;
    if ( this )
    {
      v21 = (int64_t)v2->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v21;
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, v21, v15, v16, v17, v18, v19, v20);
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1BD33FC(p__2__current, 0LL, v23, v24, v25, v26, v27, v28);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
LABEL_26:
    sub_1BD36B4(this, method);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattlePerformanceMaster__endMasterBuffEffectFadeOut_d__179_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v18, v19, v20, v21, v22, v23);
      v6 = 1;
      result = 1;
    }
    else
    {
      if ( !_4__this )
        sub_1BD36B4(0LL, method);
      v9 = (Il2CppObject *)BattlePerformanceMaster__endMasterBuffEffectFadeOut(_4__this, 0LL);
      this->fields.__2__current = v9;
      sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattlePerformanceMaster__waitMasterBuffEffect_d__177_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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