void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387B8C & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
    byte_4387B8C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    465,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  __int64 v11; // x10
  WarBoardEventMaster___c_c *v12; // x0
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v15; // x21
  struct WarBoardEventMaster___c_StaticFields *v16; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  WarBoardEventMaster___c_c *v18; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x19
  struct WarBoardEventMaster___c_StaticFields *v20; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v22; // x21
  struct WarBoardEventMaster___c_StaticFields *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4387B8A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
    sub_B775C4(&Method_System_Func_WarBoardEventEntity__int___ctor__);
    sub_B775C4(&System_Func_WarBoardEventEntity__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    sub_B775C4(&Method_WarBoardEventMaster___c__GetList_b__0_0__);
    sub_B775C4(&Method_WarBoardEventMaster___c__GetList_b__0_1__);
    sub_B775C4(&WarBoardEventMaster___c_TypeInfo);
    sub_B775C4(&WarBoardEventEntity_TypeInfo);
    byte_4387B8A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B7769C(list, v8);
  v10 = 0;
  while ( v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v8 = list;
      v11 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list->fields._syncRoot) == eventTiming )
      {
        if ( !v7 )
          goto LABEL_15;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_15;
  }
  v12 = WarBoardEventMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v12 = WarBoardEventMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v15,
      Method_WarBoardEventMaster___c__GetList_b__0_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v16 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v16->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_B77560(&v16->__9__0_0);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1D34DBC *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v18 = WarBoardEventMaster___c_TypeInfo;
  v19 = v17;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v18 = WarBoardEventMaster___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v20->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v20 = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v22,
      Method_WarBoardEventMaster___c__GetList_b__0_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v23 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v23->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_B77560(&v23->__9__0_1);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1D3CDB0 *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v24,
                                        (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10

  if ( (byte_4387B8B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
    sub_B775C4(&WarBoardEventEntity_TypeInfo);
    byte_4387B8B = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId )
      {
        if ( !v5 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v5 )
LABEL_17:
    sub_B7769C(list, v6);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388F58 & 1) == 0 )
  {
    sub_B775C4(&WarBoardEventMaster___c_TypeInfo);
    byte_4388F58 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEventMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B7769C(this, 0LL);
  return a->fields.id;
}