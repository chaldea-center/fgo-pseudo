void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F63F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__, method);
    byte_40F63F7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    464,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F63F8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F63F8 = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266F7D8 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarBoardEventScriptMaster___c_c *v12; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F63F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v6);
    sub_B16FFC(&Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__, v7);
    sub_B16FFC(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v9);
    sub_B16FFC(&WarBoardEventScriptMaster___c_TypeInfo, v10);
    byte_40F63F6 = 1;
  }
  list = this->fields.list;
  v12 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v12 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo,
                                                                                                method,
                                                                                                v2,
                                                                                                v3,
                                                                                                v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v15,
      Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__);
    v16 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v16->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v23,
                                                                           (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v20; // w22
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v27; // x10
  WarBoardEventScriptMaster___c_c *v28; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v31; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_40F63F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardEventScriptEntity__int___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v15);
    sub_B16FFC(&WarBoardEventScriptMaster___c_TypeInfo, v16);
    sub_B16FFC(&WarBoardEventScriptEntity_TypeInfo, v17);
    byte_40F63F5 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo,
                                                                                                  *(_QWORD *)&id,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B170D4();
  v20 = 0;
  while ( v20 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v25 )
      goto LABEL_14;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v25,
                                                                    v20,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v27 = *(&WarBoardEventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
        && (WarBoardEventScriptEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == WarBoardEventScriptEntity_TypeInfo
        && Item->fields.missionTargetId == id )
      {
        if ( !v18 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v20;
    if ( !list )
      goto LABEL_14;
  }
  v28 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v28 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_WarBoardEventScriptEntity__int__TypeInfo,
                                                                                v21,
                                                                                v22,
                                                                                v23,
                                                                                v24);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v31,
      Method_WarBoardEventScriptMaster___c__GetList_b__0_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardEventScriptEntity__int___ctor__);
    v32 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v32->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v39,
                                              (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardEventScriptMaster__TryGetEntity(
        WarBoardEventScriptMaster_o *this,
        WarBoardEventScriptEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F63F9 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      entity);
    byte_40F63F9 = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7AE6 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardEventScriptMaster___c_TypeInfo, v1);
    byte_40F7AE6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardEventScriptMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardEventScriptMaster___c___ctor(WarBoardEventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster___c___GetEntityList_b__1_0(
        WarBoardEventScriptMaster___c_o *this,
        DataEntityBase_o *n,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F7AE7 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardEventScriptEntity_TypeInfo, n);
    byte_40F7AE7 = 1;
  }
  if ( !n )
    return 0LL;
  v4 = *(&WarBoardEventScriptEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&n->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (WarBoardEventScriptEntity_c *)n->klass->_2.typeHierarchy[v4 - 1] == WarBoardEventScriptEntity_TypeInfo )
    return (WarBoardEventScriptEntity_o *)n;
  return 0LL;
}


int32_t __fastcall WarBoardEventScriptMaster___c___GetList_b__0_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.idx;
}