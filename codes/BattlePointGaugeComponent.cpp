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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__Init(
        BattlePointGaugeComponent_o *this,
        int32_t inBattlePointId,
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
  Il2CppObject *Master_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v39; // x1
  System_Collections_IEnumerator_o *v40; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  System_Collections_IEnumerator_c **v47; // x10
  __int64 v48; // x0
  UnityEngine_AnimationState_o *v49; // x0
  __int64 v50; // x1
  struct System_String_o *name; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x19
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x20
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  void *v65; // x0
  int v66; // w1
  __int64 v67; // x0
  __int64 v68; // x20
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  int32_t v73; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C00919 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&inBattlePointId);
    sub_1C2E12C(&AssetManager_TypeInfo, v5);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Animation___, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_BattlePointPhaseMaster___, v7);
    sub_1C2E12C(&DataManager_TypeInfo, v8);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v9);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C2E12C(&int_TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_3241/*"Battle/BattlePoint/Prefab/{0}"*/, v13);
    byte_4C00919 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.method)(
    this,
    this->klass->vtable._5_UpdateProgressGauge.methodPtr,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.battlePointPhaseMaster,
    (int64_t)Master_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.battlePointId = inBattlePointId;
  v73 = inBattlePointId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v21, v22, v23);
  v25 = System_String__Format((System_String_o *)StringLiteral_3241/*"Battle/BattlePoint/Prefab/{0}"*/, v24, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__getAssetStorage(v25, 0LL);
  BattlePointGaugeComponent__StartClose(this, 1, v26);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_40;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.phaseAnimationComponent,
    (int64_t)Component_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_40:
    sub_1C2E388(phase, v27);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0LL);
  v40 = Enumerator;
  if ( !Enumerator )
    sub_1C2E388(0LL, v39);
  klass = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v40, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v45 = v40->klass;
    v46 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
    {
      v47 = (System_Collections_IEnumerator_c **)&v45->_1.interfaceOffsets->offset;
      while ( *(v47 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v46;
        v47 += 2;
        if ( !v46 )
          goto LABEL_24;
      }
      v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1].method;
    }
    else
    {
LABEL_24:
      v48 = sub_1C8010C(v40, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v49 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(
                                            v40,
                                            *(_QWORD *)(v48 + 8));
    if ( !v49 )
      sub_1C2E388(0LL, v50);
    if ( v49->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C2E648(v49);
      if ( v66 != 1 )
      {
        v67 = sub_1C2E268(v40, System_IDisposable_TypeInfo);
        v68 = v67;
        if ( v67 )
        {
          v69 = *(_QWORD *)v67;
          v70 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
          {
            v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
            {
              --v70;
              v71 += 4;
              if ( !v70 )
                goto LABEL_51;
            }
            v72 = v69 + 16LL * *v71 + 312;
          }
          else
          {
LABEL_51:
            v72 = sub_1C8010C(v67, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
        }
        sub_1D18BBC();
      }
      v58 = *(_QWORD *)__cxa_begin_catch(v65);
      __cxa_end_catch();
      goto LABEL_30;
    }
    name = UnityEngine_AnimationState__get_name(v49, 0LL);
    this->fields.phaseAnimationName = name;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.phaseAnimationName,
      (int64_t)name,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  v58 = 0LL;
LABEL_30:
  v59 = sub_1C2E268(v40, System_IDisposable_TypeInfo);
  if ( v59 )
  {
    v60 = *(_QWORD *)v59;
    v61 = v59;
    v62 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_35;
      }
      v64 = v60 + 16LL * *v63 + 312;
    }
    else
    {
LABEL_35:
      v64 = sub_1C8010C(v59, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
  }
  if ( v58 )
    sub_1C2E380(v58);
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
    sub_1C2E388(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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

  if ( (byte_4C0091A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C0091A = 1;
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
      UnityEngine_Animation__Play_70734128(v5, this->fields.phaseAnimationName, 0LL);
      return;
    }
LABEL_14:
    sub_1C2E388(v5, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C0091C & 1) == 0 )
  {
    sub_1C2E12C(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo, *(_QWORD *)&effectNum);
    byte_4C0091C = 1;
  }
  v7 = sub_1C2E378(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)seName, v8, v9, v10, v11, v12, v13);
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
  __int64 battlePointPhaseMaster; // x0
  int v22; // w9
  int32_t phase; // w10
  bool v24; // vf
  int v25; // w9
  int v26; // w21
  struct BattlePointGaugeSetting_o *setting; // x9
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x9
  int32_t v29; // w21
  struct BattlePointGaugeSetting_o *v30; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v31; // x8
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  struct BattlePointGaugeSetting_o *v33; // x9
  struct BattlePointGaugeSetting_EffectSection_o *v34; // x9
  struct BattlePointGaugeSetting_o *v35; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v36; // x9
  int v37; // w21
  struct BattlePointGaugeSetting_o *v38; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v39; // x8
  Il2CppObject *pointEffectPrefab; // x22
  UnityEngine_Transform_o *pointEffectRootTransform; // x23
  Il2CppObject *v42; // x22
  Il2CppObject *ComponentInChildren_object__50474676; // x23
  Il2CppObject *Component_object; // x22
  struct BattlePointGaugeSetting_o *v45; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v46; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v49; // s8
  float v50; // s8
  float v51; // s0
  float v52; // s8
  float repeatInterval; // s9
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int32_t v55; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Object_array *v63; // x23
  __int64 v64; // x0
  int64_t v65; // x1
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
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x24
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
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
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  int64_t v147; // x20
  System_Collections_Hashtable_o *v148; // x0
  const MethodInfo *v149; // x2
  struct BattlePointGaugeSetting_o *v150; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v151; // x8
  System_Collections_IEnumerator_o *v152; // x0
  __int64 v153; // x0
  float v154; // [xsp+4h] [xbp-12Ch] BYREF
  int v155; // [xsp+8h] [xbp-128h] BYREF
  int v156; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v157; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v158; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v159; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v160; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v163; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v164; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v165; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v166; // 0:x0.8

  v3 = currentPointValue;
  if ( (byte_4C0091B & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____77827960,
      *(_QWORD *)&currentPointValue);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1C2E12C(&int_TypeInfo, v6);
    sub_1C2E12C(&System_MathF_TypeInfo, v7);
    sub_1C2E12C(&object___TypeInfo, v8);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&float_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_20005/*"from"*/, v12);
    sub_1C2E12C(&StringLiteral_15462/*"UpdateGaugeValue"*/, v13);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v14);
    sub_1C2E12C(&StringLiteral_22693/*"oncompleteparams"*/, v15);
    sub_1C2E12C(&StringLiteral_22700/*"onupdate"*/, v16);
    sub_1C2E12C(&StringLiteral_10066/*"OnCompleteGaugeValue"*/, v17);
    sub_1C2E12C(&StringLiteral_24425/*"to"*/, v18);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v19);
    sub_1C2E12C(&iTween_TypeInfo, v20);
    byte_4C0091B = 1;
  }
  m_ParticleSystem = 0LL;
  entity = 0LL;
  v160 = 0LL;
  memset(&v159, 0, sizeof(v159));
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
    v22 = *(_DWORD *)(*(_QWORD *)&currentPointValue + 20LL);
    phase = entity->fields.phase;
    v24 = __OFSUB__(phase, v22);
    v25 = phase - v22;
    if ( (v25 < 0) ^ v24 | (v25 == 0) )
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
      v29 = battlePointPhaseMaster;
    }
    else
    {
      if ( v25 >= 2 )
      {
        v30 = this->fields.setting;
        if ( !v30 )
          goto LABEL_112;
        v31 = v30->fields.effect;
        if ( !v31 )
          goto LABEL_112;
        v26 = v31->fields.effectNumPerPhase * (v25 - 1);
      }
      else
      {
        v26 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_112;
      v33 = this->fields.setting;
      if ( !v33 )
        goto LABEL_112;
      v34 = v33->fields.effect;
      if ( !v34 )
        goto LABEL_112;
      battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                                 *(BattlePointPhaseEntity_o **)&currentPointValue,
                                 beforeNextEntity->fields.value - this->fields.beforePointValue,
                                 v34->fields.effectNumPerPhase,
                                 0LL);
      *(_QWORD *)&currentPointValue = entity;
      if ( !entity )
        goto LABEL_112;
      v35 = this->fields.setting;
      if ( !v35 )
        goto LABEL_112;
      v36 = v35->fields.effect;
      if ( !v36 || !this->fields.battlePointPhaseMaster )
        goto LABEL_112;
      v37 = battlePointPhaseMaster + v26;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 this->fields.battlePointPhaseMaster,
                                 entity,
                                 v3 - entity->fields.value,
                                 v36->fields.effectNumPerPhase,
                                 0LL);
      v29 = v37 + battlePointPhaseMaster;
    }
    v38 = this->fields.setting;
    if ( !v38 )
      goto LABEL_112;
    v39 = v38->fields.effect;
    if ( !v39 )
      goto LABEL_112;
    pointEffectPrefab = (Il2CppObject *)v39->fields.pointEffectPrefab;
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v42 = UnityEngine_Object__Instantiate_object__50692032(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
    battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0LL, 0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v42 )
        goto LABEL_112;
      ComponentInChildren_object__50474676 = UnityEngine_GameObject__GetComponentInChildren_object__50474676(
                                               (UnityEngine_GameObject_o *)v42,
                                               1,
                                               (const MethodInfo_3022EB4 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____77827960);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v42,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__50474676, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
          if ( !ComponentInChildren_object__50474676 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__50474676,
                               0LL).fields.m_ParticleSystem;
          battlePointPhaseMaster = (__int64)UnityEngine_ParticleSystem__get_emission(
                                              (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__50474676,
                                              0LL).fields.m_ParticleSystem;
          v160 = battlePointPhaseMaster;
          v45 = this->fields.setting;
          if ( !v45 )
            goto LABEL_112;
          v46 = v45->fields.effect;
          if ( !v46 )
            goto LABEL_112;
          pointEffectSpeedUpBorderEffectNum = v46->fields.pointEffectSpeedUpBorderEffectNum;
          pointEffectSpeedUpCoefficient = v46->fields.pointEffectSpeedUpCoefficient;
          if ( !System_MathF_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
          v49 = pointEffectSpeedUpCoefficient * (float)(v29 - pointEffectSpeedUpBorderEffectNum);
          if ( !byte_4C009D2 )
          {
            sub_1C2E12C(&System_Math_TypeInfo, *(_QWORD *)&currentPointValue);
            byte_4C009D2 = 1;
          }
          v50 = v49 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v51 = System_Math__Max_64054768(1.0, v50, 0LL);
          v163.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v52 = v51;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v163, v51, 0LL);
          v164.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v160;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v164, 0LL) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v165.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v160;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v158, v165, 0, 0LL);
            v159 = v158;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v159, 0LL);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v159, v29, 0LL);
            v166.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v160;
            v157 = v159;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v166, 0, &v157, 0LL);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0LL);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v55 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v55;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          battlePointPhaseMaster = sub_1C2E1D4(object___TypeInfo, 12LL);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v63 = (System_Object_array *)battlePointPhaseMaster;
          v64 = StringLiteral_20005/*"from"*/;
          if ( StringLiteral_20005/*"from"*/ )
          {
            v64 = sub_1C2E268(StringLiteral_20005/*"from"*/, v63->obj.klass->_1.element_class);
            if ( !v64 )
              goto LABEL_114;
            v65 = StringLiteral_20005/*"from"*/;
          }
          else
          {
            v65 = 0LL;
          }
          if ( !v63->max_length )
            goto LABEL_113;
          v63->m_Items[0] = (Il2CppObject *)v65;
          sub_1C2E0D0((PartyOrganizationUtility_o *)v63->m_Items, v65, v57, v58, v59, v60, v61, v62);
          LODWORD(v158.fields.m_Time) = this->fields.beforePointValue;
          v64 = j_il2cpp_value_box_0(int_TypeInfo, &v158, v66, v67, v68);
          v75 = v64;
          if ( !v64 || (v64 = sub_1C2E268(v64, v63->obj.klass->_1.element_class)) != 0 )
          {
            if ( v63->max_length <= 1 )
              goto LABEL_113;
            v63->m_Items[1] = (Il2CppObject *)v75;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[1], v75, v69, v70, v71, v72, v73, v74);
            v64 = StringLiteral_24425/*"to"*/;
            if ( StringLiteral_24425/*"to"*/ )
            {
              v64 = sub_1C2E268(StringLiteral_24425/*"to"*/, v63->obj.klass->_1.element_class);
              if ( !v64 )
                goto LABEL_114;
              v65 = StringLiteral_24425/*"to"*/;
            }
            else
            {
              v65 = 0LL;
            }
            if ( v63->max_length <= 2 )
              goto LABEL_113;
            v63->m_Items[2] = (Il2CppObject *)v65;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[2], v65, v76, v77, v78, v79, v80, v81);
            v156 = v3;
            v64 = j_il2cpp_value_box_0(int_TypeInfo, &v156, v82, v83, v84);
            v91 = v64;
            if ( !v64 || (v64 = sub_1C2E268(v64, v63->obj.klass->_1.element_class)) != 0 )
            {
              if ( v63->max_length <= 3 )
                goto LABEL_113;
              v63->m_Items[3] = (Il2CppObject *)v91;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[3], v91, v85, v86, v87, v88, v89, v90);
              v64 = StringLiteral_22700/*"onupdate"*/;
              if ( StringLiteral_22700/*"onupdate"*/ )
              {
                v64 = sub_1C2E268(StringLiteral_22700/*"onupdate"*/, v63->obj.klass->_1.element_class);
                if ( !v64 )
                  goto LABEL_114;
                v65 = StringLiteral_22700/*"onupdate"*/;
              }
              else
              {
                v65 = 0LL;
              }
              if ( v63->max_length <= 4 )
                goto LABEL_113;
              v63->m_Items[4] = (Il2CppObject *)v65;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[4], v65, v92, v93, v94, v95, v96, v97);
              v64 = StringLiteral_15462/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15462/*"UpdateGaugeValue"*/ )
              {
                v64 = sub_1C2E268(StringLiteral_15462/*"UpdateGaugeValue"*/, v63->obj.klass->_1.element_class);
                if ( !v64 )
                  goto LABEL_114;
                v65 = StringLiteral_15462/*"UpdateGaugeValue"*/;
              }
              else
              {
                v65 = 0LL;
              }
              if ( v63->max_length <= 5 )
                goto LABEL_113;
              v63->m_Items[5] = (Il2CppObject *)v65;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[5], v65, v98, v99, v100, v101, v102, v103);
              v64 = StringLiteral_22692/*"oncomplete"*/;
              if ( StringLiteral_22692/*"oncomplete"*/ )
              {
                v64 = sub_1C2E268(StringLiteral_22692/*"oncomplete"*/, v63->obj.klass->_1.element_class);
                if ( !v64 )
                  goto LABEL_114;
                v65 = StringLiteral_22692/*"oncomplete"*/;
              }
              else
              {
                v65 = 0LL;
              }
              if ( v63->max_length <= 6 )
                goto LABEL_113;
              v63->m_Items[6] = (Il2CppObject *)v65;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[6], v65, v104, v105, v106, v107, v108, v109);
              v64 = StringLiteral_10066/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_10066/*"OnCompleteGaugeValue"*/ )
              {
                v64 = sub_1C2E268(StringLiteral_10066/*"OnCompleteGaugeValue"*/, v63->obj.klass->_1.element_class);
                if ( !v64 )
                  goto LABEL_114;
                v65 = StringLiteral_10066/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v65 = 0LL;
              }
              if ( v63->max_length <= 7 )
                goto LABEL_113;
              v63->m_Items[7] = (Il2CppObject *)v65;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[7], v65, v110, v111, v112, v113, v114, v115);
              v64 = StringLiteral_22693/*"oncompleteparams"*/;
              if ( StringLiteral_22693/*"oncompleteparams"*/ )
              {
                v64 = sub_1C2E268(StringLiteral_22693/*"oncompleteparams"*/, v63->obj.klass->_1.element_class);
                if ( !v64 )
                  goto LABEL_114;
                v65 = StringLiteral_22693/*"oncompleteparams"*/;
              }
              else
              {
                v65 = 0LL;
              }
              if ( v63->max_length <= 8 )
                goto LABEL_113;
              v63->m_Items[8] = (Il2CppObject *)v65;
              sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[8], v65, v116, v117, v118, v119, v120, v121);
              v155 = v3;
              v64 = j_il2cpp_value_box_0(int_TypeInfo, &v155, v122, v123, v124);
              v131 = v64;
              if ( !v64 || (v64 = sub_1C2E268(v64, v63->obj.klass->_1.element_class)) != 0 )
              {
                if ( v63->max_length <= 9 )
                  goto LABEL_113;
                v63->m_Items[9] = (Il2CppObject *)v131;
                sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[9], v131, v125, v126, v127, v128, v129, v130);
                v64 = StringLiteral_24383/*"time"*/;
                if ( StringLiteral_24383/*"time"*/ )
                {
                  v64 = sub_1C2E268(StringLiteral_24383/*"time"*/, v63->obj.klass->_1.element_class);
                  if ( !v64 )
                    goto LABEL_114;
                  v65 = StringLiteral_24383/*"time"*/;
                }
                else
                {
                  v65 = 0LL;
                }
                if ( v63->max_length <= 0xA )
                  goto LABEL_113;
                v63->m_Items[10] = (Il2CppObject *)v65;
                sub_1C2E0D0((PartyOrganizationUtility_o *)&v63->m_Items[10], v65, v132, v133, v134, v135, v136, v137);
                v154 = (float)(repeatInterval * (float)v29) / v52;
                v64 = j_il2cpp_value_box_0(float_TypeInfo, &v154, v138, v139, v140);
                v147 = v64;
                if ( !v64 || (v64 = sub_1C2E268(v64, v63->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v63->max_length > 0xB )
                  {
                    v63->m_Items[11] = (Il2CppObject *)v147;
                    sub_1C2E0D0(
                      (PartyOrganizationUtility_o *)&v63->m_Items[11],
                      v147,
                      v141,
                      v142,
                      v143,
                      v144,
                      v145,
                      v146);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v148 = iTween__Hash(v63, 0LL);
                    iTween__ValueTo(gameObject, v148, 0LL);
                    v150 = this->fields.setting;
                    if ( v150 )
                    {
                      v151 = v150->fields.effect;
                      if ( v151 )
                      {
                        v152 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                 v151->fields.effectSeName,
                                 v29,
                                 repeatInterval / v52,
                                 v149);
                        UnityEngine_MonoBehaviour__StartCoroutine_70974992(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v152,
                          0LL);
                        return;
                      }
                    }
LABEL_112:
                    sub_1C2E388(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1C2E390(v64, v65);
                }
              }
            }
          }
LABEL_114:
          v153 = sub_1C2E3AC(v64);
          sub_1C2E254(v153, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__ShowStepUpEffect(
        BattlePointGaugeComponent_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v22; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C0091D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_string__TypeInfo, *(_QWORD *)&effectId);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__, v8);
    sub_1C2E12C(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo, v9);
    byte_4C0091D = 1;
  }
  effectPrefab = 0LL;
  v10 = sub_1C2E378(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_17;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v19) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v10 + 24);
    v20 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v22 = UnityEngine_Object__Instantiate_object__50692032(
            v20,
            stepUpEffectRootTransform,
            (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v22, 0LL, 0LL);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v22 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v22,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v24 = (System_Action_object__o *)sub_1C2E378(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v24,
          (Il2CppObject *)v10,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0LL);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v24;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&Component_object[12], (int64_t)v24, v25, v26, v27, v28, v29, v30);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0LL);
          return;
        }
LABEL_17:
        sub_1C2E388(setting, v12);
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
    sub_1C2E388(barMaskPanel, immediately);
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
    sub_1C2E388(barMaskPanel, method);
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
    sub_1C2E388(battlePointPhaseMaster, *(_QWORD *)&value);
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
    sub_1C2E388(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
  sub_1C2E0D0(
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
    sub_1C2E388(this, *(_QWORD *)&value);
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
    sub_1C2E388(0LL, method);
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

  if ( (byte_4C0091F & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__, method);
    byte_4C0091F = 1;
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
      sub_1C2E0D0((PartyOrganizationUtility_o *)p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
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
      v16 = (_QWORD *)sub_1C2E144(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C2E110(v16, v16[4]);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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

  if ( (byte_4C0091E & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_12976/*"SetStepSprite"*/, eventName);
    byte_4C0091E = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12976/*"SetStepSprite"*/,
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
      sub_1C2E388(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0LL);
  }
}