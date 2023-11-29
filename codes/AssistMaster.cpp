void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBE20 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method);
    byte_40FBE20 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    354,
    (const MethodInfo_266F73C *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  AssistMaster___c__DisplayClass5_0_o *v12; // x22
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20

  if ( (byte_40FBE23 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____66839208, *(_QWORD *)&assistId);
    sub_B16FFC(&Method_System_Func_AssistEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v10);
    sub_B16FFC(&AssistMaster___c__DisplayClass5_0_TypeInfo, v11);
    byte_40FBE23 = 1;
  }
  v12 = (AssistMaster___c__DisplayClass5_0_o *)sub_B170CC(
                                                 AssistMaster___c__DisplayClass5_0_TypeInfo,
                                                 *(_QWORD *)&assistId,
                                                 *(_QWORD *)&lv,
                                                 method,
                                                 v4);
  AssistMaster___c__DisplayClass5_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.lv = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v13);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_AssistEntity__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_AssistEntity__bool___ctor__);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v19,
                             (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____66839208);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  AssistMaster___c_c *v25; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__8_0; // x22
  Il2CppObject *v28; // x23
  struct AssistMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_TOutput__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  AssistMaster_AssistIdComparer_o *v41; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x21
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v48; // x21
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  const MethodInfo *v58; // x2
  AssistEntity_o *CurrentLevelEntity; // x1
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  int *v62; // x11
  __int64 v63; // x0

  if ( (byte_40FBE25 & 1) == 0 )
  {
    sub_B16FFC(&AssistMaster_AssistIdComparer_TypeInfo, method);
    sub_B16FFC(&Method_System_Converter_DataEntityBase__AssistEntity___ctor__, v6);
    sub_B16FFC(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssistEntity__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_AssistEntity__TypeInfo, v15);
    sub_B16FFC(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v16);
    sub_B16FFC(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v17);
    sub_B16FFC(&AssistMaster___c_TypeInfo, v18);
    byte_40FBE25 = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_AssistEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v25 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v25 = AssistMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__8_0 = (System_Converter_string__string__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                      System_Converter_DataEntityBase__AssistEntity__TypeInfo,
                                                      v20,
                                                      v21,
                                                      v22,
                                                      v23);
    System_Converter_string__string____ctor(
      _9__8_0,
      v28,
      Method_AssistMaster___c__GetAvailableEntityList_b__8_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_DataEntityBase__AssistEntity___ctor__);
    v29 = AssistMaster___c_TypeInfo->static_fields;
    v29->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_19DE87C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v41 = (AssistMaster_AssistIdComparer_o *)sub_B170CC(AssistMaster_AssistIdComparer_TypeInfo, v37, v38, v39, v40);
  AssistMaster_AssistIdComparer___ctor(v41, 0LL);
  v42 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v41,
          (const MethodInfo_18D4F30 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v42 )
    sub_B170D4();
  klass = v42->klass;
  v44 = v42;
  if ( *(_WORD *)&v42->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      ++v45;
      p_offset += 4;
      if ( v45 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v42, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v44,
          *(_QWORD *)(p_method + 8));
  if ( !v48 )
    sub_B170D4();
  while ( 1 )
  {
    v49 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v50 = 0LL;
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_23;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_23:
      v52 = sub_AAFEF8(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v53 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v54 = 0LL;
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v55 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_30;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_30:
      v56 = sub_AAFEF8(v48, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
    if ( !v57 )
      sub_B170D4();
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v57 + 16), v58);
    if ( CurrentLevelEntity )
    {
      if ( !v19 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentLevelEntity,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_AssistEntity__Add__);
    }
  }
  v60 = *(_QWORD *)v48;
  if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
  {
    v61 = 0LL;
    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
        goto LABEL_40;
    }
    v63 = v60 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_40:
    v63 = sub_AAFEF8(v48, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v63)(v48, *(_QWORD *)(v63 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v19;
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v18; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v21; // x21
  struct AssistMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  AssistMaster___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x19
  struct AssistMaster___c_StaticFields *v36; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_1; // x20
  Il2CppObject *v38; // x21
  struct AssistMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40FBE22 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____66839208, *(_QWORD *)&assistId);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_B16FFC(&Method_System_Func_AssistEntity__bool___ctor__, v6);
    sub_B16FFC(&Method_System_Func_AssistEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_AssistEntity__int__TypeInfo, v8);
    sub_B16FFC(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v10);
    sub_B16FFC(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v11);
    sub_B16FFC(&AssistMaster___c_TypeInfo, v12);
    byte_40FBE22 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v18 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_AssistEntity__int__TypeInfo,
                                                                                v13,
                                                                                v14,
                                                                                v15,
                                                                                v16);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v21,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_AssistEntity__int___ctor__);
    v22 = AssistMaster___c_TypeInfo->static_fields;
    v22->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v34 = AssistMaster___c_TypeInfo;
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v34 = AssistMaster___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v36->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v36 = AssistMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_AssistEntity__bool__TypeInfo,
                                                                                   v30,
                                                                                   v31,
                                                                                   v32,
                                                                                   v33);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_1,
      v38,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_AssistEntity__bool___ctor__);
    v39 = AssistMaster___c_TypeInfo->static_fields;
    v39->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v39->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             v35,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____66839208);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FBE1E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FBE1E = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                             PK,
                             (const MethodInfo_266F7D8 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
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
  AssistMaster___c__DisplayClass3_0_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v23; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v26; // x22
  struct AssistMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_40FBE21 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, *(_QWORD *)&assistId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_AssistEntity___, v8);
    sub_B16FFC(&Method_System_Func_AssistEntity__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_DataEntityBase__AssistEntity___ctor__, v10);
    sub_B16FFC(&System_Func_AssistEntity__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v12);
    sub_B16FFC(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v13);
    sub_B16FFC(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v14);
    sub_B16FFC(&AssistMaster___c__DisplayClass3_0_TypeInfo, v15);
    sub_B16FFC(&AssistMaster___c_TypeInfo, v16);
    byte_40FBE21 = 1;
  }
  v17 = (AssistMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                 AssistMaster___c__DisplayClass3_0_TypeInfo,
                                                 *(_QWORD *)&assistId,
                                                 method,
                                                 v3,
                                                 v4);
  AssistMaster___c__DisplayClass3_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B170D4();
  v17->fields.assistId = assistId;
  list = this->fields.list;
  v23 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v23 = AssistMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__AssistEntity__TypeInfo,
                                                                                                v18,
                                                                                                v19,
                                                                                                v20,
                                                                                                v21);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v26,
      Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__AssistEntity___ctor__);
    v27 = AssistMaster___c_TypeInfo->static_fields;
    v27->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_AssistEntity__bool__TypeInfo,
                                                                             v35,
                                                                             v36,
                                                                             v37,
                                                                             v38);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v17,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_AssistEntity__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v34,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                              v40,
                                                              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v15; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v18; // x21
  struct AssistMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_40FBE24 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_B16FFC(&Method_System_Func_AssistEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v8);
    sub_B16FFC(&AssistMaster___c_TypeInfo, v9);
    byte_40FBE24 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v15 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v15 = AssistMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_AssistEntity__int__TypeInfo,
                                                                                v10,
                                                                                v11,
                                                                                v12,
                                                                                v13);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v18,
      Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_AssistEntity__int___ctor__);
    v19 = AssistMaster___c_TypeInfo->static_fields;
    v19->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                             v26,
                             (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_40FBE1F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity);
    byte_40FBE1F = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_B170D4();
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_B170D4();
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F9133 & 1) == 0 )
  {
    sub_B16FFC(&AssistMaster___c_TypeInfo, v1);
    byte_40F9133 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(AssistMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssistMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x10

  if ( (byte_40F9135 & 1) == 0 )
  {
    sub_B16FFC(&AssistEntity_TypeInfo, e);
    byte_40F9135 = 1;
  }
  if ( !e )
    return 0LL;
  v4 = *(&AssistEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&e->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (AssistEntity_c *)e->klass->_2.typeHierarchy[v4 - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)e;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return AssistEntity__IsOpen(ent, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F9134 & 1) == 0 )
  {
    sub_B16FFC(&AssistEntity_TypeInfo, data);
    byte_40F9134 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&AssistEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (AssistEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == AssistEntity_TypeInfo )
    return (AssistEntity_o *)data;
  return 0LL;
}


int32_t __fastcall AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return ent->fields.lv == this->fields.lv;
}