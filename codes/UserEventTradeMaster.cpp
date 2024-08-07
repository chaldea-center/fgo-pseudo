void __fastcall UserEventTradeMaster___ctor(UserEventTradeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7D5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__, method);
    byte_49FF7D5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    496,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventTradeMaster___c_c *v7; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v10; // x21
  struct UserEventTradeMaster___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_49FF7D7 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventTradeEntity___, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___, v3);
    sub_1B64A00(&System_Func_DataEntityBase__UserEventTradeEntity__TypeInfo, v4);
    sub_1B64A00(&Method_UserEventTradeMaster___c__GetEntityList_b__3_0__, v5);
    sub_1B64A00(&UserEventTradeMaster___c_TypeInfo, v6);
    byte_49FF7D7 = 1;
  }
  v7 = UserEventTradeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !UserEventTradeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeMaster___c_TypeInfo);
    v7 = UserEventTradeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v7->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserEventTradeMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_DataEntityBase__UserEventTradeEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v10, Method_UserEventTradeMaster___c__GetEntityList_b__3_0__, 0LL);
    static_fields = UserEventTradeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventTradeEntity__o *)_9__3_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventTradeEntity___);
  return (System_Collections_Generic_List_UserEventTradeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v14,
                                                                      (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___);
}


bool __fastcall UserEventTradeMaster__TryGetEntity(
        UserEventTradeMaster_o *this,
        UserEventTradeEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF7D6 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__, entity);
    byte_49FF7D6 = 1;
  }
  PK = (Il2CppObject *)UserEventTradeEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__);
}


void __fastcall UserEventTradeMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF7D8 & 1) == 0 )
  {
    sub_1B64A00(&UserEventTradeMaster___c_TypeInfo, v1);
    byte_49FF7D8 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(UserEventTradeMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventTradeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventTradeMaster___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)UserEventTradeMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_49FF7D9 & 1) == 0 )
  {
    sub_1B64A00(&UserEventTradeEntity_TypeInfo, data);
    byte_49FF7D9 = 1;
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