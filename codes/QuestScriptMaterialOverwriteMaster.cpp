void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_438994B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
    byte_438994B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    417,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x10
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v25; // x0
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v28; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CommonReleaseMaster_o *v36; // x20
  _BOOL8 v37; // x0
  __int64 v38; // x1
  Il2CppObject *current; // x19
  int v40; // w8
  int v41; // w9
  int v43[3]; // [xsp+8h] [xbp-68h]
  int v44; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_438994C & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__);
    sub_B775C4(&Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__);
    sub_B775C4(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
    sub_B775C4(&QuestScriptMaterialOverwriteEntity_TypeInfo);
    sub_B775C4(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__);
    sub_B775C4(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_438994C = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2CC56C8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7769C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_B0F4C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_58;
    v20 = *(&QuestScriptMaterialOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (QuestScriptMaterialOverwriteEntity_c *)v18->klass->_2.typeHierarchy[v20 - 1] != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B77990(v18);
LABEL_58:
      sub_B7769C(v18, v19);
    }
    if ( v18->fields.missionTargetId == questId )
    {
      if ( !v5 )
        sub_B7769C(v18, QuestScriptMaterialOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v18,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    }
  }
  v43[0] = 68;
  v44 = 1;
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_28:
    v24 = sub_B0F4C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  v44 = 0;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v25 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v25 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v28,
      Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__);
    v29 = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    v29->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v29->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
    (System_Collections_Generic_List_T__o *)v5,
    (System_Func_T__int__o *)_9__1_0,
    1,
    (const MethodInfo_1C68E10 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v5 )
LABEL_62:
    sub_B7769C(list, v6);
  v36 = (CommonReleaseMaster_o *)list;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    if ( !v37 )
      break;
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B7769C(v37, v38);
    if ( !v36 )
      sub_B7769C(v37, v38);
    if ( CommonReleaseMaster__IsOpen(v36, (int32_t)v45.fields.current[2].klass, 0LL, 0, 0LL) )
    {
      v40 = 192;
      goto LABEL_50;
    }
  }
  current = 0LL;
  v40 = 190;
LABEL_50:
  v43[0] = v40;
  ++v44;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v44 )
  {
    v41 = v43[v44 - 1];
    if ( v41 == 190 )
    {
      current = 0LL;
    }
    else if ( v41 != 192 )
    {
      return 0LL;
    }
    --v44;
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

  if ( (byte_438B1B4 & 1) == 0 )
  {
    sub_B775C4(&QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    byte_438B1B4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return x->fields.priority;
}