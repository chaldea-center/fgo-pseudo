void __fastcall UserEventItemLinkSvtMaster___ctor(UserEventItemLinkSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F208 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__, method);
    byte_4A4F208 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    539,
    (const MethodInfo_3211F5C *)Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
}


EventItemUsedInfo_array *__fastcall UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
        UserEventItemLinkSvtMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  Il2CppObject *Master_object; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  UserEventItemLinkSvtMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__object__o *_9__1_1; // x20
  Il2CppObject *v28; // x21
  struct UserEventItemLinkSvtMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4A4F209 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, nowTime);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___, v7);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___, v9);
    sub_1B863B8(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo, v10);
    sub_1B863B8(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo, v11);
    sub_1B863B8(&Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__, v12);
    sub_1B863B8(&Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__, v13);
    sub_1B863B8(&UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo, v14);
    sub_1B863B8(&UserEventItemLinkSvtMaster___c_TypeInfo, v15);
    byte_4A4F209 = 1;
  }
  v16 = sub_1B86604(UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B86614(v17, v18);
  *(_QWORD *)(v16 + 24) = nowTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  *(_QWORD *)(v16 + 16) = Master_object;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)Master_object, v20, v21);
  list = this->fields.list;
  v23 = (System_Func_object__bool__o *)sub_1B86604(System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
  v25 = UserEventItemLinkSvtMaster___c_TypeInfo;
  v26 = v24;
  if ( !UserEventItemLinkSvtMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventItemLinkSvtMaster___c_TypeInfo);
    v25 = UserEventItemLinkSvtMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__object__o *)v25->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = UserEventItemLinkSvtMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__1_1 = (System_Func_object__object__o *)sub_1B86604(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_1,
      v28,
      Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__,
      0LL);
    static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__1_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v26,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__1_1,
                                                               (const MethodInfo_2FA37F8 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  return (EventItemUsedInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                      v32,
                                      (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
}


void __fastcall UserEventItemLinkSvtMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4F20A & 1) == 0 )
  {
    sub_1B863B8(&UserEventItemLinkSvtMaster___c_TypeInfo, v1);
    byte_4A4F20A = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(UserEventItemLinkSvtMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventItemLinkSvtMaster___c_TypeInfo->static_fields->__9 = (struct UserEventItemLinkSvtMaster___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)UserEventItemLinkSvtMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall UserEventItemLinkSvtMaster___c___ctor(UserEventItemLinkSvtMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *__fastcall UserEventItemLinkSvtMaster___c___EnableEventItemUsedInfo_b__1_1(
        UserEventItemLinkSvtMaster___c_o *this,
        UserEventItemLinkSvtEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B86614(this, 0LL);
  return (System_Collections_Generic_IEnumerable_EventItemUsedInfo__o *)entity->fields.eventItemUsedList;
}


void __fastcall UserEventItemLinkSvtMaster___c__DisplayClass1_0___ctor(
        UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventItemLinkSvtMaster___c__DisplayClass1_0___EnableEventItemUsedInfo_b__0(
        UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *this,
        UserEventItemLinkSvtEntity_o *entity,
        const MethodInfo *method)
{
  UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *v4; // x20
  Il2CppObject *entitya; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A4F20B & 1) == 0 )
  {
    this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)sub_1B863B8(
                                                                  &Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__,
                                                                  entity);
    byte_4A4F20B = 1;
  }
  entitya = 0LL;
  if ( !entity )
    goto LABEL_11;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)v4->fields.eventMaster;
  if ( !this )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entitya,
          entity->fields.eventId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)entitya;
  if ( !entitya )
LABEL_11:
    sub_1B86614(this, entity);
  if ( !EventEntity__IsEventPeriod((EventEntity_o *)entitya, v4->fields.nowTime, 0LL) )
    return 0;
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.eventItemUsedList, 0LL);
}