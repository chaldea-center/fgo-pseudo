void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE55C & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__, method);
    byte_4BFE55C = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    159,
    (const MethodInfo_327B3B8 *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
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
  UserPresentHistoryMaster___c_c *v8; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v21; // x19

  if ( (byte_4BFE55D & 1) == 0 )
  {
    sub_1C2E12C(&System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__TypeInfo, method);
    sub_1C2E12C(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long__getEntityList__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__, v4);
    sub_1C2E12C(
      &Method_ObservableCollectionExtensions_ConvertAll_UserPresentHistoryEntity__UserPresentHistoryEntity___,
      v5);
    sub_1C2E12C(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, v6);
    sub_1C2E12C(&UserPresentHistoryMaster___c_TypeInfo, v7);
    byte_4BFE55D = 1;
  }
  v8 = UserPresentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo);
    v8 = UserPresentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v8->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = UserPresentHistoryMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C2E378(System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__TypeInfo);
    System_Converter_object__object____ctor(
      _9__1_0,
      v11,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      0LL);
    static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_UserPresentHistoryEntity__UserPresentHistoryEntity__o *)_9__1_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                       list,
                                                       (System_Converter_T__TOutput__o *)_9__1_0,
                                                       (const MethodInfo_3058930 *)Method_ObservableCollectionExtensions_ConvertAll_UserPresentHistoryEntity__UserPresentHistoryEntity___);
  if ( !v19 )
    sub_1C2E388(0LL, v20);
  v21 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v19;
  System_Collections_Generic_List_object___Sort(
    v19,
    (const MethodInfo_366D290 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v21;
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

  if ( (byte_4BFE55E & 1) == 0 )
  {
    sub_1C2E12C(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__, v3);
    byte_4BFE55E = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserPresentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1C2E388(0LL, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    &v11,
    EntityList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFE55F & 1) == 0 )
  {
    sub_1C2E12C(&UserPresentHistoryMaster___c_TypeInfo, v1);
    byte_4BFE55F = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(UserPresentHistoryMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserPresentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserPresentHistoryMaster___c___ctor(UserPresentHistoryMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserPresentHistoryEntity_o *__fastcall UserPresentHistoryMaster___c___GetEntityList_b__1_0(
        UserPresentHistoryMaster___c_o *this,
        UserPresentHistoryEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}