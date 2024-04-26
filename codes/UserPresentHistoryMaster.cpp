void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434FCF2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
    byte_434FCF2 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    154,
    (const MethodInfo_21C05CC *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserPresentHistoryMaster___c_c *v4; // x0
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct UserPresentHistoryMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_TOutput__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v17; // x19

  if ( (byte_434FCF3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    sub_B70694(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
    sub_B70694(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
    sub_B70694(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__);
    sub_B70694(&UserPresentHistoryMaster___c_TypeInfo);
    byte_434FCF3 = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v4 = UserPresentHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v4 = UserPresentHistoryMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B70764(System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v7,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_21BC9BC *)Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    v8 = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
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
          (const MethodInfo_1D58E18 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v15 )
    sub_B7076C(0LL, v16);
  v17 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v15;
  System_Collections_Generic_List_UserPresentHistoryEntity___Sort(
    (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v15,
    (const MethodInfo_30275E8 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v17;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_434FCF4 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
    byte_434FCF4 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    EntityList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v7 = v8;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v7,
                                                                                 v5);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F329 & 1) == 0 )
  {
    sub_B70694(&UserPresentHistoryMaster___c_TypeInfo);
    byte_434F329 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v1;
  sub_B70630(static_fields);
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

  if ( (byte_434F32A & 1) == 0 )
  {
    sub_B70694(&UserPresentHistoryEntity_TypeInfo);
    byte_434F32A = 1;
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