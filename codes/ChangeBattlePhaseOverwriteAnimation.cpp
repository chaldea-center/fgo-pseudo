void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42EB6CD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      (_DWORD)battleActor,
      (_DWORD)overwriteArray,
      notify);
    sub_B5D5C4(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9,
      v10,
      v11);
    byte_42EB6CD = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.overwriteList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  BattleObserver___ctor((BattleObserver_o *)this, 0LL);
  this->fields.actor = battleActor;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actor,
    (System_Int32_array **)battleActor,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v25);
  if ( notify )
  {
    v27 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v26);
    this->fields.current = v27;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.current,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
}


ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42EB6CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      phaseType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v15, v16, v17);
    byte_42EB6CF = 1;
  }
  v18 = (ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *)sub_B5D694(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.phaseType = phaseType,
        overwriteList = this->fields.overwriteList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__),
        !overwriteList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)overwriteList,
                                                                           (System_Predicate_T__o *)v22,
                                                                           (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *current; // x0

  if ( (byte_42EB6D3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)baseAnimName, (_DWORD)method, v3);
    byte_42EB6D3 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  ChangeBattlePhaseOverwriteAnimation___c_c *v42; // x0
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_0; // x21
  Il2CppObject *v45; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v54; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x20
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v56; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x21
  Il2CppObject *v58; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x20
  unsigned __int64 v71; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v74; // x1
  __int64 v75; // x3
  __int64 v76; // x20
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  __int64 v81; // x3
  __int64 v82; // x8
  unsigned __int64 v83; // x10
  int *v84; // x11
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x2
  __int64 v89; // x21
  int32_t v90; // w23
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v91; // x22
  __int64 v92; // x0
  __int64 v93; // x1
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x0
  __int64 v95; // x8
  unsigned __int64 v96; // x10
  int *v97; // x11
  __int64 v98; // x0

  if ( (byte_42EB6CE & 1) == 0 )
  {
    sub_B5D5C4(
      &ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo,
      (_DWORD)overwriteEntArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v33, v34, v35);
    sub_B5D5C4(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v36, v37, v38);
    sub_B5D5C4(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v39, v40, v41);
    byte_42EB6CE = 1;
  }
  v42 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v42 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_0,
      v45,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v46 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v46->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v46->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v54 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v55 = v53;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v54 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  v56 = v54->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v56->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v56 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v58 = (Il2CppObject *)v56->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v58,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v59 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v59->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v59->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
  }
  v66 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v55,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_1CB72CC *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v66 )
    sub_B5D69C(0LL, v67);
  klass = v66->klass;
  v70 = v66;
  if ( *(_WORD *)&v66->klass->_2.bitflags1 )
  {
    v71 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      ++v71;
      p_offset += 4;
      if ( v71 >= *(unsigned __int16 *)&v66->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AF54C0(
                 v66,
                 System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo,
                 0LL,
                 v68);
  }
  v76 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v70,
          *(_QWORD *)(p_method + 8));
  if ( !v76 )
    sub_B5D69C(0LL, v74);
  while ( 1 )
  {
    v77 = *(_QWORD *)v76;
    if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
    {
      v78 = 0LL;
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v79 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v78;
        v79 += 4;
        if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
          goto LABEL_31;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_31:
      v80 = sub_AF54C0(v76, System_Collections_IEnumerator_TypeInfo, 0LL, v75);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8)) & 1) == 0 )
      break;
    v82 = *(_QWORD *)v76;
    if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
    {
      v83 = 0LL;
      v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v84 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        ++v83;
        v84 += 4;
        if ( v83 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
          goto LABEL_38;
      }
      v85 = v82 + 16LL * *v84 + 312;
    }
    else
    {
LABEL_38:
      v85 = sub_AF54C0(v76, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL, v81);
    }
    v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v76, *(_QWORD *)(v85 + 8));
    v89 = v86;
    if ( !v86 )
      sub_B5D69C(0LL, v87);
    v90 = *(_DWORD *)(v86 + 28);
    v91 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v90, v88);
    if ( !v91 )
    {
      v91 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_B5D694(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v91, 0LL);
      if ( !v91 )
        sub_B5D69C(v92, v93);
      v91->fields.phase = v90;
      overwriteList = this->fields.overwriteList;
      if ( !overwriteList )
        sub_B5D69C(0LL, v93);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)overwriteList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v91,
      *(System_String_o **)(v89 + 40),
      *(System_String_o **)(v89 + 48),
      0LL);
  }
  v95 = *(_QWORD *)v76;
  if ( *(_WORD *)(*(_QWORD *)v76 + 298LL) )
  {
    v96 = 0LL;
    v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v97 - 1) != System_IDisposable_TypeInfo )
    {
      ++v96;
      v97 += 4;
      if ( v96 >= *(unsigned __int16 *)(*(_QWORD *)v76 + 298LL) )
        goto LABEL_50;
    }
    v98 = v95 + 16LL * *v97 + 312;
  }
  else
  {
LABEL_50:
    v98 = sub_AF54C0(v76, System_IDisposable_TypeInfo, 0LL, v81);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v98)(v76, *(_QWORD *)(v98 + 8));
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

  if ( (byte_42EB6D1 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B5D5C4(
                                                      &UnityEngine_Object_TypeInfo,
                                                      (_DWORD)bActor,
                                                      (_DWORD)originalAnim,
                                                      method);
    byte_42EB6D1 = 1;
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
      return !System_String__Equals_44565128(v6, v10->fields.currentCommonAnimName, 0LL);
LABEL_15:
    sub_B5D69C(this, bActor);
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

  if ( (byte_42EB6D2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)bActor, (_DWORD)baseAnimName, method);
    byte_42EB6D2 = 1;
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
    sub_B5D69C(current, bActor);
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
  __int64 v3; // x3
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct BattleActorControl_o *actor; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_String_o *PlayedOriginalAnimName_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v18; // x3

  if ( (byte_42EB6D0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)notify, (_DWORD)method, v3);
    byte_42EB6D0 = 1;
  }
  v6 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v6;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.current,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  actor = this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL);
  if ( v14 )
  {
    if ( !actor )
      sub_B5D69C(v14, v15);
    PlayedOriginalAnimName_k__BackingField = actor->fields._PlayedOriginalAnimName_k__BackingField;
    IsNullOrEmpty = System_String__IsNullOrEmpty(PlayedOriginalAnimName_k__BackingField, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           actor,
           PlayedOriginalAnimName_k__BackingField,
           v18) )
    {
      BattleActorControl__playAnimation_24205092(actor, PlayedOriginalAnimName_k__BackingField, 0, 0LL);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20

  if ( (byte_42E5E49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5, v6, v7);
    byte_42E5E49 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v8;
  sub_B5D560(&this->fields.dicOverwriteName);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_42E5E47 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__,
      (_DWORD)targetName,
      (_DWORD)overwriteName,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7, v8, v9);
    byte_42E5E47 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_B5D69C(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
    (System_Xml_XmlQualifiedName_o *)targetName,
    (System_Xml_Schema_XmlSchemaObject_o *)overwriteName,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_42E5E48 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__,
      (_DWORD)targetName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E5E48 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dicOverwriteName,
                                  (System_Type_o *)targetName,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_B5D69C(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E46 & 1) == 0 )
  {
    sub_B5D5C4(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1, v2, v3);
    byte_42E5E46 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}