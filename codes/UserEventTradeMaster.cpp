void UserEventTradeMaster___ctor(UserEventTradeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597173B & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__);
    byte_597173B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    505,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string___ctor__);
}


UserEventTradeEntity_o *UserEventTradeMaster__GetEntity(
        UserEventTradeMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return (UserEventTradeEntity_o *)this;
}


System_Collections_Generic_List_UserEventTradeEntity__o *UserEventTradeMaster__GetEntityList(
        UserEventTradeMaster_o *this,
        const MethodInfo *method)
{
  UserEventTradeMaster___c_c *v3; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  struct UserEventTradeMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct UserEventTradeMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_597173D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserEventTradeEntity__UserEventTradeEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___);
    sub_2213A60(&System_Func_UserEventTradeEntity__UserEventTradeEntity__TypeInfo);
    sub_2213A60(&Method_UserEventTradeMaster___c__GetEntityList_b__3_0__);
    sub_2213A60(&UserEventTradeMaster___c_TypeInfo);
    byte_597173D = 1;
  }
  v3 = UserEventTradeMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !*(&UserEventTradeMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventTradeMaster___c_TypeInfo, method);
    v3 = UserEventTradeMaster___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__3_0 = (System_Func_object__object__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = UserEventTradeMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserEventTradeEntity__UserEventTradeEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v7, Method_UserEventTradeMaster___c__GetEntityList_b__3_0__, 0);
    v8 = UserEventTradeMaster___c_TypeInfo->static_fields;
    v8->__9__3_0 = (struct System_Func_UserEventTradeEntity__UserEventTradeEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__3_0, (int32_t)_9__3_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserEventTradeEntity__UserEventTradeEntity___);
  return (System_Collections_Generic_List_UserEventTradeEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v15,
                                                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserEventTradeEntity___);
}


bool UserEventTradeMaster__TryGetEntity(
        UserEventTradeMaster_o *this,
        UserEventTradeEntity_o **entity,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_597173C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__);
    byte_597173C = 1;
  }
  PK = (Il2CppObject *)UserEventTradeEntity__CreatePK(eventId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventTradeMaster__UserEventTradeEntity__string__TryGetEntity__);
}


void UserEventTradeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597173E & 1) == 0 )
  {
    sub_2213A60(&UserEventTradeMaster___c_TypeInfo);
    byte_597173E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserEventTradeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventTradeMaster___c_TypeInfo->static_fields->__9 = (struct UserEventTradeMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserEventTradeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserEventTradeMaster___c___ctor(UserEventTradeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserEventTradeEntity_o *UserEventTradeMaster___c___GetEntityList_b__3_0(
        UserEventTradeMaster___c_o *this,
        UserEventTradeEntity_o *data,
        const MethodInfo *method)
{
  return data;
}