void __fastcall UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD0F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__, method);
    byte_49FD0F7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    397,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserGachaHistoryMaster___c_c *v10; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v13; // x21
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_TOutput__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UserGachaHistoryMaster___c_c *v20; // x8
  System_Collections_Generic_List_object__o *v21; // x19
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v23; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49FD0F8 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserGachaHistoryEntity__TypeInfo, method);
    sub_1B640C8(&System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__, v5);
    sub_1B640C8(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___, v6);
    sub_1B640C8(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, v7);
    sub_1B640C8(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, v8);
    sub_1B640C8(&UserGachaHistoryMaster___c_TypeInfo, v9);
    byte_49FD0F8 = 1;
  }
  v10 = UserGachaHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v10 = UserGachaHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v10->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = UserGachaHistoryMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(
                                                       System_Converter_DataEntityBase__UserGachaHistoryEntity__TypeInfo,
                                                       method,
                                                       v2);
    System_Converter_object__object____ctor(
      _9__1_0,
      v13,
      Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__,
      0LL);
    static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__UserGachaHistoryEntity__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16);
  }
  v17 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_2EBC73C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserGachaHistoryEntity___);
  v20 = UserGachaHistoryMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_List_object__o *)v17;
  if ( !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v20 = UserGachaHistoryMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Comparison_T__o *)v20->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = UserGachaHistoryMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserGachaHistoryEntity__TypeInfo, v18, v19);
    System_Comparison_object____ctor(_9__1_1, v23, Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, 0LL);
    v24 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v24->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->__9__1_1, (int32_t)_9__1_1, v25, v26);
  }
  if ( !v21 )
    sub_1B64324(v17);
  System_Collections_Generic_List_object___Sort_55243320(
    v21,
    _9__1_1,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v21;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *__fastcall UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *EntityList; // x0
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FD0F9 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__, v3);
    byte_49FD0F9 = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserGachaHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v6);
}


void __fastcall UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD0FA & 1) == 0 )
  {
    sub_1B640C8(&UserGachaHistoryMaster___c_TypeInfo, v1);
    byte_49FD0FA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserGachaHistoryMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserGachaHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserGachaHistoryMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserGachaHistoryMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  __int64 methodPtr_low; // x10

  if ( (byte_49FD0FB & 1) == 0 )
  {
    sub_1B640C8(&UserGachaHistoryEntity_TypeInfo, entity);
    byte_49FD0FB = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(UserGachaHistoryEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserGachaHistoryEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == UserGachaHistoryEntity_TypeInfo )
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
    sub_1B64324(this);
  return a->fields.idx - b->fields.idx;
}