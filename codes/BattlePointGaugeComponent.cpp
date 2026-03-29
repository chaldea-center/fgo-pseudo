void BattlePointGaugeComponent___ctor(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.lastStepUpEffectIdInTween = -1;
  this->fields.lastUpPhaseInTween = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t BattlePointGaugeComponent__GetBattlePointId(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  return this->fields.battlePointId;
}


void BattlePointGaugeComponent__Init(
        BattlePointGaugeComponent_o *this,
        int32_t inBattlePointId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v25; // x1
  System_Collections_IEnumerator_o *v26; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_Collections_IEnumerator_c *v31; // x8
  __int64 v32; // x9
  System_Collections_IEnumerator_c **v33; // x10
  __int64 v34; // x0
  UnityEngine_AnimationState_o *v35; // x0
  __int64 v36; // x1
  struct System_String_o *name; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x19
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x20
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  void *v51; // x0
  int v52; // w1
  __int64 v53; // x0
  __int64 v54; // x20
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0

  if ( (byte_4D34110 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_AnimationState_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34110 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.methodPtr)(
    this,
    this->klass->vtable._4_ValidateSerializedField.method,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.battlePointPhaseMaster,
    (int32_t)Master_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.battlePointId = inBattlePointId;
  BattlePointGaugeComponent__StartClose(this, 1, v12);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.phaseAnimationComponent,
    (int32_t)Component_object,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0, 0) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_38:
    sub_1C93D2C(phase, v13);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
  v26 = Enumerator;
  if ( !Enumerator )
    sub_1C93D2C(0, v25);
  klass = Enumerator->klass;
  v28 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_15;
    }
    v30 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v30 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) != 0 )
  {
    v31 = v26->klass;
    v32 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v33 = (System_Collections_IEnumerator_c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 2;
        if ( !v32 )
          goto LABEL_22;
      }
      v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1];
    }
    else
    {
LABEL_22:
      v34 = sub_1C69E5C(v26, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v35 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(
                                            v26,
                                            *(_QWORD *)(v34 + 8));
    if ( !v35 )
      sub_1C93D2C(0, v36);
    if ( v35->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C940C8(v35);
      if ( v52 != 1 )
      {
        v53 = sub_1C93C10(v26, System_IDisposable_TypeInfo);
        v54 = v53;
        if ( v53 )
        {
          v55 = *(_QWORD *)v53;
          v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
          {
            v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
            {
              --v56;
              v57 += 4;
              if ( !v56 )
                goto LABEL_49;
            }
            v58 = v55 + 16LL * *v57 + 312;
          }
          else
          {
LABEL_49:
            v58 = sub_1C69E5C(v53, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8));
        }
        sub_1D77CB0();
      }
      v44 = *(_QWORD *)__cxa_begin_catch(v51);
      __cxa_end_catch();
      goto LABEL_28;
    }
    name = UnityEngine_AnimationState__get_name(v35, 0);
    this->fields.phaseAnimationName = name;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.phaseAnimationName,
      (int32_t)name,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = 0;
LABEL_28:
  v45 = sub_1C93C10(v26, System_IDisposable_TypeInfo);
  if ( v45 )
  {
    v46 = *(_QWORD *)v45;
    v47 = v45;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_33;
      }
      v50 = v46 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_33:
      v50 = sub_1C69E5C(v45, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
  }
  if ( v44 )
    sub_1C93D24(v44);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__OnCompleteGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  const MethodInfo *v6; // x2
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_9;
  if ( !BattlePointPhaseMaster__TryGetEntityByValue(
          battlePointPhaseMaster,
          this->fields.battlePointId,
          currentPointValue,
          &entity,
          0) )
    return;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_9;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         this->fields.beforePointValue,
                                                         currentPointValue,
                                                         0);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) != 0 )
  {
    if ( entity )
    {
      BattlePointGaugeComponent__ShowStepUpEffect(this, entity->fields.effectId, v6);
      goto LABEL_7;
    }
LABEL_9:
    sub_1C93D2C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void BattlePointGaugeComponent__PlayPhaseAnimation(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_4D34111 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34111 = 1;
  }
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(phaseAnimationComponent, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.phaseAnimationName, 0) )
  {
    v5 = this->fields.phaseAnimationComponent;
    if ( !v5 )
      goto LABEL_14;
    if ( UnityEngine_Animation__get_isPlaying(v5, 0) )
    {
      v5 = this->fields.phaseAnimationComponent;
      if ( !v5 )
        goto LABEL_14;
      UnityEngine_Animation__Stop(v5, 0);
    }
    v5 = this->fields.phaseAnimationComponent;
    if ( v5 )
    {
      UnityEngine_Animation__Play_71862428(v5, this->fields.phaseAnimationName, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v5, v4);
  }
}


System_Collections_IEnumerator_o *BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D34113 & 1) == 0 )
  {
    sub_1C93AD4(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_4D34113 = 1;
  }
  v7 = sub_1C93D20(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)seName, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = effectNum;
  *(float *)(v7 + 44) = waitSecond;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__ShowAddedPointEffect(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  int32_t v3; // w20
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
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
  Il2CppObject *ComponentInChildren_object__52413484; // x23
  Il2CppObject *Component_object; // x22
  struct BattlePointGaugeSetting_o *v29; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v30; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v33; // s8
  float v34; // s8
  float v35; // s8
  float repeatInterval; // s9
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int32_t v38; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  BattlePointPhaseMaster_o *v46; // x23
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  __int64 v55; // x24
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  __int64 v69; // x24
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  __int64 v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  __int64 v83; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  __int64 v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  __int64 v97; // x1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  __int64 v104; // x1
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  __int64 v111; // x20
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  __int64 v118; // x1
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  __int64 v125; // x20
  System_Collections_Hashtable_o *v126; // x0
  const MethodInfo *v127; // x2
  struct BattlePointGaugeSetting_o *v128; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v129; // x8
  System_Collections_IEnumerator_o *v130; // x0
  __int64 v131; // x0
  float v132; // [xsp+4h] [xbp-12Ch] BYREF
  int32_t v133; // [xsp+8h] [xbp-128h] BYREF
  int32_t v134; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v135; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v136; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v137; // [xsp+80h] [xbp-B0h] BYREF
  BattlePointPhaseMaster_o *v138; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF

  v3 = currentPointValue;
  if ( (byte_4D34112 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____79129376);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&System_MathF_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&StringLiteral_19902/*"from"*/);
    sub_1C93AD4(&StringLiteral_15289/*"UpdateGaugeValue"*/);
    sub_1C93AD4(&StringLiteral_24376/*"time"*/);
    sub_1C93AD4(&StringLiteral_22703/*"oncompleteparams"*/);
    sub_1C93AD4(&StringLiteral_22710/*"onupdate"*/);
    sub_1C93AD4(&StringLiteral_9936/*"OnCompleteGaugeValue"*/);
    sub_1C93AD4(&StringLiteral_24415/*"to"*/);
    sub_1C93AD4(&StringLiteral_22702/*"oncomplete"*/);
    sub_1C93AD4(&iTween_TypeInfo);
    byte_4D34112 = 1;
  }
  m_ParticleSystem = 0;
  entity = 0;
  v138 = 0;
  memset(&v137, 0, sizeof(v137));
  if ( this->fields.beforePointValue != v3 )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( !battlePointPhaseMaster )
      goto LABEL_112;
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                           battlePointPhaseMaster,
                                                           this->fields.battlePointId,
                                                           v3,
                                                           &entity,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
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
      battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             battlePointPhaseMaster,
                                                             entity,
                                                             v3 - this->fields.beforePointValue,
                                                             effect->fields.effectNumPerPhase,
                                                             0);
      v13 = (int)battlePointPhaseMaster;
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
      battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             battlePointPhaseMaster,
                                                             *(BattlePointPhaseEntity_o **)&currentPointValue,
                                                             beforeNextEntity->fields.value
                                                           - this->fields.beforePointValue,
                                                             v18->fields.effectNumPerPhase,
                                                             0);
      *(_QWORD *)&currentPointValue = entity;
      if ( !entity )
        goto LABEL_112;
      v19 = this->fields.setting;
      if ( !v19 )
        goto LABEL_112;
      v20 = v19->fields.effect;
      if ( !v20 || !this->fields.battlePointPhaseMaster )
        goto LABEL_112;
      v21 = (_DWORD)battlePointPhaseMaster + v10;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             this->fields.battlePointPhaseMaster,
                                                             entity,
                                                             v3 - entity->fields.value,
                                                             v20->fields.effectNumPerPhase,
                                                             0);
      v13 = v21 + (_DWORD)battlePointPhaseMaster;
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
    v26 = UnityEngine_Object__Instantiate_object__52629400(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)v26,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v26 )
        goto LABEL_112;
      ComponentInChildren_object__52413484 = UnityEngine_GameObject__GetComponentInChildren_object__52413484(
                                               (UnityEngine_GameObject_o *)v26,
                                               1,
                                               (const MethodInfo_31FC42C *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____79129376);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v26,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__52413484, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
        if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0);
          if ( !ComponentInChildren_object__52413484 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__52413484,
                               0).fields.m_ParticleSystem;
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_ParticleSystem__get_emission(
                                                                 (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__52413484,
                                                                 0).fields.m_ParticleSystem;
          v138 = battlePointPhaseMaster;
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
          if ( !byte_4D34192 )
          {
            sub_1C93AD4(&System_Math_TypeInfo);
            byte_4D34192 = 1;
          }
          v34 = v33 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v35 = System_Math__Max_65947584(1.0, v34, 0);
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(
            (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
            v35,
            0);
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(
                 (UnityEngine_ParticleSystem_EmissionModule_o)&v138,
                 0) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(
              &v136,
              (UnityEngine_ParticleSystem_EmissionModule_o)&v138,
              0,
              0);
            v137 = v136;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v137, 0);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v137, v13, 0);
            v135 = v137;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(
              (UnityEngine_ParticleSystem_EmissionModule_o)&v138,
              0,
              &v135,
              0);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v38 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v38;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)sub_1C93B7C(object___TypeInfo, 12);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v46 = battlePointPhaseMaster;
          v47 = StringLiteral_19902/*"from"*/;
          if ( StringLiteral_19902/*"from"*/ )
          {
            v47 = sub_1C93C10(StringLiteral_19902/*"from"*/, v46->klass->_1.element_class);
            if ( !v47 )
              goto LABEL_114;
            v48 = StringLiteral_19902/*"from"*/;
          }
          else
          {
            v48 = 0;
          }
          if ( !LODWORD(v46->fields._MasterName_k__BackingField) )
            goto LABEL_113;
          *(_QWORD *)&v46->fields.revision = v48;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.revision, v48, v40, v41, v42, v43, v44, v45);
          LODWORD(v136.fields.m_Time) = this->fields.beforePointValue;
          v47 = j_il2cpp_value_box_0(int_TypeInfo, &v136);
          v55 = v47;
          if ( !v47 || (v47 = sub_1C93C10(v47, v46->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 1 )
              goto LABEL_113;
            v46->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v55;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.list, v55, v49, v50, v51, v52, v53, v54);
            v47 = StringLiteral_24415/*"to"*/;
            if ( StringLiteral_24415/*"to"*/ )
            {
              v47 = sub_1C93C10(StringLiteral_24415/*"to"*/, v46->klass->_1.element_class);
              if ( !v47 )
                goto LABEL_114;
              v62 = StringLiteral_24415/*"to"*/;
            }
            else
            {
              v62 = 0;
            }
            if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 2 )
              goto LABEL_113;
            v46->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v62;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields._lookup, v62, v56, v57, v58, v59, v60, v61);
            v134 = v3;
            v47 = j_il2cpp_value_box_0(int_TypeInfo, &v134);
            v69 = v47;
            if ( !v47 || (v47 = sub_1C93C10(v47, v46->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 3 )
                goto LABEL_113;
              v46->fields.seriazlier = (struct MiniMessagePack_MiniMessagePacker_o *)v69;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.seriazlier, v69, v63, v64, v65, v66, v67, v68);
              v47 = StringLiteral_22710/*"onupdate"*/;
              if ( StringLiteral_22710/*"onupdate"*/ )
              {
                v47 = sub_1C93C10(StringLiteral_22710/*"onupdate"*/, v46->klass->_1.element_class);
                if ( !v47 )
                  goto LABEL_114;
                v76 = StringLiteral_22710/*"onupdate"*/;
              }
              else
              {
                v76 = 0;
              }
              if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 4 )
                goto LABEL_113;
              v46->fields.sb = (struct System_Text_StringBuilder_o *)v76;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.sb, v76, v70, v71, v72, v73, v74, v75);
              v47 = StringLiteral_15289/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15289/*"UpdateGaugeValue"*/ )
              {
                v47 = sub_1C93C10(StringLiteral_15289/*"UpdateGaugeValue"*/, v46->klass->_1.element_class);
                if ( !v47 )
                  goto LABEL_114;
                v83 = StringLiteral_15289/*"UpdateGaugeValue"*/;
              }
              else
              {
                v83 = 0;
              }
              if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 5 )
                goto LABEL_113;
              v46[1].klass = (BattlePointPhaseMaster_c *)v83;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46[1], v83, v77, v78, v79, v80, v81, v82);
              v47 = StringLiteral_22702/*"oncomplete"*/;
              if ( StringLiteral_22702/*"oncomplete"*/ )
              {
                v47 = sub_1C93C10(StringLiteral_22702/*"oncomplete"*/, v46->klass->_1.element_class);
                if ( !v47 )
                  goto LABEL_114;
                v90 = StringLiteral_22702/*"oncomplete"*/;
              }
              else
              {
                v90 = 0;
              }
              if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 6 )
                goto LABEL_113;
              v46[1].monitor = (void *)v90;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46[1].monitor, v90, v84, v85, v86, v87, v88, v89);
              v47 = StringLiteral_9936/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9936/*"OnCompleteGaugeValue"*/ )
              {
                v47 = sub_1C93C10(StringLiteral_9936/*"OnCompleteGaugeValue"*/, v46->klass->_1.element_class);
                if ( !v47 )
                  goto LABEL_114;
                v97 = StringLiteral_9936/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v97 = 0;
              }
              if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 7 )
                goto LABEL_113;
              *(_QWORD *)&v46[1].fields._MasterKind_k__BackingField = v97;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46[1].fields, v97, v91, v92, v93, v94, v95, v96);
              v47 = StringLiteral_22703/*"oncompleteparams"*/;
              if ( StringLiteral_22703/*"oncompleteparams"*/ )
              {
                v47 = sub_1C93C10(StringLiteral_22703/*"oncompleteparams"*/, v46->klass->_1.element_class);
                if ( !v47 )
                  goto LABEL_114;
                v104 = StringLiteral_22703/*"oncompleteparams"*/;
              }
              else
              {
                v104 = 0;
              }
              if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 8 )
                goto LABEL_113;
              v46[1].fields._MasterName_k__BackingField = (struct System_String_o *)v104;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&v46[1].fields._MasterName_k__BackingField,
                v104,
                v98,
                v99,
                v100,
                v101,
                v102,
                v103);
              v133 = v3;
              v47 = j_il2cpp_value_box_0(int_TypeInfo, &v133);
              v111 = v47;
              if ( !v47 || (v47 = sub_1C93C10(v47, v46->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 9 )
                  goto LABEL_113;
                *(_QWORD *)&v46[1].fields.revision = v111;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v46[1].fields.revision,
                  v111,
                  v105,
                  v106,
                  v107,
                  v108,
                  v109,
                  v110);
                v47 = StringLiteral_24376/*"time"*/;
                if ( StringLiteral_24376/*"time"*/ )
                {
                  v47 = sub_1C93C10(StringLiteral_24376/*"time"*/, v46->klass->_1.element_class);
                  if ( !v47 )
                    goto LABEL_114;
                  v118 = StringLiteral_24376/*"time"*/;
                }
                else
                {
                  v118 = 0;
                }
                if ( LODWORD(v46->fields._MasterName_k__BackingField) <= 0xA )
                  goto LABEL_113;
                v46[1].fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v118;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v46[1].fields.list,
                  v118,
                  v112,
                  v113,
                  v114,
                  v115,
                  v116,
                  v117);
                v132 = (float)(repeatInterval * (float)v13) / v35;
                v47 = j_il2cpp_value_box_0(float_TypeInfo, &v132);
                v125 = v47;
                if ( !v47 || (v47 = sub_1C93C10(v47, v46->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v46->fields._MasterName_k__BackingField) > 0xB )
                  {
                    v46[1].fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v125;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v46[1].fields._lookup,
                      v125,
                      v119,
                      v120,
                      v121,
                      v122,
                      v123,
                      v124);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v126 = iTween__Hash((System_Object_array *)v46, 0);
                    iTween__ValueTo(gameObject, v126, 0);
                    v128 = this->fields.setting;
                    if ( v128 )
                    {
                      v129 = v128->fields.effect;
                      if ( v129 )
                      {
                        v130 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                 v129->fields.effectSeName,
                                 v13,
                                 repeatInterval / v35,
                                 v127);
                        UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v130, 0);
                        return;
                      }
                    }
LABEL_112:
                    sub_1C93D2C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1C93D34(v47);
                }
              }
            }
          }
LABEL_114:
          v131 = sub_1C93D50(v47);
          sub_1C93BFC(v131, 0);
        }
      }
    }
  }
}


void BattlePointGaugeComponent__ShowStepUpEffect(
        BattlePointGaugeComponent_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v17; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D34114 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_1C93AD4(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_4D34114 = 1;
  }
  effectPrefab = 0;
  v5 = sub_1C93D20(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
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
    v17 = UnityEngine_Object__Instantiate_object__52629400(
            v15,
            stepUpEffectRootTransform,
            (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0, 0);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v17 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v17,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v19 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v19;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[12], (int32_t)v19, v20, v21, v22, v23, v24, v25);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
          return;
        }
LABEL_17:
        sub_1C93D2C(setting, v7);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__StartClose(
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
  UIPanel__set_depth(barMaskPanel, 2, 0);
  barMaskPanel = this->fields.battlePointPanel;
  if ( !barMaskPanel )
    goto LABEL_11;
  UIPanel__set_depth(barMaskPanel, 3, 0);
  if ( immediately )
  {
    barMaskPanel = (UIPanel_o *)this->fields.bar;
    if ( barMaskPanel )
    {
      ((void (__fastcall *)(UIPanel_o *, const MethodInfo *, float))barMaskPanel->klass->vtable._8_set_alpha.methodPtr)(
        barMaskPanel,
        barMaskPanel->klass->vtable._8_set_alpha.method,
        0.0);
      barMaskPanel = (UIPanel_o *)this->fields.bar;
      if ( barMaskPanel )
      {
        barMaskPanel = (UIPanel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)barMaskPanel, 0);
        if ( barMaskPanel )
        {
          v8.fields.x = 0.0;
          v8.fields.z = 0.0;
          v8.fields.y = -42.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)barMaskPanel, v8, 0);
          goto LABEL_8;
        }
      }
    }
LABEL_11:
    sub_1C93D2C(barMaskPanel, immediately);
  }
LABEL_8:
  barMaskPanel = (UIPanel_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0);
  TweenAlpha__Begin(gameObject, 0.4, 0.0, 0);
  barMaskPanel = (UIPanel_o *)this->fields.bar;
  if ( !barMaskPanel )
    goto LABEL_11;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0);
  v9.fields.x = 0.0;
  v9.fields.z = 0.0;
  v9.fields.y = -42.0;
  TweenPosition__Begin(v7, 0.3, v9, 0);
}


void BattlePointGaugeComponent__StartOpen(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UIPanel_o *barMaskPanel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_Vector3_o v6; // 0:s1.4,4:s2.4,8:s3.4

  barMaskPanel = this->fields.barMaskPanel;
  if ( !barMaskPanel
    || (UIPanel__set_depth(barMaskPanel, 6, 0), (barMaskPanel = this->fields.battlePointPanel) == 0)
    || (UIPanel__set_depth(barMaskPanel, 7, 0), (barMaskPanel = (UIPanel_o *)this->fields.bar) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0),
        TweenAlpha__Begin(gameObject, 0.4, 1.0, 0),
        (barMaskPanel = (UIPanel_o *)this->fields.bar) == 0) )
  {
    sub_1C93D2C(barMaskPanel, method);
  }
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0);
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  TweenPosition__Begin(v5, 0.3, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__UpdateBattlePoint(
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
                                                         0);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    return;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity || (battlePointPhaseMaster = this->fields.battlePointPhaseMaster) == 0 )
LABEL_8:
    sub_1C93D2C(battlePointPhaseMaster, *(_QWORD *)&value);
  if ( BattlePointPhaseMaster__TryGetEntity(
         battlePointPhaseMaster,
         &this->fields.beforeNextEntity,
         this->fields.battlePointId,
         beforeEntity->fields.phase + 1,
         0) )
  {
    BattlePointGaugeComponent__ShowAddedPointEffect(this, value, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__UpdateBattlePointImmediately(
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

  v16 = 0;
  entity = 0;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  v5 = currentPointValue;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         currentPointValue,
                                                         &entity,
                                                         0);
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
  UISprite__set_spriteName(phase, (System_String_o *)battlePointPhaseMaster, 0);
  firstPhaseInTween = this->fields.firstPhaseInTween;
  if ( firstPhaseInTween != -1 )
  {
    if ( !entity )
      goto LABEL_29;
    v10 = entity->fields.phase;
    if ( firstPhaseInTween != v10 && this->fields.lastUpPhaseInTween != v10 )
      BattlePointGaugeComponent__PlayPhaseAnimation(this, *(const MethodInfo **)&currentPointValue);
  }
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  *(_QWORD *)&currentPointValue = entity;
  if ( !entity )
LABEL_29:
    sub_1C93D2C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
    UISprite__set_spriteName(step, (System_String_o *)battlePointPhaseMaster, 0);
    *(_QWORD *)&currentPointValue = entity;
  }
  klass = this->klass;
  this->fields.lastStepUpEffectIdInTween = -1;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, const MethodInfo *))klass->vtable._5_UpdateProgressGauge.methodPtr)(
                                                         this,
                                                         *(_QWORD *)&currentPointValue,
                                                         klass->vtable._5_UpdateProgressGauge.method);
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
                                                         0);
  if ( !entity )
    goto LABEL_29;
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( battlePointPhaseMaster )
    {
      v15 = entity->fields.phase;
      if ( v15 != BattlePointPhaseMaster__GetMaxPhase(battlePointPhaseMaster, this->fields.battlePointId, 0) )
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
  UIProgressBar__set_value((UIProgressBar_o *)battlePointPhaseMaster, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.beforeEntity, value, (int32_t)method, v3, v4, v5, v6, v7);
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
  UISprite__set_spriteName(phase, (System_String_o *)this, 0);
  BattlePointGaugeComponent__PlayPhaseAnimation(v13, v18);
  *(_QWORD *)&value = v13->fields.beforeEntity;
  if ( !*(_QWORD *)&value )
    goto LABEL_25;
  klass = v13->klass;
  v13->fields.lastUpPhaseInTween = *(_DWORD *)(*(_QWORD *)&value + 20LL);
  ((void (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._5_UpdateProgressGauge.methodPtr)(v13);
  this = (BattlePointGaugeComponent_o *)v13->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v13->fields.battlePointId,
                                          v11,
                                          v10,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    BattlePointGaugeComponent__ShowStepUpEffect(v13, (*p_beforeNextEntity)->fields.effectId, v20);
  }
  v21 = v13->fields.beforeEntity;
  if ( !v21
    || (this = (BattlePointGaugeComponent_o *)v13->fields.battlePointPhaseMaster) == 0
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                p_beforeNextEntity,
                                                v13->fields.battlePointId,
                                                v21->fields.phase + 1,
                                                0),
        (v22 = *p_beforeEntity) == 0) )
  {
LABEL_25:
    sub_1C93D2C(this, *(_QWORD *)&value);
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
      UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0);
      return;
    }
    goto LABEL_25;
  }
  this = (BattlePointGaugeComponent_o *)v13->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  v23 = v22->fields.phase;
  if ( v23 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v13->fields.battlePointId, 0) )
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


void BattlePointGaugeComponent__UpdateProgressGauge(
        BattlePointGaugeComponent_o *this,
        BattlePointPhaseEntity_o *entity,
        const MethodInfo *method)
{
  ;
}


void BattlePointGaugeComponent__ValidateSerializedField(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0

  setting = this->fields.setting;
  if ( !setting )
    sub_1C93D2C(0, method);
  BattlePointGaugeSetting__ValidateSerializedField(setting, method);
}


void BattlePointGaugeComponent__PlaySeInEffectTiming_d__31___ctor(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__MoveNext(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  System_String_o *seName; // x0
  int count_5__2; // w8
  float elapsed_5__3; // s8
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  float deltaTime; // s0
  float waitSecond; // s1
  float v15; // s0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject **p__2__current; // x19

  if ( (byte_4D34116 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_4D34116 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    waitSecond = this->fields.waitSecond;
    v15 = elapsed_5__3 + deltaTime;
    this->fields._elapsed_5__3 = v15;
    if ( v15 < waitSecond )
    {
LABEL_15:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p__2__current, 0, v7, v8, v9, v10, v11, v12);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
    count_5__2 = this->fields._count_5__2;
    do
    {
      v15 = v15 - waitSecond;
      --count_5__2;
    }
    while ( waitSecond <= v15 );
    this->fields._elapsed_5__3 = v15;
    this->fields._count_5__2 = count_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    seName = this->fields.seName;
    this->fields.__1__state = -1;
    if ( System_String__IsNullOrEmpty(seName, 0) )
      return 0;
    count_5__2 = this->fields.effectNum;
    *(_QWORD *)&this->fields._count_5__2 = (unsigned int)count_5__2;
  }
  if ( count_5__2 > 0 )
  {
    v16 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C93AEC(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v16, v16[4]);
    OverwriteAssetSoundName__PlaySeContinue(v17, this->fields.seName, 0, 0);
    goto LABEL_15;
  }
  return 0;
}


Il2CppObject *BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_Collections_IEnumerator_Reset(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_Collections_IEnumerator_get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePointGaugeComponent__PlaySeInEffectTiming_d__31__System_IDisposable_Dispose(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePointGaugeComponent___c__DisplayClass32_0___ctor(
        BattlePointGaugeComponent___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePointGaugeComponent___c__DisplayClass32_0___ShowStepUpEffect_b__0(
        BattlePointGaugeComponent___c__DisplayClass32_0_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattlePointGaugeComponent_o *_4__this; // x8
  UISprite_o *step; // x20

  if ( (byte_4D34115 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12917/*"SetStepSprite"*/);
    byte_4D34115 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12917/*"SetStepSprite"*/,
                                           0);
  if ( ((unsigned __int8)setting & 1) != 0 )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (setting = _4__this->fields.setting) == 0
      || (step = _4__this->fields.step,
          setting = (BattlePointGaugeSetting_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                   setting,
                                                   this->fields.effectId,
                                                   v7),
          !step) )
    {
      sub_1C93D2C(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0);
  }
}