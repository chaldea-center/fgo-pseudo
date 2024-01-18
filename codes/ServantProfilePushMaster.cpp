void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189BD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method);
    byte_4189BD6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    470,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *__fastcall ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  int32_t v19; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x23
  __int64 v22; // x10
  ServantProfilePushMaster___c_c *v23; // x0
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v26; // x21
  struct ServantProfilePushMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  ServantProfilePushMaster___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x19
  struct ServantProfilePushMaster___c_StaticFields *v37; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v39; // x21
  struct ServantProfilePushMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4189BD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v6);
    sub_B2C35C(&Method_System_Func_ServantProfilePushEntity__int___ctor__, v7);
    sub_B2C35C(&System_Func_ServantProfilePushEntity__int__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v11);
    sub_B2C35C(&ServantProfilePushEntity_TypeInfo, v12);
    sub_B2C35C(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v13);
    sub_B2C35C(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v14);
    sub_B2C35C(&ServantProfilePushMaster___c_TypeInfo, v15);
    byte_4189BD5 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v19,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v22 = *(&ServantProfilePushEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   method);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v21,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
          }
        }
      }
      if ( ++v19 >= Count )
        goto LABEL_14;
    }
LABEL_31:
    sub_B2C434(list, method);
  }
LABEL_14:
  v23 = ServantProfilePushMaster___c_TypeInfo;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v23 = ServantProfilePushMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v26,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v27 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v27->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v27->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v35 = ServantProfilePushMaster___c_TypeInfo;
  v36 = v34;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v35 = ServantProfilePushMaster___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v37->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v37 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v39,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v40 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v40->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v40->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v36,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v47,
                                             (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189BD7 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189BD7 = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantProfilePushMaster__TryGetEntity(
        ServantProfilePushMaster_o *this,
        ServantProfilePushEntity_o **entity,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4189BD8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity);
    byte_4189BD8 = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4185400 & 1) == 0 )
  {
    sub_B2C35C(&ServantProfilePushMaster___c_TypeInfo, v1);
    byte_4185400 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantProfilePushMaster___c___ctor(ServantProfilePushMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_0(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return a->fields.idx;
}