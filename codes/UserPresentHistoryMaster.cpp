void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE0F1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
    byte_42AE0F1 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    154,
    (const MethodInfo_23E2464 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
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

  if ( (byte_42AE0F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    sub_B52984(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
    sub_B52984(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
    sub_B52984(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__);
    sub_B52984(&UserPresentHistoryMaster___c_TypeInfo);
    byte_42AE0F2 = 1;
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
    _9__1_0 = (System_Converter_string__string__o *)sub_B52A54(System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v7,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_23DE854 *)Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    v8 = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_B52920(
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
          (const MethodInfo_1F7186C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v15 )
    sub_B52A5C(0LL, v16);
  v17 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v15;
  System_Collections_Generic_List_UserPresentHistoryEntity___Sort(
    (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v15,
    (const MethodInfo_2FF3564 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v17;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *EntityList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42AE0F3 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
    byte_42AE0F3 = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v6);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE5A8 & 1) == 0 )
  {
    sub_B52984(&UserPresentHistoryMaster___c_TypeInfo);
    byte_42AE5A8 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AE5A9 & 1) == 0 )
  {
    sub_B52984(&UserPresentHistoryEntity_TypeInfo);
    byte_42AE5A9 = 1;
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