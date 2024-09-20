void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BECA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
    byte_4A5BECA = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    155,
    (const MethodInfo_311DAA0 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  UserPresentHistoryMaster___c_c *v3; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v12; // x19

  if ( (byte_4A5BECB & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
    sub_1B885B0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
    sub_1B885B0(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__);
    sub_1B885B0(&UserPresentHistoryMaster___c_TypeInfo);
    byte_4A5BECB = 1;
  }
  v3 = UserPresentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v3 = UserPresentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserPresentHistoryMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(
      _9__1_0,
      v6,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      0LL);
    static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                       list,
                                                       (System_Converter_T__TOutput__o *)_9__1_0,
                                                       (const MethodInfo_2F042F8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v10 )
    sub_1B8880C(0LL, v11);
  v12 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v10;
  System_Collections_Generic_List_object___Sort(
    v10,
    (const MethodInfo_34FF218 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v12;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5BECC & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
    byte_4A5BECC = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserPresentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    &v10,
    EntityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v9 = v10;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v9,
                                                                                 v5,
                                                                                 v6,
                                                                                 v7);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BECD & 1) == 0 )
  {
    sub_1B885B0(&UserPresentHistoryMaster___c_TypeInfo);
    byte_4A5BECD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserPresentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5BECE & 1) == 0 )
  {
    sub_1B885B0(&UserPresentHistoryEntity_TypeInfo);
    byte_4A5BECE = 1;
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