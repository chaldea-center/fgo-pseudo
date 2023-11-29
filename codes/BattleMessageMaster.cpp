void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6AE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method);
    byte_40F6AE4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    407,
    (const MethodInfo_266F73C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  BattleMessageMaster___c__DisplayClass3_0_o *v32; // x22
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  BattleMessageMaster___c_c *v44; // x0
  struct BattleMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x23
  Il2CppObject *v47; // x24
  struct BattleMessageMaster___c_StaticFields *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  BattleMessageMaster___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x21
  struct BattleMessageMaster___c_StaticFields *v62; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v64; // x23
  struct BattleMessageMaster___c_StaticFields *v65; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  BattleMessageMaster___c_c *v71; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v72; // x21
  struct BattleMessageMaster___c_StaticFields *v73; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_3; // x22
  Il2CppObject *v75; // x23
  struct BattleMessageMaster___c_StaticFields *v76; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v77; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v79; // x21
  unsigned __int64 v80; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v83; // x21
  int missionConditionDetailId; // w26
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v90; // x22
  int32_t v91; // w1
  __int64 v92; // x8
  unsigned __int64 v93; // x10
  int *v94; // x11
  __int64 v95; // x0
  __int64 v96; // x8
  unsigned __int64 v97; // x10
  int *v98; // x11
  __int64 v99; // x0

  if ( (byte_40F6AE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v11);
    sub_B16FFC(&Method_System_Func_BattleMessageEntity__int___ctor__, v12);
    sub_B16FFC(&Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Func_BattleMessageEntity__bool___ctor__, v14);
    sub_B16FFC(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo, v15);
    sub_B16FFC(&System_Func_BattleMessageEntity__int__TypeInfo, v16);
    sub_B16FFC(&System_Func_BattleMessageEntity__bool__TypeInfo, v17);
    sub_B16FFC(&System_IDisposable_TypeInfo, v18);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v19);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v20);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v24);
    sub_B16FFC(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v25);
    sub_B16FFC(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v26);
    sub_B16FFC(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v27);
    sub_B16FFC(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v28);
    sub_B16FFC(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v29);
    sub_B16FFC(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v30);
    sub_B16FFC(&BattleMessageMaster___c_TypeInfo, v31);
    byte_40F6AE7 = 1;
  }
  v32 = (BattleMessageMaster___c__DisplayClass3_0_o *)sub_B170CC(
                                                        BattleMessageMaster___c__DisplayClass3_0_TypeInfo,
                                                        *(_QWORD *)&id,
                                                        method,
                                                        v3,
                                                        v4);
  BattleMessageMaster___c__DisplayClass3_0___ctor(v32, 0LL);
  if ( !v32 )
    goto LABEL_70;
  v32->fields.id = id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleMessageEntity__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  list = this->fields.list;
  v44 = BattleMessageMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v44 = BattleMessageMaster___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__BattleMessageEntity__TypeInfo,
                                                                                                v39,
                                                                                                v40,
                                                                                                v41,
                                                                                                v42);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v47,
      Method_BattleMessageMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__);
    v48 = BattleMessageMaster___c_TypeInfo->static_fields;
    v48->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_B16F98(&v48->__9__3_0, _9__3_0);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleMessageEntity__bool__TypeInfo,
                                                                             v50,
                                                                             v51,
                                                                             v52,
                                                                             v53);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v54,
    (Il2CppObject *)v32,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleMessageEntity__bool___ctor__);
  v55 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v49,
          (System_Func_TSource__bool__o *)v54,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v60 = BattleMessageMaster___c_TypeInfo;
  v61 = v55;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v60 = BattleMessageMaster___c_TypeInfo;
  }
  v62 = v60->static_fields;
  _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v62->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v62 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v62->__9;
    _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleMessageEntity__int__TypeInfo,
                                                                                v56,
                                                                                v57,
                                                                                v58,
                                                                                v59);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_2,
      v64,
      Method_BattleMessageMaster___c__GetEntities_b__3_2__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v65 = BattleMessageMaster___c_TypeInfo->static_fields;
    v65->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_B16F98(&v65->__9__3_2, _9__3_2);
  }
  v66 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v61,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v71 = BattleMessageMaster___c_TypeInfo;
  v72 = v66;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v71 = BattleMessageMaster___c_TypeInfo;
  }
  v73 = v71->static_fields;
  _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v73->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v73 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_BattleMessageEntity__int__TypeInfo,
                                                                                v67,
                                                                                v68,
                                                                                v69,
                                                                                v70);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_3,
      v75,
      Method_BattleMessageMaster___c__GetEntities_b__3_3__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v76 = BattleMessageMaster___c_TypeInfo->static_fields;
    v76->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_B16F98(&v76->__9__3_3, _9__3_3);
  }
  v77 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v72,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_19C46C4 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v77 )
    goto LABEL_70;
  klass = v77->klass;
  v79 = v77;
  if ( *(_WORD *)&v77->klass->_2.bitflags1 )
  {
    v80 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      ++v80;
      p_offset += 4;
      if ( v80 >= *(unsigned __int16 *)&v77->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_36:
    p_method = sub_AAFEF8(v77, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v83 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v79,
          *(_QWORD *)(p_method + 8));
  if ( !v83 )
    sub_B170D4();
  missionConditionDetailId = -1;
  while ( 1 )
  {
    v92 = *(_QWORD *)v83;
    if ( *(_WORD *)(*(_QWORD *)v83 + 298LL) )
    {
      v93 = 0LL;
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v94 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v93;
        v94 += 4;
        if ( v93 >= *(unsigned __int16 *)(*(_QWORD *)v83 + 298LL) )
          goto LABEL_57;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_57:
      v95 = sub_AAFEF8(v83, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v83, *(_QWORD *)(v95 + 8)) & 1) == 0 )
      break;
    v85 = *(_QWORD *)v83;
    if ( *(_WORD *)(*(_QWORD *)v83 + 298LL) )
    {
      v86 = 0LL;
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v87 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        ++v86;
        v87 += 4;
        if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v83 + 298LL) )
          goto LABEL_44;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_44:
      v88 = sub_AAFEF8(v83, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    v89 = (*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v83, *(_QWORD *)(v88 + 8));
    v90 = (EventMissionProgressRequest_Argument_ProgressData_o *)v89;
    if ( !v89 )
      sub_B170D4();
    if ( missionConditionDetailId != *(_DWORD *)(v89 + 20) )
    {
      v91 = *(_DWORD *)(v89 + 28);
      if ( v91 < 1 )
        goto LABEL_51;
      if ( !Master_WarQuestSelectionMaster )
        sub_B170D4();
      if ( CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v91, 0LL, 0, 0LL) )
      {
LABEL_51:
        if ( !v38 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v38,
          v90,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
        missionConditionDetailId = v90->fields.missionConditionDetailId;
      }
    }
  }
  v96 = *(_QWORD *)v83;
  if ( *(_WORD *)(*(_QWORD *)v83 + 298LL) )
  {
    v97 = 0LL;
    v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v98 - 1) != System_IDisposable_TypeInfo )
    {
      ++v97;
      v98 += 4;
      if ( v97 >= *(unsigned __int16 *)(*(_QWORD *)v83 + 298LL) )
        goto LABEL_64;
    }
    v99 = v96 + 16LL * *v98 + 312;
  }
  else
  {
LABEL_64:
    v99 = sub_AAFEF8(v83, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v99)(v83, *(_QWORD *)(v99 + 8));
  if ( !v38 )
LABEL_70:
    sub_B170D4();
  return (BattleMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *__fastcall BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F6AE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40F6AE5 = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F6AE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__, entity);
    byte_40F6AE6 = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F9DDF & 1) == 0 )
  {
    sub_B16FFC(&BattleMessageMaster___c_TypeInfo, v1);
    byte_40F9DDF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleMessageMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleMessageEntity_o *__fastcall BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F9DE0 & 1) == 0 )
  {
    sub_B16FFC(&BattleMessageEntity_TypeInfo, ent);
    byte_40F9DE0 = 1;
  }
  if ( !ent )
    return 0LL;
  v4 = *(&BattleMessageEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (BattleMessageEntity_c *)ent->klass->_2.typeHierarchy[v4 - 1] == BattleMessageEntity_TypeInfo )
    return (BattleMessageEntity_o *)ent;
  return 0LL;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B170D4();
  return ent->fields.priority;
}


void __fastcall BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}