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
  __int64 v9; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v17; // x1
  System_Collections_IEnumerator_o *v18; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  System_Collections_IEnumerator_c *v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_AnimationState_o *v27; // x0
  __int64 v28; // x1
  struct System_String_o *name; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x19
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x20
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  void *v39; // x0
  int v40; // w1
  __int64 v41; // x0
  __int64 v42; // x20
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4C5A3C3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_AnimationState_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C3E564(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A3C3 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.methodPtr)(
    this,
    this->klass->vtable._4_ValidateSerializedField.method,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.battlePointPhaseMaster, (int32_t)Master_object, v6, v7);
  this->fields.battlePointId = inBattlePointId;
  BattlePointGaugeComponent__StartClose(this, 1, v8);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.phaseAnimationComponent, (int32_t)Component_object, v13, v14);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0, 0) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_38:
    sub_1C3E7C0(phase, v9);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
  v18 = Enumerator;
  if ( !Enumerator )
    sub_1C3E7C0(0, v17);
  klass = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_15;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v22 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) != 0 )
  {
    v23 = v18->klass;
    v24 = *(unsigned __int16 *)&v18->klass->_2.rank;
    if ( *(_WORD *)&v18->klass->_2.rank )
    {
      v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_22;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1];
    }
    else
    {
LABEL_22:
      v26 = sub_1C8ED7C(v18, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v27 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                            v18,
                                            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_1C3E7C0(0, v28);
    if ( v27->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C3EA80(v27);
      if ( v40 != 1 )
      {
        v41 = sub_1C3E6A0(v18, System_IDisposable_TypeInfo);
        v42 = v41;
        if ( v41 )
        {
          v43 = *(_QWORD *)v41;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
          {
            v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_49;
            }
            v46 = v43 + 16LL * *v45 + 312;
          }
          else
          {
LABEL_49:
            v46 = sub_1C8ED7C(v41, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
        }
        sub_1D27698();
      }
      v32 = *(_QWORD *)__cxa_begin_catch(v39);
      __cxa_end_catch();
      goto LABEL_28;
    }
    name = UnityEngine_AnimationState__get_name(v27, 0);
    this->fields.phaseAnimationName = name;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.phaseAnimationName, (int32_t)name, v30, v31);
  }
  v32 = 0;
LABEL_28:
  v33 = sub_1C3E6A0(v18, System_IDisposable_TypeInfo);
  if ( v33 )
  {
    v34 = *(_QWORD *)v33;
    v35 = v33;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_33;
      }
      v38 = v34 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_33:
      v38 = sub_1C8ED7C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  }
  if ( v32 )
    sub_1C3E7B8(v32);
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
    sub_1C3E7C0(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void BattlePointGaugeComponent__PlayPhaseAnimation(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_4C5A3C4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5A3C4 = 1;
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
      UnityEngine_Animation__Play_71086848(v5, this->fields.phaseAnimationName, 0);
      return;
    }
LABEL_14:
    sub_1C3E7C0(v5, v4);
  }
}


System_Collections_IEnumerator_o *BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5A3C6 & 1) == 0 )
  {
    sub_1C3E564(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_4C5A3C6 = 1;
  }
  v7 = sub_1C3E7B0(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  BattlePointGaugeComponent__PlaySeInEffectTiming_d__31___ctor(
    (BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_QWORD *)(v7 + 32) = seName;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)seName, v10, v11);
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
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  struct BattlePointPhaseEntity_o *beforeEntity; // x21
  BattlePointPhaseEntity_o *v7; // x22
  int32_t phase; // w8
  int32_t v9; // w9
  int v10; // w23
  int v11; // w25
  BattlePointPhaseMaster_o *v12; // x21
  int32_t beforePointValue; // w23
  int EffectNum; // w21
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  BattlePointPhaseMaster_o *v16; // x22
  int32_t value; // w23
  int32_t v18; // w26
  BattlePointPhaseEntity_o *v19; // x21
  int v20; // w22
  BattlePointPhaseMaster_o *v21; // x23
  int32_t v22; // w26
  UnityEngine_GameObject_o *PointEffectPrefab; // x0
  UnityEngine_Transform_o *pointEffectRootTransform; // x22
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x22
  Il2CppObject *ComponentInChildren_object__51713140; // x23
  Il2CppObject *Component_object; // x22
  int v29; // w23
  float PointEffectSpeedUpCoefficient; // s8
  float v31; // s8
  float v32; // s8
  float v33; // s0
  UnityEngine_ParticleSystem_MainModule_o v34; // x0
  float v35; // s8
  UnityEngine_ParticleSystem_EmissionModule_o v36; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v37; // x0
  float repeatInterval; // s9
  UnityEngine_ParticleSystem_EmissionModule_o v39; // x0
  struct BattlePointPhaseEntity_o *v40; // x8
  int32_t v41; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  BattlePointPhaseMaster_o *v45; // x23
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x5
  __int64 v52; // x6
  __int64 v53; // x7
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x24
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x24
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  __int64 v81; // x5
  __int64 v82; // x6
  __int64 v83; // x7
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  __int64 v86; // x20
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  __int64 v89; // x2
  __int64 v90; // x3
  __int64 v91; // x4
  __int64 v92; // x5
  __int64 v93; // x6
  __int64 v94; // x7
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // x20
  System_Collections_Hashtable_o *v98; // x0
  System_String_o *EffectSeName; // x0
  const MethodInfo *v100; // x2
  System_Collections_IEnumerator_o *v101; // x0
  __int64 v102; // x0
  float v103; // [xsp+4h] [xbp-13Ch] BYREF
  int32_t v104; // [xsp+8h] [xbp-138h] BYREF
  int32_t v105; // [xsp+Ch] [xbp-134h] BYREF
  UnityEngine_ParticleSystem_Burst_o v106; // [xsp+10h] [xbp-130h] BYREF
  UnityEngine_ParticleSystem_Burst_o v107; // [xsp+48h] [xbp-F8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v108; // [xsp+80h] [xbp-C0h] BYREF
  struct UnityEngine_ParticleSystem_o *v109; // [xsp+B8h] [xbp-88h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-80h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-78h] BYREF

  if ( (byte_4C5A3C5 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____78255936);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&System_MathF_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_15199/*"UpdateGaugeValue"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22449/*"oncompleteparams"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_9881/*"OnCompleteGaugeValue"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C5A3C5 = 1;
  }
  m_ParticleSystem = 0;
  entity = 0;
  v109 = 0;
  memset(&v108, 0, sizeof(v108));
  if ( this->fields.beforePointValue != currentPointValue )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( !battlePointPhaseMaster )
      goto LABEL_106;
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                           battlePointPhaseMaster,
                                                           this->fields.battlePointId,
                                                           currentPointValue,
                                                           &entity,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
      return;
    beforeEntity = this->fields.beforeEntity;
    if ( !beforeEntity )
      goto LABEL_106;
    v7 = entity;
    if ( !entity )
      goto LABEL_106;
    phase = beforeEntity->fields.phase;
    v9 = entity->fields.phase;
    v10 = v9 - phase;
    if ( v9 <= phase )
    {
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
      if ( !battlePointPhaseMaster )
        goto LABEL_106;
      v12 = this->fields.battlePointPhaseMaster;
      beforePointValue = this->fields.beforePointValue;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__get_EffectNumPerPhase(
                                                             (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                             0);
      if ( !v12 )
        goto LABEL_106;
      EffectNum = BattlePointPhaseMaster__GetEffectNum(
                    v12,
                    v7,
                    currentPointValue - beforePointValue,
                    (int32_t)battlePointPhaseMaster,
                    0);
    }
    else
    {
      if ( v10 >= 2 )
      {
        battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
        if ( !battlePointPhaseMaster )
          goto LABEL_106;
        battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__get_EffectNumPerPhase(
                                                               (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                               0);
        beforeEntity = this->fields.beforeEntity;
        v11 = (_DWORD)battlePointPhaseMaster * (v10 - 1);
      }
      else
      {
        v11 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_106;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
      if ( !battlePointPhaseMaster )
        goto LABEL_106;
      v16 = this->fields.battlePointPhaseMaster;
      value = beforeNextEntity->fields.value;
      v18 = this->fields.beforePointValue;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__get_EffectNumPerPhase(
                                                             (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                             0);
      if ( !v16
        || (battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                                   v16,
                                                                   beforeEntity,
                                                                   value - v18,
                                                                   (int32_t)battlePointPhaseMaster,
                                                                   0),
            (v19 = entity) == 0)
        || (v20 = (int)battlePointPhaseMaster,
            (battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting) == 0)
        || (v21 = this->fields.battlePointPhaseMaster,
            v22 = entity->fields.value,
            battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__get_EffectNumPerPhase(
                                                                   (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                                   0),
            !v21) )
      {
LABEL_106:
        sub_1C3E7C0(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
      }
      EffectNum = v20
                + v11
                + BattlePointPhaseMaster__GetEffectNum(
                    v21,
                    v19,
                    currentPointValue - v22,
                    (int32_t)battlePointPhaseMaster,
                    0);
    }
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
    if ( !battlePointPhaseMaster )
      goto LABEL_106;
    PointEffectPrefab = BattlePointGaugeSetting__get_PointEffectPrefab(
                          (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                          0);
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    v25 = (Il2CppObject *)PointEffectPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__Instantiate_object__51929056(
            v25,
            pointEffectRootTransform,
            (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)v26,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v26 )
        goto LABEL_106;
      ComponentInChildren_object__51713140 = UnityEngine_GameObject__GetComponentInChildren_object__51713140(
                                               (UnityEngine_GameObject_o *)v26,
                                               1,
                                               (const MethodInfo_3151474 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____78255936);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v26,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__51713140, 0, 0) )
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
            goto LABEL_106;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0);
          if ( !ComponentInChildren_object__51713140 )
            goto LABEL_106;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__51713140,
                               0).fields.m_ParticleSystem;
          v109 = UnityEngine_ParticleSystem__get_emission(
                   (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__51713140,
                   0).fields.m_ParticleSystem;
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
          if ( !battlePointPhaseMaster )
            goto LABEL_106;
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__get_PointEffectSpeedUpBorderEffectNum(
                                                                 (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                                 0);
          if ( !this->fields.setting )
            goto LABEL_106;
          v29 = (int)battlePointPhaseMaster;
          PointEffectSpeedUpCoefficient = BattlePointGaugeSetting__get_PointEffectSpeedUpCoefficient(
                                            this->fields.setting,
                                            0);
          if ( !System_MathF_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
          v31 = PointEffectSpeedUpCoefficient * (float)(EffectNum - v29);
          if ( !byte_4C59076 )
          {
            sub_1C3E564(&System_Math_TypeInfo);
            byte_4C59076 = 1;
          }
          v32 = v31 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v33 = System_Math__Max_65159940(1.0, v32, 0);
          v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v35 = v33;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v34, v33, 0);
          v36.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v109;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v36, 0) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v109;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v107, v37, 0, 0);
            v108 = v107;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v108, 0);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v108, EffectNum, 0);
            v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v109;
            v106 = v108;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v39, 0, &v106, 0);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0);
          v40 = this->fields.beforeEntity;
          if ( !v40 )
            goto LABEL_106;
          v41 = v40->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v41;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)sub_1C3E60C(object___TypeInfo, 12);
          if ( !battlePointPhaseMaster )
            goto LABEL_106;
          v45 = battlePointPhaseMaster;
          v46 = StringLiteral_19710/*"from"*/;
          if ( StringLiteral_19710/*"from"*/ )
          {
            v46 = sub_1C3E6A0(StringLiteral_19710/*"from"*/, v45->klass->_1.element_class);
            if ( !v46 )
              goto LABEL_108;
            v47 = StringLiteral_19710/*"from"*/;
          }
          else
          {
            v47 = 0;
          }
          if ( !LODWORD(v45->fields._MasterName_k__BackingField) )
            goto LABEL_107;
          *(_QWORD *)&v45->fields.revision = v47;
          sub_1C3E508((CGThumbnailListItem_o *)&v45->fields.revision, v47, v43, v44);
          LODWORD(v107.fields.m_Time) = this->fields.beforePointValue;
          v46 = j_il2cpp_value_box_0(int_TypeInfo, &v107, v48, v49, v50, v51, v52, v53);
          v56 = v46;
          if ( !v46 || (v46 = sub_1C3E6A0(v46, v45->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 1 )
              goto LABEL_107;
            v45->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v56;
            sub_1C3E508((CGThumbnailListItem_o *)&v45->fields.list, v56, v54, v55);
            v46 = StringLiteral_24130/*"to"*/;
            if ( StringLiteral_24130/*"to"*/ )
            {
              v46 = sub_1C3E6A0(StringLiteral_24130/*"to"*/, v45->klass->_1.element_class);
              if ( !v46 )
                goto LABEL_108;
              v47 = StringLiteral_24130/*"to"*/;
            }
            else
            {
              v47 = 0;
            }
            if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 2 )
              goto LABEL_107;
            v45->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v47;
            sub_1C3E508((CGThumbnailListItem_o *)&v45->fields._lookup, v47, v57, v58);
            v105 = currentPointValue;
            v46 = j_il2cpp_value_box_0(int_TypeInfo, &v105, v59, v60, v61, v62, v63, v64);
            v67 = v46;
            if ( !v46 || (v46 = sub_1C3E6A0(v46, v45->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 3 )
                goto LABEL_107;
              v45->fields.seriazlier = (struct MiniMessagePack_MiniMessagePacker_o *)v67;
              sub_1C3E508((CGThumbnailListItem_o *)&v45->fields.seriazlier, v67, v65, v66);
              v46 = StringLiteral_22456/*"onupdate"*/;
              if ( StringLiteral_22456/*"onupdate"*/ )
              {
                v46 = sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, v45->klass->_1.element_class);
                if ( !v46 )
                  goto LABEL_108;
                v47 = StringLiteral_22456/*"onupdate"*/;
              }
              else
              {
                v47 = 0;
              }
              if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 4 )
                goto LABEL_107;
              v45->fields.sb = (struct System_Text_StringBuilder_o *)v47;
              sub_1C3E508((CGThumbnailListItem_o *)&v45->fields.sb, v47, v68, v69);
              v46 = StringLiteral_15199/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15199/*"UpdateGaugeValue"*/ )
              {
                v46 = sub_1C3E6A0(StringLiteral_15199/*"UpdateGaugeValue"*/, v45->klass->_1.element_class);
                if ( !v46 )
                  goto LABEL_108;
                v47 = StringLiteral_15199/*"UpdateGaugeValue"*/;
              }
              else
              {
                v47 = 0;
              }
              if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 5 )
                goto LABEL_107;
              v45[1].klass = (BattlePointPhaseMaster_c *)v47;
              sub_1C3E508((CGThumbnailListItem_o *)&v45[1], v47, v70, v71);
              v46 = StringLiteral_22448/*"oncomplete"*/;
              if ( StringLiteral_22448/*"oncomplete"*/ )
              {
                v46 = sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v45->klass->_1.element_class);
                if ( !v46 )
                  goto LABEL_108;
                v47 = StringLiteral_22448/*"oncomplete"*/;
              }
              else
              {
                v47 = 0;
              }
              if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 6 )
                goto LABEL_107;
              v45[1].monitor = (void *)v47;
              sub_1C3E508((CGThumbnailListItem_o *)&v45[1].monitor, v47, v72, v73);
              v46 = StringLiteral_9881/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9881/*"OnCompleteGaugeValue"*/ )
              {
                v46 = sub_1C3E6A0(StringLiteral_9881/*"OnCompleteGaugeValue"*/, v45->klass->_1.element_class);
                if ( !v46 )
                  goto LABEL_108;
                v47 = StringLiteral_9881/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v47 = 0;
              }
              if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 7 )
                goto LABEL_107;
              *(_QWORD *)&v45[1].fields._MasterKind_k__BackingField = v47;
              sub_1C3E508((CGThumbnailListItem_o *)&v45[1].fields, v47, v74, v75);
              v46 = StringLiteral_22449/*"oncompleteparams"*/;
              if ( StringLiteral_22449/*"oncompleteparams"*/ )
              {
                v46 = sub_1C3E6A0(StringLiteral_22449/*"oncompleteparams"*/, v45->klass->_1.element_class);
                if ( !v46 )
                  goto LABEL_108;
                v47 = StringLiteral_22449/*"oncompleteparams"*/;
              }
              else
              {
                v47 = 0;
              }
              if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 8 )
                goto LABEL_107;
              v45[1].fields._MasterName_k__BackingField = (struct System_String_o *)v47;
              sub_1C3E508((CGThumbnailListItem_o *)&v45[1].fields._MasterName_k__BackingField, v47, v76, v77);
              v104 = currentPointValue;
              v46 = j_il2cpp_value_box_0(int_TypeInfo, &v104, v78, v79, v80, v81, v82, v83);
              v86 = v46;
              if ( !v46 || (v46 = sub_1C3E6A0(v46, v45->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 9 )
                  goto LABEL_107;
                *(_QWORD *)&v45[1].fields.revision = v86;
                sub_1C3E508((CGThumbnailListItem_o *)&v45[1].fields.revision, v86, v84, v85);
                v46 = StringLiteral_24091/*"time"*/;
                if ( StringLiteral_24091/*"time"*/ )
                {
                  v46 = sub_1C3E6A0(StringLiteral_24091/*"time"*/, v45->klass->_1.element_class);
                  if ( !v46 )
                    goto LABEL_108;
                  v47 = StringLiteral_24091/*"time"*/;
                }
                else
                {
                  v47 = 0;
                }
                if ( LODWORD(v45->fields._MasterName_k__BackingField) <= 0xA )
                  goto LABEL_107;
                v45[1].fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v47;
                sub_1C3E508((CGThumbnailListItem_o *)&v45[1].fields.list, v47, v87, v88);
                v103 = (float)(repeatInterval * (float)EffectNum) / v35;
                v46 = j_il2cpp_value_box_0(float_TypeInfo, &v103, v89, v90, v91, v92, v93, v94);
                v97 = v46;
                if ( !v46 || (v46 = sub_1C3E6A0(v46, v45->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v45->fields._MasterName_k__BackingField) > 0xB )
                  {
                    v45[1].fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v97;
                    sub_1C3E508((CGThumbnailListItem_o *)&v45[1].fields._lookup, v97, v95, v96);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v98 = iTween__Hash((System_Object_array *)v45, 0);
                    iTween__ValueTo(gameObject, v98, 0);
                    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
                    if ( battlePointPhaseMaster )
                    {
                      EffectSeName = BattlePointGaugeSetting__get_EffectSeName(
                                       (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                       0);
                      v101 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                               EffectSeName,
                               EffectNum,
                               repeatInterval / v35,
                               v100);
                      UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v101, 0);
                      return;
                    }
                    goto LABEL_106;
                  }
LABEL_107:
                  sub_1C3E7C8(v46, v47);
                }
              }
            }
          }
LABEL_108:
          v102 = sub_1C3E7E4(v46);
          sub_1C3E68C(v102, 0);
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
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v12; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C5A3C7 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_1C3E564(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_4C5A3C7 = 1;
  }
  effectPrefab = 0;
  v5 = sub_1C3E7B0(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  BattlePointGaugeComponent___c__DisplayClass32_0___ctor((BattlePointGaugeComponent___c__DisplayClass32_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, 0) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v5 + 24);
    v10 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_object__51929056(
            v10,
            stepUpEffectRootTransform,
            (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v12 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v12,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v14 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v14;
          sub_1C3E508((CGThumbnailListItem_o *)&Component_object[12], (int32_t)v14, v15, v16);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
          return;
        }
LABEL_17:
        sub_1C3E7C0(setting, v7);
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
    sub_1C3E7C0(barMaskPanel, immediately);
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
    sub_1C3E7C0(barMaskPanel, method);
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
    sub_1C3E7C0(battlePointPhaseMaster, *(_QWORD *)&value);
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
  UISprite_o *phase; // x21
  int32_t firstPhaseInTween; // w8
  int32_t v8; // w9
  int32_t effectId; // w8
  UISprite_o *step; // x21
  BattlePointGaugeComponent_c *klass; // x8
  float v12; // s0
  int32_t v13; // w20
  BattlePointPhaseEntity_o *v14; // [xsp+0h] [xbp-30h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v14 = 0;
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
                                                         0);
  if ( !phase )
    goto LABEL_29;
  UISprite__set_spriteName(phase, (System_String_o *)battlePointPhaseMaster, 0);
  firstPhaseInTween = this->fields.firstPhaseInTween;
  if ( firstPhaseInTween != -1 )
  {
    if ( !entity )
      goto LABEL_29;
    v8 = entity->fields.phase;
    if ( firstPhaseInTween != v8 && this->fields.lastUpPhaseInTween != v8 )
      BattlePointGaugeComponent__PlayPhaseAnimation(this, *(const MethodInfo **)&currentPointValue);
  }
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  *(_QWORD *)&currentPointValue = entity;
  if ( !entity )
LABEL_29:
    sub_1C3E7C0(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
                                                           0);
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
                                                         &v14,
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
      v13 = entity->fields.phase;
      if ( v13 != BattlePointPhaseMaster__GetMaxPhase(battlePointPhaseMaster, this->fields.battlePointId, 0) )
        return;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
      if ( battlePointPhaseMaster )
      {
        v12 = 1.0;
        goto LABEL_27;
      }
    }
    goto LABEL_29;
  }
  if ( !v14 )
    goto LABEL_29;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
  if ( !battlePointPhaseMaster )
    goto LABEL_29;
  v12 = (float)(v5 - entity->fields.value) / (float)(v14->fields.value - entity->fields.value);
LABEL_27:
  UIProgressBar__set_value((UIProgressBar_o *)battlePointPhaseMaster, v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  struct BattlePointPhaseEntity_o **p_beforeEntity; // x22
  int32_t v6; // w20
  int32_t v7; // w23
  BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  BattlePointGaugeComponent_o *v9; // x19
  float v10; // s0
  struct BattlePointPhaseEntity_o *v11; // x8
  UISprite_o *phase; // x24
  const MethodInfo *v13; // x1
  BattlePointGaugeComponent_c *klass; // x9
  const MethodInfo *v15; // x2
  struct BattlePointPhaseEntity_o *v16; // x8
  struct BattlePointPhaseEntity_o *v17; // x8
  int32_t v18; // w20

  p_beforeEntity = &this->fields.beforeEntity;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_25;
  v6 = value;
  v7 = beforeEntity->fields.value;
  p_beforeNextEntity = &this->fields.beforeNextEntity;
  *(_QWORD *)&value = this->fields.beforeNextEntity;
  v9 = this;
  if ( !*(_QWORD *)&value )
    goto LABEL_25;
  v10 = (float)(v6 - v7) / (float)(*(_DWORD *)(*(_QWORD *)&value + 24LL) - v7);
  if ( v10 <= 1.0 )
    goto LABEL_18;
  this->fields.beforeEntity = *(struct BattlePointPhaseEntity_o **)&value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.beforeEntity, value, (int32_t)method, v3);
  v11 = v9->fields.beforeEntity;
  if ( !v11 )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)v9->fields.setting;
  if ( !this )
    goto LABEL_25;
  phase = v9->fields.phase;
  this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                          (BattlePointGaugeSetting_o *)this,
                                          v11->fields.phase,
                                          0);
  if ( !phase )
    goto LABEL_25;
  UISprite__set_spriteName(phase, (System_String_o *)this, 0);
  BattlePointGaugeComponent__PlayPhaseAnimation(v9, v13);
  *(_QWORD *)&value = v9->fields.beforeEntity;
  if ( !*(_QWORD *)&value )
    goto LABEL_25;
  klass = v9->klass;
  v9->fields.lastUpPhaseInTween = *(_DWORD *)(*(_QWORD *)&value + 20LL);
  ((void (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._5_UpdateProgressGauge.methodPtr)(v9);
  this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v9->fields.battlePointId,
                                          v7,
                                          v6,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    BattlePointGaugeComponent__ShowStepUpEffect(v9, (*p_beforeNextEntity)->fields.effectId, v15);
  }
  v16 = v9->fields.beforeEntity;
  if ( !v16
    || (this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster) == 0
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                p_beforeNextEntity,
                                                v9->fields.battlePointId,
                                                v16->fields.phase + 1,
                                                0),
        (v17 = *p_beforeEntity) == 0) )
  {
LABEL_25:
    sub_1C3E7C0(this, *(_QWORD *)&value);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    v10 = (float)(v6 - v17->fields.value) / (float)((*p_beforeNextEntity)->fields.value - v17->fields.value);
LABEL_18:
    this = (BattlePointGaugeComponent_o *)v9->fields.gaugeFrontProgressBar;
    if ( this )
    {
LABEL_19:
      UIProgressBar__set_value((UIProgressBar_o *)this, v10, 0);
      return;
    }
    goto LABEL_25;
  }
  this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  v18 = v17->fields.phase;
  if ( v18 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v9->fields.battlePointId, 0) )
  {
    this = (BattlePointGaugeComponent_o *)v9->fields.gaugeFrontProgressBar;
    if ( this )
    {
      v10 = 1.0;
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
    sub_1C3E7C0(0, method);
  BattlePointGaugeSetting__ValidateSerializedField(setting, 0);
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

  if ( (byte_4C5A3C9 & 1) == 0 )
  {
    sub_1C3E564(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_4C5A3C9 = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
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
      v12 = (_QWORD *)sub_1C3E57C(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C3E548(v12, v12[4]);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C5A3C8 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12827/*"SetStepSprite"*/);
    byte_4C5A3C8 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12827/*"SetStepSprite"*/,
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
      sub_1C3E7C0(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0);
  }
}