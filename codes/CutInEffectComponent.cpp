void CutInEffectComponent___ctor(CutInEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5939D9B & 1) == 0 )
  {
    sub_21FFC50(&CommonEffectComponent_TypeInfo);
    byte_5939D9B = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *CutInEffectComponent__GetPrefabRoot(
        CutInEffectComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *prefabRoots; // x8
  int32_t max_length; // w9

  prefabRoots = this->fields.prefabRoots;
  if ( !prefabRoots )
    sub_21FFECC(this, *(_QWORD *)&idx);
  max_length = prefabRoots->max_length;
  if ( max_length <= idx )
    return 0;
  if ( max_length <= (unsigned int)idx )
    sub_21FFED4(this);
  return prefabRoots->m_Items[idx];
}


bool CutInEffectComponent__HasEvent(CutInEffectComponent_o *this, System_String_o *funcName, const MethodInfo *method)
{
  __int64 v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  char v16; // w21
  void *Enumerator; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_AnimationState_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_String_o *name; // x1
  __int64 v31; // x1
  UnityEngine_Object_o *Clip; // x22
  System_Object_array *events; // x22
  System_Func_object__bool__o *v34; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x20
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 *v48; // [xsp+28h] [xbp-68h]

  if ( (byte_5939D9A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AnimationState_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Find_AnimationEvent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_21FFC50(&System_Func_AnimationEvent__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__);
    sub_21FFC50(&CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
    byte_5939D9A = 1;
  }
  v5 = sub_21FFEBC(CutInEffectComponent___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_49;
  *(_QWORD *)(v5 + 16) = funcName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)funcName, v8, v9, v10, v11, v12, v13);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    v16 = 0;
    return v16 & 1;
  }
  if ( !Component_object )
LABEL_49:
    sub_21FFECC(v6, v7);
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)Component_object, 0);
  v48 = (__int64 *)Enumerator;
  while ( 1 )
  {
    if ( !v48 )
      sub_21FFECC(Enumerator, v18);
    v19 = *v48;
    v20 = *(unsigned __int16 *)(*v48 + 302);
    if ( *(_WORD *)(*v48 + 302) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_15;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_15:
      v22 = sub_2237E2C(v48, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v22)(v48, *(_QWORD *)(v22 + 8));
    if ( (v16 & 1) == 0 )
      break;
    v23 = *v48;
    v24 = *(unsigned __int16 *)(*v48 + 302);
    if ( *(_WORD *)(*v48 + 302) )
    {
      v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_22;
      }
      v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
    }
    else
    {
LABEL_22:
      v26 = sub_2237E2C(v48, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v27 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD))v26)(v48, *(_QWORD *)(v26 + 8));
    if ( !v27 )
      sub_21FFECC(0, v28);
    if ( v27->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_220024C(v27, UnityEngine_AnimationState_TypeInfo, v29);
LABEL_48:
      sub_21FFECC(Enumerator, v18);
    }
    name = UnityEngine_AnimationState__get_name(v27, 0);
    Clip = (UnityEngine_Object_o *)UnityEngine_Animation__GetClip((UnityEngine_Animation_o *)Component_object, name, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    Enumerator = (void *)UnityEngine_Object__op_Equality(Clip, 0, 0);
    if ( ((unsigned __int8)Enumerator & 1) == 0 )
    {
      if ( !Clip )
        goto LABEL_48;
      events = (System_Object_array *)UnityEngine_AnimationClip__get_events((UnityEngine_AnimationClip_o *)Clip, 0);
      if ( events )
      {
        v34 = *(System_Func_object__bool__o **)(v5 + 24);
        if ( !v34 )
        {
          v34 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AnimationEvent__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v34,
            (Il2CppObject *)v5,
            Method_CutInEffectComponent___c__DisplayClass11_0__HasEvent_b__0__,
            0);
          *(_QWORD *)(v5 + 24) = v34;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v34, v35, v36, v37, v38, v39, v40);
        }
        Enumerator = BasicHelper__Find_object_(
                       events,
                       (System_Func_T__bool__o *)v34,
                       (const MethodInfo_37DD66C *)Method_BasicHelper_Find_AnimationEvent___);
        if ( Enumerator )
          break;
      }
      else
      {
        Enumerator = 0;
      }
    }
  }
  v41 = sub_21FFDA4(v48, System_IDisposable_TypeInfo);
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
          goto LABEL_41;
      }
      v46 = v42 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_41:
      v46 = sub_2237E2C(v41, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  }
  return v16 & 1;
}


// local variable allocation has failed, the output may be wrong!
void CutInEffectComponent__PlayBuffEffect(
        CutInEffectComponent_o *this,
        int32_t functionIndex,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x21
  __int64 v6; // x1
  BattlePerformance_o *v7; // x0

  if ( (byte_5939D97 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D97 = 1;
  }
  battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&functionIndex);
  if ( !UnityEngine_Object__op_Equality(battlePerformance, 0, 0) )
  {
    v7 = this->fields.battlePerformance;
    if ( !v7 )
      sub_21FFECC(0, v6);
    BattlePerformance__PlayBuffInSkillCutInEffect(v7, functionIndex, 0);
  }
}


void CutInEffectComponent__PlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battlePerformance; // x20
  __int64 v4; // x1
  BattlePerformance_o *v5; // x0

  if ( (byte_5939D99 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939D99 = 1;
  }
  if ( this->fields.commandSpellReserved )
  {
    battlePerformance = (UnityEngine_Object_o *)this->fields.battlePerformance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(battlePerformance, 0, 0) )
    {
      v5 = this->fields.battlePerformance;
      if ( !v5 )
        sub_21FFECC(0, v4);
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
          sub_21FFECC(this, v7);
        if ( *((_DWORD *)monitor + 6) > (unsigned int)idx )
        {
          CommonEffectComponent__PlayVoice(v6, monitor[idx + 4], 0);
          return;
        }
      }
      sub_21FFED4(this);
    }
  }
}


void CutInEffectComponent__ReservePlayCommandSpellEffect(CutInEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_5939D98 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11086/*"PlayCommandSpellEffect"*/);
    byte_5939D98 = 1;
  }
  v4 = (System_String_o *)StringLiteral_11086/*"PlayCommandSpellEffect"*/;
  this->fields.commandSpellReserved = 1;
  if ( !CutInEffectComponent__HasEvent(this, v4, v2) )
    CutInEffectComponent__PlayCommandSpellEffect(this, v5);
}


void CutInEffectComponent__SetBattlePerformance(
        CutInEffectComponent_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.battlePerformance = performance;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battlePerformance,
    (int32_t)performance,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.voiceStrs = voiceStrs;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceStrs,
    (int32_t)voiceStrs,
    (System_String_o *)method,
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
    sub_21FFECC(this, 0);
  functionName = UnityEngine_AnimationEvent__get_functionName(x, 0);
  return System_String__op_Equality(functionName, this->fields.funcName, 0);
}