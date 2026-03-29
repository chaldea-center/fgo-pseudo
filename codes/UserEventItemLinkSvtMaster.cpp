void UserEventItemLinkSvtMaster___ctor(UserEventItemLinkSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D317D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
    byte_4D317D2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    539,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
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

  if ( (byte_4D317D3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
    sub_1C93AD4(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    sub_1C93AD4(&Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__);
    sub_1C93AD4(&Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__);
    sub_1C93AD4(&UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C93AD4(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_4D317D3 = 1;
  }
  v5 = sub_1C93D20(UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 24) = nowTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)Master_object, v9, v10, v11, v12, v13, v14);
  list = this->fields.list;
  v16 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
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
    _9__1_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_1,
      v21,
      Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__,
      0);
    static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__1_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v19,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__1_1,
                                                               (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  return (EventItemUsedInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                      v29,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
}


bool UserEventItemLinkSvtMaster__ExistsEventItem(
        UserEventItemLinkSvtMaster_o *this,
        int32_t eventId,
        int32_t itemId,
        const MethodInfo *method)
{
  return UserEventItemLinkSvtMaster__GetEventItemUsedInfo(this, eventId, itemId, method) != 0;
}


EventItemUsedInfo_o *UserEventItemLinkSvtMaster__GetEventItemUsedInfo(
        UserEventItemLinkSvtMaster_o *this,
        int32_t eventId,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  UserEventItemLinkSvtMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *_9__3_1; // x21
  Il2CppObject *v16; // x22
  struct UserEventItemLinkSvtMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21

  if ( (byte_4D317D4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_EventItemUsedInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
    sub_1C93AD4(&System_Func_EventItemUsedInfo__bool__TypeInfo);
    sub_1C93AD4(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    sub_1C93AD4(&Method_UserEventItemLinkSvtMaster___c__GetEventItemUsedInfo_b__3_1__);
    sub_1C93AD4(&Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__0__);
    sub_1C93AD4(&Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__2__);
    sub_1C93AD4(&UserEventItemLinkSvtMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C93AD4(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_4D317D4 = 1;
  }
  v7 = sub_1C93D20(UserEventItemLinkSvtMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = itemId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
  v13 = UserEventItemLinkSvtMaster___c_TypeInfo;
  v14 = v12;
  if ( !UserEventItemLinkSvtMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventItemLinkSvtMaster___c_TypeInfo);
    v13 = UserEventItemLinkSvtMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__object__o *)v13->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = UserEventItemLinkSvtMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__3_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__3_1,
      v16,
      Method_UserEventItemLinkSvtMaster___c__GetEventItemUsedInfo_b__3_1__,
      0);
    static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__3_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_1, (int32_t)_9__3_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v14,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__3_1,
                                                               (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  v25 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_EventItemUsedInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v7,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__2__,
    0);
  return (EventItemUsedInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  v24,
                                  (System_Func_TSource__bool__o *)v25,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_EventItemUsedInfo___);
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

  if ( (byte_4D317D5 & 1) == 0 )
  {
    sub_1C93AD4(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_4D317D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UserEventItemLinkSvtMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventItemLinkSvtMaster___c_TypeInfo->static_fields->__9 = (struct UserEventItemLinkSvtMaster___c_o *)v1;
  sub_1C93A78(
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
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *)entity->fields.eventItemUsedList;
}


System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *UserEventItemLinkSvtMaster___c___GetEventItemUsedInfo_b__3_1(
        UserEventItemLinkSvtMaster___c_o *this,
        UserEventItemLinkSvtEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *)v->fields.eventItemUsedList;
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
  if ( (byte_4D317D6 & 1) == 0 )
  {
    this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4D317D6 = 1;
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
          (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)entitya;
  if ( !entitya )
LABEL_11:
    sub_1C93D2C(this, entity);
  if ( !EventEntity__IsEventPeriod((EventEntity_o *)entitya, v4->fields.nowTime, 0) )
    return 0;
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.eventItemUsedList, 0);
}


void UserEventItemLinkSvtMaster___c__DisplayClass3_0___ctor(
        UserEventItemLinkSvtMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventItemLinkSvtMaster___c__DisplayClass3_0___GetEventItemUsedInfo_b__0(
        UserEventItemLinkSvtMaster___c__DisplayClass3_0_o *this,
        UserEventItemLinkSvtEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C93D2C(this, 0);
  return v->fields.eventId == this->fields.eventId;
}


bool UserEventItemLinkSvtMaster___c__DisplayClass3_0___GetEventItemUsedInfo_b__2(
        UserEventItemLinkSvtMaster___c__DisplayClass3_0_o *this,
        EventItemUsedInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C93D2C(this, 0);
  return e->fields.itemId == this->fields.itemId;
}