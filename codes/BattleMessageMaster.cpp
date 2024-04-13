void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E506D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E506D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    408,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
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
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  BattleMessageMaster___c__DisplayClass3_0_o *v81; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v82; // x0
  __int64 v83; // x1
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x19
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  BattleMessageMaster___c_c *v87; // x0
  struct BattleMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x23
  Il2CppObject *v90; // x24
  struct BattleMessageMaster___c_StaticFields *v91; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v93; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  BattleMessageMaster___c_c *v95; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x21
  struct BattleMessageMaster___c_StaticFields *v97; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v99; // x23
  struct BattleMessageMaster___c_StaticFields *v100; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v101; // x0
  BattleMessageMaster___c_c *v102; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v103; // x21
  struct BattleMessageMaster___c_StaticFields *v104; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_3; // x22
  Il2CppObject *v106; // x23
  struct BattleMessageMaster___c_StaticFields *v107; // x0
  __int64 v108; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v110; // x21
  unsigned __int64 v111; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v114; // x1
  __int64 v115; // x3
  __int64 v116; // x21
  int missionConditionDetailId; // w26
  __int64 v118; // x8
  unsigned __int64 v119; // x10
  int *v120; // x11
  __int64 v121; // x0
  __int64 IsOpen; // x0
  __int64 v123; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v124; // x22
  __int64 v125; // x1
  __int64 v126; // x8
  unsigned __int64 v127; // x10
  int *v128; // x11
  __int64 v129; // x0
  __int64 v130; // x3
  __int64 v131; // x8
  unsigned __int64 v132; // x10
  int *v133; // x11
  __int64 v134; // x0

  if ( (byte_42E5070 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonReleaseMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_BattleMessageEntity__int___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_BattleMessageEntity__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Func_BattleMessageEntity__int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_BattleMessageEntity__bool__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v45, v46, v47);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v57, v58, v59);
    sub_B5D5C4(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v63, v64, v65);
    sub_B5D5C4(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v66, v67, v68);
    sub_B5D5C4(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v69, v70, v71);
    sub_B5D5C4(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v72, v73, v74);
    sub_B5D5C4(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&BattleMessageMaster___c_TypeInfo, v78, v79, v80);
    byte_42E5070 = 1;
  }
  v81 = (BattleMessageMaster___c__DisplayClass3_0_o *)sub_B5D694(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  BattleMessageMaster___c__DisplayClass3_0___ctor(v81, 0LL);
  if ( !v81 )
    goto LABEL_70;
  v81->fields.id = id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  list = this->fields.list;
  v87 = BattleMessageMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v87 = BattleMessageMaster___c_TypeInfo;
  }
  static_fields = v87->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v87->vtable._0_Equals.methodPtr) & 4) != 0 && !v87->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v87);
      static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v90 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__BattleMessageEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v90,
      Method_BattleMessageMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__);
    v91 = BattleMessageMaster___c_TypeInfo->static_fields;
    v91->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_B5D560(&v91->__9__3_0);
  }
  v92 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v93 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v93,
    (Il2CppObject *)v81,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleMessageEntity__bool___ctor__);
  v94 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v92,
          (System_Func_TSource__bool__o *)v93,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v95 = BattleMessageMaster___c_TypeInfo;
  v96 = v94;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v95 = BattleMessageMaster___c_TypeInfo;
  }
  v97 = v95->static_fields;
  _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v97->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v95);
      v97 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v99 = (Il2CppObject *)v97->__9;
    _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_2,
      v99,
      Method_BattleMessageMaster___c__GetEntities_b__3_2__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v100 = BattleMessageMaster___c_TypeInfo->static_fields;
    v100->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_B5D560(&v100->__9__3_2);
  }
  v101 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
           v96,
           (System_Func_TSource__TKey__o *)_9__3_2,
           (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v102 = BattleMessageMaster___c_TypeInfo;
  v103 = v101;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v102 = BattleMessageMaster___c_TypeInfo;
  }
  v104 = v102->static_fields;
  _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v104->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v102->vtable._0_Equals.methodPtr) & 4) != 0 && !v102->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v102);
      v104 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v106 = (Il2CppObject *)v104->__9;
    _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_3,
      v106,
      Method_BattleMessageMaster___c__GetEntities_b__3_3__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v107 = BattleMessageMaster___c_TypeInfo->static_fields;
    v107->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_B5D560(&v107->__9__3_3);
  }
  v82 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v103,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_1CB72CC *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v82 )
    goto LABEL_70;
  klass = v82->klass;
  v110 = v82;
  if ( *(_WORD *)&v82->klass->_2.bitflags1 )
  {
    v111 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      ++v111;
      p_offset += 4;
      if ( v111 >= *(unsigned __int16 *)&v82->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_36:
    p_method = sub_AF54C0(v82, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL, v108);
  }
  v116 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
           v110,
           *(_QWORD *)(p_method + 8));
  if ( !v116 )
    sub_B5D69C(0LL, v114);
  missionConditionDetailId = -1;
  while ( 1 )
  {
    v126 = *(_QWORD *)v116;
    if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
    {
      v127 = 0LL;
      v128 = (int *)(*(_QWORD *)(v126 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v128 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v127;
        v128 += 4;
        if ( v127 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
          goto LABEL_57;
      }
      v129 = v126 + 16LL * *v128 + 312;
    }
    else
    {
LABEL_57:
      v129 = sub_AF54C0(v116, System_Collections_IEnumerator_TypeInfo, 0LL, v115);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v116, *(_QWORD *)(v129 + 8)) & 1) == 0 )
      break;
    v118 = *(_QWORD *)v116;
    if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
    {
      v119 = 0LL;
      v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v120 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        ++v119;
        v120 += 4;
        if ( v119 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
          goto LABEL_44;
      }
      v121 = v118 + 16LL * *v120 + 312;
    }
    else
    {
LABEL_44:
      v121 = sub_AF54C0(v116, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL, v130);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v116, *(_QWORD *)(v121 + 8));
    v124 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsOpen;
    if ( !IsOpen )
      sub_B5D69C(0LL, v123);
    if ( missionConditionDetailId != *(_DWORD *)(IsOpen + 20) )
    {
      v125 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v125 < 1 )
        goto LABEL_51;
      if ( !Master_WarQuestSelectionMaster )
        sub_B5D69C(IsOpen, v125);
      IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v125, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v85 )
          sub_B5D69C(IsOpen, v125);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v85,
          v124,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
        missionConditionDetailId = v124->fields.missionConditionDetailId;
      }
    }
  }
  v131 = *(_QWORD *)v116;
  if ( *(_WORD *)(*(_QWORD *)v116 + 298LL) )
  {
    v132 = 0LL;
    v133 = (int *)(*(_QWORD *)(v131 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v133 - 1) != System_IDisposable_TypeInfo )
    {
      ++v132;
      v133 += 4;
      if ( v132 >= *(unsigned __int16 *)(*(_QWORD *)v116 + 298LL) )
        goto LABEL_64;
    }
    v134 = v131 + 16LL * *v133 + 312;
  }
  else
  {
LABEL_64:
    v134 = sub_AF54C0(v116, System_IDisposable_TypeInfo, 0LL, v130);
  }
  v82 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v134)(
                                                       v116,
                                                       *(_QWORD *)(v134 + 8));
  if ( !v85 )
LABEL_70:
    sub_B5D69C(v82, v83);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v85,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_42E506E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__,
      id,
      idx,
      *(_QWORD *)&priority);
    byte_42E506E = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_42E506F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&idx);
    byte_42E506F = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7CBA & 1) == 0 )
  {
    sub_B5D5C4(&BattleMessageMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7CBA = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E7CBB & 1) == 0 )
  {
    sub_B5D5C4(&BattleMessageEntity_TypeInfo, (_DWORD)ent, (_DWORD)method, v3);
    byte_42E7CBB = 1;
  }
  if ( !ent )
    return 0LL;
  v5 = *(&BattleMessageEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&ent->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (BattleMessageEntity_c *)ent->klass->_2.typeHierarchy[v5 - 1] == BattleMessageEntity_TypeInfo )
    return (BattleMessageEntity_o *)ent;
  return 0LL;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B5D69C(this, 0LL);
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