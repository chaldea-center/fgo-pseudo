void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418401D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, method);
    byte_418401D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    463,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v23; // w23
  __int64 v24; // x10
  WarBoardEventMaster___c_c *v25; // x0
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v28; // x21
  struct WarBoardEventMaster___c_StaticFields *v29; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  WarBoardEventMaster___c_c *v31; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x19
  struct WarBoardEventMaster___c_StaticFields *v33; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v35; // x21
  struct WarBoardEventMaster___c_StaticFields *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_418401B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v10);
    sub_B2C35C(&Method_System_Func_WarBoardEventEntity__int___ctor__, v11);
    sub_B2C35C(&System_Func_WarBoardEventEntity__int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v15);
    sub_B2C35C(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v16);
    sub_B2C35C(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v17);
    sub_B2C35C(&WarBoardEventMaster___c_TypeInfo, v18);
    sub_B2C35C(&WarBoardEventEntity_TypeInfo, v19);
    byte_418401B = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B2C434(list, v21);
  v23 = 0;
  while ( v23 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v23,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v21 = list;
      v24 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v24
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[v24 - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list->fields._syncRoot) == eventTiming )
      {
        if ( !v20 )
          goto LABEL_15;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v23;
    if ( !list )
      goto LABEL_15;
  }
  v25 = WarBoardEventMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v25 = WarBoardEventMaster___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v28,
      Method_WarBoardEventMaster___c__GetList_b__0_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v29 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v29->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_B2C2F8(&v29->__9__0_0, _9__0_0);
  }
  v30 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v31 = WarBoardEventMaster___c_TypeInfo;
  v32 = v30;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v31 = WarBoardEventMaster___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v33->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v35,
      Method_WarBoardEventMaster___c__GetList_b__0_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v36 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v36->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_B2C2F8(&v36->__9__0_1, _9__0_1);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v37,
                                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_418401C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v9);
    sub_B2C35C(&WarBoardEventEntity_TypeInfo, v10);
    byte_418401C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185743 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardEventMaster___c_TypeInfo, v1);
    byte_4185743 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardEventMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return a->fields.id;
}