void UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8263 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
    byte_4CC8263 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


UserEventServantPointEntity_o *UserEventServantPointMaster__GetBestServantPointEntity(
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
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  UserEventServantPointMaster___c_c *v18; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v20; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__bool__o *v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  UserEventServantPointMaster___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Func_object__long__o *_9__3_2; // x21
  Il2CppObject *v34; // x22
  struct UserEventServantPointMaster___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x20
  System_Func_object__int__o *v43; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_4CC8264 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_1C713B0(&System_Func_UserEventServantPointEntity__int__TypeInfo);
    sub_1C713B0(&System_Func_UserEventServantPointEntity__long__TypeInfo);
    sub_1C713B0(&System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    sub_1C713B0(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__);
    sub_1C713B0(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__);
    sub_1C713B0(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__);
    sub_1C713B0(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C713B0(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__);
    sub_1C713B0(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
    sub_1C713B0(&UserEventServantPointMaster___c_TypeInfo);
    byte_4CC8264 = 1;
  }
  v7 = sub_1C715FC(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___) )
    return 0;
  v10 = sub_1C715FC(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___),
        !v10) )
  {
LABEL_21:
    sub_1C71608(Instance, v9);
  }
  *(_QWORD *)(v10 + 16) = Instance;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)Instance, v11, v12, v13, v14, v15, v16);
  list = this->fields.list;
  v18 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v18 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v18->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = UserEventServantPointMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v20,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserEventServantPointEntity__UserEventServantPointEntity__o *)_9__3_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
  v29 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v31 = UserEventServantPointMaster___c_TypeInfo;
  v32 = v30;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo);
    v31 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__long__o *)v31->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = UserEventServantPointMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__3_2 = (System_Func_object__long__o *)sub_1C715FC(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_2,
      v34,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0);
    v35 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v35->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v35->__9__3_2, (int32_t)_9__3_2, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v32,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_317AF28 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v43 = (System_Func_object__int__o *)sub_1C715FC(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v43,
    (Il2CppObject *)v10,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0);
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)v43,
                                                               (const MethodInfo_318A150 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v44,
                                            (const MethodInfo_31738EC *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
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

  if ( (byte_4CC8261 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
    sub_1C713B0(&UserEventServantPointEntity_TypeInfo);
    byte_4CC8261 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_340D938 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


bool UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  UserEventServantPointMaster___c_c *v11; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v13; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_object__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4CC8265 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_1C713B0(&System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    sub_1C713B0(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_1C713B0(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__);
    sub_1C713B0(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__);
    sub_1C713B0(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C713B0(&UserEventServantPointMaster___c_TypeInfo);
    byte_4CC8265 = 1;
  }
  v7 = sub_1C715FC(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___) )
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
    _9__4_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v13, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_UserEventServantPointEntity__UserEventServantPointEntity__o *)_9__4_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
  v22 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0);
  v23 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v23,
           (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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

  if ( (byte_4CC8262 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
    sub_1C713B0(&UserEventServantPointEntity_TypeInfo);
    byte_4CC8262 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC8266 & 1) == 0 )
  {
    sub_1C713B0(&UserEventServantPointMaster___c_TypeInfo);
    byte_4CC8266 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, 0);
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
  if ( (byte_4CC8267 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC8267 = 1;
  }
  if ( !svtPointEnt )
    sub_1C71608(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v7, 0) == v4->fields.userId
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
  if ( (byte_4CC8268 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_4CC8268 = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_1C71608(this, svtPointEnt);
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
  if ( (byte_4CC8269 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CC8269 = 1;
  }
  if ( !svtPointEnt )
    sub_1C71608(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49301476(&v7, 0) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}