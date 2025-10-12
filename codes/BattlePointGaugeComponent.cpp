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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v16; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  System_Collections_IEnumerator_c *v21; // x8
  __int64 v22; // x9
  System_Collections_IEnumerator_c **v23; // x10
  __int64 v24; // x0
  UnityEngine_AnimationState_o *v25; // x0
  struct System_String_o *name; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x19
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x20
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  void *v36; // x0
  int v37; // w1
  __int64 v38; // x0
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4C3AFB8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AFB8 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.methodPtr)(
    this,
    this->klass->vtable._4_ValidateSerializedField.method,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battlePointPhaseMaster, (int32_t)Master_object, v6, v7);
  this->fields.battlePointId = inBattlePointId;
  BattlePointGaugeComponent__StartClose(this, 1, v8);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.phaseAnimationComponent, (int32_t)Component_object, v12, v13);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0, 0) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_38:
    sub_1C32E7C(phase);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
  v16 = Enumerator;
  if ( !Enumerator )
    sub_1C32E7C(0);
  klass = Enumerator->klass;
  v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_15;
    }
    v20 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v20 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) != 0 )
  {
    v21 = v16->klass;
    v22 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 2;
        if ( !v22 )
          goto LABEL_22;
      }
      v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1];
    }
    else
    {
LABEL_22:
      v24 = sub_1C83438(v16, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v25 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                            v16,
                                            *(_QWORD *)(v24 + 8));
    if ( !v25 )
      sub_1C32E7C(0);
    if ( v25->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C3313C(v25);
      if ( v37 != 1 )
      {
        v38 = sub_1C32D5C(v16, System_IDisposable_TypeInfo);
        v39 = v38;
        if ( v38 )
        {
          v40 = *(_QWORD *)v38;
          v41 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
          {
            v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
            {
              --v41;
              v42 += 4;
              if ( !v41 )
                goto LABEL_49;
            }
            v43 = v40 + 16LL * *v42 + 312;
          }
          else
          {
LABEL_49:
            v43 = sub_1C83438(v38, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
        }
        sub_1D1BD54();
      }
      v29 = *(_QWORD *)__cxa_begin_catch(v36);
      __cxa_end_catch();
      goto LABEL_28;
    }
    name = UnityEngine_AnimationState__get_name(v25, 0);
    this->fields.phaseAnimationName = name;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.phaseAnimationName, (int32_t)name, v27, v28);
  }
  v29 = 0;
LABEL_28:
  v30 = sub_1C32D5C(v16, System_IDisposable_TypeInfo);
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_33;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_33:
      v35 = sub_1C83438(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  if ( v29 )
    sub_1C32E74(v29);
}


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
    sub_1C32E7C(battlePointPhaseMaster);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void BattlePointGaugeComponent__PlayPhaseAnimation(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  UnityEngine_Animation_o *v4; // x0

  if ( (byte_4C3AFB9 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AFB9 = 1;
  }
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(phaseAnimationComponent, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.phaseAnimationName, 0) )
  {
    v4 = this->fields.phaseAnimationComponent;
    if ( !v4 )
      goto LABEL_14;
    if ( UnityEngine_Animation__get_isPlaying(v4, 0) )
    {
      v4 = this->fields.phaseAnimationComponent;
      if ( !v4 )
        goto LABEL_14;
      UnityEngine_Animation__Stop(v4, 0);
    }
    v4 = this->fields.phaseAnimationComponent;
    if ( v4 )
    {
      UnityEngine_Animation__Play_70968924(v4, this->fields.phaseAnimationName, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v4);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C3AFBB & 1) == 0 )
  {
    sub_1C32C20(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_4C3AFBB = 1;
  }
  v7 = sub_1C32E6C(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)seName, v8, v9);
  *(_DWORD *)(v7 + 40) = effectNum;
  *(float *)(v7 + 44) = waitSecond;
  return (System_Collections_IEnumerator_o *)v7;
}


void BattlePointGaugeComponent__ShowAddedPointEffect(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  struct BattlePointPhaseEntity_o *beforeEntity; // x1
  int32_t phase; // w9
  int32_t v8; // w10
  bool v9; // vf
  int v10; // w9
  int v11; // w21
  struct BattlePointGaugeSetting_o *setting; // x9
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x9
  int32_t v14; // w21
  struct BattlePointGaugeSetting_o *v15; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v16; // x8
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  struct BattlePointGaugeSetting_o *v18; // x9
  struct BattlePointGaugeSetting_EffectSection_o *v19; // x9
  struct BattlePointGaugeSetting_o *v20; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v21; // x9
  int v22; // w21
  struct BattlePointGaugeSetting_o *v23; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v24; // x8
  Il2CppObject *pointEffectPrefab; // x22
  UnityEngine_Transform_o *pointEffectRootTransform; // x23
  Il2CppObject *v27; // x22
  Il2CppObject *ComponentInChildren_object__51596568; // x23
  Il2CppObject *Component_object; // x22
  struct BattlePointGaugeSetting_o *v30; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v31; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v34; // s8
  float v35; // s8
  float v36; // s0
  UnityEngine_ParticleSystem_MainModule_o v37; // x0
  float v38; // s8
  UnityEngine_ParticleSystem_EmissionModule_o v39; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v40; // x0
  float repeatInterval; // s9
  UnityEngine_ParticleSystem_EmissionModule_o v42; // x0
  struct BattlePointPhaseEntity_o *v43; // x8
  int32_t v44; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  BattlePointPhaseMaster_o *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x24
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x24
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x1
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  __int64 v90; // x5
  __int64 v91; // x6
  __int64 v92; // x7
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  __int64 v95; // x20
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  __int64 v102; // x5
  __int64 v103; // x6
  __int64 v104; // x7
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x20
  System_Collections_Hashtable_o *v108; // x0
  const MethodInfo *v109; // x2
  struct BattlePointGaugeSetting_o *v110; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v111; // x8
  System_Collections_IEnumerator_o *v112; // x0
  __int64 v113; // x0
  float v114; // [xsp+4h] [xbp-12Ch] BYREF
  int32_t v115; // [xsp+8h] [xbp-128h] BYREF
  int32_t v116; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v117; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v118; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v119; // [xsp+80h] [xbp-B0h] BYREF
  BattlePointPhaseMaster_o *v120; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF

  if ( (byte_4C3AFBA & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____78130136);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&System_MathF_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_15187/*"UpdateGaugeValue"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22428/*"oncompleteparams"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_9880/*"OnCompleteGaugeValue"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3AFBA = 1;
  }
  m_ParticleSystem = 0;
  entity = 0;
  v120 = 0;
  memset(&v119, 0, sizeof(v119));
  if ( this->fields.beforePointValue != currentPointValue )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( !battlePointPhaseMaster )
      goto LABEL_112;
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                           battlePointPhaseMaster,
                                                           this->fields.battlePointId,
                                                           currentPointValue,
                                                           &entity,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
      return;
    beforeEntity = this->fields.beforeEntity;
    if ( !beforeEntity || !entity )
      goto LABEL_112;
    phase = beforeEntity->fields.phase;
    v8 = entity->fields.phase;
    v9 = __OFSUB__(v8, phase);
    v10 = v8 - phase;
    if ( (v10 < 0) ^ v9 | (v10 == 0) )
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
                                                             currentPointValue - this->fields.beforePointValue,
                                                             effect->fields.effectNumPerPhase,
                                                             0);
      v14 = (int)battlePointPhaseMaster;
    }
    else
    {
      if ( v10 >= 2 )
      {
        v15 = this->fields.setting;
        if ( !v15 )
          goto LABEL_112;
        v16 = v15->fields.effect;
        if ( !v16 )
          goto LABEL_112;
        v11 = v16->fields.effectNumPerPhase * (v10 - 1);
      }
      else
      {
        v11 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_112;
      v18 = this->fields.setting;
      if ( !v18 )
        goto LABEL_112;
      v19 = v18->fields.effect;
      if ( !v19 )
        goto LABEL_112;
      battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             battlePointPhaseMaster,
                                                             beforeEntity,
                                                             beforeNextEntity->fields.value
                                                           - this->fields.beforePointValue,
                                                             v19->fields.effectNumPerPhase,
                                                             0);
      if ( !entity )
        goto LABEL_112;
      v20 = this->fields.setting;
      if ( !v20 )
        goto LABEL_112;
      v21 = v20->fields.effect;
      if ( !v21 || !this->fields.battlePointPhaseMaster )
        goto LABEL_112;
      v22 = (_DWORD)battlePointPhaseMaster + v11;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             this->fields.battlePointPhaseMaster,
                                                             entity,
                                                             currentPointValue - entity->fields.value,
                                                             v21->fields.effectNumPerPhase,
                                                             0);
      v14 = v22 + (_DWORD)battlePointPhaseMaster;
    }
    v23 = this->fields.setting;
    if ( !v23 )
      goto LABEL_112;
    v24 = v23->fields.effect;
    if ( !v24 )
      goto LABEL_112;
    pointEffectPrefab = (Il2CppObject *)v24->fields.pointEffectPrefab;
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__Instantiate_object__51812484(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)v27,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v27 )
        goto LABEL_112;
      ComponentInChildren_object__51596568 = UnityEngine_GameObject__GetComponentInChildren_object__51596568(
                                               (UnityEngine_GameObject_o *)v27,
                                               1,
                                               (const MethodInfo_3134D18 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____78130136);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v27,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__51596568, 0, 0) )
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
          if ( !ComponentInChildren_object__51596568 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__51596568,
                               0).fields.m_ParticleSystem;
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_ParticleSystem__get_emission(
                                                                 (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__51596568,
                                                                 0).fields.m_ParticleSystem;
          v120 = battlePointPhaseMaster;
          v30 = this->fields.setting;
          if ( !v30 )
            goto LABEL_112;
          v31 = v30->fields.effect;
          if ( !v31 )
            goto LABEL_112;
          pointEffectSpeedUpBorderEffectNum = v31->fields.pointEffectSpeedUpBorderEffectNum;
          pointEffectSpeedUpCoefficient = v31->fields.pointEffectSpeedUpCoefficient;
          if ( !System_MathF_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
          v34 = pointEffectSpeedUpCoefficient * (float)(v14 - pointEffectSpeedUpBorderEffectNum);
          if ( !byte_4C3AFD1 )
          {
            sub_1C32C20(&System_Math_TypeInfo);
            byte_4C3AFD1 = 1;
          }
          v35 = v34 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v36 = System_Math__Max_65042016(1.0, v35, 0);
          v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v38 = v36;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v37, v36, 0);
          v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v120;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v39, 0) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v120;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v118, v40, 0, 0);
            v119 = v118;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v119, 0);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v119, v14, 0);
            v42.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v120;
            v117 = v119;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v42, 0, &v117, 0);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0);
          v43 = this->fields.beforeEntity;
          if ( !v43 )
            goto LABEL_112;
          v44 = v43->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v44;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)sub_1C32CC8(object___TypeInfo, 12);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v48 = battlePointPhaseMaster;
          v49 = StringLiteral_19689/*"from"*/;
          if ( StringLiteral_19689/*"from"*/ )
          {
            v49 = sub_1C32D5C(StringLiteral_19689/*"from"*/, v48->klass->_1.element_class);
            if ( !v49 )
              goto LABEL_114;
            v50 = StringLiteral_19689/*"from"*/;
          }
          else
          {
            v50 = 0;
          }
          if ( !LODWORD(v48->fields._MasterName_k__BackingField) )
            goto LABEL_113;
          *(_QWORD *)&v48->fields.revision = v50;
          sub_1C32BC4((CGThumbnailListItem_o *)&v48->fields.revision, v50, v46, v47);
          LODWORD(v118.fields.m_Time) = this->fields.beforePointValue;
          v49 = j_il2cpp_value_box_0(int_TypeInfo, &v118, v51, v52, v53, v54, v55, v56);
          v59 = v49;
          if ( !v49 || (v49 = sub_1C32D5C(v49, v48->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 1 )
              goto LABEL_113;
            v48->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v59;
            sub_1C32BC4((CGThumbnailListItem_o *)&v48->fields.list, v59, v57, v58);
            v49 = StringLiteral_24106/*"to"*/;
            if ( StringLiteral_24106/*"to"*/ )
            {
              v49 = sub_1C32D5C(StringLiteral_24106/*"to"*/, v48->klass->_1.element_class);
              if ( !v49 )
                goto LABEL_114;
              v62 = StringLiteral_24106/*"to"*/;
            }
            else
            {
              v62 = 0;
            }
            if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 2 )
              goto LABEL_113;
            v48->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v62;
            sub_1C32BC4((CGThumbnailListItem_o *)&v48->fields._lookup, v62, v60, v61);
            v116 = currentPointValue;
            v49 = j_il2cpp_value_box_0(int_TypeInfo, &v116, v63, v64, v65, v66, v67, v68);
            v71 = v49;
            if ( !v49 || (v49 = sub_1C32D5C(v49, v48->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 3 )
                goto LABEL_113;
              v48->fields.seriazlier = (struct MiniMessagePack_MiniMessagePacker_o *)v71;
              sub_1C32BC4((CGThumbnailListItem_o *)&v48->fields.seriazlier, v71, v69, v70);
              v49 = StringLiteral_22435/*"onupdate"*/;
              if ( StringLiteral_22435/*"onupdate"*/ )
              {
                v49 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v48->klass->_1.element_class);
                if ( !v49 )
                  goto LABEL_114;
                v74 = StringLiteral_22435/*"onupdate"*/;
              }
              else
              {
                v74 = 0;
              }
              if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 4 )
                goto LABEL_113;
              v48->fields.sb = (struct System_Text_StringBuilder_o *)v74;
              sub_1C32BC4((CGThumbnailListItem_o *)&v48->fields.sb, v74, v72, v73);
              v49 = StringLiteral_15187/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15187/*"UpdateGaugeValue"*/ )
              {
                v49 = sub_1C32D5C(StringLiteral_15187/*"UpdateGaugeValue"*/, v48->klass->_1.element_class);
                if ( !v49 )
                  goto LABEL_114;
                v77 = StringLiteral_15187/*"UpdateGaugeValue"*/;
              }
              else
              {
                v77 = 0;
              }
              if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 5 )
                goto LABEL_113;
              v48[1].klass = (BattlePointPhaseMaster_c *)v77;
              sub_1C32BC4((CGThumbnailListItem_o *)&v48[1], v77, v75, v76);
              v49 = StringLiteral_22427/*"oncomplete"*/;
              if ( StringLiteral_22427/*"oncomplete"*/ )
              {
                v49 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v48->klass->_1.element_class);
                if ( !v49 )
                  goto LABEL_114;
                v80 = StringLiteral_22427/*"oncomplete"*/;
              }
              else
              {
                v80 = 0;
              }
              if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 6 )
                goto LABEL_113;
              v48[1].monitor = (void *)v80;
              sub_1C32BC4((CGThumbnailListItem_o *)&v48[1].monitor, v80, v78, v79);
              v49 = StringLiteral_9880/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9880/*"OnCompleteGaugeValue"*/ )
              {
                v49 = sub_1C32D5C(StringLiteral_9880/*"OnCompleteGaugeValue"*/, v48->klass->_1.element_class);
                if ( !v49 )
                  goto LABEL_114;
                v83 = StringLiteral_9880/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v83 = 0;
              }
              if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 7 )
                goto LABEL_113;
              *(_QWORD *)&v48[1].fields._MasterKind_k__BackingField = v83;
              sub_1C32BC4((CGThumbnailListItem_o *)&v48[1].fields, v83, v81, v82);
              v49 = StringLiteral_22428/*"oncompleteparams"*/;
              if ( StringLiteral_22428/*"oncompleteparams"*/ )
              {
                v49 = sub_1C32D5C(StringLiteral_22428/*"oncompleteparams"*/, v48->klass->_1.element_class);
                if ( !v49 )
                  goto LABEL_114;
                v86 = StringLiteral_22428/*"oncompleteparams"*/;
              }
              else
              {
                v86 = 0;
              }
              if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 8 )
                goto LABEL_113;
              v48[1].fields._MasterName_k__BackingField = (struct System_String_o *)v86;
              sub_1C32BC4((CGThumbnailListItem_o *)&v48[1].fields._MasterName_k__BackingField, v86, v84, v85);
              v115 = currentPointValue;
              v49 = j_il2cpp_value_box_0(int_TypeInfo, &v115, v87, v88, v89, v90, v91, v92);
              v95 = v49;
              if ( !v49 || (v49 = sub_1C32D5C(v49, v48->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 9 )
                  goto LABEL_113;
                *(_QWORD *)&v48[1].fields.revision = v95;
                sub_1C32BC4((CGThumbnailListItem_o *)&v48[1].fields.revision, v95, v93, v94);
                v49 = StringLiteral_24067/*"time"*/;
                if ( StringLiteral_24067/*"time"*/ )
                {
                  v49 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v48->klass->_1.element_class);
                  if ( !v49 )
                    goto LABEL_114;
                  v98 = StringLiteral_24067/*"time"*/;
                }
                else
                {
                  v98 = 0;
                }
                if ( LODWORD(v48->fields._MasterName_k__BackingField) <= 0xA )
                  goto LABEL_113;
                v48[1].fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v98;
                sub_1C32BC4((CGThumbnailListItem_o *)&v48[1].fields.list, v98, v96, v97);
                v114 = (float)(repeatInterval * (float)v14) / v38;
                v49 = j_il2cpp_value_box_0(float_TypeInfo, &v114, v99, v100, v101, v102, v103, v104);
                v107 = v49;
                if ( !v49 || (v49 = sub_1C32D5C(v49, v48->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v48->fields._MasterName_k__BackingField) > 0xB )
                  {
                    v48[1].fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v107;
                    sub_1C32BC4((CGThumbnailListItem_o *)&v48[1].fields._lookup, v107, v105, v106);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v108 = iTween__Hash((System_Object_array *)v48, 0);
                    iTween__ValueTo(gameObject, v108, 0);
                    v110 = this->fields.setting;
                    if ( v110 )
                    {
                      v111 = v110->fields.effect;
                      if ( v111 )
                      {
                        v112 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                 v111->fields.effectSeName,
                                 v14,
                                 repeatInterval / v38,
                                 v109);
                        UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v112, 0);
                        return;
                      }
                    }
LABEL_112:
                    sub_1C32E7C(battlePointPhaseMaster);
                  }
LABEL_113:
                  sub_1C32E84(v49);
                }
              }
            }
          }
LABEL_114:
          v113 = sub_1C32EA0(v49);
          sub_1C32D48(v113, 0);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v12; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3AFBC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_string__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_1C32C20(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_4C3AFBC = 1;
  }
  effectPrefab = 0;
  v5 = sub_1C32E6C(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v9) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v5 + 24);
    v10 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object__51812484(
            v10,
            stepUpEffectRootTransform,
            (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v12 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v14 = (System_Action_object__o *)sub_1C32E6C(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v14;
          sub_1C32BC4((CGThumbnailListItem_o *)&Component_object[12], (int32_t)v14, v15, v16);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
          return;
        }
LABEL_17:
        sub_1C32E7C(setting);
      }
    }
  }
}


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
    sub_1C32E7C(barMaskPanel);
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
    sub_1C32E7C(barMaskPanel);
  }
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0);
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  TweenPosition__Begin(v5, 0.3, v6, 0);
}


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
    sub_1C32E7C(battlePointPhaseMaster);
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


void BattlePointGaugeComponent__UpdateBattlePointImmediately(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  const MethodInfo *v6; // x2
  UISprite_o *phase; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  int32_t firstPhaseInTween; // w8
  int32_t v11; // w9
  BattlePointPhaseEntity_o *v12; // x1
  int32_t effectId; // w8
  UISprite_o *step; // x21
  BattlePointGaugeComponent_c *klass; // x8
  float v16; // s0
  int32_t v17; // w20
  BattlePointPhaseEntity_o *v18; // [xsp+0h] [xbp-30h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v18 = 0;
  entity = 0;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         currentPointValue,
                                                         &entity,
                                                         0);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    return;
  this->fields.beforePointValue = currentPointValue;
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
    v11 = entity->fields.phase;
    if ( firstPhaseInTween != v11 && this->fields.lastUpPhaseInTween != v11 )
      BattlePointGaugeComponent__PlayPhaseAnimation(this, v8);
  }
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  v12 = entity;
  if ( !entity )
LABEL_29:
    sub_1C32E7C(battlePointPhaseMaster);
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
                                                           v9);
    if ( !step )
      goto LABEL_29;
    UISprite__set_spriteName(step, (System_String_o *)battlePointPhaseMaster, 0);
    v12 = entity;
  }
  klass = this->klass;
  this->fields.lastStepUpEffectIdInTween = -1;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, BattlePointPhaseEntity_o *, const MethodInfo *))klass->vtable._5_UpdateProgressGauge.methodPtr)(
                                                         this,
                                                         v12,
                                                         klass->vtable._5_UpdateProgressGauge.method);
  if ( !entity )
    goto LABEL_29;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntity(
                                                         battlePointPhaseMaster,
                                                         &v18,
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
      v17 = entity->fields.phase;
      if ( v17 != BattlePointPhaseMaster__GetMaxPhase(battlePointPhaseMaster, this->fields.battlePointId, 0) )
        return;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
      if ( battlePointPhaseMaster )
      {
        v16 = 1.0;
        goto LABEL_27;
      }
    }
    goto LABEL_29;
  }
  if ( !v18 )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  v16 = (float)(currentPointValue - entity->fields.value) / (float)(v18->fields.value - entity->fields.value);
LABEL_27:
  UIProgressBar__set_value((UIProgressBar_o *)battlePointPhaseMaster, v16, 0);
}


void BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  struct BattlePointPhaseEntity_o **p_beforeEntity; // x22
  int32_t v7; // w23
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x1
  BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  BattlePointGaugeComponent_o *v10; // x19
  float v11; // s0
  const MethodInfo *v12; // x2
  struct BattlePointPhaseEntity_o *v13; // x8
  UISprite_o *phase; // x24
  const MethodInfo *v15; // x1
  struct BattlePointPhaseEntity_o *v16; // x1
  BattlePointGaugeComponent_c *klass; // x9
  const MethodInfo *v18; // x2
  struct BattlePointPhaseEntity_o *v19; // x8
  struct BattlePointPhaseEntity_o *v20; // x8
  int32_t v21; // w20

  p_beforeEntity = &this->fields.beforeEntity;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_25;
  v7 = beforeEntity->fields.value;
  p_beforeNextEntity = &this->fields.beforeNextEntity;
  beforeNextEntity = this->fields.beforeNextEntity;
  v10 = this;
  if ( !beforeNextEntity )
    goto LABEL_25;
  v11 = (float)(value - v7) / (float)(beforeNextEntity->fields.value - v7);
  if ( v11 <= 1.0 )
    goto LABEL_18;
  this->fields.beforeEntity = beforeNextEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.beforeEntity, (int32_t)beforeNextEntity, (int32_t)method, v3);
  v13 = v10->fields.beforeEntity;
  if ( !v13 )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)v10->fields.setting;
  if ( !this )
    goto LABEL_25;
  phase = v10->fields.phase;
  this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                          (BattlePointGaugeSetting_o *)this,
                                          v13->fields.phase,
                                          v12);
  if ( !phase )
    goto LABEL_25;
  UISprite__set_spriteName(phase, (System_String_o *)this, 0);
  BattlePointGaugeComponent__PlayPhaseAnimation(v10, v15);
  v16 = v10->fields.beforeEntity;
  if ( !v16 )
    goto LABEL_25;
  klass = v10->klass;
  v10->fields.lastUpPhaseInTween = v16->fields.phase;
  ((void (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._5_UpdateProgressGauge.methodPtr)(v10);
  this = (BattlePointGaugeComponent_o *)v10->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v10->fields.battlePointId,
                                          v7,
                                          value,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    BattlePointGaugeComponent__ShowStepUpEffect(v10, (*p_beforeNextEntity)->fields.effectId, v18);
  }
  v19 = v10->fields.beforeEntity;
  if ( !v19
    || (this = (BattlePointGaugeComponent_o *)v10->fields.battlePointPhaseMaster) == 0
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                p_beforeNextEntity,
                                                v10->fields.battlePointId,
                                                v19->fields.phase + 1,
                                                0),
        (v20 = *p_beforeEntity) == 0) )
  {
LABEL_25:
    sub_1C32E7C(this);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    v11 = (float)(value - v20->fields.value) / (float)((*p_beforeNextEntity)->fields.value - v20->fields.value);
LABEL_18:
    this = (BattlePointGaugeComponent_o *)v10->fields.gaugeFrontProgressBar;
    if ( this )
    {
LABEL_19:
      UIProgressBar__set_value((UIProgressBar_o *)this, v11, 0);
      return;
    }
    goto LABEL_25;
  }
  this = (BattlePointGaugeComponent_o *)v10->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  v21 = v20->fields.phase;
  if ( v21 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v10->fields.battlePointId, 0) )
  {
    this = (BattlePointGaugeComponent_o *)v10->fields.gaugeFrontProgressBar;
    if ( this )
    {
      v11 = 1.0;
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
    sub_1C32E7C(0);
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
  const MethodInfo *v8; // x3
  float deltaTime; // s0
  float waitSecond; // s1
  float v11; // s0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4C3AFBE & 1) == 0 )
  {
    sub_1C32C20(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_4C3AFBE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    waitSecond = this->fields.waitSecond;
    v11 = elapsed_5__3 + deltaTime;
    this->fields._elapsed_5__3 = v11;
    if ( v11 < waitSecond )
    {
LABEL_15:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C32BC4((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    count_5__2 = this->fields._count_5__2;
    do
    {
      v11 = v11 - waitSecond;
      --count_5__2;
    }
    while ( waitSecond <= v11 );
    this->fields._elapsed_5__3 = v11;
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
    v12 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C32C38(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C32C04(v12, v12[4]);
    OverwriteAssetSoundName__PlaySeContinue(v13, this->fields.seName, 0, 0);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v6; // x2
  struct BattlePointGaugeComponent_o *_4__this; // x8
  UISprite_o *step; // x20

  if ( (byte_4C3AFBD & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12818/*"SetStepSprite"*/);
    byte_4C3AFBD = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12818/*"SetStepSprite"*/,
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
                                                   v6),
          !step) )
    {
      sub_1C32E7C(setting);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0);
  }
}