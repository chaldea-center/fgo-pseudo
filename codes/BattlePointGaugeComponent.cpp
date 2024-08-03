void __fastcall BattlePointGaugeComponent___ctor(BattlePointGaugeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF35C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__GameObject__TypeInfo, v4);
    byte_49FF35C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__GameObject__TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__GameObject___ctor__);
  this->fields.effectCache = (struct System_Collections_Generic_Dictionary_string__GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectCache, (int32_t)v5, v6, v7);
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
  int32_t v16; // w3
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  const MethodInfo *v19; // x2
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  System_Collections_IEnumerator_o *v27; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v32; // x8
  __int64 v33; // x9
  System_Collections_IEnumerator_c **v34; // x10
  __int64 v35; // x0
  UnityEngine_AnimationState_o *v36; // x0
  struct System_String_o *name; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x19
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x20
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  void *v47; // x0
  int v48; // w1
  __int64 v49; // x0
  __int64 v50; // x20
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF354 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&inBattlePointId);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_BattlePointPhaseMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_3187/*"Battle/BattlePoint/Prefab/{0}"*/, v13);
    byte_49FF354 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.method)(
    this,
    this->klass->vtable._5_UpdateProgressGauge.methodPtr,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.battlePointPhaseMaster,
    (int32_t)Master_object,
    v15,
    v16);
  this->fields.battlePointId = inBattlePointId;
  v55 = inBattlePointId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  v18 = System_String__Format((System_String_o *)StringLiteral_3187/*"Battle/BattlePoint/Prefab/{0}"*/, v17, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__getAssetStorage(v18, 0LL);
  BattlePointGaugeComponent__StartClose(this, 1, v19);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_40;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.phaseAnimationComponent,
    (int32_t)Component_object,
    v23,
    v24);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_40:
    sub_1B64324(phase);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0LL);
  v27 = Enumerator;
  if ( !Enumerator )
    sub_1B64324(0LL);
  klass = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v27, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v32 = v27->klass;
    v33 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
    {
      v34 = (System_Collections_IEnumerator_c **)&v32->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 2;
        if ( !v33 )
          goto LABEL_24;
      }
      v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 1].method;
    }
    else
    {
LABEL_24:
      v35 = sub_1BB60A8(v27, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v36 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v35)(
                                            v27,
                                            *(_QWORD *)(v35 + 8));
    if ( !v36 )
      sub_1B64324(0LL);
    if ( v36->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B645E4(v36);
      if ( v48 != 1 )
      {
        v49 = sub_1B64204(v27, System_IDisposable_TypeInfo);
        v50 = v49;
        if ( v49 )
        {
          v51 = *(_QWORD *)v49;
          v52 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
          {
            v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
            {
              --v52;
              v53 += 4;
              if ( !v52 )
                goto LABEL_51;
            }
            v54 = v51 + 16LL * *v53 + 312;
          }
          else
          {
LABEL_51:
            v54 = sub_1BB60A8(v49, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8));
        }
        sub_1C4EB58();
      }
      v40 = *(_QWORD *)__cxa_begin_catch(v47);
      __cxa_end_catch();
      goto LABEL_30;
    }
    name = UnityEngine_AnimationState__get_name(v36, 0LL);
    this->fields.phaseAnimationName = name;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.phaseAnimationName, (int32_t)name, v38, v39);
  }
  v40 = 0LL;
LABEL_30:
  v41 = sub_1B64204(v27, System_IDisposable_TypeInfo);
  if ( v41 )
  {
    v42 = *(_QWORD *)v41;
    v43 = v41;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_35;
      }
      v46 = v42 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_35:
      v46 = sub_1BB60A8(v41, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  }
  if ( v40 )
    sub_1B6431C(v40);
}


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
    sub_1B64324(battlePointPhaseMaster);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void __fastcall BattlePointGaugeComponent__PlayPhaseAnimation(
        BattlePointGaugeComponent_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  UnityEngine_Coroutine_o *lastPhaseAnimationCoroutine; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FF356 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, finishCallback);
    sub_1B640C8(&Method_BattlePointGaugeComponent__PlayPhaseAnimation_b__28_0__, v6);
    byte_49FF356 = 1;
  }
  lastPhaseAnimationCoroutine = this->fields.lastPhaseAnimationCoroutine;
  if ( lastPhaseAnimationCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_69113628(
      (UnityEngine_MonoBehaviour_o *)this,
      lastPhaseAnimationCoroutine,
      0LL);
    ActionExtensions__Call(this->fields.lastPhaseAnimationFinishCallback, 0LL);
  }
  this->fields.lastPhaseAnimationFinishCallback = finishCallback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.lastPhaseAnimationFinishCallback,
    (int32_t)finishCallback,
    (int32_t)method,
    v3);
  v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BattlePointGaugeComponent__PlayPhaseAnimation_b__28_0__, 0LL);
  v12 = BattlePointGaugeComponent__PlayPhaseAnimationCoroutine(this, v10, v11);
  started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
  this->fields.lastPhaseAnimationCoroutine = started;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.lastPhaseAnimationCoroutine,
    (int32_t)started,
    v14,
    v15);
}


System_Collections_IEnumerator_o *__fastcall BattlePointGaugeComponent__PlayPhaseAnimationCoroutine(
        BattlePointGaugeComponent_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FF357 & 1) == 0 )
  {
    sub_1B640C8(&BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_TypeInfo, finishCallback);
    byte_49FF357 = 1;
  }
  v5 = sub_1B64314(BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_TypeInfo, finishCallback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
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
  int32_t v9; // w3

  if ( (byte_49FF35A & 1) == 0 )
  {
    sub_1B640C8(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_TypeInfo, *(_QWORD *)&effectNum);
    byte_49FF35A = 1;
  }
  v7 = sub_1B64314(BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_TypeInfo, *(_QWORD *)&effectNum, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = seName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)seName, v8, v9);
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
  struct BattlePointPhaseEntity_o *beforeEntity; // x1
  int32_t phase; // w9
  int32_t v24; // w10
  bool v25; // vf
  int v26; // w9
  int v27; // w21
  struct BattlePointGaugeSetting_o *setting; // x9
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x9
  int32_t v30; // w21
  struct BattlePointGaugeSetting_o *v31; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v32; // x8
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  struct BattlePointGaugeSetting_o *v34; // x9
  struct BattlePointGaugeSetting_EffectSection_o *v35; // x9
  struct BattlePointGaugeSetting_o *v36; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v37; // x9
  int v38; // w21
  struct BattlePointGaugeSetting_o *v39; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v40; // x8
  Il2CppObject *pointEffectPrefab; // x22
  UnityEngine_Transform_o *pointEffectRootTransform; // x23
  Il2CppObject *v43; // x22
  Il2CppObject *ComponentInChildren_object__48792192; // x23
  Il2CppObject *Component_object; // x22
  UnityEngine_ParticleSystem_EmissionModule_o v46; // x1
  struct BattlePointGaugeSetting_o *v47; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v48; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v51; // s8
  float v52; // s8
  float v53; // s0
  float v54; // s8
  float repeatInterval; // s9
  struct BattlePointPhaseEntity_o *v56; // x8
  int32_t v57; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  System_Object_array *v61; // x23
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  Il2CppObject *v66; // x24
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x24
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  Il2CppObject *v84; // x20
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t v87; // w2
  int32_t v88; // w3
  Il2CppObject *v89; // x20
  System_Collections_Hashtable_o *v90; // x0
  const MethodInfo *v91; // x2
  struct BattlePointGaugeSetting_o *v92; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v93; // x8
  System_Collections_IEnumerator_o *v94; // x0
  __int64 v95; // x0
  float v96; // [xsp+4h] [xbp-12Ch] BYREF
  int32_t v97; // [xsp+8h] [xbp-128h] BYREF
  int32_t v98; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v99; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v100; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v101; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v102; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v105; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v106; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v107; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v108; // 0:x0.8

  if ( (byte_49FF359 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____75773088,
      *(_QWORD *)&currentPointValue);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&System_MathF_TypeInfo, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&float_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v12);
    sub_1B640C8(&StringLiteral_15115/*"UpdateGaugeValue"*/, v13);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v14);
    sub_1B640C8(&StringLiteral_22186/*"oncompleteparams"*/, v15);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v16);
    sub_1B640C8(&StringLiteral_9830/*"OnCompleteGaugeValue"*/, v17);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v18);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v19);
    sub_1B640C8(&iTween_TypeInfo, v20);
    byte_49FF359 = 1;
  }
  m_ParticleSystem = 0LL;
  entity = 0LL;
  v102 = 0LL;
  memset(&v101, 0, sizeof(v101));
  if ( this->fields.beforePointValue != currentPointValue )
  {
    battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
    if ( !battlePointPhaseMaster )
      goto LABEL_112;
    battlePointPhaseMaster = BattlePointPhaseMaster__TryGetEntityByValue(
                               (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                               this->fields.battlePointId,
                               currentPointValue,
                               &entity,
                               0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
      return;
    beforeEntity = this->fields.beforeEntity;
    if ( !beforeEntity || !entity )
      goto LABEL_112;
    phase = beforeEntity->fields.phase;
    v24 = entity->fields.phase;
    v25 = __OFSUB__(v24, phase);
    v26 = v24 - phase;
    if ( (v26 < 0) ^ v25 | (v26 == 0) )
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
                                 currentPointValue - this->fields.beforePointValue,
                                 effect->fields.effectNumPerPhase,
                                 0LL);
      v30 = battlePointPhaseMaster;
    }
    else
    {
      if ( v26 >= 2 )
      {
        v31 = this->fields.setting;
        if ( !v31 )
          goto LABEL_112;
        v32 = v31->fields.effect;
        if ( !v32 )
          goto LABEL_112;
        v27 = v32->fields.effectNumPerPhase * (v26 - 1);
      }
      else
      {
        v27 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_112;
      v34 = this->fields.setting;
      if ( !v34 )
        goto LABEL_112;
      v35 = v34->fields.effect;
      if ( !v35 )
        goto LABEL_112;
      battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                                 beforeEntity,
                                 beforeNextEntity->fields.value - this->fields.beforePointValue,
                                 v35->fields.effectNumPerPhase,
                                 0LL);
      if ( !entity )
        goto LABEL_112;
      v36 = this->fields.setting;
      if ( !v36 )
        goto LABEL_112;
      v37 = v36->fields.effect;
      if ( !v37 || !this->fields.battlePointPhaseMaster )
        goto LABEL_112;
      v38 = battlePointPhaseMaster + v27;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 this->fields.battlePointPhaseMaster,
                                 entity,
                                 currentPointValue - entity->fields.value,
                                 v37->fields.effectNumPerPhase,
                                 0LL);
      v30 = v38 + battlePointPhaseMaster;
    }
    v39 = this->fields.setting;
    if ( !v39 )
      goto LABEL_112;
    v40 = v39->fields.effect;
    if ( !v40 )
      goto LABEL_112;
    pointEffectPrefab = (Il2CppObject *)v40->fields.pointEffectPrefab;
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v43 = UnityEngine_Object__Instantiate_object__49003980(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v43, 0LL, 0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v43 )
        goto LABEL_112;
      ComponentInChildren_object__48792192 = UnityEngine_GameObject__GetComponentInChildren_object__48792192(
                                               (UnityEngine_GameObject_o *)v43,
                                               1,
                                               (const MethodInfo_2E88280 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____75773088);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v43,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__48792192, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
          if ( !ComponentInChildren_object__48792192 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__48792192,
                               0LL).fields.m_ParticleSystem;
          battlePointPhaseMaster = (__int64)UnityEngine_ParticleSystem__get_emission(
                                              (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__48792192,
                                              0LL).fields.m_ParticleSystem;
          v102 = battlePointPhaseMaster;
          v47 = this->fields.setting;
          if ( !v47 )
            goto LABEL_112;
          v48 = v47->fields.effect;
          if ( !v48 )
            goto LABEL_112;
          pointEffectSpeedUpBorderEffectNum = v48->fields.pointEffectSpeedUpBorderEffectNum;
          pointEffectSpeedUpCoefficient = v48->fields.pointEffectSpeedUpCoefficient;
          if ( !System_MathF_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo);
          v51 = pointEffectSpeedUpCoefficient * (float)(v30 - pointEffectSpeedUpBorderEffectNum);
          if ( !byte_49FF3AC )
          {
            sub_1B640C8(&System_Math_TypeInfo, v46.fields.m_ParticleSystem);
            byte_49FF3AC = 1;
          }
          v52 = v51 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v53 = System_Math__Max_62194076(1.0, v52, 0LL);
          v105.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v54 = v53;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v105, v53, 0LL);
          v106.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v102;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v106, 0LL) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v107.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v102;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v100, v107, 0, 0LL);
            v101 = v100;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v101, 0LL);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v101, v30, 0LL);
            v108.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v102;
            v99 = v101;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v108, 0, &v99, 0LL);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0LL);
          v56 = this->fields.beforeEntity;
          if ( !v56 )
            goto LABEL_112;
          v57 = v56->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v57;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          battlePointPhaseMaster = sub_1B64170(object___TypeInfo, 12LL);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v61 = (System_Object_array *)battlePointPhaseMaster;
          v62 = StringLiteral_19577/*"from"*/;
          if ( StringLiteral_19577/*"from"*/ )
          {
            v62 = sub_1B64204(StringLiteral_19577/*"from"*/, v61->obj.klass->_1.element_class);
            if ( !v62 )
              goto LABEL_114;
            v63 = StringLiteral_19577/*"from"*/;
          }
          else
          {
            v63 = 0LL;
          }
          if ( !v61->max_length )
            goto LABEL_113;
          v61->m_Items[0] = (Il2CppObject *)v63;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)v61->m_Items, v63, v59, v60);
          LODWORD(v100.fields.m_Time) = this->fields.beforePointValue;
          v62 = j_il2cpp_value_box_0(int_TypeInfo, &v100);
          v66 = (Il2CppObject *)v62;
          if ( !v62 || (v62 = sub_1B64204(v62, v61->obj.klass->_1.element_class)) != 0 )
          {
            if ( v61->max_length <= 1 )
              goto LABEL_113;
            v61->m_Items[1] = v66;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[1], (int32_t)v66, v64, v65);
            v62 = StringLiteral_23870/*"to"*/;
            if ( StringLiteral_23870/*"to"*/ )
            {
              v62 = sub_1B64204(StringLiteral_23870/*"to"*/, v61->obj.klass->_1.element_class);
              if ( !v62 )
                goto LABEL_114;
              v63 = StringLiteral_23870/*"to"*/;
            }
            else
            {
              v63 = 0LL;
            }
            if ( v61->max_length <= 2 )
              goto LABEL_113;
            v61->m_Items[2] = (Il2CppObject *)v63;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[2], v63, v67, v68);
            v98 = currentPointValue;
            v62 = j_il2cpp_value_box_0(int_TypeInfo, &v98);
            v71 = (Il2CppObject *)v62;
            if ( !v62 || (v62 = sub_1B64204(v62, v61->obj.klass->_1.element_class)) != 0 )
            {
              if ( v61->max_length <= 3 )
                goto LABEL_113;
              v61->m_Items[3] = v71;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[3], (int32_t)v71, v69, v70);
              v62 = StringLiteral_22193/*"onupdate"*/;
              if ( StringLiteral_22193/*"onupdate"*/ )
              {
                v62 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v61->obj.klass->_1.element_class);
                if ( !v62 )
                  goto LABEL_114;
                v63 = StringLiteral_22193/*"onupdate"*/;
              }
              else
              {
                v63 = 0LL;
              }
              if ( v61->max_length <= 4 )
                goto LABEL_113;
              v61->m_Items[4] = (Il2CppObject *)v63;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[4], v63, v72, v73);
              v62 = StringLiteral_15115/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15115/*"UpdateGaugeValue"*/ )
              {
                v62 = sub_1B64204(StringLiteral_15115/*"UpdateGaugeValue"*/, v61->obj.klass->_1.element_class);
                if ( !v62 )
                  goto LABEL_114;
                v63 = StringLiteral_15115/*"UpdateGaugeValue"*/;
              }
              else
              {
                v63 = 0LL;
              }
              if ( v61->max_length <= 5 )
                goto LABEL_113;
              v61->m_Items[5] = (Il2CppObject *)v63;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[5], v63, v74, v75);
              v62 = StringLiteral_22185/*"oncomplete"*/;
              if ( StringLiteral_22185/*"oncomplete"*/ )
              {
                v62 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v61->obj.klass->_1.element_class);
                if ( !v62 )
                  goto LABEL_114;
                v63 = StringLiteral_22185/*"oncomplete"*/;
              }
              else
              {
                v63 = 0LL;
              }
              if ( v61->max_length <= 6 )
                goto LABEL_113;
              v61->m_Items[6] = (Il2CppObject *)v63;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[6], v63, v76, v77);
              v62 = StringLiteral_9830/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_9830/*"OnCompleteGaugeValue"*/ )
              {
                v62 = sub_1B64204(StringLiteral_9830/*"OnCompleteGaugeValue"*/, v61->obj.klass->_1.element_class);
                if ( !v62 )
                  goto LABEL_114;
                v63 = StringLiteral_9830/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v63 = 0LL;
              }
              if ( v61->max_length <= 7 )
                goto LABEL_113;
              v61->m_Items[7] = (Il2CppObject *)v63;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[7], v63, v78, v79);
              v62 = StringLiteral_22186/*"oncompleteparams"*/;
              if ( StringLiteral_22186/*"oncompleteparams"*/ )
              {
                v62 = sub_1B64204(StringLiteral_22186/*"oncompleteparams"*/, v61->obj.klass->_1.element_class);
                if ( !v62 )
                  goto LABEL_114;
                v63 = StringLiteral_22186/*"oncompleteparams"*/;
              }
              else
              {
                v63 = 0LL;
              }
              if ( v61->max_length <= 8 )
                goto LABEL_113;
              v61->m_Items[8] = (Il2CppObject *)v63;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[8], v63, v80, v81);
              v97 = currentPointValue;
              v62 = j_il2cpp_value_box_0(int_TypeInfo, &v97);
              v84 = (Il2CppObject *)v62;
              if ( !v62 || (v62 = sub_1B64204(v62, v61->obj.klass->_1.element_class)) != 0 )
              {
                if ( v61->max_length <= 9 )
                  goto LABEL_113;
                v61->m_Items[9] = v84;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[9], (int32_t)v84, v82, v83);
                v62 = StringLiteral_23830/*"time"*/;
                if ( StringLiteral_23830/*"time"*/ )
                {
                  v62 = sub_1B64204(StringLiteral_23830/*"time"*/, v61->obj.klass->_1.element_class);
                  if ( !v62 )
                    goto LABEL_114;
                  v63 = StringLiteral_23830/*"time"*/;
                }
                else
                {
                  v63 = 0LL;
                }
                if ( v61->max_length <= 0xA )
                  goto LABEL_113;
                v61->m_Items[10] = (Il2CppObject *)v63;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[10], v63, v85, v86);
                v96 = (float)(repeatInterval * (float)v30) / v54;
                v62 = j_il2cpp_value_box_0(float_TypeInfo, &v96);
                v89 = (Il2CppObject *)v62;
                if ( !v62 || (v62 = sub_1B64204(v62, v61->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v61->max_length > 0xB )
                  {
                    v61->m_Items[11] = v89;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v61->m_Items[11], (int32_t)v89, v87, v88);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                    v90 = iTween__Hash(v61, 0LL);
                    iTween__ValueTo(gameObject, v90, 0LL);
                    v92 = this->fields.setting;
                    if ( v92 )
                    {
                      v93 = v92->fields.effect;
                      if ( v93 )
                      {
                        v94 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                v93->fields.effectSeName,
                                v30,
                                repeatInterval / v54,
                                v91);
                        UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v94,
                          0LL);
                        return;
                      }
                    }
LABEL_112:
                    sub_1B64324(battlePointPhaseMaster);
                  }
LABEL_113:
                  sub_1B6432C(v62, v63);
                }
              }
            }
          }
LABEL_114:
          v95 = sub_1B64348(v62);
          sub_1B641F0(v95, 0LL);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  BattlePointGaugeSetting_o *setting; // x0
  Il2CppObject *v9; // x20
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x19
  Il2CppObject *v11; // x19
  Il2CppObject *Component_object; // x19
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF35B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, *(_QWORD *)&effectId);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF35B = 1;
  }
  effectPrefab = 0LL;
  if ( this->fields.lastStepUpEffectIdInTween != effectId )
  {
    setting = this->fields.setting;
    if ( !setting )
      goto LABEL_16;
    if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v3) )
    {
      this->fields.lastStepUpEffectIdInTween = effectId;
      v9 = (Il2CppObject *)effectPrefab;
      stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__Instantiate_object__49003980(
              v9,
              stepUpEffectRootTransform,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      if ( ((unsigned __int8)setting & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_16;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v11,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
        if ( ((unsigned __int8)setting & 1) == 0 )
        {
          if ( Component_object )
          {
            CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0LL);
            return;
          }
LABEL_16:
          sub_1B64324(setting);
        }
      }
    }
  }
}


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
    sub_1B64324(barMaskPanel);
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
    sub_1B64324(barMaskPanel);
  }
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barMaskPanel, 0LL);
  v6.fields.x = 0.0;
  v6.fields.y = 0.0;
  v6.fields.z = 0.0;
  TweenPosition__Begin(v5, 0.3, v6, 0LL);
}


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
    sub_1B64324(battlePointPhaseMaster);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x22
  BattlePointPhaseMaster_o *battlePointPhaseMaster; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  _QWORD *v12; // x21
  const MethodInfo *v13; // x2
  UISprite_o *phase; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t firstPhaseInTween; // w8
  int v18; // w9
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *phaseAnimationComponent; // x22
  const MethodInfo *v22; // x2
  UISprite_o *step; // x22
  __int64 v24; // x8
  float v25; // s0
  int v26; // w20
  BattlePointPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF355 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&currentPointValue);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_BattlePointGaugeComponent___c__DisplayClass27_0__UpdateBattlePointImmediately_b__0__, v6);
    sub_1B640C8(&BattlePointGaugeComponent___c__DisplayClass27_0_TypeInfo, v7);
    byte_49FF355 = 1;
  }
  entity = 0LL;
  v8 = sub_1B64314(BattlePointGaugeComponent___c__DisplayClass27_0_TypeInfo, *(_QWORD *)&currentPointValue, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_36;
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_36;
  v12 = (_QWORD *)(v8 + 24);
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntityByValue(
                                                         battlePointPhaseMaster,
                                                         this->fields.battlePointId,
                                                         currentPointValue,
                                                         (BattlePointPhaseEntity_o **)(v8 + 24),
                                                         0LL);
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    return;
  this->fields.beforePointValue = currentPointValue;
  if ( !*v12 )
    goto LABEL_36;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
  if ( !battlePointPhaseMaster )
    goto LABEL_36;
  phase = this->fields.phase;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                                         (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                         *(_DWORD *)(*v12 + 20LL),
                                                         v13);
  if ( !phase )
    goto LABEL_36;
  UISprite__set_spriteName(phase, (System_String_o *)battlePointPhaseMaster, 0LL);
  firstPhaseInTween = this->fields.firstPhaseInTween;
  if ( firstPhaseInTween != -1 )
  {
    if ( !*v12 )
      goto LABEL_36;
    v18 = *(_DWORD *)(*v12 + 20LL);
    if ( firstPhaseInTween != v18 && this->fields.lastUpPhaseInTween != v18 )
    {
      v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v8,
        Method_BattlePointGaugeComponent___c__DisplayClass27_0__UpdateBattlePointImmediately_b__0__,
        0LL);
      BattlePointGaugeComponent__PlayPhaseAnimation(this, v19, v20);
    }
  }
  *(_QWORD *)&this->fields.firstPhaseInTween = -1LL;
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
  {
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.phaseAnimationComponent;
    if ( !battlePointPhaseMaster )
      goto LABEL_36;
    battlePointPhaseMaster = (BattlePointPhaseMaster_o *)UnityEngine_Animation__get_isPlaying(
                                                           (UnityEngine_Animation_o *)battlePointPhaseMaster,
                                                           0LL);
    if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
    {
      if ( !*v12 )
        goto LABEL_36;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.setting;
      if ( !battlePointPhaseMaster )
        goto LABEL_36;
      step = this->fields.step;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                             (BattlePointGaugeSetting_o *)battlePointPhaseMaster,
                                                             *(_DWORD *)(*v12 + 40LL),
                                                             v22);
      if ( !step )
        goto LABEL_36;
      UISprite__set_spriteName(step, (System_String_o *)battlePointPhaseMaster, 0LL);
    }
  }
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)((__int64 (__fastcall *)(BattlePointGaugeComponent_o *, _QWORD, void *))this->klass->vtable._5_UpdateProgressGauge.method)(
                                                         this,
                                                         *v12,
                                                         this->klass[1]._1.image);
  if ( !*v12 )
    goto LABEL_36;
  battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
  if ( !battlePointPhaseMaster )
    goto LABEL_36;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)BattlePointPhaseMaster__TryGetEntity(
                                                         battlePointPhaseMaster,
                                                         &entity,
                                                         this->fields.battlePointId,
                                                         *(_DWORD *)(*v12 + 20LL) + 1,
                                                         0LL);
  v24 = *v12;
  if ( !*v12 )
    goto LABEL_36;
  if ( ((unsigned __int8)battlePointPhaseMaster & 1) == 0 )
  {
    battlePointPhaseMaster = this->fields.battlePointPhaseMaster;
    if ( battlePointPhaseMaster )
    {
      v26 = *(_DWORD *)(v24 + 20);
      if ( v26 != BattlePointPhaseMaster__GetMaxPhase(battlePointPhaseMaster, this->fields.battlePointId, 0LL) )
        return;
      battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
      if ( battlePointPhaseMaster )
      {
        v25 = 1.0;
        goto LABEL_34;
      }
    }
LABEL_36:
    sub_1B64324(battlePointPhaseMaster);
  }
  if ( !entity )
    goto LABEL_36;
  battlePointPhaseMaster = (BattlePointPhaseMaster_o *)this->fields.gaugeFrontProgressBar;
  if ( !battlePointPhaseMaster )
    goto LABEL_36;
  v25 = (float)(currentPointValue - *(_DWORD *)(v24 + 24)) / (float)(entity->fields.value - *(_DWORD *)(v24 + 24));
LABEL_34:
  UIProgressBar__set_value((UIProgressBar_o *)battlePointPhaseMaster, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__UpdateGaugeValue(
        BattlePointGaugeComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattlePointGaugeComponent_o *v5; // x19
  __int64 v6; // x1
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  struct BattlePointPhaseEntity_o **p_beforeEntity; // x22
  int32_t v9; // w23
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x1
  struct BattlePointPhaseEntity_o **p_beforeNextEntity; // x21
  float v12; // s0
  const MethodInfo *v13; // x2
  struct BattlePointPhaseEntity_o *v14; // x8
  UISprite_o *phase; // x24
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x2
  struct BattlePointPhaseEntity_o *v20; // x1
  BattlePointGaugeComponent_c *klass; // x9
  const MethodInfo *v22; // x2
  struct BattlePointPhaseEntity_o *v23; // x8
  struct BattlePointPhaseEntity_o *v24; // x8
  int32_t v25; // w20

  v5 = this;
  if ( (byte_49FF358 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&value);
    this = (BattlePointGaugeComponent_o *)sub_1B640C8(&Method_BattlePointGaugeComponent__UpdateGaugeValue_b__32_0__, v6);
    byte_49FF358 = 1;
  }
  p_beforeEntity = &v5->fields.beforeEntity;
  beforeEntity = v5->fields.beforeEntity;
  if ( !beforeEntity )
    goto LABEL_27;
  v9 = beforeEntity->fields.value;
  p_beforeNextEntity = &v5->fields.beforeNextEntity;
  beforeNextEntity = v5->fields.beforeNextEntity;
  if ( !beforeNextEntity )
    goto LABEL_27;
  v12 = (float)(value - v9) / (float)(beforeNextEntity->fields.value - v9);
  if ( v12 <= 1.0 )
    goto LABEL_20;
  v5->fields.beforeEntity = beforeNextEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v5->fields.beforeEntity,
    (int32_t)beforeNextEntity,
    (int32_t)method,
    v3);
  v14 = v5->fields.beforeEntity;
  if ( !v14 )
    goto LABEL_27;
  this = (BattlePointGaugeComponent_o *)v5->fields.setting;
  if ( !this )
    goto LABEL_27;
  phase = v5->fields.phase;
  this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetPhaseSpriteName(
                                          (BattlePointGaugeSetting_o *)this,
                                          v14->fields.phase,
                                          v13);
  if ( !phase )
    goto LABEL_27;
  UISprite__set_spriteName(phase, (System_String_o *)this, 0LL);
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)v5, Method_BattlePointGaugeComponent__UpdateGaugeValue_b__32_0__, 0LL);
  BattlePointGaugeComponent__PlayPhaseAnimation(v5, v18, v19);
  v20 = v5->fields.beforeEntity;
  if ( !v20 )
    goto LABEL_27;
  klass = v5->klass;
  v5->fields.lastUpPhaseInTween = v20->fields.phase;
  ((void (__fastcall *)(BattlePointGaugeComponent_o *))klass->vtable._5_UpdateProgressGauge.method)(v5);
  this = (BattlePointGaugeComponent_o *)v5->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_27;
  this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__IsEffectIdChanged(
                                          (BattlePointPhaseMaster_o *)this,
                                          v5->fields.battlePointId,
                                          v9,
                                          value,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_27;
    BattlePointGaugeComponent__ShowStepUpEffect(v5, (*p_beforeNextEntity)->fields.effectId, v22);
  }
  v23 = v5->fields.beforeEntity;
  if ( !v23
    || (this = (BattlePointGaugeComponent_o *)v5->fields.battlePointPhaseMaster) == 0LL
    || (this = (BattlePointGaugeComponent_o *)BattlePointPhaseMaster__TryGetEntity(
                                                (BattlePointPhaseMaster_o *)this,
                                                &v5->fields.beforeNextEntity,
                                                v5->fields.battlePointId,
                                                v23->fields.phase + 1,
                                                0LL),
        (v24 = *p_beforeEntity) == 0LL) )
  {
LABEL_27:
    sub_1B64324(this);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_beforeNextEntity )
      goto LABEL_27;
    v12 = (float)(value - v24->fields.value) / (float)((*p_beforeNextEntity)->fields.value - v24->fields.value);
LABEL_20:
    this = (BattlePointGaugeComponent_o *)v5->fields.gaugeFrontProgressBar;
    if ( this )
    {
LABEL_21:
      UIProgressBar__set_value((UIProgressBar_o *)this, v12, 0LL);
      return;
    }
    goto LABEL_27;
  }
  this = (BattlePointGaugeComponent_o *)v5->fields.battlePointPhaseMaster;
  if ( !this )
    goto LABEL_27;
  v25 = v24->fields.phase;
  if ( v25 == BattlePointPhaseMaster__GetMaxPhase((BattlePointPhaseMaster_o *)this, v5->fields.battlePointId, 0LL) )
  {
    this = (BattlePointGaugeComponent_o *)v5->fields.gaugeFrontProgressBar;
    if ( this )
    {
      v12 = 1.0;
      goto LABEL_21;
    }
    goto LABEL_27;
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
    sub_1B64324(0LL);
  BattlePointGaugeSetting__ValidateSerializedField(setting, method);
}


void __fastcall BattlePointGaugeComponent___PlayPhaseAnimation_b__28_0(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_lastPhaseAnimationFinishCallback; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w2
  int32_t v7; // w3

  p_lastPhaseAnimationFinishCallback = (ServantStatusBattleListViewItem_o *)&this->fields.lastPhaseAnimationFinishCallback;
  ActionExtensions__Call(this->fields.lastPhaseAnimationFinishCallback, 0LL);
  p_lastPhaseAnimationFinishCallback->klass = 0LL;
  sub_1B6406C(p_lastPhaseAnimationFinishCallback, 0, v4, v5);
  this->fields.lastPhaseAnimationCoroutine = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lastPhaseAnimationCoroutine, 0, v6, v7);
}


void __fastcall BattlePointGaugeComponent___UpdateGaugeValue_b__32_0(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattlePointPhaseEntity_o *beforeEntity; // x9
  UISprite_o *step; // x19

  beforeEntity = this->fields.beforeEntity;
  if ( !beforeEntity
    || !this->fields.setting
    || (step = this->fields.step,
        this = (BattlePointGaugeComponent_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                this->fields.setting,
                                                beforeEntity->fields.effectId,
                                                v2),
        !step) )
  {
    sub_1B64324(this);
  }
  UISprite__set_spriteName(step, (System_String_o *)this, 0LL);
}


void __fastcall BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29___ctor(
        BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29__MoveNext(
        BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *this,
        const MethodInfo *method)
{
  BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *v2; // x19
  int32_t _1__state; // w8
  struct BattlePointGaugeComponent_o *_4__this; // x21
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_49FF35D & 1) == 0 )
  {
    this = (BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *)sub_1B640C8(
                                                                               &UnityEngine_Object_TypeInfo,
                                                                               method);
    byte_49FF35D = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    phaseAnimationComponent = (UnityEngine_Object_o *)_4__this->fields.phaseAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(phaseAnimationComponent, 0LL, 0LL)
      || System_String__IsNullOrEmpty(_4__this->fields.phaseAnimationName, 0LL) )
    {
      return 0;
    }
    this = (BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *)_4__this->fields.phaseAnimationComponent;
    if ( !this )
      goto LABEL_22;
    if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
    {
      this = (BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *)_4__this->fields.phaseAnimationComponent;
      if ( !this )
        goto LABEL_22;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)this, 0LL);
    }
    this = (BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *)_4__this->fields.phaseAnimationComponent;
    if ( !this )
LABEL_22:
      sub_1B64324(this);
    UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)this, _4__this->fields.phaseAnimationName, 0LL);
  }
  this = (BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *)_4__this->fields.phaseAnimationComponent;
  if ( !this )
    goto LABEL_22;
  if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
  {
    v2->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
    sub_1B6406C(p__2__current, 0, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  ActionExtensions__Call(v2->fields.finishCallback, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29__System_Collections_IEnumerator_Reset(
        BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29__System_Collections_IEnumerator_get_Current(
        BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29__System_IDisposable_Dispose(
        BattlePointGaugeComponent__PlayPhaseAnimationCoroutine_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__35___ctor(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__35__MoveNext(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_o *this,
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

  if ( (byte_49FF35E & 1) == 0 )
  {
    sub_1B640C8(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_MoveNext__, method);
    byte_49FF35E = 1;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, 0, v7, v8);
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
    v12 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_MoveNext__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1B640E0(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_MoveNext__);
    v13 = (System_Reflection_MethodBase_o *)sub_1B640AC(v12, v12[4]);
    OverwriteAssetSoundName__PlaySeContinue(v13, this->fields.seName, 0LL);
    goto LABEL_15;
  }
  return 0;
}


Il2CppObject *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePointGaugeComponent__PlaySeInEffectTiming_d__35__System_Collections_IEnumerator_Reset(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__35__System_Collections_IEnumerator_get_Current(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePointGaugeComponent__PlaySeInEffectTiming_d__35__System_IDisposable_Dispose(
        BattlePointGaugeComponent__PlaySeInEffectTiming_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePointGaugeComponent___c__DisplayClass27_0___ctor(
        BattlePointGaugeComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePointGaugeComponent___c__DisplayClass27_0___UpdateBattlePointImmediately_b__0(
        BattlePointGaugeComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattlePointGaugeComponent_o *_4__this; // x8
  struct BattlePointPhaseEntity_o *entity; // x9
  UISprite_o *step; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (entity = this->fields.entity) == 0LL
    || (this = (BattlePointGaugeComponent___c__DisplayClass27_0_o *)_4__this->fields.setting) == 0LL
    || (step = _4__this->fields.step,
        this = (BattlePointGaugeComponent___c__DisplayClass27_0_o *)BattlePointGaugeSetting__GetStepSpriteName(
                                                                      (BattlePointGaugeSetting_o *)this,
                                                                      entity->fields.effectId,
                                                                      v2),
        !step) )
  {
    sub_1B64324(this);
  }
  UISprite__set_spriteName(step, (System_String_o *)this, 0LL);
}