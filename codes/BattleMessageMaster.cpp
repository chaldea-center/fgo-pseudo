void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387721 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_4387721 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    408,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattleMessageMaster___c__DisplayClass3_0_o *v5; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v6; // x0
  __int64 v7; // x1
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  BattleMessageMaster___c_c *v11; // x0
  struct BattleMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x23
  Il2CppObject *v14; // x24
  struct BattleMessageMaster___c_StaticFields *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  BattleMessageMaster___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  struct BattleMessageMaster___c_StaticFields *v21; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v23; // x23
  struct BattleMessageMaster___c_StaticFields *v24; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x0
  BattleMessageMaster___c_c *v26; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x21
  struct BattleMessageMaster___c_StaticFields *v28; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_3; // x22
  Il2CppObject *v30; // x23
  struct BattleMessageMaster___c_StaticFields *v31; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x21
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x1
  __int64 v38; // x21
  int missionConditionDetailId; // w26
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 IsOpen; // x0
  __int64 v45; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0

  if ( (byte_4387724 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_B775C4(&Method_System_Func_BattleMessageEntity__int___ctor__);
    sub_B775C4(&Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__);
    sub_B775C4(&Method_System_Func_BattleMessageEntity__bool___ctor__);
    sub_B775C4(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo);
    sub_B775C4(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_B775C4(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_B775C4(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_B775C4(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_B775C4(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_B775C4(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_B775C4(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_B775C4(&BattleMessageMaster___c_TypeInfo);
    byte_4387724 = 1;
  }
  v5 = (BattleMessageMaster___c__DisplayClass3_0_o *)sub_B77694(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  BattleMessageMaster___c__DisplayClass3_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_70;
  v5->fields.id = id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  list = this->fields.list;
  v11 = BattleMessageMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v11 = BattleMessageMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_DataEntityBase__BattleMessageEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v14,
      Method_BattleMessageMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__);
    v15 = BattleMessageMaster___c_TypeInfo->static_fields;
    v15->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_B77560(&v15->__9__3_0);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BattleMessageEntity__bool___ctor__);
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v19 = BattleMessageMaster___c_TypeInfo;
  v20 = v18;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v19 = BattleMessageMaster___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v21->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v21 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_2,
      v23,
      Method_BattleMessageMaster___c__GetEntities_b__3_2__,
      (const MethodInfo_29E9E70 *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v24 = BattleMessageMaster___c_TypeInfo->static_fields;
    v24->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_B77560(&v24->__9__3_2);
  }
  v25 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v20,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v26 = BattleMessageMaster___c_TypeInfo;
  v27 = v25;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v26 = BattleMessageMaster___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v28 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_3,
      v30,
      Method_BattleMessageMaster___c__GetEntities_b__3_3__,
      (const MethodInfo_29E9E70 *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v31 = BattleMessageMaster___c_TypeInfo->static_fields;
    v31->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_B77560(&v31->__9__3_3);
  }
  v6 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
         v27,
         (System_Func_TSource__TKey__o *)_9__3_3,
         (const MethodInfo_1D3D050 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v6 )
    goto LABEL_70;
  klass = v6->klass;
  v33 = v6;
  if ( *(_WORD *)&v6->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_36:
    p_method = sub_B0F4C0(v6, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v33,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_B7769C(0LL, v37);
  missionConditionDetailId = -1;
  while ( 1 )
  {
    v48 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_57;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_57:
      v51 = sub_B0F4C0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v38, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v38;
    if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
    {
      v41 = 0LL;
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v42 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
          goto LABEL_44;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_44:
      v43 = sub_B0F4C0(v38, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v38, *(_QWORD *)(v43 + 8));
    v46 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsOpen;
    if ( !IsOpen )
      sub_B7769C(0LL, v45);
    if ( missionConditionDetailId != *(_DWORD *)(IsOpen + 20) )
    {
      v47 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v47 < 1 )
        goto LABEL_51;
      if ( !Master_WarQuestSelectionMaster )
        sub_B7769C(IsOpen, v47);
      IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v47, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v9 )
          sub_B7769C(IsOpen, v47);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          v46,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
        missionConditionDetailId = v46->fields.missionConditionDetailId;
      }
    }
  }
  v52 = *(_QWORD *)v38;
  if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
  {
    v53 = 0LL;
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      v54 += 4;
      if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
        goto LABEL_64;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_64:
    v55 = sub_B0F4C0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(
                                                      v38,
                                                      *(_QWORD *)(v55 + 8));
  if ( !v9 )
LABEL_70:
    sub_B7769C(v6, v7);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_4387722 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_4387722 = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_4387723 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_4387723 = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438A859 & 1) == 0 )
  {
    sub_B775C4(&BattleMessageMaster___c_TypeInfo);
    byte_438A859 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438A85A & 1) == 0 )
  {
    sub_B775C4(&BattleMessageEntity_TypeInfo);
    byte_438A85A = 1;
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
    sub_B7769C(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7769C(this, 0LL);
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