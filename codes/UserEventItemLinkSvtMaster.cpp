void __fastcall UserEventItemLinkSvtMaster___ctor(UserEventItemLinkSvtMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE446 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__, method);
    byte_4BFE446 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    536,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int___ctor__);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  UserEventItemLinkSvtMaster___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  System_Func_object__object__o *_9__1_1; // x20
  Il2CppObject *v32; // x21
  struct UserEventItemLinkSvtMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_4BFE447 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventMaster___, nowTime);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_DataMasterBase_UserEventItemLinkSvtMaster__UserEventItemLinkSvtEntity__int__getEntityList__, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___, v9);
    sub_1C2E12C(&System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo, v10);
    sub_1C2E12C(&System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo, v11);
    sub_1C2E12C(&Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__, v12);
    sub_1C2E12C(&Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__, v13);
    sub_1C2E12C(&UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo, v14);
    sub_1C2E12C(&UserEventItemLinkSvtMaster___c_TypeInfo, v15);
    byte_4BFE447 = 1;
  }
  v16 = sub_1C2E378(UserEventItemLinkSvtMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1C2E388(v17, v18);
  *(_QWORD *)(v16 + 24) = nowTime;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventMaster___);
  *(_QWORD *)(v16 + 16) = Master_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)Master_object, v20, v21, v22, v23, v24, v25);
  list = this->fields.list;
  v27 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_UserEventItemLinkSvtEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_UserEventItemLinkSvtMaster___c__DisplayClass1_0__EnableEventItemUsedInfo_b__0__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_UserEventItemLinkSvtEntity___);
  v29 = UserEventItemLinkSvtMaster___c_TypeInfo;
  v30 = v28;
  if ( !UserEventItemLinkSvtMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventItemLinkSvtMaster___c_TypeInfo);
    v29 = UserEventItemLinkSvtMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__object__o *)v29->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = UserEventItemLinkSvtMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__1_1 = (System_Func_object__object__o *)sub_1C2E378(System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___TypeInfo);
    System_Func_object__object____ctor(
      _9__1_1,
      v32,
      Method_UserEventItemLinkSvtMaster___c__EnableEventItemUsedInfo_b__1_1__,
      0LL);
    static_fields = UserEventItemLinkSvtMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_UserEventItemLinkSvtEntity__IEnumerable_EventItemUsedInfo___o *)_9__1_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__1_1, (int64_t)_9__1_1, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v30,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__1_1,
                                                               (const MethodInfo_3006114 *)Method_System_Linq_Enumerable_SelectMany_UserEventItemLinkSvtEntity__EventItemUsedInfo___);
  return (EventItemUsedInfo_array *)System_Linq_Enumerable__ToArray_object_(
                                      v40,
                                      (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_EventItemUsedInfo___);
}


void __fastcall UserEventItemLinkSvtMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFE448 & 1) == 0 )
  {
    sub_1C2E12C(&UserEventItemLinkSvtMaster___c_TypeInfo, v1);
    byte_4BFE448 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(UserEventItemLinkSvtMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventItemLinkSvtMaster___c_TypeInfo->static_fields->__9 = (struct UserEventItemLinkSvtMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)UserEventItemLinkSvtMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C2E388(this, 0LL);
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
  if ( (byte_4BFE449 & 1) == 0 )
  {
    this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)sub_1C2E12C(
                                                                  &Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__,
                                                                  entity);
    byte_4BFE449 = 1;
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
          (const MethodInfo_327B1CC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  this = (UserEventItemLinkSvtMaster___c__DisplayClass1_0_o *)entitya;
  if ( !entitya )
LABEL_11:
    sub_1C2E388(this, entity);
  if ( !EventEntity__IsEventPeriod((EventEntity_o *)entitya, v4->fields.nowTime, 0LL) )
    return 0;
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.eventItemUsedList, 0LL);
}