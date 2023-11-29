void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F63CA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method);
    byte_40F63CA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    463,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v23; // w23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v30; // x10
  WarBoardEventMaster___c_c *v31; // x0
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v34; // x21
  struct WarBoardEventMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  WarBoardEventMaster___c_c *v47; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x19
  struct WarBoardEventMaster___c_StaticFields *v49; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v51; // x21
  struct WarBoardEventMaster___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0

  if ( (byte_40F63C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v11);
    sub_B16FFC(&Method_System_Func_WarBoardEventEntity__int___ctor__, v12);
    sub_B16FFC(&System_Func_WarBoardEventEntity__int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v16);
    sub_B16FFC(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v17);
    sub_B16FFC(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v18);
    sub_B16FFC(&WarBoardEventMaster___c_TypeInfo, v19);
    sub_B16FFC(&WarBoardEventEntity_TypeInfo, v20);
    byte_40F63C8 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardEventEntity__TypeInfo,
                                                                                                  *(_QWORD *)&stageId,
                                                                                                  *(_QWORD *)&eventTiming,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B170D4();
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v28 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v28 )
      goto LABEL_15;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v28,
                                                                    v23,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v30 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30
        && (WarBoardEventEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == WarBoardEventEntity_TypeInfo
        && Item->fields.missionConditionDetailId == stageId
        && Item->fields.targetId == eventTiming )
      {
        if ( !v21 )
          goto LABEL_15;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v23;
    if ( !list )
      goto LABEL_15;
  }
  v31 = WarBoardEventMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v31 = WarBoardEventMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_WarBoardEventEntity__int__TypeInfo,
                                                                                v24,
                                                                                v25,
                                                                                v26,
                                                                                v27);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v34,
      Method_WarBoardEventMaster___c__GetList_b__0_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v35 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v35->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v47 = WarBoardEventMaster___c_TypeInfo;
  v48 = v42;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v47 = WarBoardEventMaster___c_TypeInfo;
  }
  v49 = v47->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v49->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v49 = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)v49->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_WarBoardEventEntity__int__TypeInfo,
                                                                                v43,
                                                                                v44,
                                                                                v45,
                                                                                v46);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v51,
      Method_WarBoardEventMaster___c__GetList_b__0_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v52 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v52->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v52->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v48,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v59,
                                        (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_40F63C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v11);
    sub_B16FFC(&WarBoardEventEntity_TypeInfo, v12);
    byte_40F63C9 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardEventEntity__TypeInfo,
                                                                                                  *(_QWORD *)&stageId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_17;
    Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                    v16,
                                                                    v15,
                                                                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v18 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (WarBoardEventEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == WarBoardEventEntity_TypeInfo
        && Item->fields.missionConditionDetailId == stageId )
      {
        if ( !v13 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v13 )
LABEL_17:
    sub_B170D4();
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7AE5 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardEventMaster___c_TypeInfo, v1);
    byte_40F7AE5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardEventMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEventMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardEventMaster___c___ctor(WarBoardEventMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_0(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.id;
}