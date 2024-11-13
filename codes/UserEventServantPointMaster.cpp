void __fastcall UserEventServantPointMaster___ctor(UserEventServantPointMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16ED3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__,
      method,
      v2);
    byte_4B16ED3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster__GetBestServantPointEntity(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x21
  Il2CppObject *Instance; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x19
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v60; // x0
  System_Func_object__object__o *_9__3_0; // x22
  Il2CppObject *v62; // x23
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x20
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Func_object__bool__o *v74; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  UserEventServantPointMaster___c_c *v79; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x20
  System_Func_T__TResult__o *_9__3_2; // x21
  Il2CppObject *v82; // x22
  struct UserEventServantPointMaster___c_StaticFields *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v90; // x20
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Func_object__int__o *v94; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0

  if ( (byte_4B16ED4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, userId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_DataEntityBase___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v17, v18);
    sub_1BCA7E0(&System_Func_UserEventServantPointEntity__int__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Func_UserEventServantPointEntity__long__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__, v29, v30);
    sub_1BCA7E0(&Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__, v31, v32);
    sub_1BCA7E0(&Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__, v33, v34);
    sub_1BCA7E0(&UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__, v37, v38);
    sub_1BCA7E0(&UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v39, v40);
    sub_1BCA7E0(&UserEventServantPointMaster___c_TypeInfo, v41, v42);
    byte_4B16ED4 = 1;
  }
  v43 = sub_1BCAA2C(UserEventServantPointMaster___c__DisplayClass3_0_TypeInfo, userId, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_21;
  *(_QWORD *)(v43 + 16) = userId;
  *(_DWORD *)(v43 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0LL;
  v49 = sub_1BCAA2C(UserEventServantPointMaster___c__DisplayClass3_1_TypeInfo, v46, v47, v48);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___),
        !v49) )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v45);
  }
  *(_QWORD *)(v49 + 16) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)Instance, v50, v51, v52, v53, v54, v55);
  list = this->fields.list;
  v60 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo, v56);
    v60 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v60->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60, v56);
      v60 = UserEventServantPointMaster___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                 v56,
                                                 v57,
                                                 v58);
    System_Func_object__object____ctor(
      _9__3_0,
      v62,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_0__,
      0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v64, v65, v66, v67, v68, v69);
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v74 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_UserEventServantPointEntity__bool__TypeInfo,
                                         v71,
                                         v72,
                                         v73);
  System_Func_object__bool____ctor(
    v74,
    (Il2CppObject *)v43,
    Method_UserEventServantPointMaster___c__DisplayClass3_0__GetBestServantPointEntity_b__1__,
    0LL);
  v75 = System_Linq_Enumerable__Where_object_(
          v70,
          (System_Func_TSource__bool__o *)v74,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  v79 = UserEventServantPointMaster___c_TypeInfo;
  v80 = v75;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo, v76);
    v79 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_T__TResult__o *)v79->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v79->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v79, v76);
      v79 = UserEventServantPointMaster___c_TypeInfo;
    }
    v82 = (Il2CppObject *)v79->static_fields->__9;
    _9__3_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                             System_Func_UserEventServantPointEntity__long__TypeInfo,
                                             v76,
                                             v77,
                                             v78);
    System_Func_object__long____ctor(
      _9__3_2,
      v82,
      Method_UserEventServantPointMaster___c__GetBestServantPointEntity_b__3_2__,
      0LL);
    v83 = UserEventServantPointMaster___c_TypeInfo->static_fields;
    v83->__9__3_2 = (struct System_Func_UserEventServantPointEntity__long__o *)_9__3_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v83->__9__3_2, (int64_t)_9__3_2, v84, v85, v86, v87, v88, v89);
  }
  v90 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v80,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2F3B930 *)Method_System_Linq_Enumerable_OrderByDescending_UserEventServantPointEntity__long___);
  v94 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_UserEventServantPointEntity__int__TypeInfo, v91, v92, v93);
  System_Func_object__int____ctor(
    v94,
    (Il2CppObject *)v49,
    Method_UserEventServantPointMaster___c__DisplayClass3_1__GetBestServantPointEntity_b__3__,
    0LL);
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                               v90,
                                                               (System_Func_TSource__TKey__o *)v94,
                                                               (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_UserEventServantPointEntity__int___);
  return (UserEventServantPointEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                            v95,
                                            (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_UserEventServantPointEntity___);
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
  __int64 v10; // x2
  Il2CppObject *PK; // x1

  if ( (byte_4B16ED1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&UserEventServantPointEntity_TypeInfo, v9, v10);
    byte_4B16ED1 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo, userId);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&svtId);
  return (UserEventServantPointEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventServantPointMaster__IsAnyExist(
        UserEventServantPointMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  UserEventServantPointMaster___c_c *v32; // x0
  System_Func_object__object__o *_9__4_0; // x21
  Il2CppObject *v34; // x22
  struct UserEventServantPointMaster___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Func_object__bool__o *v46; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0

  if ( (byte_4B16ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_DataEntityBase___, userId, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___, v11, v12);
    sub_1BCA7E0(&System_Func_UserEventServantPointEntity__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, v17, v18);
    sub_1BCA7E0(&Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__, v19, v20);
    sub_1BCA7E0(&UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&UserEventServantPointMaster___c_TypeInfo, v23, v24);
    byte_4B16ED5 = 1;
  }
  v25 = sub_1BCAA2C(UserEventServantPointMaster___c__DisplayClass4_0_TypeInfo, userId, *(_QWORD *)&eventId, method);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    sub_1BCAA3C(v26, v27);
  *(_QWORD *)(v25 + 16) = userId;
  *(_DWORD *)(v25 + 24) = eventId;
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_DataEntityBase___) )
    return 0;
  list = this->fields.list;
  v32 = UserEventServantPointMaster___c_TypeInfo;
  if ( !UserEventServantPointMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEventServantPointMaster___c_TypeInfo, v28);
    v32 = UserEventServantPointMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__object__o *)v32->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32, v28);
      v32 = UserEventServantPointMaster___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__4_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__UserEventServantPointEntity__TypeInfo,
                                                 v28,
                                                 v29,
                                                 v30);
    System_Func_object__object____ctor(_9__4_0, v34, Method_UserEventServantPointMaster___c__IsAnyExist_b__4_0__, 0LL);
    static_fields = UserEventServantPointMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_DataEntityBase__UserEventServantPointEntity__o *)_9__4_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__4_0, (int64_t)_9__4_0, v36, v37, v38, v39, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__UserEventServantPointEntity___);
  v46 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_UserEventServantPointEntity__bool__TypeInfo,
                                         v43,
                                         v44,
                                         v45);
  System_Func_object__bool____ctor(
    v46,
    (Il2CppObject *)v25,
    Method_UserEventServantPointMaster___c__DisplayClass4_0__IsAnyExist_b__1__,
    0LL);
  v47 = System_Linq_Enumerable__Where_object_(
          v42,
          (System_Func_TSource__bool__o *)v46,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_UserEventServantPointEntity___);
  return System_Linq_Enumerable__Any_object_(
           v47,
           (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UserEventServantPointEntity___);
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
  __int64 v12; // x2
  Il2CppObject *PK; // x2

  if ( (byte_4B16ED2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__,
      entity,
      userId);
    sub_1BCA7E0(&UserEventServantPointEntity_TypeInfo, v11, v12);
    byte_4B16ED2 = 1;
  }
  if ( !UserEventServantPointEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEventServantPointEntity_TypeInfo, entity);
  PK = (Il2CppObject *)UserEventServantPointEntity__CreatePK(userId, eventId, svtId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventServantPointMaster__UserEventServantPointEntity__string__TryGetEntity__);
}


void __fastcall UserEventServantPointMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16ED6 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventServantPointMaster___c_TypeInfo, v1, v2);
    byte_4B16ED6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(UserEventServantPointMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  UserEventServantPointMaster___c_TypeInfo->static_fields->__9 = (struct UserEventServantPointMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEventServantPointMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16ED7 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventServantPointEntity_TypeInfo, entity, method);
    byte_4B16ED7 = 1;
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
    sub_1BCAA3C(this, 0LL);
  return svtPointEnt->fields.value;
}


UserEventServantPointEntity_o *__fastcall UserEventServantPointMaster___c___IsAnyExist_b__4_0(
        UserEventServantPointMaster___c_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B16ED8 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEventServantPointEntity_TypeInfo, entity, method);
    byte_4B16ED8 = 1;
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
  if ( (byte_4B16ED9 & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_0_o *)sub_1BCA7E0(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt,
                                                                   method);
    byte_4B16ED9 = 1;
  }
  if ( !svtPointEnt )
    sub_1BCAA3C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointEnt);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL) == v4->fields.userId
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
  if ( (byte_4B16EDA & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)sub_1BCA7E0(
                                                                   &Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__,
                                                                   svtPointEnt,
                                                                   method);
    byte_4B16EDA = 1;
  }
  if ( !svtPointEnt
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)v4->fields.svtMaster) == 0LL
    || (this = (UserEventServantPointMaster___c__DisplayClass3_1_o *)DataMasterBase_object__object__int___GetEntity(
                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                       svtPointEnt->fields.svtId,
                                                                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(this, svtPointEnt);
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
  if ( (byte_4B16EDB & 1) == 0 )
  {
    this = (UserEventServantPointMaster___c__DisplayClass4_0_o *)sub_1BCA7E0(
                                                                   &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                   svtPointEnt,
                                                                   method);
    byte_4B16EDB = 1;
  }
  if ( !svtPointEnt )
    sub_1BCAA3C(this, svtPointEnt);
  v5 = *(_OWORD *)&svtPointEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&svtPointEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, svtPointEnt);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL) == v4->fields.userId
      && svtPointEnt->fields.eventId == v4->fields.eventId;
}