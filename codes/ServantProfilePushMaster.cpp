void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B20E9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
    byte_42B20E9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    471,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *__fastcall ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  int32_t v6; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x23
  __int64 v9; // x10
  ServantProfilePushMaster___c_c *v10; // x0
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v13; // x21
  struct ServantProfilePushMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  ServantProfilePushMaster___c_c *v22; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  struct ServantProfilePushMaster___c_StaticFields *v24; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v26; // x21
  struct ServantProfilePushMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0

  if ( (byte_42B20E8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
    sub_B52984(&Method_System_Func_ServantProfilePushEntity__int___ctor__);
    sub_B52984(&System_Func_ServantProfilePushEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
    sub_B52984(&ServantProfilePushEntity_TypeInfo);
    sub_B52984(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__);
    sub_B52984(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__);
    sub_B52984(&ServantProfilePushMaster___c_TypeInfo);
    byte_42B20E8 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v6,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v9 = *(&ServantProfilePushEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[v9 - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   method);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v8,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
          }
        }
      }
      if ( ++v6 >= Count )
        goto LABEL_14;
    }
LABEL_31:
    sub_B52A5C(list, method);
  }
LABEL_14:
  v10 = ServantProfilePushMaster___c_TypeInfo;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v10 = ServantProfilePushMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v13,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v14 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v14->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1B666DC *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v22 = ServantProfilePushMaster___c_TypeInfo;
  v23 = v21;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v22 = ServantProfilePushMaster___c_TypeInfo;
  }
  v24 = v22->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v24->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v24 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v26,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v27 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v27->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v27->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1B6DDDC *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v34,
                                             (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B20EA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
    byte_42B20EA = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_42B20EB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
    byte_42B20EB = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD361 & 1) == 0 )
  {
    sub_B52984(&ServantProfilePushMaster___c_TypeInfo);
    byte_42AD361 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B52A5C(this, 0LL);
  return a->fields.idx;
}