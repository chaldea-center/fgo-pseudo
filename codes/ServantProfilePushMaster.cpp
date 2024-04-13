void __fastcall ServantProfilePushMaster___ctor(ServantProfilePushMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA48 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EAA48 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    472,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string___ctor__);
}


ServantProfilePushEntity_array *__fastcall ServantProfilePushMaster__GetAvaiableEntities(
        ServantProfilePushMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  int32_t v47; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x23
  __int64 v50; // x10
  ServantProfilePushMaster___c_c *v51; // x0
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x19
  Il2CppObject *v54; // x21
  struct ServantProfilePushMaster___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v62; // x0
  ServantProfilePushMaster___c_c *v63; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v64; // x19
  struct ServantProfilePushMaster___c_StaticFields *v65; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_1; // x20
  Il2CppObject *v67; // x21
  struct ServantProfilePushMaster___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0

  if ( (byte_42EAA47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_ServantProfilePushEntity__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_ServantProfilePushEntity__int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&ServantProfilePushEntity_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__, v35, v36, v37);
    sub_B5D5C4(&Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__, v38, v39, v40);
    sub_B5D5C4(&ServantProfilePushMaster___c_TypeInfo, v41, v42, v43);
    byte_42EAA47 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_31;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantProfilePushEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantProfilePushEntity___ctor__);
  if ( Count >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v47,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v49 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v50 = *(&ServantProfilePushEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v50
          && (ServantProfilePushEntity_c *)Item->klass->_2.typeHierarchy[v50 - 1] == ServantProfilePushEntity_TypeInfo )
        {
          list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)ServantProfilePushEntity__TimeCheck(
                                                                                                   (ServantProfilePushEntity_o *)Item,
                                                                                                   method);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v46 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v46,
              v49,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantProfilePushEntity__Add__);
          }
        }
      }
      if ( ++v47 >= Count )
        goto LABEL_14;
    }
LABEL_31:
    sub_B5D69C(list, method);
  }
LABEL_14:
  v51 = ServantProfilePushMaster___c_TypeInfo;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v51 = ServantProfilePushMaster___c_TypeInfo;
  }
  static_fields = v51->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v54,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v55 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v55->__9__0_0 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v55->__9__0_0,
      (System_Int32_array **)_9__0_0,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  v62 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v46,
          (System_Func_TSource__TKey__o *)_9__0_0,
          (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_ServantProfilePushEntity__int___);
  v63 = ServantProfilePushMaster___c_TypeInfo;
  v64 = v62;
  if ( (BYTE3(ServantProfilePushMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantProfilePushMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantProfilePushMaster___c_TypeInfo);
    v63 = ServantProfilePushMaster___c_TypeInfo;
  }
  v65 = v63->static_fields;
  _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v65->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v65 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    }
    v67 = (Il2CppObject *)v65->__9;
    _9__0_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ServantProfilePushEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_1,
      v67,
      Method_ServantProfilePushMaster___c__GetAvaiableEntities_b__0_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ServantProfilePushEntity__int___ctor__);
    v68 = ServantProfilePushMaster___c_TypeInfo->static_fields;
    v68->__9__0_1 = (struct System_Func_ServantProfilePushEntity__int__o *)_9__0_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v68->__9__0_1,
      (System_Int32_array **)_9__0_1,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
  }
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                               v64,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_1CB702C *)Method_System_Linq_Enumerable_ThenBy_ServantProfilePushEntity__int___);
  return (ServantProfilePushEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                             v75,
                                             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ServantProfilePushEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantProfilePushEntity_o *__fastcall ServantProfilePushMaster__GetEntity(
        ServantProfilePushMaster_o *this,
        int32_t svtId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EAA49 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__,
      svtId,
      idx,
      method);
    byte_42EAA49 = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&idx);
  return (ServantProfilePushEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                         (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                         PK,
                                         (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__GetEntity__);
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

  if ( (byte_42EAA4A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&idx);
    byte_42EAA4A = 1;
  }
  PK = ServantProfilePushEntity__CreatePK(svtId, idx, *(const MethodInfo **)&svtId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantProfilePushMaster__ServantProfilePushEntity__string__TryGetEntity__);
}


void __fastcall ServantProfilePushMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantProfilePushMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D79 & 1) == 0 )
  {
    sub_B5D5C4(&ServantProfilePushMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D79 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantProfilePushMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantProfilePushMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantProfilePushMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return a->fields.priority;
}


int32_t __fastcall ServantProfilePushMaster___c___GetAvaiableEntities_b__0_1(
        ServantProfilePushMaster___c_o *this,
        ServantProfilePushEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B5D69C(this, 0LL);
  return a->fields.idx;
}