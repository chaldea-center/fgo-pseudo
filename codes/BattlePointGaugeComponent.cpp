void __fastcall BattlePointGaugeComponent___ctor(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.lastStepUpEffectIdInTween = -1LL;
  this->fields.lastUpPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattlePointGaugeComponent__GetBattlePointId(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battlePointId;
}


void __fastcall BattlePointGaugeComponent__Init(
        BattlePointGaugeComponent_o *this,
        int32_t inBattlePointId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v30; // x1
  System_Collections_IEnumerator_o *v31; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v36; // x8
  __int64 v37; // x9
  System_Collections_IEnumerator_c **v38; // x10
  __int64 v39; // x0
  UnityEngine_AnimationState_o *v40; // x0
  __int64 v41; // x1
  struct System_String_o *name; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x19
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x20
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  void *v56; // x0
  int v57; // w1
  __int64 v58; // x0
  __int64 v59; // x20
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDF680 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_AnimationState_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C21E38(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3254/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_4BDF680 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.method)(
    this,
    this->klass->vtable._5_UpdateProgressGauge.methodPtr,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.battlePointPhaseMaster,
    (int64_t)Master_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.battlePointId = inBattlePointId;
  v64 = inBattlePointId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v12, v13, v14);
  v16 = System_String__Format((System_String_o *)StringLiteral_3254/*"Battle/BattlePoint/Prefab/{0}"*/, v15, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__getAssetStorage(v16, 0LL);
  BattlePointGaugeComponent__StartClose(this, 1, v17);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_40;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.phaseAnimationComponent,
    (int64_t)Component_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_40:
    sub_1C22094(phase, v18);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0LL);
  v31 = Enumerator;
  if ( !Enumerator )
    sub_1C22094(0LL, v30);
  klass = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v31, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v36 = v31->klass;
    v37 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
    {
      v38 = (System_Collections_IEnumerator_c **)&v36->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 2;
        if ( !v37 )
          goto LABEL_24;
      }
      v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 1].method;
    }
    else
    {
LABEL_24:
      v39 = sub_1C73E18(v31, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v40 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v39)(
                                            v31,
                                            *(_QWORD *)(v39 + 8));
    if ( !v40 )
      sub_1C22094(0LL, v41);
    if ( v40->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C22354(v40);
      if ( v57 != 1 )
      {
        v58 = sub_1C21F74(v31, System_IDisposable_TypeInfo);
        v59 = v58;
        if ( v58 )
        {
          v60 = *(_QWORD *)v58;
          v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
          {
            v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
            {
              --v61;
              v62 += 4;
              if ( !v61 )
                goto LABEL_51;
            }
            v63 = v60 + 16LL * *v62 + 312;
          }
          else
          {
LABEL_51:
            v63 = sub_1C73E18(v58, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
        }
        sub_1D0C8C8();
      }
      v49 = *(_QWORD *)__cxa_begin_catch(v56);
      __cxa_end_catch();
      goto LABEL_30;
    }
    name = UnityEngine_AnimationState__get_name(v40, 0LL);
    this->fields.phaseAnimationName = name;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.phaseAnimationName,
      (int64_t)name,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  v49 = 0LL;
LABEL_30:
  v50 = sub_1C21F74(v31, System_IDisposable_TypeInfo);
  if ( v50 )
  {
    v51 = *(_QWORD *)v50;
    v52 = v50;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_35;
      }
      v55 = v51 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_35:
      v55 = sub_1C73E18(v50, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
  }
  if ( v49 )
    sub_1C2208C(v49);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__OnCompleteGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  const MethodInfo *v6; // x2
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_9;
  if ( !BattlePointPhaseMaster__TryGetEntityByValue(
          battlePointPhaseMaster,
          this->fields.battlePointId,
          currentPointValue,
          &entity,
          0LL) )
    return;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_9;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         this->fields.beforePointValue,
                                                         currentPointValue,
                                                         0LL);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) != 0 )
  {
    if ( entity )
    {
      BattlePointGaugeComponent__ShowStepUpEffect(this, entity->fields.effectId, v6);
      goto LABEL_7;
    }
LABEL_9:
    sub_1C22094(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void __fastcall BattlePointGaugeComponent__PlayPhaseAnimation(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_4BDF681 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF681 = 1;
  }
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(phaseAnimationComponent, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.phaseAnimationName, 0LL) )
  {
    v5 = this->fields.phaseAnimationComponent;
    if ( !v5 )
      goto LABEL_14;
    if ( UnityEngine_Animation__get_isPlaying(v5, 0LL) )
    {
      v5 = this->fields.phaseAnimationComponent;
      if ( !v5 )
        goto LABEL_14;
      UnityEngine_Animation__Stop(v5, 0LL);
    }
    v5 = this->fields.phaseAnimationComponent;
    if ( v5 )
    {
      UnityEngine_Animation__Play_70614020(v5, this->fields.phaseAnimationName, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(v5, v4);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF683 & 1) == 0 )
  {
    sub_1C21E38(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_4BDF683 = 1;
  }
  v7 = sub_1C22084(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)seName, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = effectNum;
  *(float *)(v7 + 44) = waitSecond;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__ShowAddedPointEffect(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  int v3; // w20
  __int64 battlePointPhaseMaster; // x0
  int v6; // w9
  int32_t phase; // w10
  bool v8; // vf
  int v9; // w9
  int v10; // w21
  struct BattlePointGaugeSetting_o *setting; // x9
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x9
  int32_t v13; // w21
  struct BattlePointGaugeSetting_o *v14; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v15; // x8
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  struct BattlePointGaugeSetting_o *v17; // x9
  struct BattlePointGaugeSetting_EffectSection_o *v18; // x9
  struct BattlePointGaugeSetting_o *v19; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v20; // x9
  int v21; // w21
  struct BattlePointGaugeSetting_o *v22; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v23; // x8
  Il2CppObject *pointEffectPrefab; // x22
  UnityEngine_Transform_o *pointEffectRootTransform; // x23
  Il2CppObject *v26; // x22
  Il2CppObject *ComponentInChildren_object__50333916; // x23
  Il2CppObject *Component_object; // x22
  struct BattlePointGaugeSetting_o *v29; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v30; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v33; // s8
  float v34; // s8
  float v35; // s0
  float v36; // s8
  float repeatInterval; // s9
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int32_t v39; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Object_array *v47; // x23
  __int64 v48; // x0
  int64_t v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  int64_t v75; // x24
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  int64_t v115; // x20
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x20
  System_Collections_Hashtable_o *v132; // x0
  const MethodInfo *v133; // x2
  struct BattlePointGaugeSetting_o *v134; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v135; // x8
  System_Collections_IEnumerator_o *v136; // x0
  __int64 v137; // x0
  float v138; // [xsp+4h] [xbp-12Ch] BYREF
  int v139; // [xsp+8h] [xbp-128h] BYREF
  int v140; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v141; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v142; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v143; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v144; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v147; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v148; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v149; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v150; // 0:x0.8

  v3 = currentPointValue;
  if ( (byte_4BDF682 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____77696528);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&System_MathF_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_15450/*"UpdateGaugeValue"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22681/*"oncompleteparams"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_10072/*"OnCompleteGaugeValue"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF682 = 1;
  }
  m_ParticleSystem = 0LL;
  entity = 0LL;
  v144 = 0LL;
  memset(&v143, 0, sizeof(v143));
  if ( this->fields.beforePointValue != v3 )
  {
    battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
    if ( !battlePointPhaseMaster )
      goto LABEL_112;
    battlePointPhaseMaster = BattlePointPhaseMaster__TryGetEntityByValue(
                               (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                               this->fields.battlePointId,
                               v3,
                               &entity,
                               0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
      return;
    *(_QWORD *)&currentPointValue = this->fields.beforeEntity;
    if ( !*(_QWORD *)&currentPointValue || !entity )
      goto LABEL_112;
    v6 = *(_DWORD *)(*(_QWORD *)&currentPointValue + 20LL);
    phase = entity->fields.phase;
    v8 = __OFSUB__(phase, v6);
    v9 = phase - v6;
    if ( (v9 < 0) ^ v8 | (v9 == 0) )
    {
      setting = this->fields.setting;
      if ( !setting )
        goto LABEL_112;
      effect = setting->fields.effect;
      if ( !effect )
        goto LABEL_112;
      battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                                 entity,
                                 v3 - this->fields.beforePointValue,
                                 effect->fields.effectNumPerPhase,
                                 0LL);
      v13 = battlePointPhaseMaster;
    }
    else
    {
      if ( v9 >= 2 )
      {
        v14 = this->fields.setting;
        if ( !v14 )
          goto LABEL_112;
        v15 = v14->fields.effect;
        if ( !v15 )
          goto LABEL_112;
        v10 = v15->fields.effectNumPerPhase * (v9 - 1);
      }
      else
      {
        v10 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_112;
      v17 = this->fields.setting;
      if ( !v17 )
        goto LABEL_112;
      v18 = v17->fields.effect;
      if ( !v18 )
        goto LABEL_112;
      battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                                 *(BattlePointPhaseEntity_o **)&currentPointValue,
                                 beforeNextEntity->fields.value - this->fields.beforePointValue,
                                 v18->fields.effectNumPerPhase,
                                 0LL);
      *(_QWORD *)&currentPointValue = entity;
      if ( !entity )
        goto LABEL_112;
      v19 = this->fields.setting;
      if ( !v19 )
        goto LABEL_112;
      v20 = v19->fields.effect;
      if ( !v20 || !this->fields.battlePointPhaseMaster )
        goto LABEL_112;
      v21 = battlePointPhaseMaster + v10;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 this->fields.battlePointPhaseMaster,
                                 entity,
                                 v3 - entity->fields.value,
                                 v20->fields.effectNumPerPhase,
                                 0LL);
      v13 = v21 + battlePointPhaseMaster;
    }
    v22 = this->fields.setting;
    if ( !v22 )
      goto LABEL_112;
    v23 = v22->fields.effect;
    if ( !v23 )
      goto LABEL_112;
    pointEffectPrefab = (Il2CppObject *)v23->fields.pointEffectPrefab;
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__Instantiate_object__50551272(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v26 )
        goto LABEL_112;
      ComponentInChildren_object__50333916 = UnityEngine_GameObject__GetComponentInChildren_object__50333916(
                                               (UnityEngine_GameObject_o *)v26,
                                               1,
                                               (const MethodInfo_30008DC *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____77696528);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v26,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__50333916, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
          if ( !ComponentInChildren_object__50333916 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__50333916,
                               0LL).fields.m_ParticleSystem;
          battlePointPhaseMaster = (__int64)UnityEngine_ParticleSystem__get_emission(
                                              (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__50333916,
                                              0LL).fields.m_ParticleSystem;
          v144 = battlePointPhaseMaster;
          v29 = this->fields.setting;
          if ( !v29 )
            goto LABEL_112;
          v30 = v29->fields.effect;
          if ( !v30 )
            goto LABEL_112;
          pointEffectSpeedUpBorderEffectNum = v30->fields.pointEffectSpeedUpBorderEffectNum;
          pointEffectSpeedUpCoefficient = v30->fields.pointEffectSpeedUpCoefficient;
          if ( !System_MathF_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
          v33 = pointEffectSpeedUpCoefficient * (float)(v13 - pointEffectSpeedUpBorderEffectNum);
          if ( !byte_4BDF6D4 )
          {
            sub_1C21E38(&System_Math_TypeInfo);
            byte_4BDF6D4 = 1;
          }
          v34 = v33 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v35 = System_Math__Max_63934660(1.0, v34, 0LL);
          v147.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v36 = v35;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v147, v35, 0LL);
          v148.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v144;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v148, 0LL) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v149.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v144;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v142, v149, 0, 0LL);
            v143 = v142;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v143, 0LL);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v143, v13, 0LL);
            v150.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v144;
            v141 = v143;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v150, 0, &v141, 0LL);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0LL);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v39 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v39;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          battlePointPhaseMaster = sub_1C21EE0(object___TypeInfo, 12LL);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v47 = (System_Object_array *)battlePointPhaseMaster;
          v48 = StringLiteral_19990/*"from"*/;
          if ( StringLiteral_19990/*"from"*/ )
          {
            v48 = sub_1C21F74(StringLiteral_19990/*"from"*/, v47->obj.klass->_1.element_class);
            if ( !v48 )
              goto LABEL_114;
            v49 = StringLiteral_19990/*"from"*/;
          }
          else
          {
            v49 = 0LL;
          }
          if ( !v47->max_length )
            goto LABEL_113;
          v47->m_Items[0] = (Il2CppObject *)v49;
          sub_1C21DDC((PartyOrganizationUtility_o *)v47->m_Items, v49, v41, v42, v43, v44, v45, v46);
          LODWORD(v142.fields.m_Time) = this->fields.beforePointValue;
          v48 = j_il2cpp_value_box_0(int_TypeInfo, &v142, v50, v51, v52);
          v59 = v48;
          if ( !v48 || (v48 = sub_1C21F74(v48, v47->obj.klass->_1.element_class)) != 0 )
          {
            if ( v47->max_length <= 1 )
              goto LABEL_113;
            v47->m_Items[1] = (Il2CppObject *)v59;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[1], v59, v53, v54, v55, v56, v57, v58);
            v48 = StringLiteral_24401/*"to"*/;
            if ( StringLiteral_24401/*"to"*/ )
            {
              v48 = sub_1C21F74(StringLiteral_24401/*"to"*/, v47->obj.klass->_1.element_class);
              if ( !v48 )
                goto LABEL_114;
              v49 = StringLiteral_24401/*"to"*/;
            }
            else
            {
              v49 = 0LL;
            }
            if ( v47->max_length <= 2 )
              goto LABEL_113;
            v47->m_Items[2] = (Il2CppObject *)v49;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[2], v49, v60, v61, v62, v63, v64, v65);
            v140 = v3;
            v48 = j_il2cpp_value_box_0(int_TypeInfo, &v140, v66, v67, v68);
            v75 = v48;
            if ( !v48 || (v48 = sub_1C21F74(v48, v47->obj.klass->_1.element_class)) != 0 )
            {
              if ( v47->max_length <= 3 )
                goto LABEL_113;
              v47->m_Items[3] = (Il2CppObject *)v75;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[3], v75, v69, v70, v71, v72, v73, v74);
              v48 = StringLiteral_22688/*"onupdate"*/;
              if ( StringLiteral_22688/*"onupdate"*/ )
              {
                v48 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v47->obj.klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_22688/*"onupdate"*/;
              }
              else
              {
                v49 = 0LL;
              }
              if ( v47->max_length <= 4 )
                goto LABEL_113;
              v47->m_Items[4] = (Il2CppObject *)v49;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[4], v49, v76, v77, v78, v79, v80, v81);
              v48 = StringLiteral_15450/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15450/*"UpdateGaugeValue"*/ )
              {
                v48 = sub_1C21F74(StringLiteral_15450/*"UpdateGaugeValue"*/, v47->obj.klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_15450/*"UpdateGaugeValue"*/;
              }
              else
              {
                v49 = 0LL;
              }
              if ( v47->max_length <= 5 )
                goto LABEL_113;
              v47->m_Items[5] = (Il2CppObject *)v49;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[5], v49, v82, v83, v84, v85, v86, v87);
              v48 = StringLiteral_22680/*"oncomplete"*/;
              if ( StringLiteral_22680/*"oncomplete"*/ )
              {
                v48 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v47->obj.klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_22680/*"oncomplete"*/;
              }
              else
              {
                v49 = 0LL;
              }
              if ( v47->max_length <= 6 )
                goto LABEL_113;
              v47->m_Items[6] = (Il2CppObject *)v49;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[6], v49, v88, v89, v90, v91, v92, v93);
              v48 = StringLiteral_10072/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_10072/*"OnCompleteGaugeValue"*/ )
              {
                v48 = sub_1C21F74(StringLiteral_10072/*"OnCompleteGaugeValue"*/, v47->obj.klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_10072/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v49 = 0LL;
              }
              if ( v47->max_length <= 7 )
                goto LABEL_113;
              v47->m_Items[7] = (Il2CppObject *)v49;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[7], v49, v94, v95, v96, v97, v98, v99);
              v48 = StringLiteral_22681/*"oncompleteparams"*/;
              if ( StringLiteral_22681/*"oncompleteparams"*/ )
              {
                v48 = sub_1C21F74(StringLiteral_22681/*"oncompleteparams"*/, v47->obj.klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_22681/*"oncompleteparams"*/;
              }
              else
              {
                v49 = 0LL;
              }
              if ( v47->max_length <= 8 )
                goto LABEL_113;
              v47->m_Items[8] = (Il2CppObject *)v49;
              sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[8], v49, v100, v101, v102, v103, v104, v105);
              v139 = v3;
              v48 = j_il2cpp_value_box_0(int_TypeInfo, &v139, v106, v107, v108);
              v115 = v48;
              if ( !v48 || (v48 = sub_1C21F74(v48, v47->obj.klass->_1.element_class)) != 0 )
              {
                if ( v47->max_length <= 9 )
                  goto LABEL_113;
                v47->m_Items[9] = (Il2CppObject *)v115;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[9], v115, v109, v110, v111, v112, v113, v114);
                v48 = StringLiteral_24360/*"time"*/;
                if ( StringLiteral_24360/*"time"*/ )
                {
                  v48 = sub_1C21F74(StringLiteral_24360/*"time"*/, v47->obj.klass->_1.element_class);
                  if ( !v48 )
                    goto LABEL_114;
                  v49 = StringLiteral_24360/*"time"*/;
                }
                else
                {
                  v49 = 0LL;
                }
                if ( v47->max_length <= 0xA )
                  goto LABEL_113;
                v47->m_Items[10] = (Il2CppObject *)v49;
                sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[10], v49, v116, v117, v118, v119, v120, v121);
                v138 = (float)(repeatInterval * (float)v13) / v36;
                v48 = j_il2cpp_value_box_0(float_TypeInfo, &v138, v122, v123, v124);
                v131 = v48;
                if ( !v48 || (v48 = sub_1C21F74(v48, v47->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v47->max_length > 0xB )
                  {
                    v47->m_Items[11] = (Il2CppObject *)v131;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)&v47->m_Items[11],
                      v131,
                      v125,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v132 = iTween__Hash(v47, 0LL);
                    iTween__ValueTo(gameObject, v132, 0LL);
                    v134 = this->fields.setting;
                    if ( v134 )
                    {
                      v135 = v134->fields.effect;
                      if ( v135 )
                      {
                        v136 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                 v135->fields.effectSeName,
                                 v13,
                                 repeatInterval / v36,
                                 v133);
                        UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v136,
                          0LL);
                        return;
                      }
                    }
LABEL_112:
                    sub_1C22094(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1C2209C(v48, v49);
                }
              }
            }
          }
LABEL_114:
          v137 = sub_1C220B8(v48);
          sub_1C21F60(v137, 0LL);
        }
      }
    }
  }
}


void __fastcall BattlePointGaugeComponent__ShowStepUpEffect(
        BattlePointGaugeComponent_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v17; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF684 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_1C21E38(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_4BDF684 = 1;
  }
  effectPrefab = 0LL;
  v5 = sub_1C22084(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v14) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v5 + 24);
    v15 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__Instantiate_object__50551272(
            v15,
            stepUpEffectRootTransform,
            (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v17 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v17,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v19 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0LL);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v19;
          sub_1C21DDC((PartyOrganizationUtility_o *)&Component_object[12], (int64_t)v19, v20, v21, v22, v23, v24, v25);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0LL);
          return;
        }
LABEL_17:
        sub_1C22094(setting, v7);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__StartClose(
        BattlePointGaugeComponent_o *this,
        bool immediately,
        const MethodInfo *method)
{
  UIPanel_o *barMaskPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s1.4,4:s2.4,8:s3.4

  barMaskPanel = this->fields.barMaskPanel;
  if ( !barMaskPanel )
    goto LABEL_11;
  UIPanel__set_depth(barMaskPanel, 2, 0LL);
  barMaskPanel = this->fields.battlePointPanel;
  if ( !barMaskPanel )
    goto LABEL_11;
  UIPanel__set_depth(barMaskPanel, 3, 0LL);
  if ( immediately )
  {
    barMaskPanel = (UIPanel_o *)this->fields.bar;
    if ( barMaskPanel )
    {
      ((void (__fastcall *)(UIPanel_o *, Il2CppMethodPointer, float))barMaskPanel->klass->vtable._8_set_alpha.method)(
        barMaskPanel,
        barMaskPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        0.0);
      barMaskPanel = (UIPanel_o *)this->fields.bar;
      if ( barMaskPanel )
      {
        barMaskPanel = (UIPanel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)barMaskPanel, 0LL);
        if ( barMaskPanel )
        {
          v8.fields.x = 0.0;
          v8.fields.z = 0.0;
          v8.fields.y = -42.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)barMaskPanel, v8, 0LL);
          goto LABEL_8;
        }
      }
    }
LABEL_11:
    sub_1C22094(barMaskPanel, immediately);
  }
LABEL_8:
  barMaskPanel = (UIPanel_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0LL);
  TweenAlpha__Begin(gameObject, 0.4, 0.0, 0LL);
  barMaskPanel = (UIPanel_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_11;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0LL);
  v9.fields.x = 0.0;
  v9.fields.z = 0.0;
  v9.fields.y = -42.0;
  TweenPosition__Begin(v7, 0.3, v9, 0LL);
}


void __fastcall BattlePointGaugeComponent__StartOpen(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UIPanel_o *barMaskPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Vector3_o v6; // 0:s1.4,4:s2.4,8:s3.4

  barMaskPanel = this->fields.barMaskPanel;
  if ( !barMaskPanel
    || (UIPanel__set_depth(barMaskPanel, 6, 0LL), (barMaskPanel = this->fields.battlePointPanel) == 0LL)
    || (UIPanel__set_depth(barMaskPanel, 7, 0LL), (barMaskPanel = (UIPanel_o *)this->fields.bar) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0LL),
        TweenAlpha__Begin(gameObject, 0.4, 1.0, 0LL),
        (barMaskPanel = (UIPanel_o *)this->fields.bar) == 0LL) )
  {
    sub_1C22094(barMaskPanel, method);
  }
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0LL);
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  TweenPosition__Begin(v5, 0.3, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__UpdateBattlePoint(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  const MethodInfo *v7; // x2

  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_8;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         this->fields.beforePointValue,
                                                         &this->fields.beforeEntity,
                                                         0LL);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    return;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity || (battlePointPhaseMaster = this->fields.battlePointPhaseMaster) == 0LL )
LABEL_8:
    sub_1C22094(battlePointPhaseMaster, *(_QWORD *)&value);
  if ( BattlePointPhaseMaster__TryGetEntity(
         battlePointPhaseMaster,
         &this->fields.beforeNextEntity,
         this->fields.battlePointId,
         beforeEntity->fields.phase + 1,
         0LL) )
  {
    BattlePointGaugeComponent__ShowAddedPointEffect(this, value, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__UpdateBattlePointImmediately(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  int32_t v5; // w20
  const MethodInfo *v6; // x2
  UISprite_o *phase; // x21
  const MethodInfo *v8; // x2
  int32_t firstPhaseInTween; // w8
  int32_t v10; // w9
  int32_t effectId; // w8
  UISprite_o *step; // x21
  BattlePointGaugeComponent_c *klass; // x8
  float v14; // s0
  int32_t v15; // w20
  BattlePointPhaseEntity_o *v16; // [xsp+0h] [xbp-30h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v16 = 0LL;
  entity = 0LL;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  v5 = currentPointValue;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         currentPointValue,
                                                         &entity,
                                                         0LL);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    return;
  this->fields.beforePointValue = v5;
  if ( !entity )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  phase = this->fields.phase;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                                         (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                         entity->fields.phase,
                                                         v6);
  if ( !phase )
    goto LABEL_29;
  UISprite__set_spriteName(phase, (System_String_o *)battlePointPhaseMaster, 0LL);
  firstPhaseInTween = this->fields.firstPhaseInTween;
  if ( firstPhaseInTween != -1 )
  {
    if ( !entity )
      goto LABEL_29;
    v10 = entity->fields.phase;
    if ( firstPhaseInTween != v10 && this->fields.lastUpPhaseInTween != v10 )
      BattlePointGaugeComponent__PlayPhaseAnimation(this, *(const MethodInfo **)&currentPointValue);
  }
  *(_QWORD *)&this->fields.firstPhaseInTween = -1LL;
  *(_QWORD *)&currentPointValue = entity;
  if ( !entity )
LABEL_29:
    sub_1C22094(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  effectId = entity->fields.effectId;
  if ( this->fields.lastStepUpEffectIdInTween != effectId )
  {
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
    if ( !battlePointPhaseMaster )
      goto LABEL_29;
    step = this->fields.step;
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                           (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                           effectId,
                                                           v8);
    if ( !step )
      goto LABEL_29;
    UISprite__set_spriteName(step, (System_String_o *)battlePointPhaseMaster, 0LL);
    *(_QWORD *)&currentPointValue = entity;
  }
  klass = this->klass;
  this->fields.lastStepUpEffectIdInTween = -1;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, void *))klass->vtable._5_UpdateProgressGauge.method)(
                                                         this,
                                                         *(_QWORD *)&currentPointValue,
                                                         klass[1]._1.image);
  if ( !entity )
    goto LABEL_29;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntity(
                                                         battlePointPhaseMaster,
                                                         &v16,
                                                         this->fields.battlePointId,
                                                         entity->fields.phase + 1,
                                                         0LL);
  if ( !entity )
    goto LABEL_29;
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( battlePointPhaseMaster )
    {
      v15 = entity->fields.phase;
      if ( v15 != BattlePointPhaseMaster__GetMaxPhase(battlePointPhaseMaster, this->fields.battlePointId, 0LL) )
        return;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
      if ( battlePointPhaseMaster )
      {
        v14 = 1.0;
        goto LABEL_27;
      }
    }
    goto LABEL_29;
  }
  if ( !v16 )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  v14 = (float)(v5 - entity->fields.value) / (float)(v16->fields.value - entity->fields.value);
LABEL_27:
  UIProgressBar__set_value((UIProgressBar_o *)battlePointPhaseMaster, v14, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  struct BattlePointPhaseEntity_o **p_beforeEntity; // x22
  int32_t v10; // w20
  int32_t v11; // w23
  BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  BattlePointGaugeComponent_o *v13; // x19
  float v14; // s0
  const MethodInfo *v15; // x2
  struct BattlePointPhaseEntity_o *v16; // x8
  UISprite_o *phase; // x24
  const MethodInfo *v18; // x1
  BattlePointGaugeComponent_c *klass; // x9
  const MethodInfo *v20; // x2
  struct BattlePointPhaseEntity_o *v21; // x8
  struct BattlePointPhaseEntity_o *v22; // x8
  int32_t v23; // w20

  p_beforeEntity = &this->fields.beforeEntity;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_25;
  v10 = value;
  v11 = beforeEntity->fields.value;
  p_beforeNextEntity = &this->fields.beforeNextEntity;
  *(_QWORD *)&value = this->fields.beforeNextEntity;
  v13 = this;
  if ( !*(_QWORD *)&value )
    goto LABEL_25;
  v14 = (float)(v10 - v11) / (float)(*(_DWORD *)(*(_QWORD *)&value + 24LL) - v11);
  if ( v14 <= 1.0 )
    goto LABEL_18;
  this->fields.beforeEntity = *(struct BattlePointPhaseEntity_o **)&value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.beforeEntity,
    *(int64_t *)&value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = v13->fields.beforeEntity;
  if ( !v16 )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)v13->fields.setting;
  if ( !this )
    goto LABEL_25;
  phase = v13->fields.phase;
  this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                          (BattlePointGaugeSetting_o *)this,
                                          v16->fields.phase,
                                          v15);
  if ( !phase )
    goto LABEL_25;
  UISprite__set_spriteName(phase, (System_String_o *)this, 0LL);
  BattlePointGaugeComponent__PlayPhaseAnimation(v13, v18);
  *(_QWORD *)&value = v13->fields.beforeEntity;
  if ( !*(_QWORD *)&value )
    goto LABEL_25;
  klass = v13->klass;
  v13->fields.lastUpPhaseInTween = *(_DWORD *)(*(_QWORD *)&value + 20LL);
  ((void (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._5_UpdateProgressGauge.method)(v13);
  this = (BattlePointGaugeComponent_o *)v13->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v13->fields.battlePointId,
                                          v11,
                                          v10,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    BattlePointGaugeComponent__ShowStepUpEffect(v13, (*p_beforeNextEntity)->fields.effectId, v20);
  }
  v21 = v13->fields.beforeEntity;
  if ( !v21
    || (this = (BattlePointGaugeComponent_o *)v13->fields.battlePointPhaseMaster) == 0LL
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                p_beforeNextEntity,
                                                v13->fields.battlePointId,
                                                v21->fields.phase + 1,
                                                0LL),
        (v22 = *p_beforeEntity) == 0LL) )
  {
LABEL_25:
    sub_1C22094(this, *(_QWORD *)&value);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    v14 = (float)(v10 - v22->fields.value) / (float)((*p_beforeNextEntity)->fields.value - v22->fields.value);
LABEL_18:
    this = (BattlePointGaugeComponent_o *)v13->fields.gaugeFrontProgressBar;
    if ( this )
    {
LABEL_19:
      UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0LL);
      return;
    }
    goto LABEL_25;
  }
  this = (BattlePointGaugeComponent_o *)v13->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  v23 = v22->fields.phase;
  if ( v23 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v13->fields.battlePointId, 0LL) )
  {
    this = (BattlePointGaugeComponent_o *)v13->fields.gaugeFrontProgressBar;
    if ( this )
    {
      v14 = 1.0;
      goto LABEL_19;
    }
    goto LABEL_25;
  }
}


void __fastcall BattlePointGaugeComponent__UpdateProgressGauge(
        BattlePointGaugeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePointGaugeComponent__ValidateSerializedField(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0

  setting = this->fields.setting;
  if ( !setting )
    sub_1C22094(0LL, method);
  BattlePointGaugeSetting__ValidateSerializedField(setting, method);
}


void __fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__31___ctor(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__MoveNext(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  System_String_o *seName; // x0
  int count_5__2; // w8
  float elapsed_5__3; // s8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  float deltaTime; // s0
  float waitSecond; // s1
  float v15; // s0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4BDF686 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_4BDF686 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    waitSecond = this->fields.waitSecond;
    v15 = elapsed_5__3 + deltaTime;
    this->fields._elapsed_5__3 = v15;
    if ( v15 < waitSecond )
    {
LABEL_15:
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    count_5__2 = this->fields._count_5__2;
    if ( waitSecond <= v15 )
    {
      do
      {
        v15 = v15 - waitSecond;
        --count_5__2;
      }
      while ( waitSecond <= v15 );
      this->fields._elapsed_5__3 = v15;
      this->fields._count_5__2 = count_5__2;
    }
  }
  else
  {
    if ( _1__state )
      return 0;
    seName = this->fields.seName;
    this->fields.__1__state = -1;
    if ( System_String__IsNullOrEmpty(seName, 0LL) )
      return 0;
    count_5__2 = this->fields.effectNum;
    *(_QWORD *)&this->fields._count_5__2 = (unsigned int)count_5__2;
  }
  if ( count_5__2 > 0 )
  {
    v16 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C21E50(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v16, v16[4]);
    OverwriteAssetSoundName__PlaySeContinue(v17, this->fields.seName, 0, 0LL);
    goto LABEL_15;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_Collections_IEnumerator_Reset(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_Collections_IEnumerator_get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_IDisposable_Dispose(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePointGaugeComponent___c__DisplayClass32_0___ctor(
        BattlePointGaugeComponent___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePointGaugeComponent___c__DisplayClass32_0___ShowStepUpEffect_b__0(
        BattlePointGaugeComponent___c__DisplayClass32_0_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattlePointGaugeComponent_o *_4__this; // x8
  UISprite_o *step; // x20

  if ( (byte_4BDF685 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12967/*"SetStepSprite"*/);
    byte_4BDF685 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12967/*"SetStepSprite"*/,
                                           0LL);
  if ( ((unsigned __int8)setting & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (setting = _4__this->fields.setting) == 0LL
      || (step = _4__this->fields.step,
          setting = (BattlePointGaugeSetting_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                   setting,
                                                   this->fields.effectId,
                                                   v7),
          !step) )
    {
      sub_1C22094(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0LL);
  }
}