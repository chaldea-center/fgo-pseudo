void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF86A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__, method);
    byte_49FF86A = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    155,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserPresentHistoryMaster___c_c *v7; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v10; // x21
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v16; // x19

  if ( (byte_49FF86B & 1) == 0 )
  {
    sub_1B64A00(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__, v3);
    sub_1B64A00(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___, v4);
    sub_1B64A00(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, v5);
    sub_1B64A00(&UserPresentHistoryMaster___c_TypeInfo, v6);
    byte_49FF86B = 1;
  }
  v7 = UserPresentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v7 = UserPresentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v7->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserPresentHistoryMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1B64C4C(System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(
      _9__1_0,
      v10,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      0LL);
    static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v12, v13);
  }
  v14 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                       list,
                                                       (System_Converter_T__TOutput__o *)_9__1_0,
                                                       (const MethodInfo_2EBF030 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v14 )
    sub_1B64C5C(0LL, v15);
  v16 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v14;
  System_Collections_Generic_List_object___Sort(
    v14,
    (const MethodInfo_34B1A4C *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v16;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FF86C & 1) == 0 )
  {
    sub_1B64A00(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__, v3);
    byte_49FF86C = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserPresentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1B64C5C(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    &v11,
    EntityList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v10 = v11;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v10,
                                                                                 v6,
                                                                                 v7,
                                                                                 v8);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF86D & 1) == 0 )
  {
    sub_1B64A00(&UserPresentHistoryMaster___c_TypeInfo, v1);
    byte_49FF86D = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  __int64 methodPtr_low; // x10

  if ( (byte_49FF86E & 1) == 0 )
  {
    sub_1B64A00(&UserPresentHistoryEntity_TypeInfo, entity);
    byte_49FF86E = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(UserPresentHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserPresentHistoryEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == UserPresentHistoryEntity_TypeInfo )
    return (UserPresentHistoryEntity_o *)entity;
  return 0LL;
}