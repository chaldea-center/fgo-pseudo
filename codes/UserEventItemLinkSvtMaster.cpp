void UserEventItemLinkSvtMaster___ctor(UserEventItemLinkSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF452 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
    byte_4CEF452 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    539,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
}


EventItemUsedInfo_array *UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
        UserEventItemLinkSvtMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  UserEventItemLinkSvtMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__object__o *_9__1_1; // x20
  Il2CppObject *v21; // x21
  struct UserEventItemLinkSvtMaster___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4CEF453 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
    sub_1C7BAE8(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    sub_1C7BAE8(&Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__);
    sub_1C7BAE8(&Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__);
    sub_1C7BAE8(&UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C7BAE8(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_4CEF453 = 1;
  }
  v5 = sub_1C7BD34(UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 24) = nowTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventMaster___);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
  list = this->fields.list;
  v16 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
  v18 = UserEventItemLinkSvtMaster___c_TypeInfo;
  v19 = v17;
  if ( !UserEventItemLinkSvtMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventItemLinkSvtMaster___c_TypeInfo);
    v18 = UserEventItemLinkSvtMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__object__o *)v18->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = UserEventItemLinkSvtMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__1_1 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_1,
      v21,
      Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__,
      0);
    static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__1_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v19,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__1_1,
                                                               (const MethodInfo_31A87D0 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  return (EventItemUsedInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                      v29,
                                      (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
}


void UserEventItemLinkSvtMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEF454 & 1) == 0 )
  {
    sub_1C7BAE8(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_4CEF454 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(UserEventItemLinkSvtMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventItemLinkSvtMaster___c_TypeInfo->static_fields->__9 = (struct UserEventItemLinkSvtMaster___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)UserEventItemLinkSvtMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserEventItemLinkSvtMaster___c___ctor(UserEventItemLinkSvtMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *UserEventItemLinkSvtMaster___c___EnableEventItemUsedInfo_b__1_1(
        UserEventItemLinkSvtMaster___c_o *this,
        UserEventItemLinkSvtEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C7BD40(this, 0);
  return (System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *)entity->fields.eventItemUsedList;
}


void UserEventItemLinkSvtMaster___c__DisplayClass1_0___ctor(
        UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventItemLinkSvtMaster___c__DisplayClass1_0___EnableEventItemUsedInfo_b__0(
        UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *this,
        UserEventItemLinkSvtEntity_o *entity,
        const MethodInfo *method)
{
  UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *v4; // x20
  Il2CppObject *entitya; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4CEF455 & 1) == 0 )
  {
    this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4CEF455 = 1;
  }
  entitya = 0;
  if ( !entity )
    goto LABEL_11;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)v4->fields.eventMaster;
  if ( !this )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entitya,
          entity->fields.eventId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)entitya;
  if ( !entitya )
LABEL_11:
    sub_1C7BD40(this, entity);
  if ( !EventEntity__IsEventPeriod((EventEntity_o *)entitya, v4->fields.nowTime, 0) )
    return 0;
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.eventItemUsedList, 0);
}