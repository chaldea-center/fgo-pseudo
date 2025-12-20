void CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DF75 & 1) == 0 )
  {
    sub_1C94098(&CommonEffectComponent_TypeInfo);
    byte_4D2DF75 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


UnityEngine_GameObject_o *CutInEffectComponent__GetPrefabRoot(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *prefabRoots; // x8
  int32_t max_length; // w9

  prefabRoots = this->fields.prefabRoots;
  if ( !prefabRoots )
    sub_1C942F0(this, idx);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0;
  if ( max_length <= (unsigned int)idx )
    sub_1C942F8(this);
  return prefabRoots->m_Items[idx];
}


bool CutInEffectComponent__HasEvent(CutInEffectComponent_o *this, System_String_o *funcName, const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Component_object; // x21
  bool v15; // w21
  __int64 v16; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Func_object__bool__o **v18; // x23
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
  System_String_o *name; // x1
  UnityEngine_Object_o *Clip; // x24
  _BOOL8 v31; // x0
  __int64 v32; // x1
  UnityEngine_AnimationEvent_array *events; // x0
  System_Object_array *v34; // x22
  System_Func_object__bool__o *v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x19
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_4D2DF74 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AnimationState_TypeInfo);
    sub_1C94098(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C94098(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__);
    sub_1C94098(&CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
    byte_4D2DF74 = 1;
  }
  v5 = sub_1C942E4(CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_48;
  *(_QWORD *)(v5 + 16) = funcName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)funcName, v8, v9, v10, v11, v12, v13);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
    return 0;
  if ( !Component_object )
LABEL_48:
    sub_1C942F0(v6, v7);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v16);
  v18 = (System_Func_object__bool__o **)(v5 + 24);
  while ( 1 )
  {
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
      v22 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
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
      v26 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v27 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                            Enumerator,
                                            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_47;
    if ( v27->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C9468C(v27);
LABEL_47:
      sub_1C942F0(v27, v28);
    }
    name = UnityEngine_AnimationState__get_name(v27, 0);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, name, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__op_Equality(Clip, 0, 0);
    if ( !v31 )
    {
      if ( !Clip )
        sub_1C942F0(v31, v32);
      events = UnityEngine_AnimationClip__get_events((UnityEngine_AnimationClip_o *)Clip, 0);
      if ( events )
      {
        v34 = (System_Object_array *)events;
        v35 = *v18;
        if ( !*v18 )
        {
          v35 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_AnimationEvent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v35,
            (Il2CppObject *)v5,
            Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__,
            0);
          *v18 = v35;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v35, v36, v37, v38, v39, v40, v41);
        }
        events = (UnityEngine_AnimationEvent_array *)BasicHelper__Find_object_(
                                                       v34,
                                                       (System_Func_T__bool__o *)v35,
                                                       (const MethodInfo_3186034 *)Method_BasicHelper_Find_AnimationEvent___);
      }
      if ( events )
      {
        v15 = 1;
        goto LABEL_37;
      }
    }
  }
  v15 = 0;
LABEL_37:
  v42 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v42 )
  {
    v43 = *(_QWORD *)v42;
    v44 = v42;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_42;
      }
      v47 = v43 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_42:
      v47 = sub_1C6A420(v42, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
  }
  return v15;
}


void CutInEffectComponent__PlayBuffEffect(
        CutInEffectComponent_o *this,
        int32_t functionIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x21
  __int64 v6; // x1
  BattlePerformance_o *v7; // x0

  if ( (byte_4D2DF71 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF71 = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0, 0) )
  {
    v7 = this->fields.battlePerformance;
    if ( !v7 )
      sub_1C942F0(0, v6);
    BattlePerformance__PlayBuffInSkillCutInEffect(v7, functionIndex, 0);
  }
}


void CutInEffectComponent__PlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x20
  __int64 v4; // x1
  BattlePerformance_o *v5; // x0

  if ( (byte_4D2DF73 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DF73 = 1;
  }
  if ( this->fields.commandSpellReserved )
  {
    battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battlePerformance, 0, 0) )
    {
      v5 = this->fields.battlePerformance;
      if ( !v5 )
        sub_1C942F0(0, v4);
      BattlePerformance__PlayEnemyCommandSpellEffect(v5, 1, 0);
    }
  }
}


void CutInEffectComponent__PlayVoiceFromIdx(CutInEffectComponent_o *this, int32_t idx, const MethodInfo *method)
{
  struct System_String_array *voiceStrs; // x8
  int32_t max_length; // w9
  CommonEffectComponent_o *v6; // x19
  __int64 v7; // x1
  System_String_o **monitor; // x8

  voiceStrs = this->fields.voiceStrs;
  if ( voiceStrs )
  {
    max_length = voiceStrs->max_length;
    if ( max_length > idx )
    {
      if ( max_length > (unsigned int)idx )
      {
        v6 = (CommonEffectComponent_o *)this;
        this = (CutInEffectComponent_o *)System_String__IsNullOrEmpty(voiceStrs->m_Items[idx], 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        monitor = (System_String_o **)v6[1].monitor;
        if ( !monitor )
          sub_1C942F0(this, v7);
        if ( *((_DWORD *)monitor + 6) > (unsigned int)idx )
        {
          CommonEffectComponent__PlayVoice(v6, monitor[idx + 4], 0);
          return;
        }
      }
      sub_1C942F8(this);
    }
  }
}


void CutInEffectComponent__ReservePlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4D2DF72 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10692/*"PlayCommandSpellEffect"*/);
    byte_4D2DF72 = 1;
  }
  this->fields.commandSpellReserved = 1;
  if ( !CutInEffectComponent__HasEvent(this, (System_String_o *)StringLiteral_10692/*"PlayCommandSpellEffect"*/, v2) )
    CutInEffectComponent__PlayCommandSpellEffect(this, v4);
}


void CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.battlePerformance = performance;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battlePerformance,
    (int32_t)performance,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CutInEffectComponent__SetVoiceStrs(
        CutInEffectComponent_o *this,
        System_String_array *voiceStrs,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.voiceStrs = voiceStrs;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceStrs,
    (int32_t)voiceStrs,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CutInEffectComponent___c__DisplayClass11_0___ctor(
        CutInEffectComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CutInEffectComponent___c__DisplayClass11_0___HasEvent_b__0(
        CutInEffectComponent___c__DisplayClass11_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_1C942F0(this, 0);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0);
  return System_String__op_Equality(functionName, this->fields.funcName, 0);
}