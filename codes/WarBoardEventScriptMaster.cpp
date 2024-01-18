void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418404A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__, method);
    byte_418404A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    464,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418404B & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_418404B = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarBoardEventScriptMaster___c_c *v9; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4184049 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v3);
    sub_B2C35C(&Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__, v4);
    sub_B2C35C(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v6);
    sub_B2C35C(&WarBoardEventScriptMaster___c_TypeInfo, v7);
    byte_4184049 = 1;
  }
  list = this->fields.list;
  v9 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v9 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v12,
      Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2713350 *)Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__);
    v13 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_B2C2F8(&v13->__9__1_0, _9__1_0);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v14,
                                                                           (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v19; // w22
  __int64 v20; // x10
  WarBoardEventScriptMaster___c_c *v21; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4184048 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v7);
    sub_B2C35C(&Method_System_Func_WarBoardEventScriptEntity__int___ctor__, v8);
    sub_B2C35C(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v13);
    sub_B2C35C(&WarBoardEventScriptMaster___c_TypeInfo, v14);
    sub_B2C35C(&WarBoardEventScriptEntity_TypeInfo, v15);
    byte_4184048 = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, v17);
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v19,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v17 = list;
      v20 = *(&WarBoardEventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v20
        && (WarBoardEventScriptEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] == WarBoardEventScriptEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v16 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_14;
  }
  v21 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v21 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v24,
      Method_WarBoardEventScriptMaster___c__GetList_b__0_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardEventScriptEntity__int___ctor__);
    v25 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v25->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_B2C2F8(&v25->__9__0_0, _9__0_0);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v26,
                                              (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_418404C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      entity);
    byte_418404C = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185744 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardEventScriptMaster___c_TypeInfo, v1);
    byte_4185744 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardEventScriptMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4185745 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardEventScriptEntity_TypeInfo, n);
    byte_4185745 = 1;
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
    sub_B2C434(this, 0LL);
  return a->fields.idx;
}