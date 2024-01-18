void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185DA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__, method);
    byte_4185DA5 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    153,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserPresentHistoryMaster___c_c *v9; // x0
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct UserPresentHistoryMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_TOutput__o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v22; // x19

  if ( (byte_4185DA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__, method);
    sub_B2C35C(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__, v4);
    sub_B2C35C(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___, v5);
    sub_B2C35C(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, v6);
    sub_B2C35C(&UserPresentHistoryMaster___c_TypeInfo, v7);
    byte_4185DA6 = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v9 = UserPresentHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v9 = UserPresentHistoryMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v12,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_24E064C *)Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    v13 = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_20964A8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v20 )
    sub_B2C434(0LL, v21);
  v22 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v20;
  System_Collections_Generic_List_UserPresentHistoryEntity___Sort(
    (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v20,
    (const MethodInfo_2EF63C0 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v22;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4185DA7 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__, v3);
    byte_4185DA7 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B2C434(0LL, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    EntityList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v7 = v8;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v7);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41856C9 & 1) == 0 )
  {
    sub_B2C35C(&UserPresentHistoryMaster___c_TypeInfo, v1);
    byte_41856C9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41856CA & 1) == 0 )
  {
    sub_B2C35C(&UserPresentHistoryEntity_TypeInfo, entity);
    byte_41856CA = 1;
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