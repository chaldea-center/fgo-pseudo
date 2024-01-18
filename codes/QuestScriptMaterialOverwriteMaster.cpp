void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_41860A4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__,
      method);
    byte_41860A4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    416,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  __int64 v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x10
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v46; // x0
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v49; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  CommonReleaseMaster_o *v57; // x20
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x19
  int v61; // w8
  int v62; // w9
  int v64[3]; // [xsp+8h] [xbp-68h]
  int v65; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_41860A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v11);
    sub_B2C35C(&Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__, v12);
    sub_B2C35C(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v13);
    sub_B2C35C(&System_IDisposable_TypeInfo, v14);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v19);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v20);
    sub_B2C35C(&QuestScriptMaterialOverwriteEntity_TypeInfo, v21);
    sub_B2C35C(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__, v22);
    sub_B2C35C(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v23);
    byte_41860A5 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v65 = 0;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v27);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v34);
    }
    v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v38 + 8));
    if ( !v39 )
      goto LABEL_58;
    v41 = *(&QuestScriptMaterialOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v41
      || (QuestScriptMaterialOverwriteEntity_c *)v39->klass->_2.typeHierarchy[v41 - 1] != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      v39 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v39);
LABEL_58:
      sub_B2C434(v39, v40);
    }
    if ( v39->fields.missionTargetId == questId )
    {
      if ( !v24 )
        sub_B2C434(v39, QuestScriptMaterialOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v24,
        v39,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    }
  }
  v64[0] = 68;
  v65 = 1;
  v42 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_28:
    v45 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(Enumerator, *(_QWORD *)(v45 + 8));
  v65 = 0;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v46 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v46 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  static_fields = v46->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    }
    v49 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v49,
      Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__);
    v50 = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    v50->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v50->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
    (System_Collections_Generic_List_T__o *)v24,
    (System_Func_T__int__o *)_9__1_0,
    1,
    (const MethodInfo_1729358 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v24 )
LABEL_62:
    sub_B2C434(list, v25);
  v57 = (CommonReleaseMaster_o *)list;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v66,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v66,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    if ( !v58 )
      break;
    current = v66.fields.current;
    if ( !v66.fields.current )
      sub_B2C434(v58, v59);
    if ( !v57 )
      sub_B2C434(v58, v59);
    if ( CommonReleaseMaster__IsOpen(v57, (int32_t)v66.fields.current[2].klass, 0LL, 0, 0LL) )
    {
      v61 = 192;
      goto LABEL_50;
    }
  }
  current = 0LL;
  v61 = 190;
LABEL_50:
  v64[0] = v61;
  ++v65;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v66,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v65 )
  {
    v62 = v64[v65 - 1];
    if ( v62 == 190 )
    {
      current = 0LL;
    }
    else if ( v62 != 192 )
    {
      return 0LL;
    }
    --v65;
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  }
  return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185636 & 1) == 0 )
  {
    sub_B2C35C(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1);
    byte_4185636 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestScriptMaterialOverwriteMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___ctor(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestScriptMaterialOverwriteMaster___c___GetConditionClearEntity_b__1_0(
        QuestScriptMaterialOverwriteMaster___c_o *this,
        QuestScriptMaterialOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.priority;
}