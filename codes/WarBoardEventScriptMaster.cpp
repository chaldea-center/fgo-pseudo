void __fastcall WarBoardEventScriptMaster___ctor(WarBoardEventScriptMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E522D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E522D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    466,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventScriptEntity_o *__fastcall WarBoardEventScriptMaster__GetEntity(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E522E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__,
      id,
      idx,
      method);
    byte_42E522E = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (WarBoardEventScriptEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardEventScriptEntity__o *__fastcall WarBoardEventScriptMaster__GetEntityList(
        WarBoardEventScriptMaster_o *this,
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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  WarBoardEventScriptMaster___c_c *v21; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v24; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_42E522C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__, v14, v15, v16);
    sub_B5D5C4(&WarBoardEventScriptMaster___c_TypeInfo, v17, v18, v19);
    byte_42E522C = 1;
  }
  list = this->fields.list;
  v21 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v21 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_DataEntityBase__WarBoardEventScriptEntity__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v24,
      Method_WarBoardEventScriptMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_DataEntityBase__WarBoardEventScriptEntity___ctor__);
    v25 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v25->__9__1_0 = (struct System_Func_DataEntityBase__WarBoardEventScriptEntity__o *)_9__1_0;
    sub_B5D560(&v25->__9__1_0);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_DataEntityBase__WarBoardEventScriptEntity___);
  return (System_Collections_Generic_List_WarBoardEventScriptEntity__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                           v26,
                                                                           (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_WarBoardEventScriptEntity___);
}


WarBoardEventScriptEntity_array *__fastcall WarBoardEventScriptMaster__GetList(
        WarBoardEventScriptMaster_o *this,
        int32_t id,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v40; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v42; // w22
  __int64 v43; // x10
  WarBoardEventScriptMaster___c_c *v44; // x0
  struct WarBoardEventScriptMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__0_0; // x20
  Il2CppObject *v47; // x21
  struct WarBoardEventScriptMaster___c_StaticFields *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0

  if ( (byte_42E522B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_WarBoardEventScriptEntity__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_WarBoardEventScriptEntity__int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_WarBoardEventScriptMaster___c__GetList_b__0_0__, v30, v31, v32);
    sub_B5D5C4(&WarBoardEventScriptMaster___c_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&WarBoardEventScriptEntity_TypeInfo, v36, v37, v38);
    byte_42E522B = 1;
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardEventScriptEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, v40);
  v42 = 0;
  while ( v42 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v42,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v40 = list;
      v43 = *(&WarBoardEventScriptEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v43
        && (WarBoardEventScriptEntity_c *)list->klass->_2.typeHierarchy[v43 - 1] == WarBoardEventScriptEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v39 )
          goto LABEL_14;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardEventScriptEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v42;
    if ( !list )
      goto LABEL_14;
  }
  v44 = WarBoardEventScriptMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardEventScriptMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardEventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardEventScriptMaster___c_TypeInfo);
    v44 = WarBoardEventScriptMaster___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardEventScriptEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__0_0,
      v47,
      Method_WarBoardEventScriptMaster___c__GetList_b__0_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardEventScriptEntity__int___ctor__);
    v48 = WarBoardEventScriptMaster___c_TypeInfo->static_fields;
    v48->__9__0_0 = (struct System_Func_WarBoardEventScriptEntity__int__o *)_9__0_0;
    sub_B5D560(&v48->__9__0_0);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_WarBoardEventScriptEntity__int___);
  return (WarBoardEventScriptEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                              v49,
                                              (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardEventScriptEntity___);
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

  if ( (byte_42E522F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&idx);
    byte_42E522F = 1;
  }
  PK = WarBoardEventScriptEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardEventScriptMaster__WarBoardEventScriptEntity__string__TryGetEntity__);
}


void __fastcall WarBoardEventScriptMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E7669 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardEventScriptMaster___c_TypeInfo, v1, v2, v3);
    byte_42E7669 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardEventScriptMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardEventScriptMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E766A & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardEventScriptEntity_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42E766A = 1;
  }
  if ( !n )
    return 0LL;
  v5 = *(&WarBoardEventScriptEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&n->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (WarBoardEventScriptEntity_c *)n->klass->_2.typeHierarchy[v5 - 1] == WarBoardEventScriptEntity_TypeInfo )
    return (WarBoardEventScriptEntity_o *)n;
  return 0LL;
}


int32_t __fastcall WarBoardEventScriptMaster___c___GetList_b__0_0(
        WarBoardEventScriptMaster___c_o *this,
        WarBoardEventScriptEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B5D69C(this, 0LL);
  return a->fields.idx;
}