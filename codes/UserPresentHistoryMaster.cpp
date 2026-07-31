void UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593961B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
    byte_593961B = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    161,
    (const MethodInfo_3EDD598 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  UserPresentHistoryMaster___c_c *v3; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v7; // x21
  struct UserPresentHistoryMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v17; // x19

  if ( (byte_593961C & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long__getEntityList__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
    sub_21FFC50(&Method_ObservableCollectionExtensions_ConvertAll_UserPresentHistoryEntity__UserPresentHistoryEntity___);
    sub_21FFC50(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__);
    sub_21FFC50(&UserPresentHistoryMaster___c_TypeInfo);
    byte_593961C = 1;
  }
  v3 = UserPresentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !*(&UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo, method);
    v3 = UserPresentHistoryMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v7, Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, 0);
    v8 = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    v8->__9__1_0 = (struct System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__1_0, (int32_t)_9__1_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                       list,
                                                       (System_Converter_T__TOutput__o *)_9__1_0,
                                                       (const MethodInfo_38C0A74 *)Method_ObservableCollectionExtensions_ConvertAll_UserPresentHistoryEntity__UserPresentHistoryEntity___);
  if ( !v15 )
    sub_21FFECC(0, v16);
  v17 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v15;
  System_Collections_Generic_List_object___Sort(
    v15,
    (const MethodInfo_44514D4 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v17;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593961D & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
    byte_593961D = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserPresentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    &v7,
    EntityList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v6);
}


void UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593961E & 1) == 0 )
  {
    sub_21FFC50(&UserPresentHistoryMaster___c_TypeInfo);
    byte_593961E = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserPresentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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