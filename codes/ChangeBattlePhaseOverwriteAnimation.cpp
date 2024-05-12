void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_438E46A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    byte_438E46A = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.overwriteList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  BattleObserver___ctor((BattleObserver_o *)this, 0LL);
  this->fields.actor = battleActor;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.actor,
    (System_Int32_array **)battleActor,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v22);
  if ( notify )
  {
    v24 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v23);
    this->fields.current = v24;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.current,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_438E46C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
    sub_B775C4(&Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
    sub_B775C4(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
    sub_B775C4(&Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__);
    sub_B775C4(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
    byte_438E46C = 1;
  }
  v5 = (ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *)sub_B77694(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.phaseType = phaseType,
        overwriteList = this->fields.overwriteList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__),
        !overwriteList) )
  {
    sub_B7769C(v6, v7);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)overwriteList,
                                                                           (System_Predicate_T__o *)v9,
                                                                           (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *result; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  const MethodInfo *v8; // x2

  if ( !notify )
    sub_B7769C(this, 0LL);
  result = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
             this,
             notify->fields._DetailPhase_k__BackingField,
             method);
  if ( !result )
  {
    v7 = ChangeBattlePhaseNotify__get_Phase(notify, v6);
    if ( v7 == notify->fields._DetailPhase_k__BackingField )
      return 0LL;
    else
      return ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v7, v8);
  }
  return result;
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *current; // x0

  if ( (byte_438E470 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E470 = 1;
  }
  if ( System_String__IsNullOrEmpty(baseAnimName, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  current = this->fields.current;
  if ( !current )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(current, baseAnimName, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ServantAnimationOverwriteEntity_array *overwriteEntArray,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation___c_c *v5; // x0
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_0; // x21
  Il2CppObject *v8; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v17; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x20
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v19; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x21
  Il2CppObject *v21; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x1
  __int64 v37; // x20
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x2
  __int64 v49; // x21
  int32_t v50; // w23
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0

  if ( (byte_438E46B & 1) == 0 )
  {
    sub_B775C4(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
    sub_B775C4(&Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    sub_B775C4(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    sub_B775C4(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__);
    sub_B775C4(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__);
    sub_B775C4(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_438E46B = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v5 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_0,
      v8,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v9 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v9->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v17 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v18 = v16;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v17 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v19->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v19 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v21,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v22 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v22->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v18,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_1D3D050 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v29 )
    sub_B7769C(0LL, v30);
  klass = v29->klass;
  v32 = v29;
  if ( *(_WORD *)&v29->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_B0F4C0(v29, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v37 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v32,
          *(_QWORD *)(p_method + 8));
  if ( !v37 )
    sub_B7769C(0LL, v36);
  while ( 1 )
  {
    v38 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_31;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_31:
      v41 = sub_B0F4C0(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    v42 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v44 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_38;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_38:
      v45 = sub_B0F4C0(v37, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v37, *(_QWORD *)(v45 + 8));
    v49 = v46;
    if ( !v46 )
      sub_B7769C(0LL, v47);
    v50 = *(_DWORD *)(v46 + 28);
    v51 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v50, v48);
    if ( !v51 )
    {
      v51 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_B77694(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v51, 0LL);
      if ( !v51 )
        sub_B7769C(v52, v53);
      v51->fields.phase = v50;
      overwriteList = this->fields.overwriteList;
      if ( !overwriteList )
        sub_B7769C(0LL, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)overwriteList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v51,
      *(System_String_o **)(v49 + 40),
      *(System_String_o **)(v49 + 48),
      0LL);
  }
  v55 = *(_QWORD *)v37;
  if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
  {
    v56 = 0LL;
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
        goto LABEL_50;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_50:
    v58 = sub_B0F4C0(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v37, *(_QWORD *)(v58 + 8));
}


bool __fastcall ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *originalAnim,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  bool v7; // w8
  bool result; // w0
  UnityEngine_Object_o *fbxcomponent; // x21
  struct BattleFBXComponent_o *v10; // x8

  if ( (byte_438E46E & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E46E = 1;
  }
  if ( !bActor )
    goto LABEL_15;
  v6 = BattleActorControl__OverwriteAnimation(bActor, originalAnim, 0, 0LL);
  v7 = BattleActorControl__checkAnimation(bActor, v6, 0LL);
  result = 0;
  if ( !v7 )
    return result;
  fbxcomponent = (UnityEngine_Object_o *)bActor->fields.fbxcomponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ChangeBattlePhaseOverwriteAnimation_o *)UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v10 = bActor->fields.fbxcomponent;
    if ( v10 && v6 )
      return !System_String__Equals_44889276(v6, v10->fields.currentCommonAnimName, 0LL);
LABEL_15:
    sub_B7769C(this, bActor);
  }
  return 1;
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation__Overwrite(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *bActor,
        System_String_o *baseAnimName,
        const MethodInfo *method)
{
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *current; // x0
  System_String_o *v8; // x21

  if ( (byte_438E46F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E46F = 1;
  }
  current = this->fields.current;
  if ( current )
  {
    current = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
                                                                                current,
                                                                                baseAnimName,
                                                                                0LL);
    v8 = (System_String_o *)current;
    if ( bActor )
      goto LABEL_5;
LABEL_9:
    sub_B7769C(current, bActor);
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !bActor )
    goto LABEL_9;
LABEL_5:
  if ( BattleActorControl__checkAnimation(bActor, v8, 0LL) )
    return v8;
  else
    return baseAnimName;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation__UpdateNotify(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct BattleActorControl_o *actor; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_String_o *PlayedOriginalAnimName_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v17; // x3

  if ( (byte_438E46D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E46D = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.current, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  actor = this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v13 )
  {
    if ( !actor )
      sub_B7769C(v13, v14);
    PlayedOriginalAnimName_k__BackingField = actor->fields._PlayedOriginalAnimName_k__BackingField;
    IsNullOrEmpty = System_String__IsNullOrEmpty(PlayedOriginalAnimName_k__BackingField, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           actor,
           PlayedOriginalAnimName_k__BackingField,
           v17) )
    {
      BattleActorControl__playAnimation_22508132(actor, PlayedOriginalAnimName_k__BackingField, 0, 0LL);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20

  if ( (byte_4388553 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    byte_4388553 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v3;
  sub_B77560(&this->fields.dicOverwriteName);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4388551 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4388551 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_B7769C(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
    (System_Xml_XmlQualifiedName_o *)targetName,
    (System_Xml_Schema_XmlSchemaObject_o *)overwriteName,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4388552 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388552 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dicOverwriteName,
                                  (System_Type_o *)targetName,
                                  (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_B7769C(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x0

  if ( (byte_4388550 & 1) == 0 )
  {
    sub_B775C4(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    byte_4388550 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___ctor(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_0(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.svtLimitCount;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(
        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___FindOverwriteForDetailPhase_b__0(
        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *this,
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}