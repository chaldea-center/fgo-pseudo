void __fastcall UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186FCA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__, method);
    byte_4186FCA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    395,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserGachaHistoryMaster___c_c *v12; // x0
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_TOutput__o *v23; // x0
  __int64 v24; // x1
  UserGachaHistoryMaster___c_c *v25; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v26; // x19
  struct UserGachaHistoryMaster___c_StaticFields *v27; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_1; // x20
  Il2CppObject *v29; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4186FCB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserGachaHistoryEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_UserGachaHistoryEntity__TypeInfo, v3);
    sub_B2C35C(&Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__, v4);
    sub_B2C35C(&System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__, v6);
    sub_B2C35C(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___, v7);
    sub_B2C35C(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, v8);
    sub_B2C35C(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, v9);
    sub_B2C35C(&UserGachaHistoryMaster___c_TypeInfo, v10);
    byte_4186FCB = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v12 = UserGachaHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v12 = UserGachaHistoryMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v15,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_24E064C *)Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__);
    v16 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v16->__9__1_0 = (struct System_Converter_DataEntityBase__UserGachaHistoryEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_20964A8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
  v25 = UserGachaHistoryMaster___c_TypeInfo;
  v26 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v23;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v25 = UserGachaHistoryMaster___c_TypeInfo;
  }
  v27 = v25->static_fields;
  _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v27->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v27 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserGachaHistoryEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_1,
      v29,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserGachaHistoryEntity___ctor__);
    v30 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v30->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v30->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  if ( !v26 )
    sub_B2C434(v23, v24);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v26,
    (System_Comparison_T__o *)_9__1_1,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v26;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186FCC & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__, v3);
    byte_4186FCC = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGachaHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B2C434(0LL, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    EntityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v7 = v8;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v7);
}


void __fastcall UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856AC & 1) == 0 )
  {
    sub_B2C35C(&UserGachaHistoryMaster___c_TypeInfo, v1);
    byte_41856AC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserGachaHistoryMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserGachaHistoryMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856AD & 1) == 0 )
  {
    sub_B2C35C(&UserGachaHistoryEntity_TypeInfo, entity);
    byte_41856AD = 1;
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
    sub_B2C434(this, a);
  return a->fields.idx - b->fields.idx;
}