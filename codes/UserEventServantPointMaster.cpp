void UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43E15 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
    byte_4C43E15 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


UserEventServantPointEntity_o *UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  UserEventServantPointMaster___c_c *v13; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v15; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Func_object__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  UserEventServantPointMaster___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__long__o *_9__3_2; // x21
  Il2CppObject *v25; // x22
  struct UserEventServantPointMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  System_Func_object__int__o *v30; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_4C43E16 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_1C37058(&System_Func_UserEventServantPointEntity__int__TypeInfo);
    sub_1C37058(&System_Func_UserEventServantPointEntity__long__TypeInfo);
    sub_1C37058(&System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    sub_1C37058(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__);
    sub_1C37058(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__);
    sub_1C37058(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__);
    sub_1C37058(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C37058(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__);
    sub_1C37058(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
    sub_1C37058(&UserEventServantPointMaster___c_TypeInfo);
    byte_4C43E16 = 1;
  }
  v7 = sub_1C372A4(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___) )
    return 0;
  v9 = sub_1C372A4(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v9) )
  {
LABEL_21:
    sub_1C372B4(Instance);
  }
  *(_QWORD *)(v9 + 16) = Instance;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)Instance, v10, v11);
  list = this->fields.list;
  v13 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v13 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v13->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = UserEventServantPointMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v15,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventServantPointEntity__UserEventServantPointEntity__o *)_9__3_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
  v20 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v22 = UserEventServantPointMaster___c_TypeInfo;
  v23 = v21;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v22 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__long__o *)v22->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = UserEventServantPointMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_2 = (System_Func_object__long__o *)sub_1C372A4(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_2,
      v25,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0);
    v26 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v26->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v26->__9__3_2, (int32_t)_9__3_2, v27, v28);
  }
  v29 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v23,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_3117998 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v30 = (System_Func_object__int__o *)sub_1C372A4(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v30,
    (Il2CppObject *)v9,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)v30,
                                                               (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v31,
                                            (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *UserEventServantPointMaster__GetEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43E13 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
    sub_1C37058(&UserEventServantPointEntity_TypeInfo);
    byte_4C43E13 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


bool UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  UserEventServantPointMaster___c_c *v10; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v12; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4C43E17 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_1C37058(&System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    sub_1C37058(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_1C37058(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__);
    sub_1C37058(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__);
    sub_1C37058(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C37058(&UserEventServantPointMaster___c_TypeInfo);
    byte_4C43E17 = 1;
  }
  v7 = sub_1C372A4(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___) )
    return 0;
  list = this->fields.list;
  v10 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v10 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v10->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = UserEventServantPointMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v12, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_UserEventServantPointEntity__UserEventServantPointEntity__o *)_9__4_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
  v17 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v18,
           (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool UserEventServantPointMaster__TryGetEntity(
        UserEventServantPointMaster_o *this,
        UserEventServantPointEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43E14 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
    sub_1C37058(&UserEventServantPointEntity_TypeInfo);
    byte_4C43E14 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43E18 & 1) == 0 )
  {
    sub_1C37058(&UserEventServantPointMaster___c_TypeInfo);
    byte_4C43E18 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UserEventServantPointMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserEventServantPointMaster___c___ctor(UserEventServantPointMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserEventServantPointEntity_o *UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_0(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


int64_t UserEventServantPointMaster___c___GetBestServantPointEntity_b__3_2(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  if ( !svtPointEnt )
    sub_1C372B4(this);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        UserEventServantPointEntity_o *entity,
        const MethodInfo *method)
{
  return entity;
}


void UserEventServantPointMaster___c__DisplayClass3_0___ctor(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventServantPointMaster___c__DisplayClass3_0___GetBestServantPointEntity_b__1(
        UserEventServantPointMaster___c__DisplayClass3_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C43E19 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C43E19 = 1;
  }
  if ( !svtPointEnt )
    sub_1C372B4(this);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v7, 0) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}


void UserEventServantPointMaster___c__DisplayClass3_1___ctor(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserEventServantPointMaster___c__DisplayClass3_1___GetBestServantPointEntity_b__3(
        UserEventServantPointMaster___c__DisplayClass3_1_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass3_1_o *v4; // x20

  v4 = this;
  if ( (byte_4C43E1A & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4C43E1A = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C372B4(this);
  }
  return (int32_t)this[8].fields.svtMaster;
}


void UserEventServantPointMaster___c__DisplayClass4_0___ctor(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool UserEventServantPointMaster___c__DisplayClass4_0___IsAnyExist_b__1(
        UserEventServantPointMaster___c__DisplayClass4_0_o *this,
        UserEventServantPointEntity_o *svtPointEnt,
        const MethodInfo *method)
{
  UserEventServantPointMaster___c__DisplayClass4_0_o *v4; // x20
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4C43E1B & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C43E1B = 1;
  }
  if ( !svtPointEnt )
    sub_1C372B4(this);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v7, 0) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}