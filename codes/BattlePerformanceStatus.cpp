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
    sub_B170D4();
  DrumRollLabel__SetLabelColor(criticalpointlabel, color, 0LL);
}


void __fastcall BattlePerformanceStatus__CloseBuffConf(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x0

  buffConfWindow = this->fields.buffConfWindow;
  if ( !buffConfWindow )
    sub_B170D4();
  ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, _QWORD, Il2CppMethodPointer))buffConfWindow->klass->vtable._12_Close.method)(
    buffConfWindow,
    0LL,
    buffConfWindow->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSelectAddFuncConfWindow; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FA8AF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA8AF = 1;
  }
  skillSelectAddFuncConfWindow = (UnityEngine_Object_o *)this->fields.skillSelectAddFuncConfWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillSelectAddFuncConfWindow, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.skillSelectAddFuncConfWindow;
    if ( !v4 )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect(
        BattlePerformanceStatus_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FA8B0 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceStatus__DoCreateCriticalEffect_d__55_TypeInfo, method);
    byte_40FA8B0 = 1;
  }
  v8 = sub_B170CC(BattlePerformanceStatus__DoCreateCriticalEffect_d__55_TypeInfo, method, v3, v4, v5);
  BattlePerformanceStatus__DoCreateCriticalEffect_d__55___ctor(
    (BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(float *)(v8 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
BattleServantParamComponent_o *__fastcall BattlePerformanceStatus__GetEnemySvtParamComponent(
        BattlePerformanceStatus_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0
  UnityEngine_Object_o *SvtParamComponent; // x21
  BattlePerformanceEnemy_o *v7; // x0

  if ( (byte_40FA8B6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_40FA8B6 = 1;
  }
  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_11;
  SvtParamComponent = (UnityEngine_Object_o *)BattlePerformanceEnemy__GetSvtParamComponent(enemyPref, uniqueId, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(SvtParamComponent, 0LL, 0LL) )
  {
    v7 = this->fields.enemyPref;
    if ( v7 )
      return BattlePerformanceEnemy__GetSvtSuperBossParamComponent(v7, uniqueId, 0LL);
LABEL_11:
    sub_B170D4();
  }
  return (BattleServantParamComponent_o *)SvtParamComponent;
}


void __fastcall BattlePerformanceStatus__GorgeousStarCommonFunc(
        BattlePerformanceStatus_o *this,
        UnityEngine_GameObject_o *starEffectPrefab,
        int16_t starCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t v8; // w0
  int16_t v9; // w0
  int16_t v10; // w20
  UnityEngine_ParticleSystem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  UnityEngine_ParticleSystem_o *v12; // x22
  float startDelay; // s0
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct UnityEngine_ParticleSystem_Burst_array *tempBurst; // x8
  UnityEngine_ParticleSystem_o *v20; // x21
  struct UnityEngine_ParticleSystem_Burst_array *v21; // x23
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v23; // 0:x0.8

  if ( (byte_40FA8B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, starEffectPrefab);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    byte_40FA8B1 = 1;
  }
  m_ParticleSystem = 0LL;
  v8 = UnityEngine_Mathf__Abs_40727336(starCount, 0LL);
  v9 = UnityEngine_Mathf__Min_40727532(v8, 50, 0LL);
  if ( !starEffectPrefab )
    goto LABEL_16;
  v10 = v9;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                starEffectPrefab,
                                                                                (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  if ( !ComponentInChildren_Dropdown_DropdownItem )
    goto LABEL_16;
  v12 = ComponentInChildren_Dropdown_DropdownItem;
  startDelay = UnityEngine_ParticleSystem__get_startDelay(ComponentInChildren_Dropdown_DropdownItem, 0LL);
  this->fields.gorgeousStarEffectTime = startDelay + UnityEngine_ParticleSystem__get_startLifetime(v12, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( *((float *)&Instance[3].fields.webViewScreen + 1) < 1.0 )
    return;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             starEffectPrefab,
             this->fields.criticalpointTr,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_16;
  v16 = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
          Object,
          (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  tempBurst = this->fields.tempBurst;
  if ( !tempBurst )
    goto LABEL_16;
  if ( !tempBurst->max_length )
    goto LABEL_17;
  v20 = (UnityEngine_ParticleSystem_o *)v16;
  UnityEngine_ParticleSystem_Burst__set_time(tempBurst->m_Items, 0.0, 0LL);
  v21 = this->fields.tempBurst;
  if ( !v21 )
    goto LABEL_16;
  if ( !v21->max_length || (UnityEngine_ParticleSystem_Burst__set_maxCount(v21->m_Items, v10, 0LL), !v21->max_length) )
  {
LABEL_17:
    sub_B17100(v16, v17, v18);
    sub_B170A0();
  }
  UnityEngine_ParticleSystem_Burst__set_minCount(v21->m_Items, v10, 0LL);
  if ( !v20 )
LABEL_16:
    sub_B170D4();
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission(v20, 0LL).fields.m_ParticleSystem;
  v23.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_EmissionModule__SetBursts(v23, this->fields.tempBurst, 0LL);
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
  UnityEngine_GameObject_o *v14; // x0
  BattleSkillSelectAddFuncConfComponent_o **p_skillSelectAddFuncConfWindow; // x20
  struct BattleSkillSelectAddFuncConfComponent_o *skillSelectAddFuncConfWindow; // x0
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FA8AE & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetManager_TryGetAssetObject_GameObject___, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_12835, v8);
    byte_40FA8AE = 1;
  }
  data = 0LL;
  v9 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v9 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         ASSET_BATTLE_COMMON,
         (System_String_o *)StringLiteral_12835,
         (const MethodInfo_18AFFFC *)Method_AssetManager_TryGetAssetObject_GameObject___) )
  {
    BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(this, v11);
    v12 = data;
    skillSelectAddFuncParent = this->fields.skillSelectAddFuncParent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)v12,
                                        skillSelectAddFuncParent,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v14 )
      goto LABEL_19;
    p_skillSelectAddFuncConfWindow = &this->fields.skillSelectAddFuncConfWindow;
    if ( !UnityEngine_GameObject__TryGetComponent_UIButton_(
            v14,
            (UIButton_o **)&this->fields.skillSelectAddFuncConfWindow,
            (const MethodInfo_19D1C80 *)Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___) )
      return;
    if ( !*p_skillSelectAddFuncConfWindow
      || (BattleSkillSelectAddFuncConfComponent__Init(*p_skillSelectAddFuncConfWindow, this->fields.data, 0LL),
          (skillSelectAddFuncConfWindow = this->fields.skillSelectAddFuncConfWindow) == 0LL) )
    {
LABEL_19:
      sub_B170D4();
    }
    ((void (__fastcall *)(struct BattleSkillSelectAddFuncConfComponent_o *, Il2CppMethodPointer))skillSelectAddFuncConfWindow->klass->vtable._9_setClose.method)(
      skillSelectAddFuncConfWindow,
      skillSelectAddFuncConfWindow->klass->vtable._10_Open.methodPtr);
  }
}


void __fastcall BattlePerformanceStatus__Initialize(
        BattlePerformanceStatus_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x4
  BattlePerformancePlayer_o *playerPerf; // x0
  const MethodInfo *v26; // x4
  BattlePerformanceMaster_o *masterPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0
  System_Int32_array **data; // x1
  BattleWindowComponent_o *selectSvtWindow; // x0
  struct BattleSelectServantWindow_o *v38; // x0
  BattleWindowComponent_o *selectMainSubSvtWindow; // x0
  struct BattleSelectMainSubServantWindow_o *v40; // x0
  BattleWindowComponent_o *buffConfWindow; // x0
  struct BattleBuffConfWindowComponent_o *v42; // x0
  BattleWindowComponent_o *selectCommandTypeWindow; // x0
  struct BattleSelectCommandTypeWindow_o *v44; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  BattlePerformanceInfoComponent_o *InfoComp; // x0
  UnityEngine_Component_o *totalCriticalpointlabel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x2
  struct UnityEngine_ParticleSystem_Burst_array *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  const MethodInfo *v66; // x1

  if ( (byte_40FA8AD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_ParticleSystem_Burst___TypeInfo, inperf);
    byte_40FA8AD = 1;
  }
  this->fields.perf = inperf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_20;
  BattlePerformancePlayer__Initialize(playerPerf, this->fields.perf, this->fields.data, this->fields.logic, v24);
  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_20;
  BattlePerformanceMaster__Initialize(masterPerf, this->fields.perf, this->fields.data, this->fields.logic, v26);
  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_20;
  BattlePerformanceEnemy__Initialize(enemyPref, this->fields.perf, this->fields.data, this->fields.logic, 0LL);
  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    goto LABEL_20;
  data = (System_Int32_array **)this->fields.data;
  enemyMasterPerf->fields.data = (struct BattleData_o *)data;
  sub_B16F98((BattleServantConfConponent_o *)&enemyMasterPerf->fields.data, data, v29, v30, v31, v32, v33, v34);
  selectSvtWindow = (BattleWindowComponent_o *)this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_20;
  BattleWindowComponent__setInitData(selectSvtWindow, 2, 0.15, 0, 0LL);
  v38 = this->fields.selectSvtWindow;
  if ( !v38 )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleSelectServantWindow_o *, Il2CppMethodPointer))v38->klass->vtable._9_setClose.method)(
    v38,
    v38->klass->vtable._10_Open.methodPtr);
  selectMainSubSvtWindow = (BattleWindowComponent_o *)this->fields.selectMainSubSvtWindow;
  if ( !selectMainSubSvtWindow )
    goto LABEL_20;
  BattleWindowComponent__setInitData(selectMainSubSvtWindow, 2, 0.15, 0, 0LL);
  v40 = this->fields.selectMainSubSvtWindow;
  if ( !v40 )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleSelectMainSubServantWindow_o *, Il2CppMethodPointer))v40->klass->vtable._9_setClose.method)(
    v40,
    v40->klass->vtable._10_Open.methodPtr);
  buffConfWindow = (BattleWindowComponent_o *)this->fields.buffConfWindow;
  if ( !buffConfWindow )
    goto LABEL_20;
  BattleWindowComponent__setInitData(buffConfWindow, 2, 0.15, 0, 0LL);
  v42 = this->fields.buffConfWindow;
  if ( !v42 )
    goto LABEL_20;
  ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, Il2CppMethodPointer))v42->klass->vtable._9_setClose.method)(
    v42,
    v42->klass->vtable._10_Open.methodPtr);
  selectCommandTypeWindow = (BattleWindowComponent_o *)this->fields.selectCommandTypeWindow;
  if ( !selectCommandTypeWindow )
    goto LABEL_20;
  BattleWindowComponent__setInitData(selectCommandTypeWindow, 2, 0.15, 0, 0LL);
  v44 = this->fields.selectCommandTypeWindow;
  if ( !v44
    || (((void (__fastcall *)(struct BattleSelectCommandTypeWindow_o *, Il2CppMethodPointer))v44->klass->vtable._9_setClose.method)(
          v44,
          v44->klass->vtable._10_Open.methodPtr),
        BattlePerformanceStatus__InitSkillSelectAddFuncConfWindow(this, v45),
        (InfoComp = this->fields.InfoComp) == 0LL)
    || (BattlePerformanceInfoComponent__Initialize(InfoComp, v46),
        (totalCriticalpointlabel = (UnityEngine_Component_o *)this->fields.totalCriticalpointlabel) == 0LL)
    || (transform = UnityEngine_Component__get_transform(totalCriticalpointlabel, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
  {
LABEL_20:
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  this->fields.totalCriticalStarObj = gameObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.totalCriticalStarObj,
    (System_Int32_array **)gameObject,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.lastTotalCriticalPoint = 0;
  v59 = (struct UnityEngine_ParticleSystem_Burst_array *)sub_B17014(
                                                           UnityEngine_ParticleSystem_Burst___TypeInfo,
                                                           1LL,
                                                           v58);
  this->fields.tempBurst = v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tempBurst,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  BattlePerformanceStatus__initActionTouch(this, v66);
}


void __fastcall BattlePerformanceStatus__OpenBuffConf(
        BattlePerformanceStatus_o *this,
        int32_t Id,
        const MethodInfo *method)
{
  struct BattlePerformancePlayer_o *playerPerf; // x8
  BattleWindowComponent_o *confwindowComp; // x0
  BattleBuffConfWindowComponent_o *buffConfWindow; // x0
  bool v8; // w0
  struct BattleBuffConfWindowComponent_o *v9; // x8
  BattleBuffConfWindowComponent_c *klass; // x9
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v12; // x3
  struct BattleBuffConfWindowComponent_o *v13; // x0
  BattleBuffConfWindowComponent_o *v14; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_13;
  confwindowComp = (BattleWindowComponent_o *)playerPerf->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_13;
  if ( BattleWindowComponent__isOpen(confwindowComp, 0LL) )
  {
    buffConfWindow = this->fields.buffConfWindow;
    if ( buffConfWindow )
    {
      v8 = BattleBuffConfWindowComponent__checkBuffId(buffConfWindow, Id, 0LL);
      v9 = this->fields.buffConfWindow;
      if ( v9 )
      {
        klass = v9->klass;
        if ( v8 )
        {
          v12 = klass->vtable._12_Close.method;
          methodPtr = klass->vtable._13_CompClose.methodPtr;
          v13 = this->fields.buffConfWindow;
LABEL_12:
          ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, _QWORD, Il2CppMethodPointer))v12)(
            v13,
            0LL,
            methodPtr);
          return;
        }
        ((void (__fastcall *)(struct BattleBuffConfWindowComponent_o *, Il2CppMethodPointer))klass->vtable._9_setClose.method)(
          this->fields.buffConfWindow,
          klass->vtable._10_Open.methodPtr);
        v14 = this->fields.buffConfWindow;
        if ( v14 )
        {
          BattleBuffConfWindowComponent__setData(v14, Id, 0LL);
          v13 = this->fields.buffConfWindow;
          if ( v13 )
          {
            v12 = v13->klass->vtable._10_Open.method;
            methodPtr = v13->klass->vtable._11_CompOpen.methodPtr;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(totalCriticalStarObj, value, 0LL);
}


void __fastcall BattlePerformanceStatus__ShowCriticalStarEffectForSkill(
        BattlePerformanceStatus_o *this,
        int32_t starCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int16_t v4; // w2
  UnityEngine_GameObject_o *effect_increaseGorgeousStar; // x1

  v4 = starCount;
  if ( starCount << 16 >= 0x10000 )
  {
    effect_increaseGorgeousStar = this->fields.effect_increaseGorgeousStar;
  }
  else
  {
    if ( !(_WORD)starCount )
      return;
    effect_increaseGorgeousStar = this->fields.effect_reduceGorgeousStar;
  }
  BattlePerformanceStatus__GorgeousStarCommonFunc(this, effect_increaseGorgeousStar, v4, v3);
}


void __fastcall BattlePerformanceStatus__actionTouchEvent(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceStatus_TouchEventDelegate_o *tapEvent; // x0

  tapEvent = this->fields.tapEvent;
  if ( tapEvent )
    BattlePerformanceStatus_TouchEventDelegate__Invoke(tapEvent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__changeLayer(
        BattlePerformanceStatus_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x21
  UnityEngine_Transform_o *transform; // x0
  int v8; // s0
  int v11; // s0
  struct BattlePerformance_o *v14; // x8
  UnityEngine_Camera_o *uicamera; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_9;
  if ( !obj )
    goto LABEL_9;
  actorcamera = perf->fields.actorcamera;
  transform = UnityEngine_GameObject__get_transform(obj, 0LL);
  if ( !transform )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_position(transform, 0LL);
  if ( !actorcamera )
    goto LABEL_9;
  *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Camera__WorldToViewportPoint_40663552(
                                     actorcamera,
                                     *(UnityEngine_Vector3_o *)&v8,
                                     0LL);
  v14 = this->fields.perf;
  if ( !v14
    || (uicamera = v14->fields.uicamera) == 0LL
    || (v20 = UnityEngine_Camera__ViewportToWorldPoint_40663560(uicamera, *(UnityEngine_Vector3_o *)&v11, 0LL),
        x = v20.fields.x,
        y = v20.fields.y,
        z = v20.fields.z,
        (v19 = UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_position(v19, v21, 0LL);
}


bool __fastcall BattlePerformanceStatus__checkRaidHPUpdate(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  return BattlePerformanceEnemy__checkRaidUpdateHp(enemyPref, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__clickServantWindow(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  PlayMakerFSM_o *v9; // x0

  if ( (byte_40FA8B3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21217, *(_QWORD *)&index);
    sub_B16FFC(&StringLiteral_3072, v5);
    byte_40FA8B3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (FsmInt = HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                   FsmVariables,
                   (System_String_o *)StringLiteral_21217,
                   0LL)) == 0LL
    || (FsmInt->fields.value = index, (v9 = this->fields.fsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(v9, (System_String_o *)StringLiteral_3072, 0LL);
}


void __fastcall BattlePerformanceStatus__deleteEnemyStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__deleteStatus(enemyPref, index, 0LL);
}


void __fastcall BattlePerformanceStatus__deletePlayerStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_B170D4();
  BattlePerformancePlayer__deleteStatus(playerPerf, index, method);
}


void __fastcall BattlePerformanceStatus__endSkill(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v4; // x1
  BattlePerformancePlayer_o *playerPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0
  const MethodInfo *v7; // x1
  BattlePerformanceMaster_o *masterPerf; // x0

  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__changeAttackButton(perf, 1, 1, 1, 0LL), (playerPerf = this->fields.playerPerf) == 0LL)
    || (BattlePerformancePlayer__endSkill(playerPerf, v4), (enemyPref = this->fields.enemyPref) == 0LL)
    || (BattlePerformanceEnemy__endSkill(enemyPref, 0LL), (masterPerf = this->fields.masterPerf) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformanceMaster__endSkill(masterPerf, v7);
}


UnityEngine_Transform_o *__fastcall BattlePerformanceStatus__getCollectDropTransform(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.dropItemTr;
}


BattleSelectCommandTypeWindow_o *__fastcall BattlePerformanceStatus__getSelectCommandTypeWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.selectCommandTypeWindow;
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
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  return BattlePerformanceEnemy__getTurnSituationParam(enemyPref, 0LL);
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  this->fields.tapEvent = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tapEvent, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattlePerformanceStatus__initQuest(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_B170D4();
  BattlePerformanceInfoComponent__setQuest(this->fields.InfoComp, this->fields.data, v2);
}


bool __fastcall BattlePerformanceStatus__isLoading(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemyMst_o *enemyMasterPerf; // x8

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    sub_B170D4();
  return enemyMasterPerf->fields.loadStat != 0;
}


bool __fastcall BattlePerformanceStatus__isOpenOrOpeningMainWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceMaster_o *masterPerf; // x8
  BattleWindowComponent_o *win_Spell; // x0
  struct BattlePerformanceMaster_o *v5; // x8
  BattleWindowComponent_o *win_Menu; // x0
  BattleWindowComponent_o *selectMainSubSvtWindow; // x0
  BattleWindowComponent_o *selectSvtWindow; // x0
  BattleWindowComponent_o *selectCommandTypeWindow; // x0

  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_14;
  win_Spell = (BattleWindowComponent_o *)masterPerf->fields.win_Spell;
  if ( !win_Spell )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening(win_Spell, 0LL) )
    return 1;
  v5 = this->fields.masterPerf;
  if ( !v5 )
    goto LABEL_14;
  win_Menu = (BattleWindowComponent_o *)v5->fields.win_Menu;
  if ( !win_Menu )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening(win_Menu, 0LL) )
    return 1;
  selectMainSubSvtWindow = (BattleWindowComponent_o *)this->fields.selectMainSubSvtWindow;
  if ( !selectMainSubSvtWindow )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening(selectMainSubSvtWindow, 0LL) )
    return 1;
  selectSvtWindow = (BattleWindowComponent_o *)this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening(selectSvtWindow, 0LL) )
    return 1;
  selectCommandTypeWindow = (BattleWindowComponent_o *)this->fields.selectCommandTypeWindow;
  if ( !selectCommandTypeWindow )
LABEL_14:
    sub_B170D4();
  return BattleWindowComponent__isOpenOrOpening(selectCommandTypeWindow, 0LL);
}


void __fastcall BattlePerformanceStatus__loadEnemyMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0
  const MethodInfo *v4; // x1
  BattlePerformanceEnemyMst_o *v5; // x0

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf
    || (BattlePerformanceEnemyMst__loadData(enemyMasterPerf, method), (v5 = this->fields.enemyMasterPerf) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformanceEnemyMst__OverwriteEnemyMasterFrame(v5, v4);
}


void __fastcall BattlePerformanceStatus__loadMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *masterPerf; // x0

  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    sub_B170D4();
  BattlePerformanceMaster__loadData(masterPerf, method);
}


void __fastcall BattlePerformanceStatus__modeAction(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__startAction(enemyPref, 0LL);
}


void __fastcall BattlePerformanceStatus__modeCommand(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  const MethodInfo *v4; // x1
  BattlePerformanceMaster_o *masterPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0
  BattlePerformance_o *perf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__startCommand(playerPerf, method), (masterPerf = this->fields.masterPerf) == 0LL)
    || (BattlePerformanceMaster__startCommand(masterPerf, v4), (enemyPref = this->fields.enemyPref) == 0LL)
    || (BattlePerformanceEnemy__startCommand(enemyPref, 0LL), (perf = this->fields.perf) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformance__changeAttackButton(perf, 0, 0, 1, 0LL);
}


void __fastcall BattlePerformanceStatus__modeStartWave(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__startWave(enemyPref, 0LL);
}


void __fastcall BattlePerformanceStatus__modeTactical(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  const MethodInfo *v4; // x1
  BattlePerformanceMaster_o *masterPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0
  BattlePerformance_o *perf; // x0
  struct BattlePerformance_o *v8; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  UnityEngine_GameObject_o *totalCriticalStarObj; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_9;
  BattlePerformancePlayer__startTac(playerPerf, method);
  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_9;
  BattlePerformanceMaster__startTac(masterPerf, v4);
  enemyPref = this->fields.enemyPref;
  if ( !enemyPref
    || (BattlePerformanceEnemy__startTac(enemyPref, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__changeAttackButton(perf, 1, 1, 1, 0LL), (v8 = this->fields.perf) == 0LL)
    || (statusPerf = v8->fields.statusPerf) == 0LL
    || (totalCriticalStarObj = statusPerf->fields.totalCriticalStarObj) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(totalCriticalStarObj, 1, 0LL);
}


void __fastcall BattlePerformanceStatus__playAttackEffect(
        BattlePerformanceStatus_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    sub_B170D4();
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
    sub_B170D4();
  BattlePerformanceEnemy__setParam(enemyPref, index, svtdata, obj, 0LL);
}


void __fastcall BattlePerformanceStatus__setEnemyParamPosition(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__setParamPosition(enemyPref, 0LL);
}


void __fastcall BattlePerformanceStatus__setOffTarget(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__setOffTarget(enemyPref, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  BattlePerformanceEnemy__setTarget(enemyPref, svtdata, 0LL);
}


void __fastcall BattlePerformanceStatus__setTouchOff(
        BattlePerformanceStatus_o *this,
        BattlePerformanceStatus_TouchEventDelegate_o *inTapEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  BattleServantConfConponent_o *p_tapEvent; // x19
  System_Delegate_o *tapEvent; // t1
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattlePerformanceStatus_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_40FA8B5 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, inTapEvent);
    byte_40FA8B5 = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  tapEvent = (System_Delegate_o *)this->fields.tapEvent;
  p_tapEvent = (BattleServantConfConponent_o *)&this->fields.tapEvent;
  v8 = (System_Int32_array **)System_Delegate__Remove(tapEvent, (System_Delegate_o *)inTapEvent, 0LL);
  if ( v8 && *v8 != (System_Int32_array *)BattlePerformanceStatus_TouchEventDelegate_TypeInfo )
  {
    v15 = (BattlePerformanceStatus_o *)sub_B173C8(v8);
    BattlePerformanceStatus__setWinView(v15, v16);
  }
  else
  {
    p_tapEvent->klass = (BattleServantConfConponent_c *)v8;
    sub_B16F98(p_tapEvent, v8, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall BattlePerformanceStatus__setTouchOn(
        BattlePerformanceStatus_o *this,
        BattlePerformanceStatus_TouchEventDelegate_o *inTapEvent,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *tapObject; // x0
  System_Delegate_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o *v13; // x0
  BattlePerformanceStatus_o *v14; // x0
  BattlePerformanceStatus_TouchEventDelegate_o *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_40FA8B4 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, inTapEvent);
    byte_40FA8B4 = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  v6 = System_Delegate__Combine((System_Delegate_o *)this->fields.tapEvent, (System_Delegate_o *)inTapEvent, 0LL);
  if ( !v6
    || (BattlePerformanceStatus_TouchEventDelegate_c *)v6->klass == BattlePerformanceStatus_TouchEventDelegate_TypeInfo )
  {
    this->fields.tapEvent = (struct BattlePerformanceStatus_TouchEventDelegate_o *)v6;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.tapEvent,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = this->fields.tapObject;
    if ( v13 )
    {
      UnityEngine_GameObject__SetActive(v13, 1, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  v14 = (BattlePerformanceStatus_o *)sub_B173C8(v6);
  BattlePerformanceStatus__setTouchOff(v14, v15, v16);
}


void __fastcall BattlePerformanceStatus__setWinView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__setWinView(enemyPref, 0LL);
}


void __fastcall BattlePerformanceStatus__showSideEffect(
        BattlePerformanceStatus_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_5;
  if ( BattlePerformancePlayer__showSideEffect(playerPerf, buffData, method) )
    return;
  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
LABEL_5:
    sub_B170D4();
  BattlePerformanceEnemy__showSideEffect(enemyPref, buffData, 0LL);
}


void __fastcall BattlePerformanceStatus__startSkill(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v4; // x1
  BattlePerformancePlayer_o *playerPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  BattlePerformanceMaster_o *masterPerf; // x0

  perf = this->fields.perf;
  if ( !perf
    || (BattlePerformance__changeAttackButton(perf, 0, 0, 0, 0LL), (playerPerf = this->fields.playerPerf) == 0LL)
    || (BattlePerformancePlayer__startSkill(playerPerf, v4), (enemyPref = this->fields.enemyPref) == 0LL)
    || (BattlePerformanceEnemy__startSkill(enemyPref, 0LL), (masterPerf = this->fields.masterPerf) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformanceMaster__startSkill(masterPerf, v7, v8);
}


void __fastcall BattlePerformanceStatus__updateBuff(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  if ( !this->fields.playerPerf || (enemyPref = this->fields.enemyPref) == 0LL )
    sub_B170D4();
  BattlePerformanceEnemy__updateBuff(enemyPref, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__updateCriticalPoint(
        BattlePerformanceStatus_o *this,
        int32_t maxLabelCont,
        bool isUseEffect,
        const MethodInfo *method)
{
  int v5; // w20
  const MethodInfo *v7; // x2
  struct BattleData_o *data; // x8
  int32_t totalCriticalStars; // w9
  int32_t criticalstars; // w10
  int32_t v11; // w22
  struct DrumRollLabel_o *criticalpointlabel; // x0
  int32_t v13; // w8
  const MethodInfo *v15; // x1
  System_Collections_IEnumerator_o *CriticalEffect; // x1

  v5 = maxLabelCont;
  BattlePerformanceStatus__updateTotalCriticalPoint(this, *(const MethodInfo **)&maxLabelCont);
  data = this->fields.data;
  if ( !data )
LABEL_17:
    sub_B170D4();
  totalCriticalStars = data->fields.totalCriticalStars;
  criticalstars = data->fields.criticalstars;
  this->fields.gorgeousStarEffectTime = 0.0;
  v11 = criticalstars + totalCriticalStars;
  if ( isUseEffect )
  {
    BattlePerformanceStatus__ShowCriticalStarEffectForSkill(this, v11 - this->fields.lastTotalCriticalPoint, v7);
    data = this->fields.data;
    this->fields.lastTotalCriticalPoint = v11;
    if ( !data )
      goto LABEL_17;
  }
  else
  {
    this->fields.lastTotalCriticalPoint = v11;
  }
  criticalpointlabel = this->fields.criticalpointlabel;
  if ( !criticalpointlabel )
    goto LABEL_17;
  v13 = data->fields.criticalstars;
  if ( v13 != criticalpointlabel->fields.nextvalue )
  {
    if ( v13 <= v5 || v5 <= 0 )
      v5 = v13;
    DrumRollLabel__changeParam(criticalpointlabel, v5, 0, 0LL, this->fields.gorgeousStarEffectTime, 0LL);
    if ( v5 >= 1 )
    {
      CriticalEffect = BattlePerformanceStatus__DoCreateCriticalEffect(this, this->fields.gorgeousStarEffectTime, v15);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, CriticalEffect, 0LL);
    }
  }
}


void __fastcall BattlePerformanceStatus__updateDropItemCount(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_B170D4();
  BattlePerformanceInfoComponent__updateDropItemCount(this->fields.InfoComp, this->fields.data, v2);
}


void __fastcall BattlePerformanceStatus__updateNokoriEnemyCount(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_B170D4();
  BattlePerformanceInfoComponent__updateNokoriEnemyCount(this->fields.InfoComp, this->fields.data, v2);
}


void __fastcall BattlePerformanceStatus__updateRaidHp(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__updateRaidHp(enemyPref, 0LL);
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
    sub_B170D4();
  BattlePerformanceEnemy__updateRaidInfos(enemyPref, infos, fixUpdate, 0LL);
}


void __fastcall BattlePerformanceStatus__updateStateString(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B170D4();
  BattlePerformanceEnemy__updateStateString(enemyPref, 0LL);
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
    sub_B170D4();
  BattlePerformanceEnemy__updateSuperBossInfos(enemyPref, infos, fixUpdate, 0LL);
}


void __fastcall BattlePerformanceStatus__updateTotalCriticalPoint(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  UILabel_o *totalCriticalpointlabel; // x19
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t totalCriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA8B2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_646, method);
    byte_40FA8B2 = 1;
  }
  totalCriticalStars = 0;
  data = this->fields.data;
  if ( !data
    || (totalCriticalStars = data->fields.totalCriticalStars,
        totalCriticalpointlabel = this->fields.totalCriticalpointlabel,
        v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&totalCriticalStars, 0LL),
        v6 = System_String__Format((System_String_o *)StringLiteral_646, v5, 0LL),
        !totalCriticalpointlabel) )
  {
    sub_B170D4();
  }
  UILabel__set_text(totalCriticalpointlabel, v6, 0LL);
}


void __fastcall BattlePerformanceStatus__updateView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0
  BattlePerformanceEnemy_o *enemyPref; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__updateView(playerPerf, method), (enemyPref = this->fields.enemyPref) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformanceEnemy__updateView(enemyPref, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus_TouchEventDelegate___ctor(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B16F98(p_method, object);
}


System_IAsyncResult_o *__fastcall BattlePerformanceStatus_TouchEventDelegate__BeginInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall BattlePerformanceStatus_TouchEventDelegate__EndInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall BattlePerformanceStatus_TouchEventDelegate__Invoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  BattlePerformanceStatus_TouchEventDelegate_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  BattlePerformanceStatus_TouchEventDelegate_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  BattlePerformanceStatus_TouchEventDelegate_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (BattlePerformanceStatus_TouchEventDelegate_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}


void __fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__55___ctor(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__55__MoveNext(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  bool result; // w0
  struct BattlePerformanceStatus_o *_4__this; // x20
  WebViewManager_o *Instance; // x0
  UnityEngine_GameObject_o *Object; // x0

  if ( (byte_40F7180 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F7180 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( Instance )
    {
      if ( *((float *)&Instance[3].fields.webViewScreen + 1) < 1.0 )
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
    sub_B170D4();
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v9 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v9, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_B16F98(&this->fields.__2__current, v9);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceStatus__DoCreateCriticalEffect_d__55__System_Collections_IEnumerator_Reset(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceStatus__DoCreateCriticalEffect_d__55_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__55__System_Collections_IEnumerator_get_Current(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceStatus__DoCreateCriticalEffect_d__55__System_IDisposable_Dispose(
        BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *this,
        const MethodInfo *method)
{
  ;
}