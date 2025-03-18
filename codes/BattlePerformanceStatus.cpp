void __fastcall BattlePerformanceStatus___ctor(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__ChangeCriticalLabelColor(
        BattlePerformanceStatus_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  DrumRollLabel_o *criticalpointlabel; // x0

  criticalpointlabel = this->fields.criticalpointlabel;
  if ( !criticalpointlabel )
    sub_1C3B9C0(0LL, method);
  DrumRollLabel__SetLabelColor(criticalpointlabel, color, 0LL);
}


void __fastcall BattlePerformanceStatus__CloseBuffConf(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x0

  buffConfWindow = this->fields.buffConfWindow;
  if ( !buffConfWindow )
    sub_1C3B9C0(0LL, method);
  ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, _QWORD, Il2CppMethodPointer))buffConfWindow->klass->vtable._12_Close.method)(
    buffConfWindow,
    0LL,
    buffConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceStatus__CloseSelectCommandWindowAll(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformanceStatus___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *selectCommandWindowArray; // x19
  System_Action_object__o *_9__75_0; // x20
  Il2CppObject *v9; // x21
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C25137 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_BattleSelectCommandTypeWindow__TypeInfo, method);
    sub_1C3B764(&Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___, v3);
    sub_1C3B764(&Method_BattlePerformanceStatus___c__CloseSelectCommandWindowAll_b__75_0__, v4);
    sub_1C3B764(&BattlePerformanceStatus___c_TypeInfo, v5);
    byte_4C25137 = 1;
  }
  v6 = BattlePerformanceStatus___c_TypeInfo;
  selectCommandWindowArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectCommandWindowArray;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v6 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__75_0 = (System_Action_object__o *)v6->static_fields->__9__75_0;
  if ( !_9__75_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattlePerformanceStatus___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__75_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    System_Action_object____ctor(
      _9__75_0,
      v9,
      Method_BattlePerformanceStatus___c__CloseSelectCommandWindowAll_b__75_0__,
      0LL);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = (struct System_Action_BattleSelectCommandTypeWindow__o *)_9__75_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__75_0,
      (int64_t)_9__75_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BasicHelper__ForEach_object_(
    selectCommandWindowArray,
    (System_Action_T__o *)_9__75_0,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
}


void __fastcall BattlePerformanceStatus__DeleteEnemyStatusAll(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattlePerformanceEnemy_o *enemyPref; // x0
  int32_t v5; // w20
  struct BattleServantParamComponent_array *svtParamList; // x8

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
LABEL_6:
    sub_1C3B9C0(enemyPref, method);
  v5 = 0;
  while ( 1 )
  {
    svtParamList = enemyPref->fields.svtParamList;
    if ( !svtParamList )
      goto LABEL_6;
    if ( v5 >= (signed int)svtParamList->max_length )
      break;
    BattlePerformanceEnemy__deleteStatus(enemyPref, v5, v2);
    enemyPref = this->fields.enemyPref;
    ++v5;
    if ( !enemyPref )
      goto LABEL_6;
  }
}


void __fastcall BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSelectAddFuncConfWindow; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C25132 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25132 = 1;
  }
  skillSelectAddFuncConfWindow = (UnityEngine_Object_o *)this->fields.skillSelectAddFuncConfWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillSelectAddFuncConfWindow, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.skillSelectAddFuncConfWindow;
    if ( !v5 )
      sub_1C3B9C0(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect(
        BattlePerformanceStatus_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C25133 & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceStatus__DoCreateCriticalEffect_d__56_TypeInfo, method);
    byte_4C25133 = 1;
  }
  v5 = sub_1C3B9B0(BattlePerformanceStatus__DoCreateCriticalEffect_d__56_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_o *__fastcall BattlePerformanceStatus__GetEnemySvtParamComponent(
        BattlePerformanceStatus_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0
  UnityEngine_Object_o *SvtParamComponent; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4C2513D & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4C2513D = 1;
  }
  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_10;
  SvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceEnemy__GetSvtParamComponent(enemyPref, uniqueId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(SvtParamComponent, 0LL, 0LL) )
  {
    enemyPref = this->fields.enemyPref;
    if ( enemyPref )
      return BattlePerformanceEnemy__GetSvtSuperBossParamComponent(enemyPref, uniqueId, v7);
LABEL_10:
    sub_1C3B9C0(enemyPref, *(_QWORD *)&uniqueId);
  }
  return (BattleServantParamComponent_o *)SvtParamComponent;
}


// local variable allocation has failed, the output may be wrong!
BattleSelectCommandTypeWindow_o *__fastcall BattlePerformanceStatus__GetSelectCommandWindow(
        BattlePerformanceStatus_o *this,
        int32_t dialogType,
        const MethodInfo *method)
{
  if ( (byte_4C25136 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_IndexValue_BattleSelectCommandTypeWindow___, *(_QWORD *)&dialogType);
    byte_4C25136 = 1;
  }
  return (BattleSelectCommandTypeWindow_o *)BasicHelper__IndexValue_object_(
                                              (System_Object_array *)this->fields.selectCommandWindowArray,
                                              dialogType,
                                              0LL,
                                              (const MethodInfo_2FDEADC *)Method_BasicHelper_IndexValue_BattleSelectCommandTypeWindow___);
}


BattleSelectCommandTypeWindow_array *__fastcall BattlePerformanceStatus__GetSelectCommandWindowAll(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectCommandWindowArray;
}


void __fastcall BattlePerformanceStatus__GorgeousStarCommonFunc(
        BattlePerformanceStatus_o *this,
        UnityEngine_GameObject_o *starEffectPrefab,
        int16_t starCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_ParticleSystem_o *ComponentInChildren_object; // x0
  unsigned int v9; // w8
  int16_t v10; // w20
  UnityEngine_ParticleSystem_o *v11; // x22
  float constant; // s8
  struct UnityEngine_ParticleSystem_Burst_array *tempBurst; // x8
  UnityEngine_ParticleSystem_o *v14; // x21
  struct UnityEngine_ParticleSystem_Burst_array *v15; // x23
  UnityEngine_ParticleSystem_MinMaxCurve_o v16; // [xsp+8h] [xbp-98h] BYREF
  struct UnityEngine_ParticleSystem_o *v17; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_ParticleSystem_MinMaxCurve_o v18; // [xsp+30h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+58h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v20; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v21; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v22; // 0:x0.8

  if ( (byte_4C25134 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, starEffectPrefab);
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    byte_4C25134 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0LL;
  if ( !byte_4C1D5F1 )
  {
    sub_1C3B764(&System_Math_TypeInfo, starEffectPrefab);
    byte_4C1D5F1 = 1;
  }
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)System_Math_TypeInfo;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( starCount >= 0 )
    v9 = starCount;
  else
    v9 = -starCount;
  if ( v9 >= 0x32 )
    v10 = 50;
  else
    v10 = v9;
  if ( !starEffectPrefab )
    goto LABEL_26;
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                 starEffectPrefab,
                                                                 (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  if ( !ComponentInChildren_object )
    goto LABEL_26;
  v11 = ComponentInChildren_object;
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(ComponentInChildren_object, 0LL).fields.m_ParticleSystem;
  v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startDelay(&v16, v20, 0LL);
  v18 = v16;
  constant = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v18, 0LL);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v11, 0LL).fields.m_ParticleSystem;
  v21.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_MainModule__get_startLifetime(&v16, v21, 0LL);
  v18 = v16;
  this->fields.gorgeousStarEffectTime = constant + UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&v18, 0LL);
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ComponentInChildren_object )
    goto LABEL_26;
  if ( *((float *)&ComponentInChildren_object[15].fields + 1) < 1.0 )
    return;
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)BaseMonoBehaviour__createObject(
                                                                 (BaseMonoBehaviour_o *)this,
                                                                 starEffectPrefab,
                                                                 this->fields.criticalpointTr,
                                                                 0LL,
                                                                 0LL);
  if ( !ComponentInChildren_object )
    goto LABEL_26;
  ComponentInChildren_object = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                                                 (UnityEngine_GameObject_o *)ComponentInChildren_object,
                                                                 (const MethodInfo_3041C7C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  tempBurst = this->fields.tempBurst;
  if ( !tempBurst )
    goto LABEL_26;
  if ( !tempBurst->max_length )
    goto LABEL_27;
  v14 = ComponentInChildren_object;
  UnityEngine_ParticleSystem_Burst__set_time(tempBurst->m_Items, 0.0, 0LL);
  v15 = this->fields.tempBurst;
  if ( !v15 )
    goto LABEL_26;
  if ( !v15->max_length || (UnityEngine_ParticleSystem_Burst__set_maxCount(v15->m_Items, v10, 0LL), !v15->max_length) )
LABEL_27:
    sub_1C3B9C8(ComponentInChildren_object, starEffectPrefab);
  UnityEngine_ParticleSystem_Burst__set_minCount(v15->m_Items, v10, 0LL);
  if ( !v14 )
LABEL_26:
    sub_1C3B9C0(ComponentInChildren_object, starEffectPrefab);
  v17 = UnityEngine_ParticleSystem__get_emission(v14, 0LL).fields.m_ParticleSystem;
  v22.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v17;
  UnityEngine_ParticleSystem_EmissionModule__SetBursts(v22, this->fields.tempBurst, 0LL);
}


void __fastcall BattlePerformanceStatus__InitSkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleDataDefine_c *v9; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x20
  UnityEngine_Transform_o *skillSelectAddFuncParent; // x21
  UnityEngine_GameObject_o *skillSelectAddFuncConfWindow; // x0
  __int64 v15; // x1
  struct BattleSkillSelectAddFuncConfComponent_o **p_skillSelectAddFuncConfWindow; // x20
  Il2CppObject *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C25131 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetManager_TryGetAssetObject_GameObject___, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&BattleDataDefine_TypeInfo, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_13084/*"TIME_REST_ACHIVE"*/, v8);
    byte_4C25131 = 1;
  }
  v9 = BattleDataDefine_TypeInfo;
  data = 0LL;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         ASSET_BATTLE_COMMON,
         (System_String_o *)StringLiteral_13084/*"TIME_REST_ACHIVE"*/,
         (const MethodInfo_2FD206C *)Method_AssetManager_TryGetAssetObject_GameObject___) )
  {
    BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(this, v11);
    v12 = data;
    skillSelectAddFuncParent = this->fields.skillSelectAddFuncParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__50818788(
                                                                 v12,
                                                                 skillSelectAddFuncParent,
                                                                 (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
    if ( !skillSelectAddFuncConfWindow )
      goto LABEL_16;
    p_skillSelectAddFuncConfWindow = &this->fields.skillSelectAddFuncConfWindow;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            skillSelectAddFuncConfWindow,
            (Il2CppObject **)&this->fields.skillSelectAddFuncConfWindow,
            (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___) )
      return;
    skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)*p_skillSelectAddFuncConfWindow;
    if ( !*p_skillSelectAddFuncConfWindow
      || (BattleSkillSelectAddFuncConfComponent__Init(
            (BattleSkillSelectAddFuncConfComponent_o *)skillSelectAddFuncConfWindow,
            this->fields.data,
            0LL),
          (skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)this->fields.skillSelectAddFuncConfWindow) == 0LL) )
    {
LABEL_16:
      sub_1C3B9C0(skillSelectAddFuncConfWindow, v15);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))skillSelectAddFuncConfWindow->klass[1]._1.parent)(
      skillSelectAddFuncConfWindow,
      skillSelectAddFuncConfWindow->klass[1]._1.generic_class);
  }
}


void __fastcall BattlePerformanceStatus__Initialize(
        BattlePerformanceStatus_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
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
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x4
  char *playerPerf; // x0
  const MethodInfo *v31; // x4
  BattleLogic_o *v32; // x3
  const MethodInfo *v33; // x4
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct BattleData_o *data; // x1
  BattlePerformanceStatus___c_c *v41; // x0
  System_Collections_Generic_IEnumerable_T__o *selectCommandWindowArray; // x20
  System_Action_object__o *_9__29_0; // x21
  Il2CppObject *v44; // x22
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  const MethodInfo *v52; // x1
  struct UnityEngine_GameObject_o *gameObject; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct UnityEngine_ParticleSystem_Burst_array *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  const MethodInfo *v67; // x1

  if ( (byte_4C25130 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_BattleSelectCommandTypeWindow__TypeInfo, inperf);
    sub_1C3B764(&Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___, v12);
    sub_1C3B764(&UnityEngine_ParticleSystem_Burst___TypeInfo, v13);
    sub_1C3B764(&Method_BattlePerformanceStatus___c__Initialize_b__29_0__, v14);
    sub_1C3B764(&BattlePerformanceStatus___c_TypeInfo, v15);
    byte_4C25130 = 1;
  }
  this->fields.perf = inperf;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.perf,
    (int64_t)inperf,
    (int64_t)indata,
    (int32_t)inlogic,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, v16, v17, v18, v19, v20, v21);
  this->fields.logic = inlogic;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.logic, (int64_t)inlogic, v22, v23, v24, v25, v26, v27);
  playerPerf = (char *)this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_24;
  BattlePerformancePlayer__Initialize(
    (BattlePerformancePlayer_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    v29);
  playerPerf = (char *)this->fields.masterPerf;
  if ( !playerPerf )
    goto LABEL_24;
  BattlePerformanceMaster__Initialize(
    (BattlePerformanceMaster_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    v31);
  playerPerf = (char *)this->fields.enemyPref;
  if ( !playerPerf )
    goto LABEL_24;
  BattlePerformanceEnemy__Initialize(
    (BattlePerformanceEnemy_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    v32,
    v33);
  playerPerf = (char *)this->fields.enemyMasterPerf;
  if ( !playerPerf )
    goto LABEL_24;
  data = this->fields.data;
  *((_QWORD *)playerPerf + 4) = data;
  sub_1C3B708((PartyOrganizationUtility_o *)(playerPerf + 32), (int64_t)data, v34, v35, v36, v37, v38, v39);
  playerPerf = (char *)this->fields.selectSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.selectSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.selectMainSubSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.selectMainSubSvtWindow;
  if ( !playerPerf )
    goto LABEL_24;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.buffConfWindow;
  if ( !playerPerf )
    goto LABEL_24;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.buffConfWindow;
  if ( !playerPerf )
    goto LABEL_24;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  v41 = BattlePerformanceStatus___c_TypeInfo;
  selectCommandWindowArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectCommandWindowArray;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v41 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__29_0 = (System_Action_object__o *)v41->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = BattlePerformanceStatus___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__29_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    System_Action_object____ctor(_9__29_0, v44, Method_BattlePerformanceStatus___c__Initialize_b__29_0__, 0LL);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_BattleSelectCommandTypeWindow__o *)_9__29_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  BasicHelper__ForEach_object_(
    selectCommandWindowArray,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
  BattlePerformanceStatus__InitSkillSelectAddFuncConfWindow(this, v52);
  playerPerf = (char *)this->fields.InfoComp;
  if ( !playerPerf
    || (BattlePerformanceInfoComponent__Initialize((BattlePerformanceInfoComponent_o *)playerPerf, v28),
        (playerPerf = (char *)this->fields.totalCriticalpointlabel) == 0LL)
    || (playerPerf = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)playerPerf, 0LL)) == 0LL
    || (playerPerf = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)playerPerf, 0LL)) == 0LL )
  {
LABEL_24:
    sub_1C3B9C0(playerPerf, v28);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)playerPerf, 0LL);
  this->fields.totalCriticalStarObj = gameObject;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.totalCriticalStarObj,
    (int64_t)gameObject,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.lastTotalCriticalPoint = 0;
  v60 = (struct UnityEngine_ParticleSystem_Burst_array *)sub_1C3B80C(UnityEngine_ParticleSystem_Burst___TypeInfo, 1LL);
  this->fields.tempBurst = v60;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.tempBurst, (int64_t)v60, v61, v62, v63, v64, v65, v66);
  BattlePerformanceStatus__initActionTouch(this, v67);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__OpenBuffConf(
        BattlePerformanceStatus_o *this,
        int32_t Id,
        const MethodInfo *method)
{
  struct BattlePerformancePlayer_o *playerPerf; // x8
  BattlePerformanceStatus_o *v4; // x19
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x8
  BattleBuffConfWindowComponent_c *klass; // x9
  void *methodPtr; // x2
  void (__fastcall *typeMetadataHandle)(BattlePerformanceStatus_o *, _QWORD, void *); // x3

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_13;
  v4 = this;
  this = (BattlePerformanceStatus_o *)playerPerf->fields.confwindowComp;
  if ( !this )
    goto LABEL_13;
  if ( BattleWindowComponent__isOpen((BattleWindowComponent_o *)this, 0LL) )
  {
    this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
    if ( this )
    {
      this = (BattlePerformanceStatus_o *)BattleBuffConfWindowComponent__checkBuffId(
                                            (BattleBuffConfWindowComponent_o *)this,
                                            Id,
                                            0LL);
      buffConfWindow = v4->fields.buffConfWindow;
      if ( buffConfWindow )
      {
        klass = buffConfWindow->klass;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          typeMetadataHandle = (void (__fastcall *)(BattlePerformanceStatus_o *, _QWORD, void *))klass->vtable._12_Close.method;
          methodPtr = klass->vtable._13_CompClose.methodPtr;
          this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
LABEL_12:
          typeMetadataHandle(this, 0LL, methodPtr);
          return;
        }
        ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, Il2CppMethodPointer))klass->vtable._9_setClose.method)(
          v4->fields.buffConfWindow,
          klass->vtable._10_Open.methodPtr);
        this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
        if ( this )
        {
          BattleBuffConfWindowComponent__setData((BattleBuffConfWindowComponent_o *)this, Id, 0LL);
          this = (BattlePerformanceStatus_o *)v4->fields.buffConfWindow;
          if ( this )
          {
            typeMetadataHandle = (void (__fastcall *)(BattlePerformanceStatus_o *, _QWORD, void *))this->klass[1]._1.typeMetadataHandle;
            methodPtr = this->klass[1]._1.interopData;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_1C3B9C0(this, *(_QWORD *)&Id);
  }
}


void __fastcall BattlePerformanceStatus__SetActiveTotalCriticalStar(
        BattlePerformanceStatus_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *totalCriticalStarObj; // x0

  totalCriticalStarObj = this->fields.totalCriticalStarObj;
  if ( !totalCriticalStarObj )
    sub_1C3B9C0(0LL, value);
  UnityEngine_GameObject__SetActive(totalCriticalStarObj, value, 0LL);
}


void __fastcall BattlePerformanceStatus__SetCloseSelectCommandWindowAll(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformanceStatus___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *selectCommandWindowArray; // x19
  System_Action_object__o *_9__76_0; // x20
  Il2CppObject *v9; // x21
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C25138 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_BattleSelectCommandTypeWindow__TypeInfo, method);
    sub_1C3B764(&Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___, v3);
    sub_1C3B764(&Method_BattlePerformanceStatus___c__SetCloseSelectCommandWindowAll_b__76_0__, v4);
    sub_1C3B764(&BattlePerformanceStatus___c_TypeInfo, v5);
    byte_4C25138 = 1;
  }
  v6 = BattlePerformanceStatus___c_TypeInfo;
  selectCommandWindowArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.selectCommandWindowArray;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v6 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__76_0 = (System_Action_object__o *)v6->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattlePerformanceStatus___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__76_0 = (System_Action_object__o *)sub_1C3B9B0(System_Action_BattleSelectCommandTypeWindow__TypeInfo);
    System_Action_object____ctor(
      _9__76_0,
      v9,
      Method_BattlePerformanceStatus___c__SetCloseSelectCommandWindowAll_b__76_0__,
      0LL);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Action_BattleSelectCommandTypeWindow__o *)_9__76_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__76_0,
      (int64_t)_9__76_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BasicHelper__ForEach_object_(
    selectCommandWindowArray,
    (System_Action_T__o *)_9__76_0,
    (const MethodInfo_2FDCE70 *)Method_BasicHelper_ForEach_BattleSelectCommandTypeWindow___);
}


void __fastcall BattlePerformanceStatus__ShowCriticalStarEffectForSkill(
        BattlePerformanceStatus_o *this,
        int32_t starCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o **p_effect_increaseGorgeousStar; // x8

  if ( starCount << 16 >= 0x10000 )
  {
    p_effect_increaseGorgeousStar = &this->fields.effect_increaseGorgeousStar;
  }
  else
  {
    if ( !(_WORD)starCount )
      return;
    p_effect_increaseGorgeousStar = &this->fields.effect_reduceGorgeousStar;
  }
  BattlePerformanceStatus__GorgeousStarCommonFunc(this, *p_effect_increaseGorgeousStar, starCount, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__UpdateTotalCriticalPoint(
        BattlePerformanceStatus_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  UILabel_o *totalCriticalpointlabel; // x19
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v8 = totalCount;
  if ( (byte_4C25135 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_783/*")."*/, *(_QWORD *)&totalCount);
    byte_4C25135 = 1;
  }
  totalCriticalpointlabel = this->fields.totalCriticalpointlabel;
  v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Format((System_String_o *)StringLiteral_783/*")."*/, v5, 0LL);
  if ( !totalCriticalpointlabel )
    sub_1C3B9C0(v6, v7);
  UILabel__set_text(totalCriticalpointlabel, v6, 0LL);
}


void __fastcall BattlePerformanceStatus__actionTouchEvent(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceStatus_TouchEventDelegate_o *tapEvent; // x8

  tapEvent = this->fields.tapEvent;
  if ( tapEvent )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))tapEvent->fields.m_target)(
      tapEvent->fields.original_method_info,
      *(_QWORD *)&tapEvent->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__changeLayer(
        BattlePerformanceStatus_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x21
  BattlePerformanceStatus_o *v6; // x20
  int v7; // s0
  int v10; // s0
  struct BattlePerformance_o *v13; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  if ( !obj )
    goto LABEL_9;
  actorcamera = perf->fields.actorcamera;
  v6 = this;
  this = (BattlePerformanceStatus_o *)UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !this )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !actorcamera )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__WorldToViewportPoint_70928728(
                                     actorcamera,
                                     *(UnityEngine_Vector3_o *)&v7,
                                     0LL);
  v13 = v6->fields.perf;
  if ( !v13
    || (this = (BattlePerformanceStatus_o *)v13->fields.uicamera) == 0LL
    || (v17 = UnityEngine_Camera__ViewportToWorldPoint_70928736(
                (UnityEngine_Camera_o *)this,
                *(UnityEngine_Vector3_o *)&v10,
                0LL),
        x = v17.fields.x,
        y = v17.fields.y,
        z = v17.fields.z,
        (this = (BattlePerformanceStatus_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1C3B9C0(this, obj);
  }
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v18, 0LL);
}


bool __fastcall BattlePerformanceStatus__checkRaidHPUpdate(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantRaidParamComponent_o *raidParam; // x8

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref || (raidParam = enemyPref->fields.raidParam) == 0LL )
    sub_1C3B9C0(this, method);
  return raidParam->fields.flgUpdate;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__clickServantWindow(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C25139 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22780/*"serParser"*/, *(_QWORD *)&index);
    sub_1C3B764(&StringLiteral_3611/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, v5);
    byte_4C25139 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_22780/*"serParser"*/,
                                  0LL)) == 0LL
    || (LODWORD(fsm->fields.addEventHandlers) = index, (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1C3B9C0(fsm, *(_QWORD *)&index);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3611/*"COMMAND_CARD_EXCEED_WARNING_MAX_HEADER_MSG"*/, 0LL);
}


void __fastcall BattlePerformanceStatus__deleteEnemyStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, index);
  BattlePerformanceEnemy__deleteStatus(enemyPref, index, method);
}


void __fastcall BattlePerformanceStatus__deletePlayerStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_1C3B9C0(0LL, index);
  BattlePerformancePlayer__deleteStatus(playerPerf, index, method);
}


void __fastcall BattlePerformanceStatus__endSkill(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__changeAttackButton(perf, 1, 1, 1, 0LL),
        (perf = (BattlePerformance_o *)this->fields.playerPerf) == 0LL)
    || (BattlePerformancePlayer__endSkill((BattlePerformancePlayer_o *)perf, method),
        (perf = (BattlePerformance_o *)this->fields.enemyPref) == 0LL)
    || (BattlePerformanceEnemy__endSkill((BattlePerformanceEnemy_o *)perf, method),
        (perf = (BattlePerformance_o *)this->fields.masterPerf) == 0LL) )
  {
    sub_1C3B9C0(perf, method);
  }
  BattlePerformanceMaster__endSkill((BattlePerformanceMaster_o *)perf, method);
}


UnityEngine_Transform_o *__fastcall BattlePerformanceStatus__getCollectDropTransform(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.dropItemTr;
}


BattleSelectMainSubServantWindow_o *__fastcall BattlePerformanceStatus__getSelectMainSubSvtWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectMainSubSvtWindow;
}


BattleSelectServantWindow_o *__fastcall BattlePerformanceStatus__getSelectSvtWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectSvtWindow;
}


int32_t __fastcall BattlePerformanceStatus__getSelectedUniqueID(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return 0;
}


int64_t __fastcall BattlePerformanceStatus__getTurnSituationParam(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceEnemy_o *enemyPref; // x8

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref || (this = (BattlePerformanceStatus_o *)enemyPref->fields.raidParam) == 0LL )
    sub_1C3B9C0(this, method);
  return BattleServantRaidParamComponent__getTurnSituationParam((BattleServantRaidParamComponent_o *)this, 0LL);
}


BattleSkillSelectAddFuncConfComponent_o *__fastcall BattlePerformanceStatus__get_SkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.skillSelectAddFuncConfWindow;
}


void __fastcall BattlePerformanceStatus__initActionTouch(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_1C3B9C0(0LL, method);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  this->fields.tapEvent = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.tapEvent, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattlePerformanceStatus__initQuest(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_1C3B9C0(this, method);
  BattlePerformanceInfoComponent__setQuest(this->fields.InfoComp, this->fields.data, v2);
}


bool __fastcall BattlePerformanceStatus__isLoading(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemyMst_o *enemyMasterPerf; // x8

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    sub_1C3B9C0(this, method);
  return enemyMasterPerf->fields.loadStat != 0;
}


bool __fastcall BattlePerformanceStatus__isOpenOrOpeningMainWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattlePerformanceMaster_o *masterPerf; // x8
  struct BattlePerformanceMaster_o *v7; // x8
  System_Object_array *selectCommandWindowArray; // x19
  BattlePerformanceStatus___c_c *v10; // x0
  System_Func_object__bool__o *_9__90_0; // x20
  Il2CppObject *v12; // x21
  struct BattlePerformanceStatus___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  v2 = this;
  if ( (byte_4C2513C & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_BattleSelectCommandTypeWindow___, method);
    sub_1C3B764(&System_Func_BattleSelectCommandTypeWindow__bool__TypeInfo, v3);
    sub_1C3B764(&Method_BattlePerformanceStatus___c__isOpenOrOpeningMainWindow_b__90_0__, v4);
    this = (BattlePerformanceStatus_o *)sub_1C3B764(&BattlePerformanceStatus___c_TypeInfo, v5);
    byte_4C2513C = 1;
  }
  masterPerf = v2->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_21;
  this = (BattlePerformanceStatus_o *)masterPerf->fields.win_Spell;
  if ( !this )
    goto LABEL_21;
  this = (BattlePerformanceStatus_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v7 = v2->fields.masterPerf;
  if ( !v7 || (this = (BattlePerformanceStatus_o *)v7->fields.win_Menu) == 0LL )
LABEL_21:
    sub_1C3B9C0(this, method);
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL) )
    return 1;
  this = (BattlePerformanceStatus_o *)v2->fields.selectMainSubSvtWindow;
  if ( !this )
    goto LABEL_21;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL) )
    return 1;
  this = (BattlePerformanceStatus_o *)v2->fields.selectSvtWindow;
  if ( !this )
    goto LABEL_21;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL) )
    return 1;
  selectCommandWindowArray = (System_Object_array *)v2->fields.selectCommandWindowArray;
  v10 = BattlePerformanceStatus___c_TypeInfo;
  if ( !BattlePerformanceStatus___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceStatus___c_TypeInfo);
    v10 = BattlePerformanceStatus___c_TypeInfo;
  }
  _9__90_0 = (System_Func_object__bool__o *)v10->static_fields->__9__90_0;
  if ( !_9__90_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattlePerformanceStatus___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__90_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleSelectCommandTypeWindow__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__90_0,
      v12,
      Method_BattlePerformanceStatus___c__isOpenOrOpeningMainWindow_b__90_0__,
      0LL);
    static_fields = BattlePerformanceStatus___c_TypeInfo->static_fields;
    static_fields->__9__90_0 = (struct System_Func_BattleSelectCommandTypeWindow__bool__o *)_9__90_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__90_0,
      (int64_t)_9__90_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return BasicHelper__Any_object__50179104(
           selectCommandWindowArray,
           (System_Func_T__bool__o *)_9__90_0,
           (const MethodInfo_2FDAC20 *)Method_BasicHelper_Any_BattleSelectCommandTypeWindow___);
}


void __fastcall BattlePerformanceStatus__loadEnemyMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0
  const MethodInfo *v4; // x2

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    goto LABEL_9;
  BattlePerformanceEnemyMst__loadData(enemyMasterPerf, method);
  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    goto LABEL_9;
  BattlePerformanceEnemyMst__OverwriteEnemyMasterFrame(enemyMasterPerf, method);
  enemyMasterPerf = (BattlePerformanceEnemyMst_o *)this->fields.data;
  if ( !enemyMasterPerf )
    goto LABEL_9;
  enemyMasterPerf = (BattlePerformanceEnemyMst_o *)BattleData__getStageEntity((BattleData_o *)enemyMasterPerf, 0LL);
  if ( !enemyMasterPerf )
    goto LABEL_9;
  if ( StageEntity__IsShowEnemyMasterIconOnWaveStart((StageEntity_o *)enemyMasterPerf, 0LL) )
  {
    enemyMasterPerf = this->fields.enemyMasterPerf;
    if ( enemyMasterPerf )
    {
      BattlePerformanceEnemyMst__SetRootActive(enemyMasterPerf, 1, v4);
      return;
    }
LABEL_9:
    sub_1C3B9C0(enemyMasterPerf, method);
  }
}


void __fastcall BattlePerformanceStatus__loadMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *masterPerf; // x0

  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceMaster__loadData(masterPerf, method);
}


void __fastcall BattlePerformanceStatus__modeAction(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceEnemy__startAction(enemyPref, method);
}


void __fastcall BattlePerformanceStatus__modeCommand(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__startCommand(playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.masterPerf) == 0LL)
    || (BattlePerformanceMaster__startCommand((BattlePerformanceMaster_o *)playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref) == 0LL)
    || (BattlePerformanceEnemy__startCommand((BattlePerformanceEnemy_o *)playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.perf) == 0LL) )
  {
    sub_1C3B9C0(playerPerf, method);
  }
  BattlePerformance__changeAttackButton((BattlePerformance_o *)playerPerf, 0, 0, 1, 0LL);
}


void __fastcall BattlePerformanceStatus__modeStartWave(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceEnemy__startWave(enemyPref, method);
}


void __fastcall BattlePerformanceStatus__modeTactical(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_9;
  BattlePerformancePlayer__startTac(playerPerf, method);
  playerPerf = (BattlePerformancePlayer_o *)this->fields.masterPerf;
  if ( !playerPerf )
    goto LABEL_9;
  BattlePerformanceMaster__startTac((BattlePerformanceMaster_o *)playerPerf, method);
  playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref;
  if ( !playerPerf
    || (BattlePerformanceEnemy__startTac((BattlePerformanceEnemy_o *)playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.perf) == 0LL)
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)playerPerf, 1, 1, 1, 0LL),
        (perf = this->fields.perf) == 0LL)
    || (statusPerf = perf->fields.statusPerf) == 0LL
    || (playerPerf = (BattlePerformancePlayer_o *)statusPerf->fields.totalCriticalStarObj) == 0LL )
  {
LABEL_9:
    sub_1C3B9C0(playerPerf, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playerPerf, 1, 0LL);
}


void __fastcall BattlePerformanceStatus__playAttackEffect(
        BattlePerformanceStatus_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_1C3B9C0(0LL, uniqueID);
  BattlePerformancePlayer__playAttackEffect(playerPerf, uniqueID, method);
}


void __fastcall BattlePerformanceStatus__setEnemyParam(
        BattlePerformanceStatus_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, index);
  BattlePerformanceEnemy__setParam(enemyPref, index, svtdata, obj, method);
}


void __fastcall BattlePerformanceStatus__setEnemyParamPosition(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceEnemy__setParamPosition(enemyPref, method);
}


void __fastcall BattlePerformanceStatus__setOffTarget(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceEnemy__setOffTarget(enemyPref, method);
}


void __fastcall BattlePerformanceStatus__setPlayerParam(
        BattlePerformanceStatus_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_1C3B9C0(0LL, index);
  BattlePerformancePlayer__setParam(playerPerf, index, svtdata, method);
}


void __fastcall BattlePerformanceStatus__setShowTurn(
        BattlePerformanceStatus_o *this,
        BattleData_o *bdata,
        int32_t addturn,
        const MethodInfo *method)
{
  BattlePerformanceInfoComponent_o *InfoComp; // x0

  InfoComp = this->fields.InfoComp;
  if ( !InfoComp )
    sub_1C3B9C0(0LL, bdata);
  BattlePerformanceInfoComponent__setShowTurn(InfoComp, bdata, addturn, method);
}


void __fastcall BattlePerformanceStatus__setShowWave(
        BattlePerformanceStatus_o *this,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.InfoComp )
    sub_1C3B9C0(this, now);
  BattlePerformanceInfoComponent__setShowWave(this->fields.InfoComp, now, max, this->fields.data, v4);
}


void __fastcall BattlePerformanceStatus__setTargetParam(
        BattlePerformanceStatus_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, svtdata);
  BattlePerformanceEnemy__setTarget(enemyPref, svtdata, method);
}


void __fastcall BattlePerformanceStatus__setTouchOff(
        BattlePerformanceStatus_o *this,
        BattlePerformanceStatus_TouchEventDelegate_o *inTapEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  PartyOrganizationUtility_o *p_tapEvent; // x19
  System_Delegate_o *tapEvent; // t1
  System_Delegate_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x8
  BattlePerformanceStatus_TouchEventDelegate_c *v16; // x1

  if ( (byte_4C2513B & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, inTapEvent);
    byte_4C2513B = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_1C3B9C0(0LL, inTapEvent);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  tapEvent = (System_Delegate_o *)this->fields.tapEvent;
  p_tapEvent = (PartyOrganizationUtility_o *)&this->fields.tapEvent;
  v8 = System_Delegate__Remove(tapEvent, (System_Delegate_o *)inTapEvent, 0LL);
  v15 = (int64_t)v8;
  if ( !v8 )
    goto LABEL_8;
  v16 = BattlePerformanceStatus_TouchEventDelegate_TypeInfo;
  if ( (BattlePerformanceStatus_TouchEventDelegate_c *)v8->klass != BattlePerformanceStatus_TouchEventDelegate_TypeInfo
    || (p_tapEvent->klass = (PartyOrganizationUtility_c *)v8,
        (BattlePerformanceStatus_TouchEventDelegate_c *)v8->klass != v16) )
  {
    sub_1C3BC80(v8);
LABEL_8:
    p_tapEvent->klass = (PartyOrganizationUtility_c *)v15;
  }
  sub_1C3B708(p_tapEvent, v15, v9, v10, v11, v12, v13, v14);
}


void __fastcall BattlePerformanceStatus__setTouchOn(
        BattlePerformanceStatus_o *this,
        BattlePerformanceStatus_TouchEventDelegate_o *inTapEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  struct BattlePerformanceStatus_TouchEventDelegate_o **p_tapEvent; // x21
  System_Delegate_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x8
  BattlePerformanceStatus_TouchEventDelegate_c *v15; // x1

  if ( (byte_4C2513A & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, inTapEvent);
    byte_4C2513A = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
LABEL_11:
    sub_1C3B9C0(tapObject, inTapEvent);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  p_tapEvent = &this->fields.tapEvent;
  v7 = System_Delegate__Combine((System_Delegate_o *)this->fields.tapEvent, (System_Delegate_o *)inTapEvent, 0LL);
  v14 = (int64_t)v7;
  if ( !v7 )
    goto LABEL_8;
  v15 = BattlePerformanceStatus_TouchEventDelegate_TypeInfo;
  if ( (BattlePerformanceStatus_TouchEventDelegate_c *)v7->klass != BattlePerformanceStatus_TouchEventDelegate_TypeInfo
    || (*p_tapEvent = (struct BattlePerformanceStatus_TouchEventDelegate_o *)v7,
        (BattlePerformanceStatus_TouchEventDelegate_c *)v7->klass != v15) )
  {
    sub_1C3BC80(v7);
LABEL_8:
    *p_tapEvent = (struct BattlePerformanceStatus_TouchEventDelegate_o *)v14;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.tapEvent, v14, v8, v9, v10, v11, v12, v13);
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(tapObject, 1, 0LL);
}


void __fastcall BattlePerformanceStatus__setWinView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, method);
  BattlePerformanceEnemy__setWinView(enemyPref, method);
}


void __fastcall BattlePerformanceStatus__showSideEffect(
        BattlePerformanceStatus_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  const MethodInfo *v6; // x2

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_5;
  if ( BattlePerformancePlayer__showSideEffect(playerPerf, buffData, method) )
    return;
  playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref;
  if ( !playerPerf )
LABEL_5:
    sub_1C3B9C0(playerPerf, buffData);
  BattlePerformanceEnemy__showSideEffect((BattlePerformanceEnemy_o *)playerPerf, buffData, v6);
}


void __fastcall BattlePerformanceStatus__startSkill(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v4; // x2

  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__changeAttackButton(perf, 0, 0, 0, 0LL),
        (perf = (BattlePerformance_o *)this->fields.playerPerf) == 0LL)
    || (BattlePerformancePlayer__startSkill((BattlePerformancePlayer_o *)perf, method),
        (perf = (BattlePerformance_o *)this->fields.enemyPref) == 0LL)
    || (BattlePerformanceEnemy__startSkill((BattlePerformanceEnemy_o *)perf, method),
        (perf = (BattlePerformance_o *)this->fields.masterPerf) == 0LL) )
  {
    sub_1C3B9C0(perf, method);
  }
  BattlePerformanceMaster__startSkill((BattlePerformanceMaster_o *)perf, (int32_t)method, v4);
}


void __fastcall BattlePerformanceStatus__updateBuff(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  if ( !this->fields.playerPerf || !this->fields.enemyPref )
    sub_1C3B9C0(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__updateCriticalPoint(
        BattlePerformanceStatus_o *this,
        int32_t maxLabelCont,
        bool isUseEffect,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  int32_t totalCriticalStars; // w21
  int v6; // w20
  BattlePerformanceStatus_o *v8; // x19
  const MethodInfo *v9; // x2
  struct BattleData_o *v10; // x8
  int criticalstars; // w8
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *CriticalEffect; // x1

  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  totalCriticalStars = data->fields.totalCriticalStars;
  v6 = maxLabelCont;
  v8 = this;
  BattlePerformanceStatus__UpdateTotalCriticalPoint(this, totalCriticalStars, (const MethodInfo *)isUseEffect);
  v8->fields.gorgeousStarEffectTime = 0.0;
  if ( isUseEffect )
    BattlePerformanceStatus__ShowCriticalStarEffectForSkill(
      v8,
      totalCriticalStars - v8->fields.lastTotalCriticalPoint,
      v9);
  v10 = v8->fields.data;
  v8->fields.lastTotalCriticalPoint = totalCriticalStars;
  if ( !v10 || (this = (BattlePerformanceStatus_o *)v8->fields.criticalpointlabel) == 0LL )
LABEL_16:
    sub_1C3B9C0(this, *(_QWORD *)&maxLabelCont);
  criticalstars = v10->fields.criticalstars;
  if ( criticalstars != HIDWORD(this->fields.playerPerf) )
  {
    if ( criticalstars <= v6 || v6 <= 0 )
      v6 = criticalstars;
    DrumRollLabel__changeParam((DrumRollLabel_o *)this, v6, 0, 0LL, v8->fields.gorgeousStarEffectTime, 0LL);
    if ( v6 >= 1 )
    {
      CriticalEffect = BattlePerformanceStatus__DoCreateCriticalEffect(v8, v8->fields.gorgeousStarEffectTime, v13);
      UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)v8, CriticalEffect, 0LL);
    }
  }
}


void __fastcall BattlePerformanceStatus__updateDropItemCount(
        BattlePerformanceStatus_o *this,
        bool isPlayChangeEffect,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattlePerformanceInfoComponent_o *InfoComp; // x0

  InfoComp = this->fields.InfoComp;
  if ( !InfoComp )
    sub_1C3B9C0(0LL, isPlayChangeEffect);
  BattlePerformanceInfoComponent__updateDropItemCount(InfoComp, this->fields.data, isPlayChangeEffect, v3);
}


void __fastcall BattlePerformanceStatus__updateNokoriEnemyCount(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_1C3B9C0(this, method);
  BattlePerformanceInfoComponent__updateNokoriEnemyCount(this->fields.InfoComp, this->fields.data, v2);
}


void __fastcall BattlePerformanceStatus__updateRaidHp(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemy_o *enemyPref; // x8

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref || (this = (BattlePerformanceStatus_o *)enemyPref->fields.raidParam) == 0LL )
    sub_1C3B9C0(this, method);
  BattleServantRaidParamComponent__updateRaidHp((BattleServantRaidParamComponent_o *)this, 0LL);
}


void __fastcall BattlePerformanceStatus__updateRaindInfo(
        BattlePerformanceStatus_o *this,
        BattleRaidInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, infos);
  BattlePerformanceEnemy__updateRaidInfos(enemyPref, infos, fixUpdate, method);
}


void __fastcall BattlePerformanceStatus__updateStateString(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemy_o *enemyPref; // x8

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref || (this = (BattlePerformanceStatus_o *)enemyPref->fields.superbossParam) == 0LL )
    sub_1C3B9C0(this, method);
  BattleServantSuperBossParamComponent__updateStateString((BattleServantSuperBossParamComponent_o *)this, 0LL);
}


void __fastcall BattlePerformanceStatus__updateSuperBossInfo(
        BattlePerformanceStatus_o *this,
        BattleSuperBossInfo_array *infos,
        bool fixUpdate,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_1C3B9C0(0LL, infos);
  BattlePerformanceEnemy__updateSuperBossInfos(enemyPref, infos, fixUpdate, method);
}


void __fastcall BattlePerformanceStatus__updateView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__updateView(playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref) == 0LL) )
  {
    sub_1C3B9C0(playerPerf, method);
  }
  BattlePerformanceEnemy__updateView((BattlePerformanceEnemy_o *)playerPerf, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus_TouchEventDelegate___ctor(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A7FE50;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7FE10;
}


System_IAsyncResult_o *__fastcall BattlePerformanceStatus_TouchEventDelegate__BeginInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v5, callback, object);
}


void __fastcall BattlePerformanceStatus_TouchEventDelegate__EndInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall BattlePerformanceStatus_TouchEventDelegate__Invoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__56___ctor(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__56_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__56__MoveNext(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__56_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  struct BattlePerformanceStatus_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *Object; // x0

  if ( (byte_4C2513F & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, method);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4C2513F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      if ( *((float *)&Instance[23].monitor + 1) < 1.0 )
        return 0;
      if ( _4__this )
      {
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)_4__this,
                   _4__this->fields.effect_takecri,
                   _4__this->fields.criticalpointTr,
                   0LL,
                   0LL);
        GameObjectHelper__addNguiDepth(Object, 100, 0, 0LL);
        return 0;
      }
    }
    sub_1C3B9C0(Instance, v16);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v6, v7, v8, v9, v10, v11, v12);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__56__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceStatus__DoCreateCriticalEffect_d__56__System_Collections_IEnumerator_Reset(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__56_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattlePerformanceStatus__DoCreateCriticalEffect_d__56_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__56__System_Collections_IEnumerator_get_Current(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__56_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__56__System_IDisposable_Dispose(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__56_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceStatus___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C2513E & 1) == 0 )
  {
    sub_1C3B764(&BattlePerformanceStatus___c_TypeInfo, v1);
    byte_4C2513E = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(BattlePerformanceStatus___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattlePerformanceStatus___c_TypeInfo->static_fields->__9 = (struct BattlePerformanceStatus___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattlePerformanceStatus___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattlePerformanceStatus___c___ctor(BattlePerformanceStatus___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceStatus___c___CloseSelectCommandWindowAll_b__75_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, _QWORD, Il2CppMethodPointer))x->klass->vtable._12_Close.method)(
    x,
    0LL,
    x->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceStatus___c___Initialize_b__29_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)x, 2, 0.15, 0, 0LL);
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, Il2CppMethodPointer))x->klass->vtable._9_setClose.method)(
    x,
    x->klass->vtable._10_Open.methodPtr);
}


void __fastcall BattlePerformanceStatus___c___SetCloseSelectCommandWindowAll_b__76_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  ((void (__fastcall *)(BattleSelectCommandTypeWindow_o *, Il2CppMethodPointer))x->klass->vtable._9_setClose.method)(
    x,
    x->klass->vtable._10_Open.methodPtr);
}


bool __fastcall BattlePerformanceStatus___c___isOpenOrOpeningMainWindow_b__90_0(
        BattlePerformanceStatus___c_o *this,
        BattleSelectCommandTypeWindow_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)x, 0LL);
}