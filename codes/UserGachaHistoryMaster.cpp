void __fastcall UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E711F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E711F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    396,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserGachaHistoryMaster___c_c *v30; // x0
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v33; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_TOutput__o *v41; // x0
  __int64 v42; // x1
  UserGachaHistoryMaster___c_c *v43; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v44; // x19
  struct UserGachaHistoryMaster___c_StaticFields *v45; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_1; // x20
  Il2CppObject *v47; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_42E7120 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserGachaHistoryEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_UserGachaHistoryEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__, v14, v15, v16);
    sub_B5D5C4(
      &Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, v20, v21, v22);
    sub_B5D5C4(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, v23, v24, v25);
    sub_B5D5C4(&UserGachaHistoryMaster___c_TypeInfo, v26, v27, v28);
    byte_42E7120 = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v30 = UserGachaHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v30 = UserGachaHistoryMaster___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v33,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__);
    v34 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v34->__9__1_0 = (struct System_Converter_DataEntityBase__UserGachaHistoryEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_1E6698C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
  v43 = UserGachaHistoryMaster___c_TypeInfo;
  v44 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v43 = UserGachaHistoryMaster___c_TypeInfo;
  }
  v45 = v43->static_fields;
  _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v45->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v45 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserGachaHistoryEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_1,
      v47,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_UserGachaHistoryEntity___ctor__);
    v48 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v48->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v48->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v44 )
    sub_B5D69C(v41, v42);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v44,
    (System_Comparison_T__o *)_9__1_1,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v44;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E7121 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__, v5, v6, v7);
    byte_42E7121 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGachaHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B5D69C(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    EntityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v11 = v12;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v11);
}


void __fastcall UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E6FFE & 1) == 0 )
  {
    sub_B5D5C4(&UserGachaHistoryMaster___c_TypeInfo, v1, v2, v3);
    byte_42E6FFE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserGachaHistoryMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserGachaHistoryMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall UserGachaHistoryMaster___c___ctor(UserGachaHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserGachaHistoryEntity_o *__fastcall UserGachaHistoryMaster___c___GetEntityList_b__1_0(
        UserGachaHistoryMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E6FFF & 1) == 0 )
  {
    sub_B5D5C4(&UserGachaHistoryEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E6FFF = 1;
  }
  if ( !entity )
    return 0LL;
  v5 = *(&UserGachaHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserGachaHistoryEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] == UserGachaHistoryEntity_TypeInfo )
    return (UserGachaHistoryEntity_o *)entity;
  return 0LL;
}


int32_t __fastcall UserGachaHistoryMaster___c___GetEntityList_b__1_1(
        UserGachaHistoryMaster___c_o *this,
        UserGachaHistoryEntity_o *a,
        UserGachaHistoryEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.idx - b->fields.idx;
}