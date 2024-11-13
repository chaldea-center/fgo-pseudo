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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  Il2CppObject *Master_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x20
  const MethodInfo *v34; // x2
  __int64 v35; // x1
  UnityEngine_Component_o *phase; // x0
  Il2CppObject *Component_object; // x0
  struct UnityEngine_Animation_o **p_phaseAnimationComponent; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  UnityEngine_Object_o *phaseAnimationComponent; // x21
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v48; // x1
  System_Collections_IEnumerator_o *v49; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v54; // x8
  __int64 v55; // x9
  System_Collections_IEnumerator_c **v56; // x10
  __int64 v57; // x0
  UnityEngine_AnimationState_o *v58; // x0
  __int64 v59; // x1
  struct System_String_o *name; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  __int64 v67; // x19
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x20
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  void *v74; // x0
  int v75; // w1
  __int64 v76; // x0
  __int64 v77; // x20
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  int32_t v82; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19243 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, *(_QWORD *)&inBattlePointId, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattlePointPhaseMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3231/*"Battle/BattlePoint/Prefab/{0}"*/, v21, v22);
    byte_4B19243 = 1;
  }
  ((void (__fastcall *)(BattlePointGaugeComponent_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_ValidateSerializedField.method)(
    this,
    this->klass->vtable._5_UpdateProgressGauge.methodPtr,
    method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattlePointPhaseMaster___);
  this->fields.battlePointPhaseMaster = (struct BattlePointPhaseMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battlePointPhaseMaster,
    (int64_t)Master_object,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.battlePointId = inBattlePointId;
  v82 = inBattlePointId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v33 = System_String__Format((System_String_o *)StringLiteral_3231/*"Battle/BattlePoint/Prefab/{0}"*/, v31, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v32);
  AssetManager__getAssetStorage(v33, 0LL);
  BattlePointGaugeComponent__StartClose(this, 1, v34);
  phase = (UnityEngine_Component_o *)this->fields.phase;
  if ( !phase )
    goto LABEL_40;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       phase,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.phaseAnimationComponent = (struct UnityEngine_Animation_o *)Component_object;
  p_phaseAnimationComponent = &this->fields.phaseAnimationComponent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.phaseAnimationComponent,
    (int64_t)Component_object,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  if ( !UnityEngine_Object__op_Inequality(phaseAnimationComponent, 0LL, 0LL) )
    return;
  phase = (UnityEngine_Component_o *)*p_phaseAnimationComponent;
  if ( !*p_phaseAnimationComponent )
LABEL_40:
    sub_1BCAA3C(phase, v35);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)phase, 0LL);
  v49 = Enumerator;
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v48);
  klass = Enumerator->klass;
  v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v51;
      p_offset += 4;
      if ( !v51 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(v49, *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v54 = v49->klass;
    v55 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
    {
      v56 = (System_Collections_IEnumerator_c **)&v54->_1.interfaceOffsets->offset;
      while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v55;
        v56 += 2;
        if ( !v55 )
          goto LABEL_24;
      }
      v57 = (__int64)&v54->vtable[*(_DWORD *)v56 + 1].method;
    }
    else
    {
LABEL_24:
      v57 = sub_1C1C7C0(v49, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v58 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v57)(
                                            v49,
                                            *(_QWORD *)(v57 + 8));
    if ( !v58 )
      sub_1BCAA3C(0LL, v59);
    if ( v58->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BCACFC(v58);
      if ( v75 != 1 )
      {
        v76 = sub_1BCA91C(v49, System_IDisposable_TypeInfo);
        v77 = v76;
        if ( v76 )
        {
          v78 = *(_QWORD *)v76;
          v79 = *(unsigned __int16 *)(*(_QWORD *)v76 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v76 + 302LL) )
          {
            v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
            {
              --v79;
              v80 += 4;
              if ( !v79 )
                goto LABEL_51;
            }
            v81 = v78 + 16LL * *v80 + 312;
          }
          else
          {
LABEL_51:
            v81 = sub_1C1C7C0(v76, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8));
        }
        sub_1CB5270();
      }
      v67 = *(_QWORD *)__cxa_begin_catch(v74);
      __cxa_end_catch();
      goto LABEL_30;
    }
    name = UnityEngine_AnimationState__get_name(v58, 0LL);
    this->fields.phaseAnimationName = name;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.phaseAnimationName,
      (int64_t)name,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  v67 = 0LL;
LABEL_30:
  v68 = sub_1BCA91C(v49, System_IDisposable_TypeInfo);
  if ( v68 )
  {
    v69 = *(_QWORD *)v68;
    v70 = v68;
    v71 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_35;
      }
      v73 = v69 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_35:
      v73 = sub_1C1C7C0(v68, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
  }
  if ( v67 )
    sub_1BCAA34(v67);
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
    sub_1BCAA3C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
  }
LABEL_7:
  BattlePointGaugeComponent__UpdateBattlePointImmediately(this, currentPointValue, v6);
}


void __fastcall BattlePointGaugeComponent__PlayPhaseAnimation(
        BattlePointGaugeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *phaseAnimationComponent; // x20
  __int64 v5; // x1
  UnityEngine_Animation_o *v6; // x0

  if ( (byte_4B19244 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19244 = 1;
  }
  phaseAnimationComponent = (UnityEngine_Object_o *)this->fields.phaseAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(phaseAnimationComponent, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.phaseAnimationName, 0LL) )
  {
    v6 = this->fields.phaseAnimationComponent;
    if ( !v6 )
      goto LABEL_14;
    if ( UnityEngine_Animation__get_isPlaying(v6, 0LL) )
    {
      v6 = this->fields.phaseAnimationComponent;
      if ( !v6 )
        goto LABEL_14;
      UnityEngine_Animation__Stop(v6, 0LL);
    }
    v6 = this->fields.phaseAnimationComponent;
    if ( v6 )
    {
      UnityEngine_Animation__Play_69899248(v6, this->fields.phaseAnimationName, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattlePointGaugeComponent__PlaySeInEffectTiming(
        System_String_o *seName,
        int32_t effectNum,
        float waitSecond,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19246 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo, *(_QWORD *)&effectNum, method);
    byte_4B19246 = 1;
  }
  v8 = sub_1BCAA2C(BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_TypeInfo, *(_QWORD *)&effectNum, method, v4);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 32) = seName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)seName, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = effectNum;
  *(float *)(v8 + 44) = waitSecond;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePointGaugeComponent__ShowAddedPointEffect(
        BattlePointGaugeComponent_o *this,
        int32_t currentPointValue,
        const MethodInfo *method)
{
  int v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 battlePointPhaseMaster; // x0
  int v38; // w9
  int32_t phase; // w10
  bool v40; // vf
  int v41; // w9
  int v42; // w21
  struct BattlePointGaugeSetting_o *setting; // x9
  struct BattlePointGaugeSetting_EffectSection_o *effect; // x9
  int32_t v45; // w21
  struct BattlePointGaugeSetting_o *v46; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v47; // x8
  struct BattlePointPhaseEntity_o *beforeNextEntity; // x8
  struct BattlePointGaugeSetting_o *v49; // x9
  struct BattlePointGaugeSetting_EffectSection_o *v50; // x9
  struct BattlePointGaugeSetting_o *v51; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v52; // x9
  int v53; // w21
  struct BattlePointGaugeSetting_o *v54; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v55; // x8
  Il2CppObject *pointEffectPrefab; // x22
  UnityEngine_Transform_o *pointEffectRootTransform; // x23
  Il2CppObject *v58; // x22
  Il2CppObject *ComponentInChildren_object__49687160; // x23
  __int64 v60; // x1
  Il2CppObject *Component_object; // x22
  __int64 v62; // x1
  UnityEngine_ParticleSystem_EmissionModule_o v63; // x2
  struct BattlePointGaugeSetting_o *v64; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v65; // x8
  int32_t pointEffectSpeedUpBorderEffectNum; // w23
  float pointEffectSpeedUpCoefficient; // s8
  float v68; // s8
  float v69; // s8
  float v70; // s0
  float v71; // s8
  float repeatInterval; // s9
  struct BattlePointPhaseEntity_o *beforeEntity; // x8
  int32_t v74; // w8
  UnityEngine_GameObject_o *gameObject; // x22
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Object_array *v82; // x23
  __int64 v83; // x0
  int64_t v84; // x1
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
  int64_t v104; // x24
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x20
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x20
  __int64 v155; // x1
  System_Collections_Hashtable_o *v156; // x0
  const MethodInfo *v157; // x2
  struct BattlePointGaugeSetting_o *v158; // x8
  struct BattlePointGaugeSetting_EffectSection_o *v159; // x8
  System_Collections_IEnumerator_o *v160; // x0
  __int64 v161; // x0
  float v162; // [xsp+4h] [xbp-12Ch] BYREF
  int v163; // [xsp+8h] [xbp-128h] BYREF
  int v164; // [xsp+Ch] [xbp-124h] BYREF
  UnityEngine_ParticleSystem_Burst_o v165; // [xsp+10h] [xbp-120h] BYREF
  UnityEngine_ParticleSystem_Burst_o v166; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_ParticleSystem_Burst_o v167; // [xsp+80h] [xbp-B0h] BYREF
  __int64 v168; // [xsp+B8h] [xbp-78h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+C0h] [xbp-70h] BYREF
  BattlePointPhaseEntity_o *entity; // [xsp+C8h] [xbp-68h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v171; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v172; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v173; // 0:x0.8
  UnityEngine_ParticleSystem_EmissionModule_o v174; // 0:x0.8

  v3 = currentPointValue;
  if ( (byte_4B19245 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____76905640,
      *(_QWORD *)&currentPointValue,
      method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_MathF_TypeInfo, v9, v10);
    sub_1BCA7E0(&object___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&float_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15351/*"UpdateGaugeValue"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_22514/*"oncompleteparams"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10008/*"OnCompleteGaugeValue"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v33, v34);
    sub_1BCA7E0(&iTween_TypeInfo, v35, v36);
    byte_4B19245 = 1;
  }
  m_ParticleSystem = 0LL;
  entity = 0LL;
  v168 = 0LL;
  memset(&v167, 0, sizeof(v167));
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
    v38 = *(_DWORD *)(*(_QWORD *)&currentPointValue + 20LL);
    phase = entity->fields.phase;
    v40 = __OFSUB__(phase, v38);
    v41 = phase - v38;
    if ( (v41 < 0) ^ v40 | (v41 == 0) )
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
      v45 = battlePointPhaseMaster;
    }
    else
    {
      if ( v41 >= 2 )
      {
        v46 = this->fields.setting;
        if ( !v46 )
          goto LABEL_112;
        v47 = v46->fields.effect;
        if ( !v47 )
          goto LABEL_112;
        v42 = v47->fields.effectNumPerPhase * (v41 - 1);
      }
      else
      {
        v42 = 0;
      }
      beforeNextEntity = this->fields.beforeNextEntity;
      if ( !beforeNextEntity )
        goto LABEL_112;
      v49 = this->fields.setting;
      if ( !v49 )
        goto LABEL_112;
      v50 = v49->fields.effect;
      if ( !v50 )
        goto LABEL_112;
      battlePointPhaseMaster = (__int64)this->fields.battlePointPhaseMaster;
      if ( !battlePointPhaseMaster )
        goto LABEL_112;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 (BattlePointPhaseMaster_o *)battlePointPhaseMaster,
                                 *(BattlePointPhaseEntity_o **)&currentPointValue,
                                 beforeNextEntity->fields.value - this->fields.beforePointValue,
                                 v50->fields.effectNumPerPhase,
                                 0LL);
      *(_QWORD *)&currentPointValue = entity;
      if ( !entity )
        goto LABEL_112;
      v51 = this->fields.setting;
      if ( !v51 )
        goto LABEL_112;
      v52 = v51->fields.effect;
      if ( !v52 || !this->fields.battlePointPhaseMaster )
        goto LABEL_112;
      v53 = battlePointPhaseMaster + v42;
      battlePointPhaseMaster = BattlePointPhaseMaster__GetEffectNum(
                                 this->fields.battlePointPhaseMaster,
                                 entity,
                                 v3 - entity->fields.value,
                                 v52->fields.effectNumPerPhase,
                                 0LL);
      v45 = v53 + battlePointPhaseMaster;
    }
    v54 = this->fields.setting;
    if ( !v54 )
      goto LABEL_112;
    v55 = v54->fields.effect;
    if ( !v55 )
      goto LABEL_112;
    pointEffectPrefab = (Il2CppObject *)v55->fields.pointEffectPrefab;
    pointEffectRootTransform = this->fields.pointEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&currentPointValue);
    v58 = UnityEngine_Object__Instantiate_object__49903816(
            pointEffectPrefab,
            pointEffectRootTransform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v58, 0LL, 0LL);
    if ( (battlePointPhaseMaster & 1) == 0 )
    {
      if ( !v58 )
        goto LABEL_112;
      ComponentInChildren_object__49687160 = UnityEngine_GameObject__GetComponentInChildren_object__49687160(
                                               (UnityEngine_GameObject_o *)v58,
                                               1,
                                               (const MethodInfo_2F62A78 *)Method_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem____76905640);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v58,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ComponentInChildren_object__49687160, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
        battlePointPhaseMaster = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (battlePointPhaseMaster & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_112;
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 1, 0LL);
          if ( !ComponentInChildren_object__49687160 )
            goto LABEL_112;
          m_ParticleSystem = UnityEngine_ParticleSystem__get_main(
                               (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__49687160,
                               0LL).fields.m_ParticleSystem;
          battlePointPhaseMaster = (__int64)UnityEngine_ParticleSystem__get_emission(
                                              (UnityEngine_ParticleSystem_o *)ComponentInChildren_object__49687160,
                                              0LL).fields.m_ParticleSystem;
          v168 = battlePointPhaseMaster;
          v64 = this->fields.setting;
          if ( !v64 )
            goto LABEL_112;
          v65 = v64->fields.effect;
          if ( !v65 )
            goto LABEL_112;
          pointEffectSpeedUpBorderEffectNum = v65->fields.pointEffectSpeedUpBorderEffectNum;
          pointEffectSpeedUpCoefficient = v65->fields.pointEffectSpeedUpCoefficient;
          if ( !System_MathF_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_MathF_TypeInfo, *(_QWORD *)&currentPointValue);
          v68 = pointEffectSpeedUpCoefficient * (float)(v45 - pointEffectSpeedUpBorderEffectNum);
          if ( !byte_4B19297 )
          {
            sub_1BCA7E0(&System_Math_TypeInfo, *(_QWORD *)&currentPointValue, v63.fields.m_ParticleSystem);
            byte_4B19297 = 1;
          }
          v69 = v68 + 1.0;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&currentPointValue);
          v70 = System_Math__Max_63220236(1.0, v69, 0LL);
          v171.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
          v71 = v70;
          UnityEngine_ParticleSystem_MainModule__set_simulationSpeed(v171, v70, 0LL);
          v172.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v168;
          if ( UnityEngine_ParticleSystem_EmissionModule__get_burstCount(v172, 0LL) < 1 )
          {
            repeatInterval = 0.0;
          }
          else
          {
            v173.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v168;
            UnityEngine_ParticleSystem_EmissionModule__GetBurst(&v166, v173, 0, 0LL);
            v167 = v166;
            repeatInterval = UnityEngine_ParticleSystem_Burst__get_repeatInterval(&v167, 0LL);
            UnityEngine_ParticleSystem_Burst__set_cycleCount(&v167, v45, 0LL);
            v174.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v168;
            v165 = v167;
            UnityEngine_ParticleSystem_EmissionModule__SetBurst(v174, 0, &v165, 0LL);
          }
          CommonEffectComponent__Resume((CommonEffectComponent_o *)Component_object, 0, 0LL);
          beforeEntity = this->fields.beforeEntity;
          if ( !beforeEntity )
            goto LABEL_112;
          v74 = beforeEntity->fields.phase;
          this->fields.lastStepUpEffectIdInTween = -1;
          this->fields.firstPhaseInTween = v74;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          battlePointPhaseMaster = sub_1BCA888(object___TypeInfo, 12LL);
          if ( !battlePointPhaseMaster )
            goto LABEL_112;
          v82 = (System_Object_array *)battlePointPhaseMaster;
          v83 = StringLiteral_19858/*"from"*/;
          if ( StringLiteral_19858/*"from"*/ )
          {
            v83 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v82->obj.klass->_1.element_class);
            if ( !v83 )
              goto LABEL_114;
            v84 = StringLiteral_19858/*"from"*/;
          }
          else
          {
            v84 = 0LL;
          }
          if ( !v82->max_length )
            goto LABEL_113;
          v82->m_Items[0] = (Il2CppObject *)v84;
          sub_1BCA784((PartyOrganizationUtility_o *)v82->m_Items, v84, v76, v77, v78, v79, v80, v81);
          LODWORD(v166.fields.m_Time) = this->fields.beforePointValue;
          v83 = j_il2cpp_value_box_0(int_TypeInfo, &v166);
          v91 = v83;
          if ( !v83 || (v83 = sub_1BCA91C(v83, v82->obj.klass->_1.element_class)) != 0 )
          {
            if ( v82->max_length <= 1 )
              goto LABEL_113;
            v82->m_Items[1] = (Il2CppObject *)v91;
            sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[1], v91, v85, v86, v87, v88, v89, v90);
            v83 = StringLiteral_24219/*"to"*/;
            if ( StringLiteral_24219/*"to"*/ )
            {
              v83 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v82->obj.klass->_1.element_class);
              if ( !v83 )
                goto LABEL_114;
              v84 = StringLiteral_24219/*"to"*/;
            }
            else
            {
              v84 = 0LL;
            }
            if ( v82->max_length <= 2 )
              goto LABEL_113;
            v82->m_Items[2] = (Il2CppObject *)v84;
            sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[2], v84, v92, v93, v94, v95, v96, v97);
            v164 = v3;
            v83 = j_il2cpp_value_box_0(int_TypeInfo, &v164);
            v104 = v83;
            if ( !v83 || (v83 = sub_1BCA91C(v83, v82->obj.klass->_1.element_class)) != 0 )
            {
              if ( v82->max_length <= 3 )
                goto LABEL_113;
              v82->m_Items[3] = (Il2CppObject *)v104;
              sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[3], v104, v98, v99, v100, v101, v102, v103);
              v83 = StringLiteral_22521/*"onupdate"*/;
              if ( StringLiteral_22521/*"onupdate"*/ )
              {
                v83 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v82->obj.klass->_1.element_class);
                if ( !v83 )
                  goto LABEL_114;
                v84 = StringLiteral_22521/*"onupdate"*/;
              }
              else
              {
                v84 = 0LL;
              }
              if ( v82->max_length <= 4 )
                goto LABEL_113;
              v82->m_Items[4] = (Il2CppObject *)v84;
              sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[4], v84, v105, v106, v107, v108, v109, v110);
              v83 = StringLiteral_15351/*"UpdateGaugeValue"*/;
              if ( StringLiteral_15351/*"UpdateGaugeValue"*/ )
              {
                v83 = sub_1BCA91C(StringLiteral_15351/*"UpdateGaugeValue"*/, v82->obj.klass->_1.element_class);
                if ( !v83 )
                  goto LABEL_114;
                v84 = StringLiteral_15351/*"UpdateGaugeValue"*/;
              }
              else
              {
                v84 = 0LL;
              }
              if ( v82->max_length <= 5 )
                goto LABEL_113;
              v82->m_Items[5] = (Il2CppObject *)v84;
              sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[5], v84, v111, v112, v113, v114, v115, v116);
              v83 = StringLiteral_22513/*"oncomplete"*/;
              if ( StringLiteral_22513/*"oncomplete"*/ )
              {
                v83 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v82->obj.klass->_1.element_class);
                if ( !v83 )
                  goto LABEL_114;
                v84 = StringLiteral_22513/*"oncomplete"*/;
              }
              else
              {
                v84 = 0LL;
              }
              if ( v82->max_length <= 6 )
                goto LABEL_113;
              v82->m_Items[6] = (Il2CppObject *)v84;
              sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[6], v84, v117, v118, v119, v120, v121, v122);
              v83 = StringLiteral_10008/*"OnCompleteGaugeValue"*/;
              if ( StringLiteral_10008/*"OnCompleteGaugeValue"*/ )
              {
                v83 = sub_1BCA91C(StringLiteral_10008/*"OnCompleteGaugeValue"*/, v82->obj.klass->_1.element_class);
                if ( !v83 )
                  goto LABEL_114;
                v84 = StringLiteral_10008/*"OnCompleteGaugeValue"*/;
              }
              else
              {
                v84 = 0LL;
              }
              if ( v82->max_length <= 7 )
                goto LABEL_113;
              v82->m_Items[7] = (Il2CppObject *)v84;
              sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[7], v84, v123, v124, v125, v126, v127, v128);
              v83 = StringLiteral_22514/*"oncompleteparams"*/;
              if ( StringLiteral_22514/*"oncompleteparams"*/ )
              {
                v83 = sub_1BCA91C(StringLiteral_22514/*"oncompleteparams"*/, v82->obj.klass->_1.element_class);
                if ( !v83 )
                  goto LABEL_114;
                v84 = StringLiteral_22514/*"oncompleteparams"*/;
              }
              else
              {
                v84 = 0LL;
              }
              if ( v82->max_length <= 8 )
                goto LABEL_113;
              v82->m_Items[8] = (Il2CppObject *)v84;
              sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[8], v84, v129, v130, v131, v132, v133, v134);
              v163 = v3;
              v83 = j_il2cpp_value_box_0(int_TypeInfo, &v163);
              v141 = v83;
              if ( !v83 || (v83 = sub_1BCA91C(v83, v82->obj.klass->_1.element_class)) != 0 )
              {
                if ( v82->max_length <= 9 )
                  goto LABEL_113;
                v82->m_Items[9] = (Il2CppObject *)v141;
                sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[9], v141, v135, v136, v137, v138, v139, v140);
                v83 = StringLiteral_24178/*"time"*/;
                if ( StringLiteral_24178/*"time"*/ )
                {
                  v83 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v82->obj.klass->_1.element_class);
                  if ( !v83 )
                    goto LABEL_114;
                  v84 = StringLiteral_24178/*"time"*/;
                }
                else
                {
                  v84 = 0LL;
                }
                if ( v82->max_length <= 0xA )
                  goto LABEL_113;
                v82->m_Items[10] = (Il2CppObject *)v84;
                sub_1BCA784((PartyOrganizationUtility_o *)&v82->m_Items[10], v84, v142, v143, v144, v145, v146, v147);
                v162 = (float)(repeatInterval * (float)v45) / v71;
                v83 = j_il2cpp_value_box_0(float_TypeInfo, &v162);
                v154 = v83;
                if ( !v83 || (v83 = sub_1BCA91C(v83, v82->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v82->max_length > 0xB )
                  {
                    v82->m_Items[11] = (Il2CppObject *)v154;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)&v82->m_Items[11],
                      v154,
                      v148,
                      v149,
                      v150,
                      v151,
                      v152,
                      v153);
                    if ( !iTween_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v155);
                    v156 = iTween__Hash(v82, 0LL);
                    iTween__ValueTo(gameObject, v156, 0LL);
                    v158 = this->fields.setting;
                    if ( v158 )
                    {
                      v159 = v158->fields.effect;
                      if ( v159 )
                      {
                        v160 = BattlePointGaugeComponent__PlaySeInEffectTiming(
                                 v159->fields.effectSeName,
                                 v45,
                                 repeatInterval / v71,
                                 v157);
                        UnityEngine_MonoBehaviour__StartCoroutine_70139516(
                          (UnityEngine_MonoBehaviour_o *)this,
                          v160,
                          0LL);
                        return;
                      }
                    }
LABEL_112:
                    sub_1BCAA3C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
                  }
LABEL_113:
                  sub_1BCAA44(v83, v84);
                }
              }
            }
          }
LABEL_114:
          v161 = sub_1BCAA60(v83);
          sub_1BCA908(v161, 0LL);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x19
  BattlePointGaugeSetting_o *setting; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  Il2CppObject *v27; // x21
  UnityEngine_Transform_o *stepUpEffectRootTransform; // x20
  Il2CppObject *v29; // x20
  __int64 v30; // x1
  Il2CppObject *Component_object; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_object__o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  UnityEngine_GameObject_o *effectPrefab; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19247 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, *(_QWORD *)&effectId, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__, v12, v13);
    sub_1BCA7E0(&BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo, v14, v15);
    byte_4B19247 = 1;
  }
  effectPrefab = 0LL;
  v16 = sub_1BCAA2C(BattlePointGaugeComponent___c__DisplayClass32_0_TypeInfo, *(_QWORD *)&effectId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_17;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_DWORD *)(v16 + 24) = effectId;
  if ( this->fields.lastStepUpEffectIdInTween == effectId )
    return;
  setting = this->fields.setting;
  if ( !setting )
    goto LABEL_17;
  if ( BattlePointGaugeSetting__TryGetStepUpEffect(setting, effectId, &effectPrefab, v25) )
  {
    this->fields.lastStepUpEffectIdInTween = *(_DWORD *)(v16 + 24);
    v27 = (Il2CppObject *)effectPrefab;
    stepUpEffectRootTransform = this->fields.stepUpEffectRootTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
    v29 = UnityEngine_Object__Instantiate_object__49903816(
            v27,
            stepUpEffectRootTransform,
            (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
    setting = (BattlePointGaugeSetting_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v29, 0LL, 0LL);
    if ( ((unsigned __int8)setting & 1) == 0 )
    {
      if ( !v29 )
        goto LABEL_17;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v29,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        v35 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, v32, v33, v34);
        System_Action_object____ctor(
          v35,
          (Il2CppObject *)v16,
          Method_BattlePointGaugeComponent___c__DisplayClass32_0__ShowStepUpEffect_b__0__,
          0LL);
        if ( Component_object )
        {
          Component_object[12].klass = (Il2CppClass *)v35;
          sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[12], (int64_t)v35, v36, v37, v38, v39, v40, v41);
          CommonEffectComponent__Init((CommonEffectComponent_o *)Component_object, 0, 0, 0LL);
          return;
        }
LABEL_17:
        sub_1BCAA3C(setting, v18);
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
    sub_1BCAA3C(barMaskPanel, immediately);
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
    sub_1BCAA3C(barMaskPanel, method);
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
    sub_1BCAA3C(battlePointPhaseMaster, *(_QWORD *)&value);
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
    sub_1BCAA3C(battlePointPhaseMaster, *(_QWORD *)&currentPointValue);
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
  sub_1BCA784(
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
    sub_1BCAA3C(this, *(_QWORD *)&value);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  int32_t _1__state; // w8
  System_String_o *seName; // x0
  int count_5__2; // w8
  float elapsed_5__3; // s8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  float deltaTime; // s0
  float waitSecond; // s1
  float v16; // s0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_4B19249 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__, method, v2);
    byte_4B19249 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    elapsed_5__3 = this->fields._elapsed_5__3;
    this->fields.__1__state = -1;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    waitSecond = this->fields.waitSecond;
    v16 = elapsed_5__3 + deltaTime;
    this->fields._elapsed_5__3 = v16;
    if ( v16 < waitSecond )
    {
LABEL_15:
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    count_5__2 = this->fields._count_5__2;
    if ( waitSecond <= v16 )
    {
      do
      {
        v16 = v16 - waitSecond;
        --count_5__2;
      }
      while ( waitSecond <= v16 );
      this->fields._elapsed_5__3 = v16;
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
    v17 = Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__;
    if ( (*((_BYTE *)Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_MoveNext__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    OverwriteAssetSoundName__PlaySeContinue(v18, this->fields.seName, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattlePointGaugeComponent__PlaySeInEffectTiming_d__31_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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

  if ( (byte_4B19248 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12876/*"SetStepSprite"*/, eventName, method);
    byte_4B19248 = 1;
  }
  setting = (BattlePointGaugeSetting_o *)System_String__op_Equality(
                                           eventName,
                                           (System_String_o *)StringLiteral_12876/*"SetStepSprite"*/,
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
      sub_1BCAA3C(setting, v6);
    }
    UISprite__set_spriteName(step, (System_String_o *)setting, 0LL);
  }
}