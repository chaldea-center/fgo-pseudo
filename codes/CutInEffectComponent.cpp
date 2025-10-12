void CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3907A & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C3907A = 1;
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
    sub_1C32E7C(this);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0;
  if ( max_length <= (unsigned int)idx )
    sub_1C32E84(this);
  return prefabRoots->m_Items[idx];
}


bool CutInEffectComponent__HasEvent(CutInEffectComponent_o *this, System_String_o *funcName, const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Component_object; // x21
  bool v10; // w21
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Func_object__bool__o **v12; // x23
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_AnimationState_o *v21; // x0
  System_String_o *name; // x1
  UnityEngine_Object_o *Clip; // x24
  _BOOL8 v24; // x0
  UnityEngine_AnimationEvent_array *events; // x0
  System_Object_array *v26; // x22
  System_Func_object__bool__o *v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0

  if ( (byte_4C39079 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_Find_AnimationEvent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__);
    sub_1C32C20(&CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
    byte_4C39079 = 1;
  }
  v5 = sub_1C32E6C(CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_48;
  *(_QWORD *)(v5 + 16) = funcName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)funcName, v7, v8);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
    return 0;
  if ( !Component_object )
LABEL_48:
    sub_1C32E7C(v6);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  v12 = (System_Func_object__bool__o **)(v5 + 24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_15;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v16 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(Enumerator, *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_22;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1];
    }
    else
    {
LABEL_22:
      v20 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v21 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                            Enumerator,
                                            *(_QWORD *)(v20 + 8));
    if ( !v21 )
      goto LABEL_47;
    if ( v21->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C3313C(v21);
LABEL_47:
      sub_1C32E7C(v21);
    }
    name = UnityEngine_AnimationState__get_name(v21, 0);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, name, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v24 = UnityEngine_Object__op_Equality(Clip, 0, 0);
    if ( !v24 )
    {
      if ( !Clip )
        sub_1C32E7C(v24);
      events = UnityEngine_AnimationClip__get_events((UnityEngine_AnimationClip_o *)Clip, 0);
      if ( events )
      {
        v26 = (System_Object_array *)events;
        v27 = *v12;
        if ( !*v12 )
        {
          v27 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_AnimationEvent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v27,
            (Il2CppObject *)v5,
            Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__,
            0);
          *v12 = v27;
          sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v27, v28, v29);
        }
        events = (UnityEngine_AnimationEvent_array *)BasicHelper__Find_object_(
                                                       v26,
                                                       (System_Func_T__bool__o *)v27,
                                                       (const MethodInfo_30C735C *)Method_BasicHelper_Find_AnimationEvent___);
      }
      if ( events )
      {
        v10 = 1;
        goto LABEL_37;
      }
    }
  }
  v10 = 0;
LABEL_37:
  v30 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_42;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_42:
      v35 = sub_1C83438(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  return v10;
}


void CutInEffectComponent__PlayBuffEffect(
        CutInEffectComponent_o *this,
        int32_t functionIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x21
  BattlePerformance_o *v6; // x0

  if ( (byte_4C39076 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39076 = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0, 0) )
  {
    v6 = this->fields.battlePerformance;
    if ( !v6 )
      sub_1C32E7C(0);
    BattlePerformance__PlayBuffInSkillCutInEffect(v6, functionIndex, 0);
  }
}


void CutInEffectComponent__PlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x20
  BattlePerformance_o *v4; // x0

  if ( (byte_4C39078 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C39078 = 1;
  }
  if ( this->fields.commandSpellReserved )
  {
    battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battlePerformance, 0, 0) )
    {
      v4 = this->fields.battlePerformance;
      if ( !v4 )
        sub_1C32E7C(0);
      BattlePerformance__PlayEnemyCommandSpellEffect(v4, 1, 0);
    }
  }
}


void CutInEffectComponent__PlayVoiceFromIdx(CutInEffectComponent_o *this, int32_t idx, const MethodInfo *method)
{
  struct System_String_array *voiceStrs; // x8
  int32_t max_length; // w9
  CommonEffectComponent_o *v6; // x19
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
          sub_1C32E7C(this);
        if ( *((_DWORD *)monitor + 6) > (unsigned int)idx )
        {
          CommonEffectComponent__PlayVoice(v6, monitor[idx + 4], 0);
          return;
        }
      }
      sub_1C32E84(this);
    }
  }
}


void CutInEffectComponent__ReservePlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4C39077 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_10651/*"PlayCommandSpellEffect"*/);
    byte_4C39077 = 1;
  }
  this->fields.commandSpellReserved = 1;
  if ( !CutInEffectComponent__HasEvent(this, (System_String_o *)StringLiteral_10651/*"PlayCommandSpellEffect"*/, v2) )
    CutInEffectComponent__PlayCommandSpellEffect(this, v4);
}


void CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battlePerformance = performance;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battlePerformance, (int32_t)performance, (int32_t)method, v3);
}


void CutInEffectComponent__SetVoiceStrs(
        CutInEffectComponent_o *this,
        System_String_array *voiceStrs,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.voiceStrs = voiceStrs;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceStrs, (int32_t)voiceStrs, (int32_t)method, v3);
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
    sub_1C32E7C(this);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0);
  return System_String__op_Equality(functionName, this->fields.funcName, 0);
}