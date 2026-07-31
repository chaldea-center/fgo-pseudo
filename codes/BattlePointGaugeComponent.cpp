void BattlePointGaugeComponent___ctor(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.lastUpPhaseInTween = -1;
  *(_QWORD *)&this->fields.lastStepUpEffectIdInTween = -1;
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
  BattlePointGaugeComponent_c *klass; // x8
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v28; // x1
  System_Collections_IEnumerator_c *v29; // x8
  System_Collections_IEnumerator_o *v30; // x20
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  System_Collections_IEnumerator_o *v36; // x20
  System_Collections_IEnumerator_c *v37; // x8
  __int64 v38; // x9
  System_Collections_IEnumerator_c **v39; // x10
  __int64 v40; // x0
  UnityEngine_AnimationState_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  struct System_String_o *name; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x19
  System_Collections_IEnumerator_o **v52; // x8
  __int64 *v53; // x21
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x20
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  void *v60; // x0
  int v61; // w1
  __int64 v62; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_IEnumerator_o **v63; // [xsp+8h] [xbp-48h]
  __int64 *v64; // [xsp+10h] [xbp-40h]
  __int64 v65; // [xsp+18h] [xbp-38h] BYREF
  System_Collections_IEnumerator_o *v66; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_593BF30 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_21FFC50(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF30 = 1;
  }
  v66 = 0;
  klass = this->klass;
  v65 = 0;
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, const MethodInfo *, const MethodInfo *))klass->vtable._4_ValidateSerializedField.methodPtr)(
    this,
    klass->vtable._4_ValidateSerializedField.method,
    method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battlePointPhaseMaster,
    (int32_t)Master_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.battlePointId = inBattlePointId;
  BattlePointGaugeComponent__StartClose(this, 1, v14);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_39;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.phaseAnimationComponent,
    (int32_t)Component_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0, 0) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_39:
    sub_21FFECC(phase, v15);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0);
  v66 = Enumerator;
  v62 = 0;
  v63 = &v66;
  v64 = &v65;
  if ( !Enumerator )
    sub_21FFECC(0, v28);
  v29 = Enumerator->klass;
  v30 = Enumerator;
  v31 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    p_offset = &v29->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_15;
    }
    v33 = (__int64)&v29->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v33 = sub_2237E2C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  if ( (v34 & 1) != 0 )
  {
    v36 = v66;
    if ( !v66 )
      sub_21FFECC(v34, v35);
    v37 = v66->klass;
    v38 = *(unsigned __int16 *)&v66->klass->_2.rank;
    if ( *(_WORD *)&v66->klass->_2.rank )
    {
      v39 = (System_Collections_IEnumerator_c **)&v37->_1.interfaceOffsets->offset;
      while ( *(v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 2;
        if ( !v38 )
          goto LABEL_23;
      }
      v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 1];
    }
    else
    {
LABEL_23:
      v40 = sub_2237E2C(v66, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v41 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v40)(
                                            v36,
                                            *(_QWORD *)(v40 + 8));
    if ( !v41 )
      sub_21FFECC(0, v42);
    if ( v41->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_220024C(v41, UnityEngine_AnimationState_TypeInfo, v43);
      if ( v61 != 1 )
      {
        sub_1FE698C(&v62);
        sub_22ED31C();
      }
      v51 = *(_QWORD *)__cxa_begin_catch(v60);
      v62 = v51;
      __cxa_end_catch();
      v52 = v63;
      v53 = v64;
      goto LABEL_29;
    }
    name = UnityEngine_AnimationState__get_name(v41, 0);
    this->fields.phaseAnimationName = name;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.phaseAnimationName,
      (int32_t)name,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = 0;
  v52 = &v66;
  v53 = &v65;
LABEL_29:
  v54 = sub_21FFDA4(*v52, System_IDisposable_TypeInfo);
  *v53 = v54;
  if ( v54 )
  {
    v55 = *(_QWORD *)v54;
    v56 = v54;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_34;
      }
      v59 = v55 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_34:
      v59 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v59)(v56, *(_QWORD *)(v59 + 8));
  }
  if ( v51 )
    sub_21FFEC4(v51);
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

  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  entity = 0;
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
    sub_21FFECC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void BattlePointGaugeComponent__PlayPhaseAnimation(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0

  if ( (byte_593BF31 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF31 = 1;
  }
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      UnityEngine_Animation__Play_82865240(v5, this->fields.phaseAnimationName, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v5, v4);
  }
}


System_Collections_IEnumerator_o *BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_593BF33 & 1) == 0 )
  {
    sub_21FFC50(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_593BF33 = 1;
  }
  v7 = sub_21FFEBC(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)seName, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = effectNum;
  result = (System_Collections_IEnumerator_o *)v7;
  *(float *)(v7 + 44) = waitSecond;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__ShowAddedPointEffect(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  int32_t v3; // w20
  int32_t beforePointValue; // w8
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  int v7; // w9
  int32_t phase; // w10
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
  Il2CppObject *ComponentInChildren_object__59260240; // x23
  __int64 v29; // x1
  Il2CppObject *Component_object; // x22
  __int64 v31; // x1
  struct BattlePointGaugeSetting_o *v32; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v33; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v36; // s0
  UnityEngine_ParticleSystem_MainModule_o v37; // x0
  float v38; // s8
  UnityEngine_ParticleSystem_EmissionModule_o v39; // x0
  UnityEngine_ParticleSystem_EmissionModule_o v40; // x0
  float repeatInterval; // s9
  UnityEngine_ParticleSystem_EmissionModule_o v42; // x0
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int32_t v44; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  System_Object_array *v46; // x23
  __int64 v47; // x24
  __int64 v48; // x24
  __int64 v49; // x20
  __int64 v50; // x20
  __int64 v51; // x1
  System_Collections_Hashtable_o *v52; // x0
  const MethodInfo *v53; // x2
  struct BattlePointGaugeSetting_o *v54; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v55; // x8
  System_Collections_IEnumerator_o *v56; // x0
  float v57; // [xsp+4h] [xbp-12Ch] BYREF
  int32_t v58; // [xsp+8h] [xbp-128h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v60; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v61; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v62; // [xsp+80h] [xbp-B0h] BYREF
  BattlePointPhaseMaster_o *v63; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF

  v3 = currentPointValue;
  if ( (byte_593BF32 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____91556592);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&System_MathF_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_15766/*"UpdateGaugeValue"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23519/*"oncompleteparams"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_10269/*"OnCompleteGaugeValue"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593BF32 = 1;
  }
  beforePointValue = this->fields.beforePointValue;
  m_ParticleSystem = 0;
  entity = 0;
  v63 = 0;
  memset(&v62, 0, sizeof(v62));
  if ( beforePointValue != v3 )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( !battlePointPhaseMaster )
      goto LABEL_56;
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
      goto LABEL_56;
    v7 = *(_DWORD *)(*(_QWORD *)&currentPointValue + 20LL);
    phase = entity->fields.phase;
    v9 = __OFSUB__(phase, v7);
    v10 = phase - v7;
    if ( (v10 < 0) ^ v9 | (v10 == 0) )
    {
      setting = this->fields.setting;
      if ( !setting )
        goto LABEL_56;
      effect = setting->fields.effect;
      if ( !effect )
        goto LABEL_56;
      battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_56;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             battlePointPhaseMaster,
                                                             entity,
                                                             v3 - this->fields.beforePointValue,
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
          goto LABEL_56;
        v16 = v15->fields.effect;
        if ( !v16 )
          goto LABEL_56;
        v11 = v16->fields.effectNumPerPhase * (v10 - 1);
      }
      else
      {
        v11 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_56;
      v18 = this->fields.setting;
      if ( !v18 )
        goto LABEL_56;
      v19 = v18->fields.effect;
      if ( !v19 )
        goto LABEL_56;
      battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_56;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             battlePointPhaseMaster,
                                                             *(BattlePointPhaseEntity_o **)&currentPointValue,
                                                             beforeNextEntity->fields.value
                                                           - this->fields.beforePointValue,
                                                             v19->fields.effectNumPerPhase,
                                                             0);
      *(_QWORD *)&currentPointValue = entity;
      if ( !entity )
        goto LABEL_56;
      v20 = this->fields.setting;
      if ( !v20 )
        goto LABEL_56;
      v21 = v20->fields.effect;
      if ( !v21 || !this->fields.battlePointPhaseMaster )
        goto LABEL_56;
      v22 = (_DWORD)battlePointPhaseMaster + v11;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__GetEffectNum(
                                                             this->fields.battlePointPhaseMaster,
                                                             entity,
                                                             v3 - entity->fields.value,
                                                             v21->fields.effectNumPerPhase,
                                                             0);
      v14 = v22 + (_DWORD)battlePointPhaseMaster;
    }
    v23 = this->fields.setting;
    if ( !v23 )
      goto LABEL_56;
    v24 = v23->fields.effect;
    if ( !v24 )
      goto LABEL_56;
    pointEffectPrefab = (Il2CppObject *)v24->fields.pointEffectPrefab;
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&currentPointValue);
    v27 = UnityEngine_Object__Instantiate_object__59506996(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                           (UnityEngine_Object_o *)v27,
                                                           0,
                                                           0);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v27 )
        goto LABEL_56;
      ComponentInChildren_object__59260240 = UnityEngine_GameObject__GetComponentInChildren_object__59260240(
                                               (UnityEngine_GameObject_o *)v27,
                                               1,
                                               (const MethodInfo_3883D50 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____91556592);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v27,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__59260240, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
        battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Object__op_Equality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
        if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
        {
          if ( Component_object )
          {
            CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0);
            if ( ComponentInChildren_object__59260240 )
            {
              m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                                   (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__59260240,
                                   0).fields.m_ParticleSystem;
              battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_ParticleSystem__get_emission(
                                                                     (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__59260240,
                                                                     0).fields.m_ParticleSystem;
              v32 = this->fields.setting;
              v63 = battlePointPhaseMaster;
              if ( v32 )
              {
                v33 = v32->fields.effect;
                if ( v33 )
                {
                  pointEffectSpeedUpBorderEffectNum = v33->fields.pointEffectSpeedUpBorderEffectNum;
                  pointEffectSpeedUpCoefficient = v33->fields.pointEffectSpeedUpCoefficient;
                  if ( !*(&System_MathF_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo, *(_QWORD *)&currentPointValue);
                  v36 = sub_3420C28(
                          0,
                          1.0,
                          (float)(pointEffectSpeedUpCoefficient * (float)(v14 - pointEffectSpeedUpBorderEffectNum))
                        + 1.0);
                  v37.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
                  v38 = v36;
                  UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v37, v36, 0);
                  v39.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v63;
                  if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v39, 0) < 1 )
                  {
                    repeatInterval = 0.0;
                  }
                  else
                  {
                    v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v63;
                    UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v61, v40, 0, 0);
                    v62 = v61;
                    repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v62, 0);
                    UnityEngine_ParticleSystem_Burst__set_cycleCount(&v62, v14, 0);
                    v42.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v63;
                    v60 = v62;
                    UnityEngine_ParticleSystem_EmissionModule__SetBurst(v42, 0, &v60, 0);
                  }
                  CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0);
                  beforeEntity = this->fields.beforeEntity;
                  if ( beforeEntity )
                  {
                    v44 = beforeEntity->fields.phase;
                    this->fields.lastStepUpEffectIdInTween = -1;
                    this->fields.firstPhaseInTween = v44;
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)sub_21FFD10(object___TypeInfo, 12);
                    if ( battlePointPhaseMaster )
                    {
                      v46 = (System_Object_array *)battlePointPhaseMaster;
                      sub_1FEB8A8(battlePointPhaseMaster, StringLiteral_20581/*"from"*/);
                      sub_1FEB274(v46, 0, StringLiteral_20581/*"from"*/);
                      LODWORD(v61.fields.m_Time) = this->fields.beforePointValue;
                      v47 = j_il2cpp_value_box_0(qword_594C070, &v61);
                      sub_1FEB8A8(v46, v47);
                      sub_1FEB274(v46, 1, v47);
                      sub_1FEB8A8(v46, StringLiteral_25358/*"to"*/);
                      sub_1FEB274(v46, 2, StringLiteral_25358/*"to"*/);
                      v59 = v3;
                      v48 = j_il2cpp_value_box_0(qword_594C070, &v59);
                      sub_1FEB8A8(v46, v48);
                      sub_1FEB274(v46, 3, v48);
                      sub_1FEB8A8(v46, StringLiteral_23526/*"onupdate"*/);
                      sub_1FEB274(v46, 4, StringLiteral_23526/*"onupdate"*/);
                      sub_1FEB8A8(v46, StringLiteral_15766/*"UpdateGaugeValue"*/);
                      sub_1FEB274(v46, 5, StringLiteral_15766/*"UpdateGaugeValue"*/);
                      sub_1FEB8A8(v46, StringLiteral_23518/*"oncomplete"*/);
                      sub_1FEB274(v46, 6, StringLiteral_23518/*"oncomplete"*/);
                      sub_1FEB8A8(v46, StringLiteral_10269/*"OnCompleteGaugeValue"*/);
                      sub_1FEB274(v46, 7, StringLiteral_10269/*"OnCompleteGaugeValue"*/);
                      sub_1FEB8A8(v46, StringLiteral_23519/*"oncompleteparams"*/);
                      sub_1FEB274(v46, 8, StringLiteral_23519/*"oncompleteparams"*/);
                      v58 = v3;
                      v49 = j_il2cpp_value_box_0(qword_594C070, &v58);
                      sub_1FEB8A8(v46, v49);
                      sub_1FEB274(v46, 9, v49);
                      sub_1FEB8A8(v46, StringLiteral_25318/*"time"*/);
                      sub_1FEB274(v46, 10, StringLiteral_25318/*"time"*/);
                      v57 = (float)(repeatInterval * (float)v14) / v38;
                      v50 = j_il2cpp_value_box_0(qword_594C0A0, &v57);
                      sub_1FEB8A8(v46, v50);
                      sub_1FEB274(v46, 11, v50);
                      if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v51);
                      v52 = iTween__Hash(v46, 0);
                      iTween__ValueTo(gameObject, v52, 0);
                      v54 = this->fields.setting;
                      if ( v54 )
                      {
                        v55 = v54->fields.effect;
                        if ( v55 )
                        {
                          v56 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                  v55->fields.effectSeName,
                                  v14,
                                  repeatInterval / v38,
                                  v53);
                          UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                            (UnityEngine_MonoBehaviour_o *)this,
                            v56,
                            0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_56:
          sub_21FFECC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x3
  int32_t lastStepUpEffectIdInTween; // w8
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x22
  UnityEngine_Object_c *v19; // x0
  Il2CppObject *v20; // x20
  __int64 v21; // x1
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593BF34 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_21FFC50(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_593BF34 = 1;
  }
  effectPrefab = 0;
  v5 = sub_21FFEBC(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  lastStepUpEffectIdInTween = this->fields.lastStepUpEffectIdInTween;
  *(_DWORD *)(v5 + 24) = effectId;
  if ( lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v14) )
  {
    v17 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    v19 = UnityEngine_Object_TypeInfo;
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v5 + 24);
    if ( !*(&v19->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v19, v16);
    v20 = UnityEngine_Object__Instantiate_object__59506996(
            v17,
            stepUpEffectRootTransform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v20, 0, 0);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v20 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v20,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        v23 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v23,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v23;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&Component_object[12],
            (int32_t)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0);
          return;
        }
LABEL_17:
        sub_21FFECC(setting, v7);
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
      ((void (__fastcall *)(UIPanel_o *, const MethodInfo *, double))barMaskPanel->klass->vtable._8_set_alpha.methodPtr)(
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
    sub_21FFECC(barMaskPanel, immediately);
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
    sub_21FFECC(barMaskPanel, method);
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
    sub_21FFECC(battlePointPhaseMaster, *(_QWORD *)&value);
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
  BattlePointPhaseEntity_o *v7; // x8
  UISprite_o *phase; // x21
  const MethodInfo *v9; // x2
  int32_t firstPhaseInTween; // w8
  int32_t v11; // w9
  int32_t v12; // w8
  UISprite_o *step; // x21
  BattlePointGaugeComponent_c *klass; // x8
  float v15; // s0
  int32_t v16; // w20
  BattlePointPhaseEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  v17 = 0;
  entity = 0;
  if ( !battlePointPhaseMaster )
    goto LABEL_31;
  v5 = currentPointValue;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         currentPointValue,
                                                         &entity,
                                                         0);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    return;
  v7 = entity;
  this->fields.beforePointValue = v5;
  if ( !v7 )
    goto LABEL_31;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
  if ( !battlePointPhaseMaster )
    goto LABEL_31;
  phase = this->fields.phase;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                                         (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                         v7->fields.phase,
                                                         v6);
  if ( !phase )
    goto LABEL_31;
  UISprite__set_spriteName(phase, (System_String_o *)battlePointPhaseMaster, 0);
  firstPhaseInTween = this->fields.firstPhaseInTween;
  *(_QWORD *)&currentPointValue = entity;
  if ( firstPhaseInTween != -1 )
  {
    if ( !entity )
      goto LABEL_31;
    v11 = entity->fields.phase;
    if ( firstPhaseInTween == v11 || this->fields.lastUpPhaseInTween == v11 )
    {
      *(_QWORD *)&this->fields.firstPhaseInTween = -1;
      goto LABEL_13;
    }
    BattlePointGaugeComponent__PlayPhaseAnimation(this, (const MethodInfo *)entity);
    *(_QWORD *)&currentPointValue = entity;
  }
  *(_QWORD *)&this->fields.firstPhaseInTween = -1;
  if ( !*(_QWORD *)&currentPointValue )
    goto LABEL_31;
LABEL_13:
  v12 = *(_DWORD *)(*(_QWORD *)&currentPointValue + 40LL);
  if ( this->fields.lastStepUpEffectIdInTween != v12 )
  {
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
    if ( !battlePointPhaseMaster )
      goto LABEL_31;
    step = this->fields.step;
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                           (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                           v12,
                                                           v9);
    if ( !step )
      goto LABEL_31;
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
    goto LABEL_31;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_31;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntity(
                                                         battlePointPhaseMaster,
                                                         &v17,
                                                         this->fields.battlePointId,
                                                         entity->fields.phase + 1,
                                                         0);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
  {
    if ( entity )
    {
      battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
      if ( battlePointPhaseMaster )
      {
        v16 = entity->fields.phase;
        if ( v16 != BattlePointPhaseMaster__GetMaxPhase(battlePointPhaseMaster, this->fields.battlePointId, 0) )
          return;
        battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
        if ( battlePointPhaseMaster )
        {
          v15 = 1.0;
          goto LABEL_29;
        }
      }
    }
LABEL_31:
    sub_21FFECC(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
  if ( !entity )
    goto LABEL_31;
  if ( !v17 )
    goto LABEL_31;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
  if ( !battlePointPhaseMaster )
    goto LABEL_31;
  v15 = (float)(v5 - entity->fields.value) / (float)(v17->fields.value - entity->fields.value);
LABEL_29:
  UIProgressBar__set_value((UIProgressBar_o *)battlePointPhaseMaster, v15, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  struct BattlePointPhaseEntity_o **p_beforeEntity; // x22
  int32_t v10; // w20
  BattlePointGaugeComponent_o *v11; // x19
  BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  int32_t v13; // w23
  float v14; // s0
  const MethodInfo *v15; // x2
  struct BattlePointPhaseEntity_o *v16; // x8
  UISprite_o *phase; // x24
  const MethodInfo *v18; // x1
  void (__fastcall *methodPtr)(BattlePointGaugeComponent_o *); // x10
  const MethodInfo *v20; // x2
  struct BattlePointPhaseEntity_o *v21; // x8
  struct BattlePointPhaseEntity_o *v22; // x8
  int32_t v23; // w20

  p_beforeEntity = &this->fields.beforeEntity;
  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_26;
  v10 = value;
  v11 = this;
  p_beforeNextEntity = &this->fields.beforeNextEntity;
  *(_QWORD *)&value = this->fields.beforeNextEntity;
  if ( !*(_QWORD *)&value )
    goto LABEL_26;
  v13 = beforeEntity->fields.value;
  v14 = (float)(v10 - v13) / (float)(*(_DWORD *)(*(_QWORD *)&value + 24LL) - v13);
  if ( v14 <= 1.0 )
    goto LABEL_18;
  this->fields.beforeEntity = *(struct BattlePointPhaseEntity_o **)&value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beforeEntity,
    value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = v11->fields.beforeEntity;
  if ( !v16 )
    goto LABEL_26;
  this = (BattlePointGaugeComponent_o *)v11->fields.setting;
  if ( !this )
    goto LABEL_26;
  phase = v11->fields.phase;
  this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                          (BattlePointGaugeSetting_o *)this,
                                          v16->fields.phase,
                                          v15);
  if ( !phase )
    goto LABEL_26;
  UISprite__set_spriteName(phase, (System_String_o *)this, 0);
  BattlePointGaugeComponent__PlayPhaseAnimation(v11, v18);
  *(_QWORD *)&value = v11->fields.beforeEntity;
  if ( !*(_QWORD *)&value )
    goto LABEL_26;
  methodPtr = (void (__fastcall *)(BattlePointGaugeComponent_o *))v11->klass->vtable._5_UpdateProgressGauge.methodPtr;
  v11->fields.lastUpPhaseInTween = *(_DWORD *)(*(_QWORD *)&value + 20LL);
  methodPtr(v11);
  this = (BattlePointGaugeComponent_o *)v11->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_26;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v11->fields.battlePointId,
                                          v13,
                                          v10,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_26;
    BattlePointGaugeComponent__ShowStepUpEffect(v11, (*p_beforeNextEntity)->fields.effectId, v20);
  }
  v21 = v11->fields.beforeEntity;
  if ( !v21 || (this = (BattlePointGaugeComponent_o *)v11->fields.battlePointPhaseMaster) == 0 )
LABEL_26:
    sub_21FFECC(this, *(_QWORD *)&value);
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                          (BattlePointPhaseMaster_o *)this,
                                          p_beforeNextEntity,
                                          v11->fields.battlePointId,
                                          v21->fields.phase + 1,
                                          0);
  v22 = *p_beforeEntity;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v22 || !*p_beforeNextEntity )
      goto LABEL_26;
    v14 = (float)(v10 - v22->fields.value) / (float)((*p_beforeNextEntity)->fields.value - v22->fields.value);
LABEL_18:
    this = (BattlePointGaugeComponent_o *)v11->fields.gaugeFrontProgressBar;
    if ( this )
    {
LABEL_19:
      UIProgressBar__set_value((UIProgressBar_o *)this, v14, 0);
      return;
    }
    goto LABEL_26;
  }
  if ( !v22 )
    goto LABEL_26;
  this = (BattlePointGaugeComponent_o *)v11->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_26;
  v23 = v22->fields.phase;
  if ( v23 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v11->fields.battlePointId, 0) )
  {
    this = (BattlePointGaugeComponent_o *)v11->fields.gaugeFrontProgressBar;
    if ( this )
    {
      v14 = 1.0;
      goto LABEL_19;
    }
    goto LABEL_26;
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
    sub_21FFECC(0, method);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  float v13; // s0
  float waitSecond; // s1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_593BF36 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_593BF36 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    v13 = elapsed_5__3 + UnityEngine_Time__get_deltaTime(0);
    waitSecond = this->fields.waitSecond;
    this->fields._elapsed_5__3 = v13;
    if ( v13 < waitSecond )
    {
LABEL_15:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v7, v8, v9, v10, v11, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    count_5__2 = this->fields._count_5__2;
    do
    {
      v13 = v13 - waitSecond;
      --count_5__2;
    }
    while ( waitSecond <= v13 );
    this->fields._elapsed_5__3 = v13;
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
    v15 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_21FFC68(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v16 = (System_Reflection_MethodBase_o *)sub_21FFC34(v15, v15[4]);
    OverwriteAssetSoundName__PlaySeContinue(v16, this->fields.seName, 0, 0);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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

  if ( (byte_593BF35 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13331/*"SetStepSprite"*/);
    byte_593BF35 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_13331/*"SetStepSprite"*/,
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
      sub_21FFECC(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0);
  }
}