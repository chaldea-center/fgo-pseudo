void __fastcall UserEventTradeMaster___ctor(UserEventTradeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__, method, v2);
    byte_4B16EEA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    496,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__);
}


UserEventTradeEntity_o *__fastcall UserEventTradeMaster__GetEntity(
        UserEventTradeMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return (UserEventTradeEntity_o *)this;
}


System_Collections_Generic_List_UserEventTradeEntity__o *__fastcall UserEventTradeMaster__GetEntityList(
        UserEventTradeMaster_o *this,
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
  UserEventTradeMaster___c_c *v13; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v16; // x21
  struct UserEventTradeMaster___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B16EEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventTradeEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___, v5, v6);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventTradeEntity__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UserEventTradeMaster___c__GetEntityList_b__3_0__, v9, v10);
    sub_1BCA7E0(&UserEventTradeMaster___c_TypeInfo, v11, v12);
    byte_4B16EEC = 1;
  }
  v13 = UserEventTradeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventTradeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeMaster___c_TypeInfo, method);
    v13 = UserEventTradeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v13->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = UserEventTradeMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventTradeEntity__TypeInfo,
                                                 method,
                                                 v2,
                                                 v3);
    System_Func_object__object____ctor(_9__3_0, v16, Method_UserEventTradeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventTradeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventTradeEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventTradeEntity___);
  return (System_Collections_Generic_List_UserEventTradeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v24,
                                                                      (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventTradeMaster__TryGetEntity(
        UserEventTradeMaster_o *this,
        UserEventTradeEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16EEB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16EEB = 1;
  }
  PK = (Il2CppObject *)UserEventTradeEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__);
}


void __fastcall UserEventTradeMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16EED & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventTradeMaster___c_TypeInfo, v1, v2);
    byte_4B16EED = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserEventTradeMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserEventTradeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventTradeMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEventTradeMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall UserEventTradeMaster___c___ctor(UserEventTradeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventTradeEntity_o *__fastcall UserEventTradeMaster___c___GetEntityList_b__3_0(
        UserEventTradeMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B16EEE & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventTradeEntity_TypeInfo, data, method);
    byte_4B16EEE = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventTradeEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventTradeEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventTradeEntity_TypeInfo )
    return (UserEventTradeEntity_o *)data;
  return 0LL;
}