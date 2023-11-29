void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F808E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__, method);
    byte_40F808E = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    153,
    (const MethodInfo_266F514 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserPresentHistoryMaster___c_c *v12; // x0
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct UserPresentHistoryMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_List_TOutput__o *v23; // x0
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v24; // x19

  if ( (byte_40F808F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__, method);
    sub_B16FFC(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__, v7);
    sub_B16FFC(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___, v8);
    sub_B16FFC(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, v9);
    sub_B16FFC(&UserPresentHistoryMaster___c_TypeInfo, v10);
    byte_40F808F = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v12 = UserPresentHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v12 = UserPresentHistoryMaster___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                      System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
    System_Converter_string__string____ctor(
      _9__1_0,
      v15,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    v16 = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    v16->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_B16F98(
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
          (const MethodInfo_19DE87C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v23 )
    sub_B170D4();
  v24 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v23;
  System_Collections_Generic_List_UserPresentHistoryEntity___Sort(
    (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v23,
    (const MethodInfo_2F27C38 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v24;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F8090 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__, v3);
    byte_40F8090 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v6);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F79A1 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentHistoryMaster___c_TypeInfo, v1);
    byte_40F79A1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(UserPresentHistoryMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall UserPresentHistoryMaster___c___ctor(UserPresentHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserPresentHistoryEntity_o *__fastcall UserPresentHistoryMaster___c___GetEntityList_b__1_0(
        UserPresentHistoryMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x10

  if ( (byte_40F79A2 & 1) == 0 )
  {
    sub_B16FFC(&UserPresentHistoryEntity_TypeInfo, entity);
    byte_40F79A2 = 1;
  }
  if ( !entity )
    return 0LL;
  v4 = *(&UserPresentHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (UserPresentHistoryEntity_c *)entity->klass->_2.typeHierarchy[v4 - 1] == UserPresentHistoryEntity_TypeInfo )
    return (UserPresentHistoryEntity_o *)entity;
  return 0LL;
}