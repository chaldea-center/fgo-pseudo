void UserGachaHistoryMaster___ctor(UserGachaHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3886D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
    byte_4C3886D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    403,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string___ctor__);
}


System_Collections_Generic_List_UserGachaHistoryEntity__o *UserGachaHistoryMaster__GetEntityList(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  UserGachaHistoryMaster___c_c *v3; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct UserGachaHistoryMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_TOutput__o *v10; // x0
  UserGachaHistoryMaster___c_c *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x19
  System_Comparison_T__o *_9__1_1; // x20
  Il2CppObject *v14; // x21
  struct UserGachaHistoryMaster___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3886E & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_UserGachaHistoryEntity__TypeInfo);
    sub_1C32C20(&System_Converter_UserGachaHistoryEntity__UserGachaHistoryEntity__TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserGachaHistoryMaster__UserGachaHistoryEntity__string__getEntityList__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
    sub_1C32C20(&Method_ObservableCollectionExtensions_ConvertAll_UserGachaHistoryEntity__UserGachaHistoryEntity___);
    sub_1C32C20(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__);
    sub_1C32C20(&Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__);
    sub_1C32C20(&UserGachaHistoryMaster___c_TypeInfo);
    byte_4C3886E = 1;
  }
  v3 = UserGachaHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v3 = UserGachaHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v3->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserGachaHistoryMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C32E6C(System_Converter_UserGachaHistoryEntity__UserGachaHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v6, Method_UserGachaHistoryMaster___c__GetEntityList_b__1_0__, 0);
    static_fields = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_UserGachaHistoryEntity__UserGachaHistoryEntity__o *)_9__1_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_316A1F4 *)Method_ObservableCollectionExtensions_ConvertAll_UserGachaHistoryEntity__UserGachaHistoryEntity___);
  v11 = UserGachaHistoryMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_List_object__o *)v10;
  if ( !UserGachaHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserGachaHistoryMaster___c_TypeInfo);
    v11 = UserGachaHistoryMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Comparison_T__o *)v11->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = UserGachaHistoryMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__1_1 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UserGachaHistoryEntity__TypeInfo);
    System_Comparison_object____ctor(_9__1_1, v14, Method_UserGachaHistoryMaster___c__GetEntityList_b__1_1__, 0);
    v15 = UserGachaHistoryMaster___c_TypeInfo->static_fields;
    v15->__9__1_1 = (struct System_Comparison_UserGachaHistoryEntity__o *)_9__1_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v15->__9__1_1, (int32_t)_9__1_1, v16, v17);
  }
  if ( !v12 )
    sub_1C32E7C(v10);
  System_Collections_Generic_List_object___Sort_58303104(
    v12,
    _9__1_1,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__Sort__);
  return (System_Collections_Generic_List_UserGachaHistoryEntity__o *)v12;
}


System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *UserGachaHistoryMaster__GetEnumerator(
        UserGachaHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3886F & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
    byte_4C3886F = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserGachaHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    &v12,
    EntityList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserGachaHistoryEntity__GetEnumerator__);
  v11 = v12;
  return (System_Collections_Generic_IEnumerator_UserGachaHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                               System_Collections_Generic_List_Enumerator_UserGachaHistoryEntity__TypeInfo,
                                                                               &v11,
                                                                               v4,
                                                                               v5,
                                                                               v6,
                                                                               v7,
                                                                               v8,
                                                                               v9);
}


void UserGachaHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38870 & 1) == 0 )
  {
    sub_1C32C20(&UserGachaHistoryMaster___c_TypeInfo);
    byte_4C38870 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UserGachaHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserGachaHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserGachaHistoryMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UserGachaHistoryMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserGachaHistoryMaster___c___ctor(UserGachaHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserGachaHistoryEntity_o *UserGachaHistoryMaster___c___GetEntityList_b__1_0(
        UserGachaHistoryMaster___c_o *this,
        UserGachaHistoryEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


int32_t UserGachaHistoryMaster___c___GetEntityList_b__1_1(
        UserGachaHistoryMaster___c_o *this,
        UserGachaHistoryEntity_o *a,
        UserGachaHistoryEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  return a->fields.idx - b->fields.idx;
}