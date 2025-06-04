void __fastcall CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B0365B & 1) == 0 )
  {
    sub_1BC3008(&CommonEffectComponent_TypeInfo, method);
    byte_4B0365B = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CutInEffectComponent__GetPrefabRoot(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *prefabRoots; // x8
  int32_t max_length; // w9

  prefabRoots = this->fields.prefabRoots;
  if ( !prefabRoots )
    sub_1BC3264(this, idx);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0LL;
  if ( max_length <= (unsigned int)idx )
    sub_1BC326C(this, *(_QWORD *)&idx, method);
  return prefabRoots->m_Items[idx];
}


bool __fastcall CutInEffectComponent__HasEvent(
        CutInEffectComponent_o *this,
        System_String_o *funcName,
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
  __int64 v13; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *Component_object; // x21
  bool v19; // w21
  __int64 v20; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Object_array *v22; // x22
  System_Func_object__bool__o **v23; // x23
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
  System_String_o *name; // x1
  UnityEngine_Object_o *Clip; // x24
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UnityEngine_AnimationEvent_array *events; // x0
  System_Func_object__bool__o *v39; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x19
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_4B0365A & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_AnimationState_TypeInfo, funcName);
    sub_1BC3008(&Method_BasicHelper_Find_AnimationEvent___, v5);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Animation___, v6);
    sub_1BC3008(&System_Func_AnimationEvent__bool__TypeInfo, v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    sub_1BC3008(&Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__, v11);
    sub_1BC3008(&CutInEffectComponent___c__DisplayClass11_0_TypeInfo, v12);
    byte_4B0365A = 1;
  }
  v13 = sub_1BC3254(CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_50;
  *(_QWORD *)(v13 + 16) = funcName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)funcName, v16, v17);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v14 )
    return 0;
  if ( !Component_object )
LABEL_50:
    sub_1BC3264(v14, v15);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0LL);
  if ( !Enumerator )
    sub_1BC3264(0LL, v20);
  v22 = 0LL;
  v23 = (System_Func_object__bool__o **)(v13 + 24);
  while ( 1 )
  {
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
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v30 = (System_Collections_IEnumerator_c **)&v28->_1.interfaceOffsets->offset;
      while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 2;
        if ( !v29 )
          goto LABEL_22;
      }
      v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 1].method;
    }
    else
    {
LABEL_22:
      v31 = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v32 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v31)(
                                            Enumerator,
                                            *(_QWORD *)(v31 + 8));
    if ( !v32 )
      goto LABEL_49;
    if ( v32->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BC3524(v32);
LABEL_49:
      sub_1BC3264(v32, v33);
    }
    name = UnityEngine_AnimationState__get_name(v32, 0LL);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip(
                                     (UnityEngine_Animation_o *)Component_object,
                                     name,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v36 = UnityEngine_Object__op_Equality(Clip, 0LL, 0LL);
    if ( !v36 )
    {
      if ( !Clip )
        sub_1BC3264(v36, v37);
      events = UnityEngine_AnimationClip__get_events((UnityEngine_AnimationClip_o *)Clip, 0LL);
      if ( events )
        v22 = (System_Object_array *)events;
      if ( events )
      {
        v39 = *v23;
        if ( !*v23 )
        {
          v39 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AnimationEvent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v39,
            (Il2CppObject *)v13,
            Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__,
            0LL);
          *v23 = v39;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v39, v40, v41);
        }
        events = (UnityEngine_AnimationEvent_array *)BasicHelper__Find_object_(
                                                       v22,
                                                       (System_Func_T__bool__o *)v39,
                                                       (const MethodInfo_2FEBEA8 *)Method_BasicHelper_Find_AnimationEvent___);
      }
      if ( events )
      {
        v19 = 1;
        goto LABEL_39;
      }
    }
  }
  v19 = 0;
LABEL_39:
  v42 = sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
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
          goto LABEL_44;
      }
      v47 = v43 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_44:
      v47 = sub_1C13570(v42, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
  }
  return v19;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CutInEffectComponent__PlayBuffEffect(
        CutInEffectComponent_o *this,
        int32_t functionIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x21
  __int64 v6; // x1
  BattlePerformance_o *v7; // x0

  if ( (byte_4B03657 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&functionIndex);
    byte_4B03657 = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0LL, 0LL) )
  {
    v7 = this->fields.battlePerformance;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
    BattlePerformance__PlayBuffInSkillCutInEffect(v7, functionIndex, 0LL);
  }
}


void __fastcall CutInEffectComponent__PlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x20
  __int64 v4; // x1
  BattlePerformance_o *v5; // x0

  if ( (byte_4B03659 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B03659 = 1;
  }
  if ( this->fields.commandSpellReserved )
  {
    battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(battlePerformance, 0LL, 0LL) )
    {
      v5 = this->fields.battlePerformance;
      if ( !v5 )
        sub_1BC3264(0LL, v4);
      BattlePerformance__PlayEnemyCommandSpellEffect(v5, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CutInEffectComponent__PlayVoiceFromIdx(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
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
        this = (CutInEffectComponent_o *)System_String__IsNullOrEmpty(voiceStrs->m_Items[idx], 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        monitor = (System_String_o **)v6[1].monitor;
        if ( !monitor )
          sub_1BC3264(this, *(_QWORD *)&idx);
        if ( *((_DWORD *)monitor + 6) > (unsigned int)idx )
        {
          CommonEffectComponent__PlayVoice(v6, monitor[idx + 4], 0LL);
          return;
        }
      }
      sub_1BC326C(this, *(_QWORD *)&idx, method);
    }
  }
}


void __fastcall CutInEffectComponent__ReservePlayCommandSpellEffect(
        CutInEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1

  if ( (byte_4B03658 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10559/*"PlayCommandSpellEffect"*/, method);
    byte_4B03658 = 1;
  }
  this->fields.commandSpellReserved = 1;
  if ( !CutInEffectComponent__HasEvent(this, (System_String_o *)StringLiteral_10559/*"PlayCommandSpellEffect"*/, v2) )
    CutInEffectComponent__PlayCommandSpellEffect(this, v4);
}


void __fastcall CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.battlePerformance = performance;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battlePerformance, (int32_t)performance, (int32_t)method, v3);
}


void __fastcall CutInEffectComponent__SetVoiceStrs(
        CutInEffectComponent_o *this,
        System_String_array *voiceStrs,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.voiceStrs = voiceStrs;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.voiceStrs, (int32_t)voiceStrs, (int32_t)method, v3);
}


void __fastcall CutInEffectComponent___c__DisplayClass11_0___ctor(
        CutInEffectComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CutInEffectComponent___c__DisplayClass11_0___HasEvent_b__0(
        CutInEffectComponent___c__DisplayClass11_0_o *this,
        UnityEngine_AnimationEvent_o *x,
        const MethodInfo *method)
{
  System_String_o *functionName; // x0

  if ( !x )
    sub_1BC3264(this, 0LL);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0LL);
  return System_String__op_Equality(functionName, this->fields.funcName, 0LL);
}