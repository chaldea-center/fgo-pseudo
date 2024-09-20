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
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v22; // x1
  System_Collections_IEnumerator_o *v23; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v28; // x8
  __int64 v29; // x9
  System_Collections_IEnumerator_c **v30; // x10
  __int64 v31; // x0
  UnityEngine_AnimationState_o *v32; // x0
  __int64 v33; // x1
  struct System_String_o *name; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x19
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x20
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  void *v44; // x0
  int v45; // w1
  __int64 v46; // x0
  __int64 v47; // x20
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5E11F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1B885B0(&Method_DataManager_GetMaster_BattlePointPhaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3207/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_4A5E11F = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.method)(
    this,
    this->klass->vtable._5_UpdateProgressGauge.methodPtr,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battlePointPhaseMaster, (int32_t)Master_object, v6, v7);
  this->fields.battlePointId = inBattlePointId;
  v52 = inBattlePointId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v8, v9, v10);
  v12 = System_String__Format((System_String_o *)StringLiteral_3207/*"Battle/BattlePoint/Prefab/{0}"*/, v11, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__getAssetStorage(v12, 0LL);
  BattlePointGaugeComponent__StartClose(this, 1, v13);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_40;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.phaseAnimationComponent,
    (int32_t)Component_object,
    v18,
    v19);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_40:
    sub_1B8880C(phase, v14);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0LL);
  v23 = Enumerator;
  if ( !Enumerator )
    sub_1B8880C(0LL, v22);
  klass = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v23, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v28 = v23->klass;
    v29 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
    {
      v30 = (System_Collections_IEnumerator_c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 2;
        if ( !v29 )
          goto LABEL_24;
      }
      v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1].method;
    }
    else
    {
LABEL_24:
      v31 = sub_1BDA590(v23, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v32 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(
                                            v23,
                                            *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1B8880C(0LL, v33);
    if ( v32->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B88ACC(v32);
      if ( v45 != 1 )
      {
        v46 = sub_1B886EC(v23, System_IDisposable_TypeInfo);
        v47 = v46;
        if ( v46 )
        {
          v48 = *(_QWORD *)v46;
          v49 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
          {
            v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_51;
            }
            v51 = v48 + 16LL * *v50 + 312;
          }
          else
          {
LABEL_51:
            v51 = sub_1BDA590(v46, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
        }
        sub_1C73040();
      }
      v37 = *(_QWORD *)__cxa_begin_catch(v44);
      __cxa_end_catch();
      goto LABEL_30;
    }
    name = UnityEngine_AnimationState__get_name(v32, 0LL);
    this->fields.phaseAnimationName = name;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.phaseAnimationName, (int32_t)name, v35, v36);
  }
  v37 = 0LL;
LABEL_30:
  v38 = sub_1B886EC(v23, System_IDisposable_TypeInfo);
  if ( v38 )
  {
    v39 = *(_QWORD *)v38;
    v40 = v38;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_35;
      }
      v43 = v39 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_35:
      v43 = sub_1BDA590(v38, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  }
  if ( v37 )
    sub_1B88804(v37);
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
    sub_1B8880C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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

  if ( (byte_4A5E120 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E120 = 1;
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
      UnityEngine_Animation__Play_69204472(v5, this->fields.phaseAnimationName, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(v5, v4);
  }
}


System_Collections_IEnumerator_o *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E122 & 1) == 0 )
  {
    sub_1B885B0(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
    byte_4A5E122 = 1;
  }
  v7 = sub_1B887FC(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)seName, v8, v9);
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
  Il2CppObject *ComponentInChildren_object__49082976; // x23
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
  int32_t v41; // w2
  int32_t v42; // w3
  System_Object_array *v43; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x24
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x24
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  int32_t v81; // w2
  int32_t v82; // w3
  Il2CppObject *v83; // x20
  System_Collections_Hashtable_o *v84; // x0
  const MethodInfo *v85; // x2
  struct BattlePointGaugeSetting_o *v86; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v87; // x8
  System_Collections_IEnumerator_o *v88; // x0
  __int64 v89; // x0
  float v90; // [xsp+4h] [xbp-12Ch] BYREF
  int v91; // [xsp+8h] [xbp-128h] BYREF
  int v92; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v93; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v94; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v95; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v96; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v99; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v100; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v101; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v102; // 0:x0.8

  v3 = currentPointValue;
  if ( (byte_4A5E121 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____76153144);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&System_MathF_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_15184/*"UpdateGaugeValue"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22274/*"oncompleteparams"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_9875/*"OnCompleteGaugeValue"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E121 = 1;
  }
  m_ParticleSystem = 0LL;
  entity = 0LL;
  v96 = 0LL;
  memset(&v95, 0, sizeof(v95));
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
    v26 = UnityEngine_Object__Instantiate_object__49297800(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v26 )
        goto LABEL_112;
      ComponentInChildren_object__49082976 = UnityEngine_GameObject__GetComponentInChildren_object__49082976(
                                               (UnityEngine_GameObject_o *)v26,
                                               1,
                                               (const MethodInfo_2ECF260 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____76153144);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v26,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__49082976, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
          if ( !ComponentInChildren_object__49082976 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__49082976,
                               0LL).fields.m_ParticleSystem;
          battlePointPhaseMaster = (__int64)UnityEngine_ParticleSystem__get_emission(
                                              (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__49082976,
                                              0LL).fields.m_ParticleSystem;
          v96 = battlePointPhaseMaster;
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
          if ( !byte_4A5E173 )
          {
            sub_1B885B0(&System_Math_TypeInfo);
            byte_4A5E173 = 1;
          }
          v34 = v33 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v35 = System_Math__Max_62525720(1.0, v34, 0LL);
          v99.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v36 = v35;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v99, v35, 0LL);
          v100.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v96;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v100, 0LL) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v101.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v96;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v94, v101, 0, 0LL);
            v95 = v94;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v95, 0LL);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v95, v13, 0LL);
            v102.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v96;
            v93 = v95;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v102, 0, &v93, 0LL);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0LL);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v39 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v39;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          battlePointPhaseMaster = sub_1B88658(object___TypeInfo, 12LL);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v43 = (System_Object_array *)battlePointPhaseMaster;
          v44 = StringLiteral_19656/*"from"*/;
          if ( StringLiteral_19656/*"from"*/ )
          {
            v44 = sub_1B886EC(StringLiteral_19656/*"from"*/, v43->obj.klass->_1.element_class);
            if ( !v44 )
              goto LABEL_114;
            v45 = StringLiteral_19656/*"from"*/;
          }
          else
          {
            v45 = 0LL;
          }
          if ( !v43->max_length )
            goto LABEL_113;
          v43->m_Items[0] = (Il2CppObject *)v45;
          sub_1B88554((ServantStatusBattleListViewItem_o *)v43->m_Items, v45, v41, v42);
          LODWORD(v94.fields.m_Time) = this->fields.beforePointValue;
          v44 = j_il2cpp_value_box_0(int_TypeInfo, &v94, v46, v47, v48);
          v51 = (Il2CppObject *)v44;
          if ( !v44 || (v44 = sub_1B886EC(v44, v43->obj.klass->_1.element_class)) != 0 )
          {
            if ( v43->max_length <= 1 )
              goto LABEL_113;
            v43->m_Items[1] = v51;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[1], (int32_t)v51, v49, v50);
            v44 = StringLiteral_23969/*"to"*/;
            if ( StringLiteral_23969/*"to"*/ )
            {
              v44 = sub_1B886EC(StringLiteral_23969/*"to"*/, v43->obj.klass->_1.element_class);
              if ( !v44 )
                goto LABEL_114;
              v45 = StringLiteral_23969/*"to"*/;
            }
            else
            {
              v45 = 0LL;
            }
            if ( v43->max_length <= 2 )
              goto LABEL_113;
            v43->m_Items[2] = (Il2CppObject *)v45;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[2], v45, v52, v53);
            v92 = v3;
            v44 = j_il2cpp_value_box_0(int_TypeInfo, &v92, v54, v55, v56);
            v59 = (Il2CppObject *)v44;
            if ( !v44 || (v44 = sub_1B886EC(v44, v43->obj.klass->_1.element_class)) != 0 )
            {
              if ( v43->max_length <= 3 )
                goto LABEL_113;
              v43->m_Items[3] = v59;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[3], (int32_t)v59, v57, v58);
              v44 = StringLiteral_22281/*"onupdate"*/;
              if ( StringLiteral_22281/*"onupdate"*/ )
              {
                v44 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v43->obj.klass->_1.element_class);
                if ( !v44 )
                  goto LABEL_114;
                v45 = StringLiteral_22281/*"onupdate"*/;
              }
              else
              {
                v45 = 0LL;
              }
              if ( v43->max_length <= 4 )
                goto LABEL_113;
              v43->m_Items[4] = (Il2CppObject *)v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[4], v45, v60, v61);
              v44 = StringLiteral_15184/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15184/*"UpdateGaugeValue"*/ )
              {
                v44 = sub_1B886EC(StringLiteral_15184/*"UpdateGaugeValue"*/, v43->obj.klass->_1.element_class);
                if ( !v44 )
                  goto LABEL_114;
                v45 = StringLiteral_15184/*"UpdateGaugeValue"*/;
              }
              else
              {
                v45 = 0LL;
              }
              if ( v43->max_length <= 5 )
                goto LABEL_113;
              v43->m_Items[5] = (Il2CppObject *)v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[5], v45, v62, v63);
              v44 = StringLiteral_22273/*"oncomplete"*/;
              if ( StringLiteral_22273/*"oncomplete"*/ )
              {
                v44 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v43->obj.klass->_1.element_class);
                if ( !v44 )
                  goto LABEL_114;
                v45 = StringLiteral_22273/*"oncomplete"*/;
              }
              else
              {
                v45 = 0LL;
              }
              if ( v43->max_length <= 6 )
                goto LABEL_113;
              v43->m_Items[6] = (Il2CppObject *)v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[6], v45, v64, v65);
              v44 = StringLiteral_9875/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9875/*"OnCompleteGaugeValue"*/ )
              {
                v44 = sub_1B886EC(StringLiteral_9875/*"OnCompleteGaugeValue"*/, v43->obj.klass->_1.element_class);
                if ( !v44 )
                  goto LABEL_114;
                v45 = StringLiteral_9875/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v45 = 0LL;
              }
              if ( v43->max_length <= 7 )
                goto LABEL_113;
              v43->m_Items[7] = (Il2CppObject *)v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[7], v45, v66, v67);
              v44 = StringLiteral_22274/*"oncompleteparams"*/;
              if ( StringLiteral_22274/*"oncompleteparams"*/ )
              {
                v44 = sub_1B886EC(StringLiteral_22274/*"oncompleteparams"*/, v43->obj.klass->_1.element_class);
                if ( !v44 )
                  goto LABEL_114;
                v45 = StringLiteral_22274/*"oncompleteparams"*/;
              }
              else
              {
                v45 = 0LL;
              }
              if ( v43->max_length <= 8 )
                goto LABEL_113;
              v43->m_Items[8] = (Il2CppObject *)v45;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[8], v45, v68, v69);
              v91 = v3;
              v44 = j_il2cpp_value_box_0(int_TypeInfo, &v91, v70, v71, v72);
              v75 = (Il2CppObject *)v44;
              if ( !v44 || (v44 = sub_1B886EC(v44, v43->obj.klass->_1.element_class)) != 0 )
              {
                if ( v43->max_length <= 9 )
                  goto LABEL_113;
                v43->m_Items[9] = v75;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[9], (int32_t)v75, v73, v74);
                v44 = StringLiteral_23929/*"time"*/;
                if ( StringLiteral_23929/*"time"*/ )
                {
                  v44 = sub_1B886EC(StringLiteral_23929/*"time"*/, v43->obj.klass->_1.element_class);
                  if ( !v44 )
                    goto LABEL_114;
                  v45 = StringLiteral_23929/*"time"*/;
                }
                else
                {
                  v45 = 0LL;
                }
                if ( v43->max_length <= 0xA )
                  goto LABEL_113;
                v43->m_Items[10] = (Il2CppObject *)v45;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[10], v45, v76, v77);
                v90 = (float)(repeatInterval * (float)v13) / v36;
                v44 = j_il2cpp_value_box_0(float_TypeInfo, &v90, v78, v79, v80);
                v83 = (Il2CppObject *)v44;
                if ( !v44 || (v44 = sub_1B886EC(v44, v43->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v43->max_length > 0xB )
                  {
                    v43->m_Items[11] = v83;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)&v43->m_Items[11], (int32_t)v83, v81, v82);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v84 = iTween__Hash(v43, 0LL);
                    iTween__ValueTo(gameObject, v84, 0LL);
                    v86 = this->fields.setting;
                    if ( v86 )
                    {
                      v87 = v86->fields.effect;
                      if ( v87 )
                      {
                        v88 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                v87->fields.effectSeName,
                                v13,
                                repeatInterval / v36,
                                v85);
                        UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v88,
                          0LL);
                        return;
                      }
                    }
LABEL_112:
                    sub_1B8880C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1B88814(v44, v45);
                }
              }
            }
          }
LABEL_114:
          v89 = sub_1B88830(v44);
          sub_1B886D8(v89, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v13; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E123 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__);
    sub_1B885B0(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
    byte_4A5E123 = 1;
  }
  effectPrefab = 0LL;
  v5 = sub_1B887FC(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
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
    v13 = UnityEngine_Object__Instantiate_object__49297800(
            v11,
            stepUpEffectRootTransform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v13 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v13,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v15 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0LL);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v15;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[12], (int32_t)v15, v16, v17);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0LL);
          return;
        }
LABEL_17:
        sub_1B8880C(setting, v7);
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
    sub_1B8880C(barMaskPanel, immediately);
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
    sub_1B8880C(barMaskPanel, method);
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
    sub_1B8880C(battlePointPhaseMaster, *(_QWORD *)&value);
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
    sub_1B8880C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.beforeEntity, value, (int32_t)method, v3);
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
  UISprite__set_spriteName(phase, (System_String_o *)this, 0LL);
  BattlePointGaugeComponent__PlayPhaseAnimation(v9, v14);
  *(_QWORD *)&value = v9->fields.beforeEntity;
  if ( !*(_QWORD *)&value )
    goto LABEL_25;
  klass = v9->klass;
  v9->fields.lastUpPhaseInTween = *(_DWORD *)(*(_QWORD *)&value + 20LL);
  ((void (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._5_UpdateProgressGauge.method)(v9);
  this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v9->fields.battlePointId,
                                          v7,
                                          v6,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_25;
    BattlePointGaugeComponent__ShowStepUpEffect(v9, (*p_beforeNextEntity)->fields.effectId, v16);
  }
  v17 = v9->fields.beforeEntity;
  if ( !v17
    || (this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster) == 0LL
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                p_beforeNextEntity,
                                                v9->fields.battlePointId,
                                                v17->fields.phase + 1,
                                                0LL),
        (v18 = *p_beforeEntity) == 0LL) )
  {
LABEL_25:
    sub_1B8880C(this, *(_QWORD *)&value);
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
      UIProgressBar__set_value((UIProgressBar_o *)this, v10, 0LL);
      return;
    }
    goto LABEL_25;
  }
  this = (BattlePointGaugeComponent_o *)v9->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_25;
  v19 = v18->fields.phase;
  if ( v19 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v9->fields.battlePointId, 0LL) )
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
    sub_1B8880C(0LL, method);
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
  int32_t v7; // w2
  int32_t v8; // w3
  float deltaTime; // s0
  float waitSecond; // s1
  float v11; // s0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4A5E125 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    byte_4A5E125 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    waitSecond = this->fields.waitSecond;
    v11 = elapsed_5__3 + deltaTime;
    this->fields._elapsed_5__3 = v11;
    if ( v11 < waitSecond )
    {
LABEL_15:
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v7, v8);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    count_5__2 = this->fields._count_5__2;
    if ( waitSecond <= v11 )
    {
      do
      {
        v11 = v11 - waitSecond;
        --count_5__2;
      }
      while ( waitSecond <= v11 );
      this->fields._elapsed_5__3 = v11;
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
    v12 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B885C8(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
    OverwriteAssetSoundName__PlaySeContinue(v13, this->fields.seName, 0LL);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5E124 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12718/*"SetStepSprite"*/);
    byte_4A5E124 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12718/*"SetStepSprite"*/,
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
      sub_1B8880C(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0LL);
  }
}