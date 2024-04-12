void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1C33 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
    byte_42B1C33 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    355,
    (const MethodInfo_23E268C *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  AssistMaster___c__DisplayClass5_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x20

  if ( (byte_42B1C36 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68617664);
    sub_B52984(&Method_System_Func_AssistEntity__bool___ctor__);
    sub_B52984(&System_Func_AssistEntity__bool__TypeInfo);
    sub_B52984(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__);
    sub_B52984(&AssistMaster___c__DisplayClass5_0_TypeInfo);
    byte_42B1C36 = 1;
  }
  v7 = (AssistMaster___c__DisplayClass5_0_o *)sub_B52A54(AssistMaster___c__DisplayClass5_0_TypeInfo);
  AssistMaster___c__DisplayClass5_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.lv = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v10);
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_AssistEntity__bool___ctor__);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68617664);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  AssistMaster___c_c *v5; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__8_0; // x22
  Il2CppObject *v8; // x23
  struct AssistMaster___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_TOutput__o *v16; // x21
  AssistMaster_AssistIdComparer_o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x3
  __int64 v28; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x3
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0

  if ( (byte_42B1C38 & 1) == 0 )
  {
    sub_B52984(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_B52984(&Method_System_Converter_DataEntityBase__AssistEntity___ctor__);
    sub_B52984(&System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_B52984(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
    sub_B52984(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__);
    sub_B52984(&AssistMaster___c_TypeInfo);
    byte_42B1C38 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v5 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v5 = AssistMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__8_0 = (System_Converter_string__string__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_string__string__o *)sub_B52A54(System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__8_0,
      v8,
      Method_AssistMaster___c__GetAvailableEntityList_b__8_0__,
      (const MethodInfo_23DE854 *)Method_System_Converter_DataEntityBase__AssistEntity___ctor__);
    v9 = AssistMaster___c_TypeInfo->static_fields;
    v9->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v9->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_1F7186C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v17 = (AssistMaster_AssistIdComparer_o *)sub_B52A54(AssistMaster_AssistIdComparer_TypeInfo);
  AssistMaster_AssistIdComparer___ctor(v17, 0LL);
  v18 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v17,
          (const MethodInfo_1B60024 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v18 )
    sub_B52A5C(0LL, v19);
  klass = v18->klass;
  v22 = v18;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AEB880(v18, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL, v20);
  }
  v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v22,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_B52A5C(0LL, v26);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_23;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_23:
      v32 = sub_AEB880(v28, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v28;
    if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v36 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
          goto LABEL_30;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_30:
      v37 = sub_AEB880(v28, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL, v33);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v28, *(_QWORD *)(v37 + 8));
    if ( !v38 )
      sub_B52A5C(0LL, v39);
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v38 + 16), v40);
    if ( CurrentLevelEntity )
    {
      if ( !v3 )
        sub_B52A5C(CurrentLevelEntity, CurrentLevelEntity);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentLevelEntity,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_AssistEntity__Add__);
    }
  }
  v42 = *(_QWORD *)v28;
  if ( *(_WORD *)(*(_QWORD *)v28 + 298LL) )
  {
    v43 = 0LL;
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v28 + 298LL) )
        goto LABEL_40;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_40:
    v45 = sub_AEB880(v28, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v28, *(_QWORD *)(v45 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v3;
}


AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v6; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  AssistMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  struct AssistMaster___c_StaticFields *v20; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_1; // x20
  Il2CppObject *v22; // x21
  struct AssistMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42B1C35 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68617664);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_B52984(&Method_System_Func_AssistEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_AssistEntity__int___ctor__);
    sub_B52984(&System_Func_AssistEntity__int__TypeInfo);
    sub_B52984(&System_Func_AssistEntity__bool__TypeInfo);
    sub_B52984(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__);
    sub_B52984(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__);
    sub_B52984(&AssistMaster___c_TypeInfo);
    byte_42B1C35 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v9,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_AssistEntity__int___ctor__);
    v10 = AssistMaster___c_TypeInfo->static_fields;
    v10->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v18 = AssistMaster___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v20->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v20 = AssistMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_1,
      v22,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_AssistEntity__bool___ctor__);
    v23 = AssistMaster___c_TypeInfo->static_fields;
    v23->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v23->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             v19,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____68617664);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1C31 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
    byte_42B1C31 = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                             PK,
                             (const MethodInfo_23E2728 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  AssistMaster___c__DisplayClass3_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v9; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v12; // x22
  struct AssistMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_42B1C34 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_B52984(&Method_System_Func_AssistEntity__bool___ctor__);
    sub_B52984(&Method_System_Func_DataEntityBase__AssistEntity___ctor__);
    sub_B52984(&System_Func_AssistEntity__bool__TypeInfo);
    sub_B52984(&System_Func_DataEntityBase__AssistEntity__TypeInfo);
    sub_B52984(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__);
    sub_B52984(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__);
    sub_B52984(&AssistMaster___c__DisplayClass3_0_TypeInfo);
    sub_B52984(&AssistMaster___c_TypeInfo);
    byte_42B1C34 = 1;
  }
  v5 = (AssistMaster___c__DisplayClass3_0_o *)sub_B52A54(AssistMaster___c__DisplayClass3_0_TypeInfo);
  AssistMaster___c__DisplayClass3_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.assistId = assistId;
  list = this->fields.list;
  v9 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v9 = AssistMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DataEntityBase__AssistEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v12,
      Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_DataEntityBase__AssistEntity___ctor__);
    v13 = AssistMaster___c_TypeInfo->static_fields;
    v13->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_AssistEntity__bool___ctor__);
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                              v22,
                                                              (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v6; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_42B1C37 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_B52984(&Method_System_Func_AssistEntity__int___ctor__);
    sub_B52984(&System_Func_AssistEntity__int__TypeInfo);
    sub_B52984(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_B52984(&AssistMaster___c_TypeInfo);
    byte_42B1C37 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v9,
      Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_AssistEntity__int___ctor__);
    v10 = AssistMaster___c_TypeInfo->static_fields;
    v10->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v10->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                             v17,
                             (const MethodInfo_1B62EA8 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_42B1C32 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
    byte_42B1C32 = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_B52A5C(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_B52A5C(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AEC11 & 1) == 0 )
  {
    sub_B52984(&AssistMaster___c_TypeInfo);
    byte_42AEC11 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(AssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssistMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AEC13 & 1) == 0 )
  {
    sub_B52984(&AssistEntity_TypeInfo);
    byte_42AEC13 = 1;
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
    sub_B52A5C(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B52A5C(this, 0LL);
  return AssistEntity__IsOpen(ent, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_42AEC12 & 1) == 0 )
  {
    sub_B52984(&AssistEntity_TypeInfo);
    byte_42AEC12 = 1;
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}