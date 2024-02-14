void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216646 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method);
    byte_4216646 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    354,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
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
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_4216649 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67988880, *(_QWORD *)&assistId);
    sub_B0D8A4(&Method_System_Func_AssistEntity__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_AssistEntity__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__, v9);
    sub_B0D8A4(&AssistMaster___c__DisplayClass5_0_TypeInfo, v10);
    byte_4216649 = 1;
  }
  v11 = (AssistMaster___c__DisplayClass5_0_o *)sub_B0D974(
                                                 AssistMaster___c__DisplayClass5_0_TypeInfo,
                                                 *(_QWORD *)&assistId,
                                                 *(_QWORD *)&lv);
  AssistMaster___c__DisplayClass5_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.lv = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v13);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_AssistEntity__bool__TypeInfo,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_AssistEntity__bool___ctor__);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v17,
                             (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67988880);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  AssistMaster___c_c *v21; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__8_0; // x22
  Il2CppObject *v24; // x23
  struct AssistMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_TOutput__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  AssistMaster_AssistIdComparer_o *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  const MethodInfo *v52; // x2
  AssistEntity_o *CurrentLevelEntity; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0

  if ( (byte_421664B & 1) == 0 )
  {
    sub_B0D8A4(&AssistMaster_AssistIdComparer_TypeInfo, method);
    sub_B0D8A4(&Method_System_Converter_DataEntityBase__AssistEntity___ctor__, v4);
    sub_B0D8A4(&System_Converter_DataEntityBase__AssistEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssistEntity__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_AssistEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___, v14);
    sub_B0D8A4(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v15);
    sub_B0D8A4(&AssistMaster___c_TypeInfo, v16);
    byte_421664B = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_AssistEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v21 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v21 = AssistMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__8_0 = (System_Converter_string__string__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_string__string__o *)sub_B0D974(
                                                      System_Converter_DataEntityBase__AssistEntity__TypeInfo,
                                                      v18,
                                                      v19);
    System_Converter_string__string____ctor(
      _9__8_0,
      v24,
      Method_AssistMaster___c__GetAvailableEntityList_b__8_0__,
      (const MethodInfo_2666150 *)Method_System_Converter_DataEntityBase__AssistEntity___ctor__);
    v25 = AssistMaster___c_TypeInfo->static_fields;
    v25->__9__8_0 = (struct System_Converter_DataEntityBase__AssistEntity__o *)_9__8_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_204B038 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__AssistEntity___);
  v35 = (AssistMaster_AssistIdComparer_o *)sub_B0D974(AssistMaster_AssistIdComparer_TypeInfo, v33, v34);
  AssistMaster_AssistIdComparer___ctor(v35, 0LL);
  v36 = System_Linq_Enumerable__Distinct_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v32,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v35,
          (const MethodInfo_1B48AB4 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v36 )
    sub_B0D97C(0LL);
  klass = v36->klass;
  v38 = v36;
  if ( *(_WORD *)&v36->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      ++v39;
      p_offset += 4;
      if ( v39 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AA67A0(v36, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v38,
          *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
          goto LABEL_23;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_23:
      v46 = sub_AA67A0(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
    {
      v48 = 0LL;
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        ++v48;
        v49 += 4;
        if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
          goto LABEL_30;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_30:
      v50 = sub_AA67A0(v42, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    if ( !v51 )
      sub_B0D97C(0LL);
    CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v51 + 16), v52);
    if ( CurrentLevelEntity )
    {
      if ( !v17 )
        sub_B0D97C(CurrentLevelEntity);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)CurrentLevelEntity,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_AssistEntity__Add__);
    }
  }
  v54 = *(_QWORD *)v42;
  if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
  {
    v55 = 0LL;
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
        goto LABEL_40;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_40:
    v57 = sub_AA67A0(v42, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v42, *(_QWORD *)(v57 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v17;
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
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v16; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v19; // x21
  struct AssistMaster___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  AssistMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  struct AssistMaster___c_StaticFields *v32; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__4_1; // x20
  Il2CppObject *v34; // x21
  struct AssistMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_4216648 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67988880, *(_QWORD *)&assistId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_B0D8A4(&Method_System_Func_AssistEntity__bool___ctor__, v6);
    sub_B0D8A4(&Method_System_Func_AssistEntity__int___ctor__, v7);
    sub_B0D8A4(&System_Func_AssistEntity__int__TypeInfo, v8);
    sub_B0D8A4(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__, v10);
    sub_B0D8A4(&Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__, v11);
    sub_B0D8A4(&AssistMaster___c_TypeInfo, v12);
    byte_4216648 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v16 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v16 = AssistMaster___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_AssistEntity__int__TypeInfo,
                                                                                v13,
                                                                                v14);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v19,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_0__,
      (const MethodInfo_2619564 *)Method_System_Func_AssistEntity__int___ctor__);
    v20 = AssistMaster___c_TypeInfo->static_fields;
    v20->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v20->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
          (System_Func_TSource__TKey__o *)_9__4_0,
          (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v30 = AssistMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v30 = AssistMaster___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v32->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v32 = AssistMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__4_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_AssistEntity__bool__TypeInfo,
                                                                                   v28,
                                                                                   v29);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__4_1,
      v34,
      Method_AssistMaster___c__GetCurrentLevelEntity_b__4_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_AssistEntity__bool___ctor__);
    v35 = AssistMaster___c_TypeInfo->static_fields;
    v35->__9__4_1 = (struct System_Func_AssistEntity__bool__o *)_9__4_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__4_1,
      (System_Int32_array **)_9__4_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                             v31,
                             (System_Func_TSource__bool__o *)_9__4_1,
                             (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____67988880);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216644 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4216644 = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                             PK,
                             (const MethodInfo_266A024 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
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
  __int64 v18; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  AssistMaster___c_c *v20; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x21
  Il2CppObject *v23; // x22
  struct AssistMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4216647 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___, *(_QWORD *)&assistId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_AssistEntity___, v6);
    sub_B0D8A4(&Method_System_Func_AssistEntity__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__AssistEntity___ctor__, v8);
    sub_B0D8A4(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_DataEntityBase__AssistEntity__TypeInfo, v10);
    sub_B0D8A4(&Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__, v11);
    sub_B0D8A4(&Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__, v12);
    sub_B0D8A4(&AssistMaster___c__DisplayClass3_0_TypeInfo, v13);
    sub_B0D8A4(&AssistMaster___c_TypeInfo, v14);
    byte_4216647 = 1;
  }
  v15 = (AssistMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                 AssistMaster___c__DisplayClass3_0_TypeInfo,
                                                 *(_QWORD *)&assistId,
                                                 method);
  AssistMaster___c__DisplayClass3_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.assistId = assistId;
  list = this->fields.list;
  v20 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v20 = AssistMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__AssistEntity__TypeInfo,
                                                                                                v17,
                                                                                                v18);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v23,
      Method_AssistMaster___c__GetEntityListFromAssistId_b__3_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__AssistEntity___ctor__);
    v24 = AssistMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Func_DataEntityBase__AssistEntity__o *)_9__3_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v24->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__AssistEntity___);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_AssistEntity__bool__TypeInfo,
                                                                             v32,
                                                                             v33);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v15,
    Method_AssistMaster___c__DisplayClass3_0__GetEntityListFromAssistId_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_AssistEntity__bool___ctor__);
  v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v31,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                              v35,
                                                              (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
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
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  AssistMaster___c_c *v13; // x8
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x20
  Il2CppObject *v16; // x21
  struct AssistMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_421664A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_B0D8A4(&Method_System_Func_AssistEntity__int___ctor__, v6);
    sub_B0D8A4(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_B0D8A4(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, v8);
    sub_B0D8A4(&AssistMaster___c_TypeInfo, v9);
    byte_421664A = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v13 = AssistMaster___c_TypeInfo;
  if ( (BYTE3(AssistMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v13 = AssistMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_AssistEntity__int__TypeInfo,
                                                                                v10,
                                                                                v11);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__6_0,
      v16,
      Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__,
      (const MethodInfo_2619564 *)Method_System_Func_AssistEntity__int___ctor__);
    v17 = AssistMaster___c_TypeInfo->static_fields;
    v17->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__6_0,
      (System_Int32_array **)_9__6_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                             v24,
                             (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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

  if ( (byte_4216645 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity);
    byte_4216645 = 1;
  }
  PK = AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
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
    sub_B0D97C(this);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_B0D97C(this);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213973 & 1) == 0 )
  {
    sub_B0D8A4(&AssistMaster___c_TypeInfo, v1);
    byte_4213973 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(AssistMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)AssistMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4213975 & 1) == 0 )
  {
    sub_B0D8A4(&AssistEntity_TypeInfo, e);
    byte_4213975 = 1;
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
    sub_B0D97C(this);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__4_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B0D97C(this);
  return AssistEntity__IsOpen(ent, 0LL);
}


AssistEntity_o *__fastcall AssistMaster___c___GetEntityListFromAssistId_b__3_0(
        AssistMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_4213974 & 1) == 0 )
  {
    sub_B0D8A4(&AssistEntity_TypeInfo, data);
    byte_4213974 = 1;
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return ent->fields.lv == this->fields.lv;
}