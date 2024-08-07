void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7BE & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__,
      method);
    byte_49FF7BE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


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
  __int64 v28; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v32; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v34; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Func_object__bool__o *v39; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  UserEventServantPointMaster___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Func_T__TResult__o *_9__3_2; // x21
  Il2CppObject *v44; // x22
  struct UserEventServantPointMaster___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x20
  System_Func_object__int__o *v49; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0

  if ( (byte_49FF7BF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, userId);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v9);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v10);
    sub_1B64A00(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v11);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v12);
    sub_1B64A00(&System_Func_UserEventServantPointEntity__int__TypeInfo, v13);
    sub_1B64A00(&System_Func_UserEventServantPointEntity__long__TypeInfo, v14);
    sub_1B64A00(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v15);
    sub_1B64A00(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B64A00(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v18);
    sub_1B64A00(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v19);
    sub_1B64A00(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v20);
    sub_1B64A00(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v21);
    sub_1B64A00(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v22);
    sub_1B64A00(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v23);
    sub_1B64A00(&UserEventServantPointMaster___c_TypeInfo, v24);
    byte_49FF7BF = 1;
  }
  v25 = sub_1B64C4C(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_21;
  *(_QWORD *)(v25 + 16) = userId;
  *(_DWORD *)(v25 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v28 = sub_1B64C4C(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v28) )
  {
LABEL_21:
    sub_1B64C5C(Instance, v27);
  }
  *(_QWORD *)(v28 + 16) = Instance;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)Instance, v29, v30);
  list = this->fields.list;
  v32 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v32 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v32->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = UserEventServantPointMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v34,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v39 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v25,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0LL);
  v40 = System_Linq_Enumerable__Where_object_(
          v38,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v41 = UserEventServantPointMaster___c_TypeInfo;
  v42 = v40;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v41 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_T__TResult__o *)v41->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = UserEventServantPointMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__3_2 = (System_Func_T__TResult__o *)sub_1B64C4C(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_2,
      v44,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0LL);
    v45 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v45->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v45->__9__3_2, (int32_t)_9__3_2, v46, v47);
  }
  v48 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v42,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2E65EE4 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v49 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v49,
    (Il2CppObject *)v28,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0LL);
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v48,
                                                               (System_Func_TSource__TKey__o *)v49,
                                                               (const MethodInfo_2E732E4 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v50,
                                            (const MethodInfo_2E5F188 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
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

  if ( (byte_49FF7BC & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId);
    sub_1B64A00(&UserEventServantPointEntity_TypeInfo, v9);
    byte_49FF7BC = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D6AF0 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


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
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v20; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v22; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Func_object__bool__o *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_49FF7C0 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v9);
    sub_1B64A00(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v10);
    sub_1B64A00(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v11);
    sub_1B64A00(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v12);
    sub_1B64A00(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v13);
    sub_1B64A00(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v14);
    sub_1B64A00(&UserEventServantPointMaster___c_TypeInfo, v15);
    byte_49FF7C0 = 1;
  }
  v16 = sub_1B64C4C(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B64C5C(v17, v18);
  *(_QWORD *)(v16 + 16) = userId;
  *(_DWORD *)(v16 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v20 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v20 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v20->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = UserEventServantPointMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v22, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v27 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v16,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          v26,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v28,
           (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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

  if ( (byte_49FF7BD & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity);
    sub_1B64A00(&UserEventServantPointEntity_TypeInfo, v11);
    byte_49FF7BD = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF7C1 & 1) == 0 )
  {
    sub_1B64A00(&UserEventServantPointMaster___c_TypeInfo, v1);
    byte_49FF7C1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_49FF7C2 & 1) == 0 )
  {
    sub_1B64A00(&UserEventServantPointEntity_TypeInfo, entity);
    byte_49FF7C2 = 1;
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
    sub_1B64C5C(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FF7C3 & 1) == 0 )
  {
    sub_1B64A00(&UserEventServantPointEntity_TypeInfo, entity);
    byte_49FF7C3 = 1;
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
  if ( (byte_49FF7C4 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1B64A00(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_49FF7C4 = 1;
  }
  if ( !svtPointEnt )
    sub_1B64C5C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v7, 0LL) == v4->fields.userId
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
  if ( (byte_49FF7C5 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1B64A00(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   svtPointEnt);
    byte_49FF7C5 = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64C5C(this, svtPointEnt);
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
  if ( (byte_49FF7C6 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1B64A00(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt);
    byte_49FF7C6 = 1;
  }
  if ( !svtPointEnt )
    sub_1B64C5C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46185616(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}