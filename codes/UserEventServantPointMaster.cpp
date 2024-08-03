void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD0A5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__,
      method);
    byte_49FD0A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x21
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v35; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v37; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  System_Func_object__bool__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  UserEventServantPointMaster___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  System_Func_T__TResult__o *_9__3_2; // x21
  Il2CppObject *v51; // x22
  struct UserEventServantPointMaster___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  System_Func_object__int__o *v58; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0

  if ( (byte_49FD0A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, userId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v12);
    sub_1B640C8(&System_Func_UserEventServantPointEntity__int__TypeInfo, v13);
    sub_1B640C8(&System_Func_UserEventServantPointEntity__long__TypeInfo, v14);
    sub_1B640C8(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v15);
    sub_1B640C8(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v18);
    sub_1B640C8(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v19);
    sub_1B640C8(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v20);
    sub_1B640C8(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v21);
    sub_1B640C8(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v22);
    sub_1B640C8(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v23);
    sub_1B640C8(&UserEventServantPointMaster___c_TypeInfo, v24);
    byte_49FD0A6 = 1;
  }
  v25 = sub_1B64314(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, userId, *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_21;
  *(_QWORD *)(v25 + 16) = userId;
  *(_DWORD *)(v25 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v29 = sub_1B64314(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v27, v28);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___),
        !v29) )
  {
LABEL_21:
    sub_1B64324(Instance);
  }
  *(_QWORD *)(v29 + 16) = Instance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)Instance, v30, v31);
  list = this->fields.list;
  v35 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v35 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v35->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = UserEventServantPointMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                 v32,
                                                 v33);
    System_Func_object__object____ctor(
      _9__3_0,
      v37,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v39, v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v44 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserEventServantPointEntity__bool__TypeInfo, v42, v43);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v25,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0LL);
  v45 = System_Linq_Enumerable__Where_object_(
          v41,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v48 = UserEventServantPointMaster___c_TypeInfo;
  v49 = v45;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v48 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_T__TResult__o *)v48->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = UserEventServantPointMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__3_2 = (System_Func_T__TResult__o *)sub_1B64314(
                                             System_Func_UserEventServantPointEntity__long__TypeInfo,
                                             v46,
                                             v47);
    System_Func_object__long____ctor(
      _9__3_2,
      v51,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0LL);
    v52 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v52->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v52->__9__3_2, (int32_t)_9__3_2, v53, v54);
  }
  v55 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v49,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2E635F0 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v58 = (System_Func_object__int__o *)sub_1B64314(System_Func_UserEventServantPointEntity__int__TypeInfo, v56, v57);
  System_Func_object__int____ctor(
    v58,
    (Il2CppObject *)v29,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0LL);
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v55,
                                                               (System_Func_TSource__TKey__o *)v58,
                                                               (const MethodInfo_2E709F0 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v59,
                                            (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x1

  if ( (byte_49FD0A3 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId);
    sub_1B640C8(&UserEventServantPointEntity_TypeInfo, v9);
    byte_49FD0A3 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D41FC *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v21; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v23; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_object__bool__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_49FD0A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v9);
    sub_1B640C8(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v10);
    sub_1B640C8(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v11);
    sub_1B640C8(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v12);
    sub_1B640C8(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v13);
    sub_1B640C8(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v14);
    sub_1B640C8(&UserEventServantPointMaster___c_TypeInfo, v15);
    byte_49FD0A7 = 1;
  }
  v16 = sub_1B64314(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, userId, *(_QWORD *)&eventId);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B64324(v17);
  *(_QWORD *)(v16 + 16) = userId;
  *(_DWORD *)(v16 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v21 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v21 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v21->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = UserEventServantPointMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                 v18,
                                                 v19);
    System_Func_object__object____ctor(_9__4_0, v23, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v30 = (System_Func_object__bool__o *)sub_1B64314(System_Func_UserEventServantPointEntity__bool__TypeInfo, v28, v29);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v16,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0LL);
  v31 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v31,
           (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__TryGetEntity(
        UserEventServantPointMaster_o *this,
        UserEventServantPointEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  Il2CppObject *PK; // x2

  if ( (byte_49FD0A4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity);
    sub_1B640C8(&UserEventServantPointEntity_TypeInfo, v11);
    byte_49FD0A4 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD0A8 & 1) == 0 )
  {
    sub_1B640C8(&UserEventServantPointMaster___c_TypeInfo, v1);
    byte_49FD0A8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(UserEventServantPointMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall UserEventServantPointMaster___c___ctor(
        UserEventServantPointMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FD0A9 & 1) == 0 )
  {
    sub_1B640C8(&UserEventServantPointEntity_TypeInfo, entity);
    byte_49FD0A9 = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


int64_t __fastcall UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_2(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  if ( !svtPointEnt )
    sub_1B64324(this);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FD0AA & 1) == 0 )
  {
    sub_1B640C8(&UserEventServantPointEntity_TypeInfo, entity);
    byte_49FD0AA = 1;
  }
  if ( !entity )
    return 0LL;
  methodPtr_low = LOBYTE(UserEventServantPointEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(entity->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (UserEventServantPointEntity_c *)entity->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventServantPointEntity_TypeInfo )
    return (UserEventServantPointEntity_o *)entity;
  return 0LL;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass3_0___ctor(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventServantPointMaster___c__DisplayClass3_0___GetBestServantPointEntity_b__1(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49FD0AB & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1B640C8(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_49FD0AB = 1;
  }
  if ( !svtPointEnt )
    sub_1B64324(this);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass3_1___ctor(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserEventServantPointMaster___c__DisplayClass3_1___GetBestServantPointEntity_b__3(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_1_o *v4; // x20

  v4 = this;
  if ( (byte_49FD0AC & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1B640C8(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   svtPointEnt);
    byte_49FD0AC = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(this);
  }
  return (int32_t)this[8].fields.svtMaster;
}


void __fastcall UserEventServantPointMaster___c__DisplayClass4_0___ctor(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall UserEventServantPointMaster___c__DisplayClass4_0___IsAnyExist_b__1(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass4_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_49FD0AD & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1B640C8(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_49FD0AD = 1;
  }
  if ( !svtPointEnt )
    sub_1B64324(this);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}