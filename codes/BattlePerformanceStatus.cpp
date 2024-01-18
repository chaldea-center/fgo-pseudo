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
    sub_B2C434(0LL, method);
  DrumRollLabel__SetLabelColor(criticalpointlabel, color, 0LL);
}


void __fastcall BattlePerformanceStatus__CloseBuffConf(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattleBuffConfWindowComponent_o *buffConfWindow; // x0

  buffConfWindow = this->fields.buffConfWindow;
  if ( !buffConfWindow )
    sub_B2C434(0LL, method);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_418851B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418851B = 1;
  }
  skillSelectAddFuncConfWindow = (UnityEngine_Object_o *)this->fields.skillSelectAddFuncConfWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillSelectAddFuncConfWindow, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.skillSelectAddFuncConfWindow;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePerformanceStatus__DoCreateCriticalEffect(
        BattlePerformanceStatus_o *this,
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

  if ( (byte_418851C & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceStatus__DoCreateCriticalEffect_d__55_TypeInfo, method);
    byte_418851C = 1;
  }
  v5 = sub_B2C42C(BattlePerformanceStatus__DoCreateCriticalEffect_d__55_TypeInfo);
  BattlePerformanceStatus__DoCreateCriticalEffect_d__55___ctor(
    (BattlePerformanceStatus__DoCreateCriticalEffect_d__55_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4188522 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4188522 = 1;
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
    enemyPref = this->fields.enemyPref;
    if ( enemyPref )
      return BattlePerformanceEnemy__GetSvtSuperBossParamComponent(enemyPref, uniqueId, 0LL);
LABEL_11:
    sub_B2C434(enemyPref, *(_QWORD *)&uniqueId);
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
  UnityEngine_ParticleSystem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  __int64 v10; // x1
  int16_t v11; // w20
  UnityEngine_ParticleSystem_o *v12; // x22
  float startDelay; // s0
  struct UnityEngine_ParticleSystem_Burst_array *tempBurst; // x8
  UnityEngine_ParticleSystem_o *v15; // x21
  struct UnityEngine_ParticleSystem_Burst_array *v16; // x23
  __int64 v17; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_EmissionModule_o v19; // 0:x0.8

  if ( (byte_418851D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___, starEffectPrefab);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    byte_418851D = 1;
  }
  m_ParticleSystem = 0LL;
  v8 = UnityEngine_Mathf__Abs_40694508(starCount, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_ParticleSystem_o *)UnityEngine_Mathf__Min_40694704(
                                                                                v8,
                                                                                50,
                                                                                0LL);
  if ( !starEffectPrefab )
    goto LABEL_16;
  v11 = (__int16)ComponentInChildren_Dropdown_DropdownItem;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                starEffectPrefab,
                                                                                (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  if ( !ComponentInChildren_Dropdown_DropdownItem )
    goto LABEL_16;
  v12 = ComponentInChildren_Dropdown_DropdownItem;
  startDelay = UnityEngine_ParticleSystem__get_startDelay(ComponentInChildren_Dropdown_DropdownItem, 0LL);
  this->fields.gorgeousStarEffectTime = startDelay + UnityEngine_ParticleSystem__get_startLifetime(v12, 0LL);
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_ParticleSystem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !ComponentInChildren_Dropdown_DropdownItem )
    goto LABEL_16;
  if ( *((float *)&ComponentInChildren_Dropdown_DropdownItem[15].klass + 1) < 1.0 )
    return;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_ParticleSystem_o *)BaseMonoBehaviour__createObject(
                                                                                (BaseMonoBehaviour_o *)this,
                                                                                starEffectPrefab,
                                                                                this->fields.criticalpointTr,
                                                                                0LL,
                                                                                0LL);
  if ( !ComponentInChildren_Dropdown_DropdownItem )
    goto LABEL_16;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_ParticleSystem_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                (UnityEngine_GameObject_o *)ComponentInChildren_Dropdown_DropdownItem,
                                                                                (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem___);
  tempBurst = this->fields.tempBurst;
  if ( !tempBurst )
    goto LABEL_16;
  if ( !tempBurst->max_length )
    goto LABEL_17;
  v15 = ComponentInChildren_Dropdown_DropdownItem;
  UnityEngine_ParticleSystem_Burst__set_time(tempBurst->m_Items, 0.0, 0LL);
  v16 = this->fields.tempBurst;
  if ( !v16 )
    goto LABEL_16;
  if ( !v16->max_length || (UnityEngine_ParticleSystem_Burst__set_maxCount(v16->m_Items, v11, 0LL), !v16->max_length) )
  {
LABEL_17:
    v17 = sub_B2C460(ComponentInChildren_Dropdown_DropdownItem);
    sub_B2C400(v17, 0LL);
  }
  UnityEngine_ParticleSystem_Burst__set_minCount(v16->m_Items, v11, 0LL);
  if ( !v15 )
LABEL_16:
    sub_B2C434(ComponentInChildren_Dropdown_DropdownItem, v10);
  m_ParticleSystem = UnityEngine_ParticleSystem__get_emission(v15, 0LL).fields.m_ParticleSystem;
  v19.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
  UnityEngine_ParticleSystem_EmissionModule__SetBursts(v19, this->fields.tempBurst, 0LL);
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
  Il2CppObject *data; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418851A & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetManager_TryGetAssetObject_GameObject___, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_12891/*"SkillSelectAddFuncConfWindow"*/, v8);
    byte_418851A = 1;
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
         (System_String_o *)StringLiteral_12891/*"SkillSelectAddFuncConfWindow"*/,
         (const MethodInfo_17206E0 *)Method_AssetManager_TryGetAssetObject_GameObject___) )
  {
    BattlePerformanceStatus__DestroySkillSelectAddFuncConfWindow(this, v11);
    v12 = data;
    skillSelectAddFuncParent = this->fields.skillSelectAddFuncParent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                 (UILabel_o *)v12,
                                                                 skillSelectAddFuncParent,
                                                                 (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !skillSelectAddFuncConfWindow )
      goto LABEL_19;
    p_skillSelectAddFuncConfWindow = &this->fields.skillSelectAddFuncConfWindow;
    if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
            skillSelectAddFuncConfWindow,
            (UISprite_o **)&this->fields.skillSelectAddFuncConfWindow,
            (const MethodInfo_1AA807C *)Method_UnityEngine_GameObject_TryGetComponent_BattleSkillSelectAddFuncConfComponent___) )
      return;
    skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)*p_skillSelectAddFuncConfWindow;
    if ( !*p_skillSelectAddFuncConfWindow
      || (BattleSkillSelectAddFuncConfComponent__Init(
            (BattleSkillSelectAddFuncConfComponent_o *)skillSelectAddFuncConfWindow,
            this->fields.data,
            0LL),
          (skillSelectAddFuncConfWindow = (UnityEngine_GameObject_o *)this->fields.skillSelectAddFuncConfWindow) == 0LL) )
    {
LABEL_19:
      sub_B2C434(skillSelectAddFuncConfWindow, v15);
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
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  char *playerPerf; // x0
  const MethodInfo *v27; // x4
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **data; // x1
  const MethodInfo *v35; // x1
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UnityEngine_ParticleSystem_Burst_array *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x1

  if ( (byte_4188519 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_ParticleSystem_Burst___TypeInfo, inperf);
    byte_4188519 = 1;
  }
  this->fields.perf = inperf;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inperf,
    (System_String_array **)indata,
    (System_String_array **)inlogic,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.data = indata;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.logic = inlogic;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.logic,
    (System_Int32_array **)inlogic,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  playerPerf = (char *)this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_20;
  BattlePerformancePlayer__Initialize(
    (BattlePerformancePlayer_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    v25);
  playerPerf = (char *)this->fields.masterPerf;
  if ( !playerPerf )
    goto LABEL_20;
  BattlePerformanceMaster__Initialize(
    (BattlePerformanceMaster_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    v27);
  playerPerf = (char *)this->fields.enemyPref;
  if ( !playerPerf )
    goto LABEL_20;
  BattlePerformanceEnemy__Initialize(
    (BattlePerformanceEnemy_o *)playerPerf,
    this->fields.perf,
    this->fields.data,
    this->fields.logic,
    0LL);
  playerPerf = (char *)this->fields.enemyMasterPerf;
  if ( !playerPerf )
    goto LABEL_20;
  data = (System_Int32_array **)this->fields.data;
  *((_QWORD *)playerPerf + 3) = data;
  sub_B2C2F8((BattleServantConfConponent_o *)(playerPerf + 24), data, v28, v29, v30, v31, v32, v33);
  playerPerf = (char *)this->fields.selectSvtWindow;
  if ( !playerPerf )
    goto LABEL_20;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.selectSvtWindow;
  if ( !playerPerf )
    goto LABEL_20;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.selectMainSubSvtWindow;
  if ( !playerPerf )
    goto LABEL_20;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.selectMainSubSvtWindow;
  if ( !playerPerf )
    goto LABEL_20;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.buffConfWindow;
  if ( !playerPerf )
    goto LABEL_20;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.buffConfWindow;
  if ( !playerPerf )
    goto LABEL_20;
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
    playerPerf,
    *(_QWORD *)(*(_QWORD *)playerPerf + 464LL));
  playerPerf = (char *)this->fields.selectCommandTypeWindow;
  if ( !playerPerf )
    goto LABEL_20;
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)playerPerf, 2, 0.15, 0, 0LL);
  playerPerf = (char *)this->fields.selectCommandTypeWindow;
  if ( !playerPerf
    || ((*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)playerPerf + 456LL))(
          playerPerf,
          *(_QWORD *)(*(_QWORD *)playerPerf + 464LL)),
        BattlePerformanceStatus__InitSkillSelectAddFuncConfWindow(this, v35),
        (playerPerf = (char *)this->fields.InfoComp) == 0LL)
    || (BattlePerformanceInfoComponent__Initialize((BattlePerformanceInfoComponent_o *)playerPerf, v24),
        (playerPerf = (char *)this->fields.totalCriticalpointlabel) == 0LL)
    || (playerPerf = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)playerPerf, 0LL)) == 0LL
    || (playerPerf = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)playerPerf, 0LL)) == 0LL )
  {
LABEL_20:
    sub_B2C434(playerPerf, v24);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)playerPerf, 0LL);
  this->fields.totalCriticalStarObj = gameObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.totalCriticalStarObj,
    (System_Int32_array **)gameObject,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.lastTotalCriticalPoint = 0;
  v43 = (struct UnityEngine_ParticleSystem_Burst_array *)sub_B2C374(UnityEngine_ParticleSystem_Burst___TypeInfo, 1LL);
  this->fields.tempBurst = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tempBurst,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  BattlePerformanceStatus__initActionTouch(this, v50);
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
    sub_B2C434(this, *(_QWORD *)&Id);
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
    sub_B2C434(0LL, value);
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
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Camera__WorldToViewportPoint_40630724(
                                     actorcamera,
                                     *(UnityEngine_Vector3_o *)&v7,
                                     0LL);
  v13 = v6->fields.perf;
  if ( !v13
    || (this = (BattlePerformanceStatus_o *)v13->fields.uicamera) == 0LL
    || (v17 = UnityEngine_Camera__ViewportToWorldPoint_40630732(
                (UnityEngine_Camera_o *)this,
                *(UnityEngine_Vector3_o *)&v10,
                0LL),
        x = v17.fields.x,
        y = v17.fields.y,
        z = v17.fields.z,
        (this = (BattlePerformanceStatus_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_B2C434(this, obj);
  }
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v18, 0LL);
}


bool __fastcall BattlePerformanceStatus__checkRaidHPUpdate(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
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

  if ( (byte_418851F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21307/*"openSvtIndex"*/, *(_QWORD *)&index);
    sub_B2C35C(&StringLiteral_3081/*"CLICK_SVTWINDOW"*/, v5);
    byte_418851F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_21307/*"openSvtIndex"*/,
                                  0LL)) == 0LL
    || (LODWORD(fsm[1].klass) = index, (fsm = this->fields.fsm) == 0LL) )
  {
    sub_B2C434(fsm, *(_QWORD *)&index);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3081/*"CLICK_SVTWINDOW"*/, 0LL);
}


void __fastcall BattlePerformanceStatus__deleteEnemyStatus(
        BattlePerformanceStatus_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, index);
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
    sub_B2C434(0LL, index);
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
    || (BattlePerformanceEnemy__endSkill((BattlePerformanceEnemy_o *)perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.masterPerf) == 0LL) )
  {
    sub_B2C434(perf, method);
  }
  BattlePerformanceMaster__endSkill((BattlePerformanceMaster_o *)perf, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  this->fields.tapEvent = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tapEvent, 0LL, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattlePerformanceStatus__initQuest(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_B2C434(this, method);
  BattlePerformanceInfoComponent__setQuest(this->fields.InfoComp, this->fields.data, v2);
}


bool __fastcall BattlePerformanceStatus__isLoading(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  struct BattlePerformanceEnemyMst_o *enemyMasterPerf; // x8

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf )
    sub_B2C434(this, method);
  return enemyMasterPerf->fields.loadStat != 0;
}


bool __fastcall BattlePerformanceStatus__isOpenOrOpeningMainWindow(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  struct BattlePerformanceMaster_o *masterPerf; // x8
  BattlePerformanceStatus_o *v3; // x19
  struct BattlePerformanceMaster_o *v4; // x8

  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    goto LABEL_14;
  v3 = this;
  this = (BattlePerformanceStatus_o *)masterPerf->fields.win_Spell;
  if ( !this )
    goto LABEL_14;
  this = (BattlePerformanceStatus_o *)BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  v4 = v3->fields.masterPerf;
  if ( !v4 )
    goto LABEL_14;
  this = (BattlePerformanceStatus_o *)v4->fields.win_Menu;
  if ( !this )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL) )
    return 1;
  this = (BattlePerformanceStatus_o *)v3->fields.selectMainSubSvtWindow;
  if ( !this )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL) )
    return 1;
  this = (BattlePerformanceStatus_o *)v3->fields.selectSvtWindow;
  if ( !this )
    goto LABEL_14;
  if ( BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL) )
    return 1;
  this = (BattlePerformanceStatus_o *)v3->fields.selectCommandTypeWindow;
  if ( !this )
LABEL_14:
    sub_B2C434(this, method);
  return BattleWindowComponent__isOpenOrOpening((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattlePerformanceStatus__loadEnemyMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *enemyMasterPerf; // x0

  enemyMasterPerf = this->fields.enemyMasterPerf;
  if ( !enemyMasterPerf
    || (BattlePerformanceEnemyMst__loadData(enemyMasterPerf, method),
        (enemyMasterPerf = this->fields.enemyMasterPerf) == 0LL) )
  {
    sub_B2C434(enemyMasterPerf, method);
  }
  BattlePerformanceEnemyMst__OverwriteEnemyMasterFrame(enemyMasterPerf, method);
}


void __fastcall BattlePerformanceStatus__loadMaster(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceMaster_o *masterPerf; // x0

  masterPerf = this->fields.masterPerf;
  if ( !masterPerf )
    sub_B2C434(0LL, method);
  BattlePerformanceMaster__loadData(masterPerf, method);
}


void __fastcall BattlePerformanceStatus__modeAction(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
  BattlePerformanceEnemy__startAction(enemyPref, 0LL);
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
    || (BattlePerformanceEnemy__startCommand((BattlePerformanceEnemy_o *)playerPerf, 0LL),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.perf) == 0LL) )
  {
    sub_B2C434(playerPerf, method);
  }
  BattlePerformance__changeAttackButton((BattlePerformance_o *)playerPerf, 0, 0, 1, 0LL);
}


void __fastcall BattlePerformanceStatus__modeStartWave(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
  BattlePerformanceEnemy__startWave(enemyPref, 0LL);
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
    || (BattlePerformanceEnemy__startTac((BattlePerformanceEnemy_o *)playerPerf, 0LL),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.perf) == 0LL)
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)playerPerf, 1, 1, 1, 0LL),
        (perf = this->fields.perf) == 0LL)
    || (statusPerf = perf->fields.statusPerf) == 0LL
    || (playerPerf = (BattlePerformancePlayer_o *)statusPerf->fields.totalCriticalStarObj) == 0LL )
  {
LABEL_9:
    sub_B2C434(playerPerf, method);
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
    sub_B2C434(0LL, uniqueID);
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
    sub_B2C434(0LL, index);
  BattlePerformanceEnemy__setParam(enemyPref, index, svtdata, obj, 0LL);
}


void __fastcall BattlePerformanceStatus__setEnemyParamPosition(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
  BattlePerformanceEnemy__setParamPosition(enemyPref, 0LL);
}


void __fastcall BattlePerformanceStatus__setOffTarget(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, index);
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
    sub_B2C434(0LL, bdata);
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
    sub_B2C434(this, now);
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
    sub_B2C434(0LL, svtdata);
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

  if ( (byte_4188521 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, inTapEvent);
    byte_4188521 = 1;
  }
  tapObject = this->fields.tapObject;
  if ( !tapObject )
    sub_B2C434(0LL, inTapEvent);
  UnityEngine_GameObject__SetActive(tapObject, 0, 0LL);
  tapEvent = (System_Delegate_o *)this->fields.tapEvent;
  p_tapEvent = (BattleServantConfConponent_o *)&this->fields.tapEvent;
  v8 = (System_Int32_array **)System_Delegate__Remove(tapEvent, (System_Delegate_o *)inTapEvent, 0LL);
  if ( v8 && *v8 != (System_Int32_array *)BattlePerformanceStatus_TouchEventDelegate_TypeInfo )
  {
    v15 = (BattlePerformanceStatus_o *)sub_B2C728(v8);
    BattlePerformanceStatus__setWinView(v15, v16);
  }
  else
  {
    p_tapEvent->klass = (BattleServantConfConponent_c *)v8;
    sub_B2C2F8(p_tapEvent, v8, v9, v10, v11, v12, v13, v14);
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
  BattlePerformanceStatus_o *v13; // x0
  BattlePerformanceStatus_TouchEventDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4188520 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, inTapEvent);
    byte_4188520 = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.tapEvent,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    tapObject = this->fields.tapObject;
    if ( tapObject )
    {
      UnityEngine_GameObject__SetActive(tapObject, 1, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(tapObject, inTapEvent);
  }
  v13 = (BattlePerformanceStatus_o *)sub_B2C728(v6);
  BattlePerformanceStatus__setTouchOff(v13, v14, v15);
}


void __fastcall BattlePerformanceStatus__setWinView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
  BattlePerformanceEnemy__setWinView(enemyPref, 0LL);
}


void __fastcall BattlePerformanceStatus__showSideEffect(
        BattlePerformanceStatus_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_5;
  if ( BattlePerformancePlayer__showSideEffect(playerPerf, buffData, method) )
    return;
  playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref;
  if ( !playerPerf )
LABEL_5:
    sub_B2C434(playerPerf, buffData);
  BattlePerformanceEnemy__showSideEffect((BattlePerformanceEnemy_o *)playerPerf, buffData, 0LL);
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
    || (BattlePerformanceEnemy__startSkill((BattlePerformanceEnemy_o *)perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.masterPerf) == 0LL) )
  {
    sub_B2C434(perf, method);
  }
  BattlePerformanceMaster__startSkill((BattlePerformanceMaster_o *)perf, (int32_t)method, v4);
}


void __fastcall BattlePerformanceStatus__updateBuff(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  if ( !this->fields.playerPerf || (this = (BattlePerformanceStatus_o *)this->fields.enemyPref) == 0LL )
    sub_B2C434(this, method);
  BattlePerformanceEnemy__updateBuff((BattlePerformanceEnemy_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceStatus__updateCriticalPoint(
        BattlePerformanceStatus_o *this,
        int32_t maxLabelCont,
        bool isUseEffect,
        const MethodInfo *method)
{
  int v5; // w20
  struct DrumRollLabel_o *criticalpointlabel; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct BattleData_o *data; // x8
  int32_t totalCriticalStars; // w9
  int32_t criticalstars; // w10
  int32_t v13; // w22
  int32_t v14; // w8
  const MethodInfo *v16; // x1
  System_Collections_IEnumerator_o *CriticalEffect; // x1

  v5 = maxLabelCont;
  BattlePerformanceStatus__updateTotalCriticalPoint(this, *(const MethodInfo **)&maxLabelCont);
  data = this->fields.data;
  if ( !data )
LABEL_17:
    sub_B2C434(criticalpointlabel, v8);
  totalCriticalStars = data->fields.totalCriticalStars;
  criticalstars = data->fields.criticalstars;
  this->fields.gorgeousStarEffectTime = 0.0;
  v13 = criticalstars + totalCriticalStars;
  if ( isUseEffect )
  {
    BattlePerformanceStatus__ShowCriticalStarEffectForSkill(this, v13 - this->fields.lastTotalCriticalPoint, v9);
    data = this->fields.data;
    this->fields.lastTotalCriticalPoint = v13;
    if ( !data )
      goto LABEL_17;
  }
  else
  {
    this->fields.lastTotalCriticalPoint = v13;
  }
  criticalpointlabel = this->fields.criticalpointlabel;
  if ( !criticalpointlabel )
    goto LABEL_17;
  v14 = data->fields.criticalstars;
  if ( v14 != criticalpointlabel->fields.nextvalue )
  {
    if ( v14 <= v5 || v5 <= 0 )
      v5 = v14;
    DrumRollLabel__changeParam(criticalpointlabel, v5, 0, 0LL, this->fields.gorgeousStarEffectTime, 0LL);
    if ( v5 >= 1 )
    {
      CriticalEffect = BattlePerformanceStatus__DoCreateCriticalEffect(this, this->fields.gorgeousStarEffectTime, v16);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, CriticalEffect, 0LL);
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
    sub_B2C434(0LL, isPlayChangeEffect);
  BattlePerformanceInfoComponent__updateDropItemCount(InfoComp, this->fields.data, isPlayChangeEffect, v3);
}


void __fastcall BattlePerformanceStatus__updateNokoriEnemyCount(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.InfoComp )
    sub_B2C434(this, method);
  BattlePerformanceInfoComponent__updateNokoriEnemyCount(this->fields.InfoComp, this->fields.data, v2);
}


void __fastcall BattlePerformanceStatus__updateRaidHp(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, infos);
  BattlePerformanceEnemy__updateRaidInfos(enemyPref, infos, fixUpdate, 0LL);
}


void __fastcall BattlePerformanceStatus__updateStateString(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemy_o *enemyPref; // x0

  enemyPref = this->fields.enemyPref;
  if ( !enemyPref )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, infos);
  BattlePerformanceEnemy__updateSuperBossInfos(enemyPref, infos, fixUpdate, 0LL);
}


void __fastcall BattlePerformanceStatus__updateTotalCriticalPoint(
        BattlePerformanceStatus_o *this,
        const MethodInfo *method)
{
  BattlePerformanceStatus_o *v2; // x19
  struct BattleData_o *data; // x8
  UILabel_o *totalCriticalpointlabel; // x19
  Il2CppObject *v5; // x0
  int32_t totalCriticalStars; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_418851E & 1) == 0 )
  {
    this = (BattlePerformanceStatus_o *)sub_B2C35C(&StringLiteral_647/*"({0})"*/, method);
    byte_418851E = 1;
  }
  totalCriticalStars = 0;
  data = v2->fields.data;
  if ( !data
    || (totalCriticalStars = data->fields.totalCriticalStars,
        totalCriticalpointlabel = v2->fields.totalCriticalpointlabel,
        v5 = (Il2CppObject *)System_Int32__ToString((int32_t)&totalCriticalStars, 0LL),
        this = (BattlePerformanceStatus_o *)System_String__Format((System_String_o *)StringLiteral_647/*"({0})"*/, v5, 0LL),
        !totalCriticalpointlabel) )
  {
    sub_B2C434(this, method);
  }
  UILabel__set_text(totalCriticalpointlabel, (System_String_o *)this, 0LL);
}


void __fastcall BattlePerformanceStatus__updateView(BattlePerformanceStatus_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *playerPerf; // x0

  playerPerf = this->fields.playerPerf;
  if ( !playerPerf
    || (BattlePerformancePlayer__updateView(playerPerf, method),
        (playerPerf = (BattlePerformancePlayer_o *)this->fields.enemyPref) == 0LL) )
  {
    sub_B2C434(playerPerf, method);
  }
  BattlePerformanceEnemy__updateView((BattlePerformanceEnemy_o *)playerPerf, 0LL);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall BattlePerformanceStatus_TouchEventDelegate__BeginInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall BattlePerformanceStatus_TouchEventDelegate__EndInvoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BattlePerformanceStatus_TouchEventDelegate__Invoke(
        BattlePerformanceStatus_TouchEventDelegate_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  BattlePerformanceStatus_TouchEventDelegate_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  BattlePerformanceStatus_TouchEventDelegate_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BattlePerformanceStatus_TouchEventDelegate_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (BattlePerformanceStatus_TouchEventDelegate_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  bool result; // w0
  struct BattlePerformanceStatus_o *_4__this; // x20
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *Object; // x0

  if ( (byte_4185089 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, method);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4185089 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
    sub_B2C434(Instance, v10);
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    waitTime = this->fields.waitTime;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B2C2F8(&this->fields.__2__current, v6);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattlePerformanceStatus__DoCreateCriticalEffect_d__55_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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