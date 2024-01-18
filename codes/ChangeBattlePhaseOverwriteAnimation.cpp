void __fastcall ChangeBattlePhaseOverwriteAnimation___ctor(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        BattleActorControl_o *battleActor,
        ServantAnimationOverwriteEntity_array *overwriteArray,
        ChangeBattlePhaseNotify_o *notify,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_418A112 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      battleActor);
    sub_B2C35C(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9);
    byte_418A112 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BattleObserver___ctor((BattleObserver_o *)this, 0LL);
  this->fields.actor = battleActor;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actor,
    (System_Int32_array **)battleActor,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(this, overwriteArray, v23);
  if ( notify )
  {
    v25 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, v24);
    this->fields.current = v25;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.current,
      (System_Int32_array **)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
}


// local variable allocation has failed, the output may be wrong!
ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *__fastcall ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        int32_t phaseType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_418A114 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      *(_QWORD *)&phaseType);
    sub_B2C35C(&Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__, v5);
    sub_B2C35C(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v6);
    sub_B2C35C(&Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__, v7);
    sub_B2C35C(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v8);
    byte_418A114 = 1;
  }
  v9 = (ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *)sub_B2C42C(ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo);
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.phaseType = phaseType,
        overwriteList = this->fields.overwriteList,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__),
        !overwriteList) )
  {
    sub_B2C434(v10, v11);
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)overwriteList,
                                                                           (System_Predicate_T__o *)v13,
                                                                           (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_B2C434(this, 0LL);
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

  if ( (byte_418A118 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, baseAnimName);
    byte_418A118 = 1;
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
  ChangeBattlePhaseOverwriteAnimation___c_c *v17; // x0
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_0; // x21
  Il2CppObject *v20; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  ChangeBattlePhaseOverwriteAnimation___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x20
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v31; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x21
  Il2CppObject *v33; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x20
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // x20
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  __int64 v64; // x21
  int32_t v65; // w23
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v66; // x22
  __int64 v67; // x0
  __int64 v68; // x1
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x0
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0

  if ( (byte_418A113 & 1) == 0 )
  {
    sub_B2C35C(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo, overwriteEntArray);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v6);
    sub_B2C35C(&Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__, v7);
    sub_B2C35C(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v11);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v13);
    sub_B2C35C(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v14);
    sub_B2C35C(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v15);
    sub_B2C35C(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v16);
    byte_418A113 = 1;
  }
  v17 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v17 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_0,
      v20,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v21 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v21->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v29 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v30 = v28;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v29 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  v31 = v29->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v31->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v31 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)v31->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ServantAnimationOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v33,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v34 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v34->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v30,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_1A9AAC0 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v41 )
    sub_B2C434(0LL, v42);
  klass = v41->klass;
  v45 = v41;
  if ( *(_WORD *)&v41->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      ++v46;
      p_offset += 4;
      if ( v46 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AC5258(
                 v41,
                 System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo,
                 0LL,
                 v43);
  }
  v51 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v45,
          *(_QWORD *)(p_method + 8));
  if ( !v51 )
    sub_B2C434(0LL, v49);
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v53 = 0LL;
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        v54 += 4;
        if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_31;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_31:
      v55 = sub_AC5258(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v57 = *(_QWORD *)v51;
    if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v59 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
          goto LABEL_38;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_38:
      v60 = sub_AC5258(v51, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL, v56);
    }
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v51, *(_QWORD *)(v60 + 8));
    v64 = v61;
    if ( !v61 )
      sub_B2C434(0LL, v62);
    v65 = *(_DWORD *)(v61 + 28);
    v66 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v65, v63);
    if ( !v66 )
    {
      v66 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_B2C42C(ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v66, 0LL);
      if ( !v66 )
        sub_B2C434(v67, v68);
      v66->fields.phase = v65;
      overwriteList = this->fields.overwriteList;
      if ( !overwriteList )
        sub_B2C434(0LL, v68);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)overwriteList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v66,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v66,
      *(System_String_o **)(v64 + 40),
      *(System_String_o **)(v64 + 48),
      0LL);
  }
  v70 = *(_QWORD *)v51;
  if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
  {
    v71 = 0LL;
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      ++v71;
      v72 += 4;
      if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
        goto LABEL_50;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_50:
    v73 = sub_AC5258(v51, System_IDisposable_TypeInfo, 0LL, v56);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v73)(v51, *(_QWORD *)(v73 + 8));
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

  if ( (byte_418A116 & 1) == 0 )
  {
    this = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, bActor);
    byte_418A116 = 1;
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
      return !System_String__Equals_44292872(v6, v10->fields.currentCommonAnimName, 0LL);
LABEL_15:
    sub_B2C434(this, bActor);
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

  if ( (byte_418A117 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, bActor);
    byte_418A117 = 1;
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
    sub_B2C434(current, bActor);
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

  if ( (byte_418A115 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, notify);
    byte_418A115 = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.current, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
      sub_B2C434(v13, v14);
    PlayedOriginalAnimName_k__BackingField = actor->fields._PlayedOriginalAnimName_k__BackingField;
    IsNullOrEmpty = System_String__IsNullOrEmpty(PlayedOriginalAnimName_k__BackingField, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           actor,
           PlayedOriginalAnimName_k__BackingField,
           v17) )
    {
      BattleActorControl__playAnimation_32449920(actor, PlayedOriginalAnimName_k__BackingField, 0, 0LL);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20

  if ( (byte_4184EC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v3);
    byte_4184EC1 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v4;
  sub_B2C2F8(&this->fields.dicOverwriteName, v4);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        System_String_o *overwriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4184EBF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7);
    byte_4184EBF = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
LABEL_7:
    sub_B2C434(dicOverwriteName, targetName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
    (System_Xml_XmlQualifiedName_o *)targetName,
    (System_Xml_Schema_XmlSchemaObject_o *)overwriteName,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0

  if ( (byte_4184EC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4184EC0 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    dicOverwriteName = this->fields.dicOverwriteName;
    if ( dicOverwriteName )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)dicOverwriteName,
                                  (System_Type_o *)targetName,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_B2C434(dicOverwriteName, targetName);
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x0

  if ( (byte_4184EBE & 1) == 0 )
  {
    sub_B2C35C(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1);
    byte_4184EBE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ChangeBattlePhaseOverwriteAnimation___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.phase == this->fields.phaseType;
}