void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BE1E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
    byte_4A5BE1E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v14; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v16; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__bool__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  UserEventServantPointMaster___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_T__TResult__o *_9__3_2; // x21
  Il2CppObject *v26; // x22
  struct UserEventServantPointMaster___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x20
  System_Func_object__int__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4A5BE1F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_1B885B0(&System_Func_UserEventServantPointEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_UserEventServantPointEntity__long__TypeInfo);
    sub_1B885B0(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__);
    sub_1B885B0(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__);
    sub_1B885B0(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__);
    sub_1B885B0(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
    sub_1B885B0(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__);
    sub_1B885B0(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
    sub_1B885B0(&UserEventServantPointMaster___c_TypeInfo);
    byte_4A5BE1F = 1;
  }
  v7 = sub_1B887FC(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v10 = sub_1B887FC(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v10) )
  {
LABEL_21:
    sub_1B8880C(Instance, v9);
  }
  *(_QWORD *)(v10 + 16) = Instance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)Instance, v11, v12);
  list = this->fields.list;
  v14 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v14 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v14->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = UserEventServantPointMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v16,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v21 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0LL);
  v22 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v23 = UserEventServantPointMaster___c_TypeInfo;
  v24 = v22;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v23 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_T__TResult__o *)v23->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = UserEventServantPointMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__3_2 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_2,
      v26,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0LL);
    v27 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v27->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->__9__3_2, (int32_t)_9__3_2, v28, v29);
  }
  v30 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v24,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2EAA35C *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v31 = (System_Func_object__int__o *)sub_1B887FC(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v31,
    (Il2CppObject *)v10,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0LL);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v30,
                                                               (System_Func_TSource__TKey__o *)v31,
                                                               (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v32,
                                            (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BE1C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
    sub_1B885B0(&UserEventServantPointEntity_TypeInfo);
    byte_4A5BE1C = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v11; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v13; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4A5BE20 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_DataEntityBase___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_1B885B0(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    sub_1B885B0(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__);
    sub_1B885B0(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__);
    sub_1B885B0(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
    sub_1B885B0(&UserEventServantPointMaster___c_TypeInfo);
    byte_4A5BE20 = 1;
  }
  v7 = sub_1B887FC(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v11 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v11 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v11->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = UserEventServantPointMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v13, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v19,
           (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5BE1D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
    sub_1B885B0(&UserEventServantPointEntity_TypeInfo);
    byte_4A5BE1D = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BE21 & 1) == 0 )
  {
    sub_1B885B0(&UserEventServantPointMaster___c_TypeInfo);
    byte_4A5BE21 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5BE22 & 1) == 0 )
  {
    sub_1B885B0(&UserEventServantPointEntity_TypeInfo);
    byte_4A5BE22 = 1;
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
    sub_1B8880C(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BE23 & 1) == 0 )
  {
    sub_1B885B0(&UserEventServantPointEntity_TypeInfo);
    byte_4A5BE23 = 1;
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
  if ( (byte_4A5BE24 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BE24 = 1;
  }
  if ( !svtPointEnt )
    sub_1B8880C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v7, 0LL) == v4->fields.userId
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
  if ( (byte_4A5BE25 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4A5BE25 = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(this, svtPointEnt);
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
  if ( (byte_4A5BE26 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A5BE26 = 1;
  }
  if ( !svtPointEnt )
    sub_1B8880C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}