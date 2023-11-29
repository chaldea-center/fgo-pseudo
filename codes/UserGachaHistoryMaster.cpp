void __fastcall UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F96D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__, method);
    byte_40F96D4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    395,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserGachaHistoryMaster___c_c *v15; // x0
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v18; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_TOutput__o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  UserGachaHistoryMaster___c_c *v31; // x8
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v32; // x19
  struct UserGachaHistoryMaster___c_StaticFields *v33; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__1_1; // x20
  Il2CppObject *v35; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_40F96D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserGachaHistoryEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_UserGachaHistoryEntity__TypeInfo, v6);
    sub_B16FFC(&Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__, v7);
    sub_B16FFC(&System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__, v9);
    sub_B16FFC(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___, v10);
    sub_B16FFC(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, v11);
    sub_B16FFC(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, v12);
    sub_B16FFC(&UserGachaHistoryMaster___c_TypeInfo, v13);
    byte_40F96D5 = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v15 = UserGachaHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v15 = UserGachaHistoryMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                      System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
    System_Converter_string__string____ctor(
      _9__1_0,
      v18,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_DataEntityBase__UserGachaHistoryEntity___ctor__);
    v19 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v19->__9__1_0 = (struct System_Converter_DataEntityBase__UserGachaHistoryEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_19DE87C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
  v31 = UserGachaHistoryMaster___c_TypeInfo;
  v32 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v26;
  if ( (BYTE3(UserGachaHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v31 = UserGachaHistoryMaster___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)v33->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__1_1 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_UserGachaHistoryEntity__TypeInfo,
                                                                          v27,
                                                                          v28,
                                                                          v29,
                                                                          v30);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__1_1,
      v35,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_UserGachaHistoryEntity___ctor__);
    v36 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v36->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( !v32 )
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v32,
    (System_Comparison_T__o *)_9__1_1,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v32;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F96D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__, v3);
    byte_40F96D6 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserGachaHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v6);
}


void __fastcall UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7984 & 1) == 0 )
  {
    sub_B16FFC(&UserGachaHistoryMaster___c_TypeInfo, v1);
    byte_40F7984 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserGachaHistoryMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserGachaHistoryMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7985 & 1) == 0 )
  {
    sub_B16FFC(&UserGachaHistoryEntity_TypeInfo, entity);
    byte_40F7985 = 1;
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
    sub_B170D4();
  return a->fields.idx - b->fields.idx;
}