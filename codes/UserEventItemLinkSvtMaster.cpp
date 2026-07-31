void UserEventItemLinkSvtMaster___ctor(UserEventItemLinkSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59394FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
    byte_59394FB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    541,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
}


EventItemUsedInfo_array *UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
        UserEventItemLinkSvtMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  DataManager_c *v8; // x0
  int v9; // w8
  Il2CppObject *Master_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  UserEventItemLinkSvtMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  struct UserEventItemLinkSvtMaster___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__1_1; // x20
  Il2CppObject *v25; // x21
  struct UserEventItemLinkSvtMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_59394FC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
    sub_21FFC50(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    sub_21FFC50(&Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__);
    sub_21FFC50(&Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__);
    sub_21FFC50(&UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_59394FC = 1;
  }
  v5 = sub_21FFEBC(UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v8 = DataManager_TypeInfo;
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)(v5 + 24) = nowTime;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(v8, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  *(_QWORD *)(v5 + 16) = Master_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)Master_object, v11, v12, v13, v14, v15, v16);
  list = this->fields.list;
  v18 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__,
    0);
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
  v21 = UserEventItemLinkSvtMaster___c_TypeInfo;
  v22 = v19;
  if ( !*(&UserEventItemLinkSvtMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventItemLinkSvtMaster___c_TypeInfo, v20);
    v21 = UserEventItemLinkSvtMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__1_1 = (System_Func_object__object__o *)static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__1_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_1,
      v25,
      Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__,
      0);
    v26 = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    v26->__9__1_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__1_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__1_1, (int32_t)_9__1_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v22,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__1_1,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  return (EventItemUsedInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                      v33,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_UserEventItemLinkSvtEntity__bool__c *v11; // x0
  System_Func_object__bool__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  UserEventItemLinkSvtMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  struct UserEventItemLinkSvtMaster___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__3_1; // x21
  Il2CppObject *v19; // x22
  struct UserEventItemLinkSvtMaster___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__bool__o *v28; // x21

  if ( (byte_59394FD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_EventItemUsedInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
    sub_21FFC50(&System_Func_EventItemUsedInfo__bool__TypeInfo);
    sub_21FFC50(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    sub_21FFC50(&Method_UserEventItemLinkSvtMaster___c__GetEventItemUsedInfo_b__3_1__);
    sub_21FFC50(&Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__0__);
    sub_21FFC50(&Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__2__);
    sub_21FFC50(&UserEventItemLinkSvtMaster___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_59394FD = 1;
  }
  v7 = sub_21FFEBC(UserEventItemLinkSvtMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  list = this->fields.list;
  v11 = System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo;
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = itemId;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(v11);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
  v15 = UserEventItemLinkSvtMaster___c_TypeInfo;
  v16 = v13;
  if ( !*(&UserEventItemLinkSvtMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventItemLinkSvtMaster___c_TypeInfo, v14);
    v15 = UserEventItemLinkSvtMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__3_1 = (System_Func_object__object__o *)static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v14);
      static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__3_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__3_1,
      v19,
      Method_UserEventItemLinkSvtMaster___c__GetEventItemUsedInfo_b__3_1__,
      0);
    v20 = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    v20->__9__3_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__3_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__3_1, (int32_t)_9__3_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v16,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__3_1,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  v28 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_EventItemUsedInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v7,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass3_0__GetEventItemUsedInfo_b__2__,
    0);
  return (EventItemUsedInfo_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                  v27,
                                  (System_Func_TSource__bool__o *)v28,
                                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_EventItemUsedInfo___);
}


void UserEventItemLinkSvtMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59394FE & 1) == 0 )
  {
    sub_21FFC50(&UserEventItemLinkSvtMaster___c_TypeInfo);
    byte_59394FE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(UserEventItemLinkSvtMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventItemLinkSvtMaster___c_TypeInfo->static_fields->__9 = (struct UserEventItemLinkSvtMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserEventItemLinkSvtMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *)entity->fields.eventItemUsedList;
}


System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *UserEventItemLinkSvtMaster___c___GetEventItemUsedInfo_b__3_1(
        UserEventItemLinkSvtMaster___c_o *this,
        UserEventItemLinkSvtEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_21FFECC(this, 0);
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
  if ( (byte_59394FF & 1) == 0 )
  {
    this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_59394FF = 1;
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
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)entitya;
  if ( !entitya )
LABEL_11:
    sub_21FFECC(this, entity);
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
    sub_21FFECC(this, 0);
  return v->fields.eventId == this->fields.eventId;
}


bool UserEventItemLinkSvtMaster___c__DisplayClass3_0___GetEventItemUsedInfo_b__2(
        UserEventItemLinkSvtMaster___c__DisplayClass3_0_o *this,
        EventItemUsedInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.itemId == this->fields.itemId;
}