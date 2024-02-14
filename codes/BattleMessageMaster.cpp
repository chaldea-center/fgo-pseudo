void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421118B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method);
    byte_421118B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    407,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
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
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  BattleMessageMaster___c__DisplayClass3_0_o *v30; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x0
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  BattleMessageMaster___c_c *v39; // x0
  struct BattleMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x23
  Il2CppObject *v42; // x24
  struct BattleMessageMaster___c_StaticFields *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  BattleMessageMaster___c_c *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  struct BattleMessageMaster___c_StaticFields *v53; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v55; // x23
  struct BattleMessageMaster___c_StaticFields *v56; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  BattleMessageMaster___c_c *v60; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x21
  struct BattleMessageMaster___c_StaticFields *v62; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_3; // x22
  Il2CppObject *v64; // x23
  struct BattleMessageMaster___c_StaticFields *v65; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x21
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v71; // x21
  int missionConditionDetailId; // w26
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  __int64 IsOpen; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x22
  int32_t v79; // w1
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  __int64 v84; // x8
  unsigned __int64 v85; // x10
  int *v86; // x11
  __int64 v87; // x0

  if ( (byte_421118E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v9);
    sub_B0D8A4(&Method_System_Func_BattleMessageEntity__int___ctor__, v10);
    sub_B0D8A4(&Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_BattleMessageEntity__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo, v13);
    sub_B0D8A4(&System_Func_BattleMessageEntity__int__TypeInfo, v14);
    sub_B0D8A4(&System_Func_BattleMessageEntity__bool__TypeInfo, v15);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v22);
    sub_B0D8A4(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v23);
    sub_B0D8A4(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v24);
    sub_B0D8A4(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v25);
    sub_B0D8A4(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v26);
    sub_B0D8A4(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v27);
    sub_B0D8A4(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v28);
    sub_B0D8A4(&BattleMessageMaster___c_TypeInfo, v29);
    byte_421118E = 1;
  }
  v30 = (BattleMessageMaster___c__DisplayClass3_0_o *)sub_B0D974(
                                                        BattleMessageMaster___c__DisplayClass3_0_TypeInfo,
                                                        *(_QWORD *)&id,
                                                        method);
  BattleMessageMaster___c__DisplayClass3_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_70;
  v30->fields.id = id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleMessageEntity__TypeInfo,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  list = this->fields.list;
  v39 = BattleMessageMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v39 = BattleMessageMaster___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_DataEntityBase__BattleMessageEntity__TypeInfo,
                                                                                                v36,
                                                                                                v37);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v42,
      Method_BattleMessageMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_261A104 *)Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__);
    v43 = BattleMessageMaster___c_TypeInfo->static_fields;
    v43->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_B0D840(&v43->__9__3_0, _9__3_0);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleMessageEntity__bool__TypeInfo,
                                                                             v45,
                                                                             v46);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    (Il2CppObject *)v30,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleMessageEntity__bool___ctor__);
  v48 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v44,
          (System_Func_TSource__bool__o *)v47,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v51 = BattleMessageMaster___c_TypeInfo;
  v52 = v48;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v51 = BattleMessageMaster___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v53->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v53 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleMessageEntity__int__TypeInfo,
                                                                                v49,
                                                                                v50);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_2,
      v55,
      Method_BattleMessageMaster___c__GetEntities_b__3_2__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v56 = BattleMessageMaster___c_TypeInfo->static_fields;
    v56->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_B0D840(&v56->__9__3_2, _9__3_2);
  }
  v57 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v52,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v60 = BattleMessageMaster___c_TypeInfo;
  v61 = v57;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v60 = BattleMessageMaster___c_TypeInfo;
  }
  v62 = v60->static_fields;
  _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v62->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v62 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v62->__9;
    _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_BattleMessageEntity__int__TypeInfo,
                                                                                v58,
                                                                                v59);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_3,
      v64,
      Method_BattleMessageMaster___c__GetEntities_b__3_3__,
      (const MethodInfo_2619564 *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v65 = BattleMessageMaster___c_TypeInfo->static_fields;
    v65->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_B0D840(&v65->__9__3_3, _9__3_3);
  }
  v31 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v61,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_1B55D8C *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v31 )
    goto LABEL_70;
  klass = v31->klass;
  v67 = v31;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v68 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      ++v68;
      p_offset += 4;
      if ( v68 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_36:
    p_method = sub_AA67A0(v31, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v71 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v67,
          *(_QWORD *)(p_method + 8));
  if ( !v71 )
    sub_B0D97C(0LL);
  missionConditionDetailId = -1;
  while ( 1 )
  {
    v80 = *(_QWORD *)v71;
    if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
    {
      v81 = 0LL;
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v82 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v81;
        v82 += 4;
        if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
          goto LABEL_57;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_57:
      v83 = sub_AA67A0(v71, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v71, *(_QWORD *)(v83 + 8)) & 1) == 0 )
      break;
    v73 = *(_QWORD *)v71;
    if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
    {
      v74 = 0LL;
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v75 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        ++v74;
        v75 += 4;
        if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
          goto LABEL_44;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_44:
      v76 = sub_AA67A0(v71, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v71, *(_QWORD *)(v76 + 8));
    v78 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsOpen;
    if ( !IsOpen )
      sub_B0D97C(0LL);
    if ( missionConditionDetailId != *(_DWORD *)(IsOpen + 20) )
    {
      v79 = *(_DWORD *)(IsOpen + 28);
      if ( v79 < 1 )
        goto LABEL_51;
      if ( !Master_WarQuestSelectionMaster )
        sub_B0D97C(IsOpen);
      IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v79, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v35 )
          sub_B0D97C(IsOpen);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v35,
          v78,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
        missionConditionDetailId = v78->fields.missionConditionDetailId;
      }
    }
  }
  v84 = *(_QWORD *)v71;
  if ( *(_WORD *)(*(_QWORD *)v71 + 298LL) )
  {
    v85 = 0LL;
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      ++v85;
      v86 += 4;
      if ( v85 >= *(unsigned __int16 *)(*(_QWORD *)v71 + 298LL) )
        goto LABEL_64;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_64:
    v87 = sub_AA67A0(v71, System_IDisposable_TypeInfo, 0LL);
  }
  v31 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v87)(
                                                       v71,
                                                       *(_QWORD *)(v87 + 8));
  if ( !v35 )
LABEL_70:
    sub_B0D97C(v31);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_421118C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_421118C = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_421118D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__, entity);
    byte_421118D = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4213BE5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleMessageMaster___c_TypeInfo, v1);
    byte_4213BE5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4213BE6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleMessageEntity_TypeInfo, ent);
    byte_4213BE6 = 1;
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
    sub_B0D97C(this);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B0D97C(this);
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