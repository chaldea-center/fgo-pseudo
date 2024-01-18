void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41897DC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method);
    byte_41897DC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    354,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssistMaster___c__DisplayClass5_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_41897DF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67414392, *(_QWORD *)&assistId);
    sub_B2C35C(&Method_System_Func_AssistEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_AssistEntity__bool__TypeInfo, v8);
    sub_B2C35C(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v9);
    sub_B2C35C(&AssistMaster___c__DisplayClass5_0_TypeInfo, v10);
    byte_41897DF = 1;
  }
  v11 = (AssistMaster___c__DisplayClass5_0_o *)sub_B2C42C(AssistMaster___c__DisplayClass5_0_TypeInfo);
  AssistMaster___c__DisplayClass5_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.lv = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v14);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_AssistEntity__bool___ctor__);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v16,
                             (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67414392);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  AssistMaster___c_c *v18; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__8_0; // x22
  Il2CppObject *v21; // x23
  struct AssistMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_TOutput__o *v29; // x21
  AssistMaster_AssistIdComparer_o *v30; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x21
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x3
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0

  if ( (byte_41897E1 & 1) == 0 )
  {
    sub_B2C35C(&AssistMaster_AssistIdComparer_TypeInfo, method);
    sub_B2C35C(&Method_System_Converter_DataEntityBase__AssistEntity___ctor__, v3);
    sub_B2C35C(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssistEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_AssistEntity__TypeInfo, v12);
    sub_B2C35C(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v13);
    sub_B2C35C(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v14);
    sub_B2C35C(&AssistMaster___c_TypeInfo, v15);
    byte_41897E1 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v18 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__8_0 = (System_Converter_string__string__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_DataEntityBase__AssistEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__8_0,
      v21,
      Method_AssistMaster___c__GetAvailableEntityList_b__8_0__,
      (const MethodInfo_24E064C *)Method_System_Converter_DataEntityBase__AssistEntity___ctor__);
    v22 = AssistMaster___c_TypeInfo->static_fields;
    v22->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v22->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_20964A8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v30 = (AssistMaster_AssistIdComparer_o *)sub_B2C42C(AssistMaster_AssistIdComparer_TypeInfo);
  AssistMaster_AssistIdComparer___ctor(v30, 0LL);
  v31 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v30,
          (const MethodInfo_1A8D7E8 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v31 )
    sub_B2C434(0LL, v32);
  klass = v31->klass;
  v35 = v31;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AC5258(v31, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL, v33);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v35,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_B2C434(0LL, v39);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_23;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_23:
      v45 = sub_AC5258(v41, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_30;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_30:
      v50 = sub_AC5258(v41, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL, v46);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v41, *(_QWORD *)(v50 + 8));
    if ( !v51 )
      sub_B2C434(0LL, v52);
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v51 + 16), v53);
    if ( CurrentLevelEntity )
    {
      if ( !v16 )
        sub_B2C434(CurrentLevelEntity, CurrentLevelEntity);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentLevelEntity,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_AssistEntity__Add__);
    }
  }
  v55 = *(_QWORD *)v41;
  if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
  {
    v56 = 0LL;
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
        goto LABEL_40;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_40:
    v58 = sub_AC5258(v41, System_IDisposable_TypeInfo, 0LL, v46);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v41, *(_QWORD *)(v58 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v16;
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
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v14; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v17; // x21
  struct AssistMaster___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x0
  AssistMaster___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  struct AssistMaster___c_StaticFields *v28; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_1; // x20
  Il2CppObject *v30; // x21
  struct AssistMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_41897DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67414392, *(_QWORD *)&assistId);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_B2C35C(&Method_System_Func_AssistEntity__bool___ctor__, v6);
    sub_B2C35C(&Method_System_Func_AssistEntity__int___ctor__, v7);
    sub_B2C35C(&System_Func_AssistEntity__int__TypeInfo, v8);
    sub_B2C35C(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v10);
    sub_B2C35C(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v11);
    sub_B2C35C(&AssistMaster___c_TypeInfo, v12);
    byte_41897DE = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v14 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v14 = AssistMaster___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_AssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v17,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_AssistEntity__int___ctor__);
    v18 = AssistMaster___c_TypeInfo->static_fields;
    v18->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v18->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v26 = AssistMaster___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v26 = AssistMaster___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v28->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v28 = AssistMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_1,
      v30,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_AssistEntity__bool___ctor__);
    v31 = AssistMaster___c_TypeInfo->static_fields;
    v31->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             v27,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67414392);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41897DA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41897DA = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                             PK,
                             (const MethodInfo_24E4520 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
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
  __int64 v14; // x1
  AssistMaster___c__DisplayClass3_0_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v19; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v22; // x22
  struct AssistMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_41897DD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, *(_QWORD *)&assistId);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_AssistEntity___, v6);
    sub_B2C35C(&Method_System_Func_AssistEntity__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_DataEntityBase__AssistEntity___ctor__, v8);
    sub_B2C35C(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_B2C35C(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v10);
    sub_B2C35C(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v11);
    sub_B2C35C(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v12);
    sub_B2C35C(&AssistMaster___c__DisplayClass3_0_TypeInfo, v13);
    sub_B2C35C(&AssistMaster___c_TypeInfo, v14);
    byte_41897DD = 1;
  }
  v15 = (AssistMaster___c__DisplayClass3_0_o *)sub_B2C42C(AssistMaster___c__DisplayClass3_0_TypeInfo);
  AssistMaster___c__DisplayClass3_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.assistId = assistId;
  list = this->fields.list;
  v19 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v19 = AssistMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__AssistEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v22,
      Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__AssistEntity___ctor__);
    v23 = AssistMaster___c_TypeInfo->static_fields;
    v23->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v23->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_AssistEntity__bool___ctor__);
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v30,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                              v32,
                                                              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
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
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v11; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v14; // x21
  struct AssistMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_41897E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_B2C35C(&Method_System_Func_AssistEntity__int___ctor__, v6);
    sub_B2C35C(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_B2C35C(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v8);
    sub_B2C35C(&AssistMaster___c_TypeInfo, v9);
    byte_41897E0 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v11 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v11 = AssistMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_AssistEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v14,
      Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_AssistEntity__int___ctor__);
    v15 = AssistMaster___c_TypeInfo->static_fields;
    v15->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                             v22,
                             (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_41897DB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity);
    byte_41897DB = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_B2C434(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_B2C434(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186BBD & 1) == 0 )
  {
    sub_B2C35C(&AssistMaster___c_TypeInfo, v1);
    byte_4186BBD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(AssistMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssistMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4186BBF & 1) == 0 )
  {
    sub_B2C35C(&AssistEntity_TypeInfo, e);
    byte_4186BBF = 1;
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
    sub_B2C434(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
  return AssistEntity__IsOpen(ent, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_4186BBE & 1) == 0 )
  {
    sub_B2C35C(&AssistEntity_TypeInfo, data);
    byte_4186BBE = 1;
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}