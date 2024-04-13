void __fastcall QuestScriptMaterialOverwriteMaster___ctor(
        QuestScriptMaterialOverwriteMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F31 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6F31 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    417,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestScriptMaterialOverwriteMaster__QuestScriptMaterialOverwriteEntity__string___ctor__);
}


QuestScriptMaterialOverwriteEntity_o *__fastcall QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
        QuestScriptMaterialOverwriteMaster_o *this,
        int32_t questId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x19
  __int64 v64; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v66; // x1
  __int64 v67; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v70; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v73; // x3
  System_Collections_Generic_IEnumerator_T__c *v74; // x8
  unsigned __int64 v75; // x10
  int32_t *v76; // x11
  __int64 v77; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x10
  System_Collections_Generic_IEnumerator_T__c *v81; // x8
  unsigned __int64 v82; // x10
  int32_t *v83; // x11
  __int64 v84; // x0
  QuestScriptMaterialOverwriteMaster___c_c *v85; // x0
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_0; // x20
  Il2CppObject *v88; // x21
  struct QuestScriptMaterialOverwriteMaster___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  CommonReleaseMaster_o *v96; // x20
  _BOOL8 v97; // x0
  __int64 v98; // x1
  Il2CppObject *current; // x19
  int v100; // w8
  int v101; // w9
  int v103[3]; // [xsp+8h] [xbp-68h]
  int v104; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v105; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E6F32 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__,
      v21,
      v22,
      v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__get_Current__,
      v24,
      v25,
      v26);
    sub_B5D5C4(&Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__, v42, v43, v44);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__,
      v45,
      v46,
      v47);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__, v48, v49, v50);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&QuestScriptMaterialOverwriteEntity_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__, v57, v58, v59);
    sub_B5D5C4(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v60, v61, v62);
    byte_42E6F32 = 1;
  }
  memset(&v105, 0, sizeof(v105));
  v104 = 0;
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_62;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v66);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v70 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v70;
        p_offset += 4;
        if ( v70 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v67);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v74 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v75 = 0LL;
      v76 = &v74->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v76 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v75;
        v76 += 4;
        if ( v75 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v77 = (__int64)&v74->vtable[*v76].method;
    }
    else
    {
LABEL_16:
      v77 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v73);
    }
    v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v77)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v77 + 8));
    if ( !v78 )
      goto LABEL_58;
    v80 = *(&QuestScriptMaterialOverwriteEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v78->klass->_2.bitflags2 + 1) < (unsigned int)v80
      || (QuestScriptMaterialOverwriteEntity_c *)v78->klass->_2.typeHierarchy[v80 - 1] != QuestScriptMaterialOverwriteEntity_TypeInfo )
    {
      v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v78);
LABEL_58:
      sub_B5D69C(v78, v79);
    }
    if ( v78->fields.missionTargetId == questId )
    {
      if ( !v63 )
        sub_B5D69C(v78, QuestScriptMaterialOverwriteEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v63,
        v78,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__Add__);
    }
  }
  v103[0] = 68;
  v104 = 1;
  v81 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v82 = 0LL;
    v83 = &v81->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      ++v82;
      v83 += 4;
      if ( v82 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v84 = (__int64)&v81->vtable[*v83].method;
  }
  else
  {
LABEL_28:
    v84 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v73);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v84)(Enumerator, *(_QWORD *)(v84 + 8));
  v104 = 0;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v63,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestScriptMaterialOverwriteEntity___) )
    return 0LL;
  v85 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  if ( (BYTE3(QuestScriptMaterialOverwriteMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestScriptMaterialOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
    v85 = QuestScriptMaterialOverwriteMaster___c_TypeInfo;
  }
  static_fields = v85->static_fields;
  _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      static_fields = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    }
    v88 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_QuestScriptMaterialOverwriteEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_0,
      v88,
      Method_QuestScriptMaterialOverwriteMaster___c__GetConditionClearEntity_b__1_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_QuestScriptMaterialOverwriteEntity__int___ctor__);
    v89 = QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
    v89->__9__1_0 = (struct System_Func_QuestScriptMaterialOverwriteEntity__int__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v89->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
  }
  BasicHelper__StableSort_QuestScriptMaterialOverwriteEntity_(
    (System_Collections_Generic_List_T__o *)v63,
    (System_Func_T__int__o *)_9__1_0,
    1,
    (const MethodInfo_1AD9A00 *)Method_BasicHelper_StableSort_QuestScriptMaterialOverwriteEntity___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v63 )
LABEL_62:
    sub_B5D69C(list, v64);
  v96 = (CommonReleaseMaster_o *)list;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v105,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v63,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestScriptMaterialOverwriteEntity__GetEnumerator__);
  while ( 1 )
  {
    v97 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v105,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__MoveNext__);
    if ( !v97 )
      break;
    current = v105.fields.current;
    if ( !v105.fields.current )
      sub_B5D69C(v97, v98);
    if ( !v96 )
      sub_B5D69C(v97, v98);
    if ( CommonReleaseMaster__IsOpen(v96, (int32_t)v105.fields.current[2].klass, 0LL, 0, 0LL) )
    {
      v100 = 192;
      goto LABEL_50;
    }
  }
  current = 0LL;
  v100 = 190;
LABEL_50:
  v103[0] = v100;
  ++v104;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v105,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptMaterialOverwriteEntity__Dispose__);
  if ( v104 )
  {
    v101 = v103[v104 - 1];
    if ( v101 == 190 )
    {
      current = 0LL;
    }
    else if ( v101 != 192 )
    {
      return 0LL;
    }
    --v104;
    return (QuestScriptMaterialOverwriteEntity_o *)current;
  }
  return 0LL;
}


void __fastcall QuestScriptMaterialOverwriteMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7F2B & 1) == 0 )
  {
    sub_B5D5C4(&QuestScriptMaterialOverwriteMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7F2B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestScriptMaterialOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestScriptMaterialOverwriteMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return x->fields.priority;
}