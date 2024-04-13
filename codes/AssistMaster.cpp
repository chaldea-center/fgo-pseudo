void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBC69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBC69 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    355,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  AssistMaster___c__DisplayClass5_0_o *v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20

  if ( (byte_42EBC6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68845616, assistId, lv, method);
    sub_B5D5C4(&Method_System_Func_AssistEntity__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_AssistEntity__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v13, v14, v15);
    sub_B5D5C4(&AssistMaster___c__DisplayClass5_0_TypeInfo, v16, v17, v18);
    byte_42EBC6C = 1;
  }
  v19 = (AssistMaster___c__DisplayClass5_0_o *)sub_B5D694(AssistMaster___c__DisplayClass5_0_TypeInfo);
  AssistMaster___c__DisplayClass5_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.lv = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v22);
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v19,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_AssistEntity__bool___ctor__);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v24,
                             (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68845616);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  AssistMaster___c_c *v46; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__8_0; // x22
  Il2CppObject *v49; // x23
  struct AssistMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_List_TOutput__o *v57; // x21
  AssistMaster_AssistIdComparer_o *v58; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x21
  unsigned __int64 v64; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v67; // x1
  __int64 v68; // x3
  __int64 v69; // x21
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x3
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  const MethodInfo *v81; // x2
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0

  if ( (byte_42EBC6E & 1) == 0 )
  {
    sub_B5D5C4(&AssistMaster_AssistIdComparer_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Converter_DataEntityBase__AssistEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssistEntity__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_AssistEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v35, v36, v37);
    sub_B5D5C4(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v38, v39, v40);
    sub_B5D5C4(&AssistMaster___c_TypeInfo, v41, v42, v43);
    byte_42EBC6E = 1;
  }
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v46 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v46 = AssistMaster___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__8_0 = (System_Converter_string__string__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__8_0,
      v49,
      Method_AssistMaster___c__GetAvailableEntityList_b__8_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_DataEntityBase__AssistEntity___ctor__);
    v50 = AssistMaster___c_TypeInfo->static_fields;
    v50->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v50->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v57 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_1E6698C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v58 = (AssistMaster_AssistIdComparer_o *)sub_B5D694(AssistMaster_AssistIdComparer_TypeInfo);
  AssistMaster_AssistIdComparer___ctor(v58, 0LL);
  v59 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v57,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v58,
          (const MethodInfo_1CA8EFC *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v59 )
    sub_B5D69C(0LL, v60);
  klass = v59->klass;
  v63 = v59;
  if ( *(_WORD *)&v59->klass->_2.bitflags1 )
  {
    v64 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      ++v64;
      p_offset += 4;
      if ( v64 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AF54C0(v59, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL, v61);
  }
  v69 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v63,
          *(_QWORD *)(p_method + 8));
  if ( !v69 )
    sub_B5D69C(0LL, v67);
  while ( 1 )
  {
    v70 = *(_QWORD *)v69;
    if ( *(_WORD *)(*(_QWORD *)v69 + 298LL) )
    {
      v71 = 0LL;
      v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v72 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v71;
        v72 += 4;
        if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v69 + 298LL) )
          goto LABEL_23;
      }
      v73 = v70 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_23:
      v73 = sub_AF54C0(v69, System_Collections_IEnumerator_TypeInfo, 0LL, v68);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8)) & 1) == 0 )
      break;
    v75 = *(_QWORD *)v69;
    if ( *(_WORD *)(*(_QWORD *)v69 + 298LL) )
    {
      v76 = 0LL;
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v77 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        ++v76;
        v77 += 4;
        if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v69 + 298LL) )
          goto LABEL_30;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_30:
      v78 = sub_AF54C0(v69, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL, v74);
    }
    v79 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v69, *(_QWORD *)(v78 + 8));
    if ( !v79 )
      sub_B5D69C(0LL, v80);
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v79 + 16), v81);
    if ( CurrentLevelEntity )
    {
      if ( !v44 )
        sub_B5D69C(CurrentLevelEntity, CurrentLevelEntity);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v44,
        (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentLevelEntity,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssistEntity__Add__);
    }
  }
  v83 = *(_QWORD *)v69;
  if ( *(_WORD *)(*(_QWORD *)v69 + 298LL) )
  {
    v84 = 0LL;
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      ++v84;
      v85 += 4;
      if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v69 + 298LL) )
        goto LABEL_40;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_40:
    v86 = sub_AF54C0(v69, System_IDisposable_TypeInfo, 0LL, v74);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v86)(v69, *(_QWORD *)(v86 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v44;
}


AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
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
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v31; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v34; // x21
  struct AssistMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  AssistMaster___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x19
  struct AssistMaster___c_StaticFields *v45; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_1; // x20
  Il2CppObject *v47; // x21
  struct AssistMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_42EBC6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68845616, assistId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_AssistEntity__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_AssistEntity__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_AssistEntity__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Func_AssistEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v21, v22, v23);
    sub_B5D5C4(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v24, v25, v26);
    sub_B5D5C4(&AssistMaster___c_TypeInfo, v27, v28, v29);
    byte_42EBC6B = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v31 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v31 = AssistMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_AssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v34,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_AssistEntity__int___ctor__);
    v35 = AssistMaster___c_TypeInfo->static_fields;
    v35->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v35->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v43 = AssistMaster___c_TypeInfo;
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)v42;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v43 = AssistMaster___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v45->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v45 = AssistMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_1,
      v47,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_AssistEntity__bool___ctor__);
    v48 = AssistMaster___c_TypeInfo->static_fields;
    v48->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             v44,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68845616);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBC67 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, id, priority, method);
    byte_42EBC67 = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                             PK,
                             (const MethodInfo_23FB260 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
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
  AssistMaster___c__DisplayClass3_0_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v40; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v43; // x22
  struct AssistMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0

  if ( (byte_42EBC6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, assistId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_AssistEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_AssistEntity__bool___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__AssistEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_AssistEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v24, v25, v26);
    sub_B5D5C4(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v27, v28, v29);
    sub_B5D5C4(&AssistMaster___c__DisplayClass3_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&AssistMaster___c_TypeInfo, v33, v34, v35);
    byte_42EBC6A = 1;
  }
  v36 = (AssistMaster___c__DisplayClass3_0_o *)sub_B5D694(AssistMaster___c__DisplayClass3_0_TypeInfo);
  AssistMaster___c__DisplayClass3_0___ctor(v36, 0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  v36->fields.assistId = assistId;
  list = this->fields.list;
  v40 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v40 = AssistMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__AssistEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v43,
      Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__AssistEntity___ctor__);
    v44 = AssistMaster___c_TypeInfo->static_fields;
    v44->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v36,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_AssistEntity__bool___ctor__);
  v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                              v53,
                                                              (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
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
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v22; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v25; // x21
  struct AssistMaster___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_42EBC6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, assistId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_AssistEntity__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_AssistEntity__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v15, v16, v17);
    sub_B5D5C4(&AssistMaster___c_TypeInfo, v18, v19, v20);
    byte_42EBC6D = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v22 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v22 = AssistMaster___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_AssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v25,
      Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_AssistEntity__int___ctor__);
    v26 = AssistMaster___c_TypeInfo->static_fields;
    v26->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v26->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                             v33,
                             (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssistMaster__TryGetEntity(
        AssistMaster_o *this,
        AssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EBC68 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&priority);
    byte_42EBC68 = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


void __fastcall AssistMaster_AssistIdComparer___ctor(AssistMaster_AssistIdComparer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster_AssistIdComparer__Equals(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *x,
        AssistEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B5D69C(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_B5D69C(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7529 & 1) == 0 )
  {
    sub_B5D5C4(&AssistMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7529 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(AssistMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssistMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall AssistMaster___c___ctor(AssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetAvailableEntityList_b__8_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E752B & 1) == 0 )
  {
    sub_B5D5C4(&AssistEntity_TypeInfo, (_DWORD)e, (_DWORD)method, v3);
    byte_42E752B = 1;
  }
  if ( !e )
    return 0LL;
  v5 = *(&AssistEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&e->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (AssistEntity_c *)e->klass->_2.typeHierarchy[v5 - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)e;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return AssistEntity__IsOpen(ent, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E752A & 1) == 0 )
  {
    sub_B5D5C4(&AssistEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E752A = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&AssistEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (AssistEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)data;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return ent->fields.lv;
}


void __fastcall AssistMaster___c__DisplayClass3_0___ctor(
        AssistMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass3_0___GetEntityListFromAssistId_b__1(
        AssistMaster___c__DisplayClass3_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_B5D69C(this, 0LL);
  return entity->fields.id == this->fields.assistId;
}


void __fastcall AssistMaster___c__DisplayClass5_0___ctor(
        AssistMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass5_0___GetAssistEntity_b__0(
        AssistMaster___c__DisplayClass5_0_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}