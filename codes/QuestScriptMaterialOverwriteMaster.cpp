void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AE4C0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
    byte_42AE4C0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    417,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v27; // x0
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v30; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CommonReleaseMaster_o *v38; // x20
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *current; // x19
  int v42; // w8
  int v43; // w9
  int v45[3]; // [xsp+8h] [xbp-68h]
  int v46; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42AE4C1 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_B52984(&Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__);
    sub_B52984(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_B52984(&QuestScriptMaterialOverwriteEntity_TypeInfo);
    sub_B52984(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__);
    sub_B52984(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_42AE4C1 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_58;
    v22 = *(&QuestScriptMaterialOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestScriptMaterialOverwriteEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v20);
LABEL_58:
      sub_B52A5C(v20, v21);
    }
    if ( v20->fields.missionTargetId == questId )
    {
      if ( !v5 )
        sub_B52A5C(v20, QuestScriptMaterialOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v20,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    }
  }
  v45[0] = 68;
  v46 = 1;
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  v46 = 0;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v27 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v27 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v30,
      Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__);
    v31 = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    v31->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v31->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
    (System_Collections_Generic_List_T__o *)v5,
    (System_Func_T__int__o *)_9__1_0,
    1,
    (const MethodInfo_1A44938 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v5 )
LABEL_62:
    sub_B52A5C(list, v6);
  v38 = (CommonReleaseMaster_o *)list;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    if ( !v39 )
      break;
    current = v47.fields.current;
    if ( !v47.fields.current )
      sub_B52A5C(v39, v40);
    if ( !v38 )
      sub_B52A5C(v39, v40);
    if ( CommonReleaseMaster__IsOpen(v38, (int32_t)v47.fields.current[2].klass, 0LL, 0, 0LL) )
    {
      v42 = 192;
      goto LABEL_50;
    }
  }
  current = 0LL;
  v42 = 190;
LABEL_50:
  v45[0] = v42;
  ++v46;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v46 )
  {
    v43 = v45[v46 - 1];
    if ( v43 == 190 )
    {
      current = 0LL;
    }
    else if ( v43 != 192 )
    {
      return 0LL;
    }
    --v46;
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  }
  return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF287 & 1) == 0 )
  {
    sub_B52984(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_42AF287 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  return x->fields.priority;
}