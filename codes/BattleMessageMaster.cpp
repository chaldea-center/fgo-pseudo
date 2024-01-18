void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41843CD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method);
    byte_41843CD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    407,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
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
  __int64 v32; // x1
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x19
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  BattleMessageMaster___c_c *v36; // x0
  struct BattleMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__3_0; // x23
  Il2CppObject *v39; // x24
  struct BattleMessageMaster___c_StaticFields *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  BattleMessageMaster___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  struct BattleMessageMaster___c_StaticFields *v46; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_2; // x22
  Il2CppObject *v48; // x23
  struct BattleMessageMaster___c_StaticFields *v49; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v50; // x0
  BattleMessageMaster___c_c *v51; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x21
  struct BattleMessageMaster___c_StaticFields *v53; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_3; // x22
  Il2CppObject *v55; // x23
  struct BattleMessageMaster___c_StaticFields *v56; // x0
  __int64 v57; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x21
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v63; // x1
  __int64 v64; // x3
  __int64 v65; // x21
  int missionConditionDetailId; // w26
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  __int64 IsOpen; // x0
  __int64 v72; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0
  __int64 v79; // x3
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0

  if ( (byte_41843D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v9);
    sub_B2C35C(&Method_System_Func_BattleMessageEntity__int___ctor__, v10);
    sub_B2C35C(&Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Func_BattleMessageEntity__bool___ctor__, v12);
    sub_B2C35C(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo, v13);
    sub_B2C35C(&System_Func_BattleMessageEntity__int__TypeInfo, v14);
    sub_B2C35C(&System_Func_BattleMessageEntity__bool__TypeInfo, v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v18);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v22);
    sub_B2C35C(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v23);
    sub_B2C35C(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v24);
    sub_B2C35C(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v25);
    sub_B2C35C(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v26);
    sub_B2C35C(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v27);
    sub_B2C35C(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v28);
    sub_B2C35C(&BattleMessageMaster___c_TypeInfo, v29);
    byte_41843D0 = 1;
  }
  v30 = (BattleMessageMaster___c__DisplayClass3_0_o *)sub_B2C42C(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  BattleMessageMaster___c__DisplayClass3_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_70;
  v30->fields.id = id;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  list = this->fields.list;
  v36 = BattleMessageMaster___c_TypeInfo;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v36 = BattleMessageMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__BattleMessageEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__3_0,
      v39,
      Method_BattleMessageMaster___c__GetEntities_b__3_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__BattleMessageEntity___ctor__);
    v40 = BattleMessageMaster___c_TypeInfo->static_fields;
    v40->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_B2C2F8(&v40->__9__3_0, _9__3_0);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v30,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleMessageEntity__bool___ctor__);
  v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v41,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v44 = BattleMessageMaster___c_TypeInfo;
  v45 = v43;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v44 = BattleMessageMaster___c_TypeInfo;
  }
  v46 = v44->static_fields;
  _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v46->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v46 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__3_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_2,
      v48,
      Method_BattleMessageMaster___c__GetEntities_b__3_2__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v49 = BattleMessageMaster___c_TypeInfo->static_fields;
    v49->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_B2C2F8(&v49->__9__3_2, _9__3_2);
  }
  v50 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          v45,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v51 = BattleMessageMaster___c_TypeInfo;
  v52 = v50;
  if ( (BYTE3(BattleMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v51 = BattleMessageMaster___c_TypeInfo;
  }
  v53 = v51->static_fields;
  _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v53->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v53 = BattleMessageMaster___c_TypeInfo->static_fields;
    }
    v55 = (Il2CppObject *)v53->__9;
    _9__3_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_3,
      v55,
      Method_BattleMessageMaster___c__GetEntities_b__3_3__,
      (const MethodInfo_27127B0 *)Method_System_Func_BattleMessageEntity__int___ctor__);
    v56 = BattleMessageMaster___c_TypeInfo->static_fields;
    v56->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_B2C2F8(&v56->__9__3_3, _9__3_3);
  }
  v31 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
          v52,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_1A9AAC0 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v31 )
    goto LABEL_70;
  klass = v31->klass;
  v59 = v31;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v60 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      ++v60;
      p_offset += 4;
      if ( v60 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_36:
    p_method = sub_AC5258(v31, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL, v57);
  }
  v65 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v59,
          *(_QWORD *)(p_method + 8));
  if ( !v65 )
    sub_B2C434(0LL, v63);
  missionConditionDetailId = -1;
  while ( 1 )
  {
    v75 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v76 = 0LL;
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v76;
        v77 += 4;
        if ( v76 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_57;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_57:
      v78 = sub_AC5258(v65, System_Collections_IEnumerator_TypeInfo, 0LL, v64);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v65, *(_QWORD *)(v78 + 8)) & 1) == 0 )
      break;
    v67 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v68 = 0LL;
      v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v69 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        ++v68;
        v69 += 4;
        if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_44;
      }
      v70 = v67 + 16LL * *v69 + 312;
    }
    else
    {
LABEL_44:
      v70 = sub_AC5258(v65, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL, v79);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v65, *(_QWORD *)(v70 + 8));
    v73 = (EventMissionProgressRequest_Argument_ProgressData_o *)IsOpen;
    if ( !IsOpen )
      sub_B2C434(0LL, v72);
    if ( missionConditionDetailId != *(_DWORD *)(IsOpen + 20) )
    {
      v74 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v74 < 1 )
        goto LABEL_51;
      if ( !Master_WarQuestSelectionMaster )
        sub_B2C434(IsOpen, v74);
      IsOpen = CommonReleaseMaster__IsOpen(Master_WarQuestSelectionMaster, v74, 0LL, 0, 0LL);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v34 )
          sub_B2C434(IsOpen, v74);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v34,
          v73,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
        missionConditionDetailId = v73->fields.missionConditionDetailId;
      }
    }
  }
  v80 = *(_QWORD *)v65;
  if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
  {
    v81 = 0LL;
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
    {
      ++v81;
      v82 += 4;
      if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
        goto LABEL_64;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_64:
    v83 = sub_AC5258(v65, System_IDisposable_TypeInfo, 0LL, v79);
  }
  v31 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v83)(
                                                       v65,
                                                       *(_QWORD *)(v83 + 8));
  if ( !v34 )
LABEL_70:
    sub_B2C434(v31, v32);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_41843CE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_41843CE = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_41843CF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__, entity);
    byte_41843CF = 1;
  }
  PK = BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_41871CE & 1) == 0 )
  {
    sub_B2C35C(&BattleMessageMaster___c_TypeInfo, v1);
    byte_41871CE = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_41871CF & 1) == 0 )
  {
    sub_B2C35C(&BattleMessageEntity_TypeInfo, ent);
    byte_41871CF = 1;
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
    sub_B2C434(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B2C434(this, 0LL);
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