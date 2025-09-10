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

  if ( (byte_4C2A89B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_AnimationState_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C2D490(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A89B = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.methodPtr)(
    this,
    this->klass->vtable._4_ValidateSerializedField.method,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battlePointPhaseMaster, (int32_t)Master_object, v6, v7);
  this->fields.battlePointId = inBattlePointId;
  BattlePointGaugeComponent__StartClose(this, 1, v8);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_38;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.phaseAnimationComponent, (int32_t)Component_object, v13, v14);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0, 0) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_38:
    sub_1C2D6EC(phase, v9);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
  v18 = Enumerator;
  if ( !Enumerator )
    sub_1C2D6EC(0, v17);
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
    v22 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v26 = sub_1C7DCA8(v18, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v27 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                            v18,
                                            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_1C2D6EC(0, v28);
    if ( v27->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C2D9AC(v27);
      if ( v40 != 1 )
      {
        v41 = sub_1C2D5CC(v18, System_IDisposable_TypeInfo);
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
            v46 = sub_1C7DCA8(v41, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
        }
        sub_1D165C4();
      }
      v32 = *(_QWORD *)__cxa_begin_catch(v39);
      __cxa_end_catch();
      goto LABEL_28;
    }
    name = UnityEngine_AnimationState__get_name(v27, 0);
    this->fields.phaseAnimationName = name;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.phaseAnimationName, (int32_t)name, v30, v31);
  }
  v32 = 0;
LABEL_28:
  v33 = sub_1C2D5CC(v18, System_IDisposable_TypeInfo);
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
      v38 = sub_1C7DCA8(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
  }
  if ( v32 )
    sub_1C2D6E4(v32);
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
    sub_1C2D6EC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void BattlePointGaugeComponent__PlayPhaseAnimation(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_4C2A89C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A89C = 1;
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
      UnityEngine_Animation__Play_70908988(v5, this->fields.phaseAnimationName, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(v5, v4);
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

  if ( (byte_4C2A89E & 1) == 0 )
  {
    sub_1C2D490(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_4C2A89E = 1;
  }
  v7 = sub_1C2D6DC(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)seName, v8, v9);
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
  Il2CppObject *ComponentInChildren_object__51536504; // x23
  Il2CppObject *Component_object; // x22
  struct BattlePointGaugeSetting_o *v29; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v30; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v33; // s8
  float v34; // s8
  float v35; // s0
  UnityEngine_ParticleSystem_MainModule_o v36; // x0
  float v37; // s8
  UnityEngine_ParticleSystem_EmissionModule_o v38; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v39; // x0
  float repeatInterval; // s9
  UnityEngine_ParticleSystem_EmissionModule_o v41; // x0
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int32_t v43; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v45; // x2
  const MethodInfo *v46; // x3
  BattlePointPhaseMaster_o *v47; // x23
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  const MethodInfo *v53; // x3
  __int64 v54; // x24
  const MethodInfo *v55; // x3
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  const MethodInfo *v59; // x3
  __int64 v60; // x24
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  const MethodInfo *v69; // x3
  __int64 v70; // x20
  const MethodInfo *v71; // x3
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  const MethodInfo *v75; // x3
  __int64 v76; // x20
  System_Collections_Hashtable_o *v77; // x0
  const MethodInfo *v78; // x2
  struct BattlePointGaugeSetting_o *v79; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v80; // x8
  System_Collections_IEnumerator_o *v81; // x0
  __int64 v82; // x0
  float v83; // [xsp+4h] [xbp-12Ch] BYREF
  int32_t v84; // [xsp+8h] [xbp-128h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v86; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v87; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v88; // [xsp+80h] [xbp-B0h] BYREF
  BattlePointPhaseMaster_o *v89; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF

  v3 = currentPointValue;
  if ( (byte_4C2A89D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____78064632);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&System_MathF_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_15186/*"UpdateGaugeValue"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22411/*"oncompleteparams"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_9875/*"OnCompleteGaugeValue"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A89D = 1;
  }
  m_ParticleSystem = 0;
  entity = 0;
  v89 = 0;
  memset(&v88, 0, sizeof(v88));
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
    v26 = UnityEngine_Object__Instantiate_object__51752420(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)v26,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v26 )
        goto LABEL_112;
      ComponentInChildren_object__51536504 = UnityEngine_GameObject__GetComponentInChildren_object__51536504(
                                               (UnityEngine_GameObject_o *)v26,
                                               1,
                                               (const MethodInfo_3126278 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____78064632);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v26,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__51536504, 0, 0) )
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
          if ( !ComponentInChildren_object__51536504 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__51536504,
                               0).fields.m_ParticleSystem;
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_ParticleSystem__get_emission(
                                                                 (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__51536504,
                                                                 0).fields.m_ParticleSystem;
          v89 = battlePointPhaseMaster;
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
          if ( !byte_4C2A8F3 )
          {
            sub_1C2D490(&System_Math_TypeInfo);
            byte_4C2A8F3 = 1;
          }
          v34 = v33 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v35 = System_Math__Max_64982080(1.0, v34, 0);
          v36.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v37 = v35;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v36, v35, 0);
          v38.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v89;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v38, 0) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v89;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v87, v39, 0, 0);
            v88 = v87;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v88, 0);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v88, v13, 0);
            v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v89;
            v86 = v88;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v41, 0, &v86, 0);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v43 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v43;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          battlePointPhaseMaster = (BattlePointPhaseMaster_o *)sub_1C2D538(object___TypeInfo, 12);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v47 = battlePointPhaseMaster;
          v48 = StringLiteral_19677/*"from"*/;
          if ( StringLiteral_19677/*"from"*/ )
          {
            v48 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v47->klass->_1.element_class);
            if ( !v48 )
              goto LABEL_114;
            v49 = StringLiteral_19677/*"from"*/;
          }
          else
          {
            v49 = 0;
          }
          if ( !LODWORD(v47->fields._MasterName_k__BackingField) )
            goto LABEL_113;
          *(_QWORD *)&v47->fields.revision = v49;
          sub_1C2D434((CGThumbnailListItem_o *)&v47->fields.revision, v49, v45, v46);
          LODWORD(v87.fields.m_Time) = this->fields.beforePointValue;
          v48 = j_il2cpp_value_box_0(int_TypeInfo, &v87, v50, v51, v52);
          v54 = v48;
          if ( !v48 || (v48 = sub_1C2D5CC(v48, v47->klass->_1.element_class)) != 0 )
          {
            if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 1 )
              goto LABEL_113;
            v47->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v54;
            sub_1C2D434((CGThumbnailListItem_o *)&v47->fields.list, v54, v45, v53);
            v48 = StringLiteral_24088/*"to"*/;
            if ( StringLiteral_24088/*"to"*/ )
            {
              v48 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v47->klass->_1.element_class);
              if ( !v48 )
                goto LABEL_114;
              v49 = StringLiteral_24088/*"to"*/;
            }
            else
            {
              v49 = 0;
            }
            if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 2 )
              goto LABEL_113;
            v47->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v49;
            sub_1C2D434((CGThumbnailListItem_o *)&v47->fields._lookup, v49, v45, v55);
            v85 = v3;
            v48 = j_il2cpp_value_box_0(int_TypeInfo, &v85, v56, v57, v58);
            v60 = v48;
            if ( !v48 || (v48 = sub_1C2D5CC(v48, v47->klass->_1.element_class)) != 0 )
            {
              if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 3 )
                goto LABEL_113;
              v47->fields.seriazlier = (struct MiniMessagePack_MiniMessagePacker_o *)v60;
              sub_1C2D434((CGThumbnailListItem_o *)&v47->fields.seriazlier, v60, v45, v59);
              v48 = StringLiteral_22418/*"onupdate"*/;
              if ( StringLiteral_22418/*"onupdate"*/ )
              {
                v48 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v47->klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_22418/*"onupdate"*/;
              }
              else
              {
                v49 = 0;
              }
              if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 4 )
                goto LABEL_113;
              v47->fields.sb = (struct System_Text_StringBuilder_o *)v49;
              sub_1C2D434((CGThumbnailListItem_o *)&v47->fields.sb, v49, v45, v61);
              v48 = StringLiteral_15186/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15186/*"UpdateGaugeValue"*/ )
              {
                v48 = sub_1C2D5CC(StringLiteral_15186/*"UpdateGaugeValue"*/, v47->klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_15186/*"UpdateGaugeValue"*/;
              }
              else
              {
                v49 = 0;
              }
              if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 5 )
                goto LABEL_113;
              v47[1].klass = (BattlePointPhaseMaster_c *)v49;
              sub_1C2D434((CGThumbnailListItem_o *)&v47[1], v49, v45, v62);
              v48 = StringLiteral_22410/*"oncomplete"*/;
              if ( StringLiteral_22410/*"oncomplete"*/ )
              {
                v48 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v47->klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_22410/*"oncomplete"*/;
              }
              else
              {
                v49 = 0;
              }
              if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 6 )
                goto LABEL_113;
              v47[1].monitor = (void *)v49;
              sub_1C2D434((CGThumbnailListItem_o *)&v47[1].monitor, v49, v45, v63);
              v48 = StringLiteral_9875/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9875/*"OnCompleteGaugeValue"*/ )
              {
                v48 = sub_1C2D5CC(StringLiteral_9875/*"OnCompleteGaugeValue"*/, v47->klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_9875/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v49 = 0;
              }
              if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 7 )
                goto LABEL_113;
              *(_QWORD *)&v47[1].fields._MasterKind_k__BackingField = v49;
              sub_1C2D434((CGThumbnailListItem_o *)&v47[1].fields, v49, v45, v64);
              v48 = StringLiteral_22411/*"oncompleteparams"*/;
              if ( StringLiteral_22411/*"oncompleteparams"*/ )
              {
                v48 = sub_1C2D5CC(StringLiteral_22411/*"oncompleteparams"*/, v47->klass->_1.element_class);
                if ( !v48 )
                  goto LABEL_114;
                v49 = StringLiteral_22411/*"oncompleteparams"*/;
              }
              else
              {
                v49 = 0;
              }
              if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 8 )
                goto LABEL_113;
              v47[1].fields._MasterName_k__BackingField = (struct System_String_o *)v49;
              sub_1C2D434((CGThumbnailListItem_o *)&v47[1].fields._MasterName_k__BackingField, v49, v45, v65);
              v84 = v3;
              v48 = j_il2cpp_value_box_0(int_TypeInfo, &v84, v66, v67, v68);
              v70 = v48;
              if ( !v48 || (v48 = sub_1C2D5CC(v48, v47->klass->_1.element_class)) != 0 )
              {
                if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 9 )
                  goto LABEL_113;
                *(_QWORD *)&v47[1].fields.revision = v70;
                sub_1C2D434((CGThumbnailListItem_o *)&v47[1].fields.revision, v70, v45, v69);
                v48 = StringLiteral_24049/*"time"*/;
                if ( StringLiteral_24049/*"time"*/ )
                {
                  v48 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v47->klass->_1.element_class);
                  if ( !v48 )
                    goto LABEL_114;
                  v49 = StringLiteral_24049/*"time"*/;
                }
                else
                {
                  v49 = 0;
                }
                if ( LODWORD(v47->fields._MasterName_k__BackingField) <= 0xA )
                  goto LABEL_113;
                v47[1].fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v49;
                sub_1C2D434((CGThumbnailListItem_o *)&v47[1].fields.list, v49, v45, v71);
                v83 = (float)(repeatInterval * (float)v13) / v37;
                v48 = j_il2cpp_value_box_0(float_TypeInfo, &v83, v72, v73, v74);
                v76 = v48;
                if ( !v48 || (v48 = sub_1C2D5CC(v48, v47->klass->_1.element_class)) != 0 )
                {
                  if ( LODWORD(v47->fields._MasterName_k__BackingField) > 0xB )
                  {
                    v47[1].fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v76;
                    sub_1C2D434((CGThumbnailListItem_o *)&v47[1].fields._lookup, v76, v45, v75);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v77 = iTween__Hash((System_Object_array *)v47, 0);
                    iTween__ValueTo(gameObject, v77, 0);
                    v79 = this->fields.setting;
                    if ( v79 )
                    {
                      v80 = v79->fields.effect;
                      if ( v80 )
                      {
                        v81 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                v80->fields.effectSeName,
                                v13,
                                repeatInterval / v37,
                                v78);
                        UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v81, 0);
                        return;
                      }
                    }
LABEL_112:
                    sub_1C2D6EC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1C2D6F4(v48, v49, v45);
                }
              }
            }
          }
LABEL_114:
          v82 = sub_1C2D710(v48);
          sub_1C2D5B8(v82, 0);
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
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v13; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A89F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_1C2D490(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_4C2A89F = 1;
  }
  effectPrefab = 0;
  v5 = sub_1C2D6DC(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v10) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v5 + 24);
    v11 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__51752420(
            v11,
            stepUpEffectRootTransform,
            (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v13 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v13,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v15 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v15;
          sub_1C2D434((CGThumbnailListItem_o *)&Component_object[12], (int32_t)v15, v16, v17);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
          return;
        }
LABEL_17:
        sub_1C2D6EC(setting, v7);
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
    sub_1C2D6EC(barMaskPanel, immediately);
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
    sub_1C2D6EC(barMaskPanel, method);
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
    sub_1C2D6EC(battlePointPhaseMaster, *(_QWORD *)&value);
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
    sub_1C2D6EC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
  const MethodInfo *v3; // x3
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  struct BattlePointPhaseEntity_o **p_beforeEntity; // x22
  int32_t v6; // w20
  int32_t v7; // w23
  BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  BattlePointGaugeComponent_o *v9; // x19
  float v10; // s0
  const MethodInfo *v11; // x2
  struct BattlePointPhaseEntity_o *v12; // x8
  UISprite_o *phase; // x24
  const MethodInfo *v14; // x1
  BattlePointGaugeComponent_c *klass; // x9
  const MethodInfo *v16; // x2
  struct BattlePointPhaseEntity_o *v17; // x8
  struct BattlePointPhaseEntity_o *v18; // x8
  int32_t v19; // w20

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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.beforeEntity, value, (int32_t)method, v3);
  v12 = v9->fields.beforeEntity;
  if ( !v12 )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)v9->fields.setting;
  if ( !this )
    goto LABEL_25;
  phase = v9->fields.phase;
  this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                          (BattlePointGaugeSetting_o *)this,
                                          v12->fields.phase,
                                          v11);
  if ( !phase )
    goto LABEL_25;
  UISprite__set_spriteName(phase, (System_String_o *)this, 0);
  BattlePointGaugeComponent__PlayPhaseAnimation(v9, v14);
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
    BattlePointGaugeComponent__ShowStepUpEffect(v9, (*p_beforeNextEntity)->fields.effectId, v16);
  }
  v17 = v9->fields.beforeEntity;
  if ( !v17
    || (this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster) == 0
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                p_beforeNextEntity,
                                                v9->fields.battlePointId,
                                                v17->fields.phase + 1,
                                                0),
        (v18 = *p_beforeEntity) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(this, *(_QWORD *)&value);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    v10 = (float)(v6 - v18->fields.value) / (float)((*p_beforeNextEntity)->fields.value - v18->fields.value);
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
  v19 = v18->fields.phase;
  if ( v19 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v9->fields.battlePointId, 0) )
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
    sub_1C2D6EC(0, method);
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

  if ( (byte_4C2A8A1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_4C2A8A1 = 1;
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
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
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
      v12 = (_QWORD *)sub_1C2D4A8(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C2D474(v12, v12[4]);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C2A8A0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12814/*"SetStepSprite"*/);
    byte_4C2A8A0 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12814/*"SetStepSprite"*/,
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
      sub_1C2D6EC(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0);
  }
}