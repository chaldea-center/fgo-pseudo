void __fastcall UserPresentHistoryMaster___ctor(UserPresentHistoryMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__, method, v2);
    byte_4B16F7F = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    155,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_UserPresentHistoryMaster__UserPresentHistoryEntity__long___ctor__);
}


System_Collections_Generic_List_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEntityList(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UserPresentHistoryMaster___c_c *v13; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x19
  System_Converter_TInput__TOutput__o *_9__1_0; // x20
  Il2CppObject *v16; // x21
  struct UserPresentHistoryMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_object__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_UserPresentHistoryEntity__o *v26; // x19

  if ( (byte_4B16F80 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__, v5, v6);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___, v7, v8);
    sub_1BCA7E0(&Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__, v9, v10);
    sub_1BCA7E0(&UserPresentHistoryMaster___c_TypeInfo, v11, v12);
    byte_4B16F80 = 1;
  }
  v13 = UserPresentHistoryMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !UserPresentHistoryMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserPresentHistoryMaster___c_TypeInfo, method);
    v13 = UserPresentHistoryMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v13->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = UserPresentHistoryMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                       System_Converter_DataEntityBase__UserPresentHistoryEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
    System_Converter_object__object____ctor(
      _9__1_0,
      v16,
      Method_UserPresentHistoryMaster___c__GetEntityList_b__1_0__,
      0LL);
    static_fields = UserPresentHistoryMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__UserPresentHistoryEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_List_object__o *)ObservableCollectionExtensions__ConvertAll_object__object_(
                                                       list,
                                                       (System_Converter_T__TOutput__o *)_9__1_0,
                                                       (const MethodInfo_2F98238 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__UserPresentHistoryEntity___);
  if ( !v24 )
    sub_1BCAA3C(0LL, v25);
  v26 = (System_Collections_Generic_List_UserPresentHistoryEntity__o *)v24;
  System_Collections_Generic_List_object___Sort(
    v24,
    (const MethodInfo_35A3640 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__Sort__);
  return v26;
}


System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *__fastcall UserPresentHistoryMaster__GetEnumerator(
        UserPresentHistoryMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *EntityList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B16F81 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__, v4, v5);
    byte_4B16F81 = 1;
  }
  EntityList = (System_Collections_Generic_List_object__o *)UserPresentHistoryMaster__GetEntityList(this, method);
  if ( !EntityList )
    sub_1BCAA3C(0LL, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    &v10,
    EntityList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserPresentHistoryEntity__GetEnumerator__);
  v9 = v10;
  return (System_Collections_Generic_IEnumerator_UserPresentHistoryEntity__o *)j_il2cpp_value_box_0(
                                                                                 System_Collections_Generic_List_Enumerator_UserPresentHistoryEntity__TypeInfo,
                                                                                 &v9);
}


void __fastcall UserPresentHistoryMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16F82 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentHistoryMaster___c_TypeInfo, v1, v2);
    byte_4B16F82 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserPresentHistoryMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserPresentHistoryMaster___c_TypeInfo->static_fields->__9 = (struct UserPresentHistoryMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserPresentHistoryMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16F83 & 1) == 0 )
  {
    sub_1BCA7E0(&UserPresentHistoryEntity_TypeInfo, entity, method);
    byte_4B16F83 = 1;
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