void UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57C85 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
    byte_4C57C85 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    159,
    (const MethodInfo_33B3190 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  UserPresentHistoryMaster___c_c *v3; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v12; // x19

  if ( (byte_4C57C86 & 1) == 0 )
  {
    sub_1C3E564(&System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long__getEntityList__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
    sub_1C3E564(&Method_ObservableCollectionExtensions_ConvertAll_UserPresentHistoryEntity__UserPresentHistoryEntity___);
    sub_1C3E564(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__);
    sub_1C3E564(&UserPresentHistoryMaster___c_TypeInfo);
    byte_4C57C86 = 1;
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
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C3E7B0(System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v6, Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, 0);
    static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__o *)_9__1_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v8, v9);
  }
  v10 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                       list,
                                                       (System_Converter_T__TOutput__o *)_9__1_0,
                                                       (const MethodInfo_3186950 *)Method_ObservableCollectionExtensions_ConvertAll_UserPresentHistoryEntity__UserPresentHistoryEntity___);
  if ( !v10 )
    sub_1C3E7C0(0, v11);
  v12 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v10;
  System_Collections_Generic_List_object___Sort(
    v10,
    (const MethodInfo_37B6E44 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v12;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C57C87 & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
    byte_4C57C87 = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserPresentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1C3E7C0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    &v13,
    EntityList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v12 = v13;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v12,
                                                                                 v5,
                                                                                 v6,
                                                                                 v7,
                                                                                 v8,
                                                                                 v9,
                                                                                 v10);
}


void UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C57C88 & 1) == 0 )
  {
    sub_1C3E564(&UserPresentHistoryMaster___c_TypeInfo);
    byte_4C57C88 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserPresentHistoryMaster___c___ctor(UserPresentHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserPresentHistoryEntity_o *UserPresentHistoryMaster___c___GetEntityList_b__1_0(
        UserPresentHistoryMaster___c_o *this,
        UserPresentHistoryEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}