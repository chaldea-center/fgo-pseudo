void __fastcall UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43506E5 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
    byte_43506E5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    396,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserGachaHistoryMaster___c_c *v4; // x0
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_TOutput__o *v15; // x0
  __int64 v16; // x1
  UserGachaHistoryMaster___c_c *v17; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v18; // x19
  struct UserGachaHistoryMaster___c_StaticFields *v19; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_1; // x20
  Il2CppObject *v21; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_43506E6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_UserGachaHistoryEntity___ctor__);
    sub_B70694(&System_Comparison_UserGachaHistoryEntity__TypeInfo);
    sub_B70694(&Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__);
    sub_B70694(&System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
    sub_B70694(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
    sub_B70694(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__);
    sub_B70694(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__);
    sub_B70694(&UserGachaHistoryMaster___c_TypeInfo);
    byte_43506E6 = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v4 = UserGachaHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v4 = UserGachaHistoryMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B70764(System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v7,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_21BC9BC *)Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__);
    v8 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Converter_DataEntityBase__UserGachaHistoryEntity__o *)_9__1_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_1D58E18 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
  v17 = UserGachaHistoryMaster___c_TypeInfo;
  v18 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v17 = UserGachaHistoryMaster___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v19->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v19 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_UserGachaHistoryEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_1,
      v21,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_UserGachaHistoryEntity___ctor__);
    v22 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v22->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v22->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  if ( !v18 )
    sub_B7076C(v15, v16);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v18,
    (System_Comparison_T__o *)_9__1_1,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v18;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_43506E7 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
    byte_43506E7 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGachaHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    EntityList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v7 = v8;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v7,
                                                                               v5);
}


void __fastcall UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F30C & 1) == 0 )
  {
    sub_B70694(&UserGachaHistoryMaster___c_TypeInfo);
    byte_434F30C = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(UserGachaHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserGachaHistoryMaster___c_o *)v1;
  sub_B70630(static_fields);
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
  __int64 v4; // x10

  if ( (byte_434F30D & 1) == 0 )
  {
    sub_B70694(&UserGachaHistoryEntity_TypeInfo);
    byte_434F30D = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&UserGachaHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserGachaHistoryEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == UserGachaHistoryEntity_TypeInfo )
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
    sub_B7076C(this, a);
  return a->fields.idx - b->fields.idx;
}