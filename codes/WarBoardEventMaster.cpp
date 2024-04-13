void __fastcall WarBoardEventMaster___ctor(WarBoardEventMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5200 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E5200 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    465,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_WarBoardEventMaster__WarBoardEventEntity__int___ctor__);
}


WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetList(
        WarBoardEventMaster_o *this,
        int32_t stageId,
        int32_t eventTiming,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v47; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v49; // w23
  __int64 v50; // x10
  WarBoardEventMaster___c_c *v51; // x0
  struct WarBoardEventMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v54; // x21
  struct WarBoardEventMaster___c_StaticFields *v55; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x0
  WarBoardEventMaster___c_c *v57; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x19
  struct WarBoardEventMaster___c_StaticFields *v59; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v61; // x21
  struct WarBoardEventMaster___c_StaticFields *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0

  if ( (byte_42E51FE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      stageId,
      eventTiming,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_WarBoardEventEntity__int___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Func_WarBoardEventEntity__int__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_WarBoardEventMaster___c__GetList_b__0_0__, v34, v35, v36);
    sub_B5D5C4(&Method_WarBoardEventMaster___c__GetList_b__0_1__, v37, v38, v39);
    sub_B5D5C4(&WarBoardEventMaster___c_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&WarBoardEventEntity_TypeInfo, v43, v44, v45);
    byte_42E51FE = 1;
  }
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_B5D69C(list, v47);
  v49 = 0;
  while ( v49 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v49,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v47 = list;
      v50 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v50
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[v50 - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId
        && LODWORD(list->fields._syncRoot) == eventTiming )
      {
        if ( !v46 )
          goto LABEL_15;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v46,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v49;
    if ( !list )
      goto LABEL_15;
  }
  v51 = WarBoardEventMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v51 = WarBoardEventMaster___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v54,
      Method_WarBoardEventMaster___c__GetList_b__0_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v55 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v55->__9__0_0 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_0;
    sub_B5D560(&v55->__9__0_0);
  }
  v56 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v46,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardEventEntity__int___);
  v57 = WarBoardEventMaster___c_TypeInfo;
  v58 = v56;
  if ( (BYTE3(WarBoardEventMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventMaster___c_TypeInfo);
    v57 = WarBoardEventMaster___c_TypeInfo;
  }
  v59 = v57->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v59->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v59 = WarBoardEventMaster___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v59->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardEventEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v61,
      Method_WarBoardEventMaster___c__GetList_b__0_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardEventEntity__int___ctor__);
    v62 = WarBoardEventMaster___c_TypeInfo->static_fields;
    v62->__9__0_1 = (struct System_Func_WarBoardEventEntity__int__o *)_9__0_1;
    sub_B5D560(&v62->__9__0_1);
  }
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v58,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_WarBoardEventEntity__int___);
  return (WarBoardEventEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                        v63,
                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventEntity___);
}


WarBoardEventEntity_array *__fastcall WarBoardEventMaster__GetListByStageId(
        WarBoardEventMaster_o *this,
        int32_t stageId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42E51FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      stageId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardEventEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&WarBoardEventEntity_TypeInfo, v21, v22, v23);
    byte_42E51FF = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEventEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEventEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v27,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v25 = list;
      v28 = *(&WarBoardEventEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (WarBoardEventEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == WarBoardEventEntity_TypeInfo
        && HIDWORD(list->fields.items) == stageId )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardEventEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (WarBoardEventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardEventEntity__ToArray__);
}


void __fastcall WarBoardEventMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7668 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardEventMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7668 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardEventMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEventMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall WarBoardEventMaster___c___GetList_b__0_1(
        WarBoardEventMaster___c_o *this,
        WarBoardEventEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B5D69C(this, 0LL);
  return a->fields.id;
}