void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A58 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6A58 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    154,
    (const MethodInfo_23FAF9C *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  UserPresentHistoryMaster___c_c *v21; // x0
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x20
  Il2CppObject *v24; // x21
  struct UserPresentHistoryMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_TOutput__o *v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v34; // x19

  if ( (byte_42E6A59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__, v8, v9, v10);
    sub_B5D5C4(
      &Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, v14, v15, v16);
    sub_B5D5C4(&UserPresentHistoryMaster___c_TypeInfo, v17, v18, v19);
    byte_42E6A59 = 1;
  }
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v21 = UserPresentHistoryMaster___c_TypeInfo;
  if ( (BYTE3(UserPresentHistoryMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v21 = UserPresentHistoryMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v24,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_DataEntityBase__UserPresentHistoryEntity___ctor__);
    v25 = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    v25->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_1E6698C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v32 )
    sub_B5D69C(0LL, v33);
  v34 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v32;
  System_Collections_Generic_List_UserPresentHistoryEntity___Sort(
    (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v32,
    (const MethodInfo_3058F20 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v34;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
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

  if ( (byte_42E6A5A & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__, v5, v6, v7);
    byte_42E6A5A = 1;
  }
  EntityList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserPresentHistoryMaster__GetEntityList(
                                                                                                this,
                                                                                                method);
  if ( !EntityList )
    sub_B5D69C(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    EntityList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v11 = v12;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v11);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_42E701B & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentHistoryMaster___c_TypeInfo, v1, v2, v3);
    byte_42E701B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E701C & 1) == 0 )
  {
    sub_B5D5C4(&UserPresentHistoryEntity_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E701C = 1;
  }
  if ( !entity )
    return 0LL;
  v5 = *(&UserPresentHistoryEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&entity->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (UserPresentHistoryEntity_c *)entity->klass->_2.typeHierarchy[v5 - 1] == UserPresentHistoryEntity_TypeInfo )
    return (UserPresentHistoryEntity_o *)entity;
  return 0LL;
}