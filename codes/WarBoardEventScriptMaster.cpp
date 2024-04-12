void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC813 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
    byte_42AC813 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    465,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AC814 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
    byte_42AC814 = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
        const MethodInfo *method)
{
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarBoardEventScriptMaster___c_c *v4; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_42AC812 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
    sub_B52984(&Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__);
    sub_B52984(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    sub_B52984(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__);
    sub_B52984(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_42AC812 = 1;
  }
  list = this->fields.list;
  v4 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v4 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v7,
      Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__);
    v8 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_B52920(&v8->__9__1_0);
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                              (System_Func_TSource__TResult__o *)_9__1_0,
                                                              (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v9,
                                                                           (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x10
  WarBoardEventScriptMaster___c_c *v10; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42AC811 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
    sub_B52984(&Method_System_Func_WarBoardEventScriptEntity__int___ctor__);
    sub_B52984(&System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
    sub_B52984(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__);
    sub_B52984(&WarBoardEventScriptMaster___c_TypeInfo);
    sub_B52984(&WarBoardEventScriptEntity_TypeInfo);
    byte_42AC811 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B52A5C(list, v6);
  v8 = 0;
  while ( v8 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                 list,
                 (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      v9 = *(&WarBoardEventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
        && (WarBoardEventScriptEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == WarBoardEventScriptEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_14;
  }
  v10 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v10 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v13,
      Method_WarBoardEventScriptMaster___c__GetList_b__0_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardEventScriptEntity__int___ctor__);
    v14 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v14->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_B52920(&v14->__9__0_0);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v15,
                                              (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_42AC815 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
    byte_42AC815 = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE8FD & 1) == 0 )
  {
    sub_B52984(&WarBoardEventScriptMaster___c_TypeInfo);
    byte_42AE8FD = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AE8FE & 1) == 0 )
  {
    sub_B52984(&WarBoardEventScriptEntity_TypeInfo);
    byte_42AE8FE = 1;
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
    sub_B52A5C(this, 0LL);
  return a->fields.idx;
}