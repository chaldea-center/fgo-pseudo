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

  if ( (byte_40FCF8A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__,
      battleActor);
    sub_B16FFC(
      &System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
      v9);
    byte_40FCF8A = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
                                                                                                  battleActor,
                                                                                                  overwriteArray,
                                                                                                  notify,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__);
  this->fields.overwriteList = (struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *)v10;
  sub_B16F98(
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
  sub_B16F98(
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
    sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40FCF8C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__,
      *(_QWORD *)&phaseType);
    sub_B16FFC(&Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__, v7);
    sub_B16FFC(&System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo, v8);
    sub_B16FFC(&Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__, v9);
    sub_B16FFC(&ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo, v10);
    byte_40FCF8C = 1;
  }
  v11 = (ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_o *)sub_B170CC(
                                                                        ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0_TypeInfo,
                                                                        *(_QWORD *)&phaseType,
                                                                        method,
                                                                        v3,
                                                                        v4);
  ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.phaseType = phaseType,
        overwriteList = this->fields.overwriteList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_ChangeBattlePhaseOverwriteAnimation___c__DisplayClass6_0__FindOverwriteForDetailPhase_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor__),
        !overwriteList) )
  {
    sub_B170D4();
  }
  return (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)overwriteList,
                                                                           (System_Predicate_T__o *)v17,
                                                                           (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find__);
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
    sub_B170D4();
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

  if ( (byte_40FCF90 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, baseAnimName);
    byte_40FCF90 = 1;
  }
  if ( System_String__IsNullOrEmpty(baseAnimName, 0LL) )
    return (System_String_o *)StringLiteral_1;
  current = this->fields.current;
  if ( !current )
    return (System_String_o *)StringLiteral_1;
  else
    return ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(current, baseAnimName, 0LL);
}


void __fastcall ChangeBattlePhaseOverwriteAnimation__InitOverwriteInfo(
        ChangeBattlePhaseOverwriteAnimation_o *this,
        ServantAnimationOverwriteEntity_array *overwriteEntArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  ChangeBattlePhaseOverwriteAnimation___c_c *v19; // x0
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_0; // x21
  Il2CppObject *v22; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  ChangeBattlePhaseOverwriteAnimation___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x20
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v37; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x21
  Il2CppObject *v39; // x22
  struct ChangeBattlePhaseOverwriteAnimation___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x20
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v53; // x20
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x0
  const MethodInfo *v63; // x2
  __int64 v64; // x21
  int32_t v65; // w23
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *v70; // x22
  struct System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__o *overwriteList; // x0
  __int64 v72; // x8
  unsigned __int64 v73; // x10
  int *v74; // x11
  __int64 v75; // x0

  if ( (byte_40FCF8B & 1) == 0 )
  {
    sub_B16FFC(&ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo, overwriteEntArray);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___, v8);
    sub_B16FFC(&Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__, v9);
    sub_B16FFC(&System_Func_ServantAnimationOverwriteEntity__int__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__,
      v15);
    sub_B16FFC(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__, v16);
    sub_B16FFC(&Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__, v17);
    sub_B16FFC(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v18);
    byte_40FCF8B = 1;
  }
  v19 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v19 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_ServantAnimationOverwriteEntity__int__TypeInfo,
                                                                                overwriteEntArray,
                                                                                method,
                                                                                v3,
                                                                                v4);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_0,
      v22,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v23 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v23->__9__5_0 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)overwriteEntArray,
          (System_Func_TSource__TKey__o *)_9__5_0,
          (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_ServantAnimationOverwriteEntity__int___);
  v35 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  v36 = v30;
  if ( (BYTE3(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo);
    v35 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v37->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v37 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_ServantAnimationOverwriteEntity__int__TypeInfo,
                                                                                v31,
                                                                                v32,
                                                                                v33,
                                                                                v34);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v39,
      Method_ChangeBattlePhaseOverwriteAnimation___c__InitOverwriteInfo_b__5_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ServantAnimationOverwriteEntity__int___ctor__);
    v40 = ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
    v40->__9__5_1 = (struct System_Func_ServantAnimationOverwriteEntity__int__o *)_9__5_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v36,
          (System_Func_TSource__TKey__o *)_9__5_1,
          (const MethodInfo_19C46C4 *)Method_System_Linq_Enumerable_ThenByDescending_ServantAnimationOverwriteEntity__int___);
  if ( !v47 )
    sub_B170D4();
  klass = v47->klass;
  v49 = v47;
  if ( *(_WORD *)&v47->klass->_2.bitflags1 )
  {
    v50 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo )
    {
      ++v50;
      p_offset += 4;
      if ( v50 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AAFEF8(v47, System_Collections_Generic_IEnumerable_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
  }
  v53 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v49,
          *(_QWORD *)(p_method + 8));
  if ( !v53 )
    sub_B170D4();
  while ( 1 )
  {
    v54 = *(_QWORD *)v53;
    if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
    {
      v55 = 0LL;
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v56 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
          goto LABEL_31;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_31:
      v57 = sub_AAFEF8(v53, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8)) & 1) == 0 )
      break;
    v58 = *(_QWORD *)v53;
    if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__c **)v60 - 1) != System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
          goto LABEL_38;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_38:
      v61 = sub_AAFEF8(v53, System_Collections_Generic_IEnumerator_ServantAnimationOverwriteEntity__TypeInfo, 0LL);
    }
    v62 = (*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
    v64 = v62;
    if ( !v62 )
      sub_B170D4();
    v65 = *(_DWORD *)(v62 + 28);
    v70 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForDetailPhase(this, v65, v63);
    if ( !v70 )
    {
      v70 = (ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *)sub_B170CC(
                                                                              ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_TypeInfo,
                                                                              v66,
                                                                              v67,
                                                                              v68,
                                                                              v69);
      ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(v70, 0LL);
      if ( !v70 )
        sub_B170D4();
      v70->fields.phase = v65;
      overwriteList = this->fields.overwriteList;
      if ( !overwriteList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)overwriteList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add__);
    }
    ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Add(
      v70,
      *(System_String_o **)(v64 + 40),
      *(System_String_o **)(v64 + 48),
      0LL);
  }
  v72 = *(_QWORD *)v53;
  if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
  {
    v73 = 0LL;
    v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v74 - 1) != System_IDisposable_TypeInfo )
    {
      ++v73;
      v74 += 4;
      if ( v73 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
        goto LABEL_50;
    }
    v75 = v72 + 16LL * *v74 + 312;
  }
  else
  {
LABEL_50:
    v75 = sub_AAFEF8(v53, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v75)(v53, *(_QWORD *)(v75 + 8));
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

  if ( (byte_40FCF8E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, bActor);
    byte_40FCF8E = 1;
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
  if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL) )
  {
    v10 = bActor->fields.fbxcomponent;
    if ( v10 && v6 )
      return !System_String__Equals_43731072(v6, v10->fields.currentCommonAnimName, 0LL);
LABEL_15:
    sub_B170D4();
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

  if ( (byte_40FCF8F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, bActor);
    byte_40FCF8F = 1;
  }
  current = this->fields.current;
  if ( current )
  {
    v8 = ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(current, baseAnimName, 0LL);
    if ( bActor )
      goto LABEL_5;
LABEL_9:
    sub_B170D4();
  }
  v8 = (System_String_o *)StringLiteral_1;
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
  System_String_o *PlayedOriginalAnimName_k__BackingField; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x3

  if ( (byte_40FCF8D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, notify);
    byte_40FCF8D = 1;
  }
  v5 = ChangeBattlePhaseOverwriteAnimation__FindOverwriteForPhase(this, notify, method);
  this->fields.current = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.current, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  actor = this->fields.actor;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL) )
  {
    if ( !actor )
      sub_B170D4();
    PlayedOriginalAnimName_k__BackingField = actor->fields._PlayedOriginalAnimName_k__BackingField;
    IsNullOrEmpty = System_String__IsNullOrEmpty(PlayedOriginalAnimName_k__BackingField, 0LL);
    if ( !IsNullOrEmpty
      && ChangeBattlePhaseOverwriteAnimation__IsModifiedOverwritedAnim(
           (ChangeBattlePhaseOverwriteAnimation_o *)IsNullOrEmpty,
           actor,
           PlayedOriginalAnimName_k__BackingField,
           v15) )
    {
      BattleActorControl__playAnimation_32029680(actor, PlayedOriginalAnimName_k__BackingField, 0, 0LL);
    }
  }
}


void __fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData___ctor(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F70B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    byte_40F70B9 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.dicOverwriteName = (struct System_Collections_Generic_Dictionary_string__string__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dicOverwriteName,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  struct System_Collections_Generic_Dictionary_string__string__o *v9; // x0

  if ( (byte_40F70B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, v7);
    byte_40F70B7 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return;
  }
  v9 = this->fields.dicOverwriteName;
  if ( !v9 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
    (System_Xml_XmlQualifiedName_o *)targetName,
    (System_Xml_Schema_XmlSchemaObject_o *)overwriteName,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


System_String_o *__fastcall ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData__Find(
        ChangeBattlePhaseOverwriteAnimation_AnimationOverwriteData_o *this,
        System_String_o *targetName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *dicOverwriteName; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v8; // x0

  if ( (byte_40F70B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__, targetName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__get_Item__, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F70B8 = 1;
  }
  dicOverwriteName = this->fields.dicOverwriteName;
  if ( !dicOverwriteName )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)dicOverwriteName,
         (System_Xml_XmlQualifiedName_o *)targetName,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    v8 = this->fields.dicOverwriteName;
    if ( v8 )
      return (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                                  (System_Type_o *)targetName,
                                  (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__string__get_Item__);
LABEL_8:
    sub_B170D4();
  }
  return (System_String_o *)StringLiteral_1;
}


void __fastcall ChangeBattlePhaseOverwriteAnimation___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70B6 & 1) == 0 )
  {
    sub_B16FFC(&ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1);
    byte_40F70B6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ChangeBattlePhaseOverwriteAnimation___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ChangeBattlePhaseOverwriteAnimation___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.type;
}


int32_t __fastcall ChangeBattlePhaseOverwriteAnimation___c___InitOverwriteInfo_b__5_1(
        ChangeBattlePhaseOverwriteAnimation___c_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.phase == this->fields.phaseType;
}