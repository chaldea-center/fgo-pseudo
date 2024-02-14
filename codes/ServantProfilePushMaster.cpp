void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216A28 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__, method);
    byte_4216A28 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    470,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
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
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  int32_t v23; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x23
  __int64 v26; // x10
  ServantProfilePushMaster___c_c *v27; // x0
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v30; // x21
  struct ServantProfilePushMaster___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  ServantProfilePushMaster___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  struct ServantProfilePushMaster___c_StaticFields *v43; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v45; // x21
  struct ServantProfilePushMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0

  if ( (byte_4216A27 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v6);
    sub_B0D8A4(&Method_System_Func_ServantProfilePushEntity__int___ctor__, v7);
    sub_B0D8A4(&System_Func_ServantProfilePushEntity__int__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v11);
    sub_B0D8A4(&ServantProfilePushEntity_TypeInfo, v12);
    sub_B0D8A4(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v13);
    sub_B0D8A4(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v14);
    sub_B0D8A4(&ServantProfilePushMaster___c_TypeInfo, v15);
    byte_4216A27 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v23,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v26 = *(&ServantProfilePushEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   v21);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v20 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v20,
              v25,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
          }
        }
      }
      if ( ++v23 >= Count )
        goto LABEL_14;
    }
LABEL_31:
    sub_B0D97C(list);
  }
LABEL_14:
  v27 = ServantProfilePushMaster___c_TypeInfo;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v27 = ServantProfilePushMaster___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_ServantProfilePushEntity__int__TypeInfo,
                                                                                v21,
                                                                                v22);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v30,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      (const MethodInfo_2619564 *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v31 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v31->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v31->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v41 = ServantProfilePushMaster___c_TypeInfo;
  v42 = v38;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v41 = ServantProfilePushMaster___c_TypeInfo;
  }
  v43 = v41->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v43->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v43 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_ServantProfilePushEntity__int__TypeInfo,
                                                                                v39,
                                                                                v40);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v45,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      (const MethodInfo_2619564 *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v46 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v46->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v46->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v53,
                                             (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4216A29 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4216A29 = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                         (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_266A024 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_4216A2A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      entity);
    byte_4216A2A = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212247 & 1) == 0 )
  {
    sub_B0D8A4(&ServantProfilePushMaster___c_TypeInfo, v1);
    byte_4212247 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantProfilePushMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B0D97C(this);
  return a->fields.idx;
}