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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x20
  const MethodInfo *v22; // x2
  __int64 v23; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v31; // x1
  System_Collections_IEnumerator_o *v32; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v37; // x8
  __int64 v38; // x9
  System_Collections_IEnumerator_c **v39; // x10
  __int64 v40; // x0
  UnityEngine_AnimationState_o *v41; // x0
  __int64 v42; // x1
  struct System_String_o *name; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x19
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x20
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  void *v53; // x0
  int v54; // w1
  __int64 v55; // x0
  __int64 v56; // x20
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B054A1 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&inBattlePointId);
    sub_1BC3008(&AssetManager_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animation___, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_BattlePointPhaseMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&System_IDisposable_TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_3064/*"Battle/BattlePoint/Prefab/{0}"*/, v13);
    byte_4B054A1 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.method)(
    this,
    this->klass->vtable._5_UpdateProgressGauge.methodPtr,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battlePointPhaseMaster, (int32_t)Master_object, v15, v16);
  this->fields.battlePointId = inBattlePointId;
  v61 = inBattlePointId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v17, v18, v19);
  v21 = System_String__Format((System_String_o *)StringLiteral_3064/*"Battle/BattlePoint/Prefab/{0}"*/, v20, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__getAssetStorage(v21, 0LL);
  BattlePointGaugeComponent__StartClose(this, 1, v22);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_40;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.phaseAnimationComponent, (int32_t)Component_object, v27, v28);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_40:
    sub_1BC3264(phase, v23);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0LL);
  v32 = Enumerator;
  if ( !Enumerator )
    sub_1BC3264(0LL, v31);
  klass = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v32, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v37 = v32->klass;
    v38 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
    {
      v39 = (System_Collections_IEnumerator_c **)&v37->_1.interfaceOffsets->offset;
      while ( *(v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 2;
        if ( !v38 )
          goto LABEL_24;
      }
      v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 1].method;
    }
    else
    {
LABEL_24:
      v40 = sub_1C13570(v32, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v41 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v40)(
                                            v32,
                                            *(_QWORD *)(v40 + 8));
    if ( !v41 )
      sub_1BC3264(0LL, v42);
    if ( v41->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BC3524(v41);
      if ( v54 != 1 )
      {
        v55 = sub_1BC3144(v32, System_IDisposable_TypeInfo);
        v56 = v55;
        if ( v55 )
        {
          v57 = *(_QWORD *)v55;
          v58 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
          {
            v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
            {
              --v58;
              v59 += 4;
              if ( !v58 )
                goto LABEL_51;
            }
            v60 = v57 + 16LL * *v59 + 312;
          }
          else
          {
LABEL_51:
            v60 = sub_1C13570(v55, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
        }
        sub_1CABD50();
      }
      v46 = *(_QWORD *)__cxa_begin_catch(v53);
      __cxa_end_catch();
      goto LABEL_30;
    }
    name = UnityEngine_AnimationState__get_name(v41, 0LL);
    this->fields.phaseAnimationName = name;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.phaseAnimationName, (int32_t)name, v44, v45);
  }
  v46 = 0LL;
LABEL_30:
  v47 = sub_1BC3144(v32, System_IDisposable_TypeInfo);
  if ( v47 )
  {
    v48 = *(_QWORD *)v47;
    v49 = v47;
    v50 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v51 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_35;
      }
      v52 = v48 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_35:
      v52 = sub_1C13570(v47, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
  }
  if ( v46 )
    sub_1BC325C(v46);
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
    sub_1BC3264(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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

  if ( (byte_4B054A2 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B054A2 = 1;
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
      UnityEngine_Animation__Play_69779584(v5, this->fields.phaseAnimationName, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(v5, v4);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B054A4 & 1) == 0 )
  {
    sub_1BC3008(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo, *(_QWORD *)&effectNum);
    byte_4B054A4 = 1;
  }
  v7 = sub_1BC3254(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)seName, v8, v9);
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
  Il2CppObject *ComponentInChildren_object__50683200; // x23
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
  __int64 v57; // x2
  const MethodInfo *v58; // x3
  System_Object_array *v59; // x23
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x24
  const MethodInfo *v67; // x3
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  const MethodInfo *v71; // x3
  Il2CppObject *v72; // x24
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  const MethodInfo *v81; // x3
  Il2CppObject *v82; // x20
  const MethodInfo *v83; // x3
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  const MethodInfo *v87; // x3
  Il2CppObject *v88; // x20
  System_Collections_Hashtable_o *v89; // x0
  const MethodInfo *v90; // x2
  struct BattlePointGaugeSetting_o *v91; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v92; // x8
  System_Collections_IEnumerator_o *v93; // x0
  __int64 v94; // x0
  float v95; // [xsp+4h] [xbp-12Ch] BYREF
  int v96; // [xsp+8h] [xbp-128h] BYREF
  int v97; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v98; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v99; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v100; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v101; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v104; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v105; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v106; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v107; // 0:x0.8

  v3 = currentPointValue;
  if ( (byte_4B054A3 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____76878936,
      *(_QWORD *)&currentPointValue);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1BC3008(&int_TypeInfo, v6);
    sub_1BC3008(&System_MathF_TypeInfo, v7);
    sub_1BC3008(&object___TypeInfo, v8);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&float_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_19506/*"from"*/, v12);
    sub_1BC3008(&StringLiteral_15056/*"UpdateGaugeValue"*/, v13);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v14);
    sub_1BC3008(&StringLiteral_22212/*"oncompleteparams"*/, v15);
    sub_1BC3008(&StringLiteral_22219/*"onupdate"*/, v16);
    sub_1BC3008(&StringLiteral_9793/*"OnCompleteGaugeValue"*/, v17);
    sub_1BC3008(&StringLiteral_23872/*"to"*/, v18);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v19);
    sub_1BC3008(&iTween_TypeInfo, v20);
    byte_4B054A3 = 1;
  }
  m_ParticleSystem = 0LL;
  entity = 0LL;
  v101 = 0LL;
  memset(&v100, 0, sizeof(v100));
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
    v42 = UnityEngine_Object__Instantiate_object__50900816(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
    battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0LL, 0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v42 )
        goto LABEL_112;
      ComponentInChildren_object__50683200 = UnityEngine_GameObject__GetComponentInChildren_object__50683200(
                                               (UnityEngine_GameObject_o *)v42,
                                               1,
                                               (const MethodInfo_3055D40 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____76878936);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v42,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__50683200, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
          if ( !ComponentInChildren_object__50683200 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__50683200,
                               0LL).fields.m_ParticleSystem;
          battlePointPhaseMaster = (__int64)UnityEngine_ParticleSystem__get_emission(
                                              (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__50683200,
                                              0LL).fields.m_ParticleSystem;
          v101 = battlePointPhaseMaster;
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
          if ( !byte_4B054F9 )
          {
            sub_1BC3008(&System_Math_TypeInfo, *(_QWORD *)&currentPointValue);
            byte_4B054F9 = 1;
          }
          v50 = v49 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v51 = System_Math__Max_63870724(1.0, v50, 0LL);
          v104.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v52 = v51;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v104, v51, 0LL);
          v105.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v101;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v105, 0LL) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v106.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v101;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v99, v106, 0, 0LL);
            v100 = v99;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v100, 0LL);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v100, v29, 0LL);
            v107.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v101;
            v98 = v100;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v107, 0, &v98, 0LL);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0LL);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v55 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v55;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          battlePointPhaseMaster = sub_1BC30B0(object___TypeInfo, 12LL);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v59 = (System_Object_array *)battlePointPhaseMaster;
          v60 = StringLiteral_19506/*"from"*/;
          if ( StringLiteral_19506/*"from"*/ )
          {
            v60 = sub_1BC3144(StringLiteral_19506/*"from"*/, v59->obj.klass->_1.element_class);
            if ( !v60 )
              goto LABEL_114;
            v61 = StringLiteral_19506/*"from"*/;
          }
          else
          {
            v61 = 0LL;
          }
          if ( !v59->max_length )
            goto LABEL_113;
          v59->m_Items[0] = (Il2CppObject *)v61;
          sub_1BC2FAC((CGThumbnailListItem_o *)v59->m_Items, v61, v57, v58);
          LODWORD(v99.fields.m_Time) = this->fields.beforePointValue;
          v60 = j_il2cpp_value_box_0(int_TypeInfo, &v99, v62, v63, v64);
          v66 = (Il2CppObject *)v60;
          if ( !v60 || (v60 = sub_1BC3144(v60, v59->obj.klass->_1.element_class)) != 0 )
          {
            if ( v59->max_length <= 1 )
              goto LABEL_113;
            v59->m_Items[1] = v66;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[1], (int32_t)v66, v57, v65);
            v60 = StringLiteral_23872/*"to"*/;
            if ( StringLiteral_23872/*"to"*/ )
            {
              v60 = sub_1BC3144(StringLiteral_23872/*"to"*/, v59->obj.klass->_1.element_class);
              if ( !v60 )
                goto LABEL_114;
              v61 = StringLiteral_23872/*"to"*/;
            }
            else
            {
              v61 = 0LL;
            }
            if ( v59->max_length <= 2 )
              goto LABEL_113;
            v59->m_Items[2] = (Il2CppObject *)v61;
            sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[2], v61, v57, v67);
            v97 = v3;
            v60 = j_il2cpp_value_box_0(int_TypeInfo, &v97, v68, v69, v70);
            v72 = (Il2CppObject *)v60;
            if ( !v60 || (v60 = sub_1BC3144(v60, v59->obj.klass->_1.element_class)) != 0 )
            {
              if ( v59->max_length <= 3 )
                goto LABEL_113;
              v59->m_Items[3] = v72;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[3], (int32_t)v72, v57, v71);
              v60 = StringLiteral_22219/*"onupdate"*/;
              if ( StringLiteral_22219/*"onupdate"*/ )
              {
                v60 = sub_1BC3144(StringLiteral_22219/*"onupdate"*/, v59->obj.klass->_1.element_class);
                if ( !v60 )
                  goto LABEL_114;
                v61 = StringLiteral_22219/*"onupdate"*/;
              }
              else
              {
                v61 = 0LL;
              }
              if ( v59->max_length <= 4 )
                goto LABEL_113;
              v59->m_Items[4] = (Il2CppObject *)v61;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[4], v61, v57, v73);
              v60 = StringLiteral_15056/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15056/*"UpdateGaugeValue"*/ )
              {
                v60 = sub_1BC3144(StringLiteral_15056/*"UpdateGaugeValue"*/, v59->obj.klass->_1.element_class);
                if ( !v60 )
                  goto LABEL_114;
                v61 = StringLiteral_15056/*"UpdateGaugeValue"*/;
              }
              else
              {
                v61 = 0LL;
              }
              if ( v59->max_length <= 5 )
                goto LABEL_113;
              v59->m_Items[5] = (Il2CppObject *)v61;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[5], v61, v57, v74);
              v60 = StringLiteral_22211/*"oncomplete"*/;
              if ( StringLiteral_22211/*"oncomplete"*/ )
              {
                v60 = sub_1BC3144(StringLiteral_22211/*"oncomplete"*/, v59->obj.klass->_1.element_class);
                if ( !v60 )
                  goto LABEL_114;
                v61 = StringLiteral_22211/*"oncomplete"*/;
              }
              else
              {
                v61 = 0LL;
              }
              if ( v59->max_length <= 6 )
                goto LABEL_113;
              v59->m_Items[6] = (Il2CppObject *)v61;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[6], v61, v57, v75);
              v60 = StringLiteral_9793/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9793/*"OnCompleteGaugeValue"*/ )
              {
                v60 = sub_1BC3144(StringLiteral_9793/*"OnCompleteGaugeValue"*/, v59->obj.klass->_1.element_class);
                if ( !v60 )
                  goto LABEL_114;
                v61 = StringLiteral_9793/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v61 = 0LL;
              }
              if ( v59->max_length <= 7 )
                goto LABEL_113;
              v59->m_Items[7] = (Il2CppObject *)v61;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[7], v61, v57, v76);
              v60 = StringLiteral_22212/*"oncompleteparams"*/;
              if ( StringLiteral_22212/*"oncompleteparams"*/ )
              {
                v60 = sub_1BC3144(StringLiteral_22212/*"oncompleteparams"*/, v59->obj.klass->_1.element_class);
                if ( !v60 )
                  goto LABEL_114;
                v61 = StringLiteral_22212/*"oncompleteparams"*/;
              }
              else
              {
                v61 = 0LL;
              }
              if ( v59->max_length <= 8 )
                goto LABEL_113;
              v59->m_Items[8] = (Il2CppObject *)v61;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[8], v61, v57, v77);
              v96 = v3;
              v60 = j_il2cpp_value_box_0(int_TypeInfo, &v96, v78, v79, v80);
              v82 = (Il2CppObject *)v60;
              if ( !v60 || (v60 = sub_1BC3144(v60, v59->obj.klass->_1.element_class)) != 0 )
              {
                if ( v59->max_length <= 9 )
                  goto LABEL_113;
                v59->m_Items[9] = v82;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[9], (int32_t)v82, v57, v81);
                v60 = StringLiteral_23833/*"time"*/;
                if ( StringLiteral_23833/*"time"*/ )
                {
                  v60 = sub_1BC3144(StringLiteral_23833/*"time"*/, v59->obj.klass->_1.element_class);
                  if ( !v60 )
                    goto LABEL_114;
                  v61 = StringLiteral_23833/*"time"*/;
                }
                else
                {
                  v61 = 0LL;
                }
                if ( v59->max_length <= 0xA )
                  goto LABEL_113;
                v59->m_Items[10] = (Il2CppObject *)v61;
                sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[10], v61, v57, v83);
                v95 = (float)(repeatInterval * (float)v29) / v52;
                v60 = j_il2cpp_value_box_0(float_TypeInfo, &v95, v84, v85, v86);
                v88 = (Il2CppObject *)v60;
                if ( !v60 || (v60 = sub_1BC3144(v60, v59->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v59->max_length > 0xB )
                  {
                    v59->m_Items[11] = v88;
                    sub_1BC2FAC((CGThumbnailListItem_o *)&v59->m_Items[11], (int32_t)v88, v57, v87);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v89 = iTween__Hash(v59, 0LL);
                    iTween__ValueTo(gameObject, v89, 0LL);
                    v91 = this->fields.setting;
                    if ( v91 )
                    {
                      v92 = v91->fields.effect;
                      if ( v92 )
                      {
                        v93 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                v92->fields.effectSeName,
                                v29,
                                repeatInterval / v52,
                                v90);
                        UnityEngine_MonoBehaviour__StartCoroutine_70019872(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v93,
                          0LL);
                        return;
                      }
                    }
LABEL_112:
                    sub_1BC3264(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1BC326C(v60, v61, v57);
                }
              }
            }
          }
LABEL_114:
          v94 = sub_1BC3288(v60);
          sub_1BC3130(v94, 0LL);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v18; // x20
  Il2CppObject *Component_object; // x20
  System_Action_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B054A5 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_string__TypeInfo, *(_QWORD *)&effectId);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v6);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    sub_1BC3008(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__, v8);
    sub_1BC3008(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo, v9);
    byte_4B054A5 = 1;
  }
  effectPrefab = 0LL;
  v10 = sub_1BC3254(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_17;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v10 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v15) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v10 + 24);
    v16 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__Instantiate_object__50900816(
            v16,
            stepUpEffectRootTransform,
            (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v18 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v18,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v20 = (System_Action_object__o *)sub_1BC3254(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v20,
          (Il2CppObject *)v10,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0LL);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v20;
          sub_1BC2FAC((CGThumbnailListItem_o *)&Component_object[12], (int32_t)v20, v21, v22);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0LL);
          return;
        }
LABEL_17:
        sub_1BC3264(setting, v12);
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
    sub_1BC3264(barMaskPanel, immediately);
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
    sub_1BC3264(barMaskPanel, method);
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
    sub_1BC3264(battlePointPhaseMaster, *(_QWORD *)&value);
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
    sub_1BC3264(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.beforeEntity, value, (int32_t)method, v3);
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
    sub_1BC3264(this, *(_QWORD *)&value);
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
    sub_1BC3264(0LL, method);
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
  const MethodInfo *v8; // x3
  float deltaTime; // s0
  float waitSecond; // s1
  float v11; // s0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4B054A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__, method);
    byte_4B054A7 = 1;
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
      sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
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
      v12 = (_QWORD *)sub_1BC3020(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v12, v12[4]);
    OverwriteAssetSoundName__PlaySeContinue(v13, this->fields.seName, 0, 0LL);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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

  if ( (byte_4B054A6 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12693/*"SetStepSprite"*/, eventName);
    byte_4B054A6 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12693/*"SetStepSprite"*/,
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
      sub_1BC3264(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0LL);
  }
}