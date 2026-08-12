void UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971727 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
    byte_5971727 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    409,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  __int64 v11; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *v19; // x20
  UserEventServantPointMaster___c_c *v20; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v23; // x23
  struct UserEventServantPointMaster___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  UserEventServantPointMaster___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  struct UserEventServantPointMaster___c_StaticFields *v37; // x9
  System_Func_object__long__o *_9__3_2; // x21
  Il2CppObject *v39; // x22
  struct UserEventServantPointMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x20
  System_Func_object__int__o *v48; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0

  if ( (byte_5971728 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_2213A60(&System_Func_UserEventServantPointEntity__int__TypeInfo);
    sub_2213A60(&System_Func_UserEventServantPointEntity__long__TypeInfo);
    sub_2213A60(&System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    sub_2213A60(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__);
    sub_2213A60(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__);
    sub_2213A60(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__);
    sub_2213A60(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
    sub_2213A60(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__);
    sub_2213A60(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
    sub_2213A60(&UserEventServantPointMaster___c_TypeInfo);
    byte_5971728 = 1;
  }
  v7 = sub_2213CCC(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_21;
  list = this->fields.list;
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___) )
    return 0;
  v11 = sub_2213CCC(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___),
        !v11) )
  {
LABEL_21:
    sub_2213CDC(Instance, v9);
  }
  *(_QWORD *)(v11 + 16) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)Instance, v12, v13, v14, v15, v16, v17);
  v19 = this->fields.list;
  v20 = UserEventServantPointMaster___c_TypeInfo;
  if ( !*(&UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo, v18);
    v20 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__3_0 = (System_Func_object__object__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v18);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__3_0,
      v23,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0);
    v24 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Func_UserEventServantPointEntity__UserEventServantPointEntity__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__3_0, (int32_t)_9__3_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
  v32 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0);
  v33 = System_Linq_Enumerable__Where_object_(
          v31,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v35 = UserEventServantPointMaster___c_TypeInfo;
  v36 = v33;
  if ( !*(&UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo, v34);
    v35 = UserEventServantPointMaster___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__3_2 = (System_Func_object__long__o *)v37->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, v34);
      v37 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__3_2 = (System_Func_object__long__o *)sub_2213CCC(System_Func_UserEventServantPointEntity__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__3_2,
      v39,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0);
    v40 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v40->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->__9__3_2, (int32_t)_9__3_2, v41, v42, v43, v44, v45, v46);
  }
  v47 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v36,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_3889234 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v48 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserEventServantPointEntity__int__TypeInfo);
  System_Func_object__int____ctor(
    v48,
    (Il2CppObject *)v11,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0);
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v47,
                                                               (System_Func_TSource__TKey__o *)v48,
                                                               (const MethodInfo_389AAF8 *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v49,
                                            (const MethodInfo_3881578 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
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

  if ( (byte_5971725 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
    sub_2213A60(&UserEventServantPointEntity_TypeInfo);
    byte_5971725 = 1;
  }
  if ( !*(&UserEventServantPointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo, userId);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_3F157EC *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *v12; // x20
  UserEventServantPointMaster___c_c *v13; // x0
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v16; // x22
  struct UserEventServantPointMaster___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_5971729 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
    sub_2213A60(&System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    sub_2213A60(&System_Func_UserEventServantPointEntity__bool__TypeInfo);
    sub_2213A60(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__);
    sub_2213A60(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__);
    sub_2213A60(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
    sub_2213A60(&UserEventServantPointMaster___c_TypeInfo);
    byte_5971729 = 1;
  }
  v7 = sub_2213CCC(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  list = this->fields.list;
  *(_QWORD *)(v7 + 16) = userId;
  *(_DWORD *)(v7 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___) )
    return 0;
  v12 = this->fields.list;
  v13 = UserEventServantPointMaster___c_TypeInfo;
  if ( !*(&UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo, v11);
    v13 = UserEventServantPointMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__4_0 = (System_Func_object__object__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v11);
      static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_UserEventServantPointEntity__UserEventServantPointEntity__TypeInfo);
    System_Func_object__object____ctor(_9__4_0, v16, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0);
    v17 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Func_UserEventServantPointEntity__UserEventServantPointEntity__o *)_9__4_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__4_0, (int32_t)_9__4_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_UserEventServantPointEntity__UserEventServantPointEntity___);
  v25 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserEventServantPointEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v7,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0);
  v26 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v26,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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

  if ( (byte_5971726 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
    sub_2213A60(&UserEventServantPointEntity_TypeInfo);
    byte_5971726 = 1;
  }
  if ( !*(&UserEventServantPointEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo, entity);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597172A & 1) == 0 )
  {
    sub_2213A60(&UserEventServantPointMaster___c_TypeInfo);
    byte_597172A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserEventServantPointMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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
  if ( (byte_597172B & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597172B = 1;
  }
  if ( !svtPointEnt )
    sub_2213CDC(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointEnt);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0) == v4->fields.userId
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
  if ( (byte_597172C & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    byte_597172C = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(this, svtPointEnt);
  }
  return *((_DWORD *)this + 52);
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
  if ( (byte_597172D & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_597172D = 1;
  }
  if ( !svtPointEnt )
    sub_2213CDC(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointEnt);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v7, 0) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}