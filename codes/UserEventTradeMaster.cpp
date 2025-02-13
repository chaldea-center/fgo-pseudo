void __fastcall UserEventTradeMaster___ctor(UserEventTradeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD287 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__);
    byte_4BDD287 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    500,
    (const MethodInfo_325E55C *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__);
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
  UserEventTradeMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v6; // x21
  struct UserEventTradeMaster___c_StaticFields *static_fields; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4BDD289 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_UserEventTradeEntity__UserEventTradeEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___);
    sub_1C21E38(&System_Func_UserEventTradeEntity__UserEventTradeEntity__TypeInfo);
    sub_1C21E38(&Method_UserEventTradeMaster___c__GetEntityList_b__3_0__);
    sub_1C21E38(&UserEventTradeMaster___c_TypeInfo);
    byte_4BDD289 = 1;
  }
  v3 = UserEventTradeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventTradeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeMaster___c_TypeInfo);
    v3 = UserEventTradeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v3->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserEventTradeMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_UserEventTradeEntity__UserEventTradeEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v6, Method_UserEventTradeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventTradeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventTradeEntity__UserEventTradeEntity__o *)_9__3_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_UserEventTradeEntity__UserEventTradeEntity___);
  return (System_Collections_Generic_List_UserEventTradeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v14,
                                                                      (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___);
}


bool __fastcall UserEventTradeMaster__TryGetEntity(
        UserEventTradeMaster_o *this,
        UserEventTradeEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDD288 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__);
    byte_4BDD288 = 1;
  }
  PK = (Il2CppObject *)UserEventTradeEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__);
}


void __fastcall UserEventTradeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD28A & 1) == 0 )
  {
    sub_1C21E38(&UserEventTradeMaster___c_TypeInfo);
    byte_4BDD28A = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(UserEventTradeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserEventTradeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventTradeMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)UserEventTradeMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserEventTradeMaster___c___ctor(UserEventTradeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventTradeEntity_o *__fastcall UserEventTradeMaster___c___GetEntityList_b__3_0(
        UserEventTradeMaster___c_o *this,
        UserEventTradeEntity_o *data,
        const MethodInfo *method)
{
  return data;
}