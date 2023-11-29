void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB92 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method);
    byte_40FBB92 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    470,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  const MethodInfo *v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x23
  __int64 v31; // x10
  ServantProfilePushMaster___c_c *v32; // x0
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v35; // x21
  struct ServantProfilePushMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  ServantProfilePushMaster___c_c *v48; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x19
  struct ServantProfilePushMaster___c_StaticFields *v50; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v52; // x21
  struct ServantProfilePushMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0

  if ( (byte_40FBB91 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v6);
    sub_B16FFC(&Method_System_Func_ServantProfilePushEntity__int___ctor__, v7);
    sub_B16FFC(&System_Func_ServantProfilePushEntity__int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v11);
    sub_B16FFC(&ServantProfilePushEntity_TypeInfo, v12);
    sub_B16FFC(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v13);
    sub_B16FFC(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v14);
    sub_B16FFC(&ServantProfilePushMaster___c_TypeInfo, v15);
    byte_40FBB91 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v28 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v28,
               v27,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v31 = *(&ServantProfilePushEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == ServantProfilePushEntity_TypeInfo
          && ServantProfilePushEntity__TimeCheck((ServantProfilePushEntity_o *)Item, v23) )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            v30,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_14:
  v32 = ServantProfilePushMaster___c_TypeInfo;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v32 = ServantProfilePushMaster___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_ServantProfilePushEntity__int__TypeInfo,
                                                                                v23,
                                                                                v24,
                                                                                v25,
                                                                                v26);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v35,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v36 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v36->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v48 = ServantProfilePushMaster___c_TypeInfo;
  v49 = v43;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v48 = ServantProfilePushMaster___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v50->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v50 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_ServantProfilePushEntity__int__TypeInfo,
                                                                                v44,
                                                                                v45,
                                                                                v46,
                                                                                v47);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v52,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v53 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v53->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v53->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v49,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v60,
                                             (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FBB93 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FBB93 = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_40FBB94 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity);
    byte_40FBB94 = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7644 & 1) == 0 )
  {
    sub_B16FFC(&ServantProfilePushMaster___c_TypeInfo, v1);
    byte_40F7644 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantProfilePushMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantProfilePushMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return a->fields.idx;
}